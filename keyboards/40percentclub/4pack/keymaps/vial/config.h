/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0xA4, 0x05, 0xFD, 0x20, 0xD2, 0xE4, 0xB4, 0xEB}


    #define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
    #define VIAL_UNLOCK_COMBO_COLS { 0, 3 }

// The pin connected to the data pin of the LEDs
#define RGB_DI_PIN D3
// The number of LEDs connected
#define DRIVER_LED_TOTAL 4

#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES

#define ENABLE_RGB_MATRIX_BREATHING
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_RAINDROPS
#define ENABLE_RGB_MATRIX_HUE_PENDULUM
#define ENABLE_RGB_MATRIX_HUE_WAVE
#define ENABLE_RGB_MATRIX_DIGITAL_RAIN
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE
#define ENABLE_RGB_MATRIX_SPLASH
