/* Any song or sound without a license explicitly stated is:
 *
 * Copyright 2016 Jack Humbert
 * Copyright 2017 Zach White
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

#include "musical_notes.h"

#define NO_SOUND

/* Ode to Joy
 * Author: Friedrich Schiller
 + License: Public Domain
 */
#define ODE_TO_JOY Q__NOTE(_E4), Q__NOTE(_E4), Q__NOTE(_F4), Q__NOTE(_G4), Q__NOTE(_G4), Q__NOTE(_F4), Q__NOTE(_E4), Q__NOTE(_D4), Q__NOTE(_C4), Q__NOTE(_C4), Q__NOTE(_D4), Q__NOTE(_E4), QD_NOTE(_E4), E__NOTE(_D4), H__NOTE(_D4),

/* Rock-a-bye Baby
 * Author: Unknown
 + License: Public Domain
 */
#define ROCK_A_BYE_BABY QD_NOTE(_B4), E__NOTE(_D4), Q__NOTE(_B5), H__NOTE(_A5), Q__NOTE(_G5), QD_NOTE(_B4), E__NOTE(_D5), Q__NOTE(_G5), H__NOTE(_FS5),

#define CLUEBOARD_SOUND HD_NOTE(_C3), HD_NOTE(_D3), HD_NOTE(_E3), HD_NOTE(_F3), HD_NOTE(_G3), HD_NOTE(_A4), HD_NOTE(_B4), HD_NOTE(_C4)
/*
    HD_NOTE(_G3), HD_NOTE(_E3), HD_NOTE(_C3), \
    Q__NOTE(_E3), Q__NOTE(_C3), Q__NOTE(_G3), \
    Q__NOTE(_E3)
*/
/*
    HD_NOTE(_C3), HD_NOTE(_G3), HD_NOTE(_E3), \
    Q__NOTE(_G3), Q__NOTE(_E3), Q__NOTE(_G3), \
    Q__NOTE(_F3)
*/

#define STARTUP_SOUND E__NOTE(_E6), E__NOTE(_A6), ED_NOTE(_E7),

#define GOODBYE_SOUND E__NOTE(_E7), E__NOTE(_A6), ED_NOTE(_E6),

#define PLANCK_SOUND ED_NOTE(_E7), E__NOTE(_CS7), E__NOTE(_E6), E__NOTE(_A6), M__NOTE(_CS7, 20),

#define PREONIC_SOUND M__NOTE(_B5, 20), E__NOTE(_B6), M__NOTE(_DS6, 20), E__NOTE(_B6),

#define QWERTY_SOUND E__NOTE(_GS6), E__NOTE(_A6), S__NOTE(_REST), Q__NOTE(_E7),

#define COLEMAK_SOUND E__NOTE(_GS6), E__NOTE(_A6), S__NOTE(_REST), ED_NOTE(_E7), S__NOTE(_REST), ED_NOTE(_GS7),

#define DVORAK_SOUND E__NOTE(_GS6), E__NOTE(_A6), S__NOTE(_REST), E__NOTE(_E7), S__NOTE(_REST), E__NOTE(_FS7), S__NOTE(_REST), E__NOTE(_E7),

#define WORKMAN_SOUND E__NOTE(_GS6), E__NOTE(_A6), S__NOTE(_REST), E__NOTE(_GS6), E__NOTE(_A6), S__NOTE(_REST), ED_NOTE(_FS7), S__NOTE(_REST), ED_NOTE(_A7),

#define PLOVER_SOUND E__NOTE(_GS6), E__NOTE(_A6), S__NOTE(_REST), ED_NOTE(_E7), S__NOTE(_REST), ED_NOTE(_A7),

#define PLOVER_GOODBYE_SOUND E__NOTE(_GS6), E__NOTE(_A6), S__NOTE(_REST), ED_NOTE(_A7), S__NOTE(_REST), ED_NOTE(_E7),

#define MUSIC_ON_SOUND E__NOTE(_A5), E__NOTE(_B5), E__NOTE(_CS6), E__NOTE(_D6), E__NOTE(_E6), E__NOTE(_FS6), E__NOTE(_GS6), E__NOTE(_A6),

#define AUDIO_ON_SOUND E__NOTE(_A5), E__NOTE(_A6),

#define AUDIO_OFF_SOUND E__NOTE(_A6), E__NOTE(_A5),

#define MUSIC_SCALE_SOUND MUSIC_ON_SOUND

#define MUSIC_OFF_SOUND E__NOTE(_A6), E__NOTE(_GS6), E__NOTE(_FS6), E__NOTE(_E6), E__NOTE(_D6), E__NOTE(_CS6), E__NOTE(_B5), E__NOTE(_A5),

#define VOICE_CHANGE_SOUND Q__NOTE(_A5), Q__NOTE(_CS6), Q__NOTE(_E6), Q__NOTE(_A6),

#define CHROMATIC_SOUND Q__NOTE(_A5), Q__NOTE(_AS5), Q__NOTE(_B5), Q__NOTE(_C6), Q__NOTE(_CS6),

#define MAJOR_SOUND Q__NOTE(_A5), Q__NOTE(_B5), Q__NOTE(_CS6), Q__NOTE(_D6), Q__NOTE(_E6),

#define MINOR_SOUND Q__NOTE(_A5), Q__NOTE(_B5), Q__NOTE(_C6), Q__NOTE(_D6), Q__NOTE(_E6),

#define GUITAR_SOUND Q__NOTE(_E5), Q__NOTE(_A5), Q__NOTE(_D6), Q__NOTE(_G6),

#define VIOLIN_SOUND Q__NOTE(_G5), Q__NOTE(_D6), Q__NOTE(_A6), Q__NOTE(_E7),

#define CAPS_LOCK_ON_SOUND E__NOTE(_A3), E__NOTE(_B3),

#define CAPS_LOCK_OFF_SOUND E__NOTE(_B3), E__NOTE(_A3),

#define SCROLL_LOCK_ON_SOUND E__NOTE(_D4), E__NOTE(_E4),

#define SCROLL_LOCK_OFF_SOUND E__NOTE(_E4), E__NOTE(_D4),

#define NUM_LOCK_ON_SOUND E__NOTE(_D5), E__NOTE(_E5),

#define NUM_LOCK_OFF_SOUND E__NOTE(_E5), E__NOTE(_D5),

#define AG_NORM_SOUND E__NOTE(_A5), E__NOTE(_A5),

#define AG_SWAP_SOUND SD_NOTE(_B5), SD_NOTE(_A5), SD_NOTE(_B5), SD_NOTE(_A5),

#define UNICODE_WINDOWS E__NOTE(_B5), S__NOTE(_E6),

#define UNICODE_LINUX E__NOTE(_E6), S__NOTE(_B5),

#define TERMINAL_SOUND E__NOTE(_C5)

/* Title:            La Campanella
 * Author/Composer:  Frank Lizst
 + License:          Public Domain
 */
#define CAMPANELLA                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 \
    Q__NOTE(_DS4), E__NOTE(_DS4), E__NOTE(_DS5), Q__NOTE(_DS5), E__NOTE(_DS5), E__NOTE(_DS6), Q__NOTE(_DS5), E__NOTE(_DS5), E__NOTE(_DS6), Q__NOTE(_CS5), E__NOTE(_CS5), E__NOTE(_DS6), Q__NOTE(_B4), E__NOTE(_B4), E__NOTE(_DS6), Q__NOTE(_B4), E__NOTE(_B4), E__NOTE(_DS6), Q__NOTE(_AS4), E__NOTE(_AS4), E__NOTE(_DS6), Q__NOTE(_GS4), E__NOTE(_GS4), E__NOTE(_DS6), Q__NOTE(_G4), E__NOTE(_G4), E__NOTE(_DS6), Q__NOTE(_GS4), E__NOTE(_GS4), E__NOTE(_DS6), Q__NOTE(_AS4), E__NOTE(_AS4), E__NOTE(_DS6), Q__NOTE(_DS4), E__NOTE(_DS4), E__NOTE(_DS6), Q__NOTE(_DS5), E__NOTE(_DS5), E__NOTE(_DS6), Q__NOTE(_E5), E__NOTE(_E5), E__NOTE(_DS6), Q__NOTE(_DS5), E__NOTE(_DS5), E__NOTE(_DS6), Q__NOTE(_CS5), E__NOTE(_CS5), E__NOTE(_DS6), Q__NOTE(_B4), E__NOTE(_B4), E__NOTE(_DS6), Q__NOTE(_B4), E__NOTE(_B4), E__NOTE(_DS6), Q__NOTE(_AS4), E__NOTE(_AS4), E__NOTE(_DS6), Q__NOTE(_GS4), E__NOTE(_GS4), E__NOTE(_DS6), Q__NOTE(_G4), E__NOTE(_G4), E__NOTE(_DS6), Q__NOTE(_GS4), E__NOTE(_GS4), E__NOTE(_DS6), Q__NOTE(_AS4), \
        E__NOTE(_AS4), E__NOTE(_DS6), Q__NOTE(_DS4), E__NOTE(_DS4), E__NOTE(_DS5), Q__NOTE(_DS5), E__NOTE(_DS5), E__NOTE(_DS6), Q__NOTE(_DS6), E__NOTE(_DS6), E__NOTE(_DS7), Q__NOTE(_DS6), E__NOTE(_DS6), E__NOTE(_DS7), Q__NOTE(_CS6), E__NOTE(_CS6), E__NOTE(_DS7), Q__NOTE(_B5), E__NOTE(_B5), E__NOTE(_DS7), Q__NOTE(_B5), E__NOTE(_B5), E__NOTE(_DS7), Q__NOTE(_AS5), E__NOTE(_AS5), E__NOTE(_DS7), Q__NOTE(_GS5), E__NOTE(_GS5), E__NOTE(_DS7), Q__NOTE(_G5), E__NOTE(_G5), E__NOTE(_DS7), Q__NOTE(_GS5), E__NOTE(_GS5), E__NOTE(_DS7), Q__NOTE(_AS5), E__NOTE(_AS5), E__NOTE(_DS7), Q__NOTE(_DS5), E__NOTE(_DS5), E__NOTE(_DS7), W__NOTE(_DS6), W__NOTE(_GS5),

/* Title:            Fantaisie-Impromptu
 * Author/Composer:  Chopin
 * License:          Public Domain
 */
#define FANTASIE_IMPROMPTU                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   \
    E__NOTE(_GS4), E__NOTE(_A4), E__NOTE(_GS4), E__NOTE(_REST), E__NOTE(_GS4), E__NOTE(_CS5), E__NOTE(_E5), E__NOTE(_DS5), E__NOTE(_CS5), E__NOTE(_DS5), E__NOTE(_CS5), E__NOTE(_C5), E__NOTE(_CS5), E__NOTE(_E5), E__NOTE(_GS5), E__NOTE(_GS4), E__NOTE(_A4), E__NOTE(_GS4), E__NOTE(_REST), E__NOTE(_GS4), E__NOTE(_CS5), E__NOTE(_E5), E__NOTE(_DS5), E__NOTE(_CS5), E__NOTE(_DS5), E__NOTE(_CS5), E__NOTE(_C5), E__NOTE(_CS5), E__NOTE(_E5), E__NOTE(_GS5), E__NOTE(_A4), E__NOTE(_CS5), E__NOTE(_DS5), E__NOTE(_FS5), E__NOTE(_A5), E__NOTE(_CS6), E__NOTE(_DS6), E__NOTE(_B6), E__NOTE(_A6), E__NOTE(_GS6), E__NOTE(_FS6), E__NOTE(_E6), E__NOTE(_DS6), E__NOTE(_FS6), E__NOTE(_CS6), E__NOTE(_C5), E__NOTE(_DS6), E__NOTE(_A5), E__NOTE(_GS5), E__NOTE(_FS5), E__NOTE(_A5), E__NOTE(_E5), E__NOTE(_DS5), E__NOTE(_FS5), E__NOTE(_CS5), E__NOTE(_C5), E__NOTE(_DS5), E__NOTE(_A4), E__NOTE(_GS4), E__NOTE(_B4), E__NOTE(_A4), E__NOTE(_A4), E__NOTE(_GS4), E__NOTE(_A4), E__NOTE(_GS4), E__NOTE(_REST), E__NOTE(_GS4), \
        E__NOTE(_CS5), E__NOTE(_E5), E__NOTE(_DS5), E__NOTE(_CS5), E__NOTE(_DS5), E__NOTE(_CS5), E__NOTE(_C5), E__NOTE(_CS5), E__NOTE(_E5), E__NOTE(_GS5), E__NOTE(_GS4), E__NOTE(_AS4), E__NOTE(_GS4), E__NOTE(_REST), E__NOTE(_GS4), E__NOTE(_CS5), E__NOTE(_E5), E__NOTE(_DS5), E__NOTE(_CS5), E__NOTE(_DS5), E__NOTE(_CS5), E__NOTE(_C5), E__NOTE(_CS5), E__NOTE(_E5), E__NOTE(_GS5), E__NOTE(_DS5), E__NOTE(_E5), E__NOTE(_DS5), E__NOTE(_REST), E__NOTE(_DS5), E__NOTE(_B5), E__NOTE(_AS5), E__NOTE(_GS5), E__NOTE(_REST), E__NOTE(_E6), E__NOTE(_DS6), E__NOTE(_CS6), E__NOTE(_B5), E__NOTE(_AS5), E__NOTE(_GS5), E__NOTE(_REST), E__NOTE(_AS5), WD_NOTE(_GS5),

/* Title:            Nocturne Op. 9 No. 1 in B flat minor
 * Author/Composer:  Chopin
   License:          Public Domain
*/
#define NOCTURNE_OP_9_NO_1                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       \
    H__NOTE(_BF5), H__NOTE(_C6), H__NOTE(_DF6), H__NOTE(_A5), H__NOTE(_BF5), H__NOTE(_GF5), W__NOTE(_F5), W__NOTE(_F5), W__NOTE(_F5), W__NOTE(_F5), H__NOTE(_GF5), H__NOTE(_F5), H__NOTE(_EF5), H__NOTE(_C5), B__NOTE(_DF5), W__NOTE(_BF4), Q__NOTE(_BF5), Q__NOTE(_C6), Q__NOTE(_DF6), Q__NOTE(_A5), Q__NOTE(_BF5), Q__NOTE(_A5), Q__NOTE(_GS5), Q__NOTE(_A5), Q__NOTE(_C6), Q__NOTE(_BF5), Q__NOTE(_GF5), Q__NOTE(_F5), Q__NOTE(_GF5), Q__NOTE(_E5), Q__NOTE(_F5), Q__NOTE(_BF5), Q__NOTE(_A5), Q__NOTE(_AF5), Q__NOTE(_G5), Q__NOTE(_GF5), Q__NOTE(_F5), Q__NOTE(_E5), Q__NOTE(_EF5), Q__NOTE(_D5), Q__NOTE(_DF5), Q__NOTE(_C5), Q__NOTE(_DF5), Q__NOTE(_C5), Q__NOTE(_B4), Q__NOTE(_C5), Q__NOTE(_F5), Q__NOTE(_E5), Q__NOTE(_EF5), B__NOTE(_DF5), W__NOTE(_BF4), W__NOTE(_BF5), W__NOTE(_BF5), W__NOTE(_BF5), BD_NOTE(_AF5), W__NOTE(_DF5), H__NOTE(_BF4), H__NOTE(_C5), H__NOTE(_DF5), H__NOTE(_GF5), H__NOTE(_GF5), BD_NOTE(_F5), W__NOTE(_EF5), H__NOTE(_F5), H__NOTE(_EF5), H__NOTE(_DF5), H__NOTE(_A4), B__NOTE(_AF4), \
        W__NOTE(_DF5), W__NOTE(_EF5), H__NOTE(_F5), H__NOTE(_EF5), H__NOTE(_DF5), H__NOTE(_EF5), BD_NOTE(_F5),

/* Removed sounds
 +   This list is here solely for compatibility, so that removed songs don't just break things
 *   If you think that any of these songs were wrongfully removed, let us know and provide
 *   proof of permission to use them, or public domain status.
 */

#define CLOSE_ENCOUNTERS_5_NOTE
#define DOE_A_DEER
#define IN_LIKE_FLINT
#define BASKET_CASE
#define SONIC_RING
#define NUMBER_ONE
#define CABBAGE_SONG
#define VICTORY_FANFARE_SHORT
#define ALL_STAR
#define RICK_ROLL
#define FF_PRELUDE
#define KATAWARE_DOKI
#define MEGALOVANIA
#define MICHISHIRUBE
#define LIEBESLEID
#define MELODIES_OF_LIFE
#define EYES_ON_ME
#define SONG_OF_THE_ANCIENTS
#define NIER_AMUSEMENT_PARK
#define COPIED_CITY
#define VAGUE_HOPE_COLD_RAIN
#define KAINE_SALVATION
#define WEIGHT_OF_THE_WORLD
#define ISABELLAS_LULLABY
#define TERRAS_THEME
#define RENAI_CIRCULATION
#define PLATINUM_DISCO

#define GOT_THEME \
  WD_NOTE(_G5), WD_NOTE(_C5), Q__NOTE(_EF5), Q__NOTE(_F5), W__NOTE(_G5), W__NOTE(_C5), Q__NOTE(_EF5), Q__NOTE(_F5), H__NOTE(_D5), \
  H__NOTE(_G4), Q__NOTE(_BF4), Q__NOTE(_C5), H__NOTE(_D5), H__NOTE(_G4), Q__NOTE(_BF4), Q__NOTE(_C5), H__NOTE(_D5), \
  H__NOTE(_G4), Q__NOTE(_BF4), Q__NOTE(_C5), H__NOTE(_D5), H__NOTE(_BF4), H__NOTE(_D5), WD_NOTE(_F5), WD_NOTE(_BF4), \
  W__NOTE(_D5), H__NOTE(_EF5), W__NOTE(_D5), H__NOTE(_BF4), H__NOTE(_C5), H__NOTE(_G4), Q__NOTE(_AF4), Q__NOTE(_BF4), \
  H__NOTE(_C5), H__NOTE(_G4), Q__NOTE(_AF4), Q__NOTE(_BF4), H__NOTE(_C5), H__NOTE(_G4), Q__NOTE(_AF4), Q__NOTE(_BF4), \
  WD_NOTE(_C5), H__NOTE(_C6), H__NOTE(_EF5), Q__NOTE(_AF5), Q__NOTE(_BF5), H__NOTE(_C6), H__NOTE(_EF5), Q__NOTE(_AF5), \
  Q__NOTE(_C6), H__NOTE(_BF5), H__NOTE(_EF5), Q__NOTE(_G5), Q__NOTE(_AF5), H__NOTE(_BF5), H__NOTE(_EF5), H__NOTE(_G5), \
  H__NOTE(_AF5), H__NOTE(_C5), Q__NOTE(_F5), Q__NOTE(_G5), H__NOTE(_AF5), H__NOTE(_C5), Q__NOTE(_G5), Q__NOTE(_AF5), \
  H__NOTE(_G5), H__NOTE(_C5), Q__NOTE(_EF5), Q__NOTE(_F5), H__NOTE(_G5), H__NOTE(_C5), H__NOTE(_D5), H__NOTE(_EF5), \
  H__NOTE(_AF4), Q__NOTE(_C5), Q__NOTE(_D5), H__NOTE(_EF5), H__NOTE(_AF4), Q__NOTE(_C5), Q__NOTE(_D5), H__NOTE(_EF5), \
  H__NOTE(_AF4), H__NOTE(_EF5), H__NOTE(_D5), H__NOTE(_G4), H__NOTE(_D5), H__NOTE(_C5), H__NOTE(_G4), Q__NOTE(_AF4), \
  Q__NOTE(_BF4), H__NOTE(_C5), H__NOTE(_G4), Q__NOTE(_AF4), Q__NOTE(_BF4), H__NOTE(_C5), H__NOTE(_G5), Q__NOTE(_AF5), \
  Q__NOTE(_BF5), H__NOTE(_C6), H__NOTE(_G5), Q__NOTE(_AF5), Q__NOTE(_BF5), H__NOTE(_C6), H__NOTE(_G5), Q__NOTE(_AF5), \
  Q__NOTE(_BF5), WD_NOTE(_C6),

#define THE_RAINS_OF_CASTAMERE \
  H__NOTE(_A4), WD_NOTE(_F5), H__NOTE(_A4), WD_NOTE(_E5), H__NOTE(_A4), W__NOTE(_F5), W__NOTE(_G5), WD_NOTE(_E5), H__NOTE(_A4), \
  W__NOTE(_G5), W__NOTE(_F5), W__NOTE(_E5), W__NOTE(_D5), BD_NOTE(_E5), H__NOTE(_A5), W__NOTE(_A5), H__NOTE(_BF5), \
  W__NOTE(_G5), H__NOTE(_C5), H__NOTE(_C5), W__NOTE(_A5), W__NOTE(_BF5), WD_NOTE(_G5), H__NOTE(_C5), W__NOTE(_BF5), \
  W__NOTE(_A5), W__NOTE(_G5), W__NOTE(_F5), BD_NOTE(_E5), W__NOTE(_A4), H__NOTE(_E5), H__NOTE(_F5), B__NOTE(_D5), \
  W__NOTE(_F5), H__NOTE(_F5), H__NOTE(_E5), B__NOTE(_A4), W__NOTE(_A4), H__NOTE(_E5), H__NOTE(_F5), B__NOTE(_D5), \
  W__NOTE(_F5), BD_NOTE(_E5), W__NOTE(_A4), H__NOTE(_E5), H__NOTE(_F5), B__NOTE(_D5), W__NOTE(_A5), W__NOTE(_A5), \
  W__NOTE(_G5), WD_NOTE(_D5), H__NOTE(_E5), WD_NOTE(_F5), H__NOTE(_D5), WD_NOTE(_E5), H__NOTE(_C5), BD_NOTE(_D5), \
  W__NOTE(_A4), H__NOTE(_E5), H__NOTE(_F5), B__NOTE(_D5), W__NOTE(_A5), W__NOTE(_A5), W__NOTE(_G5), WD_NOTE(_D5), \
  H__NOTE(_E5), WD_NOTE(_F5), H__NOTE(_D5), H__NOTE(_A5), H__NOTE(_G5), H__NOTE(_E5), H__NOTE(_F5), BD_NOTE(_D5),

#define LIGHT_OF_THE_SEVEN \
  H__NOTE(_C5), H__NOTE(_G5), H__NOTE(_EF6), H__NOTE(_G5), H__NOTE(_EF6), H__NOTE(_G5), H__NOTE(_C5), H__NOTE(_G5), H__NOTE(_F4), \
  H__NOTE(_C5), H__NOTE(_AF5), H__NOTE(_C5), H__NOTE(_AF5), H__NOTE(_C5), H__NOTE(_F4), H__NOTE(_C5), H__NOTE(_C5), \
  H__NOTE(_G5), H__NOTE(_EF6), H__NOTE(_G5), H__NOTE(_EF6), H__NOTE(_G5), H__NOTE(_C5), H__NOTE(_G5), BD_NOTE(_C5), \
  H__NOTE(_F4), H__NOTE(_C5), H__NOTE(_AF5), H__NOTE(_C5), H__NOTE(_AF5), H__NOTE(_C5), H__NOTE(_F4), H__NOTE(_C5), \
  H__NOTE(_EF4), H__NOTE(_BF4), H__NOTE(_G5), H__NOTE(_BF4), B__NOTE(_G5), H__NOTE(_G4), H__NOTE(_D5), H__NOTE(_F5), \
  H__NOTE(_D5), B__NOTE(_F5), BD_NOTE(_C5), H__NOTE(_C7), H__NOTE(_G5), H__NOTE(_EF6), H__NOTE(_G5), H__NOTE(_C7), \
  H__NOTE(_G5), H__NOTE(_C5), H__NOTE(_G5), H__NOTE(_C7), H__NOTE(_C5), H__NOTE(_BF6), H__NOTE(_C5), H__NOTE(_AF6), \
  H__NOTE(_C5), H__NOTE(_G6), H__NOTE(_C5), H__NOTE(_C7), H__NOTE(_G5), H__NOTE(_EF6), H__NOTE(_G5), H__NOTE(_C7), \
  H__NOTE(_G5), H__NOTE(_C5), H__NOTE(_G5), BD_NOTE(_C7), H__NOTE(_C7), H__NOTE(_G5), H__NOTE(_EF6), H__NOTE(_G5), \
  H__NOTE(_C7), H__NOTE(_G5), H__NOTE(_C5), H__NOTE(_G5), H__NOTE(_C7), H__NOTE(_G5), H__NOTE(_B6), H__NOTE(_G5), \
  H__NOTE(_A6), H__NOTE(_G5), H__NOTE(_G6), H__NOTE(_G5), H__NOTE(_C7), H__NOTE(_EF5), H__NOTE(_C6), H__NOTE(_EF5), \
  H__NOTE(_C7), H__NOTE(_EF5), H__NOTE(_G5), H__NOTE(_EF5), BD_NOTE(_C7), B__NOTE(_C7), B__NOTE(_G6), H__NOTE(_AF6), \
  H__NOTE(_BF6), W__NOTE(_C7), B__NOTE(_G6), B__NOTE(_C6), B__NOTE(_G5), H__NOTE(_AF5), H__NOTE(_BF5), W__NOTE(_C6), \
  B__NOTE(_D6), B__NOTE(_F6), B__NOTE(_G5), H__NOTE(_C6), H__NOTE(_D6), W__NOTE(_F6), W__NOTE(_C6), W__NOTE(_G5), \
  BD_NOTE(_C7),

#define IMPERIAL_MARCH \
  HD_NOTE(_A4), HD_NOTE(_A4), HD_NOTE(_A4), QD_NOTE(_F4), QD_NOTE(_C5), \
  HD_NOTE(_A4), QD_NOTE(_F4),  QD_NOTE(_C5), WD_NOTE(_A4), \
  HD_NOTE(_E5), HD_NOTE(_E5), HD_NOTE(_E5), QD_NOTE(_F5), QD_NOTE(_C5), \
  HD_NOTE(_A4), QD_NOTE(_F4),  QD_NOTE(_C5), WD_NOTE(_A4)

#define COIN_SOUND \
    E__NOTE(_A5  ),      \
    HD_NOTE(_E6  ),

#define ONE_UP_SOUND \
Q__NOTE(_E6  ),  \
Q__NOTE(_G6  ),  \
Q__NOTE(_E7  ),  \
Q__NOTE(_C7  ),  \
Q__NOTE(_D7  ),  \
Q__NOTE(_G7  ),

#define ZELDA_PUZZLE \
    Q__NOTE(_G5),     \
    Q__NOTE(_FS5),    \
    Q__NOTE(_DS5),     \
    Q__NOTE(_A4),    \
    Q__NOTE(_GS4),     \
    Q__NOTE(_E5),     \
    Q__NOTE(_GS5),     \
    HD_NOTE(_C6),

#define ZELDA_TREASURE \
    Q__NOTE(_A4 ), \
    Q__NOTE(_AS4), \
    Q__NOTE(_B4 ), \
    HD_NOTE(_C5 ), \

#define OVERWATCH_THEME \
    HD_NOTE(_A4 ), \
    Q__NOTE(_E4 ), \
    Q__NOTE(_A4 ), \
    HD_NOTE(_B4 ), \
    Q__NOTE(_E4 ), \
    Q__NOTE(_B4 ), \
    W__NOTE(_CS5),

#define MARIO_THEME \
    Q__NOTE(_E5), \
    H__NOTE(_E5), \
    H__NOTE(_E5), \
    Q__NOTE(_C5), \
    H__NOTE(_E5), \
    W__NOTE(_G5), \
    Q__NOTE(_G4),

#define MARIO_GAMEOVER \
    HD_NOTE(_C5 ), \
    HD_NOTE(_G4 ), \
    H__NOTE(_E4 ), \
    H__NOTE(_A4 ), \
    H__NOTE(_B4 ), \
    H__NOTE(_A4 ), \
    H__NOTE(_AF4), \
    H__NOTE(_BF4), \
    H__NOTE(_AF4), \
    WD_NOTE(_G4 ),

#define MARIO_MUSHROOM \
    S__NOTE(_C5 ), \
    S__NOTE(_G4 ), \
    S__NOTE(_C5 ), \
    S__NOTE(_E5 ), \
    S__NOTE(_G5 ), \
    S__NOTE(_C6 ), \
    S__NOTE(_G5 ), \
    S__NOTE(_GS4), \
    S__NOTE(_C5 ), \
    S__NOTE(_DS5), \
    S__NOTE(_GS5), \
    S__NOTE(_DS5), \
    S__NOTE(_GS5), \
    S__NOTE(_C6 ), \
    S__NOTE(_DS6), \
    S__NOTE(_GS6), \
    S__NOTE(_DS6), \
    S__NOTE(_AS4), \
    S__NOTE(_D5 ), \
    S__NOTE(_F5 ), \
    S__NOTE(_AS5), \
    S__NOTE(_D6 ), \
    S__NOTE(_F6 ), \
    S__NOTE(_AS6), \
    S__NOTE(_F6 )

#define E1M1_DOOM  \
    Q__NOTE(_E3 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_E4 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_D4 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_C4 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_BF3), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_B3 ), \
    Q__NOTE(_C4 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_E4 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_D4 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_C4 ), \
    Q__NOTE(_E3 ), \
    Q__NOTE(_E3 ), \
    H__NOTE(_BF3),

#define DISNEY_SONG \
    H__NOTE(_G3 ),  \
    H__NOTE(_G4 ),  \
    H__NOTE(_F4 ),  \
    H__NOTE(_E4 ),  \
    H__NOTE(_CS4),  \
    H__NOTE(_D4 ),  \
    W__NOTE(_A4 ),  \
    H__NOTE(_B3 ),  \
    H__NOTE(_B4 ),  \
    H__NOTE(_A4 ),  \
    H__NOTE(_G4 ),  \
    H__NOTE(_FS4),  \
    H__NOTE(_G4 ),  \
    W__NOTE(_C5 ),  \
    H__NOTE(_D5 ),  \
    H__NOTE(_C5 ),  \
    H__NOTE(_B4 ),  \
    H__NOTE(_A4 ),  \
    H__NOTE(_G4 ),  \
    H__NOTE(_F4 ),  \
    H__NOTE(_E4 ),  \
    H__NOTE(_D4 ),  \
    W__NOTE(_A4 ),  \
    W__NOTE(_B3 ),  \
    W__NOTE(_C4 ),

#define OLD_SPICE  \
    Q__NOTE(_A4 ), \
    Q__NOTE(_A4 ), \
    H__NOTE(_B4 ), \
    H__NOTE(_D5 ), \
    H__NOTE(_CS5), \
    Q__NOTE(_E5 ), \
    H__NOTE(_FS5), \
    H__NOTE(_D5 ), \

#define TO_BOLDLY_GO \
  W__NOTE(_BF3 ), \
  Q__NOTE(_EF4 ), \
  WD_NOTE(_AF4 ), \
  W__NOTE(_REST), \
  H__NOTE(_G4  ), \
  Q__NOTE(_EF4 ), \
  H__NOTE(_C4  ), \
  W__NOTE(_REST), \
  QD_NOTE(_F4  ), \
  M__NOTE(_BF4, 128),

#define LP_NUMB	\
	H__NOTE(_CS5), H__NOTE(_E5), H__NOTE(_CS5), WD_NOTE(_FS5), \
	WD_NOTE(_A5), WD_NOTE(_GS5),   WD_NOTE(_REST),  H__NOTE(_CS5), H__NOTE(_E5), \
	H__NOTE(_CS5), WD_NOTE(_A5), WD_NOTE(_GS5), WD_NOTE(_E5),
