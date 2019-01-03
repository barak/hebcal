/*
   $Id: danlib.c,v 1.2 1998/03/27 17:58:20 danny Exp $
   Hebcal - A Jewish Calendar Generator
   Copyright (C) 1994  Danny Sadinoff

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public License
   as published by the Free Software Foundation; either version 2
   of the License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

   Danny Sadinoff can be reached at 
   1 Cove La.
   Great Neck, NY
   11024

   sadinoff@pobox.com 
 */

#include <stdio.h>
#include <sys/types.h>
#include <ctype.h>
#include <string.h>
#include "danlib.h"
#include "myerror.h"


/* Some generally useful routines */

void 
initStr (s, size)
     char **s;
     int size;
{
  /* allocate space for a string */
  if ((*s = (char *) malloc ((size_t) (size + 1) * sizeof (char))) == NULL)
      die ("\n Memory Error: Couldn't allocate string", "");
  **s = '\0';
}

/* istrncasecmp performs a signed, case-insensitive comparison
   of s1 to s2, for a maximum length of n  bytes. */
int 
istrncasecmp (n, s1, s2)
     char *s1, *s2;
     int n;
{
  for (;
       n > 0 &&			/* while not at end of string */
       (*s1 || *s2);		/* and they both didn't finish simultaneously */
       n--, s1++, s2++)
    if (tolower (*s1) != tolower (*s2))
      {
	return tolower (*s1) < tolower (*s2) ? -1 : 1;
      }
  return 0;
}

/* find the first element of arr which is a superstring of str, to len
   places.
   Return the index of the element.  If there is no such element, 
   Return size.  size is the size of arr. 
 */
int 
lookup_string (str, arr, size, len)
     char *str;
     char *arr[];
     int size;
     int len;
{
  int i;

  for (i = 0; i < size; i++)
    if (!(istrncasecmp (len, str, arr[i])))
      return i;
  return i;			/* i == size here. */
}



int 
isAllNums (s)
     char *s;
{

/* returns true if a string contains only digits */
  int n = 0, len = strlen (s);

  for (n = 0;
       (n < len) && isdigit (s[n]);
       n++);
  return (n == len);
}

char *
numSuffix (i)
/* returns he proper ordinal suffix of a number */
     int i;
{
  if ((i / 10) == 1)
    return "th";
  switch (i % 10)
    {
    case 1:
      return "st";
    case 2:
      return "nd";
    case 3:
      return "rd";
    default:
      return "th";
    }
}

char *
hc_itoa (i)
     int i;
{
  static char ret[7];
  sprintf (ret, "%d", i);
  return ret;
}
