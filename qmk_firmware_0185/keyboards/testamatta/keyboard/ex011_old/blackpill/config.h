#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x1d8c
#define PRODUCT_ID      0x3004
#define DEVICE_VER      0x0000
#define MANUFACTURER    "hide-key"
#define PRODUCT         "testamatta MacroPad EX011 BLACKPILL"

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 5

/*
* Keyboard Matrix Assignments
*
* Change this to how you wired your keyboard
* COLS: pins used for columns, left to right
* ROWS: pins used for rows, top to bottom
*
*/

// Using blackpill STM32F411
#define MATRIX_ROW_PINS \
    { B4, A7, A15, A12, A11 }
#define MATRIX_COL_PINS \
    { B12, A6, A5, A4, A3 }


/* PT requires time to 'rise' after IR has been powered on. Read the GPIO input
 * pin only after PT voltage has stabilized. */
#define WAIT_AFTER_COL_SELECT 76
/* PT requires time to 'fall' after IR has been switched off. Wait until
 * voltage across PT has stabilized. Otherwise scanning of next column will be
 * affected. */
#define WAIT_AFTER_COL_UNSELECT 110

/* turn off after debugging */
// #define DEBUG_MATRIX_SCAN_RATE

// #define LED_DRIVER_COUNT 1
// #define DRIVER_LED_TOTAL 74
// #define LED_DRIVER_ADDR_1 0b1110100

/* 255 is maximum intensity */
// #define LED_DISABLE_WHEN_USB_SUSPENDED
// limits maximum brightness of LEDs (max 256)
// #define LED_MATRIX_MAXIMUM_BRIGHTNESS 90
// limits in milliseconds how frequently an animation will update the LEDs. 16
// (16ms) is equivalent to limiting to 60fps (increases keyboard
// responsiveness)
// At 16ms matrix scan frequency redues from 1000 to 350, at 100ms it is 880 and
// at 1000ms it is 980
// #define LED_MATRIX_LED_FLUSH_LIMIT 100


/*
 * Split Keyboard specific options, make sure you have 'SPLIT_KEYBOARD = yes' in your rules.mk, and define SOFT_SERIAL_PIN.
 */
//#define SOFT_SERIAL_PIN D0  // or D1, D2, D3, E6

//#define LED_NUM_LOCK_PIN B0
//#define LED_CAPS_LOCK_PIN B9
//#define LED_SCROLL_LOCK_PIN B2
//#define LED_COMPOSE_PIN B3
//#define LED_KANA_PIN B4

//#define BACKLIGHT_PIN B7
//#define BACKLIGHT_LEVELS 3
//#define BACKLIGHT_BREATHING

// #define RGB_DI_PIN F0
// #define RGBLIGHT_LAYERS
// #define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF
// #ifdef RGB_DI_PIN
// #    define RGBLED_NUM 16
// #    define RGBLIGHT_HUE_STEP 8
// #    define RGBLIGHT_SAT_STEP 8
// #    define RGBLIGHT_VAL_STEP 8
// #    define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */
// #    define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
/*== or choose animations ==*/
// #    define RGBLIGHT_EFFECT_BREATHING
// #    define RGBLIGHT_EFFECT_RAINBOW_MOOD
// #    define RGBLIGHT_EFFECT_RAINBOW_SWIRL
// #    define RGBLIGHT_EFFECT_SNAKE
// #    define RGBLIGHT_EFFECT_KNIGHT
// #    define RGBLIGHT_EFFECT_CHRISTMAS
// #    define RGBLIGHT_EFFECT_STATIC_GRADIENT
// #    define RGBLIGHT_EFFECT_RGB_TEST
// #    define RGBLIGHT_EFFECT_ALTERNATING
/*== customize breathing effect ==*/
/*==== (DEFAULT) use fixed table instead of exp() and sin() ====*/
// #    define RGBLIGHT_BREATHE_TABLE_SIZE 256      // 256(default) or 128 or 64
/*==== use exp() and sin() ====*/
// #    define RGBLIGHT_EFFECT_BREATHE_CENTER 1.85  // 1 to 2.7
// #    define RGBLIGHT_EFFECT_BREATHE_MAX    255   // 0 to 255
// #endif

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 0

/* define if matrix has ghost (lacks anti-ghosting diodes) */
//#define MATRIX_HAS_GHOST

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* If defined, GRAVE_ESC will always act as ESC when CTRL is held.
 * This is useful for the Windows task manager shortcut (ctrl+shift+esc).
 */
//#define GRAVE_ESC_CTRL_OVERRIDE

/*
 * Force NKRO
 *
 * Force NKRO (nKey Rollover) to be enabled by default, regardless of the saved
 * state in the bootmagic EEPROM settings. (Note that NKRO must be enabled in the
 * makefile for this to work.)
 *
 * If forced on, NKRO can be disabled via magic key (default = LShift+RShift+N)
 * until the next keyboard reset.
 *
 * NKRO may prevent your keystrokes from being detected in the BIOS, but it is
 * fully operational during normal computer usage.
 *
 * For a less heavy-handed approach, enable NKRO via magic key (LShift+RShift+N)
 * or via bootmagic (hold SPACE+N while plugging in the keyboard). Once set by
 * bootmagic, NKRO mode will always be enabled until it is toggled again during a
 * power-up.
 *
 */
//#define FORCE_NKRO

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/* Bootmagic Lite key configuration */
//#define BOOTMAGIC_LITE_ROW 0
//#define BOOTMAGIC_LITE_COLUMN 0

#define NUMBER_OF_ENCODERS 2
#define ENCODERS_PAD_A { B10, B2 }
#define ENCODERS_PAD_B { B1, B0 }
#define ENCODER_RESOLUTION 4

// #define ENCODER_DIRECTION_FLIP

