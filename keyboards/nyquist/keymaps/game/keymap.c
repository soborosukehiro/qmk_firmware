#include "nyquist.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO
#define XXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = KEYMAP( \
  KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_W,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX, \
  KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX, \
  KC_LSFT, KC_Z,    KC_X,    KC_C,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX, \
  KC_LCTL, XXXX,    XXXX,    KC_V,    KC_LALT, KC_SPC,  XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX , \
  XXXX,    XXXX,    XXXX,    KC_LEFT, KC_DOWN, KC_RGHT, XXXX,    XXXX,    XXXX,    XXXX,    XXXX,    XXXX \
),
