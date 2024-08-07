// Copyright 2023 Coffee Break Keyboards (@CoffeeBreakKeyboards)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

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

// The pin connected to the data pin of the LEDs
#define RGB_DI_PIN GP16
// The number of LEDs connected
#define RGB_MATRIX_LED_COUNT 20
