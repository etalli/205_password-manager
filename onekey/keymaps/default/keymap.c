// Copyright 2020 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

// uncomment if this is for pwtool
#define PWT

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes { MACRO_A = SAFE_RANGE, MACRO_B };

enum keymap_layer {
    KL_BASE,
    KL_NUMBER,
};

#define MS_MT LCTL(LSFT(KC_M))
#define CL_SPC LT(KL_NUMBER, KC_SPC) // Hold to change layer, tap to input space key

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//        LAYOUT_ortho_1x1(KC_A)

    [KL_BASE] =  LAYOUT_ortho_1x1(  // Base
#ifndef PWT              // LMT rev.2, default
    KC_D
#else                    // if PWT is defined.
    MACRO_A
#endif
       ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MACRO_A:
            if (record->event.pressed) {        // pressed
                SEND_STRING("");
            } else {                            // released
                SEND_STRING(SS_TAP(X_ENTER));   // enter
            }
            break;
        case MACRO_B:
            if (record->event.pressed) {        // pressed
                SEND_STRING("xxx");
            } else {                            // released
                SEND_STRING(SS_TAP(X_ENTER));   // enter
            }
            break;
    }
    return true;
}
