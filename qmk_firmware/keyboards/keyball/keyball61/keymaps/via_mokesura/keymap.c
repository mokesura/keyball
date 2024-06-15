/*
Copyright 2022 @Yowkees
Copyright 2022 MURAOKA Taro (aka KoRoN, @kaoriya)

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

#include QMK_KEYBOARD_H

#include "quantum.h"

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_universal(
    KC_ESC   , _______  , KC_F2    , KC_F3    , KC_F4    , KC_F5    ,                                  KC_MUTE  , KC_VOLD  , KC_VOLU  , KC_CALC  , KC_F11   , KC_DEL   ,
    KC_TAB  ,GUI_T(KC_Q), KC_W     , KC_E     , KC_R     , KC_T     ,                                  KC_Y     , KC_U     , KC_I     , KC_O     , LT(4,KC_P), KC_BSPC  ,
    KC_RSFT  , KC_A     , KC_S     , KC_D     , KC_F     , KC_G     ,                                  KC_H     ,LT(1,KC_J), KC_K     , KC_L     , KC_MINS  , KC_ENT   ,
    KC_LCTL  , KC_Z    ,ALT_T(KC_X), KC_C     , KC_V     , KC_B     , _______  ,            _______  , KC_N     , KC_M     , KC_COMM  , KC_DOT   , KC_SLSH  , KC_BSLS  ,
    MO(3)    , KC_LGUI  , XXXXXXX , XXXXXXX , XXXXXXX , LT(2,KC_LNG2),C(KC_SPC),        S(KC_ENT), LT(1,KC_LNG2), KC_DEL   , KC_LEFT  , KC_DOWN  , KC_UP    , KC_RGHT
  ),

  [1] = LAYOUT_universal(
    _______  , _______  , _______  , _______  , _______  , _______  ,                                  _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , KC_1     , KC_2     , KC_3     , KC_4     , KC_5     ,                                  KC_6     , KC_7     , KC_8     , KC_9     , KC_0     , _______  ,
    _______  , S(KC_A)  ,S(KC_RBRC),S(SKC_NUHS),KC_RBRC  , KC_NUHS  ,                                  KC_LEFT  , KC_DOWN  , KC_UP    , KC_RGHT  , KC_BSPC  , _______  ,
    _______  , S(KC_Z)  ,S(KC_COMM),S(KC_DOT) , S(KC_8)  , S(KC_9)  , _______  ,            _______  , KC_HOME  , KC_PGDN  , KC_PGUP  , KC_END   , KC_DEL   , _______  ,
    _______  , _______  , XXXXXXX  , XXXXXXX  , XXXXXXX  , _______  , _______  ,            _______  , _______  , _______  , _______  , _______  , _______  , _______
  ),

  [2] = LAYOUT_universal(
    SSNP_FRE , S(KC_1)  , S(KC_2)  , S(KC_3)  , S(KC_4)  , S(KC_5)  ,                                  S(KC_6)  , S(KC_7)  , S(KC_8)  , S(KC_9)  ,S(KC_BSLS), _______  ,
    SSNP_VRT , _______  , KC_7     , KC_8     , KC_9     , _______  ,                                  _______  , KC_LEFT  , KC_UP    , KC_RGHT  , _______  , _______  ,
    SSNP_HOR , _______  , KC_4     , KC_5     , KC_6     ,S(KC_SCLN),                                  KC_PGUP  , KC_NUBS  , KC_DOWN  , KC_BTN2  , KC_BTN3  , _______  ,
    _______  , _______  , KC_1     , KC_2     , KC_3     ,S(KC_MINS), _______  ,            _______  , KC_PGDN  ,S(KC_NUBS), _______  , _______  , _______  , _______  ,
    _______  , _______  , XXXXXXX  , XXXXXXX  , XXXXXXX  , _______  , _______  ,            _______  , _______  , _______  , _______  , _______  , _______  , _______
  ),

  [3] = LAYOUT_universal( // Mouse
    _______  , _______  , _______  , _______  , _______  , _______  ,                                  _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  ,                                  _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , _______  , KC_BTN3  , KC_BTN2  , KC_BTN1  , _______  ,                                  _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______  , _______  ,            _______  , _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , _______  , XXXXXXX  , XXXXXXX  , XXXXXXX  , _______  , _______  ,            _______  , _______  , _______  , _______  , _______  , _______  , _______
  ),

  [4] = LAYOUT_universal( // Fn
    RGB_TOG  , AML_TO   , AML_I50  , AML_D50  , _______  , SSNP_FRE ,                                  RGB_M_P  , RGB_M_B  , RGB_M_R  , RGB_M_SW , RGB_M_SN , RGB_M_K  ,
    RGB_MOD  , RGB_HUI  , RGB_SAI  , RGB_VAI  , _______  , SSNP_VRT ,                                  RGB_M_X  , RGB_M_G  , RGB_M_T  , RGB_M_TW , _______  , _______  ,
    RGB_RMOD , RGB_HUD  , RGB_SAD  , RGB_VAD  , _______  , SSNP_HOR ,                                  CPI_D1K  , CPI_D100 , CPI_I100 , CPI_I1K  , KBC_SAVE , KBC_RST  ,
    _______  , _______  , SCRL_DVD , SCRL_DVI , SCRL_MO  , SCRL_TO  , EE_CLR   ,            EE_CLR   , _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , QK_BOOT  , XXXXXXX  , XXXXXXX  , XXXXXXX  , _______  , _______  ,            _______  , _______  , _______  , _______  , _______  , _______  , _______
  ),
};
// clang-format on

layer_state_t layer_state_set_user(layer_state_t state) {
    // Auto enable scroll mode when the highest layer is 3
    keyball_set_scroll_mode(get_highest_layer(state) == 1);
    return state;
}

#ifdef OLED_ENABLE

#    include "lib/oledkit/oledkit.h"

void oledkit_render_info_user(void) {
    keyball_oled_render_keyinfo();
    keyball_oled_render_ballinfo();
    keyball_oled_render_layerinfo();
}
#endif
