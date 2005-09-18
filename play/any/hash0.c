/*
 * $Id: hash0.c,v 1.1.1.1 2005-09-18 22:05:42 dhmunro Exp $
 * mask data for hashing functions
 */
/* Copyright (c) 2005, The Regents of the University of California.
 * All rights reserved.
 * This file is part of yorick (http://yorick.sourceforge.net).
 * Read the accompanying LICENSE file for details.
 */

#include "config.h"
#include "phash.h"

/* see README.ext for a description of the properties of this
 * list of mask values */
unsigned long p_hmasks[64] = {
  0xb88f7f5e,0x9a5f430b,0x9ffc4579,0xf24f8239,0xa3ee4362,0x11f23e15,
  0x79b365f0,0xdaa01682,0xfc32732b,0x5002d914,0xb91f0ad5,0xf62c0bd1,
  0x0586bd83,0x6186c8ef,0xa422d1d0,0x94acf08b,0xd1618ed2,0xaff8c327,
  0x8c65192f,0xa0fc60d0,0xca45848b,0xdb8c5251,0x4aa83d9d,0x2ab5bc8d,
  0x8ef3321a,0x0da260f8,0x68aef4ad,0x2ea75120,0x5b00c5ef,0x4180ea63,
  0xd8a2dad6,0x00d0ee07,0xbe260469,0x3bf21367,0x94299569,0xf517d7e0,
  0x7c3f07ec,0x41da712a,0x4e73cabb,0x6388ae9e,0x248d894b,0x389f2cb7,
  0x8504641e,0xb53898a9,0x071d8a73,0xeba24361,0x0bd1fe87,0xda1ff034,
  0x29f5f9e2,0x3ce61746,0x38ab5382,0x8117f9b2,0xa8256e6d,0x161674bd,
  0xbe111537,0x6cce6b6a,0x290ecf4f,0x1c47b104,0x37bd96bc,0x80f39033,
  0x0c1b6161,0x70a94f9d,0xb90e1369,0xcbc2f924 };
