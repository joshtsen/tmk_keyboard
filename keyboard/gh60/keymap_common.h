/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef KEYMAP_COMMON_H
#define KEYMAP_COMMON_H

#include <stdint.h>
#include <stdbool.h>
#include <avr/pgmspace.h>
#include "keycode.h"
#include "action.h"
#include "action_macro.h"
#include "report.h"
#include "host.h"
#include "print.h"
#include "debug.h"
#include "keymap.h"


extern const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS];
extern const uint16_t fn_actions[];


/* GH60 keymap definition macro
 * K2C, K31 and  K3C are extra keys for ISO
 */
#define KEYMAP( \
    K00, K01, K02, K03, K04, K05, K06, K07, \
    K10, K11, K12, K13, K14, K15, K16, K17, \
         K21, K22, K23, K24, K25, K26, K27, \
    K30, K31,      K33, K34, K35, K36, \
    K40, K41, K42,      K44,      K46 \
) { \
    { KC_##K00, KC_##K01, KC_##K02, KC_##K03, KC_##K04, KC_##K05, KC_##K06, KC_##K07 }, \
    { KC_##K10, KC_##K11, KC_##K12, KC_##K13, KC_##K14, KC_##K15, KC_##K16, KC_##K17 }, \
    { KC_NO,    KC_##K21, KC_##K22, KC_##K23, KC_##K24, KC_##K25, KC_##K26, KC_##K27 }, \
    { KC_##K30, KC_##K31, KC_NO,    KC_##K33, KC_##K34, KC_##K35, KC_##K36, KC_NO }, \
    { KC_##K40, KC_##K41, KC_##K42, KC_NO,    KC_##K44, KC_NO,    KC_##K46, KC_NO }  \
}

/* ANSI valiant. No extra keys for ISO 
#define KEYMAP_ANSI( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B,      K2D, \
    K30, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B,           K3D, \
    K40, K41, K42,           K45,                     K4A, K4B, K4C, K4D  \
) KEYMAP( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, NO,  K2D, \
    K30, NO,  K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, NO,  K3D, \
    K40, K41, K42,           K45,                NO,  K4A, K4B, K4C, K4D  \
)


#define KEYMAP_HHKB( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K49,\
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B,      K2D, \
    K30, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B,      K3D, K3C, \
    K40, K41, K42,           K45,                     K4A, K4B, K4C, K4D  \
) KEYMAP( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, NO,  K2D, \
    K30, NO,  K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, \
    K40, K41, K42,           K45,                K49, K4A, K4B, K4C, K4D  \
)
*/
#endif
