/*
   Evocatio-CapFuzz: capability related defs
   -----------------------------------------

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at:
   https://www.apache.org/licenses/LICENSE-2.0
*/

#ifndef _EVOCATIO_CAPABILITY_H
#define _EVOCATIO_CAPABILITY_H

#include "types.h"

// The 8 bits are used for:
// | NULL|NULL | Occur|Dbyte|Cbyte | Occur|Dbyte|Cbyte |
// | Reserved  |     NON-CRASH     |       CRASH       |
typedef u8 EvoCapCodeT;

#define EVO_CAPCODE_CR_XX 0x04 //Crash, Same Bitmap, Same Cap => None
#define EVO_CAPCODE_CR_XC 0x05 //Crash, Diff Bitmap, Same Cap => C-byte
#define EVO_CAPCODE_CR_DX 0x06 //Crash, Same Bitmap, Diff Cap => D-byte
#define EVO_CAPCODE_CR_DC 0x07 //Crash, Diff Bitmap, Diff Cap => CD-byte

#define EVO_CAPCODE_NC_XX 0x20 //Non-crash, Ori paths all hit,           Same Cap => None
#define EVO_CAPCODE_NC_XC 0x28 //Non-crash, At least 1 ori path not hit, Same Cap => C-byte
#define EVO_CAPCODE_NC_DX 0x30 //Non-crash, Ori paths all hit,           Diff Cap => D-byte
#define EVO_CAPCODE_NC_DC 0x38 //Non-crash, At least 1 ori path not hit, Diff Cap => CD-byte



#endif // _EVOCATIO_CAPABILITY_H