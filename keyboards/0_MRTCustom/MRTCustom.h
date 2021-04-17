/* Copyright 2021 MRT
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

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT(  \
	K000, K001, K002,             K005,                   K009, K010, K011,       K013, K014, K015, K016, \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110,             K113,       K115,       \
	K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211,       K213,                   \
	K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312, K313, K314, K315, K316, \
	K400, K401, K402, K403, K404, K405, K406, K407, K408, K409, K410, K411, K412, K413, K414, K415, K416, \
	K500,       K502, K503, K504, K505, K506, K507, K508, K509, K510, K511, K512, K513, K514, K515, K516  \
) { \
	{ K000,  K001,  K002,  KC_NO, KC_NO, K005,  KC_NO, KC_NO, KC_NO, K009,  K010,  K011,  KC_NO, K013,  K014,  K015,  K016 }, \
	{ K100,  K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  KC_NO, KC_NO, K113,  KC_NO, K115,  KC_NO }, \
	{ K200,  K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  KC_NO, K213,  KC_NO, KC_NO, KC_NO }, \
	{ K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  K312,  K313,  K314,  K315,  K316 }, \
	{ K400,  K401,  K402,  K403,  K404,  K405,  K406,  K407,  K408,  K409,  K410,  K411,  K412,  K413,  K414,  K415,  K416 }, \
	{ K500,  KC_NO, K502,  K503,  K504,  K505,  K506,  K507,  K508,  K509,  K510,  K511,  K512,  K513,  K514,  K515,  K516 }  \
}
