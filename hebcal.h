/*
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
 
     sadinoff@pobox.com              (thereafter)
*/

#ifndef __HEBCAL__
#define __HEBCAL__

#include "stdio.h"
#include "greg.h"
#include "myerror.h"
#include "proto.h"

#ifndef ENV_CITY_STR
#define ENV_CITY_STR "HC_CITY"
#endif

#define MAXDAYS 31
#define GREGYR_2_HEBYR(x) ((x)+ 3760)
#define MAX_LINE_LEN 100
#define LEAP_YR_HEB(x) ((1L + (long)(x)* 7L) % 19L < 7L ? 1 : 0)
#define MONTHS_IN_HEB(x) (LEAP_YR_HEB(x) ? 13 :12)
#define LANGUAGE(str) (ashkenazis_sw && (str)[1] ? ((str)[1]) : ((str)[0]))

extern FILE *inFile, *yFile;

extern int DST_scheme,
   ashkenazis_sw, 
   candleLighting_sw, 
   euroDates_sw,
   hebrewDates_sw,
   inputFile_sw,
   israel_sw,
   latdeg, latmin, latsec, longdeg, longmin, longsec, TZ, 
   latlong_sw,
   printOmer_sw,
   printHebDates_sw,
   printSomeHebDates_sw,
   sedraAllWeek_sw, 
   sedrot_sw, 
   noGreg_sw, 
   noHolidays_sw,
   suppress_rosh_chodesh_sw,
   tabs_sw,
   weekday_sw, 
   yearDigits_sw,
   yahrtzeitFile_sw;

extern int havdalah_minutes,
   light_offset;



typedef struct {
   int first_day_of_week;
   int leap_p;
} year_t;

#define DST_USOFA 0
#define DST_NONE 1
#define DST_ISRAEL 2

/* holiday typemask entries */
#define USER_EVENT 1
#define LIGHT_CANDLES 2
#define YOM_TOV_ENDS 4
typedef struct hinode{   /* holiday input structure */
   date_t date;
   char *(name[2]);
   int typeMask;
   struct hinode *next;
} holinput_t, *holinputp_t;

typedef struct hsnode{  /* holiday storage structure */
   char *name;
   int typeMask;
   struct hsnode *next;
} holstore_t, *holstorep_t;

year_t yearData PROTO((int));
date_t nextHebDate PROTO((date_t));
date_t prevHebDate PROTO((date_t));
struct hsnode *getHolstorep PROTO((void));
int PushHoliday PROTO((struct hsnode *, struct hsnode **));
void init_holidays PROTO((int));
int getHebHolidays PROTO((date_t, struct hsnode **));
void incHebGregDate PROTO((date_t *, date_t *,long *,int *,year_t *));
void PrintGregDate PROTO((date_t));
void main_calendar PROTO((long,long));
void print_candlelighting_times PROTO((int, int, date_t, int));
void reset_Omer PROTO(( int hYear));

extern char * license[];
extern char * warranty[];
#endif

