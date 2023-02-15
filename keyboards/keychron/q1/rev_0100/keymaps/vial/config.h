/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

//Vial Keyboard UID
#define VIAL_KEYBOARD_UID {0x49, 0x5F, 0x9C, 0xB8, 0x0F, 0x67, 0x4D, 0xE6}

#define VIAL_UNLOCK_COMBO_ROWS { 0, 3 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 13 }

// Disabled as Link Time Optimization does not support
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

// Configure the global tapping term (default: 200ms)
#ifdef TAPPING_TERM
    #undef TAPPING_TERM
    #define TAPPING_TERM 200
#endif

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

// Customize Caps Word
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
#define CAPS_WORD_IDEL_TIMEOUT 3000
