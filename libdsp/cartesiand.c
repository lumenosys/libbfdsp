/************************************************************************
 *
 * cartesiand.c
 *
 * Copyright (C) 2004 Analog Devices, Inc.
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License. See the file COPYING.LIB for more details.
 *
 * Non-LGPL License is also available as part of VisualDSP++
 * from Analog Devices, Inc.
 *
 ************************************************************************/

/*
 * Description :   Cartesian to polar conversion
 */

#pragma file_attr("libGroup =complex_fns.h")
#pragma file_attr("libFunc  =cartesiand")
#pragma file_attr("libFunc  =__cartesiand")     //from complex_fns.h
#pragma file_attr("libFunc  =cartesian")        //from complex_fns.h

#pragma file_attr("libName =libdsp")
#pragma file_attr("prefersMem =internal")
#pragma file_attr("prefersMemNum =30")

/* Defined in */
#include <complex_bf.h>
#include <complex_fns.h>

#include <math.h>

long double                       /*{ ret - Magnitude              }*/
cartesiand
(
  complex_long_double a,          /*{ (i) - Complex input `a`      }*/
  long double*  phase             /*{ (o) - Phase                  }*/
)
{
    *phase = bf_argd(a);          /* compute phase     */
    return bf_cabsd(a);           /* compute magnitude */
}

