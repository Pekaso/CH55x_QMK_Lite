/*
 * Copyright 2018 Jack Humbert <jack.humb@gmail.com>
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

#ifdef ENCODER_ENABLE
void encoder_init(void);
bool encoder_read(void);

#    define NUM_DIRECTIONS 2
#    define ENCODER_CCW_CW(ccw, cw) \
        { (cw), (ccw) }
extern const uint16_t encoder_map[NUM_ENCODERS][NUM_DIRECTIONS];
#endif // ENCODER_ENABLE
