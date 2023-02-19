/* Copyright 2021 weteor
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "keymap_extras/keymap_swedish.h"

enum layers
{
    _ALPHA_QWERTY = 0,
    _SYM,
    _NAV,
    _NUM,
    _MOUSE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    
    [_ALPHA_QWERTY] = LAYOUT(
        KC_Q,             KC_W,    KC_E,    KC_R,    KC_T,                KC_Y,    KC_U,    KC_I,    KC_O,     KC_P,
        LT(_MOUSE, KC_A), KC_S,    KC_D,    KC_F,    KC_G,                KC_H,    KC_J,    KC_K,    KC_L,     SE_LBRC,
        LSFT_T(KC_Z),     KC_X,    KC_C,    KC_V,    KC_B,                KC_N,    KC_M,    KC_COMM, KC_DOT,   RSFT_T(KC_SLSH),
                LCTL_T(KC_ESC), LCMD_T(KC_TAB), LT(_NAV, KC_SPC),     LT(_SYM, KC_ENT), LT(_NUM, KC_BSPC), LALT_T(KC_DEL)         
    ),
    [_SYM] = LAYOUT(
        SE_EXLM, SE_DQUO, SE_HASH, SE_DLR, SE_PERC,                                 SE_AMPR, SE_SLSH, SE_LPRN, SE_RPRN, SE_QUES,
        XXXXXXX, SE_QUOT, SE_GRV, XXXXXXX,  XXXXXXX,                                XXXXXXX, XXXXXXX, XXXXXXX, SE_TILD, SE_EQL, 
        SE_PIPE, SE_LABK, SE_RABK, XXXXXXX, XXXXXXX,                                XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
                                        XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX         
    ),    
    [_NAV] = LAYOUT(
        XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX,                                XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                KC_LEFT, KC_DOWN, KC_UP, KC_RGHT,  XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                        XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX         
    ),
    [_NUM] = LAYOUT(
        SE_1,  SE_2, SE_3, SE_4, SE_5,                                              SE_6,  SE_7,  SE_8,  SE_9, SE_0,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX, XXXXXXX,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,                            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX, XXXXXXX,
                                        XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX
    ),
    [_MOUSE] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                XXXXXXX, KC_MS_WH_UP, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                XXXXXXX, KC_MS_WH_DOWN, XXXXXXX, XXXXXXX, XXXXXXX,
                                        XXXXXXX, XXXXXXX, XXXXXXX,      KC_MS_BTN1, KC_MS_BTN2, XXXXXXX
    )
};
