/*
 * ArduinoPrintf.cpp C-like printf() for the Arduino Due.
 *
 * Copyright (C) 2015 Simon D. Levy
 *
 * This code is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * This code is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this code.  If not, see <http:#www.gnu.org/licenses/>.
 */
 
#include <stdarg.h>
#include <stdio.h>
#include <Arduino.h>
#include "DuePrintf.h"

void dueprintf(const char * fmt, ...) {
  
  va_list ap;       

  va_start(ap, fmt);     

  char buf[1000];
  
  vsprintf(buf, fmt, ap);
  
  Serial.print(buf);

  va_end(ap);  
}
