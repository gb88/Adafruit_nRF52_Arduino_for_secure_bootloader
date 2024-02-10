 /*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  Copyright (c) 2016 Sandeep Mistry All right reserved.
  Copyright (c) 2018, Adafruit Industries (adafruit.com)

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.
  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.
  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _VARIANT_ECGBOARDV24_
#define _VARIANT_ECGBOARDV24_

/** Master clock frequency */
#define VARIANT_MCK       (64000000ul)

#define USE_LFXO      // Board uses 32khz crystal for LF
// define USE_LFRC    // Board uses RC for LF

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#include "WVariant.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

// Number of pins defined in PinDescription array
#define PINS_COUNT           (43)
#define NUM_DIGITAL_PINS     (43)
#define NUM_ANALOG_INPUTS    (0) // A6 is used for battery, A7 is analog reference
#define NUM_ANALOG_OUTPUTS   (0)

// LEDs
#define PIN_LED0             (2)
#define PIN_LED1             (3)
#define PIN_LED2             (4)

#define LED_GREEN            PIN_LED0
#define LED_BLUE             100
#define LED_BL             	 PIN_LED1
#define LED_RED				 PIN_LED2

#define LED_BUILTIN          PIN_LED0

#define LED_STATE_ON         1         // State when LED is litted

/*
 * Buttons
 */
#define PIN_BUTTON           (13)

/* Others */
#define BATTERY_ALERT		 (5)
#define CHARGE_ENABLE		 (6)
#define SD_CARD_ENABLE	     (7)
#define SD_CARD_CS			 (8)
#define SD_CARD_DETECT		 (9)
#define MAX_INTERRUPT		 (10)
#define MAX_RESET			 (11)
#define MAX_LEVEL_SHIFT		 (12)	
#define RTC_INT				 (14)
#define CHARGE_STATUS		 (36)


/*
 * Serial interfaces
 */
#define PIN_SERIAL1_RX       (1)
#define PIN_SERIAL1_TX       (0)

/*
 * SPI Interfaces
 */
#define SPI_INTERFACES_COUNT 1

#define PIN_SPI_MISO         (24)
#define PIN_SPI_MOSI         (25)
#define PIN_SPI_SCK          (26)

static const uint8_t SS   = (8);
static const uint8_t MOSI = PIN_SPI_MOSI ;
static const uint8_t MISO = PIN_SPI_MISO ;
static const uint8_t SCK  = PIN_SPI_SCK ;

/*
 * Wire Interfaces
 */
#define WIRE_INTERFACES_COUNT 1

#define PIN_WIRE_SDA         (22)
#define PIN_WIRE_SCL         (23)

// QSPI Pins
#define PIN_QSPI_SCK         27
#define PIN_QSPI_CS          28
#define PIN_QSPI_IO0         29
#define PIN_QSPI_IO1         30
#define PIN_QSPI_IO2         31
#define PIN_QSPI_IO3         32

// On-board QSPI Flash
//#define EXTERNAL_FLASH_DEVICES   GD25Q80E
//#define EXTERNAL_FLASH_USE_QSPI
#define EXTERNAL_FLASH_USE_SPI
#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#endif
