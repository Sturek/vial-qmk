/* Copyright 2019 Arda Kilicdagi
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


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT( /* Base */
        KC_A, KC_S, KC_D, KC_F
    ),
};

led_config_t g_led_config = { {
  // Key Matrix to LED Index
  {   0, 1, 2, 3 }
}, {
  // LED Index to Physical Position
  { 224,  0 }, { 150,  0 }, { 75,  0 }, {  0,  0 }
}, {
  // LED Index to Flag
  1, 1, 1, 1
} };
