/************************************************************************
 *
 * cvecssubd.c
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
 * Description :  Complex Vector Scalar Subtraction
 */

#pragma file_attr("libGroup =vector.h")
#pragma file_attr("libFunc  =__cvecssubd")
#pragma file_attr("libFunc  =cvecssubd")
#pragma file_attr("libFunc  =cvecssub")
/* Called by cmatssubd and cmatssub */
#pragma file_attr("libGroup =matrix.h")
#pragma file_attr("libFunc  =cmatssubd")
#pragma file_attr("libFunc  =cmatssub")

#pragma file_attr("libName =libdsp")
#pragma file_attr("prefersMem =internal")
#pragma file_attr("prefersMemNum =30")

/* Defined in */
#include <vector.h>


void
cvecssubd
(
  const complex_long_double a[],  /*{ (i) - Input vector `a[]`           }*/
  complex_long_double b,          /*{ (i) - Input scalar `b`             }*/
  complex_long_double c[],        /*{ (o) - Output vector `c[]`          }*/
  int n                           /*{ (i) - Number of elements in vector }*/
)
{
    int i;


    /*{ Subtract `b` from each element of vector `a[]` and store
        in vector `c[]`. }*/
    for (i = 0; i < n; i++)
    {
        c[i].re = a[i].re - b.re;
        c[i].im = a[i].im - b.im;
    }
}
