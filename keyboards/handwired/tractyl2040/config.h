// Copyright 2022 Stefan Kerkmann
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// #define DEBUG_MATRIX_SCAN_RATE

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

// Need to specify use serial?
// Can't use I2C with ARM. Will need SIO or PIO
//#undef USE_I2C
//#define MASTER_RIGHT
//#define POINTING_DEVICE_RIGHT // Seems to figure this out automatically
//#define SPLIT_POINTING_ENABLE // Another mystery

// Board isn't recognized when rebooted sometimes, maybe this can help
#define SPLIT_WATCHDOG_ENABLE
#define SPLIT_WATCHDOG_TIMEOUT 3000

#define EE_HANDS

#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN GP0    // USART TX pin
#define SERIAL_USART_RX_PIN GP1    // USART RX pin
#define SERIAL_USART_DRIVER SIOD0

/* spi config for eeprom and pmw3360 sensor */
#define SPI_DRIVER                           SPID0
#define SPI_SCK_PIN                          GP22
// #define SPI_SCK_PAL_MODE                     5
#define SPI_MOSI_PIN                         GP23
// #define SPI_MOSI_PAL_MODE                    5
#define SPI_MISO_PIN                         GP20
// #define SPI_MISO_PAL_MODE                    5

/* PMW33XX Settings */
#define PMW33XX_CS_PIN GP21

#define PMW33XX_CPI 1000 //50-16000 increments of 50
// #define PMW33XX_CLOCK_SPEED 2000000
#define PMW33XX_SPI_DIVISOR 8 // According to Drashna
#define PMW33XX_LIFTOFF_DISTANCE 0x02 // Sets Lift_Config (2/3mm)

#define ROTATIONAL_TRANSFORM_ANGLE  -45
#define POINTING_DEVICE_INVERT_Y
// #define POINTING_DEVICE_INVERT_X

// #define POINTING_DEVICE_DEBUG 1

#define CHARYBDIS_MINIMUM_DEFAULT_DPI 1200
#define CHARYBDIS_DEFAULT_DPI_CONFIG_STEP 400
#define CHARYBDIS_MINIMUM_SNIPING_DPI 400
#define CHARYBDIS_SNIPING_DPI_CONFIG_STEP 200
#define CHARYBDIS_DRAGSCROLL_DPI 200
#define CHARYBDIS_POINTER_ACCELERATION_ENABLE

#define SPLIT_TRANSACTION_IDS_KB RPC_ID_KB_CONFIG_SYNC
