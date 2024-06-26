/* "main" for the compiler driver.
   Copyright (C) 1987-2016 Free Software Foundation, Inc.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

/* This source file contains "main" for the compiler driver.
   All of the real work is done within gcc.c; we implement "main"
   in here for the "gcc" binary so that gcc.o can be used in
   libgccjit.so.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "xregex.h"
#include "obstack.h"
#include "intl.h"
#include "prefix.h"
#include "gcc.h"

#define LOG_TAG "gcc-main"
/* Implement the top-level "main" within the driver in terms of
   driver::main (implemented in gcc.c).  */

extern int main (int, char **);

int
main (int argc, char **argv)
{
  //LOGV("enter %s", __FUNCTION__);
  //LOGV("initialize driver");
  driver d (false, /* can_finalize */
	    true); /* debug */

  //LOGV("calling driver.main()");
  int value = d.main (argc, argv);
  //LOGV("after calling driver.main()");

  //LOGV("leave %s, return %d", __FUNCTION__, value);
  return value;
}
