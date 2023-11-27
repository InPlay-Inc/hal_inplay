;/**************************************************************************//**
; * @file     startup_ARMCM4.s
; * @brief    CMSIS Core Device Startup File for
; *           ARMCM4 Device Series
; * @version  V1.08
; * @date     23. November 2012
; *
; * @note
; *
; ******************************************************************************/
;/* Copyright (c) 2011 - 2012 ARM LIMITED
;
;   All rights reserved.
;   Redistribution and use in source and binary forms, with or without
;   modification, are permitted provided that the following conditions are met:
;   - Redistributions of source code must retain the above copyright
;     notice, this list of conditions and the following disclaimer.
;   - Redistributions in binary form must reproduce the above copyright
;     notice, this list of conditions and the following disclaimer in the
;     documentation and/or other materials provided with the distribution.
;   - Neither the name of ARM nor the names of its contributors may be used
;     to endorse or promote products derived from this software without
;     specific prior written permission.
;   *
;   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
;   AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
;   IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
;   ARE DISCLAIMED. IN NO EVENT SHALL COPYRIGHT HOLDERS AND CONTRIBUTORS BE
;   LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
;   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
;   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
;   INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
;   CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
;   ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
;   POSSIBILITY OF SUCH DAMAGE.
;   ---------------------------------------------------------------------------*/
;/*
;//-------- <<< Use Configuration file >>> ------------------
;*/
#include "in_config.h"

; <h> Stack Configuration
;   <o> Stack Size (in Bytes) <0x0-0xFFFFFFFF:8>
; </h>

;Stack_Size      EQU     0x00000400
Stack_Size      EQU     CFG_STACK_SIZE

                AREA    STACK, NOINIT, READWRITE, ALIGN=3
Stack_Mem       SPACE   Stack_Size
__initial_sp


; <h> Heap Configuration
;   <o>  Heap Size (in Bytes) <0x0-0xFFFFFFFF:8>
; </h>

;Heap_Size       EQU     0x00000C00
Heap_Size       EQU     CFG_HEAP_SIZE

                AREA    HEAP, NOINIT, READWRITE, ALIGN=3
__heap_base
Heap_Mem        SPACE   Heap_Size
__heap_limit


                PRESERVE8
                THUMB

; Vector Table Mapped to Address 0 at Reset

                AREA    RESET, DATA, READONLY
                EXPORT  __Vectors
                EXPORT  __Vectors_End
                EXPORT  __Vectors_Size

__Vectors       DCD     __initial_sp              	; Top of Stack
                DCD     Reset_Handler             ; Reset Handler
                DCD     NMI_Handler               	; NMI Handler
                DCD     HardFault_Handler        ; Hard Fault Handler
                DCD     MemManage_Handler     ; MPU Fault Handler
                DCD     BusFault_Handler         ; Bus Fault Handler
                DCD     UsageFault_Handler      ; Usage Fault Handler
                DCD     0                         		; Reserved
                DCD     0                         		; Reserved
                DCD     0                        		; Reserved
                DCD     0                         		; Reserved
                DCD     SVC_Handler               ; SVCall Handler
                DCD     DebugMon_Handler       ; Debug Monitor Handler
                DCD     0                         		; Reserved
                DCD     PendSV_Handler          ; PendSV Handler
                DCD     SysTick_Handler				; SysTick_Handler          ; SysTick Handler

                ; External Interrupts
                DCD     DMA0_Handler 				;  0:  DMA0
                DCD     DMA1_Handler 				;  1:  DMA1
                DCD     KB_Handler 					;  2:  Keyboard
                DCD     Hash_Handler 				;  3:  Hash
                DCD     Aes_Handler 					;  4:  Aes
                DCD     Null_Handler 					;  5:  
                DCD     Null_Handler 					;  6:  
                DCD     AHB_Trig_Handler			;  7:	Trigger  
                DCD     TMR0_Add_Handler 					;  8:  
                DCD     TMR1_Add_Handler 					;  9:  
                DCD     TMR2_Add_Handler 					;  10:  
                DCD     TMR3_Add_Handler					;  11:  
                DCD     TMR_Smem_Handler					;  12:  
                DCD     SSPI1_Handler				;  13:  SPI Slave 
                DCD     UART0_Handler				;  14:  UART0
                DCD     UART1_Handler				;  15:  UART1
                DCD     MSPI0_Handler 				;  16:  SPI0
                DCD     MSPI1_Handler 				;  17:  SPI1
                DCD     Efuse_Handler				;  18:  Efuse
                DCD     SSPI0_Handler				;  19:  SPI SLAVE
                DCD     I2C0_Handler					;  20:  I2C0
                DCD     I2C1_Handler					;  21:  I2C1
                DCD     MI2S_Handler				;  22:  I2S (MASTER)
                DCD     SI2S_Handler					;  23:  I2S (SLAVE)
                DCD     Ecc_Handler					;  24:  ECC 
                DCD     Null_Handler					;  25:  Reserved
                DCD     TMR0_Handler				;  26:  Timer_0
                DCD     TMR1_Handler				;  27:  Timer_1
                DCD     TMR2_Handler				;  28:  Timer_2
                DCD     TMR3_Handler				;  29:  Timer_3
                DCD     TMR4_Handler				;  30:  Timer_4
                DCD     TMR5_Handler				;  31:  Timer_5
                DCD     TMR0_Misc_Handler		;  32:  Timer_0 misc interrupt
                DCD     TMR1_Misc_Handler		;  33:  Timer_1 misc interrupt
                DCD     Aon_Tmr_Misc_Handler	;  34:  
                DCD     Sadc_Handler					;  35:  Sensor ADC
                DCD     Calib_Handler					;  36:  Calibration Done
                DCD     PWM_Handler					;  37:  PWM 
                DCD     TMR0_Add_Misc_Handler					;  38:  
                DCD     Null_Handler					;  39:  
                DCD     Null_Handler					;  40:  
                DCD     Osc_Xo_Handler			;  41:  OSC enable, XO switch 
                DCD     QD_Handler					;  42:  Quadrature Decoder
                DCD     Counter_Handler			;  43:  Counter
                DCD     WDT_Handler					;  44:  WDT
                DCD     Audio_Handler				;  45:  
                DCD     Null_Handler					;  46:  
                DCD     Null_Handler					;  47:  
                DCD     IPMAC_Handler				;  48:  
                DCD     BLE_Core_Handler			;  49:  BLE Core 
                DCD     Icache_Handler				;  50:  Icache 
                DCD     BLE_Dbg_Handler			;  51:  
                DCD     Antena_Handler				;  52:  
                DCD     TMR_SysTick_MIsc_Handler	;  53:  Inplay SysTick  
                DCD     SysTick_Handler			;  54:  Inplay Systick (fine count timeout)	  
                DCD     Null_Handler					;  55:  
                DCD     SWI_Handler					;  56:  
                DCD     Aon_Tmr0_Handler			;  57:   
                DCD     Aon_Tmr1_Handler			;  58:   
                DCD     Aon_Tmr2_Handler			;  59:   
                DCD     Aon_Tmr3_Handler			;  60:   
                DCD     BOD2_Handler				;  61:   
                DCD     BOD_Handler					;  62:   
                DCD     XO_Handler					;  63:   
                DCD     APB_MUX_Handler			;  64:   APB access conflict IRQ
                DCD     SPI_Flash_Handler			;  65:   SPI Flash Controller IRQ
                DCD     Global_Irq_Handler			;  66:   
                DCD     Gpio_0_Handler				;  67:  GPIO Group 0 
                DCD     Gpio_1_Handler				;  68:  GPIO Group 1 
                DCD     Gpio_2_Handler				;  69:  GPIO Group 2 
                DCD     Gpio_3_Handler				;  70:  GPIO Group 3 
                DCD     Gpio_4_Handler				;  71:  GPIO Group 4   
__Vectors_End

__Vectors_Size  EQU     __Vectors_End - __Vectors

                AREA    |.text|, CODE, READONLY


; Reset Handler

#if CFG_FPGA
Reset_Handler   PROC
                EXPORT  Reset_Handler             [WEAK]
                IMPORT  SystemInit
                IMPORT  __main

					MOV    R0, #0x01D0	;	CPU Program Counter 	
					MOVT  R0, #0x4411
					LDR     R1, [R0]			; 
					TST     R1, #0x80000000
					BEQ    COLD_BOOT
					MOV    R0, #0x01CC	;	STACK Counter 	
					MOVT  R0, #0x4411
					LDR     R2, [R0]		
					MOV    SP, R2
					BIC		R1, #0x80000000
					ORR		R1, R1, #1
					BX		R1
					
COLD_BOOT
                LDR     R0, =SystemInit
                BLX     R0
                LDR     R0, =__main
                BX      R0
                ENDP
#else
Reset_Handler   PROC
                EXPORT  Reset_Handler             [WEAK]
                IMPORT  SystemInit
                IMPORT  __main

                LDR     R0, =SystemInit
                BLX     R0
                LDR     R0, =__main
                BX      R0
                ENDP
#endif

; Dummy Exception Handlers (infinite loops which can be modified)

NMI_Handler     PROC
                EXPORT  NMI_Handler               [WEAK]
                B       .
                ENDP
HardFault_Handler\
                PROC
                EXPORT  HardFault_Handler         [WEAK]
                B       .
                ENDP
MemManage_Handler\
                PROC
                EXPORT  MemManage_Handler         [WEAK]
                B       .
                ENDP
BusFault_Handler\
                PROC
                EXPORT  BusFault_Handler          [WEAK]
                B       .
                ENDP
UsageFault_Handler\
                PROC
                EXPORT  UsageFault_Handler        [WEAK]
                B       .
                ENDP
SVC_Handler     PROC
                EXPORT  SVC_Handler               [WEAK]
                B       .
                ENDP
DebugMon_Handler\
                PROC
                EXPORT  DebugMon_Handler          [WEAK]
                B       .
                ENDP
PendSV_Handler  PROC
                EXPORT  PendSV_Handler            [WEAK]
                B       .
                ENDP
SysTick_Handler PROC
                EXPORT  SysTick_Handler           [WEAK]
                B       .
                ENDP

SysTick_Handler_patch PROC
                EXPORT  SysTick_Handler_patch     [WEAK]
                B       .
                ENDP

Default_Handler PROC

                EXPORT     Null_Handler				[WEAK]
                EXPORT     DMA0_Handler  			[WEAK]
                EXPORT     DMA1_Handler 			[WEAK]
                EXPORT     KB_Handler 				[WEAK]
                EXPORT     Hash_Handler 				[WEAK]
                EXPORT     Aes_Handler				[WEAK]
                EXPORT     UART0_Handler 			[WEAK]
                EXPORT     UART1_Handler 			[WEAK]
                EXPORT     SSPI0_Handler			[WEAK]
                EXPORT     SSPI1_Handler			[WEAK]
                EXPORT     MSPI0_Handler			[WEAK]
                EXPORT     MSPI1_Handler			[WEAK]
                EXPORT     Efuse_Handler				[WEAK]
                EXPORT     I2C0_Handler 				[WEAK]
                EXPORT     I2C1_Handler 				[WEAK]
                EXPORT     MI2S_Handler				[WEAK]
                EXPORT     SI2S_Handler				[WEAK]
                EXPORT     Ecc_Handler				[WEAK]
                EXPORT     TMR0_Handler				[WEAK]
                EXPORT     TMR1_Handler				[WEAK]
                EXPORT     TMR2_Handler				[WEAK]
                EXPORT     TMR3_Handler				[WEAK]
                EXPORT     TMR4_Handler				[WEAK]
                EXPORT     TMR5_Handler				[WEAK]
                EXPORT     Sadc_Handler				[WEAK]
                EXPORT     Calib_Handler				[WEAK]
                EXPORT     PWM_Handler				[WEAK]
                EXPORT     QD_Handler					[WEAK]
                EXPORT     Counter_Handler			[WEAK]
                EXPORT     WDT_Handler				[WEAK]
                EXPORT     IPMAC_Handler			[WEAK]
                EXPORT     BLE_Core_Handler		[WEAK] 
                EXPORT     Icache_Handler			[WEAK] 
                EXPORT     SWI_Handler				[WEAK] 
                EXPORT     BOD_Handler				[WEAK] 
                EXPORT     BOD2_Handler				[WEAK] 
                EXPORT     XO_Handler					[WEAK] 
                EXPORT     SPI_Flash_Handler		[WEAK] 
                EXPORT     Global_Irq_Handler		[WEAK] 
                EXPORT     Gpio_0_Handler			[WEAK] 
                EXPORT     Gpio_1_Handler			[WEAK] 
                EXPORT     Gpio_2_Handler			[WEAK] 
                EXPORT     Gpio_3_Handler			[WEAK] 
                EXPORT     Gpio_4_Handler			[WEAK] 
				EXPORT     Audio_Handler				[WEAK] 
				EXPORT		 BLE_Dbg_Handler			[WEAK]
				EXPORT		 Antena_Handler			[WEAK]
				EXPORT		 Osc_Xo_Handler			[WEAK]
				EXPORT		 Aon_Tmr_Misc_Handler	[WEAK]
				EXPORT		 AHB_Trig_Handler 		[WEAK]
				EXPORT		 TMR_SysTick_MIsc_Handler		[WEAK]
				EXPORT		 TMR0_Misc_Handler		[WEAK]		
				EXPORT		 TMR1_Misc_Handler		[WEAK]		
				EXPORT		 Aon_Tmr0_Handler		[WEAK]			
				EXPORT		 Aon_Tmr1_Handler		[WEAK]			
				EXPORT		 Aon_Tmr2_Handler		[WEAK]			
				EXPORT		 Aon_Tmr3_Handler		[WEAK]			
				EXPORT		 APB_MUX_Handler		[WEAK]		
				EXPORT		 TMR0_Add_Handler		[WEAK]	
				EXPORT		 TMR1_Add_Handler		[WEAK]
				EXPORT		 TMR2_Add_Handler		[WEAK]
				EXPORT		 TMR3_Add_Handler		[WEAK]
				EXPORT		 TMR_Smem_Handler		[WEAK]
				EXPORT		 TMR0_Add_Misc_Handler		[WEAK]
Null_Handler					
DMA0_Handler 				
DMA1_Handler 				
KB_Handler 				
Hash_Handler 				
Aes_Handler 					
UART0_Handler 			
UART1_Handler 			
SSPI0_Handler 				
SSPI1_Handler 				
MSPI0_Handler 				
MSPI1_Handler 				
Efuse_Handler 	
I2C0_Handler 				
I2C1_Handler 				
MI2S_Handler		
SI2S_Handler
Ecc_Handler
TMR0_Handler				
TMR1_Handler				
TMR2_Handler				
TMR3_Handler				
TMR4_Handler				
TMR5_Handler				
Sadc_Handler			
Calib_Handler			
PWM_Handler				
QD_Handler					
Counter_Handler					
WDT_Handler
IPMAC_Handler
BLE_Core_Handler
Icache_Handler
SWI_Handler
BOD_Handler
BOD2_Handler
XO_Handler
SPI_Flash_Handler
Global_Irq_Handler
Gpio_0_Handler
Gpio_1_Handler
Gpio_2_Handler
Gpio_3_Handler
Gpio_4_Handler
Audio_Handler
BLE_Dbg_Handler
Antena_Handler
Osc_Xo_Handler
Aon_Tmr_Misc_Handler
AHB_Trig_Handler
TMR_SysTick_MIsc_Handler
TMR0_Misc_Handler		
TMR1_Misc_Handler		
Aon_Tmr0_Handler			
Aon_Tmr1_Handler			
Aon_Tmr2_Handler			
Aon_Tmr3_Handler			
APB_MUX_Handler
TMR0_Add_Handler
TMR1_Add_Handler
TMR2_Add_Handler
TMR3_Add_Handler
TMR_Smem_Handler
TMR0_Add_Misc_Handler
                B       .

                ENDP


                ALIGN


; User Initial Stack & Heap

                IF      :DEF:__MICROLIB

                EXPORT  __initial_sp
                EXPORT  __heap_base
                EXPORT  __heap_limit

                ELSE

                IMPORT  __use_two_region_memory
                EXPORT  __user_initial_stackheap

__user_initial_stackheap PROC
                LDR     R0, =  Heap_Mem
                LDR     R1, =(Stack_Mem + Stack_Size)
                LDR     R2, = (Heap_Mem +  Heap_Size)
                LDR     R3, = Stack_Mem
                BX      LR
                ENDP

                ALIGN

                ENDIF


                END

