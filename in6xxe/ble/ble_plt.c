/**
 ****************************************************************************************
 *
 * @file inb_plt.c
 *
 * @brief Porting to support BLE statck source code 
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2021
 *
 *
 ****************************************************************************************
 */
#include "in_config.h"

#include "stdint.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "stdbool.h"
#include "stdarg.h"

#include "in_arm.h"
#include "in_irq.h"
#include "in_debug.h"

#include "./hal/hal_uart.h"
#include "./hal/hal_smem.h"
#include "./hal/hal_clk.h"
#if (CFG_BLE_DEV_PAIR_MODE & 0x2)
#include "./hal/hal_ecc.h"
#endif

#if CFG_PM_EN
#include "./hal/hal_power.h"
#endif

#include "./ble/in_ble_api.h"

#if CFG_PM_EN
static struct pm_module g_ble_pm;
#endif
#define CFG_HCI 1
/**********************************************************************
*
*
*	LOCAL VARIABLES
*
*
**********************************************************************/

#ifdef ASSERT_DISPLAY
uint8_t assert_display_flag=0;
char assert_file[16]={0}; 
int assert_line=0;
int assert_param0=0;
int assert_param1=0;
#endif


/**********************************************************************
*
*
*	BLE OS Functions
*
*
**********************************************************************/

static void *ble_mutex_create(void)
{
    return NULL;
}

static void ble_mutex_wait(void *hdl, uint32_t time_ms) __attribute__((section("BLE_RO")));
static void ble_mutex_wait(void *hdl, uint32_t time_ms)
{
}

static void ble_mutex_release(void *hdl) __attribute__((section("BLE_RO")));
static void ble_mutex_release(void *hdl)
{
}

static void ble_mutex_delete(void *hdl)
{
}

static void *ble_semaphore_create(void) __attribute__((section("BLE_RO")));
static void *ble_semaphore_create(void)
{
    return NULL;
}

static void ble_semaphore_wait(void *hdl, uint32_t time_ms) __attribute__((section("BLE_RO")));
static void ble_semaphore_wait(void *hdl, uint32_t time_ms)
{
}

static void ble_semaphore_release(void *hdl) __attribute__((section("BLE_RO")));
static void ble_semaphore_release(void *hdl)
{
}

static void ble_semaphore_delete(void *hdl) __attribute__((section("BLE_RO")));
static void ble_semaphore_delete(void *hdl)
{
}

/**********************************************************************
*
*
*	BLE STACK
*
*
**********************************************************************/

typedef struct {
	void *hdl_bs;
} ble_stack_t;
typedef struct {
	void *hdl_bs;
	//void *h_uart;

#if !CFG_NO_OS
	osThreadId hci_tid;
#endif	// !CFG_NO_OS

	//hci_cb_t read_cb;
	//hci_cb_t write_cb;
} hci_t; 
#if CFG_HCI
static hci_t g_hci __attribute__((section("BLE_RW"))); ;
#endif
static ble_stack_t g_ble_stack;
static ble_stack_cb_t g_ble_stack_cb = {0};

void ble_stack_cb_set(ble_stack_cb_t *cb)
{
    g_ble_stack_cb = *cb;
}

static void ble_stack_task(const void *arg) __attribute__((section("BLE_RO")));
static void ble_stack_task(const void *arg)
{
#if 0
	ble_stack_t *p_ble = (ble_stack_t *)arg;
	PRINTD(DBG_TRACE, "BLE STACK: thread id = 0x%08x\n", osThreadGetId());

	while (1) {

		osEvent evt;

		evt = osSignalWait(0, osWaitForever);
		// avoid os fifo overflow error...		 
		//ble_irq_mask();
		//ble_isr_signal = 0;
		//ble_irq_unmask();

		if (evt.status != osEventSignal) { 
			PRINTD(DBG_ERR, "[Stack Task]: Failed wait signal, status = %08x\n", evt.status);
			break;
		}

		in_ble_stack_handler(p_ble->hdl_bs);
	}

	osThreadTerminate(p_ble->bs_tid);
#endif
}

static int ble_stack_task_init(void *arg)
{
	ble_stack_t *p_ble = (ble_stack_t *)&g_ble_stack;

	p_ble->hdl_bs = arg;

	return 1;
}

static int ble_event_task_init(void)
{
    return 0;
}

static void ble_event_signal(void) 
{
}

static void ble_stack_signal(void)  __attribute__((section("BLE_RO")));
static void ble_stack_signal(void) 
{
    if (g_ble_stack_cb.stk_sig != NULL) {
        g_ble_stack_cb.stk_sig();
    }
}


/**********************************************************************
*
*
*	BLE HCI
*
*
**********************************************************************/

static void *ble_hci_init(void *arg)
{
#if CFG_HCI 
	hci_t *p_hci = &g_hci;

	p_hci->hdl_bs = arg;

	return (void *)p_hci;
#else
	return NULL;
#endif
}

static void ble_hci_deinit(void *hdl)
{
}

static void ble_hci_write(void *hdl, uint8_t *buffer, uint16_t buffer_len, void (*callback)(void *arg, uint8_t status), void *arg)
{
	return;
}

static void ble_hci_read(void *hdl, uint8_t *buffer, uint16_t buffer_len, void(*callback)(void *arg, uint8_t status), void *arg)
{
	return;
}

static void ble_hci_flow_on(void *hdl)
{
}

static void ble_hci_flow_off(void *hdl)
{
}

/**********************************************************************
*
*
*	BLE ECC
*
*
**********************************************************************/
typedef struct ec_curve_data_
{
   short size;										// Bytes in curve
   unsigned char m[32];    		// Prime modulus, also known as "p" field of prime curves
   unsigned char mprime[32];   	// Montgomery residue constant m' of m: ((r r^-1 - 1)/m
   unsigned char mrsqr[32];    	// Montgomery residue conversion constant of m: r^2 mod m
   unsigned char x[32];    		// X coordinate of the base point G
   unsigned char y[32];    		// Y coordinate of the base point G
   unsigned char z[32];    		// Z coordinate of the base point G
   unsigned char a[32];    		// Curve domain parameter 'a'
   unsigned char b[32];    		// Curve domain parameter 'b'
   unsigned char n[32];    		// Prime order
   unsigned char ninv[32];   		// Modular inverse of r: (1/r) mod n
   unsigned char nrsqr[32];   		// Montgomery residue conversion constant of n: r^2 mod n
   char *comment;                  					// a short description of the curve
} EC_CURVE_DATA;

#if (CFG_BLE_DEV_PAIR_MODE & 0x2)
//
// Note; Legacy may use Curve 192 
//
#if 0
static const EC_CURVE_DATA SEC192R1 = {
	24,
	{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},	// modulus m (p)
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},	// m'
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},	// r^2 mod m
	{0x18,0x8D,0xA8,0x0E,0xB0,0x30,0x90,0xF6,0x7C,0xBF,0x20,0xEB,0x43,0xA1,0x88,0x00,0xF4,0xFF,0x0A,0xFD,0x82,0xFF,0x10,0x12},	// x
	{0x07,0x19,0x2B,0x95,0xFF,0xC8,0xDA,0x78,0x63,0x10,0x11,0xED,0x6B,0x24,0xCD,0xD5,0x73,0xF9,0x77,0xA1,0x1E,0x79,0x48,0x11},	// y
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},	// z
	{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC},	// A
	{0x64,0x21,0x05,0x19,0xE5,0x9C,0x80,0xE7,0x0F,0xA7,0xE9,0xAB,0x72,0x24,0x30,0x49,0xFE,0xB8,0xDE,0xEC,0xC1,0x46,0xB9,0xB1},	// B
	{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x99,0xDE,0xF8,0x36,0x14,0x6B,0xC9,0xB1,0xB4,0xD2,0x28,0x31},	// prime order n
	{0x8F,0x63,0xC8,0x41,0xCC,0x4C,0xC3,0xF7,0x9E,0x9E,0x1A,0x9C,0xB7,0x9D,0x94,0x8E,0x88,0x26,0x72,0x07,0x0D,0xDB,0xCF,0x2F},  // 1/r mod n
	{0x28,0xBE,0x56,0x77,0xEA,0x05,0x81,0xA2,0x46,0x96,0xEA,0x5B,0xBB,0x3A,0x6B,0xEE,0xCE,0x66,0xBA,0xCC,0xDE,0xB3,0x59,0x61},  // r^2 mod n
	"SECP_192R1",
};
#endif

//#if CFG_FPGA
#if 1
static const EC_CURVE_DATA SEC256R1 __attribute__((section("BLE_RODATA"))) = {
	32,
	{0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},	// modulus m (p)
	{0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},	// m'
	{0x00,0x00,0x00,0x04,0xFF,0xFF,0xFF,0xFD,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFB,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03},	// r^2 mod m
	{0x6B,0x17,0xD1,0xF2,0xE1,0x2C,0x42,0x47,0xF8,0xBC,0xE6,0xE5,0x63,0xA4,0x40,0xF2,0x77,0x03,0x7D,0x81,0x2D,0xEB,0x33,0xA0,0xF4,0xA1,0x39,0x45,0xD8,0x98,0xC2,0x96},	// x
	{0x4F,0xE3,0x42,0xE2,0xFE,0x1A,0x7F,0x9B,0x8E,0xE7,0xEB,0x4A,0x7C,0x0F,0x9E,0x16,0x2B,0xCE,0x33,0x57,0x6B,0x31,0x5E,0xCE,0xCB,0xB6,0x40,0x68,0x37,0xBF,0x51,0xF5},	// y
	{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},	// z
	{0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC},	// A
	{0x5A,0xC6,0x35,0xD8,0xAA,0x3A,0x93,0xE7,0xB3,0xEB,0xBD,0x55,0x76,0x98,0x86,0xBC,0x65,0x1D,0x06,0xB0,0xCC,0x53,0xB0,0xF6,0x3B,0xCE,0x3C,0x3E,0x27,0xD2,0x60,0x4B},	// B
	{0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xBC,0xE6,0xFA,0xAD,0xA7,0x17,0x9E,0x84,0xF3,0xB9,0xCA,0xC2,0xFC,0x63,0x25,0x51},	// prime order n
	{0x60,0xD0,0x66,0x33,0xA9,0xD6,0x28,0x1C,0x50,0xFE,0x77,0xEC,0xC5,0x88,0xC6,0xF6,0x48,0xC9,0x44,0x08,0x7D,0x74,0xD2,0xE4,0xCC,0xD1,0xC8,0xAA,0xEE,0x00,0xBC,0x4F},  // 1/r mod n
	{0x66,0xE1,0x2D,0x94,0xF3,0xD9,0x56,0x20,0x28,0x45,0xB2,0x39,0x2B,0x6B,0xEC,0x59,0x46,0x99,0x79,0x9C,0x49,0xBD,0x6F,0xA6,0x83,0x24,0x4C,0x95,0xBE,0x79,0xEE,0xA2},  // r^2 mod n
	"SECP_256R1",
};
#else

// 
// Curve data in the ROM
//
extern const EC_CURVE_DATA SEC256R1;
#endif

static uint8_t Rx[32], Ry[32];
static volatile int hw_ecc_finish = 0;
static int hw_ecc_status = 0;

static void ble_ecc_int_callback_fun(int status)
{
	hw_ecc_finish = 1;
	hw_ecc_status = status;
} 
#endif

static int ble_ecc_pub_key_async_start(const uint8_t *secret_key)
{
#if (CFG_BLE_DEV_PAIR_MODE & 0x2)
	const EC_CURVE_DATA *curve = &SEC256R1;
	uint8_t zero[curve->size];
	uint8_t priv_key[32];

	// Need to reverse order
	for (uint32_t i = 0, j = 31; i < 32; i++) {
		priv_key[i] = secret_key[j--];
	}

	int res = hal_ecc_open(IRQ_PRI_Normal);
	if (res != ECC_ERR_OK)
		goto out; 
		
	res = hal_ecc_pmult_non_block(curve->size, curve->x, curve->y, curve->a, zero, curve->m, curve->mprime, curve->mrsqr, priv_key, Rx, Ry, ble_ecc_int_callback_fun);
	
out:

	return res;

#else

	return 0;

#endif
}

static int ble_ecc_ecdh_key_async_start(const uint8_t *secret_key, const uint8_t* pub_x, const uint8_t* pub_y)
{
#if (CFG_BLE_DEV_PAIR_MODE & 0x2)
	const EC_CURVE_DATA *curve = &SEC256R1;
	uint8_t zero[curve->size];
	uint8_t priv_key[32];
	uint8_t pubkey_x[32], pubkey_y[32];

	// Need to reverse order
	for (uint32_t i = 0, j = 31; i < 32; i++) {
		priv_key[i] = secret_key[j--];
	}
	for (uint32_t i = 0, j = 31; i < 32; i++) {
		pubkey_x[i] = pub_x[j--];
	}
	for (uint32_t i = 0, j = 31; i < 32; i++) {
		pubkey_y[i] = pub_y[j--];
	}

	int res = hal_ecc_open(IRQ_PRI_Normal);
	if (res != ECC_ERR_OK)
		goto out; 
		
	res = hal_ecc_pmult_non_block(curve->size, pubkey_x, pubkey_y, curve->a, zero, curve->m, curve->mprime, curve->mrsqr, priv_key, Rx, Ry, ble_ecc_int_callback_fun);

out:

	return res;
#else

	return 0;

#endif
}

static int ble_ecc_check_finish(void)
{
#if (CFG_BLE_DEV_PAIR_MODE & 0x2)
	return hw_ecc_finish;
#else
	return 0;
#endif
}

static int ble_ecc_key_async_end(uint8_t *key_x, uint8_t *key_y)
{
#if (CFG_BLE_DEV_PAIR_MODE & 0x2)

	hal_ecc_close();
    hw_ecc_finish = 0;

	if (hw_ecc_status == ECC_ERR_OK) {

		for (uint32_t i = 0; i < 32; i++) {
			key_x[i] = Rx[i];
			key_y[i] = Ry[i];
		}
	
		// Need to reverse order
		for (uint32_t i = 0, j = 31; i < 16; i++) {
			uint8_t tmp;
			tmp = key_x[i];
			key_x[i] = key_x[j];
			key_x[j] = tmp;
			j--;
		}

		for (uint32_t i = 0, j = 31; i < 16; i++) {
			uint8_t tmp;
			tmp = key_y[i];
			key_y[i] = key_y[j];
			key_y[j] = tmp;
			j--;
		}
	}

	return hw_ecc_status;
#else

	return 0;

#endif
}

int ble_ecc_valid_point(uint8_t *Px, uint8_t *Py)
{
#if (CFG_BLE_DEV_PAIR_MODE & 0x2)
	const EC_CURVE_DATA *curve = &SEC256R1;
	uint8_t point_x[32], point_y[32];

    for (int i=0; i<32; i++) {
        point_x[i] = Px[31-i];
        point_y[i] = Py[31-i];
    }

    hal_ecc_open(IRQ_PRI_Normal);

	int rc = hal_ecc_pver_block(curve->size, point_x, point_y, curve->a, curve->b, curve->m, curve->mprime, curve->mrsqr, 1000);

	hal_ecc_close();

	if (rc != ECC_ERR_OK) { 
		return 0;
	}

	return 1;
#else
	return 0;
#endif
}

/**********************************************************************
*
*
*	BLE ISR
*
*
**********************************************************************/

#if 0
static uint32_t ble_pri __attribute__((section("BLE_RW"))) = 0 ;
static uint32_t base_pri __attribute__((section("BLE_RW")));
static uint32_t ble_lock __attribute__((section("BLE_RW"))) = 0;
static int ble_isr_signal __attribute__((section("BLE_RW"))) = 0;

static void ble_irq_mask(void) __attribute__((section("BLE_RO")));
static void ble_irq_mask(void)
{
	/// priority masking
	if (__get_IPSR() == 0U) {	/// not in interrupt 
		if (ble_lock == 0) {
			ble_pri = NVIC_GetPriority(Ble_IRQn);
			base_pri = __get_BASEPRI();

			NVIC_SetPriority(Ble_IRQn, IRQ_PRI_Lowest);
			__set_BASEPRI(IRQ_PRI_Lowest << (8 - __NVIC_PRIO_BITS));
		}
		ble_lock++;
	}
}

static void ble_irq_unmask(void) __attribute__((section("BLE_RO")));
static void ble_irq_unmask(void)
{
	__set_PRIMASK(primask);

	/// priority masking
	if (__get_IPSR() == 0U) {	/// not in interrupt 
		ble_lock--;
		if (ble_lock == 0) {
			NVIC_SetPriority(Ble_IRQn, ble_pri);
			__set_BASEPRI(base_pri << (8 - __NVIC_PRIO_BITS));
		}
	}
}
#else


static uint32_t ble_irq_mask(void) __attribute__((section("BLE_RO")));
static uint32_t ble_irq_mask(void)
{
	return disable_irq();
}

static void ble_irq_unmask(uint32_t primask) __attribute__((section("BLE_RO")));
static void ble_irq_unmask(uint32_t primask)
{
	__set_PRIMASK(primask);
}
#endif

static void ble_irq_enable(void) __attribute__((section("BLE_RO")));
static void ble_irq_enable(void)
{
	NVIC_SetPriority(Ble_IRQn, IRQ_PRI_RealTime);
	NVIC_EnableIRQ(Ble_IRQn);
}

static void ble_irq_disable(void)
{
	NVIC_DisableIRQ(Ble_IRQn);
}
void ble_isr_cb(void* arg) __attribute__((section("ISR")));
void ble_isr_cb(void* arg)
{
#if CFG_HCI
	hci_t *p_hci = &g_hci;
	void *hdl = p_hci->hdl_bs;
#else
	ble_stack_t *p_ble = (ble_stack_t *)&g_ble_stack;
	void *hdl = p_ble->hdl_bs;
#endif

	in_ble_isr(hdl);
}

/**********************************************************************
*
*
*	BLE Support Functions
*
*
**********************************************************************/
static void ble_clock_init(void)
{
	/// enable ble clocks
	hal_clk_ble_en(1);

	/// reset sleep clock  
	clk_reset_ble_sleep_clk();
}

static uint32_t ble_get_em_size(void)
{
	uint32_t offset = (CFG_SMEM_BLE>>16) & 0xFFFF;
	uint32_t size = CFG_SMEM_BLE & 0xFFFF; 

	/// Clear the Ble exchange memory
	memset((void *)(SMEM_AHB_BASE + offset), 0, size);
	
	return size;
}

static uint32_t ble_rand(void) __attribute__((section("BLE_RO")));
static uint32_t ble_rand(void)
{
	return rand();
}

static uint32_t ble_slow_clk(void) __attribute__((section("BLE_RO")));
static uint32_t ble_slow_clk(void)
{
	return hal_clk_32k_get();
}

static void ble_adv_ignore_timestamp(int en) __attribute__((section("BLE_RO")));
static void ble_adv_ignore_timestamp(int en)
{
	sdr_ignore_timestamp(en);
}

/**********************************************************************
*
*
*	BLE Trace Functions
*
*
**********************************************************************/

static void *ble_trace_uart_init(void)
{
	void *h_uart = NULL;

#if CFG_BLE_PARAM_TRACE_EN
	void *h_uart = NULL;
	uart_init_t init = {0};
	init.baud_rate = CFG_BLE_PARAM_TRACE_UART_BAUD;
	init.data_len = 8;
	init.stop_bit = UART_STOP_1BIT;
	init.prio = IRQ_PRI_High;
	h_uart = hal_uart_open(CFG_BLE_PARAM_TRACE_UART_PORT, &init);
#endif	

	return h_uart;
}

static void ble_trace_uart_deinit(void *hdl)
{
#if CFG_BLE_PARAM_TRACE_EN
	hal_uart_close(hdl);
#endif
}

static int ble_trace_uart_write(void *hdl, uint8_t *buffer, uint16_t buffer_len, void *arg, void (*callback)(void *, int, int )) __attribute__((section("BLE_RO")));
static int ble_trace_uart_write(void *hdl, uint8_t *buffer, uint16_t buffer_len, void *arg, void (*callback)(void *, int, int ))
{
	int err = UART_ERR_CFG;

#if CFG_BLE_PARAM_TRACE_EN
	err = hal_uart_xmit_intr(hdl, buffer, buffer_len, arg, callback);
#endif

	return err;
}

static int ble_trace_uart_read(void *hdl, uint8_t *buffer, uint16_t buffer_len, void *arg, void(*callback)(void *, int, int)) __attribute__((section("BLE_RO")));
static int ble_trace_uart_read(void *hdl, uint8_t *buffer, uint16_t buffer_len, void *arg, void(*callback)(void *, int, int))
{
	int err = UART_ERR_CFG;

#if CFG_BLE_PARAM_TRACE_EN
	err = hal_uart_rcvd_intr_hci(hdl, buffer, buffer_len,arg, callback);
#endif

	return err;
}

/**********************************************************************
*
*
*	BLE Assert Functions
*
*
**********************************************************************/

static void ble_assert_error(const char *file, int line) __attribute__((section("BLE_RO")));
static void ble_assert_error(const char *file, int line)
{
	//PRINTD(DBG_ERR, "Assert Error, file = %s, line = %d\r\n", file, line);
	printk("Assert Error, file = %s, line = %d\r\n", file, line);
	
	// TODO
#ifdef ASSERT_DISPLAY
	if(assert_display_flag == 0)
	{
		strncpy(assert_file,file,16);
		assert_line=line;
		assert_param0=0xffff;
		assert_param1=0xffff;
		assert_display_flag=1;
	}
#endif
}

static void ble_assert_param(const char *file, int line, int param0, int param1) __attribute__((section("BLE_RO")));
static void ble_assert_param(const char *file, int line, int param0, int param1)
{
	//PRINTD(DBG_ERR, "Assert Param, file = %s, line = %d, param0 = %d, param1 = %d\r\n", file, line, param0, param1);
	printk("Assert Param, file = %s, line = %d, param0 = %d, param1 = %d\r\n", file, line, param0, param1);

	// TODO
#ifdef ASSERT_DISPLAY
	if(assert_display_flag == 0)
	{
		strncpy(assert_file,file,16);
		assert_line=line;
		assert_param0=param0;
		assert_param1=param1;
		assert_display_flag=1;
	}
#endif
}

static void ble_assert_warn(const char *file, int line, int param0, int param1) __attribute__((section("BLE_RO")));
static void ble_assert_warn(const char *file, int line, int param0, int param1)
{
	PRINTD(DBG_ERR, "Assert Warn, file = %s, line = %d, param0 = %d, param1 = %d\r\n", file, line, param0, param1);

#ifdef ASSERT_DISPLAY
	if(assert_display_flag == 0)
	{
		strncpy(assert_file,file,16);
		assert_line=line;
		assert_param0=param0;
		assert_param1=param1;
		assert_display_flag=1;
	}
#endif
	// TODO
}

/**********************************************************************
*
*
*	BLE RAM Functions
*
*
**********************************************************************/

static void osc_en_irq_cb(void *arg) __attribute__((section("ISR")));
static void osc_en_irq_cb(void *arg)
{
	/// recover???
	in_ble_stack_wake(arg);
}

static void ble_power_register(void *arg, int (*pow_state)(void *arg, uint32_t *duration), void (*pow_down)(void *arg, uint32_t duration), void (*pow_up)(void * arg))
{
#if CFG_PM_EN
	g_ble_pm.arg = arg;
	g_ble_pm.power_state = pow_state;
	g_ble_pm.power_down = pow_down;
	g_ble_pm.power_up = pow_up;
	hal_pm_reg_mod(&g_ble_pm);

	/// register with OSC enable interrupt
	if (CFG_BLE_OSC_INT_EN)
		hal_osc_xo_isr_register(OSC_XO_IRQ_OSC_EN, IRQ_PRI_Normal, arg, osc_en_irq_cb);

#endif
}

/**********************************************************************
*
*
*	BLE Platform Functions
*
*
**********************************************************************/

plt_isr_fun_t g_plt_isr_fun = 
{
	ble_rand,
	ble_slow_clk,

	ble_irq_mask,
	ble_irq_unmask,
	ble_irq_enable,

	ble_mutex_wait,
	ble_mutex_release,

	ble_semaphore_create,
	ble_semaphore_delete,
	ble_semaphore_wait,
	ble_semaphore_release,

	ble_event_signal,
	ble_stack_signal,

	ble_assert_error,
	ble_assert_param,
	ble_assert_warn,

	ble_trace_uart_write,
	ble_trace_uart_read,

	ble_adv_ignore_timestamp,
};

plt_fun_t g_plt_fun = {
	ble_ecc_pub_key_async_start,
	ble_ecc_ecdh_key_async_start,
	ble_ecc_check_finish,
	ble_ecc_key_async_end,
	ble_ecc_valid_point,

	ble_clock_init,
	ble_get_em_size,

	ble_irq_disable,
	ble_stack_task_init,
	ble_event_task_init,
	ble_mutex_create,
	ble_mutex_delete,

	ble_hci_init,
	ble_hci_deinit,
	ble_hci_write,
	ble_hci_read,
	ble_hci_flow_on,
	ble_hci_flow_off,

	ble_trace_uart_init,
	ble_trace_uart_deinit,

	ble_power_register,
};


