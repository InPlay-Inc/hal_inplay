/**
 ****************************************************************************************
 *
 * @file in_ble_att.h
 *
 * @brief BLE Attribute 
 *
 * Copyright (C) Inplay Technologies Inc. 2018-2020
 *
 ****************************************************************************************
 */

#ifndef IN_BLE_ATT_H
#define IN_BLE_ATT_H

/**
 ****************************************************************************************
 * @defgroup IN_BLE_ATT BLE Attribute Protocol  
 * @ingroup BLE
 * @brief  BLE ATT
 * @{
 ****************************************************************************************
 */

#include <stdint.h>

/*
 * DEFINES
 ****************************************************************************************
 */
#define BLE_ATT_UUID_16(uuid)                          (uuid)

/// Length, number, offset defines
#define BLE_SVC_VALUE_MAX_LEN             0x0030
#define BLE_CHAR_NAME_MAX_LEN             0x0030
#define BLE_UUID_16_LEN                         0x0002
#define BLE_UUID_32_LEN                         0x0004
#define BLE_UUID_128_LEN                        0x0010

/*
 * Enumerations
 ****************************************************************************************
 */

/**
 * Attributes properties
 *
 * Bit [0-1]  : Read Permission         (0 = NO_AUTH, 1 = UNAUTH, 2 = AUTH, 3 = SEC_CON)
 * Bit [2-3]  : Write Permission        (0 = NO_AUTH, 1 = UNAUTH, 2 = AUTH, 3 = SEC_CON)
 * Bit [4-5]  : Indication Permission   (0 = NO_AUTH, 1 = UNAUTH, 2 = AUTH, 3 = SEC_CON)
 * Bit [6-7]  : Notification Permission (0 = NO_AUTH, 1 = UNAUTH, 2 = AUTH, 3 = SEC_CON)
 *
 * Bit [8]     : Broadcast permission        (only relevant for a characteristic value)
 * Bit [9]     : Read Request accepted
 * Bit [10]   : Write Command accepted
 * Bit [11]   : Write Request accepted
 * Bit [12]   : Notification support
 * Bit [13]   : Indication support
 * Bit [14]   : Write Signed accepted
 * Bit [15]   : Extended properties present (only relevant for a characteristic value)
 */

enum ble_att_perm
{
	ATT_PERM_NO_AUTH,
	ATT_PERM_UNAUTH,
	ATT_PERM_AUTH,
	ATT_PERM_SEC_CON,
};

/// Attributes permission prop
enum ble_att_perm_prop
{
	/// Read Permission Mask
	ATT_PERM_READ_MASK             = 0x0003,
	ATT_PERM_READ_SHIFT              = 0,
	/// Write Permission Mask
	ATT_PERM_WRITE_MASK            = 0x000C,
	ATT_PERM_WRITE_SHIFT             = 2,
	/// Indication Access Mask
	ATT_PERM_IND_MASK            = 0x0030,
	ATT_PERM_IND_SHIFT             = 4,
	/// Notification Access Mask
	ATT_PERM_NTF_MASK           = 0x00C0,
	ATT_PERM_NTF_SHIFT             = 6,
};

/// Attributes char prop
enum ble_att_char_prop
{
	/// Broadcast descriptor present
	ATT_CHAR_PROP_BROADCAST     = 0x0100,
	/// Read Access Mask
	ATT_CHAR_PROP_READ            = 0x0200,
	/// Write Command Enabled attribute Mask
	ATT_CHAR_PROP_WRITE_NO_RSP = 0x0400,
	/// Write Request Enabled attribute Mask
	ATT_CHAR_PROP_WRITE     = 0x0800,
	/// Notification Access Mask
	ATT_CHAR_PROP_NOTIFY           = 0x1000,
	/// Indication Access Mask
	ATT_CHAR_PROP_INDICATE           = 0x2000,
	/// Write Signed Enabled attribute Mask
	ATT_CHAR_PROP_WRITE_SIGNED  = 0x4000,
	/// Extended properties descriptor present
	ATT_CHAR_PROP_EXT           = 0x8000,
};


/**
 * Extended properties bit field
 *
 * Bit [0-11] : Maximum Attribute Length or Value Offset pointer
 * Bit [12]   : Encryption key Size must be 16 bytes
 * Bit [14-13]: UUID Length             (0 = 16 bits, 1 = 32 bits, 2 = 128 bits, 3 = RFU)
 * Bit [15]   : Trigger Read Indication (0 = Value present in Database, 1 = Value not present in Database)
 */
enum ble_att_ext_prop
{
	/// Maximum Attribute Length
	ATT_EXT_PROP_MAX_LEN     = 0x0FFF,
	ATT_EXT_PROP_MAX_LEN_SHIFT      = 0,
	/// Attribute value Offset
	ATT_EXT_PROP_VAL_OFFSET  = 0x0FFF,
	ATT_EXT_PROP_VAL_OFFSET_SHIFT   = 0,
	/// Check Encryption key size Mask
	ATT_EXT_PROP_EKS         = 0x1000,
	ATT_EXT_PROP_EKS_SHIFT          = 12,
	/// UUID Length
	ATT_EXT_PROP_UUID_LEN    = 0x6000,
	ATT_EXT_PROP_UUID_LEN_SHIFT     = 13,
	/// Read trigger Indication
	ATT_EXT_PROP_RI          = 0x8000,
	ATT_EXT_PROP_RI_SHIFT           = 15,
};

/**
 * Service properties
 *
 * Bit [1]  : Encryption key Size must be 16 bytes
 * Bit [2-3]: Service Permission      (0 = NO_AUTH, 1 = UNAUTH, 2 = AUTH, 3 = Secure Connect)
 * Bit [4]  : Disable the service
 * Bit [5-6]: UUID Length             (0 = 16 bits, 1 = 32 bits, 2 = 128 bits, 3 = RFU)
 * Bit [7]  : Secondary Service       (0 = Primary Service, 1 = Secondary Service)
 */
enum ble_att_svc_prop
{
    /// Check Encryption key size for service Access
    ATT_SVC_PROP_EKS       = 0x02,
    ATT_SVC_PROP_EKS_SHIFT        = 1,
    /// Service Permission authentication
    ATT_SVC_PROP_AUTH      = 0x0C,
    ATT_SVC_PROP_AUTH_SHIFT       = 2,
    /// Disable the service
    ATT_SVC_PROP_DIS       = 0x10,
    ATT_SVC_PROP_DIS_SHIFT        = 4,
    /// Service UUID Length
    ATT_SVC_PROP_UUID_LEN  = 0x60,
    ATT_SVC_PROP_UUID_LEN_SHIFT   = 5,
    /// Service type Secondary
    ATT_SVC_PROP_SECONDARY = 0x80,
    ATT_SVC_PROP_SECONDARY_SHIFT  = 7,
};

/// Common 16-bit Universal Unique Identifier
enum ble_common_uuid {
    BLE_ATT_INVALID_UUID                            = BLE_ATT_UUID_16(0x0000),
    /*----------------- SERVICES ---------------------*/
    /// Generic Access Profile
    BLE_ATT_SVC_GENERIC_ACCESS                      = BLE_ATT_UUID_16(0x1800),
    /// Attribute Profile
    BLE_ATT_SVC_GENERIC_ATTRIBUTE                   = BLE_ATT_UUID_16(0x1801),
    /// Immediate alert Service
    BLE_ATT_SVC_IMMEDIATE_ALERT                     = BLE_ATT_UUID_16(0x1802),
    /// Link Loss Service
    BLE_ATT_SVC_LINK_LOSS                           = BLE_ATT_UUID_16(0x1803),
    /// Tx Power Service
    BLE_ATT_SVC_TX_POWER                            = BLE_ATT_UUID_16(0x1804),
    /// Current Time Service Service
    BLE_ATT_SVC_CURRENT_TIME                        = BLE_ATT_UUID_16(0x1805),
    /// Reference Time Update Service
    BLE_ATT_SVC_REF_TIME_UPDATE                     = BLE_ATT_UUID_16(0x1806),
    /// Next DST Change Service
    BLE_ATT_SVC_NEXT_DST_CHANGE                     = BLE_ATT_UUID_16(0x1807),
    /// Glucose Service
    BLE_ATT_SVC_GLUCOSE                             = BLE_ATT_UUID_16(0x1808),
    /// Health Thermometer Service
    BLE_ATT_SVC_HEALTH_THERMOM                      = BLE_ATT_UUID_16(0x1809),
    /// Device Information Service
    BLE_ATT_SVC_DEVICE_INFO                         = BLE_ATT_UUID_16(0x180A),
    /// Heart Rate Service
    BLE_ATT_SVC_HEART_RATE                          = BLE_ATT_UUID_16(0x180D),
    /// Phone Alert Status Service
    BLE_ATT_SVC_PHONE_ALERT_STATUS                  = BLE_ATT_UUID_16(0x180E),
    /// Battery Service
    BLE_ATT_SVC_BATTERY_SERVICE                     = BLE_ATT_UUID_16(0x180F),
    /// Blood Pressure Service
    BLE_ATT_SVC_BLOOD_PRESSURE                      = BLE_ATT_UUID_16(0x1810),
    /// Alert Notification Service
    BLE_ATT_SVC_ALERT_NTF                           = BLE_ATT_UUID_16(0x1811),
    /// HID Service
    BLE_ATT_SVC_HID                                 = BLE_ATT_UUID_16(0x1812),
    /// Scan Parameters Service
    BLE_ATT_SVC_SCAN_PARAMETERS                     = BLE_ATT_UUID_16(0x1813),
    /// Running Speed and Cadence Service
    BLE_ATT_SVC_RUNNING_SPEED_CADENCE               = BLE_ATT_UUID_16(0x1814),
    /// Cycling Speed and Cadence Service
    BLE_ATT_SVC_CYCLING_SPEED_CADENCE               = BLE_ATT_UUID_16(0x1816),
    /// Cycling Power Service
    BLE_ATT_SVC_CYCLING_POWER                       = BLE_ATT_UUID_16(0x1818),
    /// Location and Navigation Service
    BLE_ATT_SVC_LOCATION_AND_NAVIGATION             = BLE_ATT_UUID_16(0x1819),
    /// Environmental Sensing Service
    BLE_ATT_SVC_ENVIRONMENTAL_SENSING               = BLE_ATT_UUID_16(0x181A),
    /// Body Composition Service
    BLE_ATT_SVC_BODY_COMPOSITION                    = BLE_ATT_UUID_16(0x181B),
    /// User Data Service
    BLE_ATT_SVC_USER_DATA                           = BLE_ATT_UUID_16(0x181C),
    /// Weight Scale Service
    BLE_ATT_SVC_WEIGHT_SCALE                        = BLE_ATT_UUID_16(0x181D),
    /// Bond Management Service
    BLE_ATT_SVC_BOND_MANAGEMENT                     = BLE_ATT_UUID_16(0x181E),
    /// Continuous Glucose Monitoring Service
    BLE_ATT_SVC_CONTINUOUS_GLUCOSE_MONITORING       = BLE_ATT_UUID_16(0x181F),
    /// Internet Protocol Support Service
    BLE_ATT_SVC_IP_SUPPORT                          = BLE_ATT_UUID_16(0x1820),
    /// Indoor Positioning Service
    BLE_ATT_SVC_INDOOR_POSITIONING                  = BLE_ATT_UUID_16(0x1821),
    /// Pulse Oximeter Service
    BLE_ATT_SVC_PULSE_OXIMETER                      = BLE_ATT_UUID_16(0x1822),
    /// HTTP Proxy Service
    BLE_ATT_SVC_HTTP_PROXY                          = BLE_ATT_UUID_16(0x1823),
    /// Transport Discovery Service
    BLE_ATT_SVC_TRANSPORT_DISCOVERY                 = BLE_ATT_UUID_16(0x1824),
    /// Object Transfer Service
    BLE_ATT_SVC_OBJECT_TRANSFER                     = BLE_ATT_UUID_16(0x1825),

    /// Mesh Provisioning Service
    BLE_ATT_SVC_MESH_PROVISIONING                   = BLE_ATT_UUID_16(0x1827),
    /// Mesh Proxy Service
    BLE_ATT_SVC_MESH_PROXY                          = BLE_ATT_UUID_16(0x1828),

    /*------------------- UNITS ---------------------*/
    /// No defined unit
    BLE_ATT_UNIT_UNITLESS                           = BLE_ATT_UUID_16(0x2700),
    /// Length Unit - Metre
    BLE_ATT_UNIT_METRE                              = BLE_ATT_UUID_16(0x2701),
    ///Mass unit - Kilogram
    BLE_ATT_UNIT_KG                                 = BLE_ATT_UUID_16(0x2702),
    ///Time unit - second
    BLE_ATT_UNIT_SECOND                             = BLE_ATT_UUID_16(0x2703),
    ///Electric current unit - Ampere
    BLE_ATT_UNIT_AMPERE                             = BLE_ATT_UUID_16(0x2704),
    ///Thermodynamic Temperature unit - Kelvin
    BLE_ATT_UNIT_KELVIN                             = BLE_ATT_UUID_16(0x2705),
    /// Amount of substance unit - mole
    BLE_ATT_UNIT_MOLE                               = BLE_ATT_UUID_16(0x2706),
    ///Luminous intensity unit - candela
    BLE_ATT_UNIT_CANDELA                            = BLE_ATT_UUID_16(0x2707),
    ///Area unit - square metres
    BLE_ATT_UNIT_SQ_METRE                           = BLE_ATT_UUID_16(0x2710),
    ///Colume unit - cubic metres
    BLE_ATT_UNIT_CUBIC_METRE                        = BLE_ATT_UUID_16(0x2710),
    ///Velocity unit - metres per second
    BLE_ATT_UNIT_METRE_PER_SECOND                   = BLE_ATT_UUID_16(0x2711),
    ///Acceleration unit - metres per second squared
    BLE_ATT_UNIT_METRES_PER_SEC_SQ                  = BLE_ATT_UUID_16(0x2712),
    ///Wavenumber unit - reciprocal metre
    BLE_ATT_UNIT_RECIPROCAL_METRE                   = BLE_ATT_UUID_16(0x2713),
    ///Density unit - kilogram per cubic metre
    BLE_ATT_UNIT_DENS_KG_PER_CUBIC_METRE            = BLE_ATT_UUID_16(0x2714),
    ///Surface density unit - kilogram per square metre
    BLE_ATT_UNIT_KG_PER_SQ_METRE                    = BLE_ATT_UUID_16(0x2715),
    ///Specific volume unit - cubic metre per kilogram
    BLE_ATT_UNIT_CUBIC_METRE_PER_KG                 = BLE_ATT_UUID_16(0x2716),
    ///Current density unit - ampere per square metre
    BLE_ATT_UNIT_AMPERE_PER_SQ_METRE                = BLE_ATT_UUID_16(0x2717),
    ///Magnetic field strength unit - Ampere per metre
    BLE_ATT_UNIT_AMPERE_PER_METRE                   = BLE_ATT_UUID_16(0x2718),
    ///Amount concentration unit - mole per cubic metre
    BLE_ATT_UNIT_MOLE_PER_CUBIC_METRE               = BLE_ATT_UUID_16(0x2719),
    ///Mass Concentration unit - kilogram per cubic metre
    BLE_ATT_UNIT_MASS_KG_PER_CUBIC_METRE            = BLE_ATT_UUID_16(0x271A),
    ///Luminance unit - candela per square metre
    BLE_ATT_UNIT_CANDELA_PER_SQ_METRE               = BLE_ATT_UUID_16(0x271B),
    ///Refractive index unit
    BLE_ATT_UNIT_REFRACTIVE_INDEX                   = BLE_ATT_UUID_16(0x271C),
    ///Relative permeability unit
    BLE_ATT_UNIT_RELATIVE_PERMEABILITY              = BLE_ATT_UUID_16(0x271D),
    ///Plane angle unit - radian
    BLE_ATT_UNIT_RADIAN                             = BLE_ATT_UUID_16(0x2720),
    ///Solid angle unit - steradian
    BLE_ATT_UNIT_STERADIAN                          = BLE_ATT_UUID_16(0x2721),
    ///Frequency unit - Hertz
    BLE_ATT_UNIT_HERTZ                              = BLE_ATT_UUID_16(0x2722),
    ///Force unit - Newton
    BLE_ATT_UNIT_NEWTON                             = BLE_ATT_UUID_16(0x2723),
    ///Pressure unit - Pascal
    BLE_ATT_UNIT_PASCAL                             = BLE_ATT_UUID_16(0x2724),
    ///Energy unit - Joule
    BLE_ATT_UNIT_JOULE                              = BLE_ATT_UUID_16(0x2725),
    ///Power unit - Watt
    BLE_ATT_UNIT_WATT                               = BLE_ATT_UUID_16(0x2726),
    ///electric Charge unit - Coulomb
    BLE_ATT_UNIT_COULOMB                            = BLE_ATT_UUID_16(0x2727),
    ///Electric potential difference - Volt
    BLE_ATT_UNIT_VOLT                               = BLE_ATT_UUID_16(0x2728),
    ///Capacitance unit - Farad
    BLE_ATT_UNIT_FARAD                              = BLE_ATT_UUID_16(0x2729),
    ///electric resistance unit - Ohm
    BLE_ATT_UNIT_OHM                                = BLE_ATT_UUID_16(0x272A),
    ///Electric conductance - Siemens
    BLE_ATT_UNIT_SIEMENS                            = BLE_ATT_UUID_16(0x272B),
    ///Magnetic flux unit - Weber
    BLE_ATT_UNIT_WEBER                              = BLE_ATT_UUID_16(0x272C),
    ///Magnetic flux density unit - Tesla
    BLE_ATT_UNIT_TESLA                              = BLE_ATT_UUID_16(0x272D),
    ///Inductance unit - Henry
    BLE_ATT_UNIT_HENRY                              = BLE_ATT_UUID_16(0x272E),
    ///Temperature unit - degree Celsius
    BLE_ATT_UNIT_CELSIUS                            = BLE_ATT_UUID_16(0x272F),
    ///Luminous flux unit - lumen
    BLE_ATT_UNIT_LUMEN                              = BLE_ATT_UUID_16(0x2730),
    ///Illuminance unit - lux
    BLE_ATT_UNIT_LUX                                = BLE_ATT_UUID_16(0x2731),
    ///Activity referred to a radionuclide unit - becquerel
    BLE_ATT_UNIT_BECQUEREL                          = BLE_ATT_UUID_16(0x2732),
    ///Absorbed dose unit - Gray
    BLE_ATT_UNIT_GRAY                               = BLE_ATT_UUID_16(0x2733),
    ///Dose equivalent unit - Sievert
    BLE_ATT_UNIT_SIEVERT                            = BLE_ATT_UUID_16(0x2734),
    ///Catalytic activity unit - Katal
    BLE_ATT_UNIT_KATAL                              = BLE_ATT_UUID_16(0x2735),
    ///Synamic viscosity unit - Pascal second
    BLE_ATT_UNIT_PASCAL_SECOND                      = BLE_ATT_UUID_16(0x2740),
    ///Moment of force unit - Newton metre
    BLE_ATT_UNIT_NEWTON_METRE                       = BLE_ATT_UUID_16(0x2741),
    ///surface tension unit - Newton per metre
    BLE_ATT_UNIT_NEWTON_PER_METRE                   = BLE_ATT_UUID_16(0x2742),
    ///Angular velocity unit - radian per second
    BLE_ATT_UNIT_RADIAN_PER_SECOND                  = BLE_ATT_UUID_16(0x2743),
    ///Angular acceleration unit - radian per second squared
    BLE_ATT_UNIT_RADIAN_PER_SECOND_SQ               = BLE_ATT_UUID_16(0x2744),
    ///Heat flux density unit - Watt per square metre
    BLE_ATT_UNIT_WATT_PER_SQ_METRE                  = BLE_ATT_UUID_16(0x2745),
    ///HEat capacity unit - Joule per Kelvin
    BLE_ATT_UNIT_JOULE_PER_KELVIN                   = BLE_ATT_UUID_16(0x2746),
    ///Specific heat capacity unit - Joule per kilogram kelvin
    BLE_ATT_UNIT_JOULE_PER_KG_KELVIN                = BLE_ATT_UUID_16(0x2747),
    ///Specific Energy unit - Joule per kilogram
    BLE_ATT_UNIT_JOULE_PER_KG                       = BLE_ATT_UUID_16(0x2748),
    ///Thermal conductivity - Watt per metre Kelvin
    BLE_ATT_UNIT_WATT_PER_METRE_KELVIN              = BLE_ATT_UUID_16(0x2749),
    ///Energy Density unit - joule per cubic metre
    BLE_ATT_UNIT_JOULE_PER_CUBIC_METRE              = BLE_ATT_UUID_16(0x274A),
    ///Electric field strength unit - volt per metre
    BLE_ATT_UNIT_VOLT_PER_METRE                     = BLE_ATT_UUID_16(0x274B),
    ///Electric charge density unit - coulomb per cubic metre
    BLE_ATT_UNIT_COULOMB_PER_CUBIC_METRE            = BLE_ATT_UUID_16(0x274C),
    ///Surface charge density unit - coulomb per square metre
    BLE_ATT_UNIT_SURF_COULOMB_PER_SQ_METRE          = BLE_ATT_UUID_16(0x274D),
    ///Electric flux density unit - coulomb per square metre
    BLE_ATT_UNIT_FLUX_COULOMB_PER_SQ_METRE          = BLE_ATT_UUID_16(0x274E),
    ///Permittivity unit - farad per metre
    BLE_ATT_UNIT_FARAD_PER_METRE                    = BLE_ATT_UUID_16(0x274F),
    ///Permeability unit - henry per metre
    BLE_ATT_UNIT_HENRY_PER_METRE                    = BLE_ATT_UUID_16(0x2750),
    ///Molar energy unit - joule per mole
    BLE_ATT_UNIT_JOULE_PER_MOLE                     = BLE_ATT_UUID_16(0x2751),
    ///Molar entropy unit - joule per mole kelvin
    BLE_ATT_UNIT_JOULE_PER_MOLE_KELVIN              = BLE_ATT_UUID_16(0x2752),
    ///Exposure unit - coulomb per kilogram
    BLE_ATT_UNIT_COULOMB_PER_KG                     = BLE_ATT_UUID_16(0x2753),
    ///Absorbed dose rate unit - gray per second
    BLE_ATT_UNIT_GRAY_PER_SECOND                    = BLE_ATT_UUID_16(0x2754),
    ///Radiant intensity unit - watt per steradian
    BLE_ATT_UNIT_WATT_PER_STERADIAN                 = BLE_ATT_UUID_16(0x2755),
    ///Radiance unit - watt per square meter steradian
    BLE_ATT_UNIT_WATT_PER_SQ_METRE_STERADIAN        = BLE_ATT_UUID_16(0x2756),
    ///Catalytic activity concentration unit - katal per cubic metre
    BLE_ATT_UNIT_KATAL_PER_CUBIC_METRE              = BLE_ATT_UUID_16(0x2757),
    ///Time unit - minute
    BLE_ATT_UNIT_MINUTE                             = BLE_ATT_UUID_16(0x2760),
    ///Time unit - hour
    BLE_ATT_UNIT_HOUR                               = BLE_ATT_UUID_16(0x2761),
    ///Time unit - day
    BLE_ATT_UNIT_DAY                                = BLE_ATT_UUID_16(0x2762),
    ///Plane angle unit - degree
    BLE_ATT_UNIT_ANGLE_DEGREE                       = BLE_ATT_UUID_16(0x2763),
    ///Plane angle unit - minute
    BLE_ATT_UNIT_ANGLE_MINUTE                       = BLE_ATT_UUID_16(0x2764),
    ///Plane angle unit - second
    BLE_ATT_UNIT_ANGLE_SECOND                       = BLE_ATT_UUID_16(0x2765),
    ///Area unit - hectare
    BLE_ATT_UNIT_HECTARE                            = BLE_ATT_UUID_16(0x2766),
    ///Volume unit - litre
    BLE_ATT_UNIT_LITRE                              = BLE_ATT_UUID_16(0x2767),
    ///Mass unit - tonne
    BLE_ATT_UNIT_TONNE                              = BLE_ATT_UUID_16(0x2768),
    ///Pressure unit - bar
    BLE_ATT_UNIT_BAR                                = BLE_ATT_UUID_16(0x2780),
    ///Pressure unit - millimetre of mercury
    BLE_ATT_UNIT_MM_MERCURY                         = BLE_ATT_UUID_16(0x2781),
    ///Length unit - angstrom
    BLE_ATT_UNIT_ANGSTROM                           = BLE_ATT_UUID_16(0x2782),
    ///Length unit - nautical mile
    BLE_ATT_UNIT_NAUTICAL_MILE                      = BLE_ATT_UUID_16(0x2783),
    ///Area unit - barn
    BLE_ATT_UNIT_BARN                               = BLE_ATT_UUID_16(0x2784),
    ///Velocity unit - knot
    BLE_ATT_UNIT_KNOT                               = BLE_ATT_UUID_16(0x2785),
    ///Logarithmic radio quantity unit - neper
    BLE_ATT_UNIT_NEPER                              = BLE_ATT_UUID_16(0x2786),
    ///Logarithmic radio quantity unit - bel
    BLE_ATT_UNIT_BEL                                = BLE_ATT_UUID_16(0x2787),
    ///Length unit - yard
    BLE_ATT_UNIT_YARD                               = BLE_ATT_UUID_16(0x27A0),
    ///Length unit - parsec
    BLE_ATT_UNIT_PARSEC                             = BLE_ATT_UUID_16(0x27A1),
    ///length unit - inch
    BLE_ATT_UNIT_INCH                               = BLE_ATT_UUID_16(0x27A2),
    ///length unit - foot
    BLE_ATT_UNIT_FOOT                               = BLE_ATT_UUID_16(0x27A3),
    ///length unit - mile
    BLE_ATT_UNIT_MILE                               = BLE_ATT_UUID_16(0x27A4),
    ///pressure unit - pound-force per square inch
    BLE_ATT_UNIT_POUND_FORCE_PER_SQ_INCH            = BLE_ATT_UUID_16(0x27A5),
    ///velocity unit - kilometre per hour
    BLE_ATT_UNIT_KM_PER_HOUR                        = BLE_ATT_UUID_16(0x27A6),
    ///velocity unit - mile per hour
    BLE_ATT_UNIT_MILE_PER_HOUR                      = BLE_ATT_UUID_16(0x27A7),
    ///angular velocity unit - revolution per minute
    BLE_ATT_UNIT_REVOLUTION_PER_MINUTE              = BLE_ATT_UUID_16(0x27A8),
    ///energy unit - gram calorie
    BLE_ATT_UNIT_GRAM_CALORIE                       = BLE_ATT_UUID_16(0x27A9),
    ///energy unit - kilogram calorie
    BLE_ATT_UNIT_KG_CALORIE                         = BLE_ATT_UUID_16(0x27AA),
    /// energy unit - kilowatt hour
    BLE_ATT_UNIT_KILOWATT_HOUR                      = BLE_ATT_UUID_16(0x27AB),
    ///thermodynamic temperature unit - degree Fahrenheit
    BLE_ATT_UNIT_FAHRENHEIT                         = BLE_ATT_UUID_16(0x27AC),
    ///percentage
    BLE_ATT_UNIT_PERCENTAGE                         = BLE_ATT_UUID_16(0x27AD),
    ///per mille
    BLE_ATT_UNIT_PER_MILLE                          = BLE_ATT_UUID_16(0x27AE),
    ///period unit - beats per minute)
    BLE_ATT_UNIT_BEATS_PER_MINUTE                   = BLE_ATT_UUID_16(0x27AF),
    ///electric charge unit - ampere hours
    BLE_ATT_UNIT_AMPERE_HOURS                       = BLE_ATT_UUID_16(0x27B0),
    ///mass density unit - milligram per decilitre
    BLE_ATT_UNIT_MILLIGRAM_PER_DECILITRE            = BLE_ATT_UUID_16(0x27B1),
    ///mass density unit - millimole per litre
    BLE_ATT_UNIT_MILLIMOLE_PER_LITRE                = BLE_ATT_UUID_16(0x27B2),
    ///time unit - year
    BLE_ATT_UNIT_YEAR                               = BLE_ATT_UUID_16(0x27B3),
    ////time unit - month
    BLE_ATT_UNIT_MONTH                              = BLE_ATT_UUID_16(0x27B4),


    /*---------------- DECLARATIONS -----------------*/
    /// Primary service Declaration
    BLE_ATT_DECL_PRIMARY_SERVICE                     = BLE_ATT_UUID_16(0x2800),
    /// Secondary service Declaration
    BLE_ATT_DECL_SECONDARY_SERVICE                   = BLE_ATT_UUID_16(0x2801),
    /// Include Declaration
    BLE_ATT_DECL_INCLUDE                             = BLE_ATT_UUID_16(0x2802),
    /// Characteristic Declaration
    BLE_ATT_DECL_CHARACTERISTIC                      = BLE_ATT_UUID_16(0x2803),


    /*----------------- DESCRIPTORS -----------------*/
    /// Characteristic extended properties
    BLE_ATT_DESC_CHAR_EXT_PROPERTIES                 = BLE_ATT_UUID_16(0x2900),
    /// Characteristic user description
    BLE_ATT_DESC_CHAR_USER_DESCRIPTION               = BLE_ATT_UUID_16(0x2901),
    /// Client characteristic configuration
    BLE_ATT_DESC_CLIENT_CHAR_CFG                     = BLE_ATT_UUID_16(0x2902),
    /// Server characteristic configuration
    BLE_ATT_DESC_SERVER_CHAR_CFG                     = BLE_ATT_UUID_16(0x2903),
    /// Characteristic Presentation Format
    BLE_ATT_DESC_CHAR_PRES_FORMAT                    = BLE_ATT_UUID_16(0x2904),
    /// Characteristic Aggregate Format
    BLE_ATT_DESC_CHAR_AGGREGATE_FORMAT               = BLE_ATT_UUID_16(0x2905),
    /// Valid Range
    BLE_ATT_DESC_VALID_RANGE                         = BLE_ATT_UUID_16(0x2906),
    /// External Report Reference
    BLE_ATT_DESC_EXT_REPORT_REF                      = BLE_ATT_UUID_16(0x2907),
    /// Report Reference
    BLE_ATT_DESC_REPORT_REF                          = BLE_ATT_UUID_16(0x2908),
    /// Environmental Sensing Configuration
    BLE_ATT_DESC_ES_CONFIGURATION                    = BLE_ATT_UUID_16(0x290B),
    /// Environmental Sensing Measurement
    BLE_ATT_DESC_ES_MEASUREMENT                      = BLE_ATT_UUID_16(0x290C),
    /// Environmental Sensing Trigger Setting
    BLE_ATT_DESC_ES_TRIGGER_SETTING                  = BLE_ATT_UUID_16(0x290D),


    /*--------------- CHARACTERISTICS ---------------*/
    /// Device name
    BLE_ATT_CHAR_DEVICE_NAME                        = BLE_ATT_UUID_16(0x2A00),
    /// Appearance
    BLE_ATT_CHAR_APPEARANCE                         = BLE_ATT_UUID_16(0x2A01),
    /// Privacy flag
    BLE_ATT_CHAR_PRIVACY_FLAG                       = BLE_ATT_UUID_16(0x2A02),
    /// Reconnection address
    BLE_ATT_CHAR_RECONNECTION_ADDR                  = BLE_ATT_UUID_16(0x2A03),
    /// Peripheral preferred connection parameters
    BLE_ATT_CHAR_PERIPH_PREF_CON_PARAM              = BLE_ATT_UUID_16(0x2A04),
    /// Service handles changed
    BLE_ATT_CHAR_SERVICE_CHANGED                    = BLE_ATT_UUID_16(0x2A05),
    /// Alert Level characteristic
    BLE_ATT_CHAR_ALERT_LEVEL                        = BLE_ATT_UUID_16(0x2A06),
    /// Tx Power Level
    BLE_ATT_CHAR_TX_POWER_LEVEL                     = BLE_ATT_UUID_16(0x2A07),
    /// Date Time
    BLE_ATT_CHAR_DATE_TIME                          = BLE_ATT_UUID_16(0x2A08),
    /// Day of Week
    BLE_ATT_CHAR_DAY_WEEK                           = BLE_ATT_UUID_16(0x2A09),
    /// Day Date Time
    BLE_ATT_CHAR_DAY_DATE_TIME                      = BLE_ATT_UUID_16(0x2A0A),
    /// Exact time 256
    BLE_ATT_CHAR_EXACT_TIME_256                     = BLE_ATT_UUID_16(0x2A0C),
    /// DST Offset
    BLE_ATT_CHAR_DST_OFFSET                         = BLE_ATT_UUID_16(0x2A0D),
    /// Time zone
    BLE_ATT_CHAR_TIME_ZONE                          = BLE_ATT_UUID_16(0x2A0E),
    /// Local time Information
    BLE_ATT_CHAR_LOCAL_TIME_INFO                    = BLE_ATT_UUID_16(0x2A0F),
    /// Time with DST
    BLE_ATT_CHAR_TIME_WITH_DST                      = BLE_ATT_UUID_16(0x2A11),
    /// Time Accuracy
    BLE_ATT_CHAR_TIME_ACCURACY                      = BLE_ATT_UUID_16(0x2A12),
    ///Time Source
    BLE_ATT_CHAR_TIME_SOURCE                        = BLE_ATT_UUID_16(0x2A13),
    /// Reference Time Information
    BLE_ATT_CHAR_REFERENCE_TIME_INFO                = BLE_ATT_UUID_16(0x2A14),
    /// Time Update Control Point
    BLE_ATT_CHAR_TIME_UPDATE_CNTL_POINT             = BLE_ATT_UUID_16(0x2A16),
    /// Time Update State
    BLE_ATT_CHAR_TIME_UPDATE_STATE                  = BLE_ATT_UUID_16(0x2A17),
    /// Glucose Measurement
    BLE_ATT_CHAR_GLUCOSE_MEAS                       = BLE_ATT_UUID_16(0x2A18),
    /// Battery Level
    BLE_ATT_CHAR_BATTERY_LEVEL                      = BLE_ATT_UUID_16(0x2A19),
    /// Temperature Measurement
    BLE_ATT_CHAR_TEMPERATURE_MEAS                   = BLE_ATT_UUID_16(0x2A1C),
    /// Temperature Type
    BLE_ATT_CHAR_TEMPERATURE_TYPE                   = BLE_ATT_UUID_16(0x2A1D),
    /// Intermediate Temperature
    BLE_ATT_CHAR_INTERMED_TEMPERATURE               = BLE_ATT_UUID_16(0x2A1E),
    /// Measurement Interval
    BLE_ATT_CHAR_MEAS_INTERVAL                      = BLE_ATT_UUID_16(0x2A21),
    /// Boot Keyboard Input Report
    BLE_ATT_CHAR_BOOT_KB_IN_REPORT                  = BLE_ATT_UUID_16(0x2A22),
    /// System ID
    BLE_ATT_CHAR_SYS_ID                             = BLE_ATT_UUID_16(0x2A23),
    /// Model Number String
    BLE_ATT_CHAR_MODEL_NB                           = BLE_ATT_UUID_16(0x2A24),
    /// Serial Number String
    BLE_ATT_CHAR_SERIAL_NB                          = BLE_ATT_UUID_16(0x2A25),
    /// Firmware Revision String
    BLE_ATT_CHAR_FW_REV                             = BLE_ATT_UUID_16(0x2A26),
    /// Hardware revision String
    BLE_ATT_CHAR_HW_REV                             = BLE_ATT_UUID_16(0x2A27),
    /// Software Revision String
    BLE_ATT_CHAR_SW_REV                             = BLE_ATT_UUID_16(0x2A28),
    /// Manufacturer Name String
    BLE_ATT_CHAR_MANUF_NAME                         = BLE_ATT_UUID_16(0x2A29),
    /// IEEE Regulatory Certification Data List
    BLE_ATT_CHAR_IEEE_CERTIF                        = BLE_ATT_UUID_16(0x2A2A),
    /// CT Time
    BLE_ATT_CHAR_CT_TIME                            = BLE_ATT_UUID_16(0x2A2B),
    /// Magnetic Declination
    BLE_ATT_CHAR_MAGN_DECLINE                       = BLE_ATT_UUID_16(0x2A2C),
    /// Scan Refresh
    BLE_ATT_CHAR_SCAN_REFRESH                       = BLE_ATT_UUID_16(0x2A31),
    /// Boot Keyboard Output Report
    BLE_ATT_CHAR_BOOT_KB_OUT_REPORT                 = BLE_ATT_UUID_16(0x2A32),
    /// Boot Mouse Input Report
    BLE_ATT_CHAR_BOOT_MOUSE_IN_REPORT               = BLE_ATT_UUID_16(0x2A33),
    /// Glucose Measurement Context
    BLE_ATT_CHAR_GLUCOSE_MEAS_CTX                   = BLE_ATT_UUID_16(0x2A34),
    /// Blood Pressure Measurement
    BLE_ATT_CHAR_BLOOD_PRESSURE_MEAS                = BLE_ATT_UUID_16(0x2A35),
    /// Intermediate Cuff Pressure
    BLE_ATT_CHAR_INTERMEDIATE_CUFF_PRESSURE         = BLE_ATT_UUID_16(0x2A36),
    /// Heart Rate Measurement
    BLE_ATT_CHAR_HEART_RATE_MEAS                    = BLE_ATT_UUID_16(0x2A37),
    /// Body Sensor Location
    BLE_ATT_CHAR_BODY_SENSOR_LOCATION               = BLE_ATT_UUID_16(0x2A38),
    /// Heart Rate Control Point
    BLE_ATT_CHAR_HEART_RATE_CNTL_POINT              = BLE_ATT_UUID_16(0x2A39),
    /// Alert Status
    BLE_ATT_CHAR_ALERT_STATUS                       = BLE_ATT_UUID_16(0x2A3F),
    /// Ringer Control Point
    BLE_ATT_CHAR_RINGER_CNTL_POINT                  = BLE_ATT_UUID_16(0x2A40),
    /// Ringer Setting
    BLE_ATT_CHAR_RINGER_SETTING                     = BLE_ATT_UUID_16(0x2A41),
    /// Alert Category ID Bit Mask
    BLE_ATT_CHAR_ALERT_CAT_ID_BIT_MASK              = BLE_ATT_UUID_16(0x2A42),
    /// Alert Category ID
    BLE_ATT_CHAR_ALERT_CAT_ID                       = BLE_ATT_UUID_16(0x2A43),
    /// Alert Notification Control Point
    BLE_ATT_CHAR_ALERT_NTF_CTNL_PT                  = BLE_ATT_UUID_16(0x2A44),
    /// Unread Alert Status
    BLE_ATT_CHAR_UNREAD_ALERT_STATUS                = BLE_ATT_UUID_16(0x2A45),
    /// New Alert
    BLE_ATT_CHAR_NEW_ALERT                          = BLE_ATT_UUID_16(0x2A46),
    /// Supported New Alert Category
    BLE_ATT_CHAR_SUP_NEW_ALERT_CAT                  = BLE_ATT_UUID_16(0x2A47),
    /// Supported Unread Alert Category
    BLE_ATT_CHAR_SUP_UNREAD_ALERT_CAT               = BLE_ATT_UUID_16(0x2A48),
    /// Blood Pressure Feature
    BLE_ATT_CHAR_BLOOD_PRESSURE_FEATURE             = BLE_ATT_UUID_16(0x2A49),
    /// HID Information
    BLE_ATT_CHAR_HID_INFO                           = BLE_ATT_UUID_16(0x2A4A),
    /// Report Map
    BLE_ATT_CHAR_REPORT_MAP                         = BLE_ATT_UUID_16(0x2A4B),
    /// HID Control Point
    BLE_ATT_CHAR_HID_CTNL_PT                        = BLE_ATT_UUID_16(0x2A4C),
    /// Report
    BLE_ATT_CHAR_REPORT                             = BLE_ATT_UUID_16(0x2A4D),
    /// Protocol Mode
    BLE_ATT_CHAR_PROTOCOL_MODE                      = BLE_ATT_UUID_16(0x2A4E),
    /// Scan Interval Window
    BLE_ATT_CHAR_SCAN_INTV_WD                       = BLE_ATT_UUID_16(0x2A4F),
    /// PnP ID
    BLE_ATT_CHAR_PNP_ID                             = BLE_ATT_UUID_16(0x2A50),
    /// Glucose Feature
    BLE_ATT_CHAR_GLUCOSE_FEATURE                    = BLE_ATT_UUID_16(0x2A51),
    /// Record access control point
    BLE_ATT_CHAR_REC_ACCESS_CTRL_PT                 = BLE_ATT_UUID_16(0x2A52),
    /// RSC Measurement
    BLE_ATT_CHAR_RSC_MEAS                           = BLE_ATT_UUID_16(0x2A53),
    /// RSC Feature
    BLE_ATT_CHAR_RSC_FEAT                           = BLE_ATT_UUID_16(0x2A54),
    /// SC Control Point
    BLE_ATT_CHAR_SC_CNTL_PT                         = BLE_ATT_UUID_16(0x2A55),
    /// CSC Measurement
    BLE_ATT_CHAR_CSC_MEAS                           = BLE_ATT_UUID_16(0x2A5B),
    /// CSC Feature
    BLE_ATT_CHAR_CSC_FEAT                           = BLE_ATT_UUID_16(0x2A5C),
    /// Sensor Location
    BLE_ATT_CHAR_SENSOR_LOC                         = BLE_ATT_UUID_16(0x2A5D),
    /// PLX Spot-Check Measurement
    BLE_ATT_CHAR_PLX_SPOT_CHECK_MEASUREMENT_LOC     = BLE_ATT_UUID_16(0x2A5E),
    /// PLX Continuous Measurement
    BLE_ATT_CHAR_PLX_CONTINUOUS_MEASUREMENT_LOC     = BLE_ATT_UUID_16(0x2A5F),
    /// PLX Features
    BLE_ATT_CHAR_PLX_FEATURES_LOC                   = BLE_ATT_UUID_16(0x2A60),
    /// CP Measurement
    BLE_ATT_CHAR_CP_MEAS                            = BLE_ATT_UUID_16(0x2A63),
    /// CP Vector
    BLE_ATT_CHAR_CP_VECTOR                          = BLE_ATT_UUID_16(0x2A64),
    /// CP Feature
    BLE_ATT_CHAR_CP_FEAT                            = BLE_ATT_UUID_16(0x2A65),
    /// CP Control Point
    BLE_ATT_CHAR_CP_CNTL_PT                         = BLE_ATT_UUID_16(0x2A66),
    /// Location and Speed
    BLE_ATT_CHAR_LOC_SPEED                          = BLE_ATT_UUID_16(0x2A67),
    /// Navigation
    BLE_ATT_CHAR_NAVIGATION                         = BLE_ATT_UUID_16(0x2A68),
    /// Position Quality
    BLE_ATT_CHAR_POS_QUALITY                        = BLE_ATT_UUID_16(0x2A69),
    /// LN Feature
    BLE_ATT_CHAR_LN_FEAT                            = BLE_ATT_UUID_16(0x2A6A),
    /// LN Control Point
    BLE_ATT_CHAR_LN_CNTL_PT                         = BLE_ATT_UUID_16(0x2A6B),
    /// Elevation
    BLE_ATT_CHAR_ELEVATION                          = BLE_ATT_UUID_16(0x2A6C),
    /// Pressure
    BLE_ATT_CHAR_PRESSURE                           = BLE_ATT_UUID_16(0x2A6D),
    /// Temperature
    BLE_ATT_CHAR_TEMPERATURE                        = BLE_ATT_UUID_16(0x2A6E),
    /// Humidity
    BLE_ATT_CHAR_HUMIDITY                           = BLE_ATT_UUID_16(0x2A6F),
    /// True Wind Speed
    BLE_ATT_CHAR_TRUE_WIND_SPEED                    = BLE_ATT_UUID_16(0x2A70),
    /// True Wind Direction
    BLE_ATT_CHAR_TRUE_WIND_DIR                      = BLE_ATT_UUID_16(0x2A71),
    /// Apparent Wind Speed
    BLE_ATT_CHAR_APRNT_WIND_SPEED                   = BLE_ATT_UUID_16(0x2A72),
    /// Apparent Wind Direction
    BLE_ATT_CHAR_APRNT_WIND_DIRECTION               = BLE_ATT_UUID_16(0x2A73),
    /// Gust Factor
    BLE_ATT_CHAR_GUST_FACTOR                        = BLE_ATT_UUID_16(0x2A74),
    /// Pollen Concentration
    BLE_ATT_CHAR_POLLEN_CONC                        = BLE_ATT_UUID_16(0x2A75),
    /// UV Index
    BLE_ATT_CHAR_UV_INDEX                           = BLE_ATT_UUID_16(0x2A76),
    /// Irradiance
    BLE_ATT_CHAR_IRRADIANCE                         = BLE_ATT_UUID_16(0x2A77),
    /// Rainfall
    BLE_ATT_CHAR_RAINFALL                           = BLE_ATT_UUID_16(0x2A78),
    /// Wind Chill
    BLE_ATT_CHAR_WIND_CHILL                         = BLE_ATT_UUID_16(0x2A79),
    /// Heat Index
    BLE_ATT_CHAR_HEAT_INDEX                         = BLE_ATT_UUID_16(0x2A7A),
    /// Dew Point
    BLE_ATT_CHAR_DEW_POINT                          = BLE_ATT_UUID_16(0x2A7B),
    /// Descriptor Value Changed
    BLE_ATT_CHAR_DESCRIPTOR_VALUE_CHANGED           = BLE_ATT_UUID_16(0x2A7D),
    /// Aerobic Heart Rate Lower Limit
    BLE_ATT_CHAR_AEROBIC_HEART_RATE_LOWER_LIMIT     = BLE_ATT_UUID_16(0x2A7E),
    /// Aerobic Threshhold
    BLE_ATT_CHAR_AEROBIC_THRESHHOLD                 = BLE_ATT_UUID_16(0x2A7F),
    /// Age
    BLE_ATT_CHAR_AGE                                = BLE_ATT_UUID_16(0x2A80),
    /// Anaerobic Heart Rate Lower Limit
    BLE_ATT_CHAR_ANAEROBIC_HEART_RATE_LOWER_LIMIT   = BLE_ATT_UUID_16(0x2A81),
    /// Anaerobic Heart Rate Upper Limit
    BLE_ATT_CHAR_ANAEROBIC_HEART_RATE_UPPER_LIMIT   = BLE_ATT_UUID_16(0x2A82),
    /// Anaerobic Threshhold
    BLE_ATT_CHAR_ANAEROBIC_THRESHHOLD               = BLE_ATT_UUID_16(0x2A83),
    /// Aerobic Heart Rate Upper Limit
    BLE_ATT_CHAR_AEROBIC_HEART_RATE_UPPER_LIMIT     = BLE_ATT_UUID_16(0x2A84),
    /// Date Of Birth
    BLE_ATT_CHAR_DATE_OF_BIRTH                      = BLE_ATT_UUID_16(0x2A85),
    /// Date Of Threshold Assessment
    BLE_ATT_CHAR_DATE_OF_THRESHOLD_ASSESSMENT       = BLE_ATT_UUID_16(0x2A86),
    /// Email Address
    BLE_ATT_CHAR_EMAIL_ADDRESS                      = BLE_ATT_UUID_16(0x2A87),
    /// Fat Burn Heart Rate Lower Limit
    BLE_ATT_CHAR_FAT_BURN_HEART_RATE_LOWER_LIMIT    = BLE_ATT_UUID_16(0x2A88),
    /// Fat Burn Heart Rate Upper Limit
    BLE_ATT_CHAR_FAT_BURN_HEART_RATE_UPPER_LIMIT    = BLE_ATT_UUID_16(0x2A89),
    /// First Name
    BLE_ATT_CHAR_FIRST_NAME                         = BLE_ATT_UUID_16(0x2A8A),
    /// Five Zone Heart Rate Limits
    BLE_ATT_CHAR_FIVE_ZONE_HEART_RATE_LIMITS        = BLE_ATT_UUID_16(0x2A8B),
    /// Gender
    BLE_ATT_CHAR_GENDER                             = BLE_ATT_UUID_16(0x2A8C),
    /// Max Heart Rate
    BLE_ATT_CHAR_MAX_HEART_RATE                     = BLE_ATT_UUID_16(0x2A8D),
    /// Height
    BLE_ATT_CHAR_HEIGHT                             = BLE_ATT_UUID_16(0x2A8E),
    /// Hip Circumference
    BLE_ATT_CHAR_HIP_CIRCUMFERENCE                  = BLE_ATT_UUID_16(0x2A8F),
    /// Last Name 
    BLE_ATT_CHAR_LAST_NAME                          = BLE_ATT_UUID_16(0x2A90),
    /// Maximum Recommended Heart Rate
    BLE_ATT_CHAR_MAXIMUM_RECOMMENDED_HEART_RATE     = BLE_ATT_UUID_16(0x2A91),
    /// Resting Heart Rate
    BLE_ATT_CHAR_RESTING_HEART_RATE                 = BLE_ATT_UUID_16(0x2A92),
    /// Sport Type For Aerobic And Anaerobic Thresholds
    BLE_ATT_CHAR_SPORT_TYPE_FOR_AEROBIC_AND_ANAEROBIC_THRESHOLDS = BLE_ATT_UUID_16(0x2A93),
    /// Three Zone Heart Rate Limits
    BLE_ATT_CHAR_THREE_ZONE_HEART_RATE_LIMITS       = BLE_ATT_UUID_16(0x2A94),
    /// Two Zone Heart Rate Limit
    BLE_ATT_CHAR_TWO_ZONE_HEART_RATE_LIMIT          = BLE_ATT_UUID_16(0x2A95),
    /// Vo2 Max
    BLE_ATT_CHAR_VO2_MAX                            = BLE_ATT_UUID_16(0x2A96),
    /// Waist Circumference
    BLE_ATT_CHAR_WAIST_CIRCUMFERENCE                = BLE_ATT_UUID_16(0x2A97),
    /// Weight
    BLE_ATT_CHAR_WEIGHT                             = BLE_ATT_UUID_16(0x2A98),
    /// Database Change Increment
    BLE_ATT_CHAR_DATABASE_CHANGE_INCREMENT          = BLE_ATT_UUID_16(0x2A99),
    /// User Index 
    BLE_ATT_CHAR_USER_INDEX                         = BLE_ATT_UUID_16(0x2A9A),
    /// Body Composition Feature
    BLE_ATT_CHAR_BODY_COMPOSITION_FEATURE           = BLE_ATT_UUID_16(0x2A9B),
    /// Body Composition Measurement
    BLE_ATT_CHAR_BODY_COMPOSITION_MEASUREMENT       = BLE_ATT_UUID_16(0x2A9C),
    /// Weight Measurement
    BLE_ATT_CHAR_WEIGHT_MEASUREMENT                 = BLE_ATT_UUID_16(0x2A9D),
    /// Weight Scale Feature
    BLE_ATT_CHAR_WEIGHT_SCALE_FEATURE               = BLE_ATT_UUID_16(0x2A9E),
    /// User Control Point
    BLE_ATT_CHAR_USER_CONTROL_POINT                 = BLE_ATT_UUID_16(0x2A9F),
    /// Flux Density - 2D
    BLE_ATT_CHAR_MAGN_FLUX_2D                       = BLE_ATT_UUID_16(0x2AA0),
    /// Magnetic Flux Density - 3D
    BLE_ATT_CHAR_MAGN_FLUX_3D                       = BLE_ATT_UUID_16(0x2AA1),
    /// Language string
    BLE_ATT_CHAR_LANGUAGE                           = BLE_ATT_UUID_16(0x2AA2),
    /// Barometric Pressure Trend
    BLE_ATT_CHAR_BAR_PRES_TREND                     = BLE_ATT_UUID_16(0x2AA3),
    /// Central Address Resolution Support
    BLE_ATT_CHAR_CTL_ADDR_RESOL_SUPP                = BLE_ATT_UUID_16(0x2AA6),
    /// CGM Measurement
    BLE_ATT_CHAR_CGM_MEASUREMENT                    = BLE_ATT_UUID_16(0x2AA7),
    /// CGM Features
    BLE_ATT_CHAR_CGM_FEATURES                       = BLE_ATT_UUID_16(0x2AA8),
    /// CGM Status
    BLE_ATT_CHAR_CGM_STATUS                         = BLE_ATT_UUID_16(0x2AA9),
    /// CGM Session Start
    BLE_ATT_CHAR_CGM_SESSION_START                  = BLE_ATT_UUID_16(0x2AAA),
    /// CGM Session Run
    BLE_ATT_CHAR_CGM_SESSION_RUN                    = BLE_ATT_UUID_16(0x2AAB),
    /// CGM Specific Ops Control Point
    BLE_ATT_CHAR_CGM_SPECIFIC_OPS_CTRL_PT           = BLE_ATT_UUID_16(0x2AAC),
    /// Resolvable Private Address only
    BLE_ATT_CHAR_RSLV_PRIV_ADDR_ONLY                = BLE_ATT_UUID_16(0x2AC9),

    /// Mesh Provisioning Data In
    BLE_ATT_CHAR_MESH_PROV_DATA_IN                  = BLE_ATT_UUID_16(0x2ADB),
    /// Mesh Provisioning Data Out
    BLE_ATT_CHAR_MESH_PROV_DATA_OUT                 = BLE_ATT_UUID_16(0x2ADC),
    /// Mesh Proxy Data In
    BLE_ATT_CHAR_MESH_PROXY_DATA_IN                 = BLE_ATT_UUID_16(0x2ADD),
    /// Mesh Proxy Data Out
    BLE_ATT_CHAR_MESH_PROXY_DATA_OUT                = BLE_ATT_UUID_16(0x2ADE),
};

/// Format for Characteristic Presentation
enum ble_pres_fmt {
    /// unsigned 1-bit: true or false
    BLE_ATT_FORMAT_BOOL     = 0x01,
    /// unsigned 2-bit integer
    BLE_ATT_FORMAT_2BIT,
    /// unsigned 4-bit integer
    BLE_ATT_FORMAT_NIBBLE,
    /// unsigned 8-bit integer
    BLE_ATT_FORMAT_UINT8,
    /// unsigned 12-bit integer
    BLE_ATT_FORMAT_UINT12,
    /// unsigned 16-bit integer
    BLE_ATT_FORMAT_UINT16,
    /// unsigned 24-bit integer
    BLE_ATT_FORMAT_UINT24,
    /// unsigned 32-bit integer
    BLE_ATT_FORMAT_UINT32,
    /// unsigned 48-bit integer
    BLE_ATT_FORMAT_UINT48,
    /// unsigned 64-bit integer
    BLE_ATT_FORMAT_UINT64,
    /// unsigned 128-bit integer
    BLE_ATT_FORMAT_UINT128,
    /// signed 8-bit integer
    BLE_ATT_FORMAT_SINT8,
    /// signed 12-bit integer
    BLE_ATT_FORMAT_SINT12,
    /// signed 16-bit integer
    BLE_ATT_FORMAT_SINT16,
    /// signed 24-bit integer
    BLE_ATT_FORMAT_SINT24,
    /// signed 32-bit integer
    BLE_ATT_FORMAT_SINT32,
    /// signed 48-bit integer
    BLE_ATT_FORMAT_SINT48,
    /// signed 64-bit integer
    BLE_ATT_FORMAT_SINT64,
    /// signed 128-bit integer
    BLE_ATT_FORMAT_SINT128,
    /// IEEE-754 32-bit floating point
    BLE_ATT_FORMAT_FLOAT32,
    /// IEEE-754 64-bit floating point
    BLE_ATT_FORMAT_FLOAT64,
    /// IEEE-11073 16-bit SFLOAT
    BLE_ATT_FORMAT_SFLOAT,
    /// IEEE-11073 32-bit FLOAT
    BLE_ATT_FORMAT_FLOAT,
    /// IEEE-20601 format
    BLE_ATT_FORMAT_DUINT16,
    /// UTF-8 string
    BLE_ATT_FORMAT_UTF8S,
    /// UTF-16 string
    BLE_ATT_FORMAT_UTF16S,
    /// Opaque structure
    BLE_ATT_FORMAT_STRUCT,
    /// Last format
    BLE_ATT_FORMAT_LAST
};

/// @} IN_BLE_ATT

#endif	/* IN_BLE_ATT_H */

