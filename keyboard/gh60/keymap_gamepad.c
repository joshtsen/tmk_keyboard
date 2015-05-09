#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP(MINS, ESC,  1, 2, 3, 4, 5, P, \
           EQL,  TAB,  Q, W, E, R, T, L, \
                 LCTL, A, S, D, F, G, M, \
           COMM, LSFT,  Z,   C, V, B, \
           SLSH, LALT, X,    DOT,  SPC),
    
    /*KEYMAP(TRNS, TRNS, F1, F2, F3, F4, F5, TRNS, \
           TRNS, TRNS, F6, F7, F8, F9, F10, TRNS, \
                 TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
           TRNS, TRNS, TRNS, TRNS, TRNS),*/
};

const uint16_t PROGMEM fn_actions[] = {
  //[0] ACTION_LAYER_TAP_KEY(1, KC_ESC),
};
