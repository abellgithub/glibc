/* Copyright (C) 2002-2017 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
   Contributed by Ulrich Drepper <drepper@redhat.com>, 2002.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#include <string.h>
#include "pthreadP.h"


int
__pthread_condattr_init (pthread_condattr_t *attr)
{
  struct pthread_condattr *iattr = (struct pthread_condattr *) attr;
  /* Default is not pshared and CLOCK_REALTIME.  */
  iattr-> value = CLOCK_REALTIME << 1;

  return 0;
}
strong_alias (__pthread_condattr_init, pthread_condattr_init)
