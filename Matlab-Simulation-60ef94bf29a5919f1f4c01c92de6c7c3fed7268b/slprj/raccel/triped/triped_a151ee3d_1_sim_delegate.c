#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
void triped_a151ee3d_1_resetSimStateVector ( const void * mech , double *
state ) { double xx [ 2 ] ; ( void ) mech ; xx [ 0 ] = 0.0 ; xx [ 1 ] = 1.0 ;
state [ 0 ] = xx [ 0 ] ; state [ 1 ] = xx [ 0 ] ; state [ 2 ] = xx [ 0 ] ;
state [ 3 ] = xx [ 0 ] ; state [ 4 ] = xx [ 0 ] ; state [ 5 ] = xx [ 0 ] ;
state [ 6 ] = xx [ 0 ] ; state [ 7 ] = xx [ 0 ] ; state [ 8 ] = xx [ 0 ] ;
state [ 9 ] = xx [ 0 ] ; state [ 10 ] = xx [ 0 ] ; state [ 11 ] = xx [ 0 ] ;
state [ 12 ] = xx [ 1 ] ; state [ 13 ] = xx [ 0 ] ; state [ 14 ] = xx [ 0 ] ;
state [ 15 ] = xx [ 0 ] ; state [ 16 ] = xx [ 0 ] ; state [ 17 ] = xx [ 0 ] ;
state [ 18 ] = xx [ 0 ] ; state [ 19 ] = xx [ 0 ] ; state [ 20 ] = xx [ 0 ] ;
state [ 21 ] = xx [ 1 ] ; state [ 22 ] = xx [ 0 ] ; state [ 23 ] = xx [ 0 ] ;
state [ 24 ] = xx [ 0 ] ; state [ 25 ] = xx [ 0 ] ; state [ 26 ] = xx [ 0 ] ;
state [ 27 ] = xx [ 0 ] ; state [ 28 ] = xx [ 0 ] ; state [ 29 ] = xx [ 0 ] ;
state [ 30 ] = xx [ 0 ] ; state [ 31 ] = xx [ 0 ] ; state [ 32 ] = xx [ 0 ] ;
state [ 33 ] = xx [ 0 ] ; state [ 34 ] = xx [ 0 ] ; state [ 35 ] = xx [ 0 ] ;
state [ 36 ] = xx [ 0 ] ; state [ 37 ] = xx [ 0 ] ; state [ 38 ] = xx [ 0 ] ;
state [ 39 ] = xx [ 0 ] ; state [ 40 ] = xx [ 1 ] ; state [ 41 ] = xx [ 0 ] ;
state [ 42 ] = xx [ 0 ] ; state [ 43 ] = xx [ 0 ] ; state [ 44 ] = xx [ 0 ] ;
state [ 45 ] = xx [ 0 ] ; state [ 46 ] = xx [ 0 ] ; state [ 47 ] = xx [ 0 ] ;
state [ 48 ] = xx [ 0 ] ; state [ 49 ] = xx [ 1 ] ; state [ 50 ] = xx [ 0 ] ;
state [ 51 ] = xx [ 0 ] ; state [ 52 ] = xx [ 0 ] ; state [ 53 ] = xx [ 0 ] ;
state [ 54 ] = xx [ 0 ] ; state [ 55 ] = xx [ 0 ] ; state [ 56 ] = xx [ 0 ] ;
state [ 57 ] = xx [ 0 ] ; state [ 58 ] = xx [ 0 ] ; state [ 59 ] = xx [ 0 ] ;
state [ 60 ] = xx [ 0 ] ; state [ 61 ] = xx [ 0 ] ; state [ 62 ] = xx [ 0 ] ;
state [ 63 ] = xx [ 0 ] ; state [ 64 ] = xx [ 0 ] ; state [ 65 ] = xx [ 0 ] ;
state [ 66 ] = xx [ 0 ] ; state [ 67 ] = xx [ 0 ] ; state [ 68 ] = xx [ 1 ] ;
state [ 69 ] = xx [ 0 ] ; state [ 70 ] = xx [ 0 ] ; state [ 71 ] = xx [ 0 ] ;
state [ 72 ] = xx [ 0 ] ; state [ 73 ] = xx [ 0 ] ; state [ 74 ] = xx [ 0 ] ;
state [ 75 ] = xx [ 0 ] ; state [ 76 ] = xx [ 0 ] ; state [ 77 ] = xx [ 1 ] ;
state [ 78 ] = xx [ 0 ] ; state [ 79 ] = xx [ 0 ] ; state [ 80 ] = xx [ 0 ] ;
state [ 81 ] = xx [ 0 ] ; state [ 82 ] = xx [ 0 ] ; state [ 83 ] = xx [ 0 ] ;
state [ 84 ] = xx [ 0 ] ; state [ 85 ] = xx [ 0 ] ; state [ 86 ] = xx [ 0 ] ;
state [ 87 ] = xx [ 0 ] ; state [ 88 ] = xx [ 0 ] ; state [ 89 ] = xx [ 0 ] ;
state [ 90 ] = xx [ 0 ] ; state [ 91 ] = xx [ 0 ] ; state [ 92 ] = xx [ 0 ] ;
} static void perturbSimJointPrimitiveState_2_0 ( double mag , double * state
) { state [ 0 ] = state [ 0 ] + mag ; } static void
perturbSimJointPrimitiveState_2_0v ( double mag , double * state ) { state [
0 ] = state [ 0 ] + mag ; state [ 3 ] = state [ 3 ] - 0.875 * mag ; } static
void perturbSimJointPrimitiveState_2_1 ( double mag , double * state ) {
state [ 1 ] = state [ 1 ] + mag ; } static void
perturbSimJointPrimitiveState_2_1v ( double mag , double * state ) { state [
1 ] = state [ 1 ] + mag ; state [ 4 ] = state [ 4 ] - 0.875 * mag ; } static
void perturbSimJointPrimitiveState_2_2 ( double mag , double * state ) {
state [ 2 ] = state [ 2 ] + mag ; } static void
perturbSimJointPrimitiveState_2_2v ( double mag , double * state ) { state [
2 ] = state [ 2 ] + mag ; state [ 5 ] = state [ 5 ] - 0.875 * mag ; } static
void perturbSimJointPrimitiveState_3_0 ( double mag , double * state ) {
state [ 6 ] = state [ 6 ] + mag ; } static void
perturbSimJointPrimitiveState_3_0v ( double mag , double * state ) { state [
6 ] = state [ 6 ] + mag ; state [ 7 ] = state [ 7 ] - 0.875 * mag ; } static
void perturbSimJointPrimitiveState_4_0 ( double mag , double * state ) {
state [ 8 ] = state [ 8 ] + mag ; } static void
perturbSimJointPrimitiveState_4_0v ( double mag , double * state ) { state [
8 ] = state [ 8 ] + mag ; state [ 9 ] = state [ 9 ] - 0.875 * mag ; } static
void perturbSimJointPrimitiveState_5_0 ( double mag , double * state ) {
state [ 10 ] = state [ 10 ] + mag ; } static void
perturbSimJointPrimitiveState_5_0v ( double mag , double * state ) { state [
10 ] = state [ 10 ] + mag ; state [ 11 ] = state [ 11 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_6_0 ( double mag , double * state )
{ double xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] = xx
[ 0 ] / ( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2
] ) ; xx [ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = sin ( 2.0 *
xx [ 2 ] ) ; xx [ 2 ] = 0.5 * mag ; xx [ 6 ] = sqrt ( xx [ 1 ] * xx [ 1 ] +
xx [ 4 ] * xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ?
0.0 : xx [ 1 ] / xx [ 6 ] ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 6 ]
== 0.0 ? 0.0 : xx [ 4 ] / xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [
5 ] / xx [ 6 ] ; xx [ 11 ] = xx [ 1 ] == xx [ 3 ] && xx [ 4 ] == xx [ 3 ] &&
xx [ 5 ] == xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2 ] ) ; xx [ 12 ] = xx [ 7 ] *
xx [ 8 ] ; xx [ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ]
; xx [ 0 ] = state [ 12 ] ; xx [ 1 ] = state [ 13 ] ; xx [ 2 ] = state [ 14 ]
; xx [ 3 ] = state [ 15 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 0
, xx + 4 ) ; state [ 12 ] = xx [ 4 ] ; state [ 13 ] = xx [ 5 ] ; state [ 14 ]
= xx [ 6 ] ; state [ 15 ] = xx [ 7 ] ; } static void
perturbSimJointPrimitiveState_6_0v ( double mag , double * state ) { double
xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] = xx [ 0 ] /
( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2 ] ) ; xx
[ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = sin ( 2.0 * xx [ 2 ] )
; xx [ 2 ] = 0.5 * mag ; xx [ 6 ] = sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 4 ] *
xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 1
] / xx [ 6 ] ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 6 ] == 0.0 ? 0.0
: xx [ 4 ] / xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 6
] ; xx [ 11 ] = xx [ 1 ] == xx [ 3 ] && xx [ 4 ] == xx [ 3 ] && xx [ 5 ] ==
xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2 ] ) ; xx [ 12 ] = xx [ 7 ] * xx [ 8 ] ; xx
[ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ] ; xx [ 3 ] =
state [ 12 ] ; xx [ 4 ] = state [ 13 ] ; xx [ 5 ] = state [ 14 ] ; xx [ 6 ] =
state [ 15 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 3 , xx + 7 ) ;
state [ 12 ] = xx [ 7 ] ; state [ 13 ] = xx [ 8 ] ; state [ 14 ] = xx [ 9 ] ;
state [ 15 ] = xx [ 10 ] ; state [ 16 ] = state [ 16 ] + 1.2 * mag ; state [
17 ] = state [ 17 ] - xx [ 2 ] ; state [ 18 ] = state [ 18 ] + 0.9 * mag ; }
static void perturbSimJointPrimitiveState_7_0 ( double mag , double * state )
{ state [ 19 ] = state [ 19 ] + mag ; } static void
perturbSimJointPrimitiveState_7_0v ( double mag , double * state ) { state [
19 ] = state [ 19 ] + mag ; state [ 20 ] = state [ 20 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_8_0 ( double mag , double * state )
{ double xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] = xx
[ 0 ] / ( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2
] ) ; xx [ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = sin ( 2.0 *
xx [ 2 ] ) ; xx [ 2 ] = 0.5 * mag ; xx [ 6 ] = sqrt ( xx [ 1 ] * xx [ 1 ] +
xx [ 4 ] * xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ?
0.0 : xx [ 1 ] / xx [ 6 ] ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 6 ]
== 0.0 ? 0.0 : xx [ 4 ] / xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [
5 ] / xx [ 6 ] ; xx [ 11 ] = xx [ 1 ] == xx [ 3 ] && xx [ 4 ] == xx [ 3 ] &&
xx [ 5 ] == xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2 ] ) ; xx [ 12 ] = xx [ 7 ] *
xx [ 8 ] ; xx [ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ]
; xx [ 0 ] = state [ 21 ] ; xx [ 1 ] = state [ 22 ] ; xx [ 2 ] = state [ 23 ]
; xx [ 3 ] = state [ 24 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 0
, xx + 4 ) ; state [ 21 ] = xx [ 4 ] ; state [ 22 ] = xx [ 5 ] ; state [ 23 ]
= xx [ 6 ] ; state [ 24 ] = xx [ 7 ] ; } static void
perturbSimJointPrimitiveState_8_0v ( double mag , double * state ) { double
xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] = xx [ 0 ] /
( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2 ] ) ; xx
[ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = sin ( 2.0 * xx [ 2 ] )
; xx [ 2 ] = 0.5 * mag ; xx [ 6 ] = sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 4 ] *
xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 1
] / xx [ 6 ] ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 6 ] == 0.0 ? 0.0
: xx [ 4 ] / xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 6
] ; xx [ 11 ] = xx [ 1 ] == xx [ 3 ] && xx [ 4 ] == xx [ 3 ] && xx [ 5 ] ==
xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2 ] ) ; xx [ 12 ] = xx [ 7 ] * xx [ 8 ] ; xx
[ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ] ; xx [ 3 ] =
state [ 21 ] ; xx [ 4 ] = state [ 22 ] ; xx [ 5 ] = state [ 23 ] ; xx [ 6 ] =
state [ 24 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 3 , xx + 7 ) ;
state [ 21 ] = xx [ 7 ] ; state [ 22 ] = xx [ 8 ] ; state [ 23 ] = xx [ 9 ] ;
state [ 24 ] = xx [ 10 ] ; state [ 25 ] = state [ 25 ] + 1.2 * mag ; state [
26 ] = state [ 26 ] - xx [ 2 ] ; state [ 27 ] = state [ 27 ] + 0.9 * mag ; }
static void perturbSimJointPrimitiveState_10_0 ( double mag , double * state
) { state [ 28 ] = state [ 28 ] + mag ; } static void
perturbSimJointPrimitiveState_10_0v ( double mag , double * state ) { state [
28 ] = state [ 28 ] + mag ; state [ 31 ] = state [ 31 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_10_1 ( double mag , double * state
) { state [ 29 ] = state [ 29 ] + mag ; } static void
perturbSimJointPrimitiveState_10_1v ( double mag , double * state ) { state [
29 ] = state [ 29 ] + mag ; state [ 32 ] = state [ 32 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_10_2 ( double mag , double * state
) { state [ 30 ] = state [ 30 ] + mag ; } static void
perturbSimJointPrimitiveState_10_2v ( double mag , double * state ) { state [
30 ] = state [ 30 ] + mag ; state [ 33 ] = state [ 33 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_11_0 ( double mag , double * state
) { state [ 34 ] = state [ 34 ] + mag ; } static void
perturbSimJointPrimitiveState_11_0v ( double mag , double * state ) { state [
34 ] = state [ 34 ] + mag ; state [ 35 ] = state [ 35 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_12_0 ( double mag , double * state
) { state [ 36 ] = state [ 36 ] + mag ; } static void
perturbSimJointPrimitiveState_12_0v ( double mag , double * state ) { state [
36 ] = state [ 36 ] + mag ; state [ 37 ] = state [ 37 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_13_0 ( double mag , double * state
) { state [ 38 ] = state [ 38 ] + mag ; } static void
perturbSimJointPrimitiveState_13_0v ( double mag , double * state ) { state [
38 ] = state [ 38 ] + mag ; state [ 39 ] = state [ 39 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_14_0 ( double mag , double * state
) { double xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] =
xx [ 0 ] / ( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [
2 ] ) ; xx [ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = sin ( 2.0 *
xx [ 2 ] ) ; xx [ 2 ] = 0.5 * mag ; xx [ 6 ] = sqrt ( xx [ 1 ] * xx [ 1 ] +
xx [ 4 ] * xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ?
0.0 : xx [ 1 ] / xx [ 6 ] ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 6 ]
== 0.0 ? 0.0 : xx [ 4 ] / xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [
5 ] / xx [ 6 ] ; xx [ 11 ] = xx [ 1 ] == xx [ 3 ] && xx [ 4 ] == xx [ 3 ] &&
xx [ 5 ] == xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2 ] ) ; xx [ 12 ] = xx [ 7 ] *
xx [ 8 ] ; xx [ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ]
; xx [ 0 ] = state [ 40 ] ; xx [ 1 ] = state [ 41 ] ; xx [ 2 ] = state [ 42 ]
; xx [ 3 ] = state [ 43 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 0
, xx + 4 ) ; state [ 40 ] = xx [ 4 ] ; state [ 41 ] = xx [ 5 ] ; state [ 42 ]
= xx [ 6 ] ; state [ 43 ] = xx [ 7 ] ; } static void
perturbSimJointPrimitiveState_14_0v ( double mag , double * state ) { double
xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] = xx [ 0 ] /
( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2 ] ) ; xx
[ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = sin ( 2.0 * xx [ 2 ] )
; xx [ 2 ] = 0.5 * mag ; xx [ 6 ] = sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 4 ] *
xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 1
] / xx [ 6 ] ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 6 ] == 0.0 ? 0.0
: xx [ 4 ] / xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 6
] ; xx [ 11 ] = xx [ 1 ] == xx [ 3 ] && xx [ 4 ] == xx [ 3 ] && xx [ 5 ] ==
xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2 ] ) ; xx [ 12 ] = xx [ 7 ] * xx [ 8 ] ; xx
[ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ] ; xx [ 3 ] =
state [ 40 ] ; xx [ 4 ] = state [ 41 ] ; xx [ 5 ] = state [ 42 ] ; xx [ 6 ] =
state [ 43 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 3 , xx + 7 ) ;
state [ 40 ] = xx [ 7 ] ; state [ 41 ] = xx [ 8 ] ; state [ 42 ] = xx [ 9 ] ;
state [ 43 ] = xx [ 10 ] ; state [ 44 ] = state [ 44 ] + 1.2 * mag ; state [
45 ] = state [ 45 ] - xx [ 2 ] ; state [ 46 ] = state [ 46 ] + 0.9 * mag ; }
static void perturbSimJointPrimitiveState_15_0 ( double mag , double * state
) { state [ 47 ] = state [ 47 ] + mag ; } static void
perturbSimJointPrimitiveState_15_0v ( double mag , double * state ) { state [
47 ] = state [ 47 ] + mag ; state [ 48 ] = state [ 48 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_16_0 ( double mag , double * state
) { double xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] =
xx [ 0 ] / ( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [
2 ] ) ; xx [ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = sin ( 2.0 *
xx [ 2 ] ) ; xx [ 2 ] = 0.5 * mag ; xx [ 6 ] = sqrt ( xx [ 1 ] * xx [ 1 ] +
xx [ 4 ] * xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ?
0.0 : xx [ 1 ] / xx [ 6 ] ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 6 ]
== 0.0 ? 0.0 : xx [ 4 ] / xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [
5 ] / xx [ 6 ] ; xx [ 11 ] = xx [ 1 ] == xx [ 3 ] && xx [ 4 ] == xx [ 3 ] &&
xx [ 5 ] == xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2 ] ) ; xx [ 12 ] = xx [ 7 ] *
xx [ 8 ] ; xx [ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ]
; xx [ 0 ] = state [ 49 ] ; xx [ 1 ] = state [ 50 ] ; xx [ 2 ] = state [ 51 ]
; xx [ 3 ] = state [ 52 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 0
, xx + 4 ) ; state [ 49 ] = xx [ 4 ] ; state [ 50 ] = xx [ 5 ] ; state [ 51 ]
= xx [ 6 ] ; state [ 52 ] = xx [ 7 ] ; } static void
perturbSimJointPrimitiveState_16_0v ( double mag , double * state ) { double
xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] = xx [ 0 ] /
( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2 ] ) ; xx
[ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = sin ( 2.0 * xx [ 2 ] )
; xx [ 2 ] = 0.5 * mag ; xx [ 6 ] = sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 4 ] *
xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 1
] / xx [ 6 ] ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 6 ] == 0.0 ? 0.0
: xx [ 4 ] / xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 6
] ; xx [ 11 ] = xx [ 1 ] == xx [ 3 ] && xx [ 4 ] == xx [ 3 ] && xx [ 5 ] ==
xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2 ] ) ; xx [ 12 ] = xx [ 7 ] * xx [ 8 ] ; xx
[ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ] ; xx [ 3 ] =
state [ 49 ] ; xx [ 4 ] = state [ 50 ] ; xx [ 5 ] = state [ 51 ] ; xx [ 6 ] =
state [ 52 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 3 , xx + 7 ) ;
state [ 49 ] = xx [ 7 ] ; state [ 50 ] = xx [ 8 ] ; state [ 51 ] = xx [ 9 ] ;
state [ 52 ] = xx [ 10 ] ; state [ 53 ] = state [ 53 ] + 1.2 * mag ; state [
54 ] = state [ 54 ] - xx [ 2 ] ; state [ 55 ] = state [ 55 ] + 0.9 * mag ; }
static void perturbSimJointPrimitiveState_18_0 ( double mag , double * state
) { state [ 56 ] = state [ 56 ] + mag ; } static void
perturbSimJointPrimitiveState_18_0v ( double mag , double * state ) { state [
56 ] = state [ 56 ] + mag ; state [ 59 ] = state [ 59 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_18_1 ( double mag , double * state
) { state [ 57 ] = state [ 57 ] + mag ; } static void
perturbSimJointPrimitiveState_18_1v ( double mag , double * state ) { state [
57 ] = state [ 57 ] + mag ; state [ 60 ] = state [ 60 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_18_2 ( double mag , double * state
) { state [ 58 ] = state [ 58 ] + mag ; } static void
perturbSimJointPrimitiveState_18_2v ( double mag , double * state ) { state [
58 ] = state [ 58 ] + mag ; state [ 61 ] = state [ 61 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_19_0 ( double mag , double * state
) { state [ 62 ] = state [ 62 ] + mag ; } static void
perturbSimJointPrimitiveState_19_0v ( double mag , double * state ) { state [
62 ] = state [ 62 ] + mag ; state [ 63 ] = state [ 63 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_20_0 ( double mag , double * state
) { state [ 64 ] = state [ 64 ] + mag ; } static void
perturbSimJointPrimitiveState_20_0v ( double mag , double * state ) { state [
64 ] = state [ 64 ] + mag ; state [ 65 ] = state [ 65 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_21_0 ( double mag , double * state
) { state [ 66 ] = state [ 66 ] + mag ; } static void
perturbSimJointPrimitiveState_21_0v ( double mag , double * state ) { state [
66 ] = state [ 66 ] + mag ; state [ 67 ] = state [ 67 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_22_0 ( double mag , double * state
) { double xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] =
xx [ 0 ] / ( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [
2 ] ) ; xx [ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = sin ( 2.0 *
xx [ 2 ] ) ; xx [ 2 ] = 0.5 * mag ; xx [ 6 ] = sqrt ( xx [ 1 ] * xx [ 1 ] +
xx [ 4 ] * xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ?
0.0 : xx [ 1 ] / xx [ 6 ] ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 6 ]
== 0.0 ? 0.0 : xx [ 4 ] / xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [
5 ] / xx [ 6 ] ; xx [ 11 ] = xx [ 1 ] == xx [ 3 ] && xx [ 4 ] == xx [ 3 ] &&
xx [ 5 ] == xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2 ] ) ; xx [ 12 ] = xx [ 7 ] *
xx [ 8 ] ; xx [ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ]
; xx [ 0 ] = state [ 68 ] ; xx [ 1 ] = state [ 69 ] ; xx [ 2 ] = state [ 70 ]
; xx [ 3 ] = state [ 71 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 0
, xx + 4 ) ; state [ 68 ] = xx [ 4 ] ; state [ 69 ] = xx [ 5 ] ; state [ 70 ]
= xx [ 6 ] ; state [ 71 ] = xx [ 7 ] ; } static void
perturbSimJointPrimitiveState_22_0v ( double mag , double * state ) { double
xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] = xx [ 0 ] /
( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2 ] ) ; xx
[ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = sin ( 2.0 * xx [ 2 ] )
; xx [ 2 ] = 0.5 * mag ; xx [ 6 ] = sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 4 ] *
xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 1
] / xx [ 6 ] ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 6 ] == 0.0 ? 0.0
: xx [ 4 ] / xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 6
] ; xx [ 11 ] = xx [ 1 ] == xx [ 3 ] && xx [ 4 ] == xx [ 3 ] && xx [ 5 ] ==
xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2 ] ) ; xx [ 12 ] = xx [ 7 ] * xx [ 8 ] ; xx
[ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ] ; xx [ 3 ] =
state [ 68 ] ; xx [ 4 ] = state [ 69 ] ; xx [ 5 ] = state [ 70 ] ; xx [ 6 ] =
state [ 71 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 3 , xx + 7 ) ;
state [ 68 ] = xx [ 7 ] ; state [ 69 ] = xx [ 8 ] ; state [ 70 ] = xx [ 9 ] ;
state [ 71 ] = xx [ 10 ] ; state [ 72 ] = state [ 72 ] + 1.2 * mag ; state [
73 ] = state [ 73 ] - xx [ 2 ] ; state [ 74 ] = state [ 74 ] + 0.9 * mag ; }
static void perturbSimJointPrimitiveState_23_0 ( double mag , double * state
) { state [ 75 ] = state [ 75 ] + mag ; } static void
perturbSimJointPrimitiveState_23_0v ( double mag , double * state ) { state [
75 ] = state [ 75 ] + mag ; state [ 76 ] = state [ 76 ] - 0.875 * mag ; }
static void perturbSimJointPrimitiveState_24_0 ( double mag , double * state
) { double xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] =
xx [ 0 ] / ( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [
2 ] ) ; xx [ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = sin ( 2.0 *
xx [ 2 ] ) ; xx [ 2 ] = 0.5 * mag ; xx [ 6 ] = sqrt ( xx [ 1 ] * xx [ 1 ] +
xx [ 4 ] * xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ?
0.0 : xx [ 1 ] / xx [ 6 ] ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 6 ]
== 0.0 ? 0.0 : xx [ 4 ] / xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [
5 ] / xx [ 6 ] ; xx [ 11 ] = xx [ 1 ] == xx [ 3 ] && xx [ 4 ] == xx [ 3 ] &&
xx [ 5 ] == xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2 ] ) ; xx [ 12 ] = xx [ 7 ] *
xx [ 8 ] ; xx [ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ]
; xx [ 0 ] = state [ 77 ] ; xx [ 1 ] = state [ 78 ] ; xx [ 2 ] = state [ 79 ]
; xx [ 3 ] = state [ 80 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 0
, xx + 4 ) ; state [ 77 ] = xx [ 4 ] ; state [ 78 ] = xx [ 5 ] ; state [ 79 ]
= xx [ 6 ] ; state [ 80 ] = xx [ 7 ] ; } static void
perturbSimJointPrimitiveState_24_0v ( double mag , double * state ) { double
xx [ 15 ] ; xx [ 0 ] = 1.0 ; xx [ 1 ] = fabs ( mag ) ; xx [ 2 ] = xx [ 0 ] /
( xx [ 1 ] - floor ( xx [ 1 ] ) + 1.0e-9 ) ; xx [ 1 ] = sin ( xx [ 2 ] ) ; xx
[ 3 ] = 0.0 ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 5 ] = sin ( 2.0 * xx [ 2 ] )
; xx [ 2 ] = 0.5 * mag ; xx [ 6 ] = sqrt ( xx [ 1 ] * xx [ 1 ] + xx [ 4 ] *
xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 1
] / xx [ 6 ] ; xx [ 8 ] = sin ( xx [ 2 ] ) ; xx [ 9 ] = xx [ 6 ] == 0.0 ? 0.0
: xx [ 4 ] / xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 6
] ; xx [ 11 ] = xx [ 1 ] == xx [ 3 ] && xx [ 4 ] == xx [ 3 ] && xx [ 5 ] ==
xx [ 3 ] ? xx [ 0 ] : cos ( xx [ 2 ] ) ; xx [ 12 ] = xx [ 7 ] * xx [ 8 ] ; xx
[ 13 ] = xx [ 9 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 8 ] ; xx [ 3 ] =
state [ 77 ] ; xx [ 4 ] = state [ 78 ] ; xx [ 5 ] = state [ 79 ] ; xx [ 6 ] =
state [ 80 ] ; pm_math_Quaternion_compose_ra ( xx + 11 , xx + 3 , xx + 7 ) ;
state [ 77 ] = xx [ 7 ] ; state [ 78 ] = xx [ 8 ] ; state [ 79 ] = xx [ 9 ] ;
state [ 80 ] = xx [ 10 ] ; state [ 81 ] = state [ 81 ] + 1.2 * mag ; state [
82 ] = state [ 82 ] - xx [ 2 ] ; state [ 83 ] = state [ 83 ] + 0.9 * mag ; }
void triped_a151ee3d_1_perturbSimJointPrimitiveState ( const void * mech ,
size_t stageIdx , size_t primIdx , double mag , boolean_T doPerturbVelocity ,
double * state ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; (
void ) mag ; ( void ) doPerturbVelocity ; ( void ) state ; switch ( (
stageIdx * 6 + primIdx ) * 2 + ( doPerturbVelocity ? 1 : 0 ) ) { case 24 :
perturbSimJointPrimitiveState_2_0 ( mag , state ) ; break ; case 25 :
perturbSimJointPrimitiveState_2_0v ( mag , state ) ; break ; case 26 :
perturbSimJointPrimitiveState_2_1 ( mag , state ) ; break ; case 27 :
perturbSimJointPrimitiveState_2_1v ( mag , state ) ; break ; case 28 :
perturbSimJointPrimitiveState_2_2 ( mag , state ) ; break ; case 29 :
perturbSimJointPrimitiveState_2_2v ( mag , state ) ; break ; case 36 :
perturbSimJointPrimitiveState_3_0 ( mag , state ) ; break ; case 37 :
perturbSimJointPrimitiveState_3_0v ( mag , state ) ; break ; case 48 :
perturbSimJointPrimitiveState_4_0 ( mag , state ) ; break ; case 49 :
perturbSimJointPrimitiveState_4_0v ( mag , state ) ; break ; case 60 :
perturbSimJointPrimitiveState_5_0 ( mag , state ) ; break ; case 61 :
perturbSimJointPrimitiveState_5_0v ( mag , state ) ; break ; case 72 :
perturbSimJointPrimitiveState_6_0 ( mag , state ) ; break ; case 73 :
perturbSimJointPrimitiveState_6_0v ( mag , state ) ; break ; case 84 :
perturbSimJointPrimitiveState_7_0 ( mag , state ) ; break ; case 85 :
perturbSimJointPrimitiveState_7_0v ( mag , state ) ; break ; case 96 :
perturbSimJointPrimitiveState_8_0 ( mag , state ) ; break ; case 97 :
perturbSimJointPrimitiveState_8_0v ( mag , state ) ; break ; case 120 :
perturbSimJointPrimitiveState_10_0 ( mag , state ) ; break ; case 121 :
perturbSimJointPrimitiveState_10_0v ( mag , state ) ; break ; case 122 :
perturbSimJointPrimitiveState_10_1 ( mag , state ) ; break ; case 123 :
perturbSimJointPrimitiveState_10_1v ( mag , state ) ; break ; case 124 :
perturbSimJointPrimitiveState_10_2 ( mag , state ) ; break ; case 125 :
perturbSimJointPrimitiveState_10_2v ( mag , state ) ; break ; case 132 :
perturbSimJointPrimitiveState_11_0 ( mag , state ) ; break ; case 133 :
perturbSimJointPrimitiveState_11_0v ( mag , state ) ; break ; case 144 :
perturbSimJointPrimitiveState_12_0 ( mag , state ) ; break ; case 145 :
perturbSimJointPrimitiveState_12_0v ( mag , state ) ; break ; case 156 :
perturbSimJointPrimitiveState_13_0 ( mag , state ) ; break ; case 157 :
perturbSimJointPrimitiveState_13_0v ( mag , state ) ; break ; case 168 :
perturbSimJointPrimitiveState_14_0 ( mag , state ) ; break ; case 169 :
perturbSimJointPrimitiveState_14_0v ( mag , state ) ; break ; case 180 :
perturbSimJointPrimitiveState_15_0 ( mag , state ) ; break ; case 181 :
perturbSimJointPrimitiveState_15_0v ( mag , state ) ; break ; case 192 :
perturbSimJointPrimitiveState_16_0 ( mag , state ) ; break ; case 193 :
perturbSimJointPrimitiveState_16_0v ( mag , state ) ; break ; case 216 :
perturbSimJointPrimitiveState_18_0 ( mag , state ) ; break ; case 217 :
perturbSimJointPrimitiveState_18_0v ( mag , state ) ; break ; case 218 :
perturbSimJointPrimitiveState_18_1 ( mag , state ) ; break ; case 219 :
perturbSimJointPrimitiveState_18_1v ( mag , state ) ; break ; case 220 :
perturbSimJointPrimitiveState_18_2 ( mag , state ) ; break ; case 221 :
perturbSimJointPrimitiveState_18_2v ( mag , state ) ; break ; case 228 :
perturbSimJointPrimitiveState_19_0 ( mag , state ) ; break ; case 229 :
perturbSimJointPrimitiveState_19_0v ( mag , state ) ; break ; case 240 :
perturbSimJointPrimitiveState_20_0 ( mag , state ) ; break ; case 241 :
perturbSimJointPrimitiveState_20_0v ( mag , state ) ; break ; case 252 :
perturbSimJointPrimitiveState_21_0 ( mag , state ) ; break ; case 253 :
perturbSimJointPrimitiveState_21_0v ( mag , state ) ; break ; case 264 :
perturbSimJointPrimitiveState_22_0 ( mag , state ) ; break ; case 265 :
perturbSimJointPrimitiveState_22_0v ( mag , state ) ; break ; case 276 :
perturbSimJointPrimitiveState_23_0 ( mag , state ) ; break ; case 277 :
perturbSimJointPrimitiveState_23_0v ( mag , state ) ; break ; case 288 :
perturbSimJointPrimitiveState_24_0 ( mag , state ) ; break ; case 289 :
perturbSimJointPrimitiveState_24_0v ( mag , state ) ; break ; } } void
triped_a151ee3d_1_perturbFlexibleBodyState ( const void * mech , size_t
stageIdx , double mag , boolean_T doPerturbVelocity , double * state ) { (
void ) mech ; ( void ) stageIdx ; ( void ) mag ; ( void ) doPerturbVelocity ;
( void ) state ; switch ( stageIdx * 2 + ( doPerturbVelocity ? 1 : 0 ) ) { }
} void triped_a151ee3d_1_constructStateVector ( const void * mech , const
double * solverState , const double * u , const double * uDot , double *
discreteState , double * fullState ) { ( void ) mech ; fullState [ 0 ] =
solverState [ 0 ] ; fullState [ 1 ] = solverState [ 1 ] ; fullState [ 2 ] =
solverState [ 2 ] ; fullState [ 3 ] = solverState [ 3 ] ; fullState [ 4 ] =
solverState [ 4 ] ; fullState [ 5 ] = solverState [ 5 ] ; fullState [ 6 ] =
solverState [ 6 ] ; fullState [ 7 ] = solverState [ 7 ] ; fullState [ 8 ] = u
[ 0 ] ; fullState [ 9 ] = uDot [ 0 ] ; fullState [ 10 ] = u [ 1 ] ; fullState
[ 11 ] = uDot [ 1 ] ; fullState [ 12 ] = solverState [ 8 ] ; fullState [ 13 ]
= solverState [ 9 ] ; fullState [ 14 ] = solverState [ 10 ] ; fullState [ 15
] = solverState [ 11 ] ; fullState [ 16 ] = solverState [ 12 ] ; fullState [
17 ] = solverState [ 13 ] ; fullState [ 18 ] = solverState [ 14 ] ; fullState
[ 19 ] = u [ 2 ] ; fullState [ 20 ] = uDot [ 2 ] ; fullState [ 21 ] =
solverState [ 15 ] ; fullState [ 22 ] = solverState [ 16 ] ; fullState [ 23 ]
= solverState [ 17 ] ; fullState [ 24 ] = solverState [ 18 ] ; fullState [ 25
] = solverState [ 19 ] ; fullState [ 26 ] = solverState [ 20 ] ; fullState [
27 ] = solverState [ 21 ] ; fullState [ 28 ] = solverState [ 22 ] ; fullState
[ 29 ] = solverState [ 23 ] ; fullState [ 30 ] = solverState [ 24 ] ;
fullState [ 31 ] = solverState [ 25 ] ; fullState [ 32 ] = solverState [ 26 ]
; fullState [ 33 ] = solverState [ 27 ] ; fullState [ 34 ] = solverState [ 28
] ; fullState [ 35 ] = solverState [ 29 ] ; fullState [ 36 ] = u [ 3 ] ;
fullState [ 37 ] = uDot [ 3 ] ; fullState [ 38 ] = u [ 4 ] ; fullState [ 39 ]
= uDot [ 4 ] ; fullState [ 40 ] = solverState [ 30 ] ; fullState [ 41 ] =
solverState [ 31 ] ; fullState [ 42 ] = solverState [ 32 ] ; fullState [ 43 ]
= solverState [ 33 ] ; fullState [ 44 ] = solverState [ 34 ] ; fullState [ 45
] = solverState [ 35 ] ; fullState [ 46 ] = solverState [ 36 ] ; fullState [
47 ] = u [ 5 ] ; fullState [ 48 ] = uDot [ 5 ] ; fullState [ 49 ] =
solverState [ 37 ] ; fullState [ 50 ] = solverState [ 38 ] ; fullState [ 51 ]
= solverState [ 39 ] ; fullState [ 52 ] = solverState [ 40 ] ; fullState [ 53
] = solverState [ 41 ] ; fullState [ 54 ] = solverState [ 42 ] ; fullState [
55 ] = solverState [ 43 ] ; fullState [ 56 ] = solverState [ 44 ] ; fullState
[ 57 ] = solverState [ 45 ] ; fullState [ 58 ] = solverState [ 46 ] ;
fullState [ 59 ] = solverState [ 47 ] ; fullState [ 60 ] = solverState [ 48 ]
; fullState [ 61 ] = solverState [ 49 ] ; fullState [ 62 ] = solverState [ 50
] ; fullState [ 63 ] = solverState [ 51 ] ; fullState [ 64 ] = u [ 6 ] ;
fullState [ 65 ] = uDot [ 6 ] ; fullState [ 66 ] = u [ 7 ] ; fullState [ 67 ]
= uDot [ 7 ] ; fullState [ 68 ] = solverState [ 52 ] ; fullState [ 69 ] =
solverState [ 53 ] ; fullState [ 70 ] = solverState [ 54 ] ; fullState [ 71 ]
= solverState [ 55 ] ; fullState [ 72 ] = solverState [ 56 ] ; fullState [ 73
] = solverState [ 57 ] ; fullState [ 74 ] = solverState [ 58 ] ; fullState [
75 ] = u [ 8 ] ; fullState [ 76 ] = uDot [ 8 ] ; fullState [ 77 ] =
solverState [ 59 ] ; fullState [ 78 ] = solverState [ 60 ] ; fullState [ 79 ]
= solverState [ 61 ] ; fullState [ 80 ] = solverState [ 62 ] ; fullState [ 81
] = solverState [ 63 ] ; fullState [ 82 ] = solverState [ 64 ] ; fullState [
83 ] = solverState [ 65 ] ; fullState [ 84 ] = solverState [ 66 ] ; fullState
[ 85 ] = solverState [ 67 ] ; fullState [ 86 ] = solverState [ 68 ] ;
fullState [ 87 ] = solverState [ 69 ] ; fullState [ 88 ] = solverState [ 70 ]
; fullState [ 89 ] = solverState [ 71 ] ; fullState [ 90 ] = discreteState [
0 ] ; fullState [ 91 ] = discreteState [ 1 ] ; fullState [ 92 ] =
discreteState [ 2 ] ; } void triped_a151ee3d_1_extractSolverStateVector (
const void * mech , const double * fullState , double * solverState ) { (
void ) mech ; solverState [ 0 ] = fullState [ 0 ] ; solverState [ 1 ] =
fullState [ 1 ] ; solverState [ 2 ] = fullState [ 2 ] ; solverState [ 3 ] =
fullState [ 3 ] ; solverState [ 4 ] = fullState [ 4 ] ; solverState [ 5 ] =
fullState [ 5 ] ; solverState [ 6 ] = fullState [ 6 ] ; solverState [ 7 ] =
fullState [ 7 ] ; solverState [ 8 ] = fullState [ 12 ] ; solverState [ 9 ] =
fullState [ 13 ] ; solverState [ 10 ] = fullState [ 14 ] ; solverState [ 11 ]
= fullState [ 15 ] ; solverState [ 12 ] = fullState [ 16 ] ; solverState [ 13
] = fullState [ 17 ] ; solverState [ 14 ] = fullState [ 18 ] ; solverState [
15 ] = fullState [ 21 ] ; solverState [ 16 ] = fullState [ 22 ] ; solverState
[ 17 ] = fullState [ 23 ] ; solverState [ 18 ] = fullState [ 24 ] ;
solverState [ 19 ] = fullState [ 25 ] ; solverState [ 20 ] = fullState [ 26 ]
; solverState [ 21 ] = fullState [ 27 ] ; solverState [ 22 ] = fullState [ 28
] ; solverState [ 23 ] = fullState [ 29 ] ; solverState [ 24 ] = fullState [
30 ] ; solverState [ 25 ] = fullState [ 31 ] ; solverState [ 26 ] = fullState
[ 32 ] ; solverState [ 27 ] = fullState [ 33 ] ; solverState [ 28 ] =
fullState [ 34 ] ; solverState [ 29 ] = fullState [ 35 ] ; solverState [ 30 ]
= fullState [ 40 ] ; solverState [ 31 ] = fullState [ 41 ] ; solverState [ 32
] = fullState [ 42 ] ; solverState [ 33 ] = fullState [ 43 ] ; solverState [
34 ] = fullState [ 44 ] ; solverState [ 35 ] = fullState [ 45 ] ; solverState
[ 36 ] = fullState [ 46 ] ; solverState [ 37 ] = fullState [ 49 ] ;
solverState [ 38 ] = fullState [ 50 ] ; solverState [ 39 ] = fullState [ 51 ]
; solverState [ 40 ] = fullState [ 52 ] ; solverState [ 41 ] = fullState [ 53
] ; solverState [ 42 ] = fullState [ 54 ] ; solverState [ 43 ] = fullState [
55 ] ; solverState [ 44 ] = fullState [ 56 ] ; solverState [ 45 ] = fullState
[ 57 ] ; solverState [ 46 ] = fullState [ 58 ] ; solverState [ 47 ] =
fullState [ 59 ] ; solverState [ 48 ] = fullState [ 60 ] ; solverState [ 49 ]
= fullState [ 61 ] ; solverState [ 50 ] = fullState [ 62 ] ; solverState [ 51
] = fullState [ 63 ] ; solverState [ 52 ] = fullState [ 68 ] ; solverState [
53 ] = fullState [ 69 ] ; solverState [ 54 ] = fullState [ 70 ] ; solverState
[ 55 ] = fullState [ 71 ] ; solverState [ 56 ] = fullState [ 72 ] ;
solverState [ 57 ] = fullState [ 73 ] ; solverState [ 58 ] = fullState [ 74 ]
; solverState [ 59 ] = fullState [ 77 ] ; solverState [ 60 ] = fullState [ 78
] ; solverState [ 61 ] = fullState [ 79 ] ; solverState [ 62 ] = fullState [
80 ] ; solverState [ 63 ] = fullState [ 81 ] ; solverState [ 64 ] = fullState
[ 82 ] ; solverState [ 65 ] = fullState [ 83 ] ; solverState [ 66 ] =
fullState [ 84 ] ; solverState [ 67 ] = fullState [ 85 ] ; solverState [ 68 ]
= fullState [ 86 ] ; solverState [ 69 ] = fullState [ 87 ] ; solverState [ 70
] = fullState [ 88 ] ; solverState [ 71 ] = fullState [ 89 ] ; } int
triped_a151ee3d_1_isPositionViolation ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* state , const int * modeVector ) { const double * rtdvd = rtdv -> mDoubles
. mValues ; const int * rtdvi = rtdv -> mInts . mValues ; int ii [ 3 ] ;
double xx [ 174 ] ; ( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) eqnEnableFlags ; ( void ) modeVector ; xx [ 0 ] = 0.5 ; xx [ 1 ] = xx [ 0 ]
* state [ 0 ] ; xx [ 2 ] = sin ( xx [ 1 ] ) ; xx [ 3 ] = xx [ 0 ] * state [ 1
] ; xx [ 4 ] = sin ( xx [ 3 ] ) ; xx [ 5 ] = xx [ 2 ] * xx [ 4 ] ; xx [ 6 ] =
xx [ 0 ] * state [ 2 ] ; xx [ 7 ] = sin ( xx [ 6 ] ) ; xx [ 8 ] = cos ( xx [
6 ] ) ; xx [ 6 ] = cos ( xx [ 1 ] ) ; xx [ 1 ] = cos ( xx [ 3 ] ) ; xx [ 3 ]
= xx [ 6 ] * xx [ 1 ] ; xx [ 9 ] = xx [ 5 ] * xx [ 7 ] - xx [ 8 ] * xx [ 3 ]
; xx [ 10 ] = xx [ 1 ] * xx [ 2 ] ; xx [ 1 ] = xx [ 6 ] * xx [ 4 ] ; xx [ 2 ]
= xx [ 8 ] * xx [ 10 ] + xx [ 1 ] * xx [ 7 ] ; xx [ 4 ] = - xx [ 2 ] ; xx [ 6
] = xx [ 10 ] * xx [ 7 ] - xx [ 8 ] * xx [ 1 ] ; xx [ 1 ] = xx [ 3 ] * xx [ 7
] + xx [ 8 ] * xx [ 5 ] ; xx [ 3 ] = - xx [ 1 ] ; xx [ 10 ] = xx [ 9 ] ; xx [
11 ] = xx [ 4 ] ; xx [ 12 ] = xx [ 6 ] ; xx [ 13 ] = xx [ 3 ] ; xx [ 14 ] = -
0.07930000000000005 ; xx [ 15 ] = 0.02989999999999998 ; xx [ 16 ] = - 0.105 ;
pm_math_Quaternion_xform_ra ( xx + 10 , xx + 14 , xx + 17 ) ; xx [ 20 ] = xx
[ 4 ] ; xx [ 21 ] = xx [ 6 ] ; xx [ 22 ] = xx [ 3 ] ; xx [ 3 ] =
8.499999999999917e-3 ; xx [ 4 ] = xx [ 3 ] * xx [ 6 ] ; xx [ 5 ] =
0.09430000000000001 ; xx [ 7 ] = xx [ 1 ] * xx [ 5 ] - xx [ 2 ] * xx [ 3 ] ;
xx [ 1 ] = xx [ 5 ] * xx [ 6 ] ; xx [ 23 ] = - xx [ 4 ] ; xx [ 24 ] = xx [ 7
] ; xx [ 25 ] = xx [ 1 ] ; pm_math_Vector3_cross_ra ( xx + 20 , xx + 23 , xx
+ 26 ) ; xx [ 2 ] = 2.0 ; xx [ 6 ] = 0.3593 - ( xx [ 26 ] - xx [ 4 ] * xx [ 9
] ) * xx [ 2 ] ; xx [ 20 ] = 0.9813587152233355 ; xx [ 21 ] = -
8.90329107482098e-3 ; xx [ 22 ] = 0.04727447558555155 ; xx [ 23 ] =
0.1860669971310137 ; xx [ 4 ] = xx [ 0 ] * state [ 10 ] ; xx [ 8 ] =
0.0960996545167382 ; xx [ 24 ] = sin ( xx [ 4 ] ) ; xx [ 25 ] =
1.177948454025794e-4 ; xx [ 29 ] = 0.9953717107322962 ; xx [ 30 ] = cos ( xx
[ 4 ] ) ; xx [ 31 ] = - ( xx [ 8 ] * xx [ 24 ] ) ; xx [ 32 ] = xx [ 25 ] * xx
[ 24 ] ; xx [ 33 ] = xx [ 29 ] * xx [ 24 ] ; pm_math_Quaternion_compose_ra (
xx + 20 , xx + 30 , xx + 34 ) ; xx [ 20 ] = 0.9988422572316213 ; xx [ 21 ] =
- 6.00792342022948e-5 ; xx [ 22 ] = - 0.04810551968680427 ; xx [ 23 ] =
2.312115552059532e-5 ; xx [ 30 ] = state [ 12 ] ; xx [ 31 ] = state [ 13 ] ;
xx [ 32 ] = state [ 14 ] ; xx [ 33 ] = state [ 15 ] ; xx [ 38 ] = -
0.9999999999996456 ; xx [ 39 ] = 1.335114243000915e-9 ; xx [ 40 ] =
1.564242624680818e-7 ; xx [ 41 ] = - 8.27384461422298e-7 ;
pm_math_Quaternion_composeInverse_ra ( xx + 30 , xx + 38 , xx + 42 ) ;
pm_math_Quaternion_compose_ra ( xx + 20 , xx + 42 , xx + 30 ) ;
pm_math_Quaternion_compose_ra ( xx + 34 , xx + 30 , xx + 42 ) ; xx [ 46 ] =
0.05448810068449638 ; xx [ 47 ] = 9.016809746371062e-8 ; xx [ 48 ] = -
1.197569081478675e-6 ; pm_math_Quaternion_xform_ra ( xx + 42 , xx + 46 , xx +
49 ) ; xx [ 4 ] = 0.06203617700142335 ; xx [ 42 ] = 0.05551189931534764 ; xx
[ 43 ] = 9.185648409514065e-8 ; xx [ 44 ] = 1.23198241897863e-6 ;
pm_math_Quaternion_xform_ra ( xx + 30 , xx + 42 , xx + 52 ) ; xx [ 24 ] =
6.252064263292171e-7 ; xx [ 30 ] = 4.366561113205437e-3 ; xx [ 31 ] = xx [ 4
] + xx [ 52 ] ; xx [ 32 ] = xx [ 24 ] + xx [ 53 ] ; xx [ 33 ] = xx [ 54 ] -
xx [ 30 ] ; pm_math_Quaternion_xform_ra ( xx + 34 , xx + 31 , xx + 52 ) ; xx
[ 31 ] = - 0.02492486046921943 ; xx [ 32 ] = - 9.061899534334276e-7 ; xx [ 33
] = 0.01185157563810752 ; pm_math_Quaternion_xform_ra ( xx + 34 , xx + 31 ,
xx + 55 ) ; xx [ 34 ] = 0.139807669447128 ; xx [ 35 ] = ( xx [ 9 ] * xx [ 7 ]
+ xx [ 27 ] ) * xx [ 2 ] ; xx [ 7 ] = 0.0549998406976098 ; xx [ 36 ] =
0.01205999999999992 ; xx [ 26 ] = xx [ 36 ] - xx [ 2 ] * ( xx [ 28 ] + xx [ 1
] * xx [ 9 ] ) ; xx [ 1 ] = 0.06144 ; xx [ 58 ] = - 0.07930000000000012 ; xx
[ 59 ] = - 0.02990000000000002 ; xx [ 60 ] = - 0.1049999999999999 ;
pm_math_Quaternion_xform_ra ( xx + 10 , xx + 58 , xx + 61 ) ; xx [ 9 ] = -
0.9813501000307463 ; xx [ 10 ] = - 9.021345794401411e-3 ; xx [ 11 ] = -
0.04725208941316491 ; xx [ 12 ] = 0.1861124298261472 ; xx [ 13 ] = xx [ 0 ] *
state [ 19 ] ; xx [ 27 ] = sin ( xx [ 13 ] ) ; xx [ 64 ] = cos ( xx [ 13 ] )
; xx [ 65 ] = - ( xx [ 8 ] * xx [ 27 ] ) ; xx [ 66 ] = xx [ 25 ] * xx [ 27 ]
; xx [ 67 ] = xx [ 29 ] * xx [ 27 ] ; pm_math_Quaternion_compose_ra ( xx + 9
, xx + 64 , xx + 68 ) ; xx [ 9 ] = state [ 21 ] ; xx [ 10 ] = state [ 22 ] ;
xx [ 11 ] = state [ 23 ] ; xx [ 12 ] = state [ 24 ] ;
pm_math_Quaternion_composeInverse_ra ( xx + 9 , xx + 38 , xx + 64 ) ;
pm_math_Quaternion_compose_ra ( xx + 20 , xx + 64 , xx + 9 ) ;
pm_math_Quaternion_compose_ra ( xx + 68 , xx + 9 , xx + 64 ) ;
pm_math_Quaternion_xform_ra ( xx + 64 , xx + 46 , xx + 72 ) ;
pm_math_Quaternion_xform_ra ( xx + 9 , xx + 42 , xx + 64 ) ; xx [ 9 ] = xx [
4 ] + xx [ 64 ] ; xx [ 10 ] = xx [ 24 ] + xx [ 65 ] ; xx [ 11 ] = xx [ 66 ] -
xx [ 30 ] ; pm_math_Quaternion_xform_ra ( xx + 68 , xx + 9 , xx + 64 ) ;
pm_math_Quaternion_xform_ra ( xx + 68 , xx + 31 , xx + 9 ) ; xx [ 12 ] =
0.5000000000000001 ; xx [ 13 ] = xx [ 0 ] * state [ 28 ] ; xx [ 27 ] = sin (
xx [ 13 ] ) ; xx [ 28 ] = xx [ 0 ] * state [ 29 ] ; xx [ 37 ] = sin ( xx [ 28
] ) ; xx [ 45 ] = xx [ 27 ] * xx [ 37 ] ; xx [ 67 ] = xx [ 0 ] * state [ 30 ]
; xx [ 68 ] = sin ( xx [ 67 ] ) ; xx [ 69 ] = cos ( xx [ 67 ] ) ; xx [ 67 ] =
cos ( xx [ 13 ] ) ; xx [ 13 ] = cos ( xx [ 28 ] ) ; xx [ 28 ] = xx [ 67 ] *
xx [ 13 ] ; xx [ 70 ] = xx [ 45 ] * xx [ 68 ] - xx [ 69 ] * xx [ 28 ] ; xx [
71 ] = xx [ 28 ] * xx [ 68 ] + xx [ 69 ] * xx [ 45 ] ; xx [ 28 ] =
0.8660254037844386 ; xx [ 45 ] = xx [ 13 ] * xx [ 27 ] ; xx [ 13 ] = xx [ 67
] * xx [ 37 ] ; xx [ 27 ] = xx [ 69 ] * xx [ 45 ] + xx [ 13 ] * xx [ 68 ] ;
xx [ 37 ] = xx [ 45 ] * xx [ 68 ] - xx [ 69 ] * xx [ 13 ] ; xx [ 75 ] = xx [
12 ] * xx [ 70 ] - xx [ 71 ] * xx [ 28 ] ; xx [ 76 ] = - ( xx [ 27 ] * xx [
12 ] - xx [ 28 ] * xx [ 37 ] ) ; xx [ 77 ] = xx [ 12 ] * xx [ 37 ] + xx [ 27
] * xx [ 28 ] ; xx [ 78 ] = - ( xx [ 28 ] * xx [ 70 ] + xx [ 71 ] * xx [ 12 ]
) ; pm_math_Quaternion_xform_ra ( xx + 75 , xx + 14 , xx + 67 ) ; xx [ 79 ] =
- xx [ 27 ] ; xx [ 80 ] = xx [ 37 ] ; xx [ 81 ] = - xx [ 71 ] ; xx [ 13 ] =
xx [ 3 ] * xx [ 37 ] ; xx [ 45 ] = xx [ 71 ] * xx [ 5 ] - xx [ 27 ] * xx [ 3
] ; xx [ 27 ] = xx [ 5 ] * xx [ 37 ] ; xx [ 82 ] = - xx [ 13 ] ; xx [ 83 ] =
xx [ 45 ] ; xx [ 84 ] = xx [ 27 ] ; pm_math_Vector3_cross_ra ( xx + 79 , xx +
82 , xx + 85 ) ; xx [ 37 ] = ( xx [ 85 ] - xx [ 13 ] * xx [ 70 ] ) * xx [ 2 ]
- xx [ 5 ] ; xx [ 13 ] = xx [ 37 ] * xx [ 28 ] ; xx [ 71 ] = ( xx [ 70 ] * xx
[ 45 ] + xx [ 86 ] ) * xx [ 2 ] ; xx [ 45 ] = xx [ 28 ] * xx [ 71 ] ; xx [ 79
] = ( xx [ 28 ] * xx [ 13 ] - xx [ 12 ] * xx [ 45 ] ) * xx [ 2 ] - xx [ 37 ]
- 0.1325 ; xx [ 80 ] = 0.651818103933012 ; xx [ 81 ] = 0.03648925127026437 ;
xx [ 82 ] = 0.031347714040858 ; xx [ 83 ] = - 0.7568480790431602 ; xx [ 37 ]
= xx [ 0 ] * state [ 38 ] ; xx [ 84 ] = sin ( xx [ 37 ] ) ; xx [ 88 ] = cos (
xx [ 37 ] ) ; xx [ 89 ] = - ( xx [ 8 ] * xx [ 84 ] ) ; xx [ 90 ] = xx [ 25 ]
* xx [ 84 ] ; xx [ 91 ] = xx [ 29 ] * xx [ 84 ] ;
pm_math_Quaternion_compose_ra ( xx + 80 , xx + 88 , xx + 92 ) ; xx [ 80 ] =
state [ 40 ] ; xx [ 81 ] = state [ 41 ] ; xx [ 82 ] = state [ 42 ] ; xx [ 83
] = state [ 43 ] ; pm_math_Quaternion_composeInverse_ra ( xx + 80 , xx + 38 ,
xx + 88 ) ; pm_math_Quaternion_compose_ra ( xx + 20 , xx + 88 , xx + 80 ) ;
pm_math_Quaternion_compose_ra ( xx + 92 , xx + 80 , xx + 88 ) ;
pm_math_Quaternion_xform_ra ( xx + 88 , xx + 46 , xx + 96 ) ;
pm_math_Quaternion_xform_ra ( xx + 80 , xx + 42 , xx + 88 ) ; xx [ 80 ] = xx
[ 4 ] + xx [ 88 ] ; xx [ 81 ] = xx [ 24 ] + xx [ 89 ] ; xx [ 82 ] = xx [ 90 ]
- xx [ 30 ] ; pm_math_Quaternion_xform_ra ( xx + 92 , xx + 80 , xx + 88 ) ;
pm_math_Quaternion_xform_ra ( xx + 92 , xx + 31 , xx + 80 ) ; xx [ 37 ] = xx
[ 2 ] * ( xx [ 28 ] * xx [ 45 ] + xx [ 12 ] * xx [ 13 ] ) - xx [ 71 ] -
0.2294967320028763 ; xx [ 12 ] = xx [ 36 ] - xx [ 2 ] * ( xx [ 87 ] + xx [ 27
] * xx [ 70 ] ) ; pm_math_Quaternion_xform_ra ( xx + 75 , xx + 58 , xx + 83 )
; xx [ 75 ] = - 0.3294969578258811 ; xx [ 76 ] = - 0.04543218271089525 ; xx [
77 ] = - 0.01581333007230693 ; xx [ 78 ] = 0.9429303315460998 ; xx [ 13 ] =
xx [ 0 ] * state [ 47 ] ; xx [ 27 ] = sin ( xx [ 13 ] ) ; xx [ 91 ] = cos (
xx [ 13 ] ) ; xx [ 92 ] = - ( xx [ 8 ] * xx [ 27 ] ) ; xx [ 93 ] = xx [ 25 ]
* xx [ 27 ] ; xx [ 94 ] = xx [ 29 ] * xx [ 27 ] ;
pm_math_Quaternion_compose_ra ( xx + 75 , xx + 91 , xx + 99 ) ; xx [ 75 ] =
state [ 49 ] ; xx [ 76 ] = state [ 50 ] ; xx [ 77 ] = state [ 51 ] ; xx [ 78
] = state [ 52 ] ; pm_math_Quaternion_composeInverse_ra ( xx + 75 , xx + 38 ,
xx + 91 ) ; pm_math_Quaternion_compose_ra ( xx + 20 , xx + 91 , xx + 75 ) ;
pm_math_Quaternion_compose_ra ( xx + 99 , xx + 75 , xx + 91 ) ;
pm_math_Quaternion_xform_ra ( xx + 91 , xx + 46 , xx + 103 ) ;
pm_math_Quaternion_xform_ra ( xx + 75 , xx + 42 , xx + 91 ) ; xx [ 75 ] = xx
[ 4 ] + xx [ 91 ] ; xx [ 76 ] = xx [ 24 ] + xx [ 92 ] ; xx [ 77 ] = xx [ 93 ]
- xx [ 30 ] ; pm_math_Quaternion_xform_ra ( xx + 99 , xx + 75 , xx + 91 ) ;
pm_math_Quaternion_xform_ra ( xx + 99 , xx + 31 , xx + 75 ) ; xx [ 13 ] =
0.4999999999999998 ; xx [ 27 ] = xx [ 0 ] * state [ 56 ] ; xx [ 28 ] = sin (
xx [ 27 ] ) ; xx [ 45 ] = xx [ 0 ] * state [ 57 ] ; xx [ 70 ] = sin ( xx [ 45
] ) ; xx [ 71 ] = xx [ 28 ] * xx [ 70 ] ; xx [ 78 ] = xx [ 0 ] * state [ 58 ]
; xx [ 86 ] = sin ( xx [ 78 ] ) ; xx [ 87 ] = cos ( xx [ 78 ] ) ; xx [ 78 ] =
cos ( xx [ 27 ] ) ; xx [ 27 ] = cos ( xx [ 45 ] ) ; xx [ 45 ] = xx [ 78 ] *
xx [ 27 ] ; xx [ 94 ] = xx [ 71 ] * xx [ 86 ] - xx [ 87 ] * xx [ 45 ] ; xx [
95 ] = xx [ 45 ] * xx [ 86 ] + xx [ 87 ] * xx [ 71 ] ; xx [ 45 ] =
0.8660254037844387 ; xx [ 71 ] = xx [ 27 ] * xx [ 28 ] ; xx [ 27 ] = xx [ 78
] * xx [ 70 ] ; xx [ 28 ] = xx [ 87 ] * xx [ 71 ] + xx [ 27 ] * xx [ 86 ] ;
xx [ 70 ] = xx [ 71 ] * xx [ 86 ] - xx [ 87 ] * xx [ 27 ] ; xx [ 99 ] = - (
xx [ 13 ] * xx [ 94 ] + xx [ 95 ] * xx [ 45 ] ) ; xx [ 100 ] = xx [ 28 ] * xx
[ 13 ] + xx [ 45 ] * xx [ 70 ] ; xx [ 101 ] = xx [ 28 ] * xx [ 45 ] - xx [ 13
] * xx [ 70 ] ; xx [ 102 ] = xx [ 95 ] * xx [ 13 ] - xx [ 45 ] * xx [ 94 ] ;
pm_math_Quaternion_xform_ra ( xx + 99 , xx + 14 , xx + 106 ) ; xx [ 14 ] = xx
[ 95 ] * xx [ 5 ] - xx [ 28 ] * xx [ 3 ] ; xx [ 109 ] = - xx [ 28 ] ; xx [
110 ] = xx [ 70 ] ; xx [ 111 ] = - xx [ 95 ] ; xx [ 15 ] = xx [ 3 ] * xx [ 70
] ; xx [ 3 ] = xx [ 5 ] * xx [ 70 ] ; xx [ 112 ] = - xx [ 15 ] ; xx [ 113 ] =
xx [ 14 ] ; xx [ 114 ] = xx [ 3 ] ; pm_math_Vector3_cross_ra ( xx + 109 , xx
+ 112 , xx + 115 ) ; xx [ 16 ] = ( xx [ 94 ] * xx [ 14 ] + xx [ 116 ] ) * xx
[ 2 ] ; xx [ 14 ] = xx [ 45 ] * xx [ 16 ] ; xx [ 27 ] = ( xx [ 115 ] - xx [
15 ] * xx [ 94 ] ) * xx [ 2 ] - xx [ 5 ] ; xx [ 5 ] = xx [ 27 ] * xx [ 45 ] ;
xx [ 15 ] = ( xx [ 13 ] * xx [ 14 ] + xx [ 45 ] * xx [ 5 ] ) * xx [ 2 ] - xx
[ 27 ] - 0.1325000000000001 ; xx [ 109 ] = - 0.3295406112903234 ; xx [ 110 ]
= 0.04539254234508536 ; xx [ 111 ] = - 0.01592676154469353 ; xx [ 112 ] = -
0.942915076174174 ; xx [ 27 ] = xx [ 0 ] * state [ 66 ] ; xx [ 28 ] = sin (
xx [ 27 ] ) ; xx [ 118 ] = cos ( xx [ 27 ] ) ; xx [ 119 ] = - ( xx [ 8 ] * xx
[ 28 ] ) ; xx [ 120 ] = xx [ 25 ] * xx [ 28 ] ; xx [ 121 ] = xx [ 29 ] * xx [
28 ] ; pm_math_Quaternion_compose_ra ( xx + 109 , xx + 118 , xx + 122 ) ; xx
[ 109 ] = state [ 68 ] ; xx [ 110 ] = state [ 69 ] ; xx [ 111 ] = state [ 70
] ; xx [ 112 ] = state [ 71 ] ; pm_math_Quaternion_composeInverse_ra ( xx +
109 , xx + 38 , xx + 118 ) ; pm_math_Quaternion_compose_ra ( xx + 20 , xx +
118 , xx + 109 ) ; pm_math_Quaternion_compose_ra ( xx + 122 , xx + 109 , xx +
118 ) ; pm_math_Quaternion_xform_ra ( xx + 118 , xx + 46 , xx + 126 ) ;
pm_math_Quaternion_xform_ra ( xx + 109 , xx + 42 , xx + 118 ) ; xx [ 109 ] =
xx [ 4 ] + xx [ 118 ] ; xx [ 110 ] = xx [ 24 ] + xx [ 119 ] ; xx [ 111 ] = xx
[ 120 ] - xx [ 30 ] ; pm_math_Quaternion_xform_ra ( xx + 122 , xx + 109 , xx
+ 112 ) ; pm_math_Quaternion_xform_ra ( xx + 122 , xx + 31 , xx + 109 ) ; xx
[ 27 ] = xx [ 2 ] * ( xx [ 45 ] * xx [ 14 ] - xx [ 13 ] * xx [ 5 ] ) - xx [
16 ] + 0.2294967320028762 ; xx [ 5 ] = xx [ 36 ] - xx [ 2 ] * ( xx [ 117 ] +
xx [ 3 ] * xx [ 94 ] ) ; pm_math_Quaternion_xform_ra ( xx + 99 , xx + 58 , xx
+ 115 ) ; xx [ 99 ] = 0.651853142204865 ; xx [ 100 ] = - 0.03641083691649384
; xx [ 101 ] = 0.03143875934085798 ; xx [ 102 ] = 0.7568179017199528 ; xx [ 3
] = xx [ 0 ] * state [ 75 ] ; xx [ 13 ] = sin ( xx [ 3 ] ) ; xx [ 118 ] = cos
( xx [ 3 ] ) ; xx [ 119 ] = - ( xx [ 8 ] * xx [ 13 ] ) ; xx [ 120 ] = xx [ 25
] * xx [ 13 ] ; xx [ 121 ] = xx [ 29 ] * xx [ 13 ] ;
pm_math_Quaternion_compose_ra ( xx + 99 , xx + 118 , xx + 122 ) ; xx [ 99 ] =
state [ 77 ] ; xx [ 100 ] = state [ 78 ] ; xx [ 101 ] = state [ 79 ] ; xx [
102 ] = state [ 80 ] ; pm_math_Quaternion_composeInverse_ra ( xx + 99 , xx +
38 , xx + 118 ) ; pm_math_Quaternion_compose_ra ( xx + 20 , xx + 118 , xx +
38 ) ; pm_math_Quaternion_compose_ra ( xx + 122 , xx + 38 , xx + 20 ) ;
pm_math_Quaternion_xform_ra ( xx + 20 , xx + 46 , xx + 58 ) ;
pm_math_Quaternion_xform_ra ( xx + 38 , xx + 42 , xx + 20 ) ; xx [ 38 ] = xx
[ 4 ] + xx [ 20 ] ; xx [ 39 ] = xx [ 24 ] + xx [ 21 ] ; xx [ 40 ] = xx [ 22 ]
- xx [ 30 ] ; pm_math_Quaternion_xform_ra ( xx + 122 , xx + 38 , xx + 20 ) ;
pm_math_Quaternion_xform_ra ( xx + 122 , xx + 31 , xx + 23 ) ; xx [ 3 ] = xx
[ 0 ] * state [ 6 ] ; xx [ 4 ] = cos ( xx [ 3 ] ) ; xx [ 8 ] = sin ( xx [ 3 ]
) ; xx [ 3 ] = 0.4527250000000002 * xx [ 8 ] ; xx [ 13 ] = 1.405725 ; xx [ 14
] = xx [ 13 ] * xx [ 8 ] ; xx [ 16 ] = xx [ 2 ] * ( xx [ 4 ] * xx [ 3 ] + xx
[ 14 ] * xx [ 8 ] ) ; xx [ 28 ] = 1.5457 ; xx [ 29 ] = 0.01 ; xx [ 30 ] =
0.7071067811865476 ; xx [ 31 ] = xx [ 0 ] * state [ 8 ] ; xx [ 32 ] = xx [ 30
] * cos ( xx [ 31 ] ) ; xx [ 33 ] = xx [ 29 ] * xx [ 32 ] ; xx [ 36 ] = xx [
30 ] * sin ( xx [ 31 ] ) ; xx [ 31 ] = xx [ 29 ] * xx [ 36 ] ; xx [ 38 ] =
9.300000000000017e-3 ; xx [ 39 ] = 9.999999999999957e-3 ; xx [ 40 ] = xx [ 33
] * xx [ 32 ] ; xx [ 41 ] = xx [ 31 ] * xx [ 36 ] ; xx [ 42 ] = ( xx [ 4 ] *
xx [ 14 ] - xx [ 3 ] * xx [ 8 ] ) * xx [ 2 ] ; xx [ 3 ] = 0.04550000000000132
; xx [ 14 ] = 0.0555 ; xx [ 43 ] = xx [ 16 ] - xx [ 16 ] + xx [ 28 ] - ( xx [
2 ] * ( xx [ 33 ] * xx [ 36 ] - xx [ 31 ] * xx [ 32 ] ) - xx [ 38 ] ) ; xx [
44 ] = - ( xx [ 39 ] - ( xx [ 40 ] + xx [ 41 ] ) * xx [ 2 ] ) ; xx [ 45 ] =
xx [ 42 ] - xx [ 42 ] - xx [ 3 ] - ( ( xx [ 40 ] + xx [ 41 ] ) * xx [ 2 ] -
xx [ 14 ] ) ; xx [ 16 ] = xx [ 30 ] * xx [ 4 ] ; xx [ 4 ] = xx [ 30 ] * xx [
8 ] ; xx [ 8 ] = xx [ 16 ] * xx [ 4 ] ; xx [ 31 ] = 1.0 ; xx [ 33 ] = xx [ 4
] * xx [ 4 ] ; xx [ 4 ] = xx [ 16 ] * xx [ 16 ] ; xx [ 40 ] = - ( ( xx [ 8 ]
+ xx [ 8 ] ) * xx [ 2 ] ) ; xx [ 41 ] = xx [ 31 ] - ( xx [ 33 ] + xx [ 4 ] )
* xx [ 2 ] ; xx [ 42 ] = xx [ 2 ] * ( xx [ 33 ] - xx [ 4 ] ) ; xx [ 46 ] = xx
[ 31 ] - ( xx [ 33 ] + xx [ 33 ] ) * xx [ 2 ] ; xx [ 47 ] = xx [ 2 ] * ( xx [
8 ] - xx [ 8 ] ) ; xx [ 48 ] = - ( ( xx [ 8 ] + xx [ 8 ] ) * xx [ 2 ] ) ; xx
[ 4 ] = 7.427230677621783e-3 ; xx [ 8 ] = xx [ 32 ] * xx [ 36 ] ; xx [ 16 ] =
xx [ 36 ] * xx [ 36 ] ; xx [ 33 ] = xx [ 32 ] * xx [ 32 ] ; xx [ 99 ] = - ( (
xx [ 8 ] + xx [ 8 ] ) * xx [ 2 ] ) ; xx [ 100 ] = xx [ 31 ] - ( xx [ 16 ] +
xx [ 33 ] ) * xx [ 2 ] ; xx [ 101 ] = xx [ 2 ] * ( xx [ 16 ] - xx [ 33 ] ) ;
xx [ 118 ] = xx [ 31 ] - ( xx [ 16 ] + xx [ 16 ] ) * xx [ 2 ] ; xx [ 119 ] =
xx [ 2 ] * ( xx [ 8 ] - xx [ 8 ] ) ; xx [ 120 ] = - ( ( xx [ 8 ] + xx [ 8 ] )
* xx [ 2 ] ) ; xx [ 8 ] = xx [ 0 ] * state [ 34 ] ; xx [ 16 ] = cos ( xx [ 8
] ) ; xx [ 32 ] = 0.452725 ; xx [ 33 ] = sin ( xx [ 8 ] ) ; xx [ 8 ] = xx [
32 ] * xx [ 33 ] ; xx [ 36 ] = xx [ 13 ] * xx [ 33 ] ; xx [ 70 ] = xx [ 2 ] *
( xx [ 16 ] * xx [ 8 ] + xx [ 36 ] * xx [ 33 ] ) ; xx [ 71 ] = xx [ 0 ] *
state [ 36 ] ; xx [ 78 ] = xx [ 30 ] * cos ( xx [ 71 ] ) ; xx [ 86 ] = xx [
29 ] * xx [ 78 ] ; xx [ 87 ] = xx [ 30 ] * sin ( xx [ 71 ] ) ; xx [ 71 ] = xx
[ 29 ] * xx [ 87 ] ; xx [ 94 ] = xx [ 86 ] * xx [ 78 ] ; xx [ 95 ] = xx [ 71
] * xx [ 87 ] ; xx [ 102 ] = ( xx [ 16 ] * xx [ 36 ] - xx [ 8 ] * xx [ 33 ] )
* xx [ 2 ] ; xx [ 121 ] = xx [ 70 ] - xx [ 70 ] + xx [ 28 ] - ( xx [ 2 ] * (
xx [ 86 ] * xx [ 87 ] - xx [ 71 ] * xx [ 78 ] ) - xx [ 38 ] ) ; xx [ 122 ] =
- ( xx [ 39 ] - ( xx [ 94 ] + xx [ 95 ] ) * xx [ 2 ] ) ; xx [ 123 ] = xx [
102 ] - xx [ 102 ] - xx [ 3 ] - ( ( xx [ 94 ] + xx [ 95 ] ) * xx [ 2 ] - xx [
14 ] ) ; xx [ 8 ] = xx [ 30 ] * xx [ 16 ] ; xx [ 16 ] = xx [ 30 ] * xx [ 33 ]
; xx [ 33 ] = xx [ 8 ] * xx [ 16 ] ; xx [ 36 ] = xx [ 16 ] * xx [ 16 ] ; xx [
16 ] = xx [ 8 ] * xx [ 8 ] ; xx [ 129 ] = - ( ( xx [ 33 ] + xx [ 33 ] ) * xx
[ 2 ] ) ; xx [ 130 ] = xx [ 31 ] - ( xx [ 36 ] + xx [ 16 ] ) * xx [ 2 ] ; xx
[ 131 ] = xx [ 2 ] * ( xx [ 36 ] - xx [ 16 ] ) ; xx [ 132 ] = xx [ 31 ] - (
xx [ 36 ] + xx [ 36 ] ) * xx [ 2 ] ; xx [ 133 ] = xx [ 2 ] * ( xx [ 33 ] - xx
[ 33 ] ) ; xx [ 134 ] = - ( ( xx [ 33 ] + xx [ 33 ] ) * xx [ 2 ] ) ; xx [ 8 ]
= xx [ 78 ] * xx [ 87 ] ; xx [ 16 ] = xx [ 87 ] * xx [ 87 ] ; xx [ 33 ] = xx
[ 78 ] * xx [ 78 ] ; xx [ 135 ] = - ( ( xx [ 8 ] + xx [ 8 ] ) * xx [ 2 ] ) ;
xx [ 136 ] = xx [ 31 ] - ( xx [ 16 ] + xx [ 33 ] ) * xx [ 2 ] ; xx [ 137 ] =
xx [ 2 ] * ( xx [ 16 ] - xx [ 33 ] ) ; xx [ 138 ] = xx [ 31 ] - ( xx [ 16 ] +
xx [ 16 ] ) * xx [ 2 ] ; xx [ 139 ] = xx [ 2 ] * ( xx [ 8 ] - xx [ 8 ] ) ; xx
[ 140 ] = - ( ( xx [ 8 ] + xx [ 8 ] ) * xx [ 2 ] ) ; xx [ 8 ] = xx [ 0 ] *
state [ 62 ] ; xx [ 16 ] = cos ( xx [ 8 ] ) ; xx [ 33 ] = sin ( xx [ 8 ] ) ;
xx [ 8 ] = xx [ 32 ] * xx [ 33 ] ; xx [ 32 ] = xx [ 13 ] * xx [ 33 ] ; xx [
13 ] = xx [ 2 ] * ( xx [ 16 ] * xx [ 8 ] + xx [ 32 ] * xx [ 33 ] ) ; xx [ 36
] = xx [ 0 ] * state [ 64 ] ; xx [ 0 ] = xx [ 30 ] * cos ( xx [ 36 ] ) ; xx [
70 ] = xx [ 29 ] * xx [ 0 ] ; xx [ 71 ] = xx [ 30 ] * sin ( xx [ 36 ] ) ; xx
[ 36 ] = xx [ 29 ] * xx [ 71 ] ; xx [ 29 ] = xx [ 70 ] * xx [ 0 ] ; xx [ 78 ]
= xx [ 36 ] * xx [ 71 ] ; xx [ 86 ] = ( xx [ 16 ] * xx [ 32 ] - xx [ 8 ] * xx
[ 33 ] ) * xx [ 2 ] ; xx [ 141 ] = xx [ 13 ] - xx [ 13 ] + xx [ 28 ] - ( xx [
2 ] * ( xx [ 70 ] * xx [ 71 ] - xx [ 36 ] * xx [ 0 ] ) - xx [ 38 ] ) ; xx [
142 ] = - ( xx [ 39 ] - ( xx [ 29 ] + xx [ 78 ] ) * xx [ 2 ] ) ; xx [ 143 ] =
xx [ 86 ] - xx [ 86 ] - xx [ 3 ] - ( ( xx [ 29 ] + xx [ 78 ] ) * xx [ 2 ] -
xx [ 14 ] ) ; xx [ 3 ] = xx [ 30 ] * xx [ 16 ] ; xx [ 8 ] = xx [ 30 ] * xx [
33 ] ; xx [ 13 ] = xx [ 3 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 8 ] * xx [ 8 ] ; xx
[ 8 ] = xx [ 3 ] * xx [ 3 ] ; xx [ 28 ] = - ( ( xx [ 13 ] + xx [ 13 ] ) * xx
[ 2 ] ) ; xx [ 29 ] = xx [ 31 ] - ( xx [ 14 ] + xx [ 8 ] ) * xx [ 2 ] ; xx [
30 ] = xx [ 2 ] * ( xx [ 14 ] - xx [ 8 ] ) ; xx [ 144 ] = xx [ 31 ] - ( xx [
14 ] + xx [ 14 ] ) * xx [ 2 ] ; xx [ 145 ] = xx [ 2 ] * ( xx [ 13 ] - xx [ 13
] ) ; xx [ 146 ] = - ( ( xx [ 13 ] + xx [ 13 ] ) * xx [ 2 ] ) ; xx [ 3 ] = xx
[ 0 ] * xx [ 71 ] ; xx [ 8 ] = xx [ 71 ] * xx [ 71 ] ; xx [ 13 ] = xx [ 0 ] *
xx [ 0 ] ; xx [ 147 ] = - ( ( xx [ 3 ] + xx [ 3 ] ) * xx [ 2 ] ) ; xx [ 148 ]
= xx [ 31 ] - ( xx [ 8 ] + xx [ 13 ] ) * xx [ 2 ] ; xx [ 149 ] = xx [ 2 ] * (
xx [ 8 ] - xx [ 13 ] ) ; xx [ 150 ] = xx [ 31 ] - ( xx [ 8 ] + xx [ 8 ] ) *
xx [ 2 ] ; xx [ 151 ] = xx [ 2 ] * ( xx [ 3 ] - xx [ 3 ] ) ; xx [ 152 ] = - (
( xx [ 3 ] + xx [ 3 ] ) * xx [ 2 ] ) ; xx [ 153 ] = fabs ( xx [ 17 ] + xx [ 6
] - ( xx [ 49 ] + xx [ 52 ] - xx [ 55 ] ) - xx [ 34 ] ) ; xx [ 154 ] = fabs (
xx [ 18 ] - ( xx [ 35 ] + xx [ 50 ] + xx [ 53 ] - xx [ 56 ] ) - xx [ 7 ] ) ;
xx [ 155 ] = fabs ( xx [ 19 ] + xx [ 26 ] - ( xx [ 51 ] + xx [ 54 ] - xx [ 57
] ) + xx [ 1 ] ) ; xx [ 156 ] = fabs ( xx [ 61 ] + xx [ 6 ] - ( xx [ 72 ] +
xx [ 64 ] - xx [ 9 ] ) - xx [ 34 ] ) ; xx [ 157 ] = fabs ( xx [ 62 ] - ( xx [
35 ] + xx [ 73 ] + xx [ 65 ] - xx [ 10 ] ) + xx [ 7 ] ) ; xx [ 158 ] = fabs (
xx [ 63 ] + xx [ 26 ] - ( xx [ 74 ] + xx [ 66 ] - xx [ 11 ] ) + xx [ 1 ] ) ;
xx [ 159 ] = fabs ( xx [ 67 ] + xx [ 79 ] - ( xx [ 96 ] + xx [ 88 ] - xx [ 80
] ) + 0.02227257547533662 ) ; xx [ 160 ] = fabs ( xx [ 68 ] + xx [ 37 ] - (
xx [ 97 ] + xx [ 89 ] - xx [ 81 ] ) + 0.1485769137339153 ) ; xx [ 161 ] =
fabs ( xx [ 69 ] + xx [ 12 ] - ( xx [ 98 ] + xx [ 90 ] - xx [ 82 ] ) + xx [ 1
] ) ; xx [ 162 ] = fabs ( xx [ 83 ] + xx [ 79 ] - ( xx [ 103 ] + xx [ 91 ] -
xx [ 75 ] ) + 0.1175350939717913 ) ; xx [ 163 ] = fabs ( xx [ 84 ] + xx [ 37
] - ( xx [ 104 ] + xx [ 92 ] - xx [ 76 ] ) + 0.09357707303630548 ) ; xx [ 164
] = fabs ( xx [ 85 ] + xx [ 12 ] - ( xx [ 105 ] + xx [ 93 ] - xx [ 77 ] ) +
xx [ 1 ] ) ; xx [ 165 ] = fabs ( xx [ 106 ] + xx [ 15 ] - ( xx [ 126 ] + xx [
112 ] - xx [ 109 ] ) + 0.1175350939717913 ) ; xx [ 166 ] = fabs ( xx [ 107 ]
+ xx [ 27 ] - ( xx [ 127 ] + xx [ 113 ] - xx [ 110 ] ) - 0.09357707303630539
) ; xx [ 167 ] = fabs ( xx [ 108 ] + xx [ 5 ] - ( xx [ 128 ] + xx [ 114 ] -
xx [ 111 ] ) + xx [ 1 ] ) ; xx [ 168 ] = fabs ( xx [ 115 ] + xx [ 15 ] - ( xx
[ 58 ] + xx [ 20 ] - xx [ 23 ] ) + 0.0222725754753367 ) ; xx [ 169 ] = fabs (
xx [ 116 ] + xx [ 27 ] - ( xx [ 59 ] + xx [ 21 ] - xx [ 24 ] ) -
0.1485769137339152 ) ; xx [ 170 ] = fabs ( xx [ 117 ] + xx [ 5 ] - ( xx [ 60
] + xx [ 22 ] - xx [ 25 ] ) + xx [ 1 ] ) ; xx [ 171 ] = fabs (
sm_core_canonicalAngle ( ( state [ 84 ] + sm_core_canonicalAngle ( atan2 (
pm_math_Vector3_dot_ra ( xx + 43 , xx + 40 ) , pm_math_Vector3_dot_ra ( xx +
43 , xx + 46 ) ) - state [ 84 ] ) - state [ 90 ] ) / xx [ 4 ] + atan2 (
pm_math_Vector3_dot_ra ( xx + 43 , xx + 99 ) , pm_math_Vector3_dot_ra ( xx +
43 , xx + 118 ) ) ) * xx [ 4 ] ) ; xx [ 172 ] = fabs ( sm_core_canonicalAngle
( ( state [ 86 ] + sm_core_canonicalAngle ( atan2 ( pm_math_Vector3_dot_ra (
xx + 121 , xx + 129 ) , pm_math_Vector3_dot_ra ( xx + 121 , xx + 132 ) ) -
state [ 86 ] ) - state [ 91 ] ) / xx [ 4 ] + atan2 ( pm_math_Vector3_dot_ra (
xx + 121 , xx + 135 ) , pm_math_Vector3_dot_ra ( xx + 121 , xx + 138 ) ) ) *
xx [ 4 ] ) ; xx [ 173 ] = fabs ( sm_core_canonicalAngle ( ( state [ 88 ] +
sm_core_canonicalAngle ( atan2 ( pm_math_Vector3_dot_ra ( xx + 141 , xx + 28
) , pm_math_Vector3_dot_ra ( xx + 141 , xx + 144 ) ) - state [ 88 ] ) - state
[ 92 ] ) / xx [ 4 ] + atan2 ( pm_math_Vector3_dot_ra ( xx + 141 , xx + 147 )
, pm_math_Vector3_dot_ra ( xx + 141 , xx + 150 ) ) ) * xx [ 4 ] ) ; ii [ 0 ]
= 153 ; { int ll ; for ( ll = 154 ; ll < 174 ; ++ ll ) if ( xx [ ll ] > xx [
ii [ 0 ] ] ) ii [ 0 ] = ll ; } ii [ 0 ] -= 153 ; xx [ 0 ] = xx [ 153 + ( ii [
0 ] ) ] ; xx [ 1 ] = xx [ 0 ] - 1.0e-9 ; if ( xx [ 1 ] < 0.0 ) ii [ 0 ] = - 1
; else if ( xx [ 1 ] > 0.0 ) ii [ 0 ] = + 1 ; else ii [ 0 ] = 0 ; ii [ 1 ] =
ii [ 0 ] ; if ( 0 > ii [ 1 ] ) ii [ 1 ] = 0 ; return ii [ 1 ] ; } int
triped_a151ee3d_1_isVelocityViolation ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* state , const int * modeVector ) { const double * rtdvd = rtdv -> mDoubles
. mValues ; const int * rtdvi = rtdv -> mInts . mValues ; int ii [ 3 ] ;
double xx [ 149 ] ; ( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) eqnEnableFlags ; ( void ) modeVector ; xx [ 0 ] = 0.5 ; xx [ 1 ] = xx [ 0 ]
* state [ 0 ] ; xx [ 2 ] = sin ( xx [ 1 ] ) ; xx [ 3 ] = xx [ 0 ] * state [ 1
] ; xx [ 4 ] = sin ( xx [ 3 ] ) ; xx [ 5 ] = xx [ 2 ] * xx [ 4 ] ; xx [ 6 ] =
xx [ 0 ] * state [ 2 ] ; xx [ 7 ] = sin ( xx [ 6 ] ) ; xx [ 8 ] = cos ( xx [
6 ] ) ; xx [ 6 ] = cos ( xx [ 1 ] ) ; xx [ 1 ] = cos ( xx [ 3 ] ) ; xx [ 3 ]
= xx [ 6 ] * xx [ 1 ] ; xx [ 9 ] = xx [ 5 ] * xx [ 7 ] - xx [ 8 ] * xx [ 3 ]
; xx [ 10 ] = xx [ 1 ] * xx [ 2 ] ; xx [ 1 ] = xx [ 6 ] * xx [ 4 ] ; xx [ 2 ]
= xx [ 8 ] * xx [ 10 ] + xx [ 1 ] * xx [ 7 ] ; xx [ 4 ] = xx [ 10 ] * xx [ 7
] - xx [ 8 ] * xx [ 1 ] ; xx [ 1 ] = xx [ 3 ] * xx [ 7 ] + xx [ 8 ] * xx [ 5
] ; xx [ 10 ] = xx [ 9 ] ; xx [ 11 ] = - xx [ 2 ] ; xx [ 12 ] = xx [ 4 ] ; xx
[ 13 ] = - xx [ 1 ] ; xx [ 3 ] = 1.0 ; xx [ 5 ] = 2.0 ; xx [ 6 ] = ( xx [ 3 ]
- ( xx [ 4 ] * xx [ 4 ] + xx [ 1 ] * xx [ 1 ] ) * xx [ 5 ] ) * state [ 3 ] +
xx [ 5 ] * xx [ 8 ] * xx [ 7 ] * state [ 4 ] ; xx [ 8 ] = xx [ 5 ] * ( xx [ 1
] * xx [ 9 ] - xx [ 2 ] * xx [ 4 ] ) * state [ 3 ] + ( xx [ 3 ] - xx [ 5 ] *
xx [ 7 ] * xx [ 7 ] ) * state [ 4 ] ; xx [ 7 ] = xx [ 5 ] * ( xx [ 4 ] * xx [
9 ] + xx [ 2 ] * xx [ 1 ] ) * state [ 3 ] + state [ 5 ] ; xx [ 14 ] = xx [ 6
] ; xx [ 15 ] = xx [ 8 ] ; xx [ 16 ] = xx [ 7 ] ; xx [ 17 ] = -
0.07930000000000005 ; xx [ 18 ] = 0.02989999999999998 ; xx [ 19 ] = - 0.105 ;
pm_math_Vector3_cross_ra ( xx + 14 , xx + 17 , xx + 20 ) ;
pm_math_Quaternion_xform_ra ( xx + 10 , xx + 20 , xx + 23 ) ; xx [ 1 ] =
8.499999999999917e-3 ; xx [ 2 ] = 0.09430000000000001 ; xx [ 20 ] = xx [ 8 ]
* xx [ 1 ] ; xx [ 21 ] = xx [ 7 ] * xx [ 2 ] - xx [ 6 ] * xx [ 1 ] ; xx [ 22
] = - ( xx [ 8 ] * xx [ 2 ] ) ; pm_math_Quaternion_xform_ra ( xx + 10 , xx +
20 , xx + 6 ) ; xx [ 26 ] = 0.9813587152233355 ; xx [ 27 ] = -
8.90329107482098e-3 ; xx [ 28 ] = 0.04727447558555155 ; xx [ 29 ] =
0.1860669971310137 ; xx [ 4 ] = xx [ 0 ] * state [ 10 ] ; xx [ 9 ] =
0.0960996545167382 ; xx [ 20 ] = sin ( xx [ 4 ] ) ; xx [ 21 ] =
1.177948454025794e-4 ; xx [ 22 ] = 0.9953717107322962 ; xx [ 30 ] = cos ( xx
[ 4 ] ) ; xx [ 31 ] = - ( xx [ 9 ] * xx [ 20 ] ) ; xx [ 32 ] = xx [ 21 ] * xx
[ 20 ] ; xx [ 33 ] = xx [ 22 ] * xx [ 20 ] ; pm_math_Quaternion_compose_ra (
xx + 26 , xx + 30 , xx + 34 ) ; xx [ 26 ] = 0.9988422572316213 ; xx [ 27 ] =
- 6.00792342022948e-5 ; xx [ 28 ] = - 0.04810551968680427 ; xx [ 29 ] =
2.312115552059532e-5 ; xx [ 30 ] = state [ 12 ] ; xx [ 31 ] = state [ 13 ] ;
xx [ 32 ] = state [ 14 ] ; xx [ 33 ] = state [ 15 ] ; xx [ 38 ] = -
0.9999999999996456 ; xx [ 39 ] = 1.335114243000915e-9 ; xx [ 40 ] =
1.564242624680818e-7 ; xx [ 41 ] = - 8.27384461422298e-7 ;
pm_math_Quaternion_composeInverse_ra ( xx + 30 , xx + 38 , xx + 42 ) ;
pm_math_Quaternion_compose_ra ( xx + 26 , xx + 42 , xx + 30 ) ;
pm_math_Quaternion_compose_ra ( xx + 34 , xx + 30 , xx + 42 ) ; xx [ 46 ] = -
( xx [ 9 ] * state [ 11 ] ) ; xx [ 47 ] = xx [ 21 ] * state [ 11 ] ; xx [ 48
] = xx [ 22 ] * state [ 11 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 30 ,
xx + 46 , xx + 49 ) ; xx [ 52 ] = state [ 16 ] ; xx [ 53 ] = state [ 17 ] ;
xx [ 54 ] = state [ 18 ] ; pm_math_Quaternion_xform_ra ( xx + 38 , xx + 52 ,
xx + 55 ) ; xx [ 52 ] = xx [ 49 ] + xx [ 55 ] ; xx [ 53 ] = xx [ 50 ] + xx [
56 ] ; xx [ 54 ] = xx [ 51 ] + xx [ 57 ] ; xx [ 49 ] = 0.05448810068449638 ;
xx [ 50 ] = 9.016809746371062e-8 ; xx [ 51 ] = - 1.197569081478675e-6 ;
pm_math_Vector3_cross_ra ( xx + 52 , xx + 49 , xx + 58 ) ;
pm_math_Quaternion_xform_ra ( xx + 42 , xx + 58 , xx + 52 ) ; xx [ 42 ] = -
2.298050364265303e-6 ; xx [ 43 ] = 0.02367056868070961 ; xx [ 44 ] = -
3.023104627104057e-6 ; pm_math_Quaternion_xform_ra ( xx + 34 , xx + 42 , xx +
58 ) ; xx [ 61 ] = 0.05551189931534764 ; xx [ 62 ] = 9.185648409514065e-8 ;
xx [ 63 ] = 1.23198241897863e-6 ; pm_math_Vector3_cross_ra ( xx + 55 , xx +
61 , xx + 64 ) ; pm_math_Quaternion_xform_ra ( xx + 30 , xx + 64 , xx + 55 )
; xx [ 4 ] = 0.06203617700142335 ; pm_math_Quaternion_xform_ra ( xx + 30 , xx
+ 61 , xx + 64 ) ; xx [ 20 ] = 6.252064263292171e-7 ; xx [ 30 ] =
4.366561113205437e-3 ; xx [ 31 ] = xx [ 4 ] + xx [ 64 ] ; xx [ 32 ] = xx [ 20
] + xx [ 65 ] ; xx [ 33 ] = xx [ 66 ] - xx [ 30 ] ; pm_math_Vector3_cross_ra
( xx + 46 , xx + 31 , xx + 64 ) ; xx [ 31 ] = xx [ 55 ] + xx [ 64 ] ; xx [ 32
] = xx [ 56 ] + xx [ 65 ] ; xx [ 33 ] = xx [ 57 ] + xx [ 66 ] ;
pm_math_Quaternion_xform_ra ( xx + 34 , xx + 31 , xx + 45 ) ; xx [ 31 ] = -
0.07930000000000012 ; xx [ 32 ] = - 0.02990000000000002 ; xx [ 33 ] = -
0.1049999999999999 ; pm_math_Vector3_cross_ra ( xx + 14 , xx + 31 , xx + 34 )
; pm_math_Quaternion_xform_ra ( xx + 10 , xx + 34 , xx + 14 ) ; xx [ 10 ] = -
0.9813501000307463 ; xx [ 11 ] = - 9.021345794401411e-3 ; xx [ 12 ] = -
0.04725208941316491 ; xx [ 13 ] = 0.1861124298261472 ; xx [ 34 ] = xx [ 0 ] *
state [ 19 ] ; xx [ 35 ] = sin ( xx [ 34 ] ) ; xx [ 64 ] = cos ( xx [ 34 ] )
; xx [ 65 ] = - ( xx [ 9 ] * xx [ 35 ] ) ; xx [ 66 ] = xx [ 21 ] * xx [ 35 ]
; xx [ 67 ] = xx [ 22 ] * xx [ 35 ] ; pm_math_Quaternion_compose_ra ( xx + 10
, xx + 64 , xx + 34 ) ; xx [ 10 ] = state [ 21 ] ; xx [ 11 ] = state [ 22 ] ;
xx [ 12 ] = state [ 23 ] ; xx [ 13 ] = state [ 24 ] ;
pm_math_Quaternion_composeInverse_ra ( xx + 10 , xx + 38 , xx + 64 ) ;
pm_math_Quaternion_compose_ra ( xx + 26 , xx + 64 , xx + 10 ) ;
pm_math_Quaternion_compose_ra ( xx + 34 , xx + 10 , xx + 64 ) ; xx [ 55 ] = -
( xx [ 9 ] * state [ 20 ] ) ; xx [ 56 ] = xx [ 21 ] * state [ 20 ] ; xx [ 57
] = xx [ 22 ] * state [ 20 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 10 ,
xx + 55 , xx + 68 ) ; xx [ 71 ] = state [ 25 ] ; xx [ 72 ] = state [ 26 ] ;
xx [ 73 ] = state [ 27 ] ; pm_math_Quaternion_xform_ra ( xx + 38 , xx + 71 ,
xx + 74 ) ; xx [ 71 ] = xx [ 68 ] + xx [ 74 ] ; xx [ 72 ] = xx [ 69 ] + xx [
75 ] ; xx [ 73 ] = xx [ 70 ] + xx [ 76 ] ; pm_math_Vector3_cross_ra ( xx + 71
, xx + 49 , xx + 68 ) ; pm_math_Quaternion_xform_ra ( xx + 64 , xx + 68 , xx
+ 71 ) ; pm_math_Quaternion_xform_ra ( xx + 34 , xx + 42 , xx + 64 ) ;
pm_math_Vector3_cross_ra ( xx + 74 , xx + 61 , xx + 67 ) ;
pm_math_Quaternion_xform_ra ( xx + 10 , xx + 67 , xx + 74 ) ;
pm_math_Quaternion_xform_ra ( xx + 10 , xx + 61 , xx + 67 ) ; xx [ 10 ] = xx
[ 4 ] + xx [ 67 ] ; xx [ 11 ] = xx [ 20 ] + xx [ 68 ] ; xx [ 12 ] = xx [ 69 ]
- xx [ 30 ] ; pm_math_Vector3_cross_ra ( xx + 55 , xx + 10 , xx + 67 ) ; xx [
10 ] = xx [ 74 ] + xx [ 67 ] ; xx [ 11 ] = xx [ 75 ] + xx [ 68 ] ; xx [ 12 ]
= xx [ 76 ] + xx [ 69 ] ; pm_math_Quaternion_xform_ra ( xx + 34 , xx + 10 ,
xx + 55 ) ; xx [ 10 ] = 0.5000000000000001 ; xx [ 11 ] = xx [ 0 ] * state [
28 ] ; xx [ 12 ] = sin ( xx [ 11 ] ) ; xx [ 13 ] = xx [ 0 ] * state [ 29 ] ;
xx [ 34 ] = sin ( xx [ 13 ] ) ; xx [ 35 ] = xx [ 12 ] * xx [ 34 ] ; xx [ 36 ]
= xx [ 0 ] * state [ 30 ] ; xx [ 37 ] = sin ( xx [ 36 ] ) ; xx [ 48 ] = cos (
xx [ 36 ] ) ; xx [ 36 ] = cos ( xx [ 11 ] ) ; xx [ 11 ] = cos ( xx [ 13 ] ) ;
xx [ 13 ] = xx [ 36 ] * xx [ 11 ] ; xx [ 67 ] = xx [ 35 ] * xx [ 37 ] - xx [
48 ] * xx [ 13 ] ; xx [ 68 ] = xx [ 13 ] * xx [ 37 ] + xx [ 48 ] * xx [ 35 ]
; xx [ 13 ] = 0.8660254037844386 ; xx [ 35 ] = xx [ 11 ] * xx [ 12 ] ; xx [
11 ] = xx [ 36 ] * xx [ 34 ] ; xx [ 12 ] = xx [ 48 ] * xx [ 35 ] + xx [ 11 ]
* xx [ 37 ] ; xx [ 34 ] = xx [ 35 ] * xx [ 37 ] - xx [ 48 ] * xx [ 11 ] ; xx
[ 74 ] = xx [ 10 ] * xx [ 67 ] - xx [ 68 ] * xx [ 13 ] ; xx [ 75 ] = - ( xx [
12 ] * xx [ 10 ] - xx [ 13 ] * xx [ 34 ] ) ; xx [ 76 ] = xx [ 10 ] * xx [ 34
] + xx [ 12 ] * xx [ 13 ] ; xx [ 77 ] = - ( xx [ 13 ] * xx [ 67 ] + xx [ 68 ]
* xx [ 10 ] ) ; xx [ 11 ] = ( xx [ 3 ] - ( xx [ 34 ] * xx [ 34 ] + xx [ 68 ]
* xx [ 68 ] ) * xx [ 5 ] ) * state [ 31 ] + xx [ 5 ] * xx [ 48 ] * xx [ 37 ]
* state [ 32 ] ; xx [ 35 ] = xx [ 5 ] * ( xx [ 68 ] * xx [ 67 ] - xx [ 12 ] *
xx [ 34 ] ) * state [ 31 ] + ( xx [ 3 ] - xx [ 5 ] * xx [ 37 ] * xx [ 37 ] )
* state [ 32 ] ; xx [ 36 ] = xx [ 5 ] * ( xx [ 34 ] * xx [ 67 ] + xx [ 12 ] *
xx [ 68 ] ) * state [ 31 ] + state [ 33 ] ; xx [ 78 ] = xx [ 11 ] ; xx [ 79 ]
= xx [ 35 ] ; xx [ 80 ] = xx [ 36 ] ; pm_math_Vector3_cross_ra ( xx + 78 , xx
+ 17 , xx + 81 ) ; pm_math_Quaternion_xform_ra ( xx + 74 , xx + 81 , xx + 84
) ; xx [ 87 ] = xx [ 67 ] ; xx [ 88 ] = - xx [ 12 ] ; xx [ 89 ] = xx [ 34 ] ;
xx [ 90 ] = - xx [ 68 ] ; xx [ 67 ] = xx [ 35 ] * xx [ 1 ] ; xx [ 68 ] = xx [
36 ] * xx [ 2 ] - xx [ 11 ] * xx [ 1 ] ; xx [ 69 ] = - ( xx [ 35 ] * xx [ 2 ]
) ; pm_math_Quaternion_xform_ra ( xx + 87 , xx + 67 , xx + 34 ) ; xx [ 11 ] =
xx [ 13 ] * xx [ 34 ] ; xx [ 12 ] = xx [ 13 ] * xx [ 35 ] ; xx [ 37 ] = xx [
34 ] - ( xx [ 13 ] * xx [ 11 ] - xx [ 10 ] * xx [ 12 ] ) * xx [ 5 ] ; xx [ 67
] = 0.651818103933012 ; xx [ 68 ] = 0.03648925127026437 ; xx [ 69 ] =
0.031347714040858 ; xx [ 70 ] = - 0.7568480790431602 ; xx [ 48 ] = xx [ 0 ] *
state [ 38 ] ; xx [ 81 ] = sin ( xx [ 48 ] ) ; xx [ 87 ] = cos ( xx [ 48 ] )
; xx [ 88 ] = - ( xx [ 9 ] * xx [ 81 ] ) ; xx [ 89 ] = xx [ 21 ] * xx [ 81 ]
; xx [ 90 ] = xx [ 22 ] * xx [ 81 ] ; pm_math_Quaternion_compose_ra ( xx + 67
, xx + 87 , xx + 91 ) ; xx [ 67 ] = state [ 40 ] ; xx [ 68 ] = state [ 41 ] ;
xx [ 69 ] = state [ 42 ] ; xx [ 70 ] = state [ 43 ] ;
pm_math_Quaternion_composeInverse_ra ( xx + 67 , xx + 38 , xx + 87 ) ;
pm_math_Quaternion_compose_ra ( xx + 26 , xx + 87 , xx + 67 ) ;
pm_math_Quaternion_compose_ra ( xx + 91 , xx + 67 , xx + 87 ) ; xx [ 81 ] = -
( xx [ 9 ] * state [ 39 ] ) ; xx [ 82 ] = xx [ 21 ] * state [ 39 ] ; xx [ 83
] = xx [ 22 ] * state [ 39 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 67 ,
xx + 81 , xx + 95 ) ; xx [ 98 ] = state [ 44 ] ; xx [ 99 ] = state [ 45 ] ;
xx [ 100 ] = state [ 46 ] ; pm_math_Quaternion_xform_ra ( xx + 38 , xx + 98 ,
xx + 101 ) ; xx [ 98 ] = xx [ 95 ] + xx [ 101 ] ; xx [ 99 ] = xx [ 96 ] + xx
[ 102 ] ; xx [ 100 ] = xx [ 97 ] + xx [ 103 ] ; pm_math_Vector3_cross_ra ( xx
+ 98 , xx + 49 , xx + 95 ) ; pm_math_Quaternion_xform_ra ( xx + 87 , xx + 95
, xx + 98 ) ; pm_math_Quaternion_xform_ra ( xx + 91 , xx + 42 , xx + 87 ) ;
pm_math_Vector3_cross_ra ( xx + 101 , xx + 61 , xx + 95 ) ;
pm_math_Quaternion_xform_ra ( xx + 67 , xx + 95 , xx + 101 ) ;
pm_math_Quaternion_xform_ra ( xx + 67 , xx + 61 , xx + 95 ) ; xx [ 67 ] = xx
[ 4 ] + xx [ 95 ] ; xx [ 68 ] = xx [ 20 ] + xx [ 96 ] ; xx [ 69 ] = xx [ 97 ]
- xx [ 30 ] ; pm_math_Vector3_cross_ra ( xx + 81 , xx + 67 , xx + 95 ) ; xx [
67 ] = xx [ 101 ] + xx [ 95 ] ; xx [ 68 ] = xx [ 102 ] + xx [ 96 ] ; xx [ 69
] = xx [ 103 ] + xx [ 97 ] ; pm_math_Quaternion_xform_ra ( xx + 91 , xx + 67
, xx + 81 ) ; xx [ 48 ] = xx [ 35 ] - xx [ 5 ] * ( xx [ 10 ] * xx [ 11 ] + xx
[ 13 ] * xx [ 12 ] ) ; pm_math_Vector3_cross_ra ( xx + 78 , xx + 31 , xx + 10
) ; pm_math_Quaternion_xform_ra ( xx + 74 , xx + 10 , xx + 67 ) ; xx [ 10 ] =
- 0.3294969578258811 ; xx [ 11 ] = - 0.04543218271089525 ; xx [ 12 ] = -
0.01581333007230693 ; xx [ 13 ] = 0.9429303315460998 ; xx [ 34 ] = xx [ 0 ] *
state [ 47 ] ; xx [ 35 ] = sin ( xx [ 34 ] ) ; xx [ 74 ] = cos ( xx [ 34 ] )
; xx [ 75 ] = - ( xx [ 9 ] * xx [ 35 ] ) ; xx [ 76 ] = xx [ 21 ] * xx [ 35 ]
; xx [ 77 ] = xx [ 22 ] * xx [ 35 ] ; pm_math_Quaternion_compose_ra ( xx + 10
, xx + 74 , xx + 90 ) ; xx [ 10 ] = state [ 49 ] ; xx [ 11 ] = state [ 50 ] ;
xx [ 12 ] = state [ 51 ] ; xx [ 13 ] = state [ 52 ] ;
pm_math_Quaternion_composeInverse_ra ( xx + 10 , xx + 38 , xx + 74 ) ;
pm_math_Quaternion_compose_ra ( xx + 26 , xx + 74 , xx + 10 ) ;
pm_math_Quaternion_compose_ra ( xx + 90 , xx + 10 , xx + 74 ) ; xx [ 78 ] = -
( xx [ 9 ] * state [ 48 ] ) ; xx [ 79 ] = xx [ 21 ] * state [ 48 ] ; xx [ 80
] = xx [ 22 ] * state [ 48 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 10 ,
xx + 78 , xx + 94 ) ; xx [ 101 ] = state [ 53 ] ; xx [ 102 ] = state [ 54 ] ;
xx [ 103 ] = state [ 55 ] ; pm_math_Quaternion_xform_ra ( xx + 38 , xx + 101
, xx + 104 ) ; xx [ 101 ] = xx [ 94 ] + xx [ 104 ] ; xx [ 102 ] = xx [ 95 ] +
xx [ 105 ] ; xx [ 103 ] = xx [ 96 ] + xx [ 106 ] ; pm_math_Vector3_cross_ra (
xx + 101 , xx + 49 , xx + 94 ) ; pm_math_Quaternion_xform_ra ( xx + 74 , xx +
94 , xx + 101 ) ; pm_math_Quaternion_xform_ra ( xx + 90 , xx + 42 , xx + 74 )
; pm_math_Vector3_cross_ra ( xx + 104 , xx + 61 , xx + 94 ) ;
pm_math_Quaternion_xform_ra ( xx + 10 , xx + 94 , xx + 104 ) ;
pm_math_Quaternion_xform_ra ( xx + 10 , xx + 61 , xx + 94 ) ; xx [ 10 ] = xx
[ 4 ] + xx [ 94 ] ; xx [ 11 ] = xx [ 20 ] + xx [ 95 ] ; xx [ 12 ] = xx [ 96 ]
- xx [ 30 ] ; pm_math_Vector3_cross_ra ( xx + 78 , xx + 10 , xx + 94 ) ; xx [
10 ] = xx [ 104 ] + xx [ 94 ] ; xx [ 11 ] = xx [ 105 ] + xx [ 95 ] ; xx [ 12
] = xx [ 106 ] + xx [ 96 ] ; pm_math_Quaternion_xform_ra ( xx + 90 , xx + 10
, xx + 77 ) ; xx [ 10 ] = 0.4999999999999998 ; xx [ 11 ] = xx [ 0 ] * state [
56 ] ; xx [ 12 ] = sin ( xx [ 11 ] ) ; xx [ 13 ] = xx [ 0 ] * state [ 57 ] ;
xx [ 34 ] = sin ( xx [ 13 ] ) ; xx [ 35 ] = xx [ 12 ] * xx [ 34 ] ; xx [ 70 ]
= xx [ 0 ] * state [ 58 ] ; xx [ 80 ] = sin ( xx [ 70 ] ) ; xx [ 90 ] = cos (
xx [ 70 ] ) ; xx [ 70 ] = cos ( xx [ 11 ] ) ; xx [ 11 ] = cos ( xx [ 13 ] ) ;
xx [ 13 ] = xx [ 70 ] * xx [ 11 ] ; xx [ 91 ] = xx [ 35 ] * xx [ 80 ] - xx [
90 ] * xx [ 13 ] ; xx [ 92 ] = xx [ 13 ] * xx [ 80 ] + xx [ 90 ] * xx [ 35 ]
; xx [ 13 ] = 0.8660254037844387 ; xx [ 35 ] = xx [ 11 ] * xx [ 12 ] ; xx [
11 ] = xx [ 70 ] * xx [ 34 ] ; xx [ 12 ] = xx [ 90 ] * xx [ 35 ] + xx [ 11 ]
* xx [ 80 ] ; xx [ 34 ] = xx [ 35 ] * xx [ 80 ] - xx [ 90 ] * xx [ 11 ] ; xx
[ 93 ] = - ( xx [ 10 ] * xx [ 91 ] + xx [ 92 ] * xx [ 13 ] ) ; xx [ 94 ] = xx
[ 12 ] * xx [ 10 ] + xx [ 13 ] * xx [ 34 ] ; xx [ 95 ] = xx [ 12 ] * xx [ 13
] - xx [ 10 ] * xx [ 34 ] ; xx [ 96 ] = xx [ 92 ] * xx [ 10 ] - xx [ 13 ] *
xx [ 91 ] ; xx [ 11 ] = ( xx [ 3 ] - ( xx [ 34 ] * xx [ 34 ] + xx [ 92 ] * xx
[ 92 ] ) * xx [ 5 ] ) * state [ 59 ] + xx [ 5 ] * xx [ 90 ] * xx [ 80 ] *
state [ 60 ] ; xx [ 35 ] = xx [ 5 ] * ( xx [ 92 ] * xx [ 91 ] - xx [ 12 ] *
xx [ 34 ] ) * state [ 59 ] + ( xx [ 3 ] - xx [ 5 ] * xx [ 80 ] * xx [ 80 ] )
* state [ 60 ] ; xx [ 70 ] = xx [ 5 ] * ( xx [ 34 ] * xx [ 91 ] + xx [ 12 ] *
xx [ 92 ] ) * state [ 59 ] + state [ 61 ] ; xx [ 104 ] = xx [ 11 ] ; xx [ 105
] = xx [ 35 ] ; xx [ 106 ] = xx [ 70 ] ; pm_math_Vector3_cross_ra ( xx + 104
, xx + 17 , xx + 107 ) ; pm_math_Quaternion_xform_ra ( xx + 93 , xx + 107 ,
xx + 17 ) ; xx [ 107 ] = xx [ 91 ] ; xx [ 108 ] = - xx [ 12 ] ; xx [ 109 ] =
xx [ 34 ] ; xx [ 110 ] = - xx [ 92 ] ; xx [ 90 ] = xx [ 35 ] * xx [ 1 ] ; xx
[ 91 ] = xx [ 70 ] * xx [ 2 ] - xx [ 11 ] * xx [ 1 ] ; xx [ 92 ] = - ( xx [
35 ] * xx [ 2 ] ) ; pm_math_Quaternion_xform_ra ( xx + 107 , xx + 90 , xx +
111 ) ; xx [ 1 ] = xx [ 13 ] * xx [ 112 ] ; xx [ 2 ] = xx [ 13 ] * xx [ 111 ]
; xx [ 11 ] = xx [ 111 ] - ( xx [ 10 ] * xx [ 1 ] + xx [ 13 ] * xx [ 2 ] ) *
xx [ 5 ] ; xx [ 107 ] = - 0.3295406112903234 ; xx [ 108 ] =
0.04539254234508536 ; xx [ 109 ] = - 0.01592676154469353 ; xx [ 110 ] = -
0.942915076174174 ; xx [ 12 ] = xx [ 0 ] * state [ 66 ] ; xx [ 34 ] = sin (
xx [ 12 ] ) ; xx [ 114 ] = cos ( xx [ 12 ] ) ; xx [ 115 ] = - ( xx [ 9 ] * xx
[ 34 ] ) ; xx [ 116 ] = xx [ 21 ] * xx [ 34 ] ; xx [ 117 ] = xx [ 22 ] * xx [
34 ] ; pm_math_Quaternion_compose_ra ( xx + 107 , xx + 114 , xx + 118 ) ; xx
[ 107 ] = state [ 68 ] ; xx [ 108 ] = state [ 69 ] ; xx [ 109 ] = state [ 70
] ; xx [ 110 ] = state [ 71 ] ; pm_math_Quaternion_composeInverse_ra ( xx +
107 , xx + 38 , xx + 114 ) ; pm_math_Quaternion_compose_ra ( xx + 26 , xx +
114 , xx + 107 ) ; pm_math_Quaternion_compose_ra ( xx + 118 , xx + 107 , xx +
114 ) ; xx [ 90 ] = - ( xx [ 9 ] * state [ 67 ] ) ; xx [ 91 ] = xx [ 21 ] *
state [ 67 ] ; xx [ 92 ] = xx [ 22 ] * state [ 67 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 107 , xx + 90 , xx + 122 ) ; xx [
125 ] = state [ 72 ] ; xx [ 126 ] = state [ 73 ] ; xx [ 127 ] = state [ 74 ]
; pm_math_Quaternion_xform_ra ( xx + 38 , xx + 125 , xx + 128 ) ; xx [ 125 ]
= xx [ 122 ] + xx [ 128 ] ; xx [ 126 ] = xx [ 123 ] + xx [ 129 ] ; xx [ 127 ]
= xx [ 124 ] + xx [ 130 ] ; pm_math_Vector3_cross_ra ( xx + 125 , xx + 49 ,
xx + 122 ) ; pm_math_Quaternion_xform_ra ( xx + 114 , xx + 122 , xx + 125 ) ;
pm_math_Quaternion_xform_ra ( xx + 118 , xx + 42 , xx + 114 ) ;
pm_math_Vector3_cross_ra ( xx + 128 , xx + 61 , xx + 122 ) ;
pm_math_Quaternion_xform_ra ( xx + 107 , xx + 122 , xx + 128 ) ;
pm_math_Quaternion_xform_ra ( xx + 107 , xx + 61 , xx + 122 ) ; xx [ 107 ] =
xx [ 4 ] + xx [ 122 ] ; xx [ 108 ] = xx [ 20 ] + xx [ 123 ] ; xx [ 109 ] = xx
[ 124 ] - xx [ 30 ] ; pm_math_Vector3_cross_ra ( xx + 90 , xx + 107 , xx +
122 ) ; xx [ 90 ] = xx [ 128 ] + xx [ 122 ] ; xx [ 91 ] = xx [ 129 ] + xx [
123 ] ; xx [ 92 ] = xx [ 130 ] + xx [ 124 ] ; pm_math_Quaternion_xform_ra (
xx + 118 , xx + 90 , xx + 107 ) ; xx [ 12 ] = xx [ 112 ] + xx [ 5 ] * ( xx [
10 ] * xx [ 2 ] - xx [ 13 ] * xx [ 1 ] ) ; pm_math_Vector3_cross_ra ( xx +
104 , xx + 31 , xx + 90 ) ; pm_math_Quaternion_xform_ra ( xx + 93 , xx + 90 ,
xx + 31 ) ; xx [ 90 ] = 0.651853142204865 ; xx [ 91 ] = - 0.03641083691649384
; xx [ 92 ] = 0.03143875934085798 ; xx [ 93 ] = 0.7568179017199528 ; xx [ 1 ]
= xx [ 0 ] * state [ 75 ] ; xx [ 2 ] = sin ( xx [ 1 ] ) ; xx [ 94 ] = cos (
xx [ 1 ] ) ; xx [ 95 ] = - ( xx [ 9 ] * xx [ 2 ] ) ; xx [ 96 ] = xx [ 21 ] *
xx [ 2 ] ; xx [ 97 ] = xx [ 22 ] * xx [ 2 ] ; pm_math_Quaternion_compose_ra (
xx + 90 , xx + 94 , xx + 117 ) ; xx [ 90 ] = state [ 77 ] ; xx [ 91 ] = state
[ 78 ] ; xx [ 92 ] = state [ 79 ] ; xx [ 93 ] = state [ 80 ] ;
pm_math_Quaternion_composeInverse_ra ( xx + 90 , xx + 38 , xx + 94 ) ;
pm_math_Quaternion_compose_ra ( xx + 26 , xx + 94 , xx + 90 ) ;
pm_math_Quaternion_compose_ra ( xx + 117 , xx + 90 , xx + 26 ) ; xx [ 94 ] =
- ( xx [ 9 ] * state [ 76 ] ) ; xx [ 95 ] = xx [ 21 ] * state [ 76 ] ; xx [
96 ] = xx [ 22 ] * state [ 76 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
90 , xx + 94 , xx + 104 ) ; xx [ 110 ] = state [ 81 ] ; xx [ 111 ] = state [
82 ] ; xx [ 112 ] = state [ 83 ] ; pm_math_Quaternion_xform_ra ( xx + 38 , xx
+ 110 , xx + 121 ) ; xx [ 38 ] = xx [ 104 ] + xx [ 121 ] ; xx [ 39 ] = xx [
105 ] + xx [ 122 ] ; xx [ 40 ] = xx [ 106 ] + xx [ 123 ] ;
pm_math_Vector3_cross_ra ( xx + 38 , xx + 49 , xx + 104 ) ;
pm_math_Quaternion_xform_ra ( xx + 26 , xx + 104 , xx + 38 ) ;
pm_math_Quaternion_xform_ra ( xx + 117 , xx + 42 , xx + 26 ) ;
pm_math_Vector3_cross_ra ( xx + 121 , xx + 61 , xx + 41 ) ;
pm_math_Quaternion_xform_ra ( xx + 90 , xx + 41 , xx + 49 ) ;
pm_math_Quaternion_xform_ra ( xx + 90 , xx + 61 , xx + 41 ) ; xx [ 61 ] = xx
[ 4 ] + xx [ 41 ] ; xx [ 62 ] = xx [ 20 ] + xx [ 42 ] ; xx [ 63 ] = xx [ 43 ]
- xx [ 30 ] ; pm_math_Vector3_cross_ra ( xx + 94 , xx + 61 , xx + 20 ) ; xx [
41 ] = xx [ 49 ] + xx [ 20 ] ; xx [ 42 ] = xx [ 50 ] + xx [ 21 ] ; xx [ 43 ]
= xx [ 51 ] + xx [ 22 ] ; pm_math_Quaternion_xform_ra ( xx + 117 , xx + 41 ,
xx + 20 ) ; xx [ 1 ] = 7.427230677621783e-3 ; xx [ 2 ] = xx [ 0 ] * state [ 6
] ; xx [ 4 ] = cos ( xx [ 2 ] ) ; xx [ 9 ] = 0.4527250000000002 ; xx [ 10 ] =
sin ( xx [ 2 ] ) ; xx [ 2 ] = xx [ 9 ] * xx [ 10 ] ; xx [ 13 ] = 1.405725 ;
xx [ 29 ] = xx [ 13 ] * xx [ 10 ] ; xx [ 30 ] = xx [ 5 ] * ( xx [ 4 ] * xx [
2 ] + xx [ 29 ] * xx [ 10 ] ) ; xx [ 34 ] = 1.5457 ; xx [ 35 ] = 0.01 ; xx [
41 ] = 0.7071067811865476 ; xx [ 42 ] = xx [ 0 ] * state [ 8 ] ; xx [ 43 ] =
xx [ 41 ] * cos ( xx [ 42 ] ) ; xx [ 44 ] = xx [ 35 ] * xx [ 43 ] ; xx [ 49 ]
= xx [ 41 ] * sin ( xx [ 42 ] ) ; xx [ 42 ] = xx [ 35 ] * xx [ 49 ] ; xx [ 50
] = 9.300000000000017e-3 ; xx [ 51 ] = xx [ 30 ] - xx [ 30 ] + xx [ 34 ] - (
xx [ 5 ] * ( xx [ 44 ] * xx [ 49 ] - xx [ 42 ] * xx [ 43 ] ) - xx [ 50 ] ) ;
xx [ 30 ] = 9.999999999999957e-3 ; xx [ 61 ] = xx [ 44 ] * xx [ 43 ] ; xx [
44 ] = xx [ 42 ] * xx [ 49 ] ; xx [ 42 ] = ( xx [ 4 ] * xx [ 29 ] - xx [ 2 ]
* xx [ 10 ] ) * xx [ 5 ] ; xx [ 2 ] = 0.04550000000000132 ; xx [ 29 ] =
0.0555 ; xx [ 62 ] = xx [ 42 ] - xx [ 42 ] - xx [ 2 ] - ( ( xx [ 61 ] + xx [
44 ] ) * xx [ 5 ] - xx [ 29 ] ) ; xx [ 90 ] = xx [ 51 ] ; xx [ 91 ] = - ( xx
[ 30 ] - ( xx [ 61 ] + xx [ 44 ] ) * xx [ 5 ] ) ; xx [ 92 ] = xx [ 62 ] ; xx
[ 42 ] = xx [ 49 ] * xx [ 49 ] ; xx [ 44 ] = xx [ 3 ] - ( xx [ 42 ] + xx [ 42
] ) * xx [ 5 ] ; xx [ 61 ] = xx [ 43 ] * xx [ 49 ] ; xx [ 63 ] = ( xx [ 61 ]
+ xx [ 61 ] ) * xx [ 5 ] ; xx [ 93 ] = xx [ 44 ] ; xx [ 94 ] = xx [ 5 ] * (
xx [ 61 ] - xx [ 61 ] ) ; xx [ 95 ] = - xx [ 63 ] ; xx [ 70 ] =
pm_math_Vector3_dot_ra ( xx + 90 , xx + 93 ) ; xx [ 80 ] = xx [ 13 ] * state
[ 7 ] ; xx [ 93 ] = xx [ 80 ] * xx [ 10 ] ; xx [ 94 ] = xx [ 9 ] * state [ 7
] ; xx [ 95 ] = xx [ 94 ] * xx [ 10 ] ; xx [ 96 ] = 1.405725 ; xx [ 97 ] =
0.4527250000000003 ; xx [ 104 ] = xx [ 97 ] * xx [ 10 ] ; xx [ 105 ] = xx [
96 ] * xx [ 10 ] ; xx [ 106 ] = xx [ 5 ] * ( xx [ 93 ] * xx [ 10 ] + xx [ 4 ]
* xx [ 95 ] ) - xx [ 80 ] + ( xx [ 96 ] - ( xx [ 4 ] * xx [ 104 ] + xx [ 105
] * xx [ 10 ] ) * xx [ 5 ] ) * state [ 7 ] ; xx [ 80 ] = xx [ 43 ] * xx [ 43
] ; xx [ 110 ] = xx [ 5 ] * ( xx [ 42 ] - xx [ 80 ] ) ; xx [ 111 ] = ( xx [
97 ] + xx [ 5 ] * ( xx [ 4 ] * xx [ 105 ] - xx [ 104 ] * xx [ 10 ] ) ) *
state [ 7 ] - ( xx [ 94 ] + ( xx [ 4 ] * xx [ 93 ] - xx [ 95 ] * xx [ 10 ] )
* xx [ 5 ] ) ; xx [ 93 ] = ( xx [ 61 ] + xx [ 61 ] ) * xx [ 5 ] ; xx [ 61 ] =
xx [ 49 ] * state [ 9 ] ; xx [ 94 ] = xx [ 49 ] * xx [ 61 ] ; xx [ 95 ] = xx
[ 43 ] * xx [ 61 ] ; xx [ 117 ] = ( xx [ 94 ] + xx [ 94 ] ) * xx [ 5 ] -
state [ 9 ] ; xx [ 118 ] = xx [ 5 ] * ( xx [ 95 ] - xx [ 95 ] ) ; xx [ 119 ]
= ( xx [ 95 ] + xx [ 95 ] ) * xx [ 5 ] ; xx [ 120 ] = - xx [ 93 ] ; xx [ 121
] = xx [ 3 ] - ( xx [ 42 ] + xx [ 80 ] ) * xx [ 5 ] ; xx [ 122 ] = xx [ 110 ]
; xx [ 42 ] = pm_math_Vector3_dot_ra ( xx + 90 , xx + 120 ) ; xx [ 61 ] = xx
[ 43 ] * state [ 9 ] ; xx [ 80 ] = xx [ 43 ] * xx [ 61 ] ; xx [ 120 ] = - ( (
xx [ 95 ] + xx [ 49 ] * xx [ 61 ] ) * xx [ 5 ] ) ; xx [ 121 ] = state [ 9 ] -
( xx [ 94 ] + xx [ 80 ] ) * xx [ 5 ] ; xx [ 122 ] = xx [ 5 ] * ( xx [ 94 ] -
xx [ 80 ] ) ; xx [ 43 ] = xx [ 70 ] * xx [ 70 ] + xx [ 42 ] * xx [ 42 ] ; xx
[ 43 ] = xx [ 43 ] == 0.0 ? 0.0 : ( xx [ 70 ] * ( xx [ 106 ] * xx [ 110 ] -
xx [ 111 ] * xx [ 93 ] + pm_math_Vector3_dot_ra ( xx + 90 , xx + 117 ) ) - xx
[ 42 ] * ( xx [ 111 ] * xx [ 44 ] - xx [ 106 ] * xx [ 63 ] +
pm_math_Vector3_dot_ra ( xx + 90 , xx + 120 ) ) ) / xx [ 43 ] ; xx [ 42 ] =
xx [ 41 ] * xx [ 10 ] ; xx [ 44 ] = xx [ 42 ] * xx [ 42 ] ; xx [ 49 ] = xx [
3 ] - ( xx [ 44 ] + xx [ 44 ] ) * xx [ 5 ] ; xx [ 61 ] = xx [ 41 ] * xx [ 4 ]
; xx [ 63 ] = xx [ 61 ] * xx [ 42 ] ; xx [ 42 ] = ( xx [ 63 ] + xx [ 63 ] ) *
xx [ 5 ] ; xx [ 93 ] = xx [ 49 ] ; xx [ 94 ] = xx [ 5 ] * ( xx [ 63 ] - xx [
63 ] ) ; xx [ 95 ] = - xx [ 42 ] ; xx [ 70 ] = pm_math_Vector3_dot_ra ( xx +
90 , xx + 93 ) ; xx [ 80 ] = xx [ 61 ] * xx [ 61 ] ; xx [ 61 ] = xx [ 5 ] * (
xx [ 44 ] - xx [ 80 ] ) ; xx [ 93 ] = ( xx [ 63 ] + xx [ 63 ] ) * xx [ 5 ] ;
xx [ 63 ] = xx [ 10 ] * state [ 7 ] ; xx [ 94 ] = xx [ 5 ] * xx [ 63 ] * xx [
10 ] - state [ 7 ] ; xx [ 10 ] = xx [ 5 ] * xx [ 4 ] * xx [ 63 ] ; xx [ 117 ]
= - xx [ 93 ] ; xx [ 118 ] = xx [ 3 ] - ( xx [ 44 ] + xx [ 80 ] ) * xx [ 5 ]
; xx [ 119 ] = xx [ 61 ] ; xx [ 4 ] = pm_math_Vector3_dot_ra ( xx + 90 , xx +
117 ) ; xx [ 44 ] = xx [ 70 ] * xx [ 70 ] + xx [ 4 ] * xx [ 4 ] ; xx [ 44 ] =
xx [ 44 ] == 0.0 ? 0.0 : ( xx [ 70 ] * ( xx [ 106 ] * xx [ 61 ] - xx [ 111 ]
* xx [ 93 ] + xx [ 51 ] * xx [ 94 ] + xx [ 10 ] * xx [ 62 ] ) - xx [ 4 ] * (
xx [ 111 ] * xx [ 49 ] - xx [ 106 ] * xx [ 42 ] + xx [ 62 ] * xx [ 94 ] - xx
[ 10 ] * xx [ 51 ] ) ) / xx [ 44 ] ; xx [ 4 ] = xx [ 0 ] * state [ 34 ] ; xx
[ 10 ] = cos ( xx [ 4 ] ) ; xx [ 42 ] = 0.452725 ; xx [ 49 ] = sin ( xx [ 4 ]
) ; xx [ 4 ] = xx [ 42 ] * xx [ 49 ] ; xx [ 51 ] = xx [ 13 ] * xx [ 49 ] ; xx
[ 61 ] = xx [ 5 ] * ( xx [ 10 ] * xx [ 4 ] + xx [ 51 ] * xx [ 49 ] ) ; xx [
62 ] = xx [ 0 ] * state [ 36 ] ; xx [ 63 ] = xx [ 41 ] * cos ( xx [ 62 ] ) ;
xx [ 70 ] = xx [ 35 ] * xx [ 63 ] ; xx [ 80 ] = xx [ 41 ] * sin ( xx [ 62 ] )
; xx [ 62 ] = xx [ 35 ] * xx [ 80 ] ; xx [ 90 ] = xx [ 61 ] - xx [ 61 ] + xx
[ 34 ] - ( xx [ 5 ] * ( xx [ 70 ] * xx [ 80 ] - xx [ 62 ] * xx [ 63 ] ) - xx
[ 50 ] ) ; xx [ 61 ] = xx [ 70 ] * xx [ 63 ] ; xx [ 70 ] = xx [ 62 ] * xx [
80 ] ; xx [ 62 ] = ( xx [ 10 ] * xx [ 51 ] - xx [ 4 ] * xx [ 49 ] ) * xx [ 5
] ; xx [ 4 ] = xx [ 62 ] - xx [ 62 ] - xx [ 2 ] - ( ( xx [ 61 ] + xx [ 70 ] )
* xx [ 5 ] - xx [ 29 ] ) ; xx [ 91 ] = xx [ 90 ] ; xx [ 92 ] = - ( xx [ 30 ]
- ( xx [ 61 ] + xx [ 70 ] ) * xx [ 5 ] ) ; xx [ 93 ] = xx [ 4 ] ; xx [ 51 ] =
xx [ 80 ] * xx [ 80 ] ; xx [ 61 ] = xx [ 3 ] - ( xx [ 51 ] + xx [ 51 ] ) * xx
[ 5 ] ; xx [ 62 ] = xx [ 63 ] * xx [ 80 ] ; xx [ 70 ] = ( xx [ 62 ] + xx [ 62
] ) * xx [ 5 ] ; xx [ 104 ] = xx [ 61 ] ; xx [ 105 ] = xx [ 5 ] * ( xx [ 62 ]
- xx [ 62 ] ) ; xx [ 106 ] = - xx [ 70 ] ; xx [ 94 ] = pm_math_Vector3_dot_ra
( xx + 91 , xx + 104 ) ; xx [ 95 ] = xx [ 13 ] * state [ 35 ] ; xx [ 97 ] =
xx [ 95 ] * xx [ 49 ] ; xx [ 104 ] = xx [ 42 ] * state [ 35 ] ; xx [ 105 ] =
xx [ 104 ] * xx [ 49 ] ; xx [ 106 ] = xx [ 9 ] * xx [ 49 ] ; xx [ 110 ] = xx
[ 96 ] * xx [ 49 ] ; xx [ 111 ] = xx [ 5 ] * ( xx [ 97 ] * xx [ 49 ] + xx [
10 ] * xx [ 105 ] ) - xx [ 95 ] + ( xx [ 96 ] - ( xx [ 10 ] * xx [ 106 ] + xx
[ 110 ] * xx [ 49 ] ) * xx [ 5 ] ) * state [ 35 ] ; xx [ 95 ] = xx [ 63 ] *
xx [ 63 ] ; xx [ 112 ] = xx [ 5 ] * ( xx [ 51 ] - xx [ 95 ] ) ; xx [ 117 ] =
( xx [ 9 ] + xx [ 5 ] * ( xx [ 10 ] * xx [ 110 ] - xx [ 106 ] * xx [ 49 ] ) )
* state [ 35 ] - ( xx [ 104 ] + ( xx [ 10 ] * xx [ 97 ] - xx [ 105 ] * xx [
49 ] ) * xx [ 5 ] ) ; xx [ 97 ] = ( xx [ 62 ] + xx [ 62 ] ) * xx [ 5 ] ; xx [
62 ] = xx [ 80 ] * state [ 37 ] ; xx [ 104 ] = xx [ 80 ] * xx [ 62 ] ; xx [
105 ] = xx [ 63 ] * xx [ 62 ] ; xx [ 118 ] = ( xx [ 104 ] + xx [ 104 ] ) * xx
[ 5 ] - state [ 37 ] ; xx [ 119 ] = xx [ 5 ] * ( xx [ 105 ] - xx [ 105 ] ) ;
xx [ 120 ] = ( xx [ 105 ] + xx [ 105 ] ) * xx [ 5 ] ; xx [ 121 ] = - xx [ 97
] ; xx [ 122 ] = xx [ 3 ] - ( xx [ 51 ] + xx [ 95 ] ) * xx [ 5 ] ; xx [ 123 ]
= xx [ 112 ] ; xx [ 51 ] = pm_math_Vector3_dot_ra ( xx + 91 , xx + 121 ) ; xx
[ 62 ] = xx [ 63 ] * state [ 37 ] ; xx [ 95 ] = xx [ 63 ] * xx [ 62 ] ; xx [
121 ] = - ( ( xx [ 105 ] + xx [ 80 ] * xx [ 62 ] ) * xx [ 5 ] ) ; xx [ 122 ]
= state [ 37 ] - ( xx [ 104 ] + xx [ 95 ] ) * xx [ 5 ] ; xx [ 123 ] = xx [ 5
] * ( xx [ 104 ] - xx [ 95 ] ) ; xx [ 62 ] = xx [ 94 ] * xx [ 94 ] + xx [ 51
] * xx [ 51 ] ; xx [ 62 ] = xx [ 62 ] == 0.0 ? 0.0 : ( xx [ 94 ] * ( xx [ 111
] * xx [ 112 ] - xx [ 117 ] * xx [ 97 ] + pm_math_Vector3_dot_ra ( xx + 91 ,
xx + 118 ) ) - xx [ 51 ] * ( xx [ 117 ] * xx [ 61 ] - xx [ 111 ] * xx [ 70 ]
+ pm_math_Vector3_dot_ra ( xx + 91 , xx + 121 ) ) ) / xx [ 62 ] ; xx [ 51 ] =
xx [ 41 ] * xx [ 49 ] ; xx [ 61 ] = xx [ 51 ] * xx [ 51 ] ; xx [ 63 ] = xx [
3 ] - ( xx [ 61 ] + xx [ 61 ] ) * xx [ 5 ] ; xx [ 70 ] = xx [ 41 ] * xx [ 10
] ; xx [ 80 ] = xx [ 70 ] * xx [ 51 ] ; xx [ 51 ] = ( xx [ 80 ] + xx [ 80 ] )
* xx [ 5 ] ; xx [ 104 ] = xx [ 63 ] ; xx [ 105 ] = xx [ 5 ] * ( xx [ 80 ] -
xx [ 80 ] ) ; xx [ 106 ] = - xx [ 51 ] ; xx [ 94 ] = pm_math_Vector3_dot_ra (
xx + 91 , xx + 104 ) ; xx [ 95 ] = xx [ 70 ] * xx [ 70 ] ; xx [ 70 ] = xx [ 5
] * ( xx [ 61 ] - xx [ 95 ] ) ; xx [ 97 ] = ( xx [ 80 ] + xx [ 80 ] ) * xx [
5 ] ; xx [ 80 ] = xx [ 49 ] * state [ 35 ] ; xx [ 104 ] = xx [ 5 ] * xx [ 80
] * xx [ 49 ] - state [ 35 ] ; xx [ 49 ] = xx [ 5 ] * xx [ 10 ] * xx [ 80 ] ;
xx [ 118 ] = - xx [ 97 ] ; xx [ 119 ] = xx [ 3 ] - ( xx [ 61 ] + xx [ 95 ] )
* xx [ 5 ] ; xx [ 120 ] = xx [ 70 ] ; xx [ 10 ] = pm_math_Vector3_dot_ra ( xx
+ 91 , xx + 118 ) ; xx [ 61 ] = xx [ 94 ] * xx [ 94 ] + xx [ 10 ] * xx [ 10 ]
; xx [ 61 ] = xx [ 61 ] == 0.0 ? 0.0 : ( xx [ 94 ] * ( xx [ 111 ] * xx [ 70 ]
- xx [ 117 ] * xx [ 97 ] + xx [ 90 ] * xx [ 104 ] + xx [ 49 ] * xx [ 4 ] ) -
xx [ 10 ] * ( xx [ 117 ] * xx [ 63 ] - xx [ 111 ] * xx [ 51 ] + xx [ 4 ] * xx
[ 104 ] - xx [ 49 ] * xx [ 90 ] ) ) / xx [ 61 ] ; xx [ 4 ] = xx [ 0 ] * state
[ 62 ] ; xx [ 10 ] = cos ( xx [ 4 ] ) ; xx [ 49 ] = sin ( xx [ 4 ] ) ; xx [ 4
] = xx [ 42 ] * xx [ 49 ] ; xx [ 51 ] = xx [ 13 ] * xx [ 49 ] ; xx [ 63 ] =
xx [ 5 ] * ( xx [ 10 ] * xx [ 4 ] + xx [ 51 ] * xx [ 49 ] ) ; xx [ 70 ] = xx
[ 0 ] * state [ 64 ] ; xx [ 0 ] = xx [ 41 ] * cos ( xx [ 70 ] ) ; xx [ 80 ] =
xx [ 35 ] * xx [ 0 ] ; xx [ 90 ] = xx [ 41 ] * sin ( xx [ 70 ] ) ; xx [ 70 ]
= xx [ 35 ] * xx [ 90 ] ; xx [ 35 ] = xx [ 63 ] - xx [ 63 ] + xx [ 34 ] - (
xx [ 5 ] * ( xx [ 80 ] * xx [ 90 ] - xx [ 70 ] * xx [ 0 ] ) - xx [ 50 ] ) ;
xx [ 34 ] = xx [ 80 ] * xx [ 0 ] ; xx [ 50 ] = xx [ 70 ] * xx [ 90 ] ; xx [
63 ] = ( xx [ 10 ] * xx [ 51 ] - xx [ 4 ] * xx [ 49 ] ) * xx [ 5 ] ; xx [ 4 ]
= xx [ 63 ] - xx [ 63 ] - xx [ 2 ] - ( ( xx [ 34 ] + xx [ 50 ] ) * xx [ 5 ] -
xx [ 29 ] ) ; xx [ 91 ] = xx [ 35 ] ; xx [ 92 ] = - ( xx [ 30 ] - ( xx [ 34 ]
+ xx [ 50 ] ) * xx [ 5 ] ) ; xx [ 93 ] = xx [ 4 ] ; xx [ 2 ] = xx [ 90 ] * xx
[ 90 ] ; xx [ 29 ] = xx [ 3 ] - ( xx [ 2 ] + xx [ 2 ] ) * xx [ 5 ] ; xx [ 30
] = xx [ 0 ] * xx [ 90 ] ; xx [ 34 ] = ( xx [ 30 ] + xx [ 30 ] ) * xx [ 5 ] ;
xx [ 104 ] = xx [ 29 ] ; xx [ 105 ] = xx [ 5 ] * ( xx [ 30 ] - xx [ 30 ] ) ;
xx [ 106 ] = - xx [ 34 ] ; xx [ 50 ] = pm_math_Vector3_dot_ra ( xx + 91 , xx
+ 104 ) ; xx [ 51 ] = xx [ 13 ] * state [ 63 ] ; xx [ 13 ] = xx [ 51 ] * xx [
49 ] ; xx [ 63 ] = xx [ 42 ] * state [ 63 ] ; xx [ 42 ] = xx [ 63 ] * xx [ 49
] ; xx [ 70 ] = xx [ 9 ] * xx [ 49 ] ; xx [ 80 ] = xx [ 96 ] * xx [ 49 ] ; xx
[ 94 ] = xx [ 5 ] * ( xx [ 13 ] * xx [ 49 ] + xx [ 10 ] * xx [ 42 ] ) - xx [
51 ] + ( xx [ 96 ] - ( xx [ 10 ] * xx [ 70 ] + xx [ 80 ] * xx [ 49 ] ) * xx [
5 ] ) * state [ 63 ] ; xx [ 51 ] = xx [ 0 ] * xx [ 0 ] ; xx [ 95 ] = xx [ 5 ]
* ( xx [ 2 ] - xx [ 51 ] ) ; xx [ 96 ] = ( xx [ 9 ] + xx [ 5 ] * ( xx [ 10 ]
* xx [ 80 ] - xx [ 70 ] * xx [ 49 ] ) ) * state [ 63 ] - ( xx [ 63 ] + ( xx [
10 ] * xx [ 13 ] - xx [ 42 ] * xx [ 49 ] ) * xx [ 5 ] ) ; xx [ 9 ] = ( xx [
30 ] + xx [ 30 ] ) * xx [ 5 ] ; xx [ 13 ] = xx [ 90 ] * state [ 65 ] ; xx [
30 ] = xx [ 90 ] * xx [ 13 ] ; xx [ 42 ] = xx [ 0 ] * xx [ 13 ] ; xx [ 104 ]
= ( xx [ 30 ] + xx [ 30 ] ) * xx [ 5 ] - state [ 65 ] ; xx [ 105 ] = xx [ 5 ]
* ( xx [ 42 ] - xx [ 42 ] ) ; xx [ 106 ] = ( xx [ 42 ] + xx [ 42 ] ) * xx [ 5
] ; xx [ 110 ] = - xx [ 9 ] ; xx [ 111 ] = xx [ 3 ] - ( xx [ 2 ] + xx [ 51 ]
) * xx [ 5 ] ; xx [ 112 ] = xx [ 95 ] ; xx [ 2 ] = pm_math_Vector3_dot_ra (
xx + 91 , xx + 110 ) ; xx [ 13 ] = xx [ 0 ] * state [ 65 ] ; xx [ 51 ] = xx [
0 ] * xx [ 13 ] ; xx [ 110 ] = - ( ( xx [ 42 ] + xx [ 90 ] * xx [ 13 ] ) * xx
[ 5 ] ) ; xx [ 111 ] = state [ 65 ] - ( xx [ 30 ] + xx [ 51 ] ) * xx [ 5 ] ;
xx [ 112 ] = xx [ 5 ] * ( xx [ 30 ] - xx [ 51 ] ) ; xx [ 0 ] = xx [ 50 ] * xx
[ 50 ] + xx [ 2 ] * xx [ 2 ] ; xx [ 0 ] = xx [ 0 ] == 0.0 ? 0.0 : ( xx [ 50 ]
* ( xx [ 94 ] * xx [ 95 ] - xx [ 96 ] * xx [ 9 ] + pm_math_Vector3_dot_ra (
xx + 91 , xx + 104 ) ) - xx [ 2 ] * ( xx [ 96 ] * xx [ 29 ] - xx [ 94 ] * xx
[ 34 ] + pm_math_Vector3_dot_ra ( xx + 91 , xx + 110 ) ) ) / xx [ 0 ] ; xx [
2 ] = xx [ 41 ] * xx [ 49 ] ; xx [ 9 ] = xx [ 2 ] * xx [ 2 ] ; xx [ 13 ] = xx
[ 3 ] - ( xx [ 9 ] + xx [ 9 ] ) * xx [ 5 ] ; xx [ 29 ] = xx [ 41 ] * xx [ 10
] ; xx [ 30 ] = xx [ 29 ] * xx [ 2 ] ; xx [ 2 ] = ( xx [ 30 ] + xx [ 30 ] ) *
xx [ 5 ] ; xx [ 104 ] = xx [ 13 ] ; xx [ 105 ] = xx [ 5 ] * ( xx [ 30 ] - xx
[ 30 ] ) ; xx [ 106 ] = - xx [ 2 ] ; xx [ 34 ] = pm_math_Vector3_dot_ra ( xx
+ 91 , xx + 104 ) ; xx [ 41 ] = xx [ 29 ] * xx [ 29 ] ; xx [ 29 ] = xx [ 5 ]
* ( xx [ 9 ] - xx [ 41 ] ) ; xx [ 42 ] = ( xx [ 30 ] + xx [ 30 ] ) * xx [ 5 ]
; xx [ 30 ] = xx [ 49 ] * state [ 63 ] ; xx [ 50 ] = xx [ 5 ] * xx [ 30 ] *
xx [ 49 ] - state [ 63 ] ; xx [ 49 ] = xx [ 5 ] * xx [ 10 ] * xx [ 30 ] ; xx
[ 104 ] = - xx [ 42 ] ; xx [ 105 ] = xx [ 3 ] - ( xx [ 9 ] + xx [ 41 ] ) * xx
[ 5 ] ; xx [ 106 ] = xx [ 29 ] ; xx [ 3 ] = pm_math_Vector3_dot_ra ( xx + 91
, xx + 104 ) ; xx [ 5 ] = xx [ 34 ] * xx [ 34 ] + xx [ 3 ] * xx [ 3 ] ; xx [
5 ] = xx [ 5 ] == 0.0 ? 0.0 : ( xx [ 34 ] * ( xx [ 94 ] * xx [ 29 ] - xx [ 96
] * xx [ 42 ] + xx [ 35 ] * xx [ 50 ] + xx [ 49 ] * xx [ 4 ] ) - xx [ 3 ] * (
xx [ 96 ] * xx [ 13 ] - xx [ 94 ] * xx [ 2 ] + xx [ 4 ] * xx [ 50 ] - xx [ 49
] * xx [ 35 ] ) ) / xx [ 5 ] ; xx [ 128 ] = fabs ( xx [ 23 ] + xx [ 6 ] - (
xx [ 52 ] + xx [ 58 ] * state [ 11 ] + xx [ 45 ] ) ) ; xx [ 129 ] = fabs ( xx
[ 24 ] + xx [ 7 ] - ( xx [ 53 ] + xx [ 59 ] * state [ 11 ] + xx [ 46 ] ) ) ;
xx [ 130 ] = fabs ( xx [ 25 ] + xx [ 8 ] - ( xx [ 54 ] + xx [ 60 ] * state [
11 ] + xx [ 47 ] ) ) ; xx [ 131 ] = fabs ( xx [ 14 ] + xx [ 6 ] - ( xx [ 71 ]
+ xx [ 64 ] * state [ 20 ] + xx [ 55 ] ) ) ; xx [ 132 ] = fabs ( xx [ 15 ] +
xx [ 7 ] - ( xx [ 72 ] + xx [ 65 ] * state [ 20 ] + xx [ 56 ] ) ) ; xx [ 133
] = fabs ( xx [ 16 ] + xx [ 8 ] - ( xx [ 73 ] + xx [ 66 ] * state [ 20 ] + xx
[ 57 ] ) ) ; xx [ 134 ] = fabs ( xx [ 84 ] + xx [ 37 ] - ( xx [ 98 ] + xx [
87 ] * state [ 39 ] + xx [ 81 ] ) ) ; xx [ 135 ] = fabs ( xx [ 85 ] + xx [ 48
] - ( xx [ 99 ] + xx [ 88 ] * state [ 39 ] + xx [ 82 ] ) ) ; xx [ 136 ] =
fabs ( xx [ 86 ] + xx [ 36 ] - ( xx [ 100 ] + xx [ 89 ] * state [ 39 ] + xx [
83 ] ) ) ; xx [ 137 ] = fabs ( xx [ 67 ] + xx [ 37 ] - ( xx [ 101 ] + xx [ 74
] * state [ 48 ] + xx [ 77 ] ) ) ; xx [ 138 ] = fabs ( xx [ 68 ] + xx [ 48 ]
- ( xx [ 102 ] + xx [ 75 ] * state [ 48 ] + xx [ 78 ] ) ) ; xx [ 139 ] = fabs
( xx [ 69 ] + xx [ 36 ] - ( xx [ 103 ] + xx [ 76 ] * state [ 48 ] + xx [ 79 ]
) ) ; xx [ 140 ] = fabs ( xx [ 17 ] + xx [ 11 ] - ( xx [ 125 ] + xx [ 114 ] *
state [ 67 ] + xx [ 107 ] ) ) ; xx [ 141 ] = fabs ( xx [ 18 ] + xx [ 12 ] - (
xx [ 126 ] + xx [ 115 ] * state [ 67 ] + xx [ 108 ] ) ) ; xx [ 142 ] = fabs (
xx [ 19 ] + xx [ 113 ] - ( xx [ 127 ] + xx [ 116 ] * state [ 67 ] + xx [ 109
] ) ) ; xx [ 143 ] = fabs ( xx [ 31 ] + xx [ 11 ] - ( xx [ 38 ] + xx [ 26 ] *
state [ 76 ] + xx [ 20 ] ) ) ; xx [ 144 ] = fabs ( xx [ 32 ] + xx [ 12 ] - (
xx [ 39 ] + xx [ 27 ] * state [ 76 ] + xx [ 21 ] ) ) ; xx [ 145 ] = fabs ( xx
[ 33 ] + xx [ 113 ] - ( xx [ 40 ] + xx [ 28 ] * state [ 76 ] + xx [ 22 ] ) )
; xx [ 146 ] = fabs ( xx [ 1 ] * xx [ 43 ] + xx [ 44 ] ) ; xx [ 147 ] = fabs
( xx [ 1 ] * xx [ 62 ] + xx [ 61 ] ) ; xx [ 148 ] = fabs ( xx [ 1 ] * xx [ 0
] + xx [ 5 ] ) ; ii [ 0 ] = 128 ; { int ll ; for ( ll = 129 ; ll < 149 ; ++
ll ) if ( xx [ ll ] > xx [ ii [ 0 ] ] ) ii [ 0 ] = ll ; } ii [ 0 ] -= 128 ;
xx [ 0 ] = xx [ 128 + ( ii [ 0 ] ) ] ; xx [ 1 ] = xx [ 0 ] - 1.0e-9 ; if ( xx
[ 1 ] < 0.0 ) ii [ 0 ] = - 1 ; else if ( xx [ 1 ] > 0.0 ) ii [ 0 ] = + 1 ;
else ii [ 0 ] = 0 ; ii [ 1 ] = ii [ 0 ] ; if ( 0 > ii [ 1 ] ) ii [ 1 ] = 0 ;
return ii [ 1 ] ; } PmfMessageId triped_a151ee3d_1_projectStateSim ( const
void * mech , const RuntimeDerivedValuesBundle * rtdv , const int *
eqnEnableFlags , const int * modeVector , const double * input , double *
state , void * neDiagMgr0 ) { const double * rtdvd = rtdv -> mDoubles .
mValues ; const int * rtdvi = rtdv -> mInts . mValues ; NeuDiagnosticManager
* neDiagMgr = ( NeuDiagnosticManager * ) neDiagMgr0 ; int ii [ 21 ] ; double
xx [ 1912 ] ; ( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void )
eqnEnableFlags ; ( void ) modeVector ; ( void ) input ; ( void ) neDiagMgr ;
xx [ 0 ] = 0.5 ; xx [ 1 ] = xx [ 0 ] * state [ 0 ] ; xx [ 2 ] = sin ( xx [ 1
] ) ; xx [ 3 ] = xx [ 0 ] * state [ 1 ] ; xx [ 4 ] = sin ( xx [ 3 ] ) ; xx [
5 ] = xx [ 2 ] * xx [ 4 ] ; xx [ 6 ] = xx [ 0 ] * state [ 2 ] ; xx [ 7 ] =
sin ( xx [ 6 ] ) ; xx [ 8 ] = cos ( xx [ 6 ] ) ; xx [ 6 ] = cos ( xx [ 1 ] )
; xx [ 1 ] = cos ( xx [ 3 ] ) ; xx [ 3 ] = xx [ 6 ] * xx [ 1 ] ; xx [ 9 ] =
xx [ 5 ] * xx [ 7 ] - xx [ 8 ] * xx [ 3 ] ; xx [ 10 ] = xx [ 1 ] * xx [ 2 ] ;
xx [ 1 ] = xx [ 6 ] * xx [ 4 ] ; xx [ 2 ] = xx [ 8 ] * xx [ 10 ] + xx [ 1 ] *
xx [ 7 ] ; xx [ 4 ] = - xx [ 2 ] ; xx [ 6 ] = xx [ 10 ] * xx [ 7 ] - xx [ 8 ]
* xx [ 1 ] ; xx [ 1 ] = xx [ 3 ] * xx [ 7 ] + xx [ 8 ] * xx [ 5 ] ; xx [ 3 ]
= - xx [ 1 ] ; xx [ 10 ] = xx [ 9 ] ; xx [ 11 ] = xx [ 4 ] ; xx [ 12 ] = xx [
6 ] ; xx [ 13 ] = xx [ 3 ] ; xx [ 5 ] = 1.0 ; xx [ 14 ] = 2.0 ; xx [ 15 ] =
xx [ 5 ] - ( xx [ 6 ] * xx [ 6 ] + xx [ 1 ] * xx [ 1 ] ) * xx [ 14 ] ; xx [
16 ] = xx [ 14 ] * ( xx [ 1 ] * xx [ 9 ] - xx [ 2 ] * xx [ 6 ] ) ; xx [ 17 ]
= xx [ 6 ] * xx [ 9 ] + xx [ 2 ] * xx [ 1 ] ; xx [ 18 ] = xx [ 15 ] ; xx [ 19
] = xx [ 16 ] ; xx [ 20 ] = xx [ 17 ] * xx [ 14 ] ; xx [ 21 ] =
0.07930000000000005 ; xx [ 22 ] = 0.02989999999999998 ; xx [ 23 ] = 0.105 ;
xx [ 24 ] = - xx [ 21 ] ; xx [ 25 ] = xx [ 22 ] ; xx [ 26 ] = - xx [ 23 ] ;
pm_math_Vector3_cross_ra ( xx + 18 , xx + 24 , xx + 27 ) ;
pm_math_Quaternion_xform_ra ( xx + 10 , xx + 27 , xx + 30 ) ; xx [ 27 ] =
8.499999999999917e-3 ; xx [ 28 ] = 0.1886 ; xx [ 29 ] = 0.09430000000000001 ;
xx [ 33 ] = - ( xx [ 27 ] * xx [ 16 ] ) ; xx [ 34 ] = xx [ 27 ] * xx [ 15 ] -
xx [ 17 ] * xx [ 28 ] ; xx [ 35 ] = xx [ 29 ] * xx [ 16 ] ;
pm_math_Quaternion_xform_ra ( xx + 10 , xx + 33 , xx + 15 ) ; xx [ 33 ] = xx
[ 5 ] - xx [ 14 ] * xx [ 7 ] * xx [ 7 ] ; xx [ 34 ] = xx [ 14 ] * xx [ 8 ] *
xx [ 7 ] ; xx [ 35 ] = - ( xx [ 23 ] * xx [ 33 ] ) ; xx [ 36 ] = xx [ 23 ] *
xx [ 34 ] ; xx [ 37 ] = xx [ 22 ] * xx [ 34 ] + xx [ 21 ] * xx [ 33 ] ;
pm_math_Quaternion_xform_ra ( xx + 10 , xx + 35 , xx + 38 ) ; xx [ 35 ] = - (
xx [ 27 ] * xx [ 33 ] ) ; xx [ 36 ] = xx [ 27 ] * xx [ 34 ] ; xx [ 37 ] = xx
[ 29 ] * xx [ 33 ] ; pm_math_Quaternion_xform_ra ( xx + 10 , xx + 35 , xx +
41 ) ; xx [ 35 ] = xx [ 4 ] ; xx [ 36 ] = xx [ 6 ] ; xx [ 37 ] = xx [ 3 ] ;
xx [ 3 ] = xx [ 1 ] * xx [ 21 ] ; xx [ 4 ] = xx [ 1 ] * xx [ 22 ] ; xx [ 7 ]
= xx [ 2 ] * xx [ 21 ] + xx [ 22 ] * xx [ 6 ] ; xx [ 44 ] = - xx [ 3 ] ; xx [
45 ] = xx [ 4 ] ; xx [ 46 ] = xx [ 7 ] ; pm_math_Vector3_cross_ra ( xx + 35 ,
xx + 44 , xx + 47 ) ; xx [ 8 ] = xx [ 2 ] * xx [ 29 ] ; xx [ 44 ] = xx [ 1 ]
* xx [ 29 ] ; xx [ 45 ] = xx [ 14 ] * ( xx [ 8 ] * xx [ 6 ] - xx [ 44 ] * xx
[ 9 ] ) ; xx [ 46 ] = 0.0 ; xx [ 50 ] = 0.9813587152233355 ; xx [ 51 ] = -
8.90329107482098e-3 ; xx [ 52 ] = 0.04727447558555155 ; xx [ 53 ] =
0.1860669971310137 ; xx [ 54 ] = xx [ 0 ] * state [ 10 ] ; xx [ 55 ] =
0.0960996545167382 ; xx [ 56 ] = sin ( xx [ 54 ] ) ; xx [ 57 ] =
1.177948454025794e-4 ; xx [ 58 ] = 0.9953717107322962 ; xx [ 59 ] = cos ( xx
[ 54 ] ) ; xx [ 60 ] = - ( xx [ 55 ] * xx [ 56 ] ) ; xx [ 61 ] = xx [ 57 ] *
xx [ 56 ] ; xx [ 62 ] = xx [ 58 ] * xx [ 56 ] ; pm_math_Quaternion_compose_ra
( xx + 50 , xx + 59 , xx + 63 ) ; xx [ 59 ] = 0.9988422572316213 ; xx [ 60 ]
= - 6.00792342022948e-5 ; xx [ 61 ] = - 0.04810551968680427 ; xx [ 62 ] =
2.312115552059532e-5 ; xx [ 54 ] = xx [ 5 ] / sqrt ( state [ 12 ] * state [
12 ] + state [ 13 ] * state [ 13 ] + state [ 14 ] * state [ 14 ] + state [ 15
] * state [ 15 ] ) ; xx [ 56 ] = xx [ 54 ] * state [ 12 ] ; xx [ 67 ] = xx [
54 ] * state [ 13 ] ; xx [ 68 ] = xx [ 54 ] * state [ 14 ] ; xx [ 69 ] = xx [
54 ] * state [ 15 ] ; xx [ 70 ] = xx [ 56 ] ; xx [ 71 ] = xx [ 67 ] ; xx [ 72
] = xx [ 68 ] ; xx [ 73 ] = xx [ 69 ] ; xx [ 74 ] = - 0.9999999999996456 ; xx
[ 75 ] = 1.335114243000915e-9 ; xx [ 76 ] = 1.564242624680818e-7 ; xx [ 77 ]
= - 8.27384461422298e-7 ; pm_math_Quaternion_composeInverse_ra ( xx + 70 , xx
+ 74 , xx + 78 ) ; pm_math_Quaternion_compose_ra ( xx + 59 , xx + 78 , xx +
82 ) ; pm_math_Quaternion_compose_ra ( xx + 63 , xx + 82 , xx + 78 ) ; xx [
86 ] = - 2.009909055578571e-12 ; xx [ 87 ] = 1.214615603282308e-6 ; xx [ 88 ]
= 2.881763323693879e-12 ; pm_math_Quaternion_xform_ra ( xx + 78 , xx + 86 ,
xx + 89 ) ; xx [ 92 ] = 2.009909055578572e-12 ; xx [ 93 ] = -
1.21461560328232e-6 ; xx [ 94 ] = - 2.881763259213495e-12 ;
pm_math_Quaternion_xform_ra ( xx + 82 , xx + 92 , xx + 95 ) ;
pm_math_Quaternion_xform_ra ( xx + 63 , xx + 95 , xx + 98 ) ; xx [ 95 ] = -
1.197569081236243e-6 ; xx [ 96 ] = - 1.474914827216787e-10 ; xx [ 97 ] = -
0.05448810068457099 ; pm_math_Quaternion_xform_ra ( xx + 78 , xx + 95 , xx +
101 ) ; xx [ 104 ] = 1.231982419222245e-6 ; xx [ 105 ] = -
1.462051776775044e-10 ; xx [ 106 ] = - 0.05551189931542364 ;
pm_math_Quaternion_xform_ra ( xx + 82 , xx + 104 , xx + 107 ) ;
pm_math_Quaternion_xform_ra ( xx + 63 , xx + 107 , xx + 110 ) ; xx [ 107 ] =
- 9.016810066118371e-8 ; xx [ 108 ] = 0.05448810068412172 ; xx [ 109 ] = -
1.455097835249509e-10 ; pm_math_Quaternion_xform_ra ( xx + 78 , xx + 107 , xx
+ 113 ) ; xx [ 116 ] = - 9.18564808057805e-8 ; xx [ 117 ] =
0.05551189931573034 ; xx [ 118 ] = - 1.482438229960606e-10 ;
pm_math_Quaternion_xform_ra ( xx + 82 , xx + 116 , xx + 119 ) ;
pm_math_Quaternion_xform_ra ( xx + 63 , xx + 119 , xx + 122 ) ; xx [ 54 ] = (
xx [ 1 ] * xx [ 44 ] + xx [ 2 ] * xx [ 8 ] ) * xx [ 14 ] ; xx [ 119 ] =
0.01499999999999996 ; xx [ 120 ] = ( xx [ 8 ] * xx [ 9 ] + xx [ 44 ] * xx [ 6
] ) * xx [ 14 ] ; xx [ 8 ] = 0.07930000000000012 ; xx [ 121 ] =
0.02990000000000002 ; xx [ 125 ] = 0.1049999999999999 ; xx [ 126 ] = - xx [ 8
] ; xx [ 127 ] = - xx [ 121 ] ; xx [ 128 ] = - xx [ 125 ] ;
pm_math_Vector3_cross_ra ( xx + 18 , xx + 126 , xx + 129 ) ;
pm_math_Quaternion_xform_ra ( xx + 10 , xx + 129 , xx + 18 ) ; xx [ 129 ] = -
( xx [ 125 ] * xx [ 33 ] ) ; xx [ 130 ] = xx [ 125 ] * xx [ 34 ] ; xx [ 131 ]
= xx [ 8 ] * xx [ 33 ] - xx [ 121 ] * xx [ 34 ] ; pm_math_Quaternion_xform_ra
( xx + 10 , xx + 129 , xx + 132 ) ; xx [ 33 ] = xx [ 1 ] * xx [ 8 ] ; xx [ 34
] = xx [ 1 ] * xx [ 121 ] ; xx [ 1 ] = xx [ 121 ] * xx [ 6 ] - xx [ 2 ] * xx
[ 8 ] ; xx [ 129 ] = - xx [ 33 ] ; xx [ 130 ] = - xx [ 34 ] ; xx [ 131 ] = -
xx [ 1 ] ; pm_math_Vector3_cross_ra ( xx + 35 , xx + 129 , xx + 135 ) ; xx [
138 ] = - 0.9813501000307463 ; xx [ 139 ] = - 9.021345794401411e-3 ; xx [ 140
] = - 0.04725208941316491 ; xx [ 141 ] = 0.1861124298261472 ; xx [ 129 ] = xx
[ 0 ] * state [ 19 ] ; xx [ 130 ] = sin ( xx [ 129 ] ) ; xx [ 142 ] = cos (
xx [ 129 ] ) ; xx [ 143 ] = - ( xx [ 55 ] * xx [ 130 ] ) ; xx [ 144 ] = xx [
57 ] * xx [ 130 ] ; xx [ 145 ] = xx [ 58 ] * xx [ 130 ] ;
pm_math_Quaternion_compose_ra ( xx + 138 , xx + 142 , xx + 146 ) ; xx [ 129 ]
= xx [ 5 ] / sqrt ( state [ 21 ] * state [ 21 ] + state [ 22 ] * state [ 22 ]
+ state [ 23 ] * state [ 23 ] + state [ 24 ] * state [ 24 ] ) ; xx [ 130 ] =
xx [ 129 ] * state [ 21 ] ; xx [ 131 ] = xx [ 129 ] * state [ 22 ] ; xx [ 142
] = xx [ 129 ] * state [ 23 ] ; xx [ 143 ] = xx [ 129 ] * state [ 24 ] ; xx [
150 ] = xx [ 130 ] ; xx [ 151 ] = xx [ 131 ] ; xx [ 152 ] = xx [ 142 ] ; xx [
153 ] = xx [ 143 ] ; pm_math_Quaternion_composeInverse_ra ( xx + 150 , xx +
74 , xx + 154 ) ; pm_math_Quaternion_compose_ra ( xx + 59 , xx + 154 , xx +
158 ) ; pm_math_Quaternion_compose_ra ( xx + 146 , xx + 158 , xx + 154 ) ;
pm_math_Quaternion_xform_ra ( xx + 154 , xx + 86 , xx + 162 ) ;
pm_math_Quaternion_xform_ra ( xx + 158 , xx + 92 , xx + 165 ) ;
pm_math_Quaternion_xform_ra ( xx + 146 , xx + 165 , xx + 168 ) ;
pm_math_Quaternion_xform_ra ( xx + 154 , xx + 95 , xx + 165 ) ;
pm_math_Quaternion_xform_ra ( xx + 158 , xx + 104 , xx + 171 ) ;
pm_math_Quaternion_xform_ra ( xx + 146 , xx + 171 , xx + 174 ) ;
pm_math_Quaternion_xform_ra ( xx + 154 , xx + 107 , xx + 171 ) ;
pm_math_Quaternion_xform_ra ( xx + 158 , xx + 116 , xx + 177 ) ;
pm_math_Quaternion_xform_ra ( xx + 146 , xx + 177 , xx + 180 ) ; xx [ 129 ] =
0.01499999999999989 ; xx [ 144 ] = 0.5000000000000001 ; xx [ 145 ] = xx [ 0 ]
* state [ 28 ] ; xx [ 177 ] = sin ( xx [ 145 ] ) ; xx [ 178 ] = xx [ 0 ] *
state [ 29 ] ; xx [ 179 ] = sin ( xx [ 178 ] ) ; xx [ 183 ] = xx [ 177 ] * xx
[ 179 ] ; xx [ 184 ] = xx [ 0 ] * state [ 30 ] ; xx [ 185 ] = sin ( xx [ 184
] ) ; xx [ 186 ] = cos ( xx [ 184 ] ) ; xx [ 184 ] = cos ( xx [ 145 ] ) ; xx
[ 145 ] = cos ( xx [ 178 ] ) ; xx [ 178 ] = xx [ 184 ] * xx [ 145 ] ; xx [
187 ] = xx [ 183 ] * xx [ 185 ] - xx [ 186 ] * xx [ 178 ] ; xx [ 188 ] = xx [
178 ] * xx [ 185 ] + xx [ 186 ] * xx [ 183 ] ; xx [ 178 ] =
0.8660254037844386 ; xx [ 183 ] = xx [ 144 ] * xx [ 187 ] - xx [ 188 ] * xx [
178 ] ; xx [ 189 ] = xx [ 145 ] * xx [ 177 ] ; xx [ 145 ] = xx [ 184 ] * xx [
179 ] ; xx [ 177 ] = xx [ 186 ] * xx [ 189 ] + xx [ 145 ] * xx [ 185 ] ; xx [
179 ] = xx [ 189 ] * xx [ 185 ] - xx [ 186 ] * xx [ 145 ] ; xx [ 145 ] = xx [
177 ] * xx [ 144 ] - xx [ 178 ] * xx [ 179 ] ; xx [ 184 ] = - xx [ 145 ] ; xx
[ 189 ] = xx [ 144 ] * xx [ 179 ] + xx [ 177 ] * xx [ 178 ] ; xx [ 190 ] = xx
[ 178 ] * xx [ 187 ] + xx [ 188 ] * xx [ 144 ] ; xx [ 191 ] = - xx [ 190 ] ;
xx [ 192 ] = xx [ 183 ] ; xx [ 193 ] = xx [ 184 ] ; xx [ 194 ] = xx [ 189 ] ;
xx [ 195 ] = xx [ 191 ] ; xx [ 196 ] = xx [ 5 ] - ( xx [ 179 ] * xx [ 179 ] +
xx [ 188 ] * xx [ 188 ] ) * xx [ 14 ] ; xx [ 197 ] = xx [ 14 ] * ( xx [ 188 ]
* xx [ 187 ] - xx [ 177 ] * xx [ 179 ] ) ; xx [ 198 ] = xx [ 179 ] * xx [ 187
] + xx [ 177 ] * xx [ 188 ] ; xx [ 199 ] = xx [ 196 ] ; xx [ 200 ] = xx [ 197
] ; xx [ 201 ] = xx [ 198 ] * xx [ 14 ] ; pm_math_Vector3_cross_ra ( xx + 199
, xx + 24 , xx + 202 ) ; pm_math_Quaternion_xform_ra ( xx + 192 , xx + 202 ,
xx + 205 ) ; xx [ 202 ] = - xx [ 177 ] ; xx [ 203 ] = - xx [ 188 ] ; xx [ 208
] = xx [ 187 ] ; xx [ 209 ] = xx [ 202 ] ; xx [ 210 ] = xx [ 179 ] ; xx [ 211
] = xx [ 203 ] ; xx [ 212 ] = - ( xx [ 27 ] * xx [ 197 ] ) ; xx [ 213 ] = xx
[ 27 ] * xx [ 196 ] - xx [ 198 ] * xx [ 28 ] ; xx [ 214 ] = xx [ 29 ] * xx [
197 ] ; pm_math_Quaternion_xform_ra ( xx + 208 , xx + 212 , xx + 196 ) ; xx [
204 ] = xx [ 178 ] * xx [ 196 ] ; xx [ 212 ] = xx [ 178 ] * xx [ 197 ] ; xx [
213 ] = ( xx [ 178 ] * xx [ 204 ] - xx [ 144 ] * xx [ 212 ] ) * xx [ 14 ] -
xx [ 196 ] ; xx [ 214 ] = xx [ 5 ] - xx [ 14 ] * xx [ 185 ] * xx [ 185 ] ; xx
[ 215 ] = xx [ 14 ] * xx [ 186 ] * xx [ 185 ] ; xx [ 216 ] = - ( xx [ 23 ] *
xx [ 214 ] ) ; xx [ 217 ] = xx [ 23 ] * xx [ 215 ] ; xx [ 218 ] = xx [ 22 ] *
xx [ 215 ] + xx [ 21 ] * xx [ 214 ] ; pm_math_Quaternion_xform_ra ( xx + 192
, xx + 216 , xx + 219 ) ; xx [ 216 ] = - ( xx [ 27 ] * xx [ 214 ] ) ; xx [
217 ] = xx [ 27 ] * xx [ 215 ] ; xx [ 218 ] = xx [ 29 ] * xx [ 214 ] ;
pm_math_Quaternion_xform_ra ( xx + 208 , xx + 216 , xx + 222 ) ; xx [ 185 ] =
xx [ 178 ] * xx [ 222 ] ; xx [ 186 ] = xx [ 178 ] * xx [ 223 ] ; xx [ 208 ] =
( xx [ 178 ] * xx [ 185 ] - xx [ 144 ] * xx [ 186 ] ) * xx [ 14 ] - xx [ 222
] ; xx [ 209 ] = xx [ 184 ] ; xx [ 210 ] = xx [ 189 ] ; xx [ 211 ] = xx [ 191
] ; xx [ 184 ] = xx [ 21 ] * xx [ 190 ] ; xx [ 191 ] = xx [ 22 ] * xx [ 190 ]
; xx [ 216 ] = xx [ 145 ] * xx [ 21 ] + xx [ 22 ] * xx [ 189 ] ; xx [ 225 ] =
- xx [ 184 ] ; xx [ 226 ] = xx [ 191 ] ; xx [ 227 ] = xx [ 216 ] ;
pm_math_Vector3_cross_ra ( xx + 209 , xx + 225 , xx + 228 ) ; xx [ 217 ] = xx
[ 177 ] * xx [ 29 ] ; xx [ 218 ] = xx [ 188 ] * xx [ 29 ] ; xx [ 225 ] = xx [
14 ] * ( xx [ 217 ] * xx [ 179 ] - xx [ 218 ] * xx [ 187 ] ) ; xx [ 226 ] =
xx [ 178 ] * xx [ 225 ] ; xx [ 227 ] = ( xx [ 188 ] * xx [ 218 ] + xx [ 177 ]
* xx [ 217 ] ) * xx [ 14 ] - xx [ 29 ] ; xx [ 188 ] = xx [ 178 ] * xx [ 227 ]
; xx [ 231 ] = ( xx [ 178 ] * xx [ 226 ] - xx [ 144 ] * xx [ 188 ] ) * xx [
14 ] ; xx [ 232 ] = 0.651818103933012 ; xx [ 233 ] = 0.03648925127026437 ; xx
[ 234 ] = 0.031347714040858 ; xx [ 235 ] = - 0.7568480790431602 ; xx [ 236 ]
= xx [ 0 ] * state [ 38 ] ; xx [ 237 ] = sin ( xx [ 236 ] ) ; xx [ 238 ] =
cos ( xx [ 236 ] ) ; xx [ 239 ] = - ( xx [ 55 ] * xx [ 237 ] ) ; xx [ 240 ] =
xx [ 57 ] * xx [ 237 ] ; xx [ 241 ] = xx [ 58 ] * xx [ 237 ] ;
pm_math_Quaternion_compose_ra ( xx + 232 , xx + 238 , xx + 242 ) ; xx [ 236 ]
= xx [ 5 ] / sqrt ( state [ 40 ] * state [ 40 ] + state [ 41 ] * state [ 41 ]
+ state [ 42 ] * state [ 42 ] + state [ 43 ] * state [ 43 ] ) ; xx [ 237 ] =
xx [ 236 ] * state [ 40 ] ; xx [ 238 ] = xx [ 236 ] * state [ 41 ] ; xx [ 239
] = xx [ 236 ] * state [ 42 ] ; xx [ 240 ] = xx [ 236 ] * state [ 43 ] ;
pm_math_Quaternion_composeInverse_ra ( xx + 237 , xx + 74 , xx + 246 ) ;
pm_math_Quaternion_compose_ra ( xx + 59 , xx + 246 , xx + 250 ) ;
pm_math_Quaternion_compose_ra ( xx + 242 , xx + 250 , xx + 246 ) ;
pm_math_Quaternion_xform_ra ( xx + 246 , xx + 86 , xx + 254 ) ;
pm_math_Quaternion_xform_ra ( xx + 250 , xx + 92 , xx + 257 ) ;
pm_math_Quaternion_xform_ra ( xx + 242 , xx + 257 , xx + 260 ) ;
pm_math_Quaternion_xform_ra ( xx + 246 , xx + 95 , xx + 257 ) ;
pm_math_Quaternion_xform_ra ( xx + 250 , xx + 104 , xx + 263 ) ;
pm_math_Quaternion_xform_ra ( xx + 242 , xx + 263 , xx + 266 ) ;
pm_math_Quaternion_xform_ra ( xx + 246 , xx + 107 , xx + 263 ) ;
pm_math_Quaternion_xform_ra ( xx + 250 , xx + 116 , xx + 269 ) ;
pm_math_Quaternion_xform_ra ( xx + 242 , xx + 269 , xx + 272 ) ; xx [ 236 ] =
xx [ 14 ] * ( xx [ 178 ] * xx [ 212 ] + xx [ 144 ] * xx [ 204 ] ) - xx [ 197
] ; xx [ 204 ] = xx [ 14 ] * ( xx [ 178 ] * xx [ 186 ] + xx [ 144 ] * xx [
185 ] ) - xx [ 223 ] ; xx [ 185 ] = xx [ 14 ] * ( xx [ 178 ] * xx [ 188 ] +
xx [ 144 ] * xx [ 226 ] ) ; xx [ 186 ] = ( xx [ 217 ] * xx [ 187 ] + xx [ 218
] * xx [ 179 ] ) * xx [ 14 ] ; pm_math_Vector3_cross_ra ( xx + 199 , xx + 126
, xx + 269 ) ; pm_math_Quaternion_xform_ra ( xx + 192 , xx + 269 , xx + 199 )
; xx [ 269 ] = - ( xx [ 125 ] * xx [ 214 ] ) ; xx [ 270 ] = xx [ 125 ] * xx [
215 ] ; xx [ 271 ] = xx [ 8 ] * xx [ 214 ] - xx [ 121 ] * xx [ 215 ] ;
pm_math_Quaternion_xform_ra ( xx + 192 , xx + 269 , xx + 275 ) ; xx [ 188 ] =
xx [ 8 ] * xx [ 190 ] ; xx [ 196 ] = xx [ 121 ] * xx [ 190 ] ; xx [ 190 ] =
xx [ 121 ] * xx [ 189 ] - xx [ 145 ] * xx [ 8 ] ; xx [ 269 ] = - xx [ 188 ] ;
xx [ 270 ] = - xx [ 196 ] ; xx [ 271 ] = - xx [ 190 ] ;
pm_math_Vector3_cross_ra ( xx + 209 , xx + 269 , xx + 278 ) ; xx [ 209 ] = -
0.3294969578258811 ; xx [ 210 ] = - 0.04543218271089525 ; xx [ 211 ] = -
0.01581333007230693 ; xx [ 212 ] = 0.9429303315460998 ; xx [ 145 ] = xx [ 0 ]
* state [ 47 ] ; xx [ 189 ] = sin ( xx [ 145 ] ) ; xx [ 281 ] = cos ( xx [
145 ] ) ; xx [ 282 ] = - ( xx [ 55 ] * xx [ 189 ] ) ; xx [ 283 ] = xx [ 57 ]
* xx [ 189 ] ; xx [ 284 ] = xx [ 58 ] * xx [ 189 ] ;
pm_math_Quaternion_compose_ra ( xx + 209 , xx + 281 , xx + 285 ) ; xx [ 145 ]
= xx [ 5 ] / sqrt ( state [ 49 ] * state [ 49 ] + state [ 50 ] * state [ 50 ]
+ state [ 51 ] * state [ 51 ] + state [ 52 ] * state [ 52 ] ) ; xx [ 189 ] =
xx [ 145 ] * state [ 49 ] ; xx [ 197 ] = xx [ 145 ] * state [ 50 ] ; xx [ 214
] = xx [ 145 ] * state [ 51 ] ; xx [ 215 ] = xx [ 145 ] * state [ 52 ] ; xx [
281 ] = xx [ 189 ] ; xx [ 282 ] = xx [ 197 ] ; xx [ 283 ] = xx [ 214 ] ; xx [
284 ] = xx [ 215 ] ; pm_math_Quaternion_composeInverse_ra ( xx + 281 , xx +
74 , xx + 289 ) ; pm_math_Quaternion_compose_ra ( xx + 59 , xx + 289 , xx +
293 ) ; pm_math_Quaternion_compose_ra ( xx + 285 , xx + 293 , xx + 289 ) ;
pm_math_Quaternion_xform_ra ( xx + 289 , xx + 86 , xx + 269 ) ;
pm_math_Quaternion_xform_ra ( xx + 293 , xx + 92 , xx + 297 ) ;
pm_math_Quaternion_xform_ra ( xx + 285 , xx + 297 , xx + 300 ) ;
pm_math_Quaternion_xform_ra ( xx + 289 , xx + 95 , xx + 297 ) ;
pm_math_Quaternion_xform_ra ( xx + 293 , xx + 104 , xx + 303 ) ;
pm_math_Quaternion_xform_ra ( xx + 285 , xx + 303 , xx + 306 ) ;
pm_math_Quaternion_xform_ra ( xx + 289 , xx + 107 , xx + 303 ) ;
pm_math_Quaternion_xform_ra ( xx + 293 , xx + 116 , xx + 309 ) ;
pm_math_Quaternion_xform_ra ( xx + 285 , xx + 309 , xx + 312 ) ; xx [ 145 ] =
0.4999999999999998 ; xx [ 217 ] = xx [ 0 ] * state [ 56 ] ; xx [ 222 ] = sin
( xx [ 217 ] ) ; xx [ 223 ] = xx [ 0 ] * state [ 57 ] ; xx [ 226 ] = sin ( xx
[ 223 ] ) ; xx [ 241 ] = xx [ 222 ] * xx [ 226 ] ; xx [ 309 ] = xx [ 0 ] *
state [ 58 ] ; xx [ 310 ] = sin ( xx [ 309 ] ) ; xx [ 311 ] = cos ( xx [ 309
] ) ; xx [ 309 ] = cos ( xx [ 217 ] ) ; xx [ 217 ] = cos ( xx [ 223 ] ) ; xx
[ 223 ] = xx [ 309 ] * xx [ 217 ] ; xx [ 315 ] = xx [ 241 ] * xx [ 310 ] - xx
[ 311 ] * xx [ 223 ] ; xx [ 316 ] = xx [ 223 ] * xx [ 310 ] + xx [ 311 ] * xx
[ 241 ] ; xx [ 223 ] = 0.8660254037844387 ; xx [ 241 ] = xx [ 145 ] * xx [
315 ] + xx [ 316 ] * xx [ 223 ] ; xx [ 317 ] = xx [ 217 ] * xx [ 222 ] ; xx [
217 ] = xx [ 309 ] * xx [ 226 ] ; xx [ 222 ] = xx [ 311 ] * xx [ 317 ] + xx [
217 ] * xx [ 310 ] ; xx [ 226 ] = xx [ 317 ] * xx [ 310 ] - xx [ 311 ] * xx [
217 ] ; xx [ 217 ] = xx [ 222 ] * xx [ 145 ] + xx [ 223 ] * xx [ 226 ] ; xx [
309 ] = xx [ 222 ] * xx [ 223 ] - xx [ 145 ] * xx [ 226 ] ; xx [ 317 ] = xx [
316 ] * xx [ 145 ] - xx [ 223 ] * xx [ 315 ] ; xx [ 318 ] = - xx [ 241 ] ; xx
[ 319 ] = xx [ 217 ] ; xx [ 320 ] = xx [ 309 ] ; xx [ 321 ] = xx [ 317 ] ; xx
[ 322 ] = xx [ 5 ] - ( xx [ 226 ] * xx [ 226 ] + xx [ 316 ] * xx [ 316 ] ) *
xx [ 14 ] ; xx [ 323 ] = xx [ 14 ] * ( xx [ 316 ] * xx [ 315 ] - xx [ 222 ] *
xx [ 226 ] ) ; xx [ 324 ] = xx [ 226 ] * xx [ 315 ] + xx [ 222 ] * xx [ 316 ]
; xx [ 325 ] = xx [ 322 ] ; xx [ 326 ] = xx [ 323 ] ; xx [ 327 ] = xx [ 324 ]
* xx [ 14 ] ; pm_math_Vector3_cross_ra ( xx + 325 , xx + 24 , xx + 328 ) ;
pm_math_Quaternion_xform_ra ( xx + 318 , xx + 328 , xx + 331 ) ; xx [ 328 ] =
- xx [ 222 ] ; xx [ 329 ] = - xx [ 316 ] ; xx [ 334 ] = xx [ 315 ] ; xx [ 335
] = xx [ 328 ] ; xx [ 336 ] = xx [ 226 ] ; xx [ 337 ] = xx [ 329 ] ; xx [ 338
] = - ( xx [ 27 ] * xx [ 323 ] ) ; xx [ 339 ] = xx [ 27 ] * xx [ 322 ] - xx [
324 ] * xx [ 28 ] ; xx [ 340 ] = xx [ 29 ] * xx [ 323 ] ;
pm_math_Quaternion_xform_ra ( xx + 334 , xx + 338 , xx + 322 ) ; xx [ 330 ] =
xx [ 223 ] * xx [ 323 ] ; xx [ 338 ] = xx [ 223 ] * xx [ 322 ] ; xx [ 339 ] =
( xx [ 145 ] * xx [ 330 ] + xx [ 223 ] * xx [ 338 ] ) * xx [ 14 ] - xx [ 322
] ; xx [ 340 ] = xx [ 5 ] - xx [ 14 ] * xx [ 310 ] * xx [ 310 ] ; xx [ 341 ]
= xx [ 14 ] * xx [ 311 ] * xx [ 310 ] ; xx [ 342 ] = - ( xx [ 23 ] * xx [ 340
] ) ; xx [ 343 ] = xx [ 23 ] * xx [ 341 ] ; xx [ 344 ] = xx [ 22 ] * xx [ 341
] + xx [ 21 ] * xx [ 340 ] ; pm_math_Quaternion_xform_ra ( xx + 318 , xx +
342 , xx + 345 ) ; xx [ 342 ] = - ( xx [ 27 ] * xx [ 340 ] ) ; xx [ 343 ] =
xx [ 27 ] * xx [ 341 ] ; xx [ 344 ] = xx [ 29 ] * xx [ 340 ] ;
pm_math_Quaternion_xform_ra ( xx + 334 , xx + 342 , xx + 348 ) ; xx [ 310 ] =
xx [ 223 ] * xx [ 349 ] ; xx [ 311 ] = xx [ 223 ] * xx [ 348 ] ; xx [ 334 ] =
( xx [ 145 ] * xx [ 310 ] + xx [ 223 ] * xx [ 311 ] ) * xx [ 14 ] - xx [ 348
] ; xx [ 335 ] = xx [ 217 ] ; xx [ 336 ] = xx [ 309 ] ; xx [ 337 ] = xx [ 317
] ; xx [ 342 ] = xx [ 21 ] * xx [ 317 ] ; xx [ 343 ] = xx [ 22 ] * xx [ 317 ]
; xx [ 344 ] = xx [ 217 ] * xx [ 21 ] - xx [ 22 ] * xx [ 309 ] ; xx [ 351 ] =
xx [ 342 ] ; xx [ 352 ] = - xx [ 343 ] ; xx [ 353 ] = - xx [ 344 ] ;
pm_math_Vector3_cross_ra ( xx + 335 , xx + 351 , xx + 354 ) ; xx [ 351 ] = xx
[ 316 ] * xx [ 29 ] ; xx [ 352 ] = xx [ 222 ] * xx [ 29 ] ; xx [ 353 ] = ( xx
[ 316 ] * xx [ 351 ] + xx [ 222 ] * xx [ 352 ] ) * xx [ 14 ] - xx [ 29 ] ; xx
[ 316 ] = xx [ 223 ] * xx [ 353 ] ; xx [ 357 ] = xx [ 14 ] * ( xx [ 352 ] *
xx [ 226 ] - xx [ 351 ] * xx [ 315 ] ) ; xx [ 358 ] = xx [ 223 ] * xx [ 357 ]
; xx [ 359 ] = ( xx [ 145 ] * xx [ 316 ] + xx [ 223 ] * xx [ 358 ] ) * xx [
14 ] ; xx [ 360 ] = - 0.3295406112903234 ; xx [ 361 ] = 0.04539254234508536 ;
xx [ 362 ] = - 0.01592676154469353 ; xx [ 363 ] = - 0.942915076174174 ; xx [
364 ] = xx [ 0 ] * state [ 66 ] ; xx [ 365 ] = sin ( xx [ 364 ] ) ; xx [ 366
] = cos ( xx [ 364 ] ) ; xx [ 367 ] = - ( xx [ 55 ] * xx [ 365 ] ) ; xx [ 368
] = xx [ 57 ] * xx [ 365 ] ; xx [ 369 ] = xx [ 58 ] * xx [ 365 ] ;
pm_math_Quaternion_compose_ra ( xx + 360 , xx + 366 , xx + 370 ) ; xx [ 364 ]
= xx [ 5 ] / sqrt ( state [ 68 ] * state [ 68 ] + state [ 69 ] * state [ 69 ]
+ state [ 70 ] * state [ 70 ] + state [ 71 ] * state [ 71 ] ) ; xx [ 365 ] =
xx [ 364 ] * state [ 68 ] ; xx [ 366 ] = xx [ 364 ] * state [ 69 ] ; xx [ 367
] = xx [ 364 ] * state [ 70 ] ; xx [ 368 ] = xx [ 364 ] * state [ 71 ] ;
pm_math_Quaternion_composeInverse_ra ( xx + 365 , xx + 74 , xx + 374 ) ;
pm_math_Quaternion_compose_ra ( xx + 59 , xx + 374 , xx + 378 ) ;
pm_math_Quaternion_compose_ra ( xx + 370 , xx + 378 , xx + 374 ) ;
pm_math_Quaternion_xform_ra ( xx + 374 , xx + 86 , xx + 382 ) ;
pm_math_Quaternion_xform_ra ( xx + 378 , xx + 92 , xx + 385 ) ;
pm_math_Quaternion_xform_ra ( xx + 370 , xx + 385 , xx + 388 ) ;
pm_math_Quaternion_xform_ra ( xx + 374 , xx + 95 , xx + 385 ) ;
pm_math_Quaternion_xform_ra ( xx + 378 , xx + 104 , xx + 391 ) ;
pm_math_Quaternion_xform_ra ( xx + 370 , xx + 391 , xx + 394 ) ;
pm_math_Quaternion_xform_ra ( xx + 374 , xx + 107 , xx + 391 ) ;
pm_math_Quaternion_xform_ra ( xx + 378 , xx + 116 , xx + 397 ) ;
pm_math_Quaternion_xform_ra ( xx + 370 , xx + 397 , xx + 400 ) ; xx [ 364 ] =
xx [ 14 ] * ( xx [ 223 ] * xx [ 330 ] - xx [ 145 ] * xx [ 338 ] ) - xx [ 323
] ; xx [ 330 ] = xx [ 14 ] * ( xx [ 223 ] * xx [ 310 ] - xx [ 145 ] * xx [
311 ] ) - xx [ 349 ] ; xx [ 310 ] = xx [ 14 ] * ( xx [ 223 ] * xx [ 316 ] -
xx [ 145 ] * xx [ 358 ] ) ; xx [ 311 ] = ( xx [ 352 ] * xx [ 315 ] + xx [ 351
] * xx [ 226 ] ) * xx [ 14 ] ; pm_math_Vector3_cross_ra ( xx + 325 , xx + 126
, xx + 397 ) ; pm_math_Quaternion_xform_ra ( xx + 318 , xx + 397 , xx + 325 )
; xx [ 397 ] = - ( xx [ 125 ] * xx [ 340 ] ) ; xx [ 398 ] = xx [ 125 ] * xx [
341 ] ; xx [ 399 ] = xx [ 8 ] * xx [ 340 ] - xx [ 121 ] * xx [ 341 ] ;
pm_math_Quaternion_xform_ra ( xx + 318 , xx + 397 , xx + 403 ) ; xx [ 316 ] =
xx [ 8 ] * xx [ 317 ] ; xx [ 322 ] = xx [ 121 ] * xx [ 317 ] ; xx [ 317 ] =
xx [ 217 ] * xx [ 8 ] + xx [ 121 ] * xx [ 309 ] ; xx [ 397 ] = xx [ 316 ] ;
xx [ 398 ] = xx [ 322 ] ; xx [ 399 ] = - xx [ 317 ] ;
pm_math_Vector3_cross_ra ( xx + 335 , xx + 397 , xx + 406 ) ; xx [ 335 ] =
0.651853142204865 ; xx [ 336 ] = - 0.03641083691649384 ; xx [ 337 ] =
0.03143875934085798 ; xx [ 338 ] = 0.7568179017199528 ; xx [ 217 ] = xx [ 0 ]
* state [ 75 ] ; xx [ 309 ] = sin ( xx [ 217 ] ) ; xx [ 409 ] = cos ( xx [
217 ] ) ; xx [ 410 ] = - ( xx [ 55 ] * xx [ 309 ] ) ; xx [ 411 ] = xx [ 57 ]
* xx [ 309 ] ; xx [ 412 ] = xx [ 58 ] * xx [ 309 ] ;
pm_math_Quaternion_compose_ra ( xx + 335 , xx + 409 , xx + 413 ) ; xx [ 217 ]
= xx [ 5 ] / sqrt ( state [ 77 ] * state [ 77 ] + state [ 78 ] * state [ 78 ]
+ state [ 79 ] * state [ 79 ] + state [ 80 ] * state [ 80 ] ) ; xx [ 309 ] =
xx [ 217 ] * state [ 77 ] ; xx [ 323 ] = xx [ 217 ] * state [ 78 ] ; xx [ 340
] = xx [ 217 ] * state [ 79 ] ; xx [ 341 ] = xx [ 217 ] * state [ 80 ] ; xx [
409 ] = xx [ 309 ] ; xx [ 410 ] = xx [ 323 ] ; xx [ 411 ] = xx [ 340 ] ; xx [
412 ] = xx [ 341 ] ; pm_math_Quaternion_composeInverse_ra ( xx + 409 , xx +
74 , xx + 417 ) ; pm_math_Quaternion_compose_ra ( xx + 59 , xx + 417 , xx +
421 ) ; pm_math_Quaternion_compose_ra ( xx + 413 , xx + 421 , xx + 417 ) ;
pm_math_Quaternion_xform_ra ( xx + 417 , xx + 86 , xx + 397 ) ;
pm_math_Quaternion_xform_ra ( xx + 421 , xx + 92 , xx + 425 ) ;
pm_math_Quaternion_xform_ra ( xx + 413 , xx + 425 , xx + 428 ) ;
pm_math_Quaternion_xform_ra ( xx + 417 , xx + 95 , xx + 425 ) ;
pm_math_Quaternion_xform_ra ( xx + 421 , xx + 104 , xx + 431 ) ;
pm_math_Quaternion_xform_ra ( xx + 413 , xx + 431 , xx + 434 ) ;
pm_math_Quaternion_xform_ra ( xx + 417 , xx + 107 , xx + 431 ) ;
pm_math_Quaternion_xform_ra ( xx + 421 , xx + 116 , xx + 437 ) ;
pm_math_Quaternion_xform_ra ( xx + 413 , xx + 437 , xx + 440 ) ; xx [ 217 ] =
7.427230677621783e-3 ; xx [ 348 ] = xx [ 0 ] * state [ 6 ] ; xx [ 349 ] = cos
( xx [ 348 ] ) ; xx [ 352 ] = 0.4527250000000002 ; xx [ 358 ] = sin ( xx [
348 ] ) ; xx [ 348 ] = xx [ 352 ] * xx [ 358 ] ; xx [ 369 ] = xx [ 349 ] * xx
[ 348 ] ; xx [ 437 ] = 1.405725 ; xx [ 438 ] = xx [ 437 ] * xx [ 358 ] ; xx [
439 ] = xx [ 438 ] * xx [ 358 ] ; xx [ 443 ] = xx [ 14 ] * ( xx [ 369 ] + xx
[ 439 ] ) ; xx [ 444 ] = 1.5457 ; xx [ 445 ] = 0.01 ; xx [ 446 ] =
0.7071067811865476 ; xx [ 447 ] = xx [ 0 ] * state [ 8 ] ; xx [ 448 ] = xx [
446 ] * cos ( xx [ 447 ] ) ; xx [ 449 ] = xx [ 445 ] * xx [ 448 ] ; xx [ 450
] = xx [ 446 ] * sin ( xx [ 447 ] ) ; xx [ 447 ] = xx [ 445 ] * xx [ 450 ] ;
xx [ 451 ] = 9.300000000000017e-3 ; xx [ 452 ] = xx [ 14 ] * ( xx [ 449 ] *
xx [ 450 ] - xx [ 447 ] * xx [ 448 ] ) - xx [ 451 ] ; xx [ 453 ] = xx [ 443 ]
- xx [ 443 ] + xx [ 444 ] - xx [ 452 ] ; xx [ 443 ] = 9.999999999999957e-3 ;
xx [ 454 ] = xx [ 449 ] * xx [ 448 ] ; xx [ 449 ] = xx [ 447 ] * xx [ 450 ] ;
xx [ 447 ] = - ( xx [ 443 ] - ( xx [ 454 ] + xx [ 449 ] ) * xx [ 14 ] ) ; xx
[ 455 ] = xx [ 349 ] * xx [ 438 ] ; xx [ 438 ] = xx [ 348 ] * xx [ 358 ] ; xx
[ 348 ] = ( xx [ 455 ] - xx [ 438 ] ) * xx [ 14 ] ; xx [ 456 ] =
0.04550000000000132 ; xx [ 457 ] = 0.0555 ; xx [ 458 ] = ( xx [ 454 ] + xx [
449 ] ) * xx [ 14 ] - xx [ 457 ] ; xx [ 449 ] = xx [ 348 ] - xx [ 348 ] - xx
[ 456 ] - xx [ 458 ] ; xx [ 459 ] = xx [ 453 ] ; xx [ 460 ] = xx [ 447 ] ; xx
[ 461 ] = xx [ 449 ] ; xx [ 348 ] = xx [ 450 ] * xx [ 450 ] ; xx [ 454 ] = xx
[ 5 ] - ( xx [ 348 ] + xx [ 348 ] ) * xx [ 14 ] ; xx [ 462 ] = xx [ 448 ] *
xx [ 450 ] ; xx [ 450 ] = ( xx [ 462 ] + xx [ 462 ] ) * xx [ 14 ] ; xx [ 463
] = xx [ 454 ] ; xx [ 464 ] = xx [ 14 ] * ( xx [ 462 ] - xx [ 462 ] ) ; xx [
465 ] = - xx [ 450 ] ; xx [ 466 ] = pm_math_Vector3_dot_ra ( xx + 459 , xx +
463 ) ; xx [ 467 ] = xx [ 448 ] * xx [ 448 ] ; xx [ 448 ] = xx [ 14 ] * ( xx
[ 348 ] - xx [ 467 ] ) ; xx [ 468 ] = 2.220446049250313e-16 ; xx [ 469 ] =
0.4527250000000003 ; xx [ 470 ] = xx [ 469 ] * xx [ 358 ] ; xx [ 471 ] =
1.405725 ; xx [ 472 ] = xx [ 471 ] * xx [ 358 ] ; xx [ 473 ] = xx [ 468 ] - (
( xx [ 349 ] * xx [ 470 ] + xx [ 472 ] * xx [ 358 ] ) * xx [ 14 ] - ( xx [
369 ] + xx [ 439 ] ) * xx [ 14 ] ) ; xx [ 369 ] = 1.110223024625157e-16 ; xx
[ 439 ] = xx [ 14 ] * ( xx [ 438 ] - xx [ 455 ] ) + xx [ 14 ] * ( xx [ 349 ]
* xx [ 472 ] - xx [ 470 ] * xx [ 358 ] ) + xx [ 369 ] ; xx [ 438 ] = ( xx [
462 ] + xx [ 462 ] ) * xx [ 14 ] ; xx [ 474 ] = - xx [ 438 ] ; xx [ 475 ] =
xx [ 5 ] - ( xx [ 348 ] + xx [ 467 ] ) * xx [ 14 ] ; xx [ 476 ] = xx [ 448 ]
; xx [ 348 ] = pm_math_Vector3_dot_ra ( xx + 459 , xx + 474 ) ; xx [ 455 ] =
xx [ 466 ] * xx [ 466 ] + xx [ 348 ] * xx [ 348 ] ; xx [ 455 ] = xx [ 455 ]
== 0.0 ? 0.0 : ( xx [ 466 ] * ( xx [ 448 ] * xx [ 473 ] - xx [ 439 ] * xx [
438 ] ) - xx [ 348 ] * ( xx [ 439 ] * xx [ 454 ] - xx [ 450 ] * xx [ 473 ] )
) / xx [ 455 ] ; xx [ 462 ] = xx [ 446 ] * xx [ 358 ] ; xx [ 467 ] = xx [ 462
] * xx [ 462 ] ; xx [ 470 ] = xx [ 5 ] - ( xx [ 467 ] + xx [ 467 ] ) * xx [
14 ] ; xx [ 472 ] = xx [ 446 ] * xx [ 349 ] ; xx [ 477 ] = xx [ 472 ] * xx [
462 ] ; xx [ 462 ] = ( xx [ 477 ] + xx [ 477 ] ) * xx [ 14 ] ; xx [ 478 ] =
xx [ 470 ] ; xx [ 479 ] = xx [ 14 ] * ( xx [ 477 ] - xx [ 477 ] ) ; xx [ 480
] = - xx [ 462 ] ; xx [ 481 ] = pm_math_Vector3_dot_ra ( xx + 459 , xx + 478
) ; xx [ 478 ] = xx [ 472 ] * xx [ 472 ] ; xx [ 472 ] = xx [ 14 ] * ( xx [
467 ] - xx [ 478 ] ) ; xx [ 479 ] = ( xx [ 477 ] + xx [ 477 ] ) * xx [ 14 ] ;
xx [ 477 ] = xx [ 14 ] * xx [ 358 ] * xx [ 358 ] - xx [ 5 ] ; xx [ 480 ] = xx
[ 14 ] * xx [ 349 ] * xx [ 358 ] ; xx [ 482 ] = - xx [ 479 ] ; xx [ 483 ] =
xx [ 5 ] - ( xx [ 467 ] + xx [ 478 ] ) * xx [ 14 ] ; xx [ 484 ] = xx [ 472 ]
; xx [ 349 ] = pm_math_Vector3_dot_ra ( xx + 459 , xx + 482 ) ; xx [ 358 ] =
xx [ 481 ] * xx [ 481 ] + xx [ 349 ] * xx [ 349 ] ; xx [ 358 ] = xx [ 358 ]
== 0.0 ? 0.0 : ( xx [ 481 ] * ( xx [ 472 ] * xx [ 473 ] - xx [ 439 ] * xx [
479 ] + xx [ 477 ] * xx [ 453 ] + xx [ 480 ] * xx [ 449 ] ) - xx [ 349 ] * (
xx [ 439 ] * xx [ 470 ] - xx [ 462 ] * xx [ 473 ] + xx [ 477 ] * xx [ 449 ] -
xx [ 480 ] * xx [ 453 ] ) ) / xx [ 358 ] ; xx [ 439 ] = xx [ 0 ] * state [ 34
] ; xx [ 449 ] = cos ( xx [ 439 ] ) ; xx [ 453 ] = 0.452725 ; xx [ 459 ] =
sin ( xx [ 439 ] ) ; xx [ 439 ] = xx [ 453 ] * xx [ 459 ] ; xx [ 460 ] = xx [
449 ] * xx [ 439 ] ; xx [ 461 ] = xx [ 437 ] * xx [ 459 ] ; xx [ 462 ] = xx [
461 ] * xx [ 459 ] ; xx [ 467 ] = xx [ 14 ] * ( xx [ 460 ] + xx [ 462 ] ) ;
xx [ 470 ] = xx [ 0 ] * state [ 36 ] ; xx [ 472 ] = xx [ 446 ] * cos ( xx [
470 ] ) ; xx [ 473 ] = xx [ 445 ] * xx [ 472 ] ; xx [ 477 ] = xx [ 446 ] *
sin ( xx [ 470 ] ) ; xx [ 470 ] = xx [ 445 ] * xx [ 477 ] ; xx [ 478 ] = xx [
14 ] * ( xx [ 473 ] * xx [ 477 ] - xx [ 470 ] * xx [ 472 ] ) - xx [ 451 ] ;
xx [ 479 ] = xx [ 467 ] - xx [ 467 ] + xx [ 444 ] - xx [ 478 ] ; xx [ 467 ] =
xx [ 473 ] * xx [ 472 ] ; xx [ 473 ] = xx [ 470 ] * xx [ 477 ] ; xx [ 470 ] =
- ( xx [ 443 ] - ( xx [ 467 ] + xx [ 473 ] ) * xx [ 14 ] ) ; xx [ 480 ] = xx
[ 449 ] * xx [ 461 ] ; xx [ 461 ] = xx [ 439 ] * xx [ 459 ] ; xx [ 439 ] = (
xx [ 480 ] - xx [ 461 ] ) * xx [ 14 ] ; xx [ 482 ] = ( xx [ 467 ] + xx [ 473
] ) * xx [ 14 ] - xx [ 457 ] ; xx [ 467 ] = xx [ 439 ] - xx [ 439 ] - xx [
456 ] - xx [ 482 ] ; xx [ 483 ] = xx [ 479 ] ; xx [ 484 ] = xx [ 470 ] ; xx [
485 ] = xx [ 467 ] ; xx [ 439 ] = xx [ 477 ] * xx [ 477 ] ; xx [ 473 ] = xx [
5 ] - ( xx [ 439 ] + xx [ 439 ] ) * xx [ 14 ] ; xx [ 486 ] = xx [ 472 ] * xx
[ 477 ] ; xx [ 477 ] = ( xx [ 486 ] + xx [ 486 ] ) * xx [ 14 ] ; xx [ 487 ] =
xx [ 473 ] ; xx [ 488 ] = xx [ 14 ] * ( xx [ 486 ] - xx [ 486 ] ) ; xx [ 489
] = - xx [ 477 ] ; xx [ 490 ] = pm_math_Vector3_dot_ra ( xx + 483 , xx + 487
) ; xx [ 491 ] = xx [ 472 ] * xx [ 472 ] ; xx [ 472 ] = xx [ 14 ] * ( xx [
439 ] - xx [ 491 ] ) ; xx [ 492 ] = xx [ 352 ] * xx [ 459 ] ; xx [ 493 ] = xx
[ 471 ] * xx [ 459 ] ; xx [ 494 ] = xx [ 468 ] - ( ( xx [ 449 ] * xx [ 492 ]
+ xx [ 493 ] * xx [ 459 ] ) * xx [ 14 ] - ( xx [ 460 ] + xx [ 462 ] ) * xx [
14 ] ) ; xx [ 460 ] = xx [ 14 ] * ( xx [ 461 ] - xx [ 480 ] ) + xx [ 14 ] * (
xx [ 449 ] * xx [ 493 ] - xx [ 492 ] * xx [ 459 ] ) + xx [ 369 ] ; xx [ 461 ]
= ( xx [ 486 ] + xx [ 486 ] ) * xx [ 14 ] ; xx [ 495 ] = - xx [ 461 ] ; xx [
496 ] = xx [ 5 ] - ( xx [ 439 ] + xx [ 491 ] ) * xx [ 14 ] ; xx [ 497 ] = xx
[ 472 ] ; xx [ 439 ] = pm_math_Vector3_dot_ra ( xx + 483 , xx + 495 ) ; xx [
462 ] = xx [ 490 ] * xx [ 490 ] + xx [ 439 ] * xx [ 439 ] ; xx [ 462 ] = xx [
462 ] == 0.0 ? 0.0 : ( xx [ 490 ] * ( xx [ 472 ] * xx [ 494 ] - xx [ 460 ] *
xx [ 461 ] ) - xx [ 439 ] * ( xx [ 460 ] * xx [ 473 ] - xx [ 477 ] * xx [ 494
] ) ) / xx [ 462 ] ; xx [ 480 ] = xx [ 446 ] * xx [ 459 ] ; xx [ 486 ] = xx [
480 ] * xx [ 480 ] ; xx [ 491 ] = xx [ 5 ] - ( xx [ 486 ] + xx [ 486 ] ) * xx
[ 14 ] ; xx [ 492 ] = xx [ 446 ] * xx [ 449 ] ; xx [ 493 ] = xx [ 492 ] * xx
[ 480 ] ; xx [ 480 ] = ( xx [ 493 ] + xx [ 493 ] ) * xx [ 14 ] ; xx [ 498 ] =
xx [ 491 ] ; xx [ 499 ] = xx [ 14 ] * ( xx [ 493 ] - xx [ 493 ] ) ; xx [ 500
] = - xx [ 480 ] ; xx [ 501 ] = pm_math_Vector3_dot_ra ( xx + 483 , xx + 498
) ; xx [ 498 ] = xx [ 492 ] * xx [ 492 ] ; xx [ 492 ] = xx [ 14 ] * ( xx [
486 ] - xx [ 498 ] ) ; xx [ 499 ] = ( xx [ 493 ] + xx [ 493 ] ) * xx [ 14 ] ;
xx [ 493 ] = xx [ 14 ] * xx [ 459 ] * xx [ 459 ] - xx [ 5 ] ; xx [ 500 ] = xx
[ 14 ] * xx [ 449 ] * xx [ 459 ] ; xx [ 502 ] = - xx [ 499 ] ; xx [ 503 ] =
xx [ 5 ] - ( xx [ 486 ] + xx [ 498 ] ) * xx [ 14 ] ; xx [ 504 ] = xx [ 492 ]
; xx [ 449 ] = pm_math_Vector3_dot_ra ( xx + 483 , xx + 502 ) ; xx [ 459 ] =
xx [ 501 ] * xx [ 501 ] + xx [ 449 ] * xx [ 449 ] ; xx [ 459 ] = xx [ 459 ]
== 0.0 ? 0.0 : ( xx [ 501 ] * ( xx [ 492 ] * xx [ 494 ] - xx [ 460 ] * xx [
499 ] + xx [ 493 ] * xx [ 479 ] + xx [ 500 ] * xx [ 467 ] ) - xx [ 449 ] * (
xx [ 460 ] * xx [ 491 ] - xx [ 480 ] * xx [ 494 ] + xx [ 493 ] * xx [ 467 ] -
xx [ 500 ] * xx [ 479 ] ) ) / xx [ 459 ] ; xx [ 460 ] = xx [ 0 ] * state [ 62
] ; xx [ 467 ] = cos ( xx [ 460 ] ) ; xx [ 479 ] = sin ( xx [ 460 ] ) ; xx [
460 ] = xx [ 453 ] * xx [ 479 ] ; xx [ 480 ] = xx [ 467 ] * xx [ 460 ] ; xx [
483 ] = xx [ 437 ] * xx [ 479 ] ; xx [ 484 ] = xx [ 483 ] * xx [ 479 ] ; xx [
485 ] = xx [ 14 ] * ( xx [ 480 ] + xx [ 484 ] ) ; xx [ 486 ] = xx [ 0 ] *
state [ 64 ] ; xx [ 491 ] = xx [ 446 ] * cos ( xx [ 486 ] ) ; xx [ 492 ] = xx
[ 445 ] * xx [ 491 ] ; xx [ 493 ] = xx [ 446 ] * sin ( xx [ 486 ] ) ; xx [
486 ] = xx [ 445 ] * xx [ 493 ] ; xx [ 494 ] = xx [ 14 ] * ( xx [ 492 ] * xx
[ 493 ] - xx [ 486 ] * xx [ 491 ] ) - xx [ 451 ] ; xx [ 498 ] = xx [ 485 ] -
xx [ 485 ] + xx [ 444 ] - xx [ 494 ] ; xx [ 485 ] = xx [ 492 ] * xx [ 491 ] ;
xx [ 492 ] = xx [ 486 ] * xx [ 493 ] ; xx [ 486 ] = - ( xx [ 443 ] - ( xx [
485 ] + xx [ 492 ] ) * xx [ 14 ] ) ; xx [ 499 ] = xx [ 467 ] * xx [ 483 ] ;
xx [ 483 ] = xx [ 460 ] * xx [ 479 ] ; xx [ 460 ] = ( xx [ 499 ] - xx [ 483 ]
) * xx [ 14 ] ; xx [ 500 ] = ( xx [ 485 ] + xx [ 492 ] ) * xx [ 14 ] - xx [
457 ] ; xx [ 485 ] = xx [ 460 ] - xx [ 460 ] - xx [ 456 ] - xx [ 500 ] ; xx [
502 ] = xx [ 498 ] ; xx [ 503 ] = xx [ 486 ] ; xx [ 504 ] = xx [ 485 ] ; xx [
460 ] = xx [ 493 ] * xx [ 493 ] ; xx [ 492 ] = xx [ 5 ] - ( xx [ 460 ] + xx [
460 ] ) * xx [ 14 ] ; xx [ 505 ] = xx [ 491 ] * xx [ 493 ] ; xx [ 493 ] = (
xx [ 505 ] + xx [ 505 ] ) * xx [ 14 ] ; xx [ 506 ] = xx [ 492 ] ; xx [ 507 ]
= xx [ 14 ] * ( xx [ 505 ] - xx [ 505 ] ) ; xx [ 508 ] = - xx [ 493 ] ; xx [
509 ] = pm_math_Vector3_dot_ra ( xx + 502 , xx + 506 ) ; xx [ 510 ] = xx [
491 ] * xx [ 491 ] ; xx [ 491 ] = xx [ 14 ] * ( xx [ 460 ] - xx [ 510 ] ) ;
xx [ 511 ] = xx [ 352 ] * xx [ 479 ] ; xx [ 512 ] = xx [ 471 ] * xx [ 479 ] ;
xx [ 513 ] = xx [ 468 ] - ( ( xx [ 467 ] * xx [ 511 ] + xx [ 512 ] * xx [ 479
] ) * xx [ 14 ] - ( xx [ 480 ] + xx [ 484 ] ) * xx [ 14 ] ) ; xx [ 480 ] = xx
[ 14 ] * ( xx [ 483 ] - xx [ 499 ] ) + xx [ 14 ] * ( xx [ 467 ] * xx [ 512 ]
- xx [ 511 ] * xx [ 479 ] ) + xx [ 369 ] ; xx [ 483 ] = ( xx [ 505 ] + xx [
505 ] ) * xx [ 14 ] ; xx [ 514 ] = - xx [ 483 ] ; xx [ 515 ] = xx [ 5 ] - (
xx [ 460 ] + xx [ 510 ] ) * xx [ 14 ] ; xx [ 516 ] = xx [ 491 ] ; xx [ 460 ]
= pm_math_Vector3_dot_ra ( xx + 502 , xx + 514 ) ; xx [ 484 ] = xx [ 509 ] *
xx [ 509 ] + xx [ 460 ] * xx [ 460 ] ; xx [ 484 ] = xx [ 484 ] == 0.0 ? 0.0 :
( xx [ 509 ] * ( xx [ 491 ] * xx [ 513 ] - xx [ 480 ] * xx [ 483 ] ) - xx [
460 ] * ( xx [ 480 ] * xx [ 492 ] - xx [ 493 ] * xx [ 513 ] ) ) / xx [ 484 ]
; xx [ 499 ] = xx [ 446 ] * xx [ 479 ] ; xx [ 505 ] = xx [ 499 ] * xx [ 499 ]
; xx [ 510 ] = xx [ 5 ] - ( xx [ 505 ] + xx [ 505 ] ) * xx [ 14 ] ; xx [ 511
] = xx [ 446 ] * xx [ 467 ] ; xx [ 512 ] = xx [ 511 ] * xx [ 499 ] ; xx [ 499
] = ( xx [ 512 ] + xx [ 512 ] ) * xx [ 14 ] ; xx [ 517 ] = xx [ 510 ] ; xx [
518 ] = xx [ 14 ] * ( xx [ 512 ] - xx [ 512 ] ) ; xx [ 519 ] = - xx [ 499 ] ;
xx [ 520 ] = pm_math_Vector3_dot_ra ( xx + 502 , xx + 517 ) ; xx [ 517 ] = xx
[ 511 ] * xx [ 511 ] ; xx [ 511 ] = xx [ 14 ] * ( xx [ 505 ] - xx [ 517 ] ) ;
xx [ 518 ] = ( xx [ 512 ] + xx [ 512 ] ) * xx [ 14 ] ; xx [ 512 ] = xx [ 14 ]
* xx [ 479 ] * xx [ 479 ] - xx [ 5 ] ; xx [ 519 ] = xx [ 14 ] * xx [ 467 ] *
xx [ 479 ] ; xx [ 521 ] = - xx [ 518 ] ; xx [ 522 ] = xx [ 5 ] - ( xx [ 505 ]
+ xx [ 517 ] ) * xx [ 14 ] ; xx [ 523 ] = xx [ 511 ] ; xx [ 467 ] =
pm_math_Vector3_dot_ra ( xx + 502 , xx + 521 ) ; xx [ 479 ] = xx [ 520 ] * xx
[ 520 ] + xx [ 467 ] * xx [ 467 ] ; xx [ 479 ] = xx [ 479 ] == 0.0 ? 0.0 : (
xx [ 520 ] * ( xx [ 511 ] * xx [ 513 ] - xx [ 480 ] * xx [ 518 ] + xx [ 512 ]
* xx [ 498 ] + xx [ 519 ] * xx [ 485 ] ) - xx [ 467 ] * ( xx [ 480 ] * xx [
510 ] - xx [ 499 ] * xx [ 513 ] + xx [ 512 ] * xx [ 485 ] - xx [ 519 ] * xx [
498 ] ) ) / xx [ 479 ] ; xx [ 521 ] = xx [ 30 ] - xx [ 15 ] ; xx [ 522 ] = xx
[ 38 ] - xx [ 41 ] ; xx [ 523 ] = ( xx [ 47 ] - xx [ 3 ] * xx [ 9 ] ) * xx [
14 ] - xx [ 45 ] - xx [ 22 ] ; xx [ 524 ] = xx [ 46 ] ; xx [ 525 ] = - ( xx [
89 ] + xx [ 98 ] ) ; xx [ 526 ] = - ( xx [ 101 ] + xx [ 110 ] ) ; xx [ 527 ]
= - ( xx [ 113 ] + xx [ 122 ] ) ; xx [ 528 ] = xx [ 46 ] ; xx [ 529 ] = xx [
46 ] ; xx [ 530 ] = xx [ 46 ] ; xx [ 531 ] = xx [ 46 ] ; xx [ 532 ] = xx [ 46
] ; xx [ 533 ] = xx [ 46 ] ; xx [ 534 ] = xx [ 46 ] ; xx [ 535 ] = xx [ 46 ]
; xx [ 536 ] = xx [ 46 ] ; xx [ 537 ] = xx [ 46 ] ; xx [ 538 ] = xx [ 46 ] ;
xx [ 539 ] = xx [ 46 ] ; xx [ 540 ] = xx [ 46 ] ; xx [ 541 ] = xx [ 46 ] ; xx
[ 542 ] = xx [ 46 ] ; xx [ 543 ] = xx [ 46 ] ; xx [ 544 ] = xx [ 46 ] ; xx [
545 ] = xx [ 46 ] ; xx [ 546 ] = xx [ 46 ] ; xx [ 547 ] = xx [ 46 ] ; xx [
548 ] = xx [ 46 ] ; xx [ 549 ] = xx [ 46 ] ; xx [ 550 ] = xx [ 46 ] ; xx [
551 ] = xx [ 31 ] - xx [ 16 ] ; xx [ 552 ] = xx [ 39 ] - xx [ 42 ] ; xx [ 553
] = xx [ 14 ] * ( xx [ 48 ] + xx [ 4 ] * xx [ 9 ] ) - xx [ 54 ] + xx [ 119 ]
; xx [ 554 ] = xx [ 46 ] ; xx [ 555 ] = - ( xx [ 90 ] + xx [ 99 ] ) ; xx [
556 ] = - ( xx [ 102 ] + xx [ 111 ] ) ; xx [ 557 ] = - ( xx [ 114 ] + xx [
123 ] ) ; xx [ 558 ] = xx [ 46 ] ; xx [ 559 ] = xx [ 46 ] ; xx [ 560 ] = xx [
46 ] ; xx [ 561 ] = xx [ 46 ] ; xx [ 562 ] = xx [ 46 ] ; xx [ 563 ] = xx [ 46
] ; xx [ 564 ] = xx [ 46 ] ; xx [ 565 ] = xx [ 46 ] ; xx [ 566 ] = xx [ 46 ]
; xx [ 567 ] = xx [ 46 ] ; xx [ 568 ] = xx [ 46 ] ; xx [ 569 ] = xx [ 46 ] ;
xx [ 570 ] = xx [ 46 ] ; xx [ 571 ] = xx [ 46 ] ; xx [ 572 ] = xx [ 46 ] ; xx
[ 573 ] = xx [ 46 ] ; xx [ 574 ] = xx [ 46 ] ; xx [ 575 ] = xx [ 46 ] ; xx [
576 ] = xx [ 46 ] ; xx [ 577 ] = xx [ 46 ] ; xx [ 578 ] = xx [ 46 ] ; xx [
579 ] = xx [ 46 ] ; xx [ 580 ] = xx [ 46 ] ; xx [ 581 ] = xx [ 32 ] - xx [ 17
] ; xx [ 582 ] = xx [ 40 ] - xx [ 43 ] ; xx [ 583 ] = xx [ 14 ] * ( xx [ 49 ]
+ xx [ 7 ] * xx [ 9 ] ) - xx [ 120 ] ; xx [ 584 ] = xx [ 46 ] ; xx [ 585 ] =
- ( xx [ 91 ] + xx [ 100 ] ) ; xx [ 586 ] = - ( xx [ 103 ] + xx [ 112 ] ) ;
xx [ 587 ] = - ( xx [ 115 ] + xx [ 124 ] ) ; xx [ 588 ] = xx [ 46 ] ; xx [
589 ] = xx [ 46 ] ; xx [ 590 ] = xx [ 46 ] ; xx [ 591 ] = xx [ 46 ] ; xx [
592 ] = xx [ 46 ] ; xx [ 593 ] = xx [ 46 ] ; xx [ 594 ] = xx [ 46 ] ; xx [
595 ] = xx [ 46 ] ; xx [ 596 ] = xx [ 46 ] ; xx [ 597 ] = xx [ 46 ] ; xx [
598 ] = xx [ 46 ] ; xx [ 599 ] = xx [ 46 ] ; xx [ 600 ] = xx [ 46 ] ; xx [
601 ] = xx [ 46 ] ; xx [ 602 ] = xx [ 46 ] ; xx [ 603 ] = xx [ 46 ] ; xx [
604 ] = xx [ 46 ] ; xx [ 605 ] = xx [ 46 ] ; xx [ 606 ] = xx [ 46 ] ; xx [
607 ] = xx [ 46 ] ; xx [ 608 ] = xx [ 46 ] ; xx [ 609 ] = xx [ 46 ] ; xx [
610 ] = xx [ 46 ] ; xx [ 611 ] = xx [ 18 ] - xx [ 15 ] ; xx [ 612 ] = xx [
132 ] - xx [ 41 ] ; xx [ 613 ] = ( xx [ 135 ] - xx [ 33 ] * xx [ 9 ] ) * xx [
14 ] - xx [ 45 ] + xx [ 121 ] ; xx [ 614 ] = xx [ 46 ] ; xx [ 615 ] = xx [ 46
] ; xx [ 616 ] = xx [ 46 ] ; xx [ 617 ] = xx [ 46 ] ; xx [ 618 ] = - ( xx [
162 ] + xx [ 168 ] ) ; xx [ 619 ] = - ( xx [ 165 ] + xx [ 174 ] ) ; xx [ 620
] = - ( xx [ 171 ] + xx [ 180 ] ) ; xx [ 621 ] = xx [ 46 ] ; xx [ 622 ] = xx
[ 46 ] ; xx [ 623 ] = xx [ 46 ] ; xx [ 624 ] = xx [ 46 ] ; xx [ 625 ] = xx [
46 ] ; xx [ 626 ] = xx [ 46 ] ; xx [ 627 ] = xx [ 46 ] ; xx [ 628 ] = xx [ 46
] ; xx [ 629 ] = xx [ 46 ] ; xx [ 630 ] = xx [ 46 ] ; xx [ 631 ] = xx [ 46 ]
; xx [ 632 ] = xx [ 46 ] ; xx [ 633 ] = xx [ 46 ] ; xx [ 634 ] = xx [ 46 ] ;
xx [ 635 ] = xx [ 46 ] ; xx [ 636 ] = xx [ 46 ] ; xx [ 637 ] = xx [ 46 ] ; xx
[ 638 ] = xx [ 46 ] ; xx [ 639 ] = xx [ 46 ] ; xx [ 640 ] = xx [ 46 ] ; xx [
641 ] = xx [ 19 ] - xx [ 16 ] ; xx [ 642 ] = xx [ 133 ] - xx [ 42 ] ; xx [
643 ] = xx [ 14 ] * ( xx [ 136 ] - xx [ 34 ] * xx [ 9 ] ) - xx [ 54 ] + xx [
129 ] ; xx [ 644 ] = xx [ 46 ] ; xx [ 645 ] = xx [ 46 ] ; xx [ 646 ] = xx [
46 ] ; xx [ 647 ] = xx [ 46 ] ; xx [ 648 ] = - ( xx [ 163 ] + xx [ 169 ] ) ;
xx [ 649 ] = - ( xx [ 166 ] + xx [ 175 ] ) ; xx [ 650 ] = - ( xx [ 172 ] + xx
[ 181 ] ) ; xx [ 651 ] = xx [ 46 ] ; xx [ 652 ] = xx [ 46 ] ; xx [ 653 ] = xx
[ 46 ] ; xx [ 654 ] = xx [ 46 ] ; xx [ 655 ] = xx [ 46 ] ; xx [ 656 ] = xx [
46 ] ; xx [ 657 ] = xx [ 46 ] ; xx [ 658 ] = xx [ 46 ] ; xx [ 659 ] = xx [ 46
] ; xx [ 660 ] = xx [ 46 ] ; xx [ 661 ] = xx [ 46 ] ; xx [ 662 ] = xx [ 46 ]
; xx [ 663 ] = xx [ 46 ] ; xx [ 664 ] = xx [ 46 ] ; xx [ 665 ] = xx [ 46 ] ;
xx [ 666 ] = xx [ 46 ] ; xx [ 667 ] = xx [ 46 ] ; xx [ 668 ] = xx [ 46 ] ; xx
[ 669 ] = xx [ 46 ] ; xx [ 670 ] = xx [ 46 ] ; xx [ 671 ] = xx [ 20 ] - xx [
17 ] ; xx [ 672 ] = xx [ 134 ] - xx [ 43 ] ; xx [ 673 ] = xx [ 14 ] * ( xx [
137 ] - xx [ 1 ] * xx [ 9 ] ) - xx [ 120 ] ; xx [ 674 ] = xx [ 46 ] ; xx [
675 ] = xx [ 46 ] ; xx [ 676 ] = xx [ 46 ] ; xx [ 677 ] = xx [ 46 ] ; xx [
678 ] = - ( xx [ 164 ] + xx [ 170 ] ) ; xx [ 679 ] = - ( xx [ 167 ] + xx [
176 ] ) ; xx [ 680 ] = - ( xx [ 173 ] + xx [ 182 ] ) ; xx [ 681 ] = xx [ 46 ]
; xx [ 682 ] = xx [ 46 ] ; xx [ 683 ] = xx [ 46 ] ; xx [ 684 ] = xx [ 46 ] ;
xx [ 685 ] = xx [ 46 ] ; xx [ 686 ] = xx [ 46 ] ; xx [ 687 ] = xx [ 46 ] ; xx
[ 688 ] = xx [ 46 ] ; xx [ 689 ] = xx [ 46 ] ; xx [ 690 ] = xx [ 46 ] ; xx [
691 ] = xx [ 46 ] ; xx [ 692 ] = xx [ 46 ] ; xx [ 693 ] = xx [ 46 ] ; xx [
694 ] = xx [ 46 ] ; xx [ 695 ] = xx [ 46 ] ; xx [ 696 ] = xx [ 46 ] ; xx [
697 ] = xx [ 46 ] ; xx [ 698 ] = xx [ 46 ] ; xx [ 699 ] = xx [ 46 ] ; xx [
700 ] = xx [ 46 ] ; xx [ 701 ] = xx [ 46 ] ; xx [ 702 ] = xx [ 46 ] ; xx [
703 ] = xx [ 46 ] ; xx [ 704 ] = xx [ 46 ] ; xx [ 705 ] = xx [ 46 ] ; xx [
706 ] = xx [ 46 ] ; xx [ 707 ] = xx [ 46 ] ; xx [ 708 ] = xx [ 46 ] ; xx [
709 ] = xx [ 46 ] ; xx [ 710 ] = xx [ 46 ] ; xx [ 711 ] = xx [ 205 ] + xx [
213 ] ; xx [ 712 ] = xx [ 219 ] + xx [ 208 ] ; xx [ 713 ] = xx [ 14 ] * ( xx
[ 228 ] - xx [ 183 ] * xx [ 184 ] ) + xx [ 231 ] - xx [ 225 ] - xx [ 22 ] ;
xx [ 714 ] = xx [ 46 ] ; xx [ 715 ] = - ( xx [ 254 ] + xx [ 260 ] ) ; xx [
716 ] = - ( xx [ 257 ] + xx [ 266 ] ) ; xx [ 717 ] = - ( xx [ 263 ] + xx [
272 ] ) ; xx [ 718 ] = xx [ 46 ] ; xx [ 719 ] = xx [ 46 ] ; xx [ 720 ] = xx [
46 ] ; xx [ 721 ] = xx [ 46 ] ; xx [ 722 ] = xx [ 46 ] ; xx [ 723 ] = xx [ 46
] ; xx [ 724 ] = xx [ 46 ] ; xx [ 725 ] = xx [ 46 ] ; xx [ 726 ] = xx [ 46 ]
; xx [ 727 ] = xx [ 46 ] ; xx [ 728 ] = xx [ 46 ] ; xx [ 729 ] = xx [ 46 ] ;
xx [ 730 ] = xx [ 46 ] ; xx [ 731 ] = xx [ 46 ] ; xx [ 732 ] = xx [ 46 ] ; xx
[ 733 ] = xx [ 46 ] ; xx [ 734 ] = xx [ 46 ] ; xx [ 735 ] = xx [ 46 ] ; xx [
736 ] = xx [ 46 ] ; xx [ 737 ] = xx [ 46 ] ; xx [ 738 ] = xx [ 46 ] ; xx [
739 ] = xx [ 46 ] ; xx [ 740 ] = xx [ 46 ] ; xx [ 741 ] = xx [ 206 ] + xx [
236 ] ; xx [ 742 ] = xx [ 220 ] + xx [ 204 ] ; xx [ 743 ] = ( xx [ 183 ] * xx
[ 191 ] + xx [ 229 ] ) * xx [ 14 ] + xx [ 185 ] - xx [ 227 ] - xx [ 21 ] ; xx
[ 744 ] = xx [ 46 ] ; xx [ 745 ] = - ( xx [ 255 ] + xx [ 261 ] ) ; xx [ 746 ]
= - ( xx [ 258 ] + xx [ 267 ] ) ; xx [ 747 ] = - ( xx [ 264 ] + xx [ 273 ] )
; xx [ 748 ] = xx [ 46 ] ; xx [ 749 ] = xx [ 46 ] ; xx [ 750 ] = xx [ 46 ] ;
xx [ 751 ] = xx [ 46 ] ; xx [ 752 ] = xx [ 46 ] ; xx [ 753 ] = xx [ 46 ] ; xx
[ 754 ] = xx [ 46 ] ; xx [ 755 ] = xx [ 46 ] ; xx [ 756 ] = xx [ 46 ] ; xx [
757 ] = xx [ 46 ] ; xx [ 758 ] = xx [ 46 ] ; xx [ 759 ] = xx [ 46 ] ; xx [
760 ] = xx [ 46 ] ; xx [ 761 ] = xx [ 46 ] ; xx [ 762 ] = xx [ 46 ] ; xx [
763 ] = xx [ 46 ] ; xx [ 764 ] = xx [ 46 ] ; xx [ 765 ] = xx [ 46 ] ; xx [
766 ] = xx [ 46 ] ; xx [ 767 ] = xx [ 46 ] ; xx [ 768 ] = xx [ 46 ] ; xx [
769 ] = xx [ 46 ] ; xx [ 770 ] = xx [ 46 ] ; xx [ 771 ] = xx [ 207 ] - xx [
198 ] ; xx [ 772 ] = xx [ 221 ] - xx [ 224 ] ; xx [ 773 ] = xx [ 14 ] * ( xx
[ 230 ] + xx [ 183 ] * xx [ 216 ] ) - xx [ 186 ] ; xx [ 774 ] = xx [ 46 ] ;
xx [ 775 ] = - ( xx [ 256 ] + xx [ 262 ] ) ; xx [ 776 ] = - ( xx [ 259 ] + xx
[ 268 ] ) ; xx [ 777 ] = - ( xx [ 265 ] + xx [ 274 ] ) ; xx [ 778 ] = xx [ 46
] ; xx [ 779 ] = xx [ 46 ] ; xx [ 780 ] = xx [ 46 ] ; xx [ 781 ] = xx [ 46 ]
; xx [ 782 ] = xx [ 46 ] ; xx [ 783 ] = xx [ 46 ] ; xx [ 784 ] = xx [ 46 ] ;
xx [ 785 ] = xx [ 46 ] ; xx [ 786 ] = xx [ 46 ] ; xx [ 787 ] = xx [ 46 ] ; xx
[ 788 ] = xx [ 46 ] ; xx [ 789 ] = xx [ 46 ] ; xx [ 790 ] = xx [ 46 ] ; xx [
791 ] = xx [ 46 ] ; xx [ 792 ] = xx [ 46 ] ; xx [ 793 ] = xx [ 46 ] ; xx [
794 ] = xx [ 46 ] ; xx [ 795 ] = xx [ 46 ] ; xx [ 796 ] = xx [ 46 ] ; xx [
797 ] = xx [ 46 ] ; xx [ 798 ] = xx [ 46 ] ; xx [ 799 ] = xx [ 46 ] ; xx [
800 ] = xx [ 46 ] ; xx [ 801 ] = xx [ 199 ] + xx [ 213 ] ; xx [ 802 ] = xx [
275 ] + xx [ 208 ] ; xx [ 803 ] = xx [ 14 ] * ( xx [ 278 ] - xx [ 183 ] * xx
[ 188 ] ) + xx [ 231 ] - xx [ 225 ] + xx [ 121 ] ; xx [ 804 ] = xx [ 46 ] ;
xx [ 805 ] = xx [ 46 ] ; xx [ 806 ] = xx [ 46 ] ; xx [ 807 ] = xx [ 46 ] ; xx
[ 808 ] = - ( xx [ 269 ] + xx [ 300 ] ) ; xx [ 809 ] = - ( xx [ 297 ] + xx [
306 ] ) ; xx [ 810 ] = - ( xx [ 303 ] + xx [ 312 ] ) ; xx [ 811 ] = xx [ 46 ]
; xx [ 812 ] = xx [ 46 ] ; xx [ 813 ] = xx [ 46 ] ; xx [ 814 ] = xx [ 46 ] ;
xx [ 815 ] = xx [ 46 ] ; xx [ 816 ] = xx [ 46 ] ; xx [ 817 ] = xx [ 46 ] ; xx
[ 818 ] = xx [ 46 ] ; xx [ 819 ] = xx [ 46 ] ; xx [ 820 ] = xx [ 46 ] ; xx [
821 ] = xx [ 46 ] ; xx [ 822 ] = xx [ 46 ] ; xx [ 823 ] = xx [ 46 ] ; xx [
824 ] = xx [ 46 ] ; xx [ 825 ] = xx [ 46 ] ; xx [ 826 ] = xx [ 46 ] ; xx [
827 ] = xx [ 46 ] ; xx [ 828 ] = xx [ 46 ] ; xx [ 829 ] = xx [ 46 ] ; xx [
830 ] = xx [ 46 ] ; xx [ 831 ] = xx [ 200 ] + xx [ 236 ] ; xx [ 832 ] = xx [
276 ] + xx [ 204 ] ; xx [ 833 ] = ( xx [ 279 ] - xx [ 183 ] * xx [ 196 ] ) *
xx [ 14 ] + xx [ 185 ] - xx [ 227 ] - xx [ 8 ] ; xx [ 834 ] = xx [ 46 ] ; xx
[ 835 ] = xx [ 46 ] ; xx [ 836 ] = xx [ 46 ] ; xx [ 837 ] = xx [ 46 ] ; xx [
838 ] = - ( xx [ 270 ] + xx [ 301 ] ) ; xx [ 839 ] = - ( xx [ 298 ] + xx [
307 ] ) ; xx [ 840 ] = - ( xx [ 304 ] + xx [ 313 ] ) ; xx [ 841 ] = xx [ 46 ]
; xx [ 842 ] = xx [ 46 ] ; xx [ 843 ] = xx [ 46 ] ; xx [ 844 ] = xx [ 46 ] ;
xx [ 845 ] = xx [ 46 ] ; xx [ 846 ] = xx [ 46 ] ; xx [ 847 ] = xx [ 46 ] ; xx
[ 848 ] = xx [ 46 ] ; xx [ 849 ] = xx [ 46 ] ; xx [ 850 ] = xx [ 46 ] ; xx [
851 ] = xx [ 46 ] ; xx [ 852 ] = xx [ 46 ] ; xx [ 853 ] = xx [ 46 ] ; xx [
854 ] = xx [ 46 ] ; xx [ 855 ] = xx [ 46 ] ; xx [ 856 ] = xx [ 46 ] ; xx [
857 ] = xx [ 46 ] ; xx [ 858 ] = xx [ 46 ] ; xx [ 859 ] = xx [ 46 ] ; xx [
860 ] = xx [ 46 ] ; xx [ 861 ] = xx [ 201 ] - xx [ 198 ] ; xx [ 862 ] = xx [
277 ] - xx [ 224 ] ; xx [ 863 ] = xx [ 14 ] * ( xx [ 280 ] - xx [ 183 ] * xx
[ 190 ] ) - xx [ 186 ] ; xx [ 864 ] = xx [ 46 ] ; xx [ 865 ] = xx [ 46 ] ; xx
[ 866 ] = xx [ 46 ] ; xx [ 867 ] = xx [ 46 ] ; xx [ 868 ] = - ( xx [ 271 ] +
xx [ 302 ] ) ; xx [ 869 ] = - ( xx [ 299 ] + xx [ 308 ] ) ; xx [ 870 ] = - (
xx [ 305 ] + xx [ 314 ] ) ; xx [ 871 ] = xx [ 46 ] ; xx [ 872 ] = xx [ 46 ] ;
xx [ 873 ] = xx [ 46 ] ; xx [ 874 ] = xx [ 46 ] ; xx [ 875 ] = xx [ 46 ] ; xx
[ 876 ] = xx [ 46 ] ; xx [ 877 ] = xx [ 46 ] ; xx [ 878 ] = xx [ 46 ] ; xx [
879 ] = xx [ 46 ] ; xx [ 880 ] = xx [ 46 ] ; xx [ 881 ] = xx [ 46 ] ; xx [
882 ] = xx [ 46 ] ; xx [ 883 ] = xx [ 46 ] ; xx [ 884 ] = xx [ 46 ] ; xx [
885 ] = xx [ 46 ] ; xx [ 886 ] = xx [ 46 ] ; xx [ 887 ] = xx [ 46 ] ; xx [
888 ] = xx [ 46 ] ; xx [ 889 ] = xx [ 46 ] ; xx [ 890 ] = xx [ 46 ] ; xx [
891 ] = xx [ 46 ] ; xx [ 892 ] = xx [ 46 ] ; xx [ 893 ] = xx [ 46 ] ; xx [
894 ] = xx [ 46 ] ; xx [ 895 ] = xx [ 46 ] ; xx [ 896 ] = xx [ 46 ] ; xx [
897 ] = xx [ 46 ] ; xx [ 898 ] = xx [ 46 ] ; xx [ 899 ] = xx [ 46 ] ; xx [
900 ] = xx [ 46 ] ; xx [ 901 ] = xx [ 331 ] + xx [ 339 ] ; xx [ 902 ] = xx [
345 ] + xx [ 334 ] ; xx [ 903 ] = xx [ 14 ] * ( xx [ 354 ] - xx [ 241 ] * xx
[ 342 ] ) + xx [ 359 ] - xx [ 357 ] - xx [ 22 ] ; xx [ 904 ] = xx [ 46 ] ; xx
[ 905 ] = - ( xx [ 382 ] + xx [ 388 ] ) ; xx [ 906 ] = - ( xx [ 385 ] + xx [
394 ] ) ; xx [ 907 ] = - ( xx [ 391 ] + xx [ 400 ] ) ; xx [ 908 ] = xx [ 46 ]
; xx [ 909 ] = xx [ 46 ] ; xx [ 910 ] = xx [ 46 ] ; xx [ 911 ] = xx [ 46 ] ;
xx [ 912 ] = xx [ 46 ] ; xx [ 913 ] = xx [ 46 ] ; xx [ 914 ] = xx [ 46 ] ; xx
[ 915 ] = xx [ 46 ] ; xx [ 916 ] = xx [ 46 ] ; xx [ 917 ] = xx [ 46 ] ; xx [
918 ] = xx [ 46 ] ; xx [ 919 ] = xx [ 46 ] ; xx [ 920 ] = xx [ 46 ] ; xx [
921 ] = xx [ 46 ] ; xx [ 922 ] = xx [ 46 ] ; xx [ 923 ] = xx [ 46 ] ; xx [
924 ] = xx [ 46 ] ; xx [ 925 ] = xx [ 46 ] ; xx [ 926 ] = xx [ 46 ] ; xx [
927 ] = xx [ 46 ] ; xx [ 928 ] = xx [ 46 ] ; xx [ 929 ] = xx [ 46 ] ; xx [
930 ] = xx [ 46 ] ; xx [ 931 ] = xx [ 332 ] + xx [ 364 ] ; xx [ 932 ] = xx [
346 ] + xx [ 330 ] ; xx [ 933 ] = ( xx [ 241 ] * xx [ 343 ] + xx [ 355 ] ) *
xx [ 14 ] + xx [ 310 ] - xx [ 353 ] - xx [ 21 ] ; xx [ 934 ] = xx [ 46 ] ; xx
[ 935 ] = - ( xx [ 383 ] + xx [ 389 ] ) ; xx [ 936 ] = - ( xx [ 386 ] + xx [
395 ] ) ; xx [ 937 ] = - ( xx [ 392 ] + xx [ 401 ] ) ; xx [ 938 ] = xx [ 46 ]
; xx [ 939 ] = xx [ 46 ] ; xx [ 940 ] = xx [ 46 ] ; xx [ 941 ] = xx [ 46 ] ;
xx [ 942 ] = xx [ 46 ] ; xx [ 943 ] = xx [ 46 ] ; xx [ 944 ] = xx [ 46 ] ; xx
[ 945 ] = xx [ 46 ] ; xx [ 946 ] = xx [ 46 ] ; xx [ 947 ] = xx [ 46 ] ; xx [
948 ] = xx [ 46 ] ; xx [ 949 ] = xx [ 46 ] ; xx [ 950 ] = xx [ 46 ] ; xx [
951 ] = xx [ 46 ] ; xx [ 952 ] = xx [ 46 ] ; xx [ 953 ] = xx [ 46 ] ; xx [
954 ] = xx [ 46 ] ; xx [ 955 ] = xx [ 46 ] ; xx [ 956 ] = xx [ 46 ] ; xx [
957 ] = xx [ 46 ] ; xx [ 958 ] = xx [ 46 ] ; xx [ 959 ] = xx [ 46 ] ; xx [
960 ] = xx [ 46 ] ; xx [ 961 ] = xx [ 333 ] - xx [ 324 ] ; xx [ 962 ] = xx [
347 ] - xx [ 350 ] ; xx [ 963 ] = xx [ 14 ] * ( xx [ 356 ] + xx [ 344 ] * xx
[ 241 ] ) - xx [ 311 ] ; xx [ 964 ] = xx [ 46 ] ; xx [ 965 ] = - ( xx [ 384 ]
+ xx [ 390 ] ) ; xx [ 966 ] = - ( xx [ 387 ] + xx [ 396 ] ) ; xx [ 967 ] = -
( xx [ 393 ] + xx [ 402 ] ) ; xx [ 968 ] = xx [ 46 ] ; xx [ 969 ] = xx [ 46 ]
; xx [ 970 ] = xx [ 46 ] ; xx [ 971 ] = xx [ 46 ] ; xx [ 972 ] = xx [ 46 ] ;
xx [ 973 ] = xx [ 46 ] ; xx [ 974 ] = xx [ 46 ] ; xx [ 975 ] = xx [ 46 ] ; xx
[ 976 ] = xx [ 46 ] ; xx [ 977 ] = xx [ 46 ] ; xx [ 978 ] = xx [ 46 ] ; xx [
979 ] = xx [ 46 ] ; xx [ 980 ] = xx [ 46 ] ; xx [ 981 ] = xx [ 46 ] ; xx [
982 ] = xx [ 46 ] ; xx [ 983 ] = xx [ 46 ] ; xx [ 984 ] = xx [ 46 ] ; xx [
985 ] = xx [ 46 ] ; xx [ 986 ] = xx [ 46 ] ; xx [ 987 ] = xx [ 46 ] ; xx [
988 ] = xx [ 46 ] ; xx [ 989 ] = xx [ 46 ] ; xx [ 990 ] = xx [ 46 ] ; xx [
991 ] = xx [ 325 ] + xx [ 339 ] ; xx [ 992 ] = xx [ 403 ] + xx [ 334 ] ; xx [
993 ] = xx [ 14 ] * ( xx [ 406 ] - xx [ 241 ] * xx [ 316 ] ) + xx [ 359 ] -
xx [ 357 ] + xx [ 121 ] ; xx [ 994 ] = xx [ 46 ] ; xx [ 995 ] = xx [ 46 ] ;
xx [ 996 ] = xx [ 46 ] ; xx [ 997 ] = xx [ 46 ] ; xx [ 998 ] = - ( xx [ 397 ]
+ xx [ 428 ] ) ; xx [ 999 ] = - ( xx [ 425 ] + xx [ 434 ] ) ; xx [ 1000 ] = -
( xx [ 431 ] + xx [ 440 ] ) ; xx [ 1001 ] = xx [ 46 ] ; xx [ 1002 ] = xx [ 46
] ; xx [ 1003 ] = xx [ 46 ] ; xx [ 1004 ] = xx [ 46 ] ; xx [ 1005 ] = xx [ 46
] ; xx [ 1006 ] = xx [ 46 ] ; xx [ 1007 ] = xx [ 46 ] ; xx [ 1008 ] = xx [ 46
] ; xx [ 1009 ] = xx [ 46 ] ; xx [ 1010 ] = xx [ 46 ] ; xx [ 1011 ] = xx [ 46
] ; xx [ 1012 ] = xx [ 46 ] ; xx [ 1013 ] = xx [ 46 ] ; xx [ 1014 ] = xx [ 46
] ; xx [ 1015 ] = xx [ 46 ] ; xx [ 1016 ] = xx [ 46 ] ; xx [ 1017 ] = xx [ 46
] ; xx [ 1018 ] = xx [ 46 ] ; xx [ 1019 ] = xx [ 46 ] ; xx [ 1020 ] = xx [ 46
] ; xx [ 1021 ] = xx [ 326 ] + xx [ 364 ] ; xx [ 1022 ] = xx [ 404 ] + xx [
330 ] ; xx [ 1023 ] = ( xx [ 407 ] - xx [ 241 ] * xx [ 322 ] ) * xx [ 14 ] +
xx [ 310 ] - xx [ 353 ] - xx [ 8 ] ; xx [ 1024 ] = xx [ 46 ] ; xx [ 1025 ] =
xx [ 46 ] ; xx [ 1026 ] = xx [ 46 ] ; xx [ 1027 ] = xx [ 46 ] ; xx [ 1028 ] =
- ( xx [ 398 ] + xx [ 429 ] ) ; xx [ 1029 ] = - ( xx [ 426 ] + xx [ 435 ] ) ;
xx [ 1030 ] = - ( xx [ 432 ] + xx [ 441 ] ) ; xx [ 1031 ] = xx [ 46 ] ; xx [
1032 ] = xx [ 46 ] ; xx [ 1033 ] = xx [ 46 ] ; xx [ 1034 ] = xx [ 46 ] ; xx [
1035 ] = xx [ 46 ] ; xx [ 1036 ] = xx [ 46 ] ; xx [ 1037 ] = xx [ 46 ] ; xx [
1038 ] = xx [ 46 ] ; xx [ 1039 ] = xx [ 46 ] ; xx [ 1040 ] = xx [ 46 ] ; xx [
1041 ] = xx [ 46 ] ; xx [ 1042 ] = xx [ 46 ] ; xx [ 1043 ] = xx [ 46 ] ; xx [
1044 ] = xx [ 46 ] ; xx [ 1045 ] = xx [ 46 ] ; xx [ 1046 ] = xx [ 46 ] ; xx [
1047 ] = xx [ 46 ] ; xx [ 1048 ] = xx [ 46 ] ; xx [ 1049 ] = xx [ 46 ] ; xx [
1050 ] = xx [ 46 ] ; xx [ 1051 ] = xx [ 327 ] - xx [ 324 ] ; xx [ 1052 ] = xx
[ 405 ] - xx [ 350 ] ; xx [ 1053 ] = xx [ 14 ] * ( xx [ 408 ] + xx [ 317 ] *
xx [ 241 ] ) - xx [ 311 ] ; xx [ 1054 ] = xx [ 46 ] ; xx [ 1055 ] = xx [ 46 ]
; xx [ 1056 ] = xx [ 46 ] ; xx [ 1057 ] = xx [ 46 ] ; xx [ 1058 ] = - ( xx [
399 ] + xx [ 430 ] ) ; xx [ 1059 ] = - ( xx [ 427 ] + xx [ 436 ] ) ; xx [
1060 ] = - ( xx [ 433 ] + xx [ 442 ] ) ; xx [ 1061 ] = xx [ 46 ] ; xx [ 1062
] = xx [ 46 ] ; xx [ 1063 ] = xx [ 46 ] ; xx [ 1064 ] = xx [ 217 ] * xx [ 455
] + xx [ 358 ] ; xx [ 1065 ] = xx [ 46 ] ; xx [ 1066 ] = xx [ 46 ] ; xx [
1067 ] = xx [ 46 ] ; xx [ 1068 ] = xx [ 46 ] ; xx [ 1069 ] = xx [ 46 ] ; xx [
1070 ] = xx [ 46 ] ; xx [ 1071 ] = xx [ 46 ] ; xx [ 1072 ] = xx [ 46 ] ; xx [
1073 ] = xx [ 46 ] ; xx [ 1074 ] = xx [ 46 ] ; xx [ 1075 ] = xx [ 46 ] ; xx [
1076 ] = xx [ 46 ] ; xx [ 1077 ] = xx [ 46 ] ; xx [ 1078 ] = xx [ 46 ] ; xx [
1079 ] = xx [ 46 ] ; xx [ 1080 ] = xx [ 46 ] ; xx [ 1081 ] = xx [ 46 ] ; xx [
1082 ] = xx [ 46 ] ; xx [ 1083 ] = xx [ 46 ] ; xx [ 1084 ] = xx [ 46 ] ; xx [
1085 ] = xx [ 46 ] ; xx [ 1086 ] = xx [ 46 ] ; xx [ 1087 ] = xx [ 46 ] ; xx [
1088 ] = xx [ 46 ] ; xx [ 1089 ] = xx [ 46 ] ; xx [ 1090 ] = xx [ 46 ] ; xx [
1091 ] = xx [ 46 ] ; xx [ 1092 ] = xx [ 46 ] ; xx [ 1093 ] = xx [ 46 ] ; xx [
1094 ] = xx [ 46 ] ; xx [ 1095 ] = xx [ 46 ] ; xx [ 1096 ] = xx [ 46 ] ; xx [
1097 ] = xx [ 46 ] ; xx [ 1098 ] = xx [ 46 ] ; xx [ 1099 ] = xx [ 46 ] ; xx [
1100 ] = xx [ 46 ] ; xx [ 1101 ] = xx [ 46 ] ; xx [ 1102 ] = xx [ 46 ] ; xx [
1103 ] = xx [ 46 ] ; xx [ 1104 ] = xx [ 217 ] * xx [ 462 ] + xx [ 459 ] ; xx
[ 1105 ] = xx [ 46 ] ; xx [ 1106 ] = xx [ 46 ] ; xx [ 1107 ] = xx [ 46 ] ; xx
[ 1108 ] = xx [ 46 ] ; xx [ 1109 ] = xx [ 46 ] ; xx [ 1110 ] = xx [ 46 ] ; xx
[ 1111 ] = xx [ 46 ] ; xx [ 1112 ] = xx [ 46 ] ; xx [ 1113 ] = xx [ 46 ] ; xx
[ 1114 ] = xx [ 46 ] ; xx [ 1115 ] = xx [ 46 ] ; xx [ 1116 ] = xx [ 46 ] ; xx
[ 1117 ] = xx [ 46 ] ; xx [ 1118 ] = xx [ 46 ] ; xx [ 1119 ] = xx [ 46 ] ; xx
[ 1120 ] = xx [ 46 ] ; xx [ 1121 ] = xx [ 46 ] ; xx [ 1122 ] = xx [ 46 ] ; xx
[ 1123 ] = xx [ 46 ] ; xx [ 1124 ] = xx [ 46 ] ; xx [ 1125 ] = xx [ 46 ] ; xx
[ 1126 ] = xx [ 46 ] ; xx [ 1127 ] = xx [ 46 ] ; xx [ 1128 ] = xx [ 46 ] ; xx
[ 1129 ] = xx [ 46 ] ; xx [ 1130 ] = xx [ 46 ] ; xx [ 1131 ] = xx [ 46 ] ; xx
[ 1132 ] = xx [ 46 ] ; xx [ 1133 ] = xx [ 46 ] ; xx [ 1134 ] = xx [ 46 ] ; xx
[ 1135 ] = xx [ 46 ] ; xx [ 1136 ] = xx [ 46 ] ; xx [ 1137 ] = xx [ 46 ] ; xx
[ 1138 ] = xx [ 46 ] ; xx [ 1139 ] = xx [ 46 ] ; xx [ 1140 ] = xx [ 46 ] ; xx
[ 1141 ] = xx [ 46 ] ; xx [ 1142 ] = xx [ 46 ] ; xx [ 1143 ] = xx [ 46 ] ; xx
[ 1144 ] = xx [ 217 ] * xx [ 484 ] + xx [ 479 ] ; xx [ 1145 ] = xx [ 46 ] ;
xx [ 1146 ] = xx [ 46 ] ; xx [ 1147 ] = xx [ 46 ] ; xx [ 1148 ] = xx [ 46 ] ;
xx [ 1149 ] = xx [ 46 ] ; xx [ 1150 ] = xx [ 46 ] ;
pm_math_Quaternion_xform_ra ( xx + 10 , xx + 24 , xx + 15 ) ; xx [ 1 ] =
0.3593 ; xx [ 3 ] = xx [ 27 ] * xx [ 6 ] ; xx [ 4 ] = xx [ 44 ] - xx [ 2 ] *
xx [ 27 ] ; xx [ 2 ] = xx [ 29 ] * xx [ 6 ] ; xx [ 18 ] = - xx [ 3 ] ; xx [
19 ] = xx [ 4 ] ; xx [ 20 ] = xx [ 2 ] ; pm_math_Vector3_cross_ra ( xx + 35 ,
xx + 18 , xx + 30 ) ; xx [ 6 ] = xx [ 1 ] - ( xx [ 30 ] - xx [ 3 ] * xx [ 9 ]
) * xx [ 14 ] ; xx [ 18 ] = 0.05448810068449638 ; xx [ 19 ] =
9.016809746371062e-8 ; xx [ 20 ] = - 1.197569081478675e-6 ;
pm_math_Quaternion_xform_ra ( xx + 78 , xx + 18 , xx + 33 ) ; xx [ 3 ] =
0.06203617700142335 ; xx [ 36 ] = 0.05551189931534764 ; xx [ 37 ] =
9.185648409514065e-8 ; xx [ 38 ] = 1.23198241897863e-6 ;
pm_math_Quaternion_xform_ra ( xx + 82 , xx + 36 , xx + 39 ) ; xx [ 7 ] =
6.252064263292171e-7 ; xx [ 42 ] = 4.366561113205437e-3 ; xx [ 43 ] = xx [ 3
] + xx [ 39 ] ; xx [ 44 ] = xx [ 7 ] + xx [ 40 ] ; xx [ 45 ] = xx [ 41 ] - xx
[ 42 ] ; pm_math_Quaternion_xform_ra ( xx + 63 , xx + 43 , xx + 39 ) ; xx [
43 ] = - 0.02492486046921943 ; xx [ 44 ] = - 9.061899534334276e-7 ; xx [ 45 ]
= 0.01185157563810752 ; pm_math_Quaternion_xform_ra ( xx + 63 , xx + 43 , xx
+ 47 ) ; xx [ 54 ] = 0.139807669447128 ; xx [ 78 ] = ( xx [ 9 ] * xx [ 4 ] +
xx [ 31 ] ) * xx [ 14 ] ; xx [ 4 ] = 0.0549998406976098 ; xx [ 79 ] =
0.01205999999999992 ; xx [ 30 ] = xx [ 79 ] - xx [ 14 ] * ( xx [ 32 ] + xx [
2 ] * xx [ 9 ] ) ; xx [ 2 ] = 0.06144 ; pm_math_Quaternion_xform_ra ( xx + 10
, xx + 126 , xx + 80 ) ; pm_math_Quaternion_xform_ra ( xx + 154 , xx + 18 ,
xx + 9 ) ; pm_math_Quaternion_xform_ra ( xx + 158 , xx + 36 , xx + 83 ) ; xx
[ 89 ] = xx [ 3 ] + xx [ 83 ] ; xx [ 90 ] = xx [ 7 ] + xx [ 84 ] ; xx [ 91 ]
= xx [ 85 ] - xx [ 42 ] ; pm_math_Quaternion_xform_ra ( xx + 146 , xx + 89 ,
xx + 83 ) ; pm_math_Quaternion_xform_ra ( xx + 146 , xx + 43 , xx + 89 ) ;
pm_math_Quaternion_xform_ra ( xx + 192 , xx + 24 , xx + 98 ) ; xx [ 101 ] =
xx [ 202 ] ; xx [ 102 ] = xx [ 179 ] ; xx [ 103 ] = xx [ 203 ] ; xx [ 12 ] =
xx [ 27 ] * xx [ 179 ] ; xx [ 13 ] = xx [ 218 ] - xx [ 177 ] * xx [ 27 ] ; xx
[ 31 ] = xx [ 29 ] * xx [ 179 ] ; xx [ 110 ] = - xx [ 12 ] ; xx [ 111 ] = xx
[ 13 ] ; xx [ 112 ] = xx [ 31 ] ; pm_math_Vector3_cross_ra ( xx + 101 , xx +
110 , xx + 113 ) ; xx [ 32 ] = ( xx [ 113 ] - xx [ 12 ] * xx [ 187 ] ) * xx [
14 ] - xx [ 29 ] ; xx [ 12 ] = xx [ 32 ] * xx [ 178 ] ; xx [ 101 ] = ( xx [
187 ] * xx [ 13 ] + xx [ 114 ] ) * xx [ 14 ] ; xx [ 13 ] = xx [ 178 ] * xx [
101 ] ; xx [ 102 ] = 0.1325 ; xx [ 103 ] = ( xx [ 178 ] * xx [ 12 ] - xx [
144 ] * xx [ 13 ] ) * xx [ 14 ] - xx [ 32 ] - xx [ 102 ] ;
pm_math_Quaternion_xform_ra ( xx + 246 , xx + 18 , xx + 110 ) ;
pm_math_Quaternion_xform_ra ( xx + 250 , xx + 36 , xx + 122 ) ; xx [ 132 ] =
xx [ 3 ] + xx [ 122 ] ; xx [ 133 ] = xx [ 7 ] + xx [ 123 ] ; xx [ 134 ] = xx
[ 124 ] - xx [ 42 ] ; pm_math_Quaternion_xform_ra ( xx + 242 , xx + 132 , xx
+ 122 ) ; pm_math_Quaternion_xform_ra ( xx + 242 , xx + 43 , xx + 132 ) ; xx
[ 32 ] = 0.02227257547533662 ; xx [ 120 ] = 0.2294967320028763 ; xx [ 135 ] =
xx [ 14 ] * ( xx [ 178 ] * xx [ 13 ] + xx [ 144 ] * xx [ 12 ] ) - xx [ 101 ]
- xx [ 120 ] ; xx [ 12 ] = 0.1485769137339153 ; xx [ 13 ] = xx [ 79 ] - xx [
14 ] * ( xx [ 115 ] + xx [ 31 ] * xx [ 187 ] ) ; pm_math_Quaternion_xform_ra
( xx + 192 , xx + 126 , xx + 113 ) ; pm_math_Quaternion_xform_ra ( xx + 289 ,
xx + 18 , xx + 154 ) ; pm_math_Quaternion_xform_ra ( xx + 293 , xx + 36 , xx
+ 157 ) ; xx [ 160 ] = xx [ 3 ] + xx [ 157 ] ; xx [ 161 ] = xx [ 7 ] + xx [
158 ] ; xx [ 162 ] = xx [ 159 ] - xx [ 42 ] ; pm_math_Quaternion_xform_ra (
xx + 285 , xx + 160 , xx + 157 ) ; pm_math_Quaternion_xform_ra ( xx + 285 ,
xx + 43 , xx + 160 ) ; xx [ 31 ] = 0.1175350939717913 ; xx [ 101 ] =
0.09357707303630548 ; pm_math_Quaternion_xform_ra ( xx + 318 , xx + 24 , xx +
163 ) ; xx [ 136 ] = xx [ 351 ] - xx [ 222 ] * xx [ 27 ] ; xx [ 166 ] = xx [
328 ] ; xx [ 167 ] = xx [ 226 ] ; xx [ 168 ] = xx [ 329 ] ; xx [ 137 ] = xx [
27 ] * xx [ 226 ] ; xx [ 169 ] = xx [ 29 ] * xx [ 226 ] ; xx [ 170 ] = - xx [
137 ] ; xx [ 171 ] = xx [ 136 ] ; xx [ 172 ] = xx [ 169 ] ;
pm_math_Vector3_cross_ra ( xx + 166 , xx + 170 , xx + 173 ) ; xx [ 166 ] = (
xx [ 315 ] * xx [ 136 ] + xx [ 174 ] ) * xx [ 14 ] ; xx [ 136 ] = xx [ 223 ]
* xx [ 166 ] ; xx [ 167 ] = ( xx [ 173 ] - xx [ 137 ] * xx [ 315 ] ) * xx [
14 ] - xx [ 29 ] ; xx [ 137 ] = xx [ 167 ] * xx [ 223 ] ; xx [ 168 ] =
0.1325000000000001 ; xx [ 170 ] = ( xx [ 145 ] * xx [ 136 ] + xx [ 223 ] * xx
[ 137 ] ) * xx [ 14 ] - xx [ 167 ] - xx [ 168 ] ; pm_math_Quaternion_xform_ra
( xx + 374 , xx + 18 , xx + 179 ) ; pm_math_Quaternion_xform_ra ( xx + 378 ,
xx + 36 , xx + 182 ) ; xx [ 185 ] = xx [ 3 ] + xx [ 182 ] ; xx [ 186 ] = xx [
7 ] + xx [ 183 ] ; xx [ 187 ] = xx [ 184 ] - xx [ 42 ] ;
pm_math_Quaternion_xform_ra ( xx + 370 , xx + 185 , xx + 182 ) ;
pm_math_Quaternion_xform_ra ( xx + 370 , xx + 43 , xx + 185 ) ; xx [ 167 ] =
0.1175350939717913 ; xx [ 171 ] = 0.2294967320028762 ; xx [ 172 ] = xx [ 14 ]
* ( xx [ 223 ] * xx [ 136 ] - xx [ 145 ] * xx [ 137 ] ) - xx [ 166 ] + xx [
171 ] ; xx [ 136 ] = 0.09357707303630539 ; xx [ 137 ] = xx [ 79 ] - xx [ 14 ]
* ( xx [ 175 ] + xx [ 169 ] * xx [ 315 ] ) ; pm_math_Quaternion_xform_ra ( xx
+ 318 , xx + 126 , xx + 173 ) ; pm_math_Quaternion_xform_ra ( xx + 417 , xx +
18 , xx + 190 ) ; pm_math_Quaternion_xform_ra ( xx + 421 , xx + 36 , xx + 193
) ; xx [ 198 ] = xx [ 3 ] + xx [ 193 ] ; xx [ 199 ] = xx [ 7 ] + xx [ 194 ] ;
xx [ 200 ] = xx [ 195 ] - xx [ 42 ] ; pm_math_Quaternion_xform_ra ( xx + 413
, xx + 198 , xx + 193 ) ; pm_math_Quaternion_xform_ra ( xx + 413 , xx + 43 ,
xx + 198 ) ; xx [ 43 ] = 0.0222725754753367 ; xx [ 44 ] = 0.1485769137339152
; xx [ 246 ] = - ( xx [ 15 ] + xx [ 6 ] - ( xx [ 33 ] + xx [ 39 ] - xx [ 47 ]
) - xx [ 54 ] ) ; xx [ 247 ] = - ( xx [ 16 ] - ( xx [ 78 ] + xx [ 34 ] + xx [
40 ] - xx [ 48 ] ) - xx [ 4 ] ) ; xx [ 248 ] = - ( xx [ 17 ] + xx [ 30 ] - (
xx [ 35 ] + xx [ 41 ] - xx [ 49 ] ) + xx [ 2 ] ) ; xx [ 249 ] = - ( xx [ 80 ]
+ xx [ 6 ] - ( xx [ 9 ] + xx [ 83 ] - xx [ 89 ] ) - xx [ 54 ] ) ; xx [ 250 ]
= - ( xx [ 81 ] - ( xx [ 78 ] + xx [ 10 ] + xx [ 84 ] - xx [ 90 ] ) + xx [ 4
] ) ; xx [ 251 ] = - ( xx [ 82 ] + xx [ 30 ] - ( xx [ 11 ] + xx [ 85 ] - xx [
91 ] ) + xx [ 2 ] ) ; xx [ 252 ] = - ( xx [ 98 ] + xx [ 103 ] - ( xx [ 110 ]
+ xx [ 122 ] - xx [ 132 ] ) + xx [ 32 ] ) ; xx [ 253 ] = - ( xx [ 99 ] + xx [
135 ] - ( xx [ 111 ] + xx [ 123 ] - xx [ 133 ] ) + xx [ 12 ] ) ; xx [ 254 ] =
- ( xx [ 100 ] + xx [ 13 ] - ( xx [ 112 ] + xx [ 124 ] - xx [ 134 ] ) + xx [
2 ] ) ; xx [ 255 ] = - ( xx [ 113 ] + xx [ 103 ] - ( xx [ 154 ] + xx [ 157 ]
- xx [ 160 ] ) + xx [ 31 ] ) ; xx [ 256 ] = - ( xx [ 114 ] + xx [ 135 ] - (
xx [ 155 ] + xx [ 158 ] - xx [ 161 ] ) + xx [ 101 ] ) ; xx [ 257 ] = - ( xx [
115 ] + xx [ 13 ] - ( xx [ 156 ] + xx [ 159 ] - xx [ 162 ] ) + xx [ 2 ] ) ;
xx [ 258 ] = - ( xx [ 163 ] + xx [ 170 ] - ( xx [ 179 ] + xx [ 182 ] - xx [
185 ] ) + xx [ 167 ] ) ; xx [ 259 ] = - ( xx [ 164 ] + xx [ 172 ] - ( xx [
180 ] + xx [ 183 ] - xx [ 186 ] ) - xx [ 136 ] ) ; xx [ 260 ] = - ( xx [ 165
] + xx [ 137 ] - ( xx [ 181 ] + xx [ 184 ] - xx [ 187 ] ) + xx [ 2 ] ) ; xx [
261 ] = - ( xx [ 173 ] + xx [ 170 ] - ( xx [ 190 ] + xx [ 193 ] - xx [ 198 ]
) + xx [ 43 ] ) ; xx [ 262 ] = - ( xx [ 174 ] + xx [ 172 ] - ( xx [ 191 ] +
xx [ 194 ] - xx [ 199 ] ) - xx [ 44 ] ) ; xx [ 263 ] = - ( xx [ 175 ] + xx [
137 ] - ( xx [ 192 ] + xx [ 195 ] - xx [ 200 ] ) + xx [ 2 ] ) ; xx [ 264 ] =
- ( sm_core_canonicalAngle ( ( state [ 84 ] + sm_core_canonicalAngle ( atan2
( xx [ 349 ] , xx [ 481 ] ) - state [ 84 ] ) - state [ 90 ] ) / xx [ 217 ] +
atan2 ( xx [ 348 ] , xx [ 466 ] ) ) * xx [ 217 ] ) ; xx [ 265 ] = - (
sm_core_canonicalAngle ( ( state [ 86 ] + sm_core_canonicalAngle ( atan2 ( xx
[ 449 ] , xx [ 501 ] ) - state [ 86 ] ) - state [ 91 ] ) / xx [ 217 ] + atan2
( xx [ 439 ] , xx [ 490 ] ) ) * xx [ 217 ] ) ; xx [ 266 ] = - (
sm_core_canonicalAngle ( ( state [ 88 ] + sm_core_canonicalAngle ( atan2 ( xx
[ 467 ] , xx [ 520 ] ) - state [ 88 ] ) - state [ 92 ] ) / xx [ 217 ] + atan2
( xx [ 460 ] , xx [ 509 ] ) ) * xx [ 217 ] ) ; xx [ 6 ] = 1.0e-8 ; memcpy (
xx + 1151 , xx + 521 , 630 * sizeof ( double ) ) ; factorAndSolveWide ( 21 ,
30 , xx + 1151 , xx + 1781 , xx + 1802 , ii + 0 , xx + 246 , xx [ 6 ] , xx +
374 ) ; xx [ 9 ] = state [ 0 ] + xx [ 374 ] ; xx [ 10 ] = xx [ 9 ] * xx [ 0 ]
; xx [ 11 ] = sin ( xx [ 10 ] ) ; xx [ 13 ] = state [ 1 ] + xx [ 375 ] ; xx [
15 ] = xx [ 13 ] * xx [ 0 ] ; xx [ 16 ] = sin ( xx [ 15 ] ) ; xx [ 17 ] = xx
[ 11 ] * xx [ 16 ] ; xx [ 30 ] = state [ 2 ] + xx [ 376 ] ; xx [ 33 ] = xx [
30 ] * xx [ 0 ] ; xx [ 34 ] = sin ( xx [ 33 ] ) ; xx [ 35 ] = cos ( xx [ 33 ]
) ; xx [ 33 ] = cos ( xx [ 10 ] ) ; xx [ 10 ] = cos ( xx [ 15 ] ) ; xx [ 15 ]
= xx [ 33 ] * xx [ 10 ] ; xx [ 39 ] = xx [ 17 ] * xx [ 34 ] - xx [ 35 ] * xx
[ 15 ] ; xx [ 40 ] = xx [ 10 ] * xx [ 11 ] ; xx [ 10 ] = xx [ 33 ] * xx [ 16
] ; xx [ 11 ] = xx [ 35 ] * xx [ 40 ] + xx [ 10 ] * xx [ 34 ] ; xx [ 16 ] = -
xx [ 11 ] ; xx [ 33 ] = xx [ 40 ] * xx [ 34 ] - xx [ 35 ] * xx [ 10 ] ; xx [
10 ] = xx [ 15 ] * xx [ 34 ] + xx [ 35 ] * xx [ 17 ] ; xx [ 15 ] = - xx [ 10
] ; xx [ 80 ] = xx [ 39 ] ; xx [ 81 ] = xx [ 16 ] ; xx [ 82 ] = xx [ 33 ] ;
xx [ 83 ] = xx [ 15 ] ; xx [ 17 ] = xx [ 5 ] - ( xx [ 33 ] * xx [ 33 ] + xx [
10 ] * xx [ 10 ] ) * xx [ 14 ] ; xx [ 40 ] = xx [ 14 ] * ( xx [ 10 ] * xx [
39 ] - xx [ 11 ] * xx [ 33 ] ) ; xx [ 41 ] = xx [ 33 ] * xx [ 39 ] + xx [ 11
] * xx [ 10 ] ; xx [ 98 ] = xx [ 17 ] ; xx [ 99 ] = xx [ 40 ] ; xx [ 100 ] =
xx [ 41 ] * xx [ 14 ] ; pm_math_Vector3_cross_ra ( xx + 98 , xx + 24 , xx +
110 ) ; pm_math_Quaternion_xform_ra ( xx + 80 , xx + 110 , xx + 113 ) ; xx [
110 ] = - ( xx [ 27 ] * xx [ 40 ] ) ; xx [ 111 ] = xx [ 27 ] * xx [ 17 ] - xx
[ 41 ] * xx [ 28 ] ; xx [ 112 ] = xx [ 29 ] * xx [ 40 ] ;
pm_math_Quaternion_xform_ra ( xx + 80 , xx + 110 , xx + 122 ) ; xx [ 17 ] =
xx [ 5 ] - xx [ 14 ] * xx [ 34 ] * xx [ 34 ] ; xx [ 40 ] = xx [ 14 ] * xx [
35 ] * xx [ 34 ] ; xx [ 110 ] = - ( xx [ 23 ] * xx [ 17 ] ) ; xx [ 111 ] = xx
[ 23 ] * xx [ 40 ] ; xx [ 112 ] = xx [ 22 ] * xx [ 40 ] + xx [ 21 ] * xx [ 17
] ; pm_math_Quaternion_xform_ra ( xx + 80 , xx + 110 , xx + 154 ) ; xx [ 110
] = - ( xx [ 27 ] * xx [ 17 ] ) ; xx [ 111 ] = xx [ 27 ] * xx [ 40 ] ; xx [
112 ] = xx [ 29 ] * xx [ 17 ] ; pm_math_Quaternion_xform_ra ( xx + 80 , xx +
110 , xx + 157 ) ; xx [ 110 ] = xx [ 16 ] ; xx [ 111 ] = xx [ 33 ] ; xx [ 112
] = xx [ 15 ] ; xx [ 15 ] = xx [ 10 ] * xx [ 21 ] ; xx [ 16 ] = xx [ 10 ] *
xx [ 22 ] ; xx [ 34 ] = xx [ 11 ] * xx [ 21 ] + xx [ 22 ] * xx [ 33 ] ; xx [
163 ] = - xx [ 15 ] ; xx [ 164 ] = xx [ 16 ] ; xx [ 165 ] = xx [ 34 ] ;
pm_math_Vector3_cross_ra ( xx + 110 , xx + 163 , xx + 172 ) ; xx [ 35 ] = xx
[ 11 ] * xx [ 29 ] ; xx [ 41 ] = xx [ 10 ] * xx [ 29 ] ; xx [ 45 ] = xx [ 14
] * ( xx [ 35 ] * xx [ 33 ] - xx [ 41 ] * xx [ 39 ] ) ;
pm_math_Quaternion_compDeriv_ra ( xx + 70 , xx + 378 , xx + 163 ) ; xx [ 70 ]
= xx [ 56 ] + xx [ 163 ] ; xx [ 56 ] = xx [ 67 ] + xx [ 164 ] ; xx [ 67 ] =
xx [ 68 ] + xx [ 165 ] ; xx [ 68 ] = xx [ 69 ] + xx [ 166 ] ; xx [ 69 ] =
1.0e-64 ; xx [ 71 ] = sqrt ( xx [ 70 ] * xx [ 70 ] + xx [ 56 ] * xx [ 56 ] +
xx [ 67 ] * xx [ 67 ] + xx [ 68 ] * xx [ 68 ] ) ; if ( xx [ 69 ] > xx [ 71 ]
) xx [ 71 ] = xx [ 69 ] ; xx [ 72 ] = xx [ 70 ] / xx [ 71 ] ; xx [ 70 ] = xx
[ 56 ] / xx [ 71 ] ; xx [ 56 ] = xx [ 67 ] / xx [ 71 ] ; xx [ 67 ] = xx [ 68
] / xx [ 71 ] ; xx [ 163 ] = xx [ 72 ] ; xx [ 164 ] = xx [ 70 ] ; xx [ 165 ]
= xx [ 56 ] ; xx [ 166 ] = xx [ 67 ] ; pm_math_Quaternion_composeInverse_ra (
xx + 163 , xx + 74 , xx + 179 ) ; pm_math_Quaternion_compose_ra ( xx + 59 ,
xx + 179 , xx + 190 ) ; pm_math_Quaternion_compose_ra ( xx + 63 , xx + 190 ,
xx + 179 ) ; pm_math_Quaternion_xform_ra ( xx + 179 , xx + 86 , xx + 175 ) ;
pm_math_Quaternion_xform_ra ( xx + 190 , xx + 92 , xx + 194 ) ;
pm_math_Quaternion_xform_ra ( xx + 63 , xx + 194 , xx + 201 ) ;
pm_math_Quaternion_xform_ra ( xx + 179 , xx + 95 , xx + 194 ) ;
pm_math_Quaternion_xform_ra ( xx + 190 , xx + 104 , xx + 204 ) ;
pm_math_Quaternion_xform_ra ( xx + 63 , xx + 204 , xx + 218 ) ;
pm_math_Quaternion_xform_ra ( xx + 179 , xx + 107 , xx + 204 ) ;
pm_math_Quaternion_xform_ra ( xx + 190 , xx + 116 , xx + 224 ) ;
pm_math_Quaternion_xform_ra ( xx + 63 , xx + 224 , xx + 227 ) ; xx [ 68 ] = (
xx [ 10 ] * xx [ 41 ] + xx [ 11 ] * xx [ 35 ] ) * xx [ 14 ] ; xx [ 71 ] = (
xx [ 35 ] * xx [ 39 ] + xx [ 41 ] * xx [ 33 ] ) * xx [ 14 ] ;
pm_math_Vector3_cross_ra ( xx + 98 , xx + 126 , xx + 224 ) ;
pm_math_Quaternion_xform_ra ( xx + 80 , xx + 224 , xx + 98 ) ; xx [ 224 ] = -
( xx [ 125 ] * xx [ 17 ] ) ; xx [ 225 ] = xx [ 125 ] * xx [ 40 ] ; xx [ 226 ]
= xx [ 8 ] * xx [ 17 ] - xx [ 121 ] * xx [ 40 ] ; pm_math_Quaternion_xform_ra
( xx + 80 , xx + 224 , xx + 246 ) ; xx [ 17 ] = xx [ 10 ] * xx [ 8 ] ; xx [
35 ] = xx [ 10 ] * xx [ 121 ] ; xx [ 10 ] = xx [ 121 ] * xx [ 33 ] - xx [ 11
] * xx [ 8 ] ; xx [ 224 ] = - xx [ 17 ] ; xx [ 225 ] = - xx [ 35 ] ; xx [ 226
] = - xx [ 10 ] ; pm_math_Vector3_cross_ra ( xx + 110 , xx + 224 , xx + 249 )
; pm_math_Quaternion_compDeriv_ra ( xx + 150 , xx + 381 , xx + 252 ) ; xx [
40 ] = xx [ 130 ] + xx [ 252 ] ; xx [ 73 ] = xx [ 131 ] + xx [ 253 ] ; xx [
78 ] = xx [ 142 ] + xx [ 254 ] ; xx [ 84 ] = xx [ 143 ] + xx [ 255 ] ; xx [
85 ] = sqrt ( xx [ 40 ] * xx [ 40 ] + xx [ 73 ] * xx [ 73 ] + xx [ 78 ] * xx
[ 78 ] + xx [ 84 ] * xx [ 84 ] ) ; if ( xx [ 69 ] > xx [ 85 ] ) xx [ 85 ] =
xx [ 69 ] ; xx [ 103 ] = xx [ 40 ] / xx [ 85 ] ; xx [ 40 ] = xx [ 73 ] / xx [
85 ] ; xx [ 73 ] = xx [ 78 ] / xx [ 85 ] ; xx [ 78 ] = xx [ 84 ] / xx [ 85 ]
; xx [ 150 ] = xx [ 103 ] ; xx [ 151 ] = xx [ 40 ] ; xx [ 152 ] = xx [ 73 ] ;
xx [ 153 ] = xx [ 78 ] ; pm_math_Quaternion_composeInverse_ra ( xx + 150 , xx
+ 74 , xx + 252 ) ; pm_math_Quaternion_compose_ra ( xx + 59 , xx + 252 , xx +
256 ) ; pm_math_Quaternion_compose_ra ( xx + 146 , xx + 256 , xx + 252 ) ;
pm_math_Quaternion_xform_ra ( xx + 252 , xx + 86 , xx + 224 ) ;
pm_math_Quaternion_xform_ra ( xx + 256 , xx + 92 , xx + 260 ) ;
pm_math_Quaternion_xform_ra ( xx + 146 , xx + 260 , xx + 263 ) ;
pm_math_Quaternion_xform_ra ( xx + 252 , xx + 95 , xx + 260 ) ;
pm_math_Quaternion_xform_ra ( xx + 256 , xx + 104 , xx + 266 ) ;
pm_math_Quaternion_xform_ra ( xx + 146 , xx + 266 , xx + 269 ) ;
pm_math_Quaternion_xform_ra ( xx + 252 , xx + 107 , xx + 266 ) ;
pm_math_Quaternion_xform_ra ( xx + 256 , xx + 116 , xx + 272 ) ;
pm_math_Quaternion_xform_ra ( xx + 146 , xx + 272 , xx + 275 ) ; xx [ 84 ] =
state [ 28 ] + xx [ 384 ] ; xx [ 85 ] = xx [ 84 ] * xx [ 0 ] ; xx [ 130 ] =
sin ( xx [ 85 ] ) ; xx [ 131 ] = state [ 29 ] + xx [ 385 ] ; xx [ 135 ] = xx
[ 131 ] * xx [ 0 ] ; xx [ 137 ] = sin ( xx [ 135 ] ) ; xx [ 142 ] = xx [ 130
] * xx [ 137 ] ; xx [ 143 ] = state [ 30 ] + xx [ 386 ] ; xx [ 169 ] = xx [
143 ] * xx [ 0 ] ; xx [ 170 ] = sin ( xx [ 169 ] ) ; xx [ 183 ] = cos ( xx [
169 ] ) ; xx [ 169 ] = cos ( xx [ 85 ] ) ; xx [ 85 ] = cos ( xx [ 135 ] ) ;
xx [ 135 ] = xx [ 169 ] * xx [ 85 ] ; xx [ 184 ] = xx [ 142 ] * xx [ 170 ] -
xx [ 183 ] * xx [ 135 ] ; xx [ 188 ] = xx [ 135 ] * xx [ 170 ] + xx [ 183 ] *
xx [ 142 ] ; xx [ 135 ] = xx [ 144 ] * xx [ 184 ] - xx [ 188 ] * xx [ 178 ] ;
xx [ 142 ] = xx [ 85 ] * xx [ 130 ] ; xx [ 85 ] = xx [ 169 ] * xx [ 137 ] ;
xx [ 130 ] = xx [ 183 ] * xx [ 142 ] + xx [ 85 ] * xx [ 170 ] ; xx [ 137 ] =
xx [ 142 ] * xx [ 170 ] - xx [ 183 ] * xx [ 85 ] ; xx [ 85 ] = xx [ 130 ] *
xx [ 144 ] - xx [ 178 ] * xx [ 137 ] ; xx [ 142 ] = - xx [ 85 ] ; xx [ 169 ]
= xx [ 144 ] * xx [ 137 ] + xx [ 130 ] * xx [ 178 ] ; xx [ 207 ] = xx [ 178 ]
* xx [ 184 ] + xx [ 188 ] * xx [ 144 ] ; xx [ 208 ] = - xx [ 207 ] ; xx [ 289
] = xx [ 135 ] ; xx [ 290 ] = xx [ 142 ] ; xx [ 291 ] = xx [ 169 ] ; xx [ 292
] = xx [ 208 ] ; xx [ 213 ] = xx [ 5 ] - ( xx [ 137 ] * xx [ 137 ] + xx [ 188
] * xx [ 188 ] ) * xx [ 14 ] ; xx [ 216 ] = xx [ 14 ] * ( xx [ 188 ] * xx [
184 ] - xx [ 130 ] * xx [ 137 ] ) ; xx [ 221 ] = xx [ 137 ] * xx [ 184 ] + xx
[ 130 ] * xx [ 188 ] ; xx [ 272 ] = xx [ 213 ] ; xx [ 273 ] = xx [ 216 ] ; xx
[ 274 ] = xx [ 221 ] * xx [ 14 ] ; pm_math_Vector3_cross_ra ( xx + 272 , xx +
24 , xx + 278 ) ; pm_math_Quaternion_xform_ra ( xx + 289 , xx + 278 , xx +
293 ) ; xx [ 222 ] = - xx [ 130 ] ; xx [ 230 ] = - xx [ 188 ] ; xx [ 296 ] =
xx [ 184 ] ; xx [ 297 ] = xx [ 222 ] ; xx [ 298 ] = xx [ 137 ] ; xx [ 299 ] =
xx [ 230 ] ; xx [ 278 ] = - ( xx [ 27 ] * xx [ 216 ] ) ; xx [ 279 ] = xx [ 27
] * xx [ 213 ] - xx [ 221 ] * xx [ 28 ] ; xx [ 280 ] = xx [ 29 ] * xx [ 216 ]
; pm_math_Quaternion_xform_ra ( xx + 296 , xx + 278 , xx + 300 ) ; xx [ 213 ]
= xx [ 178 ] * xx [ 300 ] ; xx [ 216 ] = xx [ 178 ] * xx [ 301 ] ; xx [ 221 ]
= ( xx [ 178 ] * xx [ 213 ] - xx [ 144 ] * xx [ 216 ] ) * xx [ 14 ] - xx [
300 ] ; xx [ 231 ] = xx [ 5 ] - xx [ 14 ] * xx [ 170 ] * xx [ 170 ] ; xx [
236 ] = xx [ 14 ] * xx [ 183 ] * xx [ 170 ] ; xx [ 278 ] = - ( xx [ 23 ] * xx
[ 231 ] ) ; xx [ 279 ] = xx [ 23 ] * xx [ 236 ] ; xx [ 280 ] = xx [ 22 ] * xx
[ 236 ] + xx [ 21 ] * xx [ 231 ] ; pm_math_Quaternion_xform_ra ( xx + 289 ,
xx + 278 , xx + 303 ) ; xx [ 278 ] = - ( xx [ 27 ] * xx [ 231 ] ) ; xx [ 279
] = xx [ 27 ] * xx [ 236 ] ; xx [ 280 ] = xx [ 29 ] * xx [ 231 ] ;
pm_math_Quaternion_xform_ra ( xx + 296 , xx + 278 , xx + 306 ) ; xx [ 170 ] =
xx [ 178 ] * xx [ 306 ] ; xx [ 183 ] = xx [ 178 ] * xx [ 307 ] ; xx [ 241 ] =
( xx [ 178 ] * xx [ 170 ] - xx [ 144 ] * xx [ 183 ] ) * xx [ 14 ] - xx [ 306
] ; xx [ 278 ] = xx [ 142 ] ; xx [ 279 ] = xx [ 169 ] ; xx [ 280 ] = xx [ 208
] ; xx [ 142 ] = xx [ 21 ] * xx [ 207 ] ; xx [ 208 ] = xx [ 22 ] * xx [ 207 ]
; xx [ 296 ] = xx [ 85 ] * xx [ 21 ] + xx [ 22 ] * xx [ 169 ] ; xx [ 297 ] =
- xx [ 142 ] ; xx [ 298 ] = xx [ 208 ] ; xx [ 299 ] = xx [ 296 ] ;
pm_math_Vector3_cross_ra ( xx + 278 , xx + 297 , xx + 310 ) ; xx [ 297 ] = xx
[ 130 ] * xx [ 29 ] ; xx [ 298 ] = xx [ 188 ] * xx [ 29 ] ; xx [ 299 ] = xx [
14 ] * ( xx [ 297 ] * xx [ 137 ] - xx [ 298 ] * xx [ 184 ] ) ; xx [ 313 ] =
xx [ 178 ] * xx [ 299 ] ; xx [ 314 ] = ( xx [ 188 ] * xx [ 298 ] + xx [ 130 ]
* xx [ 297 ] ) * xx [ 14 ] - xx [ 29 ] ; xx [ 188 ] = xx [ 178 ] * xx [ 314 ]
; xx [ 315 ] = ( xx [ 178 ] * xx [ 313 ] - xx [ 144 ] * xx [ 188 ] ) * xx [
14 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 237 , xx + 388 , xx + 316 ) ;
xx [ 320 ] = xx [ 237 ] + xx [ 316 ] ; xx [ 237 ] = xx [ 238 ] + xx [ 317 ] ;
xx [ 238 ] = xx [ 239 ] + xx [ 318 ] ; xx [ 239 ] = xx [ 240 ] + xx [ 319 ] ;
xx [ 240 ] = sqrt ( xx [ 320 ] * xx [ 320 ] + xx [ 237 ] * xx [ 237 ] + xx [
238 ] * xx [ 238 ] + xx [ 239 ] * xx [ 239 ] ) ; if ( xx [ 69 ] > xx [ 240 ]
) xx [ 240 ] = xx [ 69 ] ; xx [ 316 ] = xx [ 320 ] / xx [ 240 ] ; xx [ 317 ]
= xx [ 237 ] / xx [ 240 ] ; xx [ 237 ] = xx [ 238 ] / xx [ 240 ] ; xx [ 238 ]
= xx [ 239 ] / xx [ 240 ] ; xx [ 318 ] = xx [ 316 ] ; xx [ 319 ] = xx [ 317 ]
; xx [ 320 ] = xx [ 237 ] ; xx [ 321 ] = xx [ 238 ] ;
pm_math_Quaternion_composeInverse_ra ( xx + 318 , xx + 74 , xx + 324 ) ;
pm_math_Quaternion_compose_ra ( xx + 59 , xx + 324 , xx + 328 ) ;
pm_math_Quaternion_compose_ra ( xx + 242 , xx + 328 , xx + 324 ) ;
pm_math_Quaternion_xform_ra ( xx + 324 , xx + 86 , xx + 332 ) ;
pm_math_Quaternion_xform_ra ( xx + 328 , xx + 92 , xx + 342 ) ;
pm_math_Quaternion_xform_ra ( xx + 242 , xx + 342 , xx + 345 ) ;
pm_math_Quaternion_xform_ra ( xx + 324 , xx + 95 , xx + 342 ) ;
pm_math_Quaternion_xform_ra ( xx + 328 , xx + 104 , xx + 348 ) ;
pm_math_Quaternion_xform_ra ( xx + 242 , xx + 348 , xx + 353 ) ;
pm_math_Quaternion_xform_ra ( xx + 324 , xx + 107 , xx + 348 ) ;
pm_math_Quaternion_xform_ra ( xx + 328 , xx + 116 , xx + 356 ) ;
pm_math_Quaternion_xform_ra ( xx + 242 , xx + 356 , xx + 404 ) ; xx [ 239 ] =
xx [ 14 ] * ( xx [ 178 ] * xx [ 216 ] + xx [ 144 ] * xx [ 213 ] ) - xx [ 301
] ; xx [ 213 ] = xx [ 14 ] * ( xx [ 178 ] * xx [ 183 ] + xx [ 144 ] * xx [
170 ] ) - xx [ 307 ] ; xx [ 170 ] = xx [ 14 ] * ( xx [ 178 ] * xx [ 188 ] +
xx [ 144 ] * xx [ 313 ] ) ; xx [ 183 ] = ( xx [ 297 ] * xx [ 184 ] + xx [ 298
] * xx [ 137 ] ) * xx [ 14 ] ; pm_math_Vector3_cross_ra ( xx + 272 , xx + 126
, xx + 356 ) ; pm_math_Quaternion_xform_ra ( xx + 289 , xx + 356 , xx + 272 )
; xx [ 356 ] = - ( xx [ 125 ] * xx [ 231 ] ) ; xx [ 357 ] = xx [ 125 ] * xx [
236 ] ; xx [ 358 ] = xx [ 8 ] * xx [ 231 ] - xx [ 121 ] * xx [ 236 ] ;
pm_math_Quaternion_xform_ra ( xx + 289 , xx + 356 , xx + 417 ) ; xx [ 188 ] =
xx [ 8 ] * xx [ 207 ] ; xx [ 216 ] = xx [ 121 ] * xx [ 207 ] ; xx [ 207 ] =
xx [ 121 ] * xx [ 169 ] - xx [ 85 ] * xx [ 8 ] ; xx [ 356 ] = - xx [ 188 ] ;
xx [ 357 ] = - xx [ 216 ] ; xx [ 358 ] = - xx [ 207 ] ;
pm_math_Vector3_cross_ra ( xx + 278 , xx + 356 , xx + 420 ) ;
pm_math_Quaternion_compDeriv_ra ( xx + 281 , xx + 391 , xx + 356 ) ; xx [ 85
] = xx [ 189 ] + xx [ 356 ] ; xx [ 169 ] = xx [ 197 ] + xx [ 357 ] ; xx [ 189
] = xx [ 214 ] + xx [ 358 ] ; xx [ 197 ] = xx [ 215 ] + xx [ 359 ] ; xx [ 214
] = sqrt ( xx [ 85 ] * xx [ 85 ] + xx [ 169 ] * xx [ 169 ] + xx [ 189 ] * xx
[ 189 ] + xx [ 197 ] * xx [ 197 ] ) ; if ( xx [ 69 ] > xx [ 214 ] ) xx [ 214
] = xx [ 69 ] ; xx [ 215 ] = xx [ 85 ] / xx [ 214 ] ; xx [ 85 ] = xx [ 169 ]
/ xx [ 214 ] ; xx [ 169 ] = xx [ 189 ] / xx [ 214 ] ; xx [ 189 ] = xx [ 197 ]
/ xx [ 214 ] ; xx [ 278 ] = xx [ 215 ] ; xx [ 279 ] = xx [ 85 ] ; xx [ 280 ]
= xx [ 169 ] ; xx [ 281 ] = xx [ 189 ] ; pm_math_Quaternion_composeInverse_ra
( xx + 278 , xx + 74 , xx + 356 ) ; pm_math_Quaternion_compose_ra ( xx + 59 ,
xx + 356 , xx + 423 ) ; pm_math_Quaternion_compose_ra ( xx + 285 , xx + 423 ,
xx + 356 ) ; pm_math_Quaternion_xform_ra ( xx + 356 , xx + 86 , xx + 282 ) ;
pm_math_Quaternion_xform_ra ( xx + 423 , xx + 92 , xx + 427 ) ;
pm_math_Quaternion_xform_ra ( xx + 285 , xx + 427 , xx + 430 ) ;
pm_math_Quaternion_xform_ra ( xx + 356 , xx + 95 , xx + 427 ) ;
pm_math_Quaternion_xform_ra ( xx + 423 , xx + 104 , xx + 433 ) ;
pm_math_Quaternion_xform_ra ( xx + 285 , xx + 433 , xx + 439 ) ;
pm_math_Quaternion_xform_ra ( xx + 356 , xx + 107 , xx + 433 ) ;
pm_math_Quaternion_xform_ra ( xx + 423 , xx + 116 , xx + 479 ) ;
pm_math_Quaternion_xform_ra ( xx + 285 , xx + 479 , xx + 501 ) ; xx [ 197 ] =
state [ 56 ] + xx [ 394 ] ; xx [ 214 ] = xx [ 197 ] * xx [ 0 ] ; xx [ 231 ] =
sin ( xx [ 214 ] ) ; xx [ 236 ] = state [ 57 ] + xx [ 395 ] ; xx [ 240 ] = xx
[ 236 ] * xx [ 0 ] ; xx [ 297 ] = sin ( xx [ 240 ] ) ; xx [ 300 ] = xx [ 231
] * xx [ 297 ] ; xx [ 301 ] = state [ 58 ] + xx [ 396 ] ; xx [ 306 ] = xx [
301 ] * xx [ 0 ] ; xx [ 307 ] = sin ( xx [ 306 ] ) ; xx [ 313 ] = cos ( xx [
306 ] ) ; xx [ 306 ] = cos ( xx [ 214 ] ) ; xx [ 214 ] = cos ( xx [ 240 ] ) ;
xx [ 240 ] = xx [ 306 ] * xx [ 214 ] ; xx [ 322 ] = xx [ 300 ] * xx [ 307 ] -
xx [ 313 ] * xx [ 240 ] ; xx [ 339 ] = xx [ 240 ] * xx [ 307 ] + xx [ 313 ] *
xx [ 300 ] ; xx [ 240 ] = xx [ 145 ] * xx [ 322 ] + xx [ 339 ] * xx [ 223 ] ;
xx [ 300 ] = xx [ 214 ] * xx [ 231 ] ; xx [ 214 ] = xx [ 306 ] * xx [ 297 ] ;
xx [ 231 ] = xx [ 313 ] * xx [ 300 ] + xx [ 214 ] * xx [ 307 ] ; xx [ 297 ] =
xx [ 300 ] * xx [ 307 ] - xx [ 313 ] * xx [ 214 ] ; xx [ 214 ] = xx [ 231 ] *
xx [ 145 ] + xx [ 223 ] * xx [ 297 ] ; xx [ 300 ] = xx [ 231 ] * xx [ 223 ] -
xx [ 145 ] * xx [ 297 ] ; xx [ 306 ] = xx [ 339 ] * xx [ 145 ] - xx [ 223 ] *
xx [ 322 ] ; xx [ 509 ] = - xx [ 240 ] ; xx [ 510 ] = xx [ 214 ] ; xx [ 511 ]
= xx [ 300 ] ; xx [ 512 ] = xx [ 306 ] ; xx [ 351 ] = xx [ 5 ] - ( xx [ 297 ]
* xx [ 297 ] + xx [ 339 ] * xx [ 339 ] ) * xx [ 14 ] ; xx [ 364 ] = xx [ 14 ]
* ( xx [ 339 ] * xx [ 322 ] - xx [ 231 ] * xx [ 297 ] ) ; xx [ 407 ] = xx [
297 ] * xx [ 322 ] + xx [ 231 ] * xx [ 339 ] ; xx [ 479 ] = xx [ 351 ] ; xx [
480 ] = xx [ 364 ] ; xx [ 481 ] = xx [ 407 ] * xx [ 14 ] ;
pm_math_Vector3_cross_ra ( xx + 479 , xx + 24 , xx + 517 ) ;
pm_math_Quaternion_xform_ra ( xx + 509 , xx + 517 , xx + 520 ) ; xx [ 408 ] =
- xx [ 231 ] ; xx [ 436 ] = - xx [ 339 ] ; xx [ 523 ] = xx [ 322 ] ; xx [ 524
] = xx [ 408 ] ; xx [ 525 ] = xx [ 297 ] ; xx [ 526 ] = xx [ 436 ] ; xx [ 517
] = - ( xx [ 27 ] * xx [ 364 ] ) ; xx [ 518 ] = xx [ 27 ] * xx [ 351 ] - xx [
407 ] * xx [ 28 ] ; xx [ 519 ] = xx [ 29 ] * xx [ 364 ] ;
pm_math_Quaternion_xform_ra ( xx + 523 , xx + 517 , xx + 527 ) ; xx [ 351 ] =
xx [ 223 ] * xx [ 528 ] ; xx [ 364 ] = xx [ 223 ] * xx [ 527 ] ; xx [ 407 ] =
( xx [ 145 ] * xx [ 351 ] + xx [ 223 ] * xx [ 364 ] ) * xx [ 14 ] - xx [ 527
] ; xx [ 442 ] = xx [ 5 ] - xx [ 14 ] * xx [ 307 ] * xx [ 307 ] ; xx [ 449 ]
= xx [ 14 ] * xx [ 313 ] * xx [ 307 ] ; xx [ 517 ] = - ( xx [ 23 ] * xx [ 442
] ) ; xx [ 518 ] = xx [ 23 ] * xx [ 449 ] ; xx [ 519 ] = xx [ 22 ] * xx [ 449
] + xx [ 21 ] * xx [ 442 ] ; pm_math_Quaternion_xform_ra ( xx + 509 , xx +
517 , xx + 530 ) ; xx [ 517 ] = - ( xx [ 27 ] * xx [ 442 ] ) ; xx [ 518 ] =
xx [ 27 ] * xx [ 449 ] ; xx [ 519 ] = xx [ 29 ] * xx [ 442 ] ;
pm_math_Quaternion_xform_ra ( xx + 523 , xx + 517 , xx + 533 ) ; xx [ 307 ] =
xx [ 223 ] * xx [ 534 ] ; xx [ 313 ] = xx [ 223 ] * xx [ 533 ] ; xx [ 455 ] =
( xx [ 145 ] * xx [ 307 ] + xx [ 223 ] * xx [ 313 ] ) * xx [ 14 ] - xx [ 533
] ; xx [ 517 ] = xx [ 214 ] ; xx [ 518 ] = xx [ 300 ] ; xx [ 519 ] = xx [ 306
] ; xx [ 459 ] = xx [ 21 ] * xx [ 306 ] ; xx [ 460 ] = xx [ 22 ] * xx [ 306 ]
; xx [ 462 ] = xx [ 214 ] * xx [ 21 ] - xx [ 22 ] * xx [ 300 ] ; xx [ 523 ] =
xx [ 459 ] ; xx [ 524 ] = - xx [ 460 ] ; xx [ 525 ] = - xx [ 462 ] ;
pm_math_Vector3_cross_ra ( xx + 517 , xx + 523 , xx + 536 ) ; xx [ 466 ] = xx
[ 339 ] * xx [ 29 ] ; xx [ 467 ] = xx [ 231 ] * xx [ 29 ] ; xx [ 484 ] = ( xx
[ 339 ] * xx [ 466 ] + xx [ 231 ] * xx [ 467 ] ) * xx [ 14 ] - xx [ 29 ] ; xx
[ 339 ] = xx [ 223 ] * xx [ 484 ] ; xx [ 485 ] = xx [ 14 ] * ( xx [ 467 ] *
xx [ 297 ] - xx [ 466 ] * xx [ 322 ] ) ; xx [ 490 ] = xx [ 223 ] * xx [ 485 ]
; xx [ 498 ] = ( xx [ 145 ] * xx [ 339 ] + xx [ 223 ] * xx [ 490 ] ) * xx [
14 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 365 , xx + 398 , xx + 523 ) ;
xx [ 499 ] = xx [ 365 ] + xx [ 523 ] ; xx [ 365 ] = xx [ 366 ] + xx [ 524 ] ;
xx [ 366 ] = xx [ 367 ] + xx [ 525 ] ; xx [ 367 ] = xx [ 368 ] + xx [ 526 ] ;
xx [ 368 ] = sqrt ( xx [ 499 ] * xx [ 499 ] + xx [ 365 ] * xx [ 365 ] + xx [
366 ] * xx [ 366 ] + xx [ 367 ] * xx [ 367 ] ) ; if ( xx [ 69 ] > xx [ 368 ]
) xx [ 368 ] = xx [ 69 ] ; xx [ 504 ] = xx [ 499 ] / xx [ 368 ] ; xx [ 499 ]
= xx [ 365 ] / xx [ 368 ] ; xx [ 365 ] = xx [ 366 ] / xx [ 368 ] ; xx [ 366 ]
= xx [ 367 ] / xx [ 368 ] ; xx [ 523 ] = xx [ 504 ] ; xx [ 524 ] = xx [ 499 ]
; xx [ 525 ] = xx [ 365 ] ; xx [ 526 ] = xx [ 366 ] ;
pm_math_Quaternion_composeInverse_ra ( xx + 523 , xx + 74 , xx + 539 ) ;
pm_math_Quaternion_compose_ra ( xx + 59 , xx + 539 , xx + 543 ) ;
pm_math_Quaternion_compose_ra ( xx + 370 , xx + 543 , xx + 539 ) ;
pm_math_Quaternion_xform_ra ( xx + 539 , xx + 86 , xx + 547 ) ;
pm_math_Quaternion_xform_ra ( xx + 543 , xx + 92 , xx + 550 ) ;
pm_math_Quaternion_xform_ra ( xx + 370 , xx + 550 , xx + 553 ) ;
pm_math_Quaternion_xform_ra ( xx + 539 , xx + 95 , xx + 550 ) ;
pm_math_Quaternion_xform_ra ( xx + 543 , xx + 104 , xx + 556 ) ;
pm_math_Quaternion_xform_ra ( xx + 370 , xx + 556 , xx + 559 ) ;
pm_math_Quaternion_xform_ra ( xx + 539 , xx + 107 , xx + 556 ) ;
pm_math_Quaternion_xform_ra ( xx + 543 , xx + 116 , xx + 562 ) ;
pm_math_Quaternion_xform_ra ( xx + 370 , xx + 562 , xx + 565 ) ; xx [ 367 ] =
xx [ 14 ] * ( xx [ 223 ] * xx [ 351 ] - xx [ 145 ] * xx [ 364 ] ) - xx [ 528
] ; xx [ 351 ] = xx [ 14 ] * ( xx [ 223 ] * xx [ 307 ] - xx [ 145 ] * xx [
313 ] ) - xx [ 534 ] ; xx [ 307 ] = xx [ 14 ] * ( xx [ 223 ] * xx [ 339 ] -
xx [ 145 ] * xx [ 490 ] ) ; xx [ 313 ] = ( xx [ 467 ] * xx [ 322 ] + xx [ 466
] * xx [ 297 ] ) * xx [ 14 ] ; pm_math_Vector3_cross_ra ( xx + 479 , xx + 126
, xx + 562 ) ; pm_math_Quaternion_xform_ra ( xx + 509 , xx + 562 , xx + 479 )
; xx [ 562 ] = - ( xx [ 125 ] * xx [ 442 ] ) ; xx [ 563 ] = xx [ 125 ] * xx [
449 ] ; xx [ 564 ] = xx [ 8 ] * xx [ 442 ] - xx [ 121 ] * xx [ 449 ] ;
pm_math_Quaternion_xform_ra ( xx + 509 , xx + 562 , xx + 568 ) ; xx [ 339 ] =
xx [ 8 ] * xx [ 306 ] ; xx [ 364 ] = xx [ 121 ] * xx [ 306 ] ; xx [ 306 ] =
xx [ 214 ] * xx [ 8 ] + xx [ 121 ] * xx [ 300 ] ; xx [ 562 ] = xx [ 339 ] ;
xx [ 563 ] = xx [ 364 ] ; xx [ 564 ] = - xx [ 306 ] ;
pm_math_Vector3_cross_ra ( xx + 517 , xx + 562 , xx + 571 ) ;
pm_math_Quaternion_compDeriv_ra ( xx + 409 , xx + 401 , xx + 574 ) ; xx [ 214
] = xx [ 309 ] + xx [ 574 ] ; xx [ 300 ] = xx [ 323 ] + xx [ 575 ] ; xx [ 309
] = xx [ 340 ] + xx [ 576 ] ; xx [ 323 ] = xx [ 341 ] + xx [ 577 ] ; xx [ 340
] = sqrt ( xx [ 214 ] * xx [ 214 ] + xx [ 300 ] * xx [ 300 ] + xx [ 309 ] *
xx [ 309 ] + xx [ 323 ] * xx [ 323 ] ) ; if ( xx [ 69 ] > xx [ 340 ] ) xx [
340 ] = xx [ 69 ] ; xx [ 341 ] = xx [ 214 ] / xx [ 340 ] ; xx [ 214 ] = xx [
300 ] / xx [ 340 ] ; xx [ 300 ] = xx [ 309 ] / xx [ 340 ] ; xx [ 309 ] = xx [
323 ] / xx [ 340 ] ; xx [ 409 ] = xx [ 341 ] ; xx [ 410 ] = xx [ 214 ] ; xx [
411 ] = xx [ 300 ] ; xx [ 412 ] = xx [ 309 ] ;
pm_math_Quaternion_composeInverse_ra ( xx + 409 , xx + 74 , xx + 574 ) ;
pm_math_Quaternion_compose_ra ( xx + 59 , xx + 574 , xx + 578 ) ;
pm_math_Quaternion_compose_ra ( xx + 413 , xx + 578 , xx + 574 ) ;
pm_math_Quaternion_xform_ra ( xx + 574 , xx + 86 , xx + 517 ) ;
pm_math_Quaternion_xform_ra ( xx + 578 , xx + 92 , xx + 562 ) ;
pm_math_Quaternion_xform_ra ( xx + 413 , xx + 562 , xx + 582 ) ;
pm_math_Quaternion_xform_ra ( xx + 574 , xx + 95 , xx + 562 ) ;
pm_math_Quaternion_xform_ra ( xx + 578 , xx + 104 , xx + 585 ) ;
pm_math_Quaternion_xform_ra ( xx + 413 , xx + 585 , xx + 588 ) ;
pm_math_Quaternion_xform_ra ( xx + 574 , xx + 107 , xx + 585 ) ;
pm_math_Quaternion_xform_ra ( xx + 578 , xx + 116 , xx + 591 ) ;
pm_math_Quaternion_xform_ra ( xx + 413 , xx + 591 , xx + 594 ) ; xx [ 323 ] =
state [ 6 ] + xx [ 377 ] ; xx [ 340 ] = xx [ 323 ] * xx [ 0 ] ; xx [ 368 ] =
cos ( xx [ 340 ] ) ; xx [ 442 ] = sin ( xx [ 340 ] ) ; xx [ 340 ] = xx [ 352
] * xx [ 442 ] ; xx [ 449 ] = xx [ 368 ] * xx [ 340 ] ; xx [ 467 ] = xx [ 437
] * xx [ 442 ] ; xx [ 490 ] = xx [ 467 ] * xx [ 442 ] ; xx [ 505 ] = xx [ 14
] * ( xx [ 449 ] + xx [ 490 ] ) ; xx [ 513 ] = xx [ 505 ] - xx [ 505 ] + xx [
444 ] - xx [ 452 ] ; xx [ 505 ] = xx [ 368 ] * xx [ 467 ] ; xx [ 467 ] = xx [
340 ] * xx [ 442 ] ; xx [ 340 ] = ( xx [ 505 ] - xx [ 467 ] ) * xx [ 14 ] ;
xx [ 527 ] = xx [ 340 ] - xx [ 340 ] - xx [ 456 ] - xx [ 458 ] ; xx [ 591 ] =
xx [ 513 ] ; xx [ 592 ] = xx [ 447 ] ; xx [ 593 ] = xx [ 527 ] ; xx [ 340 ] =
pm_math_Vector3_dot_ra ( xx + 591 , xx + 463 ) ; xx [ 528 ] = xx [ 469 ] * xx
[ 442 ] ; xx [ 533 ] = xx [ 471 ] * xx [ 442 ] ; xx [ 534 ] = xx [ 468 ] - (
( xx [ 368 ] * xx [ 528 ] + xx [ 533 ] * xx [ 442 ] ) * xx [ 14 ] - ( xx [
449 ] + xx [ 490 ] ) * xx [ 14 ] ) ; xx [ 449 ] = xx [ 14 ] * ( xx [ 467 ] -
xx [ 505 ] ) + xx [ 14 ] * ( xx [ 368 ] * xx [ 533 ] - xx [ 528 ] * xx [ 442
] ) + xx [ 369 ] ; xx [ 467 ] = pm_math_Vector3_dot_ra ( xx + 591 , xx + 474
) ; xx [ 490 ] = xx [ 340 ] * xx [ 340 ] + xx [ 467 ] * xx [ 467 ] ; xx [ 490
] = xx [ 490 ] == 0.0 ? 0.0 : ( xx [ 340 ] * ( xx [ 448 ] * xx [ 534 ] - xx [
449 ] * xx [ 438 ] ) - xx [ 467 ] * ( xx [ 449 ] * xx [ 454 ] - xx [ 450 ] *
xx [ 534 ] ) ) / xx [ 490 ] ; xx [ 438 ] = xx [ 446 ] * xx [ 442 ] ; xx [ 448
] = xx [ 438 ] * xx [ 438 ] ; xx [ 450 ] = xx [ 5 ] - ( xx [ 448 ] + xx [ 448
] ) * xx [ 14 ] ; xx [ 454 ] = xx [ 446 ] * xx [ 368 ] ; xx [ 505 ] = xx [
454 ] * xx [ 438 ] ; xx [ 438 ] = ( xx [ 505 ] + xx [ 505 ] ) * xx [ 14 ] ;
xx [ 597 ] = xx [ 450 ] ; xx [ 598 ] = xx [ 14 ] * ( xx [ 505 ] - xx [ 505 ]
) ; xx [ 599 ] = - xx [ 438 ] ; xx [ 528 ] = pm_math_Vector3_dot_ra ( xx +
591 , xx + 597 ) ; xx [ 533 ] = xx [ 454 ] * xx [ 454 ] ; xx [ 454 ] = xx [
14 ] * ( xx [ 448 ] - xx [ 533 ] ) ; xx [ 597 ] = ( xx [ 505 ] + xx [ 505 ] )
* xx [ 14 ] ; xx [ 505 ] = xx [ 14 ] * xx [ 442 ] * xx [ 442 ] - xx [ 5 ] ;
xx [ 598 ] = xx [ 14 ] * xx [ 368 ] * xx [ 442 ] ; xx [ 599 ] = - xx [ 597 ]
; xx [ 600 ] = xx [ 5 ] - ( xx [ 448 ] + xx [ 533 ] ) * xx [ 14 ] ; xx [ 601
] = xx [ 454 ] ; xx [ 368 ] = pm_math_Vector3_dot_ra ( xx + 591 , xx + 599 )
; xx [ 442 ] = xx [ 528 ] * xx [ 528 ] + xx [ 368 ] * xx [ 368 ] ; xx [ 442 ]
= xx [ 442 ] == 0.0 ? 0.0 : ( xx [ 528 ] * ( xx [ 454 ] * xx [ 534 ] - xx [
449 ] * xx [ 597 ] + xx [ 505 ] * xx [ 513 ] + xx [ 598 ] * xx [ 527 ] ) - xx
[ 368 ] * ( xx [ 449 ] * xx [ 450 ] - xx [ 438 ] * xx [ 534 ] + xx [ 505 ] *
xx [ 527 ] - xx [ 598 ] * xx [ 513 ] ) ) / xx [ 442 ] ; xx [ 438 ] = state [
34 ] + xx [ 387 ] ; xx [ 448 ] = xx [ 438 ] * xx [ 0 ] ; xx [ 449 ] = cos (
xx [ 448 ] ) ; xx [ 450 ] = sin ( xx [ 448 ] ) ; xx [ 448 ] = xx [ 453 ] * xx
[ 450 ] ; xx [ 454 ] = xx [ 449 ] * xx [ 448 ] ; xx [ 505 ] = xx [ 437 ] * xx
[ 450 ] ; xx [ 513 ] = xx [ 505 ] * xx [ 450 ] ; xx [ 527 ] = xx [ 14 ] * (
xx [ 454 ] + xx [ 513 ] ) ; xx [ 533 ] = xx [ 527 ] - xx [ 527 ] + xx [ 444 ]
- xx [ 478 ] ; xx [ 527 ] = xx [ 449 ] * xx [ 505 ] ; xx [ 505 ] = xx [ 448 ]
* xx [ 450 ] ; xx [ 448 ] = ( xx [ 527 ] - xx [ 505 ] ) * xx [ 14 ] ; xx [
534 ] = xx [ 448 ] - xx [ 448 ] - xx [ 456 ] - xx [ 482 ] ; xx [ 591 ] = xx [
533 ] ; xx [ 592 ] = xx [ 470 ] ; xx [ 593 ] = xx [ 534 ] ; xx [ 448 ] =
pm_math_Vector3_dot_ra ( xx + 591 , xx + 487 ) ; xx [ 597 ] = xx [ 352 ] * xx
[ 450 ] ; xx [ 598 ] = xx [ 471 ] * xx [ 450 ] ; xx [ 599 ] = xx [ 468 ] - (
( xx [ 449 ] * xx [ 597 ] + xx [ 598 ] * xx [ 450 ] ) * xx [ 14 ] - ( xx [
454 ] + xx [ 513 ] ) * xx [ 14 ] ) ; xx [ 454 ] = xx [ 14 ] * ( xx [ 505 ] -
xx [ 527 ] ) + xx [ 14 ] * ( xx [ 449 ] * xx [ 598 ] - xx [ 597 ] * xx [ 450
] ) + xx [ 369 ] ; xx [ 505 ] = pm_math_Vector3_dot_ra ( xx + 591 , xx + 495
) ; xx [ 513 ] = xx [ 448 ] * xx [ 448 ] + xx [ 505 ] * xx [ 505 ] ; xx [ 513
] = xx [ 513 ] == 0.0 ? 0.0 : ( xx [ 448 ] * ( xx [ 472 ] * xx [ 599 ] - xx [
454 ] * xx [ 461 ] ) - xx [ 505 ] * ( xx [ 454 ] * xx [ 473 ] - xx [ 477 ] *
xx [ 599 ] ) ) / xx [ 513 ] ; xx [ 461 ] = xx [ 446 ] * xx [ 450 ] ; xx [ 472
] = xx [ 461 ] * xx [ 461 ] ; xx [ 473 ] = xx [ 5 ] - ( xx [ 472 ] + xx [ 472
] ) * xx [ 14 ] ; xx [ 477 ] = xx [ 446 ] * xx [ 449 ] ; xx [ 527 ] = xx [
477 ] * xx [ 461 ] ; xx [ 461 ] = ( xx [ 527 ] + xx [ 527 ] ) * xx [ 14 ] ;
xx [ 600 ] = xx [ 473 ] ; xx [ 601 ] = xx [ 14 ] * ( xx [ 527 ] - xx [ 527 ]
) ; xx [ 602 ] = - xx [ 461 ] ; xx [ 597 ] = pm_math_Vector3_dot_ra ( xx +
591 , xx + 600 ) ; xx [ 598 ] = xx [ 477 ] * xx [ 477 ] ; xx [ 477 ] = xx [
14 ] * ( xx [ 472 ] - xx [ 598 ] ) ; xx [ 600 ] = ( xx [ 527 ] + xx [ 527 ] )
* xx [ 14 ] ; xx [ 527 ] = xx [ 14 ] * xx [ 450 ] * xx [ 450 ] - xx [ 5 ] ;
xx [ 601 ] = xx [ 14 ] * xx [ 449 ] * xx [ 450 ] ; xx [ 602 ] = - xx [ 600 ]
; xx [ 603 ] = xx [ 5 ] - ( xx [ 472 ] + xx [ 598 ] ) * xx [ 14 ] ; xx [ 604
] = xx [ 477 ] ; xx [ 449 ] = pm_math_Vector3_dot_ra ( xx + 591 , xx + 602 )
; xx [ 450 ] = xx [ 597 ] * xx [ 597 ] + xx [ 449 ] * xx [ 449 ] ; xx [ 450 ]
= xx [ 450 ] == 0.0 ? 0.0 : ( xx [ 597 ] * ( xx [ 477 ] * xx [ 599 ] - xx [
454 ] * xx [ 600 ] + xx [ 527 ] * xx [ 533 ] + xx [ 601 ] * xx [ 534 ] ) - xx
[ 449 ] * ( xx [ 454 ] * xx [ 473 ] - xx [ 461 ] * xx [ 599 ] + xx [ 527 ] *
xx [ 534 ] - xx [ 601 ] * xx [ 533 ] ) ) / xx [ 450 ] ; xx [ 374 ] = state [
62 ] + xx [ 397 ] ; xx [ 375 ] = xx [ 374 ] * xx [ 0 ] ; xx [ 376 ] = cos (
xx [ 375 ] ) ; xx [ 377 ] = sin ( xx [ 375 ] ) ; xx [ 375 ] = xx [ 453 ] * xx
[ 377 ] ; xx [ 378 ] = xx [ 376 ] * xx [ 375 ] ; xx [ 379 ] = xx [ 437 ] * xx
[ 377 ] ; xx [ 380 ] = xx [ 379 ] * xx [ 377 ] ; xx [ 381 ] = xx [ 14 ] * (
xx [ 378 ] + xx [ 380 ] ) ; xx [ 382 ] = xx [ 381 ] - xx [ 381 ] + xx [ 444 ]
- xx [ 494 ] ; xx [ 381 ] = xx [ 376 ] * xx [ 379 ] ; xx [ 379 ] = xx [ 375 ]
* xx [ 377 ] ; xx [ 375 ] = ( xx [ 381 ] - xx [ 379 ] ) * xx [ 14 ] ; xx [
383 ] = xx [ 375 ] - xx [ 375 ] - xx [ 456 ] - xx [ 500 ] ; xx [ 384 ] = xx [
382 ] ; xx [ 385 ] = xx [ 486 ] ; xx [ 386 ] = xx [ 383 ] ; xx [ 375 ] =
pm_math_Vector3_dot_ra ( xx + 384 , xx + 506 ) ; xx [ 387 ] = xx [ 352 ] * xx
[ 377 ] ; xx [ 388 ] = xx [ 471 ] * xx [ 377 ] ; xx [ 389 ] = xx [ 468 ] - (
( xx [ 376 ] * xx [ 387 ] + xx [ 388 ] * xx [ 377 ] ) * xx [ 14 ] - ( xx [
378 ] + xx [ 380 ] ) * xx [ 14 ] ) ; xx [ 378 ] = xx [ 14 ] * ( xx [ 379 ] -
xx [ 381 ] ) + xx [ 14 ] * ( xx [ 376 ] * xx [ 388 ] - xx [ 387 ] * xx [ 377
] ) + xx [ 369 ] ; xx [ 379 ] = pm_math_Vector3_dot_ra ( xx + 384 , xx + 514
) ; xx [ 380 ] = xx [ 375 ] * xx [ 375 ] + xx [ 379 ] * xx [ 379 ] ; xx [ 380
] = xx [ 380 ] == 0.0 ? 0.0 : ( xx [ 375 ] * ( xx [ 491 ] * xx [ 389 ] - xx [
378 ] * xx [ 483 ] ) - xx [ 379 ] * ( xx [ 378 ] * xx [ 492 ] - xx [ 493 ] *
xx [ 389 ] ) ) / xx [ 380 ] ; xx [ 381 ] = xx [ 446 ] * xx [ 377 ] ; xx [ 387
] = xx [ 381 ] * xx [ 381 ] ; xx [ 388 ] = xx [ 5 ] - ( xx [ 387 ] + xx [ 387
] ) * xx [ 14 ] ; xx [ 390 ] = xx [ 446 ] * xx [ 376 ] ; xx [ 391 ] = xx [
390 ] * xx [ 381 ] ; xx [ 381 ] = ( xx [ 391 ] + xx [ 391 ] ) * xx [ 14 ] ;
xx [ 392 ] = xx [ 388 ] ; xx [ 393 ] = xx [ 14 ] * ( xx [ 391 ] - xx [ 391 ]
) ; xx [ 394 ] = - xx [ 381 ] ; xx [ 395 ] = pm_math_Vector3_dot_ra ( xx +
384 , xx + 392 ) ; xx [ 392 ] = xx [ 390 ] * xx [ 390 ] ; xx [ 390 ] = xx [
14 ] * ( xx [ 387 ] - xx [ 392 ] ) ; xx [ 393 ] = ( xx [ 391 ] + xx [ 391 ] )
* xx [ 14 ] ; xx [ 391 ] = xx [ 14 ] * xx [ 377 ] * xx [ 377 ] - xx [ 5 ] ;
xx [ 394 ] = xx [ 14 ] * xx [ 376 ] * xx [ 377 ] ; xx [ 396 ] = - xx [ 393 ]
; xx [ 397 ] = xx [ 5 ] - ( xx [ 387 ] + xx [ 392 ] ) * xx [ 14 ] ; xx [ 398
] = xx [ 390 ] ; xx [ 376 ] = pm_math_Vector3_dot_ra ( xx + 384 , xx + 396 )
; xx [ 377 ] = xx [ 395 ] * xx [ 395 ] + xx [ 376 ] * xx [ 376 ] ; xx [ 377 ]
= xx [ 377 ] == 0.0 ? 0.0 : ( xx [ 395 ] * ( xx [ 390 ] * xx [ 389 ] - xx [
378 ] * xx [ 393 ] + xx [ 391 ] * xx [ 382 ] + xx [ 394 ] * xx [ 383 ] ) - xx
[ 376 ] * ( xx [ 378 ] * xx [ 388 ] - xx [ 381 ] * xx [ 389 ] + xx [ 391 ] *
xx [ 383 ] - xx [ 394 ] * xx [ 382 ] ) ) / xx [ 377 ] ; xx [ 598 ] = xx [ 113
] - xx [ 122 ] ; xx [ 599 ] = xx [ 154 ] - xx [ 157 ] ; xx [ 600 ] = ( xx [
172 ] - xx [ 15 ] * xx [ 39 ] ) * xx [ 14 ] - xx [ 45 ] - xx [ 22 ] ; xx [
601 ] = xx [ 46 ] ; xx [ 602 ] = - ( xx [ 175 ] + xx [ 201 ] ) ; xx [ 603 ] =
- ( xx [ 194 ] + xx [ 218 ] ) ; xx [ 604 ] = - ( xx [ 204 ] + xx [ 227 ] ) ;
xx [ 605 ] = xx [ 46 ] ; xx [ 606 ] = xx [ 46 ] ; xx [ 607 ] = xx [ 46 ] ; xx
[ 608 ] = xx [ 46 ] ; xx [ 609 ] = xx [ 46 ] ; xx [ 610 ] = xx [ 46 ] ; xx [
611 ] = xx [ 46 ] ; xx [ 612 ] = xx [ 46 ] ; xx [ 613 ] = xx [ 46 ] ; xx [
614 ] = xx [ 46 ] ; xx [ 615 ] = xx [ 46 ] ; xx [ 616 ] = xx [ 46 ] ; xx [
617 ] = xx [ 46 ] ; xx [ 618 ] = xx [ 46 ] ; xx [ 619 ] = xx [ 46 ] ; xx [
620 ] = xx [ 46 ] ; xx [ 621 ] = xx [ 46 ] ; xx [ 622 ] = xx [ 46 ] ; xx [
623 ] = xx [ 46 ] ; xx [ 624 ] = xx [ 46 ] ; xx [ 625 ] = xx [ 46 ] ; xx [
626 ] = xx [ 46 ] ; xx [ 627 ] = xx [ 46 ] ; xx [ 628 ] = xx [ 114 ] - xx [
123 ] ; xx [ 629 ] = xx [ 155 ] - xx [ 158 ] ; xx [ 630 ] = xx [ 14 ] * ( xx
[ 173 ] + xx [ 16 ] * xx [ 39 ] ) - xx [ 68 ] + xx [ 119 ] ; xx [ 631 ] = xx
[ 46 ] ; xx [ 632 ] = - ( xx [ 176 ] + xx [ 202 ] ) ; xx [ 633 ] = - ( xx [
195 ] + xx [ 219 ] ) ; xx [ 634 ] = - ( xx [ 205 ] + xx [ 228 ] ) ; xx [ 635
] = xx [ 46 ] ; xx [ 636 ] = xx [ 46 ] ; xx [ 637 ] = xx [ 46 ] ; xx [ 638 ]
= xx [ 46 ] ; xx [ 639 ] = xx [ 46 ] ; xx [ 640 ] = xx [ 46 ] ; xx [ 641 ] =
xx [ 46 ] ; xx [ 642 ] = xx [ 46 ] ; xx [ 643 ] = xx [ 46 ] ; xx [ 644 ] = xx
[ 46 ] ; xx [ 645 ] = xx [ 46 ] ; xx [ 646 ] = xx [ 46 ] ; xx [ 647 ] = xx [
46 ] ; xx [ 648 ] = xx [ 46 ] ; xx [ 649 ] = xx [ 46 ] ; xx [ 650 ] = xx [ 46
] ; xx [ 651 ] = xx [ 46 ] ; xx [ 652 ] = xx [ 46 ] ; xx [ 653 ] = xx [ 46 ]
; xx [ 654 ] = xx [ 46 ] ; xx [ 655 ] = xx [ 46 ] ; xx [ 656 ] = xx [ 46 ] ;
xx [ 657 ] = xx [ 46 ] ; xx [ 658 ] = xx [ 115 ] - xx [ 124 ] ; xx [ 659 ] =
xx [ 156 ] - xx [ 159 ] ; xx [ 660 ] = xx [ 14 ] * ( xx [ 174 ] + xx [ 34 ] *
xx [ 39 ] ) - xx [ 71 ] ; xx [ 661 ] = xx [ 46 ] ; xx [ 662 ] = - ( xx [ 177
] + xx [ 203 ] ) ; xx [ 663 ] = - ( xx [ 196 ] + xx [ 220 ] ) ; xx [ 664 ] =
- ( xx [ 206 ] + xx [ 229 ] ) ; xx [ 665 ] = xx [ 46 ] ; xx [ 666 ] = xx [ 46
] ; xx [ 667 ] = xx [ 46 ] ; xx [ 668 ] = xx [ 46 ] ; xx [ 669 ] = xx [ 46 ]
; xx [ 670 ] = xx [ 46 ] ; xx [ 671 ] = xx [ 46 ] ; xx [ 672 ] = xx [ 46 ] ;
xx [ 673 ] = xx [ 46 ] ; xx [ 674 ] = xx [ 46 ] ; xx [ 675 ] = xx [ 46 ] ; xx
[ 676 ] = xx [ 46 ] ; xx [ 677 ] = xx [ 46 ] ; xx [ 678 ] = xx [ 46 ] ; xx [
679 ] = xx [ 46 ] ; xx [ 680 ] = xx [ 46 ] ; xx [ 681 ] = xx [ 46 ] ; xx [
682 ] = xx [ 46 ] ; xx [ 683 ] = xx [ 46 ] ; xx [ 684 ] = xx [ 46 ] ; xx [
685 ] = xx [ 46 ] ; xx [ 686 ] = xx [ 46 ] ; xx [ 687 ] = xx [ 46 ] ; xx [
688 ] = xx [ 98 ] - xx [ 122 ] ; xx [ 689 ] = xx [ 246 ] - xx [ 157 ] ; xx [
690 ] = ( xx [ 249 ] - xx [ 17 ] * xx [ 39 ] ) * xx [ 14 ] - xx [ 45 ] + xx [
121 ] ; xx [ 691 ] = xx [ 46 ] ; xx [ 692 ] = xx [ 46 ] ; xx [ 693 ] = xx [
46 ] ; xx [ 694 ] = xx [ 46 ] ; xx [ 695 ] = - ( xx [ 224 ] + xx [ 263 ] ) ;
xx [ 696 ] = - ( xx [ 260 ] + xx [ 269 ] ) ; xx [ 697 ] = - ( xx [ 266 ] + xx
[ 275 ] ) ; xx [ 698 ] = xx [ 46 ] ; xx [ 699 ] = xx [ 46 ] ; xx [ 700 ] = xx
[ 46 ] ; xx [ 701 ] = xx [ 46 ] ; xx [ 702 ] = xx [ 46 ] ; xx [ 703 ] = xx [
46 ] ; xx [ 704 ] = xx [ 46 ] ; xx [ 705 ] = xx [ 46 ] ; xx [ 706 ] = xx [ 46
] ; xx [ 707 ] = xx [ 46 ] ; xx [ 708 ] = xx [ 46 ] ; xx [ 709 ] = xx [ 46 ]
; xx [ 710 ] = xx [ 46 ] ; xx [ 711 ] = xx [ 46 ] ; xx [ 712 ] = xx [ 46 ] ;
xx [ 713 ] = xx [ 46 ] ; xx [ 714 ] = xx [ 46 ] ; xx [ 715 ] = xx [ 46 ] ; xx
[ 716 ] = xx [ 46 ] ; xx [ 717 ] = xx [ 46 ] ; xx [ 718 ] = xx [ 99 ] - xx [
123 ] ; xx [ 719 ] = xx [ 247 ] - xx [ 158 ] ; xx [ 720 ] = xx [ 14 ] * ( xx
[ 250 ] - xx [ 35 ] * xx [ 39 ] ) - xx [ 68 ] + xx [ 129 ] ; xx [ 721 ] = xx
[ 46 ] ; xx [ 722 ] = xx [ 46 ] ; xx [ 723 ] = xx [ 46 ] ; xx [ 724 ] = xx [
46 ] ; xx [ 725 ] = - ( xx [ 225 ] + xx [ 264 ] ) ; xx [ 726 ] = - ( xx [ 261
] + xx [ 270 ] ) ; xx [ 727 ] = - ( xx [ 267 ] + xx [ 276 ] ) ; xx [ 728 ] =
xx [ 46 ] ; xx [ 729 ] = xx [ 46 ] ; xx [ 730 ] = xx [ 46 ] ; xx [ 731 ] = xx
[ 46 ] ; xx [ 732 ] = xx [ 46 ] ; xx [ 733 ] = xx [ 46 ] ; xx [ 734 ] = xx [
46 ] ; xx [ 735 ] = xx [ 46 ] ; xx [ 736 ] = xx [ 46 ] ; xx [ 737 ] = xx [ 46
] ; xx [ 738 ] = xx [ 46 ] ; xx [ 739 ] = xx [ 46 ] ; xx [ 740 ] = xx [ 46 ]
; xx [ 741 ] = xx [ 46 ] ; xx [ 742 ] = xx [ 46 ] ; xx [ 743 ] = xx [ 46 ] ;
xx [ 744 ] = xx [ 46 ] ; xx [ 745 ] = xx [ 46 ] ; xx [ 746 ] = xx [ 46 ] ; xx
[ 747 ] = xx [ 46 ] ; xx [ 748 ] = xx [ 100 ] - xx [ 124 ] ; xx [ 749 ] = xx
[ 248 ] - xx [ 159 ] ; xx [ 750 ] = xx [ 14 ] * ( xx [ 251 ] - xx [ 10 ] * xx
[ 39 ] ) - xx [ 71 ] ; xx [ 751 ] = xx [ 46 ] ; xx [ 752 ] = xx [ 46 ] ; xx [
753 ] = xx [ 46 ] ; xx [ 754 ] = xx [ 46 ] ; xx [ 755 ] = - ( xx [ 226 ] + xx
[ 265 ] ) ; xx [ 756 ] = - ( xx [ 262 ] + xx [ 271 ] ) ; xx [ 757 ] = - ( xx
[ 268 ] + xx [ 277 ] ) ; xx [ 758 ] = xx [ 46 ] ; xx [ 759 ] = xx [ 46 ] ; xx
[ 760 ] = xx [ 46 ] ; xx [ 761 ] = xx [ 46 ] ; xx [ 762 ] = xx [ 46 ] ; xx [
763 ] = xx [ 46 ] ; xx [ 764 ] = xx [ 46 ] ; xx [ 765 ] = xx [ 46 ] ; xx [
766 ] = xx [ 46 ] ; xx [ 767 ] = xx [ 46 ] ; xx [ 768 ] = xx [ 46 ] ; xx [
769 ] = xx [ 46 ] ; xx [ 770 ] = xx [ 46 ] ; xx [ 771 ] = xx [ 46 ] ; xx [
772 ] = xx [ 46 ] ; xx [ 773 ] = xx [ 46 ] ; xx [ 774 ] = xx [ 46 ] ; xx [
775 ] = xx [ 46 ] ; xx [ 776 ] = xx [ 46 ] ; xx [ 777 ] = xx [ 46 ] ; xx [
778 ] = xx [ 46 ] ; xx [ 779 ] = xx [ 46 ] ; xx [ 780 ] = xx [ 46 ] ; xx [
781 ] = xx [ 46 ] ; xx [ 782 ] = xx [ 46 ] ; xx [ 783 ] = xx [ 46 ] ; xx [
784 ] = xx [ 46 ] ; xx [ 785 ] = xx [ 46 ] ; xx [ 786 ] = xx [ 46 ] ; xx [
787 ] = xx [ 46 ] ; xx [ 788 ] = xx [ 293 ] + xx [ 221 ] ; xx [ 789 ] = xx [
303 ] + xx [ 241 ] ; xx [ 790 ] = xx [ 14 ] * ( xx [ 310 ] - xx [ 135 ] * xx
[ 142 ] ) + xx [ 315 ] - xx [ 299 ] - xx [ 22 ] ; xx [ 791 ] = xx [ 46 ] ; xx
[ 792 ] = - ( xx [ 332 ] + xx [ 345 ] ) ; xx [ 793 ] = - ( xx [ 342 ] + xx [
353 ] ) ; xx [ 794 ] = - ( xx [ 348 ] + xx [ 404 ] ) ; xx [ 795 ] = xx [ 46 ]
; xx [ 796 ] = xx [ 46 ] ; xx [ 797 ] = xx [ 46 ] ; xx [ 798 ] = xx [ 46 ] ;
xx [ 799 ] = xx [ 46 ] ; xx [ 800 ] = xx [ 46 ] ; xx [ 801 ] = xx [ 46 ] ; xx
[ 802 ] = xx [ 46 ] ; xx [ 803 ] = xx [ 46 ] ; xx [ 804 ] = xx [ 46 ] ; xx [
805 ] = xx [ 46 ] ; xx [ 806 ] = xx [ 46 ] ; xx [ 807 ] = xx [ 46 ] ; xx [
808 ] = xx [ 46 ] ; xx [ 809 ] = xx [ 46 ] ; xx [ 810 ] = xx [ 46 ] ; xx [
811 ] = xx [ 46 ] ; xx [ 812 ] = xx [ 46 ] ; xx [ 813 ] = xx [ 46 ] ; xx [
814 ] = xx [ 46 ] ; xx [ 815 ] = xx [ 46 ] ; xx [ 816 ] = xx [ 46 ] ; xx [
817 ] = xx [ 46 ] ; xx [ 818 ] = xx [ 294 ] + xx [ 239 ] ; xx [ 819 ] = xx [
304 ] + xx [ 213 ] ; xx [ 820 ] = ( xx [ 135 ] * xx [ 208 ] + xx [ 311 ] ) *
xx [ 14 ] + xx [ 170 ] - xx [ 314 ] - xx [ 21 ] ; xx [ 821 ] = xx [ 46 ] ; xx
[ 822 ] = - ( xx [ 333 ] + xx [ 346 ] ) ; xx [ 823 ] = - ( xx [ 343 ] + xx [
354 ] ) ; xx [ 824 ] = - ( xx [ 349 ] + xx [ 405 ] ) ; xx [ 825 ] = xx [ 46 ]
; xx [ 826 ] = xx [ 46 ] ; xx [ 827 ] = xx [ 46 ] ; xx [ 828 ] = xx [ 46 ] ;
xx [ 829 ] = xx [ 46 ] ; xx [ 830 ] = xx [ 46 ] ; xx [ 831 ] = xx [ 46 ] ; xx
[ 832 ] = xx [ 46 ] ; xx [ 833 ] = xx [ 46 ] ; xx [ 834 ] = xx [ 46 ] ; xx [
835 ] = xx [ 46 ] ; xx [ 836 ] = xx [ 46 ] ; xx [ 837 ] = xx [ 46 ] ; xx [
838 ] = xx [ 46 ] ; xx [ 839 ] = xx [ 46 ] ; xx [ 840 ] = xx [ 46 ] ; xx [
841 ] = xx [ 46 ] ; xx [ 842 ] = xx [ 46 ] ; xx [ 843 ] = xx [ 46 ] ; xx [
844 ] = xx [ 46 ] ; xx [ 845 ] = xx [ 46 ] ; xx [ 846 ] = xx [ 46 ] ; xx [
847 ] = xx [ 46 ] ; xx [ 848 ] = xx [ 295 ] - xx [ 302 ] ; xx [ 849 ] = xx [
305 ] - xx [ 308 ] ; xx [ 850 ] = xx [ 14 ] * ( xx [ 312 ] + xx [ 135 ] * xx
[ 296 ] ) - xx [ 183 ] ; xx [ 851 ] = xx [ 46 ] ; xx [ 852 ] = - ( xx [ 334 ]
+ xx [ 347 ] ) ; xx [ 853 ] = - ( xx [ 344 ] + xx [ 355 ] ) ; xx [ 854 ] = -
( xx [ 350 ] + xx [ 406 ] ) ; xx [ 855 ] = xx [ 46 ] ; xx [ 856 ] = xx [ 46 ]
; xx [ 857 ] = xx [ 46 ] ; xx [ 858 ] = xx [ 46 ] ; xx [ 859 ] = xx [ 46 ] ;
xx [ 860 ] = xx [ 46 ] ; xx [ 861 ] = xx [ 46 ] ; xx [ 862 ] = xx [ 46 ] ; xx
[ 863 ] = xx [ 46 ] ; xx [ 864 ] = xx [ 46 ] ; xx [ 865 ] = xx [ 46 ] ; xx [
866 ] = xx [ 46 ] ; xx [ 867 ] = xx [ 46 ] ; xx [ 868 ] = xx [ 46 ] ; xx [
869 ] = xx [ 46 ] ; xx [ 870 ] = xx [ 46 ] ; xx [ 871 ] = xx [ 46 ] ; xx [
872 ] = xx [ 46 ] ; xx [ 873 ] = xx [ 46 ] ; xx [ 874 ] = xx [ 46 ] ; xx [
875 ] = xx [ 46 ] ; xx [ 876 ] = xx [ 46 ] ; xx [ 877 ] = xx [ 46 ] ; xx [
878 ] = xx [ 272 ] + xx [ 221 ] ; xx [ 879 ] = xx [ 417 ] + xx [ 241 ] ; xx [
880 ] = xx [ 14 ] * ( xx [ 420 ] - xx [ 135 ] * xx [ 188 ] ) + xx [ 315 ] -
xx [ 299 ] + xx [ 121 ] ; xx [ 881 ] = xx [ 46 ] ; xx [ 882 ] = xx [ 46 ] ;
xx [ 883 ] = xx [ 46 ] ; xx [ 884 ] = xx [ 46 ] ; xx [ 885 ] = - ( xx [ 282 ]
+ xx [ 430 ] ) ; xx [ 886 ] = - ( xx [ 427 ] + xx [ 439 ] ) ; xx [ 887 ] = -
( xx [ 433 ] + xx [ 501 ] ) ; xx [ 888 ] = xx [ 46 ] ; xx [ 889 ] = xx [ 46 ]
; xx [ 890 ] = xx [ 46 ] ; xx [ 891 ] = xx [ 46 ] ; xx [ 892 ] = xx [ 46 ] ;
xx [ 893 ] = xx [ 46 ] ; xx [ 894 ] = xx [ 46 ] ; xx [ 895 ] = xx [ 46 ] ; xx
[ 896 ] = xx [ 46 ] ; xx [ 897 ] = xx [ 46 ] ; xx [ 898 ] = xx [ 46 ] ; xx [
899 ] = xx [ 46 ] ; xx [ 900 ] = xx [ 46 ] ; xx [ 901 ] = xx [ 46 ] ; xx [
902 ] = xx [ 46 ] ; xx [ 903 ] = xx [ 46 ] ; xx [ 904 ] = xx [ 46 ] ; xx [
905 ] = xx [ 46 ] ; xx [ 906 ] = xx [ 46 ] ; xx [ 907 ] = xx [ 46 ] ; xx [
908 ] = xx [ 273 ] + xx [ 239 ] ; xx [ 909 ] = xx [ 418 ] + xx [ 213 ] ; xx [
910 ] = ( xx [ 421 ] - xx [ 135 ] * xx [ 216 ] ) * xx [ 14 ] + xx [ 170 ] -
xx [ 314 ] - xx [ 8 ] ; xx [ 911 ] = xx [ 46 ] ; xx [ 912 ] = xx [ 46 ] ; xx
[ 913 ] = xx [ 46 ] ; xx [ 914 ] = xx [ 46 ] ; xx [ 915 ] = - ( xx [ 283 ] +
xx [ 431 ] ) ; xx [ 916 ] = - ( xx [ 428 ] + xx [ 440 ] ) ; xx [ 917 ] = - (
xx [ 434 ] + xx [ 502 ] ) ; xx [ 918 ] = xx [ 46 ] ; xx [ 919 ] = xx [ 46 ] ;
xx [ 920 ] = xx [ 46 ] ; xx [ 921 ] = xx [ 46 ] ; xx [ 922 ] = xx [ 46 ] ; xx
[ 923 ] = xx [ 46 ] ; xx [ 924 ] = xx [ 46 ] ; xx [ 925 ] = xx [ 46 ] ; xx [
926 ] = xx [ 46 ] ; xx [ 927 ] = xx [ 46 ] ; xx [ 928 ] = xx [ 46 ] ; xx [
929 ] = xx [ 46 ] ; xx [ 930 ] = xx [ 46 ] ; xx [ 931 ] = xx [ 46 ] ; xx [
932 ] = xx [ 46 ] ; xx [ 933 ] = xx [ 46 ] ; xx [ 934 ] = xx [ 46 ] ; xx [
935 ] = xx [ 46 ] ; xx [ 936 ] = xx [ 46 ] ; xx [ 937 ] = xx [ 46 ] ; xx [
938 ] = xx [ 274 ] - xx [ 302 ] ; xx [ 939 ] = xx [ 419 ] - xx [ 308 ] ; xx [
940 ] = xx [ 14 ] * ( xx [ 422 ] - xx [ 135 ] * xx [ 207 ] ) - xx [ 183 ] ;
xx [ 941 ] = xx [ 46 ] ; xx [ 942 ] = xx [ 46 ] ; xx [ 943 ] = xx [ 46 ] ; xx
[ 944 ] = xx [ 46 ] ; xx [ 945 ] = - ( xx [ 284 ] + xx [ 432 ] ) ; xx [ 946 ]
= - ( xx [ 429 ] + xx [ 441 ] ) ; xx [ 947 ] = - ( xx [ 435 ] + xx [ 503 ] )
; xx [ 948 ] = xx [ 46 ] ; xx [ 949 ] = xx [ 46 ] ; xx [ 950 ] = xx [ 46 ] ;
xx [ 951 ] = xx [ 46 ] ; xx [ 952 ] = xx [ 46 ] ; xx [ 953 ] = xx [ 46 ] ; xx
[ 954 ] = xx [ 46 ] ; xx [ 955 ] = xx [ 46 ] ; xx [ 956 ] = xx [ 46 ] ; xx [
957 ] = xx [ 46 ] ; xx [ 958 ] = xx [ 46 ] ; xx [ 959 ] = xx [ 46 ] ; xx [
960 ] = xx [ 46 ] ; xx [ 961 ] = xx [ 46 ] ; xx [ 962 ] = xx [ 46 ] ; xx [
963 ] = xx [ 46 ] ; xx [ 964 ] = xx [ 46 ] ; xx [ 965 ] = xx [ 46 ] ; xx [
966 ] = xx [ 46 ] ; xx [ 967 ] = xx [ 46 ] ; xx [ 968 ] = xx [ 46 ] ; xx [
969 ] = xx [ 46 ] ; xx [ 970 ] = xx [ 46 ] ; xx [ 971 ] = xx [ 46 ] ; xx [
972 ] = xx [ 46 ] ; xx [ 973 ] = xx [ 46 ] ; xx [ 974 ] = xx [ 46 ] ; xx [
975 ] = xx [ 46 ] ; xx [ 976 ] = xx [ 46 ] ; xx [ 977 ] = xx [ 46 ] ; xx [
978 ] = xx [ 520 ] + xx [ 407 ] ; xx [ 979 ] = xx [ 530 ] + xx [ 455 ] ; xx [
980 ] = xx [ 14 ] * ( xx [ 536 ] - xx [ 240 ] * xx [ 459 ] ) + xx [ 498 ] -
xx [ 485 ] - xx [ 22 ] ; xx [ 981 ] = xx [ 46 ] ; xx [ 982 ] = - ( xx [ 547 ]
+ xx [ 553 ] ) ; xx [ 983 ] = - ( xx [ 550 ] + xx [ 559 ] ) ; xx [ 984 ] = -
( xx [ 556 ] + xx [ 565 ] ) ; xx [ 985 ] = xx [ 46 ] ; xx [ 986 ] = xx [ 46 ]
; xx [ 987 ] = xx [ 46 ] ; xx [ 988 ] = xx [ 46 ] ; xx [ 989 ] = xx [ 46 ] ;
xx [ 990 ] = xx [ 46 ] ; xx [ 991 ] = xx [ 46 ] ; xx [ 992 ] = xx [ 46 ] ; xx
[ 993 ] = xx [ 46 ] ; xx [ 994 ] = xx [ 46 ] ; xx [ 995 ] = xx [ 46 ] ; xx [
996 ] = xx [ 46 ] ; xx [ 997 ] = xx [ 46 ] ; xx [ 998 ] = xx [ 46 ] ; xx [
999 ] = xx [ 46 ] ; xx [ 1000 ] = xx [ 46 ] ; xx [ 1001 ] = xx [ 46 ] ; xx [
1002 ] = xx [ 46 ] ; xx [ 1003 ] = xx [ 46 ] ; xx [ 1004 ] = xx [ 46 ] ; xx [
1005 ] = xx [ 46 ] ; xx [ 1006 ] = xx [ 46 ] ; xx [ 1007 ] = xx [ 46 ] ; xx [
1008 ] = xx [ 521 ] + xx [ 367 ] ; xx [ 1009 ] = xx [ 531 ] + xx [ 351 ] ; xx
[ 1010 ] = ( xx [ 240 ] * xx [ 460 ] + xx [ 537 ] ) * xx [ 14 ] + xx [ 307 ]
- xx [ 484 ] - xx [ 21 ] ; xx [ 1011 ] = xx [ 46 ] ; xx [ 1012 ] = - ( xx [
548 ] + xx [ 554 ] ) ; xx [ 1013 ] = - ( xx [ 551 ] + xx [ 560 ] ) ; xx [
1014 ] = - ( xx [ 557 ] + xx [ 566 ] ) ; xx [ 1015 ] = xx [ 46 ] ; xx [ 1016
] = xx [ 46 ] ; xx [ 1017 ] = xx [ 46 ] ; xx [ 1018 ] = xx [ 46 ] ; xx [ 1019
] = xx [ 46 ] ; xx [ 1020 ] = xx [ 46 ] ; xx [ 1021 ] = xx [ 46 ] ; xx [ 1022
] = xx [ 46 ] ; xx [ 1023 ] = xx [ 46 ] ; xx [ 1024 ] = xx [ 46 ] ; xx [ 1025
] = xx [ 46 ] ; xx [ 1026 ] = xx [ 46 ] ; xx [ 1027 ] = xx [ 46 ] ; xx [ 1028
] = xx [ 46 ] ; xx [ 1029 ] = xx [ 46 ] ; xx [ 1030 ] = xx [ 46 ] ; xx [ 1031
] = xx [ 46 ] ; xx [ 1032 ] = xx [ 46 ] ; xx [ 1033 ] = xx [ 46 ] ; xx [ 1034
] = xx [ 46 ] ; xx [ 1035 ] = xx [ 46 ] ; xx [ 1036 ] = xx [ 46 ] ; xx [ 1037
] = xx [ 46 ] ; xx [ 1038 ] = xx [ 522 ] - xx [ 529 ] ; xx [ 1039 ] = xx [
532 ] - xx [ 535 ] ; xx [ 1040 ] = xx [ 14 ] * ( xx [ 538 ] + xx [ 462 ] * xx
[ 240 ] ) - xx [ 313 ] ; xx [ 1041 ] = xx [ 46 ] ; xx [ 1042 ] = - ( xx [ 549
] + xx [ 555 ] ) ; xx [ 1043 ] = - ( xx [ 552 ] + xx [ 561 ] ) ; xx [ 1044 ]
= - ( xx [ 558 ] + xx [ 567 ] ) ; xx [ 1045 ] = xx [ 46 ] ; xx [ 1046 ] = xx
[ 46 ] ; xx [ 1047 ] = xx [ 46 ] ; xx [ 1048 ] = xx [ 46 ] ; xx [ 1049 ] = xx
[ 46 ] ; xx [ 1050 ] = xx [ 46 ] ; xx [ 1051 ] = xx [ 46 ] ; xx [ 1052 ] = xx
[ 46 ] ; xx [ 1053 ] = xx [ 46 ] ; xx [ 1054 ] = xx [ 46 ] ; xx [ 1055 ] = xx
[ 46 ] ; xx [ 1056 ] = xx [ 46 ] ; xx [ 1057 ] = xx [ 46 ] ; xx [ 1058 ] = xx
[ 46 ] ; xx [ 1059 ] = xx [ 46 ] ; xx [ 1060 ] = xx [ 46 ] ; xx [ 1061 ] = xx
[ 46 ] ; xx [ 1062 ] = xx [ 46 ] ; xx [ 1063 ] = xx [ 46 ] ; xx [ 1064 ] = xx
[ 46 ] ; xx [ 1065 ] = xx [ 46 ] ; xx [ 1066 ] = xx [ 46 ] ; xx [ 1067 ] = xx
[ 46 ] ; xx [ 1068 ] = xx [ 479 ] + xx [ 407 ] ; xx [ 1069 ] = xx [ 568 ] +
xx [ 455 ] ; xx [ 1070 ] = xx [ 14 ] * ( xx [ 571 ] - xx [ 240 ] * xx [ 339 ]
) + xx [ 498 ] - xx [ 485 ] + xx [ 121 ] ; xx [ 1071 ] = xx [ 46 ] ; xx [
1072 ] = xx [ 46 ] ; xx [ 1073 ] = xx [ 46 ] ; xx [ 1074 ] = xx [ 46 ] ; xx [
1075 ] = - ( xx [ 517 ] + xx [ 582 ] ) ; xx [ 1076 ] = - ( xx [ 562 ] + xx [
588 ] ) ; xx [ 1077 ] = - ( xx [ 585 ] + xx [ 594 ] ) ; xx [ 1078 ] = xx [ 46
] ; xx [ 1079 ] = xx [ 46 ] ; xx [ 1080 ] = xx [ 46 ] ; xx [ 1081 ] = xx [ 46
] ; xx [ 1082 ] = xx [ 46 ] ; xx [ 1083 ] = xx [ 46 ] ; xx [ 1084 ] = xx [ 46
] ; xx [ 1085 ] = xx [ 46 ] ; xx [ 1086 ] = xx [ 46 ] ; xx [ 1087 ] = xx [ 46
] ; xx [ 1088 ] = xx [ 46 ] ; xx [ 1089 ] = xx [ 46 ] ; xx [ 1090 ] = xx [ 46
] ; xx [ 1091 ] = xx [ 46 ] ; xx [ 1092 ] = xx [ 46 ] ; xx [ 1093 ] = xx [ 46
] ; xx [ 1094 ] = xx [ 46 ] ; xx [ 1095 ] = xx [ 46 ] ; xx [ 1096 ] = xx [ 46
] ; xx [ 1097 ] = xx [ 46 ] ; xx [ 1098 ] = xx [ 480 ] + xx [ 367 ] ; xx [
1099 ] = xx [ 569 ] + xx [ 351 ] ; xx [ 1100 ] = ( xx [ 572 ] - xx [ 240 ] *
xx [ 364 ] ) * xx [ 14 ] + xx [ 307 ] - xx [ 484 ] - xx [ 8 ] ; xx [ 1101 ] =
xx [ 46 ] ; xx [ 1102 ] = xx [ 46 ] ; xx [ 1103 ] = xx [ 46 ] ; xx [ 1104 ] =
xx [ 46 ] ; xx [ 1105 ] = - ( xx [ 518 ] + xx [ 583 ] ) ; xx [ 1106 ] = - (
xx [ 563 ] + xx [ 589 ] ) ; xx [ 1107 ] = - ( xx [ 586 ] + xx [ 595 ] ) ; xx
[ 1108 ] = xx [ 46 ] ; xx [ 1109 ] = xx [ 46 ] ; xx [ 1110 ] = xx [ 46 ] ; xx
[ 1111 ] = xx [ 46 ] ; xx [ 1112 ] = xx [ 46 ] ; xx [ 1113 ] = xx [ 46 ] ; xx
[ 1114 ] = xx [ 46 ] ; xx [ 1115 ] = xx [ 46 ] ; xx [ 1116 ] = xx [ 46 ] ; xx
[ 1117 ] = xx [ 46 ] ; xx [ 1118 ] = xx [ 46 ] ; xx [ 1119 ] = xx [ 46 ] ; xx
[ 1120 ] = xx [ 46 ] ; xx [ 1121 ] = xx [ 46 ] ; xx [ 1122 ] = xx [ 46 ] ; xx
[ 1123 ] = xx [ 46 ] ; xx [ 1124 ] = xx [ 46 ] ; xx [ 1125 ] = xx [ 46 ] ; xx
[ 1126 ] = xx [ 46 ] ; xx [ 1127 ] = xx [ 46 ] ; xx [ 1128 ] = xx [ 481 ] -
xx [ 529 ] ; xx [ 1129 ] = xx [ 570 ] - xx [ 535 ] ; xx [ 1130 ] = xx [ 14 ]
* ( xx [ 573 ] + xx [ 306 ] * xx [ 240 ] ) - xx [ 313 ] ; xx [ 1131 ] = xx [
46 ] ; xx [ 1132 ] = xx [ 46 ] ; xx [ 1133 ] = xx [ 46 ] ; xx [ 1134 ] = xx [
46 ] ; xx [ 1135 ] = - ( xx [ 519 ] + xx [ 584 ] ) ; xx [ 1136 ] = - ( xx [
564 ] + xx [ 590 ] ) ; xx [ 1137 ] = - ( xx [ 587 ] + xx [ 596 ] ) ; xx [
1138 ] = xx [ 46 ] ; xx [ 1139 ] = xx [ 46 ] ; xx [ 1140 ] = xx [ 46 ] ; xx [
1141 ] = xx [ 217 ] * xx [ 490 ] + xx [ 442 ] ; xx [ 1142 ] = xx [ 46 ] ; xx
[ 1143 ] = xx [ 46 ] ; xx [ 1144 ] = xx [ 46 ] ; xx [ 1145 ] = xx [ 46 ] ; xx
[ 1146 ] = xx [ 46 ] ; xx [ 1147 ] = xx [ 46 ] ; xx [ 1148 ] = xx [ 46 ] ; xx
[ 1149 ] = xx [ 46 ] ; xx [ 1150 ] = xx [ 46 ] ; xx [ 1151 ] = xx [ 46 ] ; xx
[ 1152 ] = xx [ 46 ] ; xx [ 1153 ] = xx [ 46 ] ; xx [ 1154 ] = xx [ 46 ] ; xx
[ 1155 ] = xx [ 46 ] ; xx [ 1156 ] = xx [ 46 ] ; xx [ 1157 ] = xx [ 46 ] ; xx
[ 1158 ] = xx [ 46 ] ; xx [ 1159 ] = xx [ 46 ] ; xx [ 1160 ] = xx [ 46 ] ; xx
[ 1161 ] = xx [ 46 ] ; xx [ 1162 ] = xx [ 46 ] ; xx [ 1163 ] = xx [ 46 ] ; xx
[ 1164 ] = xx [ 46 ] ; xx [ 1165 ] = xx [ 46 ] ; xx [ 1166 ] = xx [ 46 ] ; xx
[ 1167 ] = xx [ 46 ] ; xx [ 1168 ] = xx [ 46 ] ; xx [ 1169 ] = xx [ 46 ] ; xx
[ 1170 ] = xx [ 46 ] ; xx [ 1171 ] = xx [ 46 ] ; xx [ 1172 ] = xx [ 46 ] ; xx
[ 1173 ] = xx [ 46 ] ; xx [ 1174 ] = xx [ 46 ] ; xx [ 1175 ] = xx [ 46 ] ; xx
[ 1176 ] = xx [ 46 ] ; xx [ 1177 ] = xx [ 46 ] ; xx [ 1178 ] = xx [ 46 ] ; xx
[ 1179 ] = xx [ 46 ] ; xx [ 1180 ] = xx [ 46 ] ; xx [ 1181 ] = xx [ 217 ] *
xx [ 513 ] + xx [ 450 ] ; xx [ 1182 ] = xx [ 46 ] ; xx [ 1183 ] = xx [ 46 ] ;
xx [ 1184 ] = xx [ 46 ] ; xx [ 1185 ] = xx [ 46 ] ; xx [ 1186 ] = xx [ 46 ] ;
xx [ 1187 ] = xx [ 46 ] ; xx [ 1188 ] = xx [ 46 ] ; xx [ 1189 ] = xx [ 46 ] ;
xx [ 1190 ] = xx [ 46 ] ; xx [ 1191 ] = xx [ 46 ] ; xx [ 1192 ] = xx [ 46 ] ;
xx [ 1193 ] = xx [ 46 ] ; xx [ 1194 ] = xx [ 46 ] ; xx [ 1195 ] = xx [ 46 ] ;
xx [ 1196 ] = xx [ 46 ] ; xx [ 1197 ] = xx [ 46 ] ; xx [ 1198 ] = xx [ 46 ] ;
xx [ 1199 ] = xx [ 46 ] ; xx [ 1200 ] = xx [ 46 ] ; xx [ 1201 ] = xx [ 46 ] ;
xx [ 1202 ] = xx [ 46 ] ; xx [ 1203 ] = xx [ 46 ] ; xx [ 1204 ] = xx [ 46 ] ;
xx [ 1205 ] = xx [ 46 ] ; xx [ 1206 ] = xx [ 46 ] ; xx [ 1207 ] = xx [ 46 ] ;
xx [ 1208 ] = xx [ 46 ] ; xx [ 1209 ] = xx [ 46 ] ; xx [ 1210 ] = xx [ 46 ] ;
xx [ 1211 ] = xx [ 46 ] ; xx [ 1212 ] = xx [ 46 ] ; xx [ 1213 ] = xx [ 46 ] ;
xx [ 1214 ] = xx [ 46 ] ; xx [ 1215 ] = xx [ 46 ] ; xx [ 1216 ] = xx [ 46 ] ;
xx [ 1217 ] = xx [ 46 ] ; xx [ 1218 ] = xx [ 46 ] ; xx [ 1219 ] = xx [ 46 ] ;
xx [ 1220 ] = xx [ 46 ] ; xx [ 1221 ] = xx [ 217 ] * xx [ 380 ] + xx [ 377 ]
; xx [ 1222 ] = xx [ 46 ] ; xx [ 1223 ] = xx [ 46 ] ; xx [ 1224 ] = xx [ 46 ]
; xx [ 1225 ] = xx [ 46 ] ; xx [ 1226 ] = xx [ 46 ] ; xx [ 1227 ] = xx [ 46 ]
; pm_math_Quaternion_xform_ra ( xx + 80 , xx + 24 , xx + 15 ) ; xx [ 10 ] =
xx [ 27 ] * xx [ 33 ] ; xx [ 34 ] = xx [ 41 ] - xx [ 11 ] * xx [ 27 ] ; xx [
11 ] = xx [ 29 ] * xx [ 33 ] ; xx [ 98 ] = - xx [ 10 ] ; xx [ 99 ] = xx [ 34
] ; xx [ 100 ] = xx [ 11 ] ; pm_math_Vector3_cross_ra ( xx + 110 , xx + 98 ,
xx + 113 ) ; xx [ 33 ] = xx [ 1 ] - ( xx [ 113 ] - xx [ 10 ] * xx [ 39 ] ) *
xx [ 14 ] ; pm_math_Quaternion_xform_ra ( xx + 179 , xx + 18 , xx + 98 ) ;
pm_math_Quaternion_xform_ra ( xx + 190 , xx + 36 , xx + 110 ) ; xx [ 122 ] =
xx [ 3 ] + xx [ 110 ] ; xx [ 123 ] = xx [ 7 ] + xx [ 111 ] ; xx [ 124 ] = xx
[ 112 ] - xx [ 42 ] ; pm_math_Quaternion_xform_ra ( xx + 63 , xx + 122 , xx +
110 ) ; xx [ 10 ] = ( xx [ 39 ] * xx [ 34 ] + xx [ 114 ] ) * xx [ 14 ] ; xx [
34 ] = xx [ 79 ] - xx [ 14 ] * ( xx [ 115 ] + xx [ 11 ] * xx [ 39 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 80 , xx + 126 , xx + 113 ) ;
pm_math_Quaternion_xform_ra ( xx + 252 , xx + 18 , xx + 80 ) ;
pm_math_Quaternion_xform_ra ( xx + 256 , xx + 36 , xx + 122 ) ; xx [ 154 ] =
xx [ 3 ] + xx [ 122 ] ; xx [ 155 ] = xx [ 7 ] + xx [ 123 ] ; xx [ 156 ] = xx
[ 124 ] - xx [ 42 ] ; pm_math_Quaternion_xform_ra ( xx + 146 , xx + 154 , xx
+ 122 ) ; pm_math_Quaternion_xform_ra ( xx + 289 , xx + 24 , xx + 154 ) ; xx
[ 157 ] = xx [ 222 ] ; xx [ 158 ] = xx [ 137 ] ; xx [ 159 ] = xx [ 230 ] ; xx
[ 11 ] = xx [ 27 ] * xx [ 137 ] ; xx [ 35 ] = xx [ 298 ] - xx [ 130 ] * xx [
27 ] ; xx [ 39 ] = xx [ 29 ] * xx [ 137 ] ; xx [ 172 ] = - xx [ 11 ] ; xx [
173 ] = xx [ 35 ] ; xx [ 174 ] = xx [ 39 ] ; pm_math_Vector3_cross_ra ( xx +
157 , xx + 172 , xx + 175 ) ; xx [ 41 ] = ( xx [ 175 ] - xx [ 11 ] * xx [ 184
] ) * xx [ 14 ] - xx [ 29 ] ; xx [ 11 ] = xx [ 41 ] * xx [ 178 ] ; xx [ 45 ]
= ( xx [ 184 ] * xx [ 35 ] + xx [ 176 ] ) * xx [ 14 ] ; xx [ 35 ] = xx [ 178
] * xx [ 45 ] ; xx [ 68 ] = ( xx [ 178 ] * xx [ 11 ] - xx [ 144 ] * xx [ 35 ]
) * xx [ 14 ] - xx [ 41 ] - xx [ 102 ] ; pm_math_Quaternion_xform_ra ( xx +
324 , xx + 18 , xx + 157 ) ; pm_math_Quaternion_xform_ra ( xx + 328 , xx + 36
, xx + 172 ) ; xx [ 179 ] = xx [ 3 ] + xx [ 172 ] ; xx [ 180 ] = xx [ 7 ] +
xx [ 173 ] ; xx [ 181 ] = xx [ 174 ] - xx [ 42 ] ;
pm_math_Quaternion_xform_ra ( xx + 242 , xx + 179 , xx + 172 ) ; xx [ 41 ] =
xx [ 14 ] * ( xx [ 178 ] * xx [ 35 ] + xx [ 144 ] * xx [ 11 ] ) - xx [ 45 ] -
xx [ 120 ] ; xx [ 11 ] = xx [ 79 ] - xx [ 14 ] * ( xx [ 177 ] + xx [ 39 ] *
xx [ 184 ] ) ; pm_math_Quaternion_xform_ra ( xx + 289 , xx + 126 , xx + 175 )
; pm_math_Quaternion_xform_ra ( xx + 356 , xx + 18 , xx + 179 ) ;
pm_math_Quaternion_xform_ra ( xx + 423 , xx + 36 , xx + 182 ) ; xx [ 190 ] =
xx [ 3 ] + xx [ 182 ] ; xx [ 191 ] = xx [ 7 ] + xx [ 183 ] ; xx [ 192 ] = xx
[ 184 ] - xx [ 42 ] ; pm_math_Quaternion_xform_ra ( xx + 285 , xx + 190 , xx
+ 182 ) ; pm_math_Quaternion_xform_ra ( xx + 509 , xx + 24 , xx + 190 ) ; xx
[ 35 ] = xx [ 466 ] - xx [ 231 ] * xx [ 27 ] ; xx [ 193 ] = xx [ 408 ] ; xx [
194 ] = xx [ 297 ] ; xx [ 195 ] = xx [ 436 ] ; xx [ 39 ] = xx [ 27 ] * xx [
297 ] ; xx [ 45 ] = xx [ 29 ] * xx [ 297 ] ; xx [ 201 ] = - xx [ 39 ] ; xx [
202 ] = xx [ 35 ] ; xx [ 203 ] = xx [ 45 ] ; pm_math_Vector3_cross_ra ( xx +
193 , xx + 201 , xx + 204 ) ; xx [ 71 ] = ( xx [ 322 ] * xx [ 35 ] + xx [ 205
] ) * xx [ 14 ] ; xx [ 35 ] = xx [ 223 ] * xx [ 71 ] ; xx [ 83 ] = ( xx [ 204
] - xx [ 39 ] * xx [ 322 ] ) * xx [ 14 ] - xx [ 29 ] ; xx [ 39 ] = xx [ 83 ]
* xx [ 223 ] ; xx [ 130 ] = ( xx [ 145 ] * xx [ 35 ] + xx [ 223 ] * xx [ 39 ]
) * xx [ 14 ] - xx [ 83 ] - xx [ 168 ] ; pm_math_Quaternion_xform_ra ( xx +
539 , xx + 18 , xx + 193 ) ; pm_math_Quaternion_xform_ra ( xx + 543 , xx + 36
, xx + 201 ) ; xx [ 218 ] = xx [ 3 ] + xx [ 201 ] ; xx [ 219 ] = xx [ 7 ] +
xx [ 202 ] ; xx [ 220 ] = xx [ 203 ] - xx [ 42 ] ;
pm_math_Quaternion_xform_ra ( xx + 370 , xx + 218 , xx + 201 ) ; xx [ 83 ] =
xx [ 14 ] * ( xx [ 223 ] * xx [ 35 ] - xx [ 145 ] * xx [ 39 ] ) - xx [ 71 ] +
xx [ 171 ] ; xx [ 35 ] = xx [ 79 ] - xx [ 14 ] * ( xx [ 206 ] + xx [ 45 ] *
xx [ 322 ] ) ; pm_math_Quaternion_xform_ra ( xx + 509 , xx + 126 , xx + 204 )
; pm_math_Quaternion_xform_ra ( xx + 574 , xx + 18 , xx + 218 ) ;
pm_math_Quaternion_xform_ra ( xx + 578 , xx + 36 , xx + 224 ) ; xx [ 227 ] =
xx [ 3 ] + xx [ 224 ] ; xx [ 228 ] = xx [ 7 ] + xx [ 225 ] ; xx [ 229 ] = xx
[ 226 ] - xx [ 42 ] ; pm_math_Quaternion_xform_ra ( xx + 413 , xx + 227 , xx
+ 224 ) ; xx [ 246 ] = - ( xx [ 15 ] + xx [ 33 ] - ( xx [ 98 ] + xx [ 110 ] -
xx [ 47 ] ) - xx [ 54 ] ) ; xx [ 247 ] = - ( xx [ 16 ] - ( xx [ 10 ] + xx [
99 ] + xx [ 111 ] - xx [ 48 ] ) - xx [ 4 ] ) ; xx [ 248 ] = - ( xx [ 17 ] +
xx [ 34 ] - ( xx [ 100 ] + xx [ 112 ] - xx [ 49 ] ) + xx [ 2 ] ) ; xx [ 249 ]
= - ( xx [ 113 ] + xx [ 33 ] - ( xx [ 80 ] + xx [ 122 ] - xx [ 89 ] ) - xx [
54 ] ) ; xx [ 250 ] = - ( xx [ 114 ] - ( xx [ 10 ] + xx [ 81 ] + xx [ 123 ] -
xx [ 90 ] ) + xx [ 4 ] ) ; xx [ 251 ] = - ( xx [ 115 ] + xx [ 34 ] - ( xx [
82 ] + xx [ 124 ] - xx [ 91 ] ) + xx [ 2 ] ) ; xx [ 252 ] = - ( xx [ 154 ] +
xx [ 68 ] - ( xx [ 157 ] + xx [ 172 ] - xx [ 132 ] ) + xx [ 32 ] ) ; xx [ 253
] = - ( xx [ 155 ] + xx [ 41 ] - ( xx [ 158 ] + xx [ 173 ] - xx [ 133 ] ) +
xx [ 12 ] ) ; xx [ 254 ] = - ( xx [ 156 ] + xx [ 11 ] - ( xx [ 159 ] + xx [
174 ] - xx [ 134 ] ) + xx [ 2 ] ) ; xx [ 255 ] = - ( xx [ 175 ] + xx [ 68 ] -
( xx [ 179 ] + xx [ 182 ] - xx [ 160 ] ) + xx [ 31 ] ) ; xx [ 256 ] = - ( xx
[ 176 ] + xx [ 41 ] - ( xx [ 180 ] + xx [ 183 ] - xx [ 161 ] ) + xx [ 101 ] )
; xx [ 257 ] = - ( xx [ 177 ] + xx [ 11 ] - ( xx [ 181 ] + xx [ 184 ] - xx [
162 ] ) + xx [ 2 ] ) ; xx [ 258 ] = - ( xx [ 190 ] + xx [ 130 ] - ( xx [ 193
] + xx [ 201 ] - xx [ 185 ] ) + xx [ 167 ] ) ; xx [ 259 ] = - ( xx [ 191 ] +
xx [ 83 ] - ( xx [ 194 ] + xx [ 202 ] - xx [ 186 ] ) - xx [ 136 ] ) ; xx [
260 ] = - ( xx [ 192 ] + xx [ 35 ] - ( xx [ 195 ] + xx [ 203 ] - xx [ 187 ] )
+ xx [ 2 ] ) ; xx [ 261 ] = - ( xx [ 204 ] + xx [ 130 ] - ( xx [ 218 ] + xx [
224 ] - xx [ 198 ] ) + xx [ 43 ] ) ; xx [ 262 ] = - ( xx [ 205 ] + xx [ 83 ]
- ( xx [ 219 ] + xx [ 225 ] - xx [ 199 ] ) - xx [ 44 ] ) ; xx [ 263 ] = - (
xx [ 206 ] + xx [ 35 ] - ( xx [ 220 ] + xx [ 226 ] - xx [ 200 ] ) + xx [ 2 ]
) ; xx [ 264 ] = - ( sm_core_canonicalAngle ( ( state [ 84 ] +
sm_core_canonicalAngle ( atan2 ( xx [ 368 ] , xx [ 528 ] ) - state [ 84 ] ) -
state [ 90 ] ) / xx [ 217 ] + atan2 ( xx [ 467 ] , xx [ 340 ] ) ) * xx [ 217
] ) ; xx [ 265 ] = - ( sm_core_canonicalAngle ( ( state [ 86 ] +
sm_core_canonicalAngle ( atan2 ( xx [ 449 ] , xx [ 597 ] ) - state [ 86 ] ) -
state [ 91 ] ) / xx [ 217 ] + atan2 ( xx [ 505 ] , xx [ 448 ] ) ) * xx [ 217
] ) ; xx [ 266 ] = - ( sm_core_canonicalAngle ( ( state [ 88 ] +
sm_core_canonicalAngle ( atan2 ( xx [ 376 ] , xx [ 395 ] ) - state [ 88 ] ) -
state [ 92 ] ) / xx [ 217 ] + atan2 ( xx [ 379 ] , xx [ 375 ] ) ) * xx [ 217
] ) ; memcpy ( xx + 1228 , xx + 598 , 630 * sizeof ( double ) ) ;
factorAndSolveWide ( 21 , 30 , xx + 1228 , xx + 527 , xx + 548 , ii + 0 , xx
+ 246 , xx [ 6 ] , xx + 375 ) ; xx [ 10 ] = xx [ 9 ] + xx [ 375 ] ; xx [ 9 ]
= xx [ 13 ] + xx [ 376 ] ; xx [ 11 ] = xx [ 30 ] + xx [ 377 ] ; xx [ 13 ] =
xx [ 323 ] + xx [ 378 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 163 , xx +
379 , xx + 80 ) ; xx [ 15 ] = xx [ 72 ] + xx [ 80 ] ; xx [ 16 ] = xx [ 70 ] +
xx [ 81 ] ; xx [ 17 ] = xx [ 56 ] + xx [ 82 ] ; xx [ 30 ] = xx [ 67 ] + xx [
83 ] ; xx [ 33 ] = sqrt ( xx [ 15 ] * xx [ 15 ] + xx [ 16 ] * xx [ 16 ] + xx
[ 17 ] * xx [ 17 ] + xx [ 30 ] * xx [ 30 ] ) ; if ( xx [ 69 ] > xx [ 33 ] )
xx [ 33 ] = xx [ 69 ] ; xx [ 34 ] = xx [ 15 ] / xx [ 33 ] ; xx [ 15 ] = xx [
16 ] / xx [ 33 ] ; xx [ 16 ] = xx [ 17 ] / xx [ 33 ] ; xx [ 17 ] = xx [ 30 ]
/ xx [ 33 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 150 , xx + 382 , xx + 80
) ; xx [ 30 ] = xx [ 103 ] + xx [ 80 ] ; xx [ 33 ] = xx [ 40 ] + xx [ 81 ] ;
xx [ 35 ] = xx [ 73 ] + xx [ 82 ] ; xx [ 39 ] = xx [ 78 ] + xx [ 83 ] ; xx [
40 ] = sqrt ( xx [ 30 ] * xx [ 30 ] + xx [ 33 ] * xx [ 33 ] + xx [ 35 ] * xx
[ 35 ] + xx [ 39 ] * xx [ 39 ] ) ; if ( xx [ 69 ] > xx [ 40 ] ) xx [ 40 ] =
xx [ 69 ] ; xx [ 41 ] = xx [ 30 ] / xx [ 40 ] ; xx [ 30 ] = xx [ 33 ] / xx [
40 ] ; xx [ 33 ] = xx [ 35 ] / xx [ 40 ] ; xx [ 35 ] = xx [ 39 ] / xx [ 40 ]
; xx [ 39 ] = xx [ 84 ] + xx [ 385 ] ; xx [ 40 ] = xx [ 131 ] + xx [ 386 ] ;
xx [ 45 ] = xx [ 143 ] + xx [ 387 ] ; xx [ 56 ] = xx [ 438 ] + xx [ 388 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 318 , xx + 389 , xx + 70 ) ; xx [ 67 ]
= xx [ 316 ] + xx [ 70 ] ; xx [ 68 ] = xx [ 317 ] + xx [ 71 ] ; xx [ 78 ] =
xx [ 237 ] + xx [ 72 ] ; xx [ 70 ] = xx [ 238 ] + xx [ 73 ] ; xx [ 71 ] =
sqrt ( xx [ 67 ] * xx [ 67 ] + xx [ 68 ] * xx [ 68 ] + xx [ 78 ] * xx [ 78 ]
+ xx [ 70 ] * xx [ 70 ] ) ; if ( xx [ 69 ] > xx [ 71 ] ) xx [ 71 ] = xx [ 69
] ; xx [ 72 ] = xx [ 67 ] / xx [ 71 ] ; xx [ 67 ] = xx [ 68 ] / xx [ 71 ] ;
xx [ 68 ] = xx [ 78 ] / xx [ 71 ] ; xx [ 73 ] = xx [ 70 ] / xx [ 71 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 278 , xx + 392 , xx + 80 ) ; xx [ 70 ]
= xx [ 215 ] + xx [ 80 ] ; xx [ 71 ] = xx [ 85 ] + xx [ 81 ] ; xx [ 78 ] = xx
[ 169 ] + xx [ 82 ] ; xx [ 80 ] = xx [ 189 ] + xx [ 83 ] ; xx [ 81 ] = sqrt (
xx [ 70 ] * xx [ 70 ] + xx [ 71 ] * xx [ 71 ] + xx [ 78 ] * xx [ 78 ] + xx [
80 ] * xx [ 80 ] ) ; if ( xx [ 69 ] > xx [ 81 ] ) xx [ 81 ] = xx [ 69 ] ; xx
[ 82 ] = xx [ 70 ] / xx [ 81 ] ; xx [ 70 ] = xx [ 71 ] / xx [ 81 ] ; xx [ 71
] = xx [ 78 ] / xx [ 81 ] ; xx [ 78 ] = xx [ 80 ] / xx [ 81 ] ; xx [ 80 ] =
xx [ 197 ] + xx [ 395 ] ; xx [ 81 ] = xx [ 236 ] + xx [ 396 ] ; xx [ 83 ] =
xx [ 301 ] + xx [ 397 ] ; xx [ 84 ] = xx [ 374 ] + xx [ 398 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 523 , xx + 399 , xx + 110 ) ; xx [ 85
] = xx [ 504 ] + xx [ 110 ] ; xx [ 98 ] = xx [ 499 ] + xx [ 111 ] ; xx [ 99 ]
= xx [ 365 ] + xx [ 112 ] ; xx [ 100 ] = xx [ 366 ] + xx [ 113 ] ; xx [ 103 ]
= sqrt ( xx [ 85 ] * xx [ 85 ] + xx [ 98 ] * xx [ 98 ] + xx [ 99 ] * xx [ 99
] + xx [ 100 ] * xx [ 100 ] ) ; if ( xx [ 69 ] > xx [ 103 ] ) xx [ 103 ] = xx
[ 69 ] ; xx [ 110 ] = xx [ 85 ] / xx [ 103 ] ; xx [ 85 ] = xx [ 98 ] / xx [
103 ] ; xx [ 98 ] = xx [ 99 ] / xx [ 103 ] ; xx [ 99 ] = xx [ 100 ] / xx [
103 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 409 , xx + 402 , xx + 111 ) ;
xx [ 100 ] = xx [ 341 ] + xx [ 111 ] ; xx [ 103 ] = xx [ 214 ] + xx [ 112 ] ;
xx [ 115 ] = xx [ 300 ] + xx [ 113 ] ; xx [ 111 ] = xx [ 309 ] + xx [ 114 ] ;
xx [ 112 ] = sqrt ( xx [ 100 ] * xx [ 100 ] + xx [ 103 ] * xx [ 103 ] + xx [
115 ] * xx [ 115 ] + xx [ 111 ] * xx [ 111 ] ) ; if ( xx [ 69 ] > xx [ 112 ]
) xx [ 112 ] = xx [ 69 ] ; xx [ 69 ] = xx [ 100 ] / xx [ 112 ] ; xx [ 100 ] =
xx [ 103 ] / xx [ 112 ] ; xx [ 103 ] = xx [ 115 ] / xx [ 112 ] ; xx [ 113 ] =
xx [ 111 ] / xx [ 112 ] ; xx [ 517 ] = xx [ 10 ] ; xx [ 518 ] = xx [ 9 ] ; xx
[ 519 ] = xx [ 11 ] ; xx [ 520 ] = state [ 3 ] ; xx [ 521 ] = state [ 4 ] ;
xx [ 522 ] = state [ 5 ] ; xx [ 523 ] = xx [ 13 ] ; xx [ 524 ] = state [ 7 ]
; xx [ 525 ] = state [ 8 ] ; xx [ 526 ] = state [ 9 ] ; xx [ 527 ] = state [
10 ] ; xx [ 528 ] = state [ 11 ] ; xx [ 529 ] = xx [ 34 ] ; xx [ 530 ] = xx [
15 ] ; xx [ 531 ] = xx [ 16 ] ; xx [ 532 ] = xx [ 17 ] ; xx [ 533 ] = state [
16 ] ; xx [ 534 ] = state [ 17 ] ; xx [ 535 ] = state [ 18 ] ; xx [ 536 ] =
state [ 19 ] ; xx [ 537 ] = state [ 20 ] ; xx [ 538 ] = xx [ 41 ] ; xx [ 539
] = xx [ 30 ] ; xx [ 540 ] = xx [ 33 ] ; xx [ 541 ] = xx [ 35 ] ; xx [ 542 ]
= state [ 25 ] ; xx [ 543 ] = state [ 26 ] ; xx [ 544 ] = state [ 27 ] ; xx [
545 ] = xx [ 39 ] ; xx [ 546 ] = xx [ 40 ] ; xx [ 547 ] = xx [ 45 ] ; xx [
548 ] = state [ 31 ] ; xx [ 549 ] = state [ 32 ] ; xx [ 550 ] = state [ 33 ]
; xx [ 551 ] = xx [ 56 ] ; xx [ 552 ] = state [ 35 ] ; xx [ 553 ] = state [
36 ] ; xx [ 554 ] = state [ 37 ] ; xx [ 555 ] = state [ 38 ] ; xx [ 556 ] =
state [ 39 ] ; xx [ 557 ] = xx [ 72 ] ; xx [ 558 ] = xx [ 67 ] ; xx [ 559 ] =
xx [ 68 ] ; xx [ 560 ] = xx [ 73 ] ; xx [ 561 ] = state [ 44 ] ; xx [ 562 ] =
state [ 45 ] ; xx [ 563 ] = state [ 46 ] ; xx [ 564 ] = state [ 47 ] ; xx [
565 ] = state [ 48 ] ; xx [ 566 ] = xx [ 82 ] ; xx [ 567 ] = xx [ 70 ] ; xx [
568 ] = xx [ 71 ] ; xx [ 569 ] = xx [ 78 ] ; xx [ 570 ] = state [ 53 ] ; xx [
571 ] = state [ 54 ] ; xx [ 572 ] = state [ 55 ] ; xx [ 573 ] = xx [ 80 ] ;
xx [ 574 ] = xx [ 81 ] ; xx [ 575 ] = xx [ 83 ] ; xx [ 576 ] = state [ 59 ] ;
xx [ 577 ] = state [ 60 ] ; xx [ 578 ] = state [ 61 ] ; xx [ 579 ] = xx [ 84
] ; xx [ 580 ] = state [ 63 ] ; xx [ 581 ] = state [ 64 ] ; xx [ 582 ] =
state [ 65 ] ; xx [ 583 ] = state [ 66 ] ; xx [ 584 ] = state [ 67 ] ; xx [
585 ] = xx [ 110 ] ; xx [ 586 ] = xx [ 85 ] ; xx [ 587 ] = xx [ 98 ] ; xx [
588 ] = xx [ 99 ] ; xx [ 589 ] = state [ 72 ] ; xx [ 590 ] = state [ 73 ] ;
xx [ 591 ] = state [ 74 ] ; xx [ 592 ] = state [ 75 ] ; xx [ 593 ] = state [
76 ] ; xx [ 594 ] = xx [ 69 ] ; xx [ 595 ] = xx [ 100 ] ; xx [ 596 ] = xx [
103 ] ; xx [ 597 ] = xx [ 113 ] ; xx [ 598 ] = state [ 81 ] ; xx [ 599 ] =
state [ 82 ] ; xx [ 600 ] = state [ 83 ] ; xx [ 601 ] = state [ 84 ] ; xx [
602 ] = state [ 85 ] ; xx [ 603 ] = state [ 86 ] ; xx [ 604 ] = state [ 87 ]
; xx [ 605 ] = state [ 88 ] ; xx [ 606 ] = state [ 89 ] ; xx [ 607 ] = state
[ 90 ] ; xx [ 608 ] = state [ 91 ] ; xx [ 609 ] = state [ 92 ] ; xx [ 111 ] =
xx [ 10 ] * xx [ 0 ] ; xx [ 10 ] = sin ( xx [ 111 ] ) ; xx [ 112 ] = xx [ 9 ]
* xx [ 0 ] ; xx [ 9 ] = sin ( xx [ 112 ] ) ; xx [ 114 ] = xx [ 10 ] * xx [ 9
] ; xx [ 115 ] = xx [ 11 ] * xx [ 0 ] ; xx [ 11 ] = sin ( xx [ 115 ] ) ; xx [
122 ] = cos ( xx [ 115 ] ) ; xx [ 115 ] = cos ( xx [ 111 ] ) ; xx [ 111 ] =
cos ( xx [ 112 ] ) ; xx [ 112 ] = xx [ 115 ] * xx [ 111 ] ; xx [ 123 ] = xx [
114 ] * xx [ 11 ] - xx [ 122 ] * xx [ 112 ] ; xx [ 124 ] = xx [ 111 ] * xx [
10 ] ; xx [ 10 ] = xx [ 115 ] * xx [ 9 ] ; xx [ 9 ] = xx [ 122 ] * xx [ 124 ]
+ xx [ 10 ] * xx [ 11 ] ; xx [ 111 ] = - xx [ 9 ] ; xx [ 115 ] = xx [ 124 ] *
xx [ 11 ] - xx [ 122 ] * xx [ 10 ] ; xx [ 10 ] = xx [ 112 ] * xx [ 11 ] + xx
[ 122 ] * xx [ 114 ] ; xx [ 11 ] = - xx [ 10 ] ; xx [ 150 ] = xx [ 123 ] ; xx
[ 151 ] = xx [ 111 ] ; xx [ 152 ] = xx [ 115 ] ; xx [ 153 ] = xx [ 11 ] ;
pm_math_Quaternion_xform_ra ( xx + 150 , xx + 24 , xx + 154 ) ; xx [ 157 ] =
xx [ 111 ] ; xx [ 158 ] = xx [ 115 ] ; xx [ 159 ] = xx [ 11 ] ; xx [ 11 ] =
xx [ 27 ] * xx [ 115 ] ; xx [ 111 ] = xx [ 10 ] * xx [ 29 ] - xx [ 9 ] * xx [
27 ] ; xx [ 9 ] = xx [ 29 ] * xx [ 115 ] ; xx [ 163 ] = - xx [ 11 ] ; xx [
164 ] = xx [ 111 ] ; xx [ 165 ] = xx [ 9 ] ; pm_math_Vector3_cross_ra ( xx +
157 , xx + 163 , xx + 172 ) ; xx [ 10 ] = xx [ 1 ] - ( xx [ 172 ] - xx [ 11 ]
* xx [ 123 ] ) * xx [ 14 ] ; xx [ 163 ] = xx [ 34 ] ; xx [ 164 ] = xx [ 15 ]
; xx [ 165 ] = xx [ 16 ] ; xx [ 166 ] = xx [ 17 ] ;
pm_math_Quaternion_composeInverse_ra ( xx + 163 , xx + 74 , xx + 179 ) ;
pm_math_Quaternion_compose_ra ( xx + 59 , xx + 179 , xx + 163 ) ;
pm_math_Quaternion_compose_ra ( xx + 63 , xx + 163 , xx + 179 ) ;
pm_math_Quaternion_xform_ra ( xx + 179 , xx + 18 , xx + 15 ) ;
pm_math_Quaternion_xform_ra ( xx + 163 , xx + 36 , xx + 157 ) ; xx [ 163 ] =
xx [ 3 ] + xx [ 157 ] ; xx [ 164 ] = xx [ 7 ] + xx [ 158 ] ; xx [ 165 ] = xx
[ 159 ] - xx [ 42 ] ; pm_math_Quaternion_xform_ra ( xx + 63 , xx + 163 , xx +
157 ) ; xx [ 1 ] = ( xx [ 123 ] * xx [ 111 ] + xx [ 173 ] ) * xx [ 14 ] ; xx
[ 11 ] = xx [ 79 ] - xx [ 14 ] * ( xx [ 174 ] + xx [ 9 ] * xx [ 123 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 150 , xx + 126 , xx + 63 ) ; xx [ 150 ] =
xx [ 41 ] ; xx [ 151 ] = xx [ 30 ] ; xx [ 152 ] = xx [ 33 ] ; xx [ 153 ] = xx
[ 35 ] ; pm_math_Quaternion_composeInverse_ra ( xx + 150 , xx + 74 , xx + 163
) ; pm_math_Quaternion_compose_ra ( xx + 59 , xx + 163 , xx + 150 ) ;
pm_math_Quaternion_compose_ra ( xx + 146 , xx + 150 , xx + 163 ) ;
pm_math_Quaternion_xform_ra ( xx + 163 , xx + 18 , xx + 33 ) ;
pm_math_Quaternion_xform_ra ( xx + 150 , xx + 36 , xx + 122 ) ; xx [ 150 ] =
xx [ 3 ] + xx [ 122 ] ; xx [ 151 ] = xx [ 7 ] + xx [ 123 ] ; xx [ 152 ] = xx
[ 124 ] - xx [ 42 ] ; pm_math_Quaternion_xform_ra ( xx + 146 , xx + 150 , xx
+ 122 ) ; xx [ 9 ] = xx [ 39 ] * xx [ 0 ] ; xx [ 30 ] = sin ( xx [ 9 ] ) ; xx
[ 39 ] = xx [ 40 ] * xx [ 0 ] ; xx [ 40 ] = sin ( xx [ 39 ] ) ; xx [ 41 ] =
xx [ 30 ] * xx [ 40 ] ; xx [ 66 ] = xx [ 45 ] * xx [ 0 ] ; xx [ 45 ] = sin (
xx [ 66 ] ) ; xx [ 111 ] = cos ( xx [ 66 ] ) ; xx [ 66 ] = cos ( xx [ 9 ] ) ;
xx [ 9 ] = cos ( xx [ 39 ] ) ; xx [ 39 ] = xx [ 66 ] * xx [ 9 ] ; xx [ 112 ]
= xx [ 41 ] * xx [ 45 ] - xx [ 111 ] * xx [ 39 ] ; xx [ 114 ] = xx [ 39 ] *
xx [ 45 ] + xx [ 111 ] * xx [ 41 ] ; xx [ 39 ] = xx [ 9 ] * xx [ 30 ] ; xx [
9 ] = xx [ 66 ] * xx [ 40 ] ; xx [ 30 ] = xx [ 111 ] * xx [ 39 ] + xx [ 9 ] *
xx [ 45 ] ; xx [ 40 ] = xx [ 39 ] * xx [ 45 ] - xx [ 111 ] * xx [ 9 ] ; xx [
146 ] = xx [ 144 ] * xx [ 112 ] - xx [ 114 ] * xx [ 178 ] ; xx [ 147 ] = - (
xx [ 30 ] * xx [ 144 ] - xx [ 178 ] * xx [ 40 ] ) ; xx [ 148 ] = xx [ 144 ] *
xx [ 40 ] + xx [ 30 ] * xx [ 178 ] ; xx [ 149 ] = - ( xx [ 178 ] * xx [ 112 ]
+ xx [ 114 ] * xx [ 144 ] ) ; pm_math_Quaternion_xform_ra ( xx + 146 , xx +
24 , xx + 150 ) ; xx [ 163 ] = - xx [ 30 ] ; xx [ 164 ] = xx [ 40 ] ; xx [
165 ] = - xx [ 114 ] ; xx [ 9 ] = xx [ 27 ] * xx [ 40 ] ; xx [ 39 ] = xx [
114 ] * xx [ 29 ] - xx [ 30 ] * xx [ 27 ] ; xx [ 30 ] = xx [ 29 ] * xx [ 40 ]
; xx [ 172 ] = - xx [ 9 ] ; xx [ 173 ] = xx [ 39 ] ; xx [ 174 ] = xx [ 30 ] ;
pm_math_Vector3_cross_ra ( xx + 163 , xx + 172 , xx + 175 ) ; xx [ 40 ] = (
xx [ 175 ] - xx [ 9 ] * xx [ 112 ] ) * xx [ 14 ] - xx [ 29 ] ; xx [ 9 ] = xx
[ 40 ] * xx [ 178 ] ; xx [ 41 ] = ( xx [ 112 ] * xx [ 39 ] + xx [ 176 ] ) *
xx [ 14 ] ; xx [ 39 ] = xx [ 178 ] * xx [ 41 ] ; xx [ 45 ] = ( xx [ 178 ] *
xx [ 9 ] - xx [ 144 ] * xx [ 39 ] ) * xx [ 14 ] - xx [ 40 ] - xx [ 102 ] ; xx
[ 163 ] = xx [ 72 ] ; xx [ 164 ] = xx [ 67 ] ; xx [ 165 ] = xx [ 68 ] ; xx [
166 ] = xx [ 73 ] ; pm_math_Quaternion_composeInverse_ra ( xx + 163 , xx + 74
, xx + 179 ) ; pm_math_Quaternion_compose_ra ( xx + 59 , xx + 179 , xx + 163
) ; pm_math_Quaternion_compose_ra ( xx + 242 , xx + 163 , xx + 179 ) ;
pm_math_Quaternion_xform_ra ( xx + 179 , xx + 18 , xx + 66 ) ;
pm_math_Quaternion_xform_ra ( xx + 163 , xx + 36 , xx + 172 ) ; xx [ 163 ] =
xx [ 3 ] + xx [ 172 ] ; xx [ 164 ] = xx [ 7 ] + xx [ 173 ] ; xx [ 165 ] = xx
[ 174 ] - xx [ 42 ] ; pm_math_Quaternion_xform_ra ( xx + 242 , xx + 163 , xx
+ 172 ) ; xx [ 40 ] = xx [ 14 ] * ( xx [ 178 ] * xx [ 39 ] + xx [ 144 ] * xx
[ 9 ] ) - xx [ 41 ] - xx [ 120 ] ; xx [ 9 ] = xx [ 79 ] - xx [ 14 ] * ( xx [
177 ] + xx [ 30 ] * xx [ 112 ] ) ; pm_math_Quaternion_xform_ra ( xx + 146 ,
xx + 126 , xx + 163 ) ; xx [ 146 ] = xx [ 82 ] ; xx [ 147 ] = xx [ 70 ] ; xx
[ 148 ] = xx [ 71 ] ; xx [ 149 ] = xx [ 78 ] ;
pm_math_Quaternion_composeInverse_ra ( xx + 146 , xx + 74 , xx + 70 ) ;
pm_math_Quaternion_compose_ra ( xx + 59 , xx + 70 , xx + 146 ) ;
pm_math_Quaternion_compose_ra ( xx + 285 , xx + 146 , xx + 70 ) ;
pm_math_Quaternion_xform_ra ( xx + 70 , xx + 18 , xx + 175 ) ;
pm_math_Quaternion_xform_ra ( xx + 146 , xx + 36 , xx + 70 ) ; xx [ 146 ] =
xx [ 3 ] + xx [ 70 ] ; xx [ 147 ] = xx [ 7 ] + xx [ 71 ] ; xx [ 148 ] = xx [
72 ] - xx [ 42 ] ; pm_math_Quaternion_xform_ra ( xx + 285 , xx + 146 , xx +
70 ) ; xx [ 30 ] = xx [ 80 ] * xx [ 0 ] ; xx [ 39 ] = sin ( xx [ 30 ] ) ; xx
[ 41 ] = xx [ 81 ] * xx [ 0 ] ; xx [ 73 ] = sin ( xx [ 41 ] ) ; xx [ 78 ] =
xx [ 39 ] * xx [ 73 ] ; xx [ 80 ] = xx [ 83 ] * xx [ 0 ] ; xx [ 81 ] = sin (
xx [ 80 ] ) ; xx [ 82 ] = cos ( xx [ 80 ] ) ; xx [ 80 ] = cos ( xx [ 30 ] ) ;
xx [ 30 ] = cos ( xx [ 41 ] ) ; xx [ 41 ] = xx [ 80 ] * xx [ 30 ] ; xx [ 83 ]
= xx [ 78 ] * xx [ 81 ] - xx [ 82 ] * xx [ 41 ] ; xx [ 102 ] = xx [ 41 ] * xx
[ 81 ] + xx [ 82 ] * xx [ 78 ] ; xx [ 41 ] = xx [ 30 ] * xx [ 39 ] ; xx [ 30
] = xx [ 80 ] * xx [ 73 ] ; xx [ 39 ] = xx [ 82 ] * xx [ 41 ] + xx [ 30 ] *
xx [ 81 ] ; xx [ 73 ] = xx [ 41 ] * xx [ 81 ] - xx [ 82 ] * xx [ 30 ] ; xx [
146 ] = - ( xx [ 145 ] * xx [ 83 ] + xx [ 102 ] * xx [ 223 ] ) ; xx [ 147 ] =
xx [ 39 ] * xx [ 145 ] + xx [ 223 ] * xx [ 73 ] ; xx [ 148 ] = xx [ 39 ] * xx
[ 223 ] - xx [ 145 ] * xx [ 73 ] ; xx [ 149 ] = xx [ 102 ] * xx [ 145 ] - xx
[ 223 ] * xx [ 83 ] ; pm_math_Quaternion_xform_ra ( xx + 146 , xx + 24 , xx +
80 ) ; xx [ 30 ] = xx [ 102 ] * xx [ 29 ] - xx [ 39 ] * xx [ 27 ] ; xx [ 179
] = - xx [ 39 ] ; xx [ 180 ] = xx [ 73 ] ; xx [ 181 ] = - xx [ 102 ] ; xx [
39 ] = xx [ 27 ] * xx [ 73 ] ; xx [ 41 ] = xx [ 29 ] * xx [ 73 ] ; xx [ 182 ]
= - xx [ 39 ] ; xx [ 183 ] = xx [ 30 ] ; xx [ 184 ] = xx [ 41 ] ;
pm_math_Vector3_cross_ra ( xx + 179 , xx + 182 , xx + 188 ) ; xx [ 73 ] = (
xx [ 83 ] * xx [ 30 ] + xx [ 189 ] ) * xx [ 14 ] ; xx [ 30 ] = xx [ 223 ] *
xx [ 73 ] ; xx [ 78 ] = ( xx [ 188 ] - xx [ 39 ] * xx [ 83 ] ) * xx [ 14 ] -
xx [ 29 ] ; xx [ 39 ] = xx [ 78 ] * xx [ 223 ] ; xx [ 102 ] = ( xx [ 145 ] *
xx [ 30 ] + xx [ 223 ] * xx [ 39 ] ) * xx [ 14 ] - xx [ 78 ] - xx [ 168 ] ;
xx [ 179 ] = xx [ 110 ] ; xx [ 180 ] = xx [ 85 ] ; xx [ 181 ] = xx [ 98 ] ;
xx [ 182 ] = xx [ 99 ] ; pm_math_Quaternion_composeInverse_ra ( xx + 179 , xx
+ 74 , xx + 191 ) ; pm_math_Quaternion_compose_ra ( xx + 59 , xx + 191 , xx +
179 ) ; pm_math_Quaternion_compose_ra ( xx + 370 , xx + 179 , xx + 191 ) ;
pm_math_Quaternion_xform_ra ( xx + 191 , xx + 18 , xx + 110 ) ;
pm_math_Quaternion_xform_ra ( xx + 179 , xx + 36 , xx + 168 ) ; xx [ 179 ] =
xx [ 3 ] + xx [ 168 ] ; xx [ 180 ] = xx [ 7 ] + xx [ 169 ] ; xx [ 181 ] = xx
[ 170 ] - xx [ 42 ] ; pm_math_Quaternion_xform_ra ( xx + 370 , xx + 179 , xx
+ 168 ) ; xx [ 78 ] = xx [ 14 ] * ( xx [ 223 ] * xx [ 30 ] - xx [ 145 ] * xx
[ 39 ] ) - xx [ 73 ] + xx [ 171 ] ; xx [ 30 ] = xx [ 79 ] - xx [ 14 ] * ( xx
[ 190 ] + xx [ 41 ] * xx [ 83 ] ) ; pm_math_Quaternion_xform_ra ( xx + 146 ,
xx + 126 , xx + 179 ) ; xx [ 146 ] = xx [ 69 ] ; xx [ 147 ] = xx [ 100 ] ; xx
[ 148 ] = xx [ 103 ] ; xx [ 149 ] = xx [ 113 ] ;
pm_math_Quaternion_composeInverse_ra ( xx + 146 , xx + 74 , xx + 188 ) ;
pm_math_Quaternion_compose_ra ( xx + 59 , xx + 188 , xx + 146 ) ;
pm_math_Quaternion_compose_ra ( xx + 413 , xx + 146 , xx + 188 ) ;
pm_math_Quaternion_xform_ra ( xx + 188 , xx + 18 , xx + 98 ) ;
pm_math_Quaternion_xform_ra ( xx + 146 , xx + 36 , xx + 113 ) ; xx [ 146 ] =
xx [ 3 ] + xx [ 113 ] ; xx [ 147 ] = xx [ 7 ] + xx [ 114 ] ; xx [ 148 ] = xx
[ 115 ] - xx [ 42 ] ; pm_math_Quaternion_xform_ra ( xx + 413 , xx + 146 , xx
+ 113 ) ; xx [ 39 ] = xx [ 13 ] * xx [ 0 ] ; xx [ 13 ] = cos ( xx [ 39 ] ) ;
xx [ 41 ] = sin ( xx [ 39 ] ) ; xx [ 39 ] = xx [ 352 ] * xx [ 41 ] ; xx [ 69
] = xx [ 437 ] * xx [ 41 ] ; xx [ 73 ] = xx [ 14 ] * ( xx [ 13 ] * xx [ 39 ]
+ xx [ 69 ] * xx [ 41 ] ) ; xx [ 79 ] = ( xx [ 13 ] * xx [ 69 ] - xx [ 39 ] *
xx [ 41 ] ) * xx [ 14 ] ; xx [ 146 ] = xx [ 73 ] - xx [ 73 ] + xx [ 444 ] -
xx [ 452 ] ; xx [ 147 ] = xx [ 447 ] ; xx [ 148 ] = xx [ 79 ] - xx [ 79 ] -
xx [ 456 ] - xx [ 458 ] ; xx [ 39 ] = xx [ 446 ] * xx [ 13 ] ; xx [ 13 ] = xx
[ 446 ] * xx [ 41 ] ; xx [ 41 ] = xx [ 39 ] * xx [ 13 ] ; xx [ 69 ] = xx [ 13
] * xx [ 13 ] ; xx [ 13 ] = xx [ 39 ] * xx [ 39 ] ; xx [ 182 ] = - ( ( xx [
41 ] + xx [ 41 ] ) * xx [ 14 ] ) ; xx [ 183 ] = xx [ 5 ] - ( xx [ 69 ] + xx [
13 ] ) * xx [ 14 ] ; xx [ 184 ] = xx [ 14 ] * ( xx [ 69 ] - xx [ 13 ] ) ; xx
[ 188 ] = xx [ 5 ] - ( xx [ 69 ] + xx [ 69 ] ) * xx [ 14 ] ; xx [ 189 ] = xx
[ 14 ] * ( xx [ 41 ] - xx [ 41 ] ) ; xx [ 190 ] = - ( ( xx [ 41 ] + xx [ 41 ]
) * xx [ 14 ] ) ; xx [ 13 ] = xx [ 56 ] * xx [ 0 ] ; xx [ 39 ] = cos ( xx [
13 ] ) ; xx [ 41 ] = sin ( xx [ 13 ] ) ; xx [ 13 ] = xx [ 453 ] * xx [ 41 ] ;
xx [ 56 ] = xx [ 437 ] * xx [ 41 ] ; xx [ 69 ] = xx [ 14 ] * ( xx [ 39 ] * xx
[ 13 ] + xx [ 56 ] * xx [ 41 ] ) ; xx [ 73 ] = ( xx [ 39 ] * xx [ 56 ] - xx [
13 ] * xx [ 41 ] ) * xx [ 14 ] ; xx [ 191 ] = xx [ 69 ] - xx [ 69 ] + xx [
444 ] - xx [ 478 ] ; xx [ 192 ] = xx [ 470 ] ; xx [ 193 ] = xx [ 73 ] - xx [
73 ] - xx [ 456 ] - xx [ 482 ] ; xx [ 13 ] = xx [ 446 ] * xx [ 39 ] ; xx [ 39
] = xx [ 446 ] * xx [ 41 ] ; xx [ 41 ] = xx [ 13 ] * xx [ 39 ] ; xx [ 56 ] =
xx [ 39 ] * xx [ 39 ] ; xx [ 39 ] = xx [ 13 ] * xx [ 13 ] ; xx [ 194 ] = - (
( xx [ 41 ] + xx [ 41 ] ) * xx [ 14 ] ) ; xx [ 195 ] = xx [ 5 ] - ( xx [ 56 ]
+ xx [ 39 ] ) * xx [ 14 ] ; xx [ 196 ] = xx [ 14 ] * ( xx [ 56 ] - xx [ 39 ]
) ; xx [ 201 ] = xx [ 5 ] - ( xx [ 56 ] + xx [ 56 ] ) * xx [ 14 ] ; xx [ 202
] = xx [ 14 ] * ( xx [ 41 ] - xx [ 41 ] ) ; xx [ 203 ] = - ( ( xx [ 41 ] + xx
[ 41 ] ) * xx [ 14 ] ) ; xx [ 13 ] = xx [ 84 ] * xx [ 0 ] ; xx [ 39 ] = cos (
xx [ 13 ] ) ; xx [ 41 ] = sin ( xx [ 13 ] ) ; xx [ 13 ] = xx [ 453 ] * xx [
41 ] ; xx [ 56 ] = xx [ 437 ] * xx [ 41 ] ; xx [ 69 ] = xx [ 14 ] * ( xx [ 39
] * xx [ 13 ] + xx [ 56 ] * xx [ 41 ] ) ; xx [ 73 ] = ( xx [ 39 ] * xx [ 56 ]
- xx [ 13 ] * xx [ 41 ] ) * xx [ 14 ] ; xx [ 83 ] = xx [ 69 ] - xx [ 69 ] +
xx [ 444 ] - xx [ 494 ] ; xx [ 84 ] = xx [ 486 ] ; xx [ 85 ] = xx [ 73 ] - xx
[ 73 ] - xx [ 456 ] - xx [ 500 ] ; xx [ 13 ] = xx [ 446 ] * xx [ 39 ] ; xx [
39 ] = xx [ 446 ] * xx [ 41 ] ; xx [ 41 ] = xx [ 13 ] * xx [ 39 ] ; xx [ 56 ]
= xx [ 39 ] * xx [ 39 ] ; xx [ 39 ] = xx [ 13 ] * xx [ 13 ] ; xx [ 204 ] = -
( ( xx [ 41 ] + xx [ 41 ] ) * xx [ 14 ] ) ; xx [ 205 ] = xx [ 5 ] - ( xx [ 56
] + xx [ 39 ] ) * xx [ 14 ] ; xx [ 206 ] = xx [ 14 ] * ( xx [ 56 ] - xx [ 39
] ) ; xx [ 213 ] = xx [ 5 ] - ( xx [ 56 ] + xx [ 56 ] ) * xx [ 14 ] ; xx [
214 ] = xx [ 14 ] * ( xx [ 41 ] - xx [ 41 ] ) ; xx [ 215 ] = - ( ( xx [ 41 ]
+ xx [ 41 ] ) * xx [ 14 ] ) ; xx [ 236 ] = fabs ( xx [ 154 ] + xx [ 10 ] - (
xx [ 15 ] + xx [ 157 ] - xx [ 47 ] ) - xx [ 54 ] ) ; xx [ 237 ] = fabs ( xx [
155 ] - ( xx [ 1 ] + xx [ 16 ] + xx [ 158 ] - xx [ 48 ] ) - xx [ 4 ] ) ; xx [
238 ] = fabs ( xx [ 156 ] + xx [ 11 ] - ( xx [ 17 ] + xx [ 159 ] - xx [ 49 ]
) + xx [ 2 ] ) ; xx [ 239 ] = fabs ( xx [ 63 ] + xx [ 10 ] - ( xx [ 33 ] + xx
[ 122 ] - xx [ 89 ] ) - xx [ 54 ] ) ; xx [ 240 ] = fabs ( xx [ 64 ] - ( xx [
1 ] + xx [ 34 ] + xx [ 123 ] - xx [ 90 ] ) + xx [ 4 ] ) ; xx [ 241 ] = fabs (
xx [ 65 ] + xx [ 11 ] - ( xx [ 35 ] + xx [ 124 ] - xx [ 91 ] ) + xx [ 2 ] ) ;
xx [ 242 ] = fabs ( xx [ 150 ] + xx [ 45 ] - ( xx [ 66 ] + xx [ 172 ] - xx [
132 ] ) + xx [ 32 ] ) ; xx [ 243 ] = fabs ( xx [ 151 ] + xx [ 40 ] - ( xx [
67 ] + xx [ 173 ] - xx [ 133 ] ) + xx [ 12 ] ) ; xx [ 244 ] = fabs ( xx [ 152
] + xx [ 9 ] - ( xx [ 68 ] + xx [ 174 ] - xx [ 134 ] ) + xx [ 2 ] ) ; xx [
245 ] = fabs ( xx [ 163 ] + xx [ 45 ] - ( xx [ 175 ] + xx [ 70 ] - xx [ 160 ]
) + xx [ 31 ] ) ; xx [ 246 ] = fabs ( xx [ 164 ] + xx [ 40 ] - ( xx [ 176 ] +
xx [ 71 ] - xx [ 161 ] ) + xx [ 101 ] ) ; xx [ 247 ] = fabs ( xx [ 165 ] + xx
[ 9 ] - ( xx [ 177 ] + xx [ 72 ] - xx [ 162 ] ) + xx [ 2 ] ) ; xx [ 248 ] =
fabs ( xx [ 80 ] + xx [ 102 ] - ( xx [ 110 ] + xx [ 168 ] - xx [ 185 ] ) + xx
[ 167 ] ) ; xx [ 249 ] = fabs ( xx [ 81 ] + xx [ 78 ] - ( xx [ 111 ] + xx [
169 ] - xx [ 186 ] ) - xx [ 136 ] ) ; xx [ 250 ] = fabs ( xx [ 82 ] + xx [ 30
] - ( xx [ 112 ] + xx [ 170 ] - xx [ 187 ] ) + xx [ 2 ] ) ; xx [ 251 ] = fabs
( xx [ 179 ] + xx [ 102 ] - ( xx [ 98 ] + xx [ 113 ] - xx [ 198 ] ) + xx [ 43
] ) ; xx [ 252 ] = fabs ( xx [ 180 ] + xx [ 78 ] - ( xx [ 99 ] + xx [ 114 ] -
xx [ 199 ] ) - xx [ 44 ] ) ; xx [ 253 ] = fabs ( xx [ 181 ] + xx [ 30 ] - (
xx [ 100 ] + xx [ 115 ] - xx [ 200 ] ) + xx [ 2 ] ) ; xx [ 254 ] = fabs (
sm_core_canonicalAngle ( ( state [ 84 ] + sm_core_canonicalAngle ( atan2 (
pm_math_Vector3_dot_ra ( xx + 146 , xx + 182 ) , pm_math_Vector3_dot_ra ( xx
+ 146 , xx + 188 ) ) - state [ 84 ] ) - state [ 90 ] ) / xx [ 217 ] + atan2 (
pm_math_Vector3_dot_ra ( xx + 146 , xx + 474 ) , pm_math_Vector3_dot_ra ( xx
+ 146 , xx + 463 ) ) ) * xx [ 217 ] ) ; xx [ 255 ] = fabs (
sm_core_canonicalAngle ( ( state [ 86 ] + sm_core_canonicalAngle ( atan2 (
pm_math_Vector3_dot_ra ( xx + 191 , xx + 194 ) , pm_math_Vector3_dot_ra ( xx
+ 191 , xx + 201 ) ) - state [ 86 ] ) - state [ 91 ] ) / xx [ 217 ] + atan2 (
pm_math_Vector3_dot_ra ( xx + 191 , xx + 495 ) , pm_math_Vector3_dot_ra ( xx
+ 191 , xx + 487 ) ) ) * xx [ 217 ] ) ; xx [ 256 ] = fabs (
sm_core_canonicalAngle ( ( state [ 88 ] + sm_core_canonicalAngle ( atan2 (
pm_math_Vector3_dot_ra ( xx + 83 , xx + 204 ) , pm_math_Vector3_dot_ra ( xx +
83 , xx + 213 ) ) - state [ 88 ] ) - state [ 92 ] ) / xx [ 217 ] + atan2 (
pm_math_Vector3_dot_ra ( xx + 83 , xx + 514 ) , pm_math_Vector3_dot_ra ( xx +
83 , xx + 506 ) ) ) * xx [ 217 ] ) ; ii [ 0 ] = 236 ; { int ll ; for ( ll =
237 ; ll < 257 ; ++ ll ) if ( xx [ ll ] > xx [ ii [ 0 ] ] ) ii [ 0 ] = ll ; }
ii [ 0 ] -= 236 ; xx [ 1 ] = xx [ 236 + ( ii [ 0 ] ) ] ; xx [ 2 ] = 1.0e-9 ;
xx [ 4 ] = xx [ 1 ] - xx [ 2 ] ; if ( xx [ 4 ] < 0.0 ) ii [ 1 ] = - 1 ; else
if ( xx [ 4 ] > 0.0 ) ii [ 1 ] = + 1 ; else ii [ 1 ] = 0 ; ii [ 2 ] = ii [ 1
] ; if ( 0 > ii [ 2 ] ) ii [ 2 ] = 0 ; if ( ii [ 2 ] != 0 ) { switch ( ii [ 0
] ) { case 0 : case 1 : case 2 : { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'triped/TriPed/Leg_0/SubChain 1/Coupling_01_2_Spherical_Joint' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 3 : case 4 : case 5 : { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'triped/TriPed/Leg_0/SubChain 2/Coupling02_2_Spherical_Joint' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 6 : case 7 : case 8 : { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'triped/TriPed/Leg_1/SubChain 1/Coupling_01_2_Spherical_Joint' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 9 : case 10 : case 11 : { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'triped/TriPed/Leg_1/SubChain 2/Coupling02_2_Spherical_Joint' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 12 : case 13 : case 14 : { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'triped/TriPed/Leg_2/SubChain 1/Coupling_01_2_Spherical_Joint' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 15 : case 16 : case 17 : { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'triped/TriPed/Leg_2/SubChain 2/Coupling02_2_Spherical_Joint' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 18 : { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'triped/TriPed/Leg_0/OpenSubChain/leg_extend_to_LL_GearConstraint' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 19 : { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'triped/TriPed/Leg_1/OpenSubChain/leg_extend_to_LL_GearConstraint' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 20 : { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'triped/TriPed/Leg_2/OpenSubChain/leg_extend_to_LL_GearConstraint' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } } } xx [ 1 ] = xx [ 0 ] * xx [ 517 ] ; xx [ 4 ] = sin ( xx
[ 1 ] ) ; xx [ 9 ] = xx [ 0 ] * xx [ 518 ] ; xx [ 10 ] = sin ( xx [ 9 ] ) ;
xx [ 11 ] = xx [ 4 ] * xx [ 10 ] ; xx [ 12 ] = xx [ 0 ] * xx [ 519 ] ; xx [
13 ] = sin ( xx [ 12 ] ) ; xx [ 15 ] = cos ( xx [ 12 ] ) ; xx [ 12 ] = cos (
xx [ 1 ] ) ; xx [ 1 ] = cos ( xx [ 9 ] ) ; xx [ 9 ] = xx [ 12 ] * xx [ 1 ] ;
xx [ 16 ] = xx [ 11 ] * xx [ 13 ] - xx [ 15 ] * xx [ 9 ] ; xx [ 17 ] = xx [ 1
] * xx [ 4 ] ; xx [ 1 ] = xx [ 12 ] * xx [ 10 ] ; xx [ 4 ] = xx [ 15 ] * xx [
17 ] + xx [ 1 ] * xx [ 13 ] ; xx [ 10 ] = - xx [ 4 ] ; xx [ 12 ] = xx [ 17 ]
* xx [ 13 ] - xx [ 15 ] * xx [ 1 ] ; xx [ 1 ] = xx [ 9 ] * xx [ 13 ] + xx [
15 ] * xx [ 11 ] ; xx [ 9 ] = - xx [ 1 ] ; xx [ 30 ] = xx [ 16 ] ; xx [ 31 ]
= xx [ 10 ] ; xx [ 32 ] = xx [ 12 ] ; xx [ 33 ] = xx [ 9 ] ; xx [ 11 ] = xx [
5 ] - ( xx [ 12 ] * xx [ 12 ] + xx [ 1 ] * xx [ 1 ] ) * xx [ 14 ] ; xx [ 17 ]
= xx [ 1 ] * xx [ 16 ] - xx [ 4 ] * xx [ 12 ] ; xx [ 34 ] = xx [ 14 ] * xx [
17 ] ; xx [ 35 ] = xx [ 12 ] * xx [ 16 ] + xx [ 4 ] * xx [ 1 ] ; xx [ 39 ] =
xx [ 35 ] * xx [ 14 ] ; xx [ 43 ] = xx [ 11 ] ; xx [ 44 ] = xx [ 34 ] ; xx [
45 ] = xx [ 39 ] ; pm_math_Vector3_cross_ra ( xx + 43 , xx + 24 , xx + 47 ) ;
pm_math_Quaternion_xform_ra ( xx + 30 , xx + 47 , xx + 63 ) ; xx [ 47 ] = - (
xx [ 27 ] * xx [ 34 ] ) ; xx [ 48 ] = xx [ 27 ] * xx [ 11 ] - xx [ 35 ] * xx
[ 28 ] ; xx [ 49 ] = xx [ 29 ] * xx [ 34 ] ; pm_math_Quaternion_xform_ra ( xx
+ 30 , xx + 47 , xx + 66 ) ; xx [ 40 ] = xx [ 5 ] - xx [ 14 ] * xx [ 13 ] *
xx [ 13 ] ; xx [ 41 ] = xx [ 15 ] * xx [ 13 ] ; xx [ 13 ] = xx [ 14 ] * xx [
41 ] ; xx [ 47 ] = - ( xx [ 23 ] * xx [ 40 ] ) ; xx [ 48 ] = xx [ 23 ] * xx [
13 ] ; xx [ 49 ] = xx [ 22 ] * xx [ 13 ] + xx [ 21 ] * xx [ 40 ] ;
pm_math_Quaternion_xform_ra ( xx + 30 , xx + 47 , xx + 69 ) ; xx [ 47 ] = - (
xx [ 27 ] * xx [ 40 ] ) ; xx [ 48 ] = xx [ 27 ] * xx [ 13 ] ; xx [ 49 ] = xx
[ 29 ] * xx [ 40 ] ; pm_math_Quaternion_xform_ra ( xx + 30 , xx + 47 , xx +
78 ) ; xx [ 47 ] = xx [ 10 ] ; xx [ 48 ] = xx [ 12 ] ; xx [ 49 ] = xx [ 9 ] ;
xx [ 9 ] = xx [ 1 ] * xx [ 21 ] ; xx [ 10 ] = xx [ 1 ] * xx [ 22 ] ; xx [ 15
] = xx [ 4 ] * xx [ 21 ] + xx [ 22 ] * xx [ 12 ] ; xx [ 81 ] = - xx [ 9 ] ;
xx [ 82 ] = xx [ 10 ] ; xx [ 83 ] = xx [ 15 ] ; pm_math_Vector3_cross_ra ( xx
+ 47 , xx + 81 , xx + 89 ) ; xx [ 54 ] = xx [ 4 ] * xx [ 29 ] ; xx [ 56 ] =
xx [ 1 ] * xx [ 29 ] ; xx [ 72 ] = xx [ 14 ] * ( xx [ 54 ] * xx [ 12 ] - xx [
56 ] * xx [ 16 ] ) ; xx [ 73 ] = xx [ 0 ] * xx [ 527 ] ; xx [ 81 ] = sin ( xx
[ 73 ] ) ; xx [ 82 ] = cos ( xx [ 73 ] ) ; xx [ 83 ] = - ( xx [ 55 ] * xx [
81 ] ) ; xx [ 84 ] = xx [ 57 ] * xx [ 81 ] ; xx [ 85 ] = xx [ 58 ] * xx [ 81
] ; pm_math_Quaternion_compose_ra ( xx + 50 , xx + 82 , xx + 98 ) ;
pm_math_Quaternion_composeInverse_ra ( xx + 529 , xx + 74 , xx + 50 ) ;
pm_math_Quaternion_compose_ra ( xx + 59 , xx + 50 , xx + 81 ) ;
pm_math_Quaternion_compose_ra ( xx + 98 , xx + 81 , xx + 50 ) ;
pm_math_Quaternion_xform_ra ( xx + 50 , xx + 86 , xx + 110 ) ;
pm_math_Quaternion_xform_ra ( xx + 81 , xx + 92 , xx + 113 ) ;
pm_math_Quaternion_xform_ra ( xx + 98 , xx + 113 , xx + 122 ) ;
pm_math_Quaternion_xform_ra ( xx + 50 , xx + 95 , xx + 113 ) ;
pm_math_Quaternion_xform_ra ( xx + 81 , xx + 104 , xx + 130 ) ;
pm_math_Quaternion_xform_ra ( xx + 98 , xx + 130 , xx + 133 ) ;
pm_math_Quaternion_xform_ra ( xx + 50 , xx + 107 , xx + 130 ) ;
pm_math_Quaternion_xform_ra ( xx + 81 , xx + 116 , xx + 146 ) ;
pm_math_Quaternion_xform_ra ( xx + 98 , xx + 146 , xx + 149 ) ; xx [ 73 ] = (
xx [ 1 ] * xx [ 56 ] + xx [ 4 ] * xx [ 54 ] ) * xx [ 14 ] ; xx [ 85 ] = ( xx
[ 54 ] * xx [ 16 ] + xx [ 56 ] * xx [ 12 ] ) * xx [ 14 ] ;
pm_math_Vector3_cross_ra ( xx + 43 , xx + 126 , xx + 146 ) ;
pm_math_Quaternion_xform_ra ( xx + 30 , xx + 146 , xx + 43 ) ; xx [ 146 ] = -
( xx [ 125 ] * xx [ 40 ] ) ; xx [ 147 ] = xx [ 125 ] * xx [ 13 ] ; xx [ 148 ]
= xx [ 8 ] * xx [ 40 ] - xx [ 121 ] * xx [ 13 ] ; pm_math_Quaternion_xform_ra
( xx + 30 , xx + 146 , xx + 152 ) ; xx [ 54 ] = xx [ 1 ] * xx [ 8 ] ; xx [ 56
] = xx [ 1 ] * xx [ 121 ] ; xx [ 1 ] = xx [ 121 ] * xx [ 12 ] - xx [ 4 ] * xx
[ 8 ] ; xx [ 146 ] = - xx [ 54 ] ; xx [ 147 ] = - xx [ 56 ] ; xx [ 148 ] = -
xx [ 1 ] ; pm_math_Vector3_cross_ra ( xx + 47 , xx + 146 , xx + 155 ) ; xx [
4 ] = xx [ 0 ] * xx [ 536 ] ; xx [ 12 ] = sin ( xx [ 4 ] ) ; xx [ 158 ] = cos
( xx [ 4 ] ) ; xx [ 159 ] = - ( xx [ 55 ] * xx [ 12 ] ) ; xx [ 160 ] = xx [
57 ] * xx [ 12 ] ; xx [ 161 ] = xx [ 58 ] * xx [ 12 ] ;
pm_math_Quaternion_compose_ra ( xx + 138 , xx + 158 , xx + 162 ) ;
pm_math_Quaternion_composeInverse_ra ( xx + 538 , xx + 74 , xx + 136 ) ;
pm_math_Quaternion_compose_ra ( xx + 59 , xx + 136 , xx + 140 ) ;
pm_math_Quaternion_compose_ra ( xx + 162 , xx + 140 , xx + 136 ) ;
pm_math_Quaternion_xform_ra ( xx + 136 , xx + 86 , xx + 47 ) ;
pm_math_Quaternion_xform_ra ( xx + 140 , xx + 92 , xx + 146 ) ;
pm_math_Quaternion_xform_ra ( xx + 162 , xx + 146 , xx + 158 ) ;
pm_math_Quaternion_xform_ra ( xx + 136 , xx + 95 , xx + 146 ) ;
pm_math_Quaternion_xform_ra ( xx + 140 , xx + 104 , xx + 166 ) ;
pm_math_Quaternion_xform_ra ( xx + 162 , xx + 166 , xx + 169 ) ;
pm_math_Quaternion_xform_ra ( xx + 136 , xx + 107 , xx + 166 ) ;
pm_math_Quaternion_xform_ra ( xx + 140 , xx + 116 , xx + 172 ) ;
pm_math_Quaternion_xform_ra ( xx + 162 , xx + 172 , xx + 175 ) ; xx [ 4 ] =
xx [ 0 ] * xx [ 545 ] ; xx [ 12 ] = sin ( xx [ 4 ] ) ; xx [ 102 ] = xx [ 0 ]
* xx [ 546 ] ; xx [ 103 ] = sin ( xx [ 102 ] ) ; xx [ 120 ] = xx [ 12 ] * xx
[ 103 ] ; xx [ 161 ] = xx [ 0 ] * xx [ 547 ] ; xx [ 172 ] = sin ( xx [ 161 ]
) ; xx [ 173 ] = cos ( xx [ 161 ] ) ; xx [ 161 ] = cos ( xx [ 4 ] ) ; xx [ 4
] = cos ( xx [ 102 ] ) ; xx [ 102 ] = xx [ 161 ] * xx [ 4 ] ; xx [ 174 ] = xx
[ 120 ] * xx [ 172 ] - xx [ 173 ] * xx [ 102 ] ; xx [ 179 ] = xx [ 102 ] * xx
[ 172 ] + xx [ 173 ] * xx [ 120 ] ; xx [ 102 ] = xx [ 144 ] * xx [ 174 ] - xx
[ 179 ] * xx [ 178 ] ; xx [ 120 ] = xx [ 4 ] * xx [ 12 ] ; xx [ 4 ] = xx [
161 ] * xx [ 103 ] ; xx [ 12 ] = xx [ 173 ] * xx [ 120 ] + xx [ 4 ] * xx [
172 ] ; xx [ 103 ] = xx [ 120 ] * xx [ 172 ] - xx [ 173 ] * xx [ 4 ] ; xx [ 4
] = xx [ 12 ] * xx [ 144 ] - xx [ 178 ] * xx [ 103 ] ; xx [ 120 ] = - xx [ 4
] ; xx [ 161 ] = xx [ 144 ] * xx [ 103 ] + xx [ 12 ] * xx [ 178 ] ; xx [ 180
] = xx [ 178 ] * xx [ 174 ] + xx [ 179 ] * xx [ 144 ] ; xx [ 181 ] = - xx [
180 ] ; xx [ 182 ] = xx [ 102 ] ; xx [ 183 ] = xx [ 120 ] ; xx [ 184 ] = xx [
161 ] ; xx [ 185 ] = xx [ 181 ] ; xx [ 186 ] = xx [ 5 ] - ( xx [ 103 ] * xx [
103 ] + xx [ 179 ] * xx [ 179 ] ) * xx [ 14 ] ; xx [ 187 ] = xx [ 179 ] * xx
[ 174 ] - xx [ 12 ] * xx [ 103 ] ; xx [ 188 ] = xx [ 14 ] * xx [ 187 ] ; xx [
189 ] = xx [ 103 ] * xx [ 174 ] + xx [ 12 ] * xx [ 179 ] ; xx [ 190 ] = xx [
189 ] * xx [ 14 ] ; xx [ 191 ] = xx [ 186 ] ; xx [ 192 ] = xx [ 188 ] ; xx [
193 ] = xx [ 190 ] ; pm_math_Vector3_cross_ra ( xx + 191 , xx + 24 , xx + 194
) ; pm_math_Quaternion_xform_ra ( xx + 182 , xx + 194 , xx + 197 ) ; xx [ 200
] = xx [ 174 ] ; xx [ 201 ] = - xx [ 12 ] ; xx [ 202 ] = xx [ 103 ] ; xx [
203 ] = - xx [ 179 ] ; xx [ 194 ] = - ( xx [ 27 ] * xx [ 188 ] ) ; xx [ 195 ]
= xx [ 27 ] * xx [ 186 ] - xx [ 189 ] * xx [ 28 ] ; xx [ 196 ] = xx [ 29 ] *
xx [ 188 ] ; pm_math_Quaternion_xform_ra ( xx + 200 , xx + 194 , xx + 204 ) ;
xx [ 194 ] = xx [ 178 ] * xx [ 204 ] ; xx [ 195 ] = xx [ 178 ] * xx [ 205 ] ;
xx [ 196 ] = ( xx [ 178 ] * xx [ 194 ] - xx [ 144 ] * xx [ 195 ] ) * xx [ 14
] - xx [ 204 ] ; xx [ 207 ] = xx [ 5 ] - xx [ 14 ] * xx [ 172 ] * xx [ 172 ]
; xx [ 208 ] = xx [ 173 ] * xx [ 172 ] ; xx [ 172 ] = xx [ 14 ] * xx [ 208 ]
; xx [ 213 ] = - ( xx [ 23 ] * xx [ 207 ] ) ; xx [ 214 ] = xx [ 23 ] * xx [
172 ] ; xx [ 215 ] = xx [ 22 ] * xx [ 172 ] + xx [ 21 ] * xx [ 207 ] ;
pm_math_Quaternion_xform_ra ( xx + 182 , xx + 213 , xx + 218 ) ; xx [ 213 ] =
- ( xx [ 27 ] * xx [ 207 ] ) ; xx [ 214 ] = xx [ 27 ] * xx [ 172 ] ; xx [ 215
] = xx [ 29 ] * xx [ 207 ] ; pm_math_Quaternion_xform_ra ( xx + 200 , xx +
213 , xx + 224 ) ; xx [ 173 ] = xx [ 178 ] * xx [ 224 ] ; xx [ 213 ] = xx [
178 ] * xx [ 225 ] ; xx [ 214 ] = ( xx [ 178 ] * xx [ 173 ] - xx [ 144 ] * xx
[ 213 ] ) * xx [ 14 ] - xx [ 224 ] ; xx [ 227 ] = xx [ 120 ] ; xx [ 228 ] =
xx [ 161 ] ; xx [ 229 ] = xx [ 181 ] ; xx [ 120 ] = xx [ 21 ] * xx [ 180 ] ;
xx [ 181 ] = xx [ 22 ] * xx [ 180 ] ; xx [ 215 ] = xx [ 4 ] * xx [ 21 ] + xx
[ 22 ] * xx [ 161 ] ; xx [ 236 ] = - xx [ 120 ] ; xx [ 237 ] = xx [ 181 ] ;
xx [ 238 ] = xx [ 215 ] ; pm_math_Vector3_cross_ra ( xx + 227 , xx + 236 , xx
+ 239 ) ; xx [ 216 ] = xx [ 12 ] * xx [ 29 ] ; xx [ 221 ] = xx [ 179 ] * xx [
29 ] ; xx [ 222 ] = xx [ 14 ] * ( xx [ 216 ] * xx [ 103 ] - xx [ 221 ] * xx [
174 ] ) ; xx [ 230 ] = xx [ 178 ] * xx [ 222 ] ; xx [ 231 ] = ( xx [ 179 ] *
xx [ 221 ] + xx [ 12 ] * xx [ 216 ] ) * xx [ 14 ] - xx [ 29 ] ; xx [ 12 ] =
xx [ 178 ] * xx [ 231 ] ; xx [ 179 ] = ( xx [ 178 ] * xx [ 230 ] - xx [ 144 ]
* xx [ 12 ] ) * xx [ 14 ] ; xx [ 236 ] = xx [ 0 ] * xx [ 555 ] ; xx [ 237 ] =
sin ( xx [ 236 ] ) ; xx [ 242 ] = cos ( xx [ 236 ] ) ; xx [ 243 ] = - ( xx [
55 ] * xx [ 237 ] ) ; xx [ 244 ] = xx [ 57 ] * xx [ 237 ] ; xx [ 245 ] = xx [
58 ] * xx [ 237 ] ; pm_math_Quaternion_compose_ra ( xx + 232 , xx + 242 , xx
+ 246 ) ; pm_math_Quaternion_composeInverse_ra ( xx + 557 , xx + 74 , xx +
232 ) ; pm_math_Quaternion_compose_ra ( xx + 59 , xx + 232 , xx + 242 ) ;
pm_math_Quaternion_compose_ra ( xx + 246 , xx + 242 , xx + 232 ) ;
pm_math_Quaternion_xform_ra ( xx + 232 , xx + 86 , xx + 236 ) ;
pm_math_Quaternion_xform_ra ( xx + 242 , xx + 92 , xx + 250 ) ;
pm_math_Quaternion_xform_ra ( xx + 246 , xx + 250 , xx + 253 ) ;
pm_math_Quaternion_xform_ra ( xx + 232 , xx + 95 , xx + 250 ) ;
pm_math_Quaternion_xform_ra ( xx + 242 , xx + 104 , xx + 256 ) ;
pm_math_Quaternion_xform_ra ( xx + 246 , xx + 256 , xx + 259 ) ;
pm_math_Quaternion_xform_ra ( xx + 232 , xx + 107 , xx + 256 ) ;
pm_math_Quaternion_xform_ra ( xx + 242 , xx + 116 , xx + 262 ) ;
pm_math_Quaternion_xform_ra ( xx + 246 , xx + 262 , xx + 265 ) ; xx [ 262 ] =
xx [ 14 ] * ( xx [ 178 ] * xx [ 195 ] + xx [ 144 ] * xx [ 194 ] ) - xx [ 205
] ; xx [ 194 ] = xx [ 14 ] * ( xx [ 178 ] * xx [ 213 ] + xx [ 144 ] * xx [
173 ] ) - xx [ 225 ] ; xx [ 173 ] = xx [ 14 ] * ( xx [ 178 ] * xx [ 12 ] + xx
[ 144 ] * xx [ 230 ] ) ; xx [ 12 ] = ( xx [ 216 ] * xx [ 174 ] + xx [ 221 ] *
xx [ 103 ] ) * xx [ 14 ] ; pm_math_Vector3_cross_ra ( xx + 191 , xx + 126 ,
xx + 268 ) ; pm_math_Quaternion_xform_ra ( xx + 182 , xx + 268 , xx + 191 ) ;
xx [ 268 ] = - ( xx [ 125 ] * xx [ 207 ] ) ; xx [ 269 ] = xx [ 125 ] * xx [
172 ] ; xx [ 270 ] = xx [ 8 ] * xx [ 207 ] - xx [ 121 ] * xx [ 172 ] ;
pm_math_Quaternion_xform_ra ( xx + 182 , xx + 268 , xx + 271 ) ; xx [ 103 ] =
xx [ 8 ] * xx [ 180 ] ; xx [ 174 ] = xx [ 121 ] * xx [ 180 ] ; xx [ 180 ] =
xx [ 121 ] * xx [ 161 ] - xx [ 4 ] * xx [ 8 ] ; xx [ 268 ] = - xx [ 103 ] ;
xx [ 269 ] = - xx [ 174 ] ; xx [ 270 ] = - xx [ 180 ] ;
pm_math_Vector3_cross_ra ( xx + 227 , xx + 268 , xx + 274 ) ; xx [ 4 ] = xx [
0 ] * xx [ 564 ] ; xx [ 161 ] = sin ( xx [ 4 ] ) ; xx [ 227 ] = cos ( xx [ 4
] ) ; xx [ 228 ] = - ( xx [ 55 ] * xx [ 161 ] ) ; xx [ 229 ] = xx [ 57 ] * xx
[ 161 ] ; xx [ 230 ] = xx [ 58 ] * xx [ 161 ] ; pm_math_Quaternion_compose_ra
( xx + 209 , xx + 227 , xx + 277 ) ; pm_math_Quaternion_composeInverse_ra (
xx + 566 , xx + 74 , xx + 209 ) ; pm_math_Quaternion_compose_ra ( xx + 59 ,
xx + 209 , xx + 227 ) ; pm_math_Quaternion_compose_ra ( xx + 277 , xx + 227 ,
xx + 209 ) ; pm_math_Quaternion_xform_ra ( xx + 209 , xx + 86 , xx + 268 ) ;
pm_math_Quaternion_xform_ra ( xx + 227 , xx + 92 , xx + 281 ) ;
pm_math_Quaternion_xform_ra ( xx + 277 , xx + 281 , xx + 284 ) ;
pm_math_Quaternion_xform_ra ( xx + 209 , xx + 95 , xx + 281 ) ;
pm_math_Quaternion_xform_ra ( xx + 227 , xx + 104 , xx + 287 ) ;
pm_math_Quaternion_xform_ra ( xx + 277 , xx + 287 , xx + 290 ) ;
pm_math_Quaternion_xform_ra ( xx + 209 , xx + 107 , xx + 287 ) ;
pm_math_Quaternion_xform_ra ( xx + 227 , xx + 116 , xx + 293 ) ;
pm_math_Quaternion_xform_ra ( xx + 277 , xx + 293 , xx + 296 ) ; xx [ 4 ] =
xx [ 0 ] * xx [ 573 ] ; xx [ 161 ] = sin ( xx [ 4 ] ) ; xx [ 195 ] = xx [ 0 ]
* xx [ 574 ] ; xx [ 204 ] = sin ( xx [ 195 ] ) ; xx [ 205 ] = xx [ 161 ] * xx
[ 204 ] ; xx [ 213 ] = xx [ 0 ] * xx [ 575 ] ; xx [ 216 ] = sin ( xx [ 213 ]
) ; xx [ 221 ] = cos ( xx [ 213 ] ) ; xx [ 213 ] = cos ( xx [ 4 ] ) ; xx [ 4
] = cos ( xx [ 195 ] ) ; xx [ 195 ] = xx [ 213 ] * xx [ 4 ] ; xx [ 224 ] = xx
[ 205 ] * xx [ 216 ] - xx [ 221 ] * xx [ 195 ] ; xx [ 225 ] = xx [ 195 ] * xx
[ 216 ] + xx [ 221 ] * xx [ 205 ] ; xx [ 195 ] = xx [ 145 ] * xx [ 224 ] + xx
[ 225 ] * xx [ 223 ] ; xx [ 205 ] = xx [ 4 ] * xx [ 161 ] ; xx [ 4 ] = xx [
213 ] * xx [ 204 ] ; xx [ 161 ] = xx [ 221 ] * xx [ 205 ] + xx [ 4 ] * xx [
216 ] ; xx [ 204 ] = xx [ 205 ] * xx [ 216 ] - xx [ 221 ] * xx [ 4 ] ; xx [ 4
] = xx [ 161 ] * xx [ 145 ] + xx [ 223 ] * xx [ 204 ] ; xx [ 205 ] = xx [ 161
] * xx [ 223 ] - xx [ 145 ] * xx [ 204 ] ; xx [ 213 ] = xx [ 225 ] * xx [ 145
] - xx [ 223 ] * xx [ 224 ] ; xx [ 299 ] = - xx [ 195 ] ; xx [ 300 ] = xx [ 4
] ; xx [ 301 ] = xx [ 205 ] ; xx [ 302 ] = xx [ 213 ] ; xx [ 263 ] = xx [ 5 ]
- ( xx [ 204 ] * xx [ 204 ] + xx [ 225 ] * xx [ 225 ] ) * xx [ 14 ] ; xx [
264 ] = xx [ 225 ] * xx [ 224 ] - xx [ 161 ] * xx [ 204 ] ; xx [ 293 ] = xx [
14 ] * xx [ 264 ] ; xx [ 294 ] = xx [ 204 ] * xx [ 224 ] + xx [ 161 ] * xx [
225 ] ; xx [ 295 ] = xx [ 294 ] * xx [ 14 ] ; xx [ 303 ] = xx [ 263 ] ; xx [
304 ] = xx [ 293 ] ; xx [ 305 ] = xx [ 295 ] ; pm_math_Vector3_cross_ra ( xx
+ 303 , xx + 24 , xx + 306 ) ; pm_math_Quaternion_xform_ra ( xx + 299 , xx +
306 , xx + 309 ) ; xx [ 312 ] = xx [ 224 ] ; xx [ 313 ] = - xx [ 161 ] ; xx [
314 ] = xx [ 204 ] ; xx [ 315 ] = - xx [ 225 ] ; xx [ 306 ] = - ( xx [ 27 ] *
xx [ 293 ] ) ; xx [ 307 ] = xx [ 27 ] * xx [ 263 ] - xx [ 294 ] * xx [ 28 ] ;
xx [ 308 ] = xx [ 29 ] * xx [ 293 ] ; pm_math_Quaternion_xform_ra ( xx + 312
, xx + 306 , xx + 316 ) ; xx [ 28 ] = xx [ 223 ] * xx [ 317 ] ; xx [ 306 ] =
xx [ 223 ] * xx [ 316 ] ; xx [ 307 ] = ( xx [ 145 ] * xx [ 28 ] + xx [ 223 ]
* xx [ 306 ] ) * xx [ 14 ] - xx [ 316 ] ; xx [ 308 ] = xx [ 5 ] - xx [ 14 ] *
xx [ 216 ] * xx [ 216 ] ; xx [ 319 ] = xx [ 221 ] * xx [ 216 ] ; xx [ 216 ] =
xx [ 14 ] * xx [ 319 ] ; xx [ 320 ] = - ( xx [ 23 ] * xx [ 308 ] ) ; xx [ 321
] = xx [ 23 ] * xx [ 216 ] ; xx [ 322 ] = xx [ 22 ] * xx [ 216 ] + xx [ 21 ]
* xx [ 308 ] ; pm_math_Quaternion_xform_ra ( xx + 299 , xx + 320 , xx + 323 )
; xx [ 320 ] = - ( xx [ 27 ] * xx [ 308 ] ) ; xx [ 321 ] = xx [ 27 ] * xx [
216 ] ; xx [ 322 ] = xx [ 29 ] * xx [ 308 ] ; pm_math_Quaternion_xform_ra (
xx + 312 , xx + 320 , xx + 326 ) ; xx [ 23 ] = xx [ 223 ] * xx [ 327 ] ; xx [
221 ] = xx [ 223 ] * xx [ 326 ] ; xx [ 320 ] = ( xx [ 145 ] * xx [ 23 ] + xx
[ 223 ] * xx [ 221 ] ) * xx [ 14 ] - xx [ 326 ] ; xx [ 329 ] = xx [ 4 ] ; xx
[ 330 ] = xx [ 205 ] ; xx [ 331 ] = xx [ 213 ] ; xx [ 321 ] = xx [ 21 ] * xx
[ 213 ] ; xx [ 322 ] = xx [ 22 ] * xx [ 213 ] ; xx [ 332 ] = xx [ 4 ] * xx [
21 ] - xx [ 22 ] * xx [ 205 ] ; xx [ 339 ] = xx [ 321 ] ; xx [ 340 ] = - xx [
322 ] ; xx [ 341 ] = - xx [ 332 ] ; pm_math_Vector3_cross_ra ( xx + 329 , xx
+ 339 , xx + 342 ) ; xx [ 333 ] = xx [ 225 ] * xx [ 29 ] ; xx [ 334 ] = xx [
161 ] * xx [ 29 ] ; xx [ 339 ] = ( xx [ 225 ] * xx [ 333 ] + xx [ 161 ] * xx
[ 334 ] ) * xx [ 14 ] - xx [ 29 ] ; xx [ 161 ] = xx [ 223 ] * xx [ 339 ] ; xx
[ 225 ] = xx [ 14 ] * ( xx [ 334 ] * xx [ 204 ] - xx [ 333 ] * xx [ 224 ] ) ;
xx [ 340 ] = xx [ 223 ] * xx [ 225 ] ; xx [ 341 ] = ( xx [ 145 ] * xx [ 161 ]
+ xx [ 223 ] * xx [ 340 ] ) * xx [ 14 ] ; xx [ 345 ] = xx [ 0 ] * xx [ 583 ]
; xx [ 346 ] = sin ( xx [ 345 ] ) ; xx [ 347 ] = cos ( xx [ 345 ] ) ; xx [
348 ] = - ( xx [ 55 ] * xx [ 346 ] ) ; xx [ 349 ] = xx [ 57 ] * xx [ 346 ] ;
xx [ 350 ] = xx [ 58 ] * xx [ 346 ] ; pm_math_Quaternion_compose_ra ( xx +
360 , xx + 347 , xx + 353 ) ; pm_math_Quaternion_composeInverse_ra ( xx + 585
, xx + 74 , xx + 345 ) ; pm_math_Quaternion_compose_ra ( xx + 59 , xx + 345 ,
xx + 357 ) ; pm_math_Quaternion_compose_ra ( xx + 353 , xx + 357 , xx + 345 )
; pm_math_Quaternion_xform_ra ( xx + 345 , xx + 86 , xx + 349 ) ;
pm_math_Quaternion_xform_ra ( xx + 357 , xx + 92 , xx + 361 ) ;
pm_math_Quaternion_xform_ra ( xx + 353 , xx + 361 , xx + 364 ) ;
pm_math_Quaternion_xform_ra ( xx + 345 , xx + 95 , xx + 361 ) ;
pm_math_Quaternion_xform_ra ( xx + 357 , xx + 104 , xx + 370 ) ;
pm_math_Quaternion_xform_ra ( xx + 353 , xx + 370 , xx + 373 ) ;
pm_math_Quaternion_xform_ra ( xx + 345 , xx + 107 , xx + 370 ) ;
pm_math_Quaternion_xform_ra ( xx + 357 , xx + 116 , xx + 376 ) ;
pm_math_Quaternion_xform_ra ( xx + 353 , xx + 376 , xx + 379 ) ; xx [ 367 ] =
xx [ 14 ] * ( xx [ 223 ] * xx [ 28 ] - xx [ 145 ] * xx [ 306 ] ) - xx [ 317 ]
; xx [ 28 ] = xx [ 14 ] * ( xx [ 223 ] * xx [ 23 ] - xx [ 145 ] * xx [ 221 ]
) - xx [ 327 ] ; xx [ 23 ] = xx [ 14 ] * ( xx [ 223 ] * xx [ 161 ] - xx [ 145
] * xx [ 340 ] ) ; xx [ 161 ] = ( xx [ 334 ] * xx [ 224 ] + xx [ 333 ] * xx [
204 ] ) * xx [ 14 ] ; pm_math_Vector3_cross_ra ( xx + 303 , xx + 126 , xx +
376 ) ; pm_math_Quaternion_xform_ra ( xx + 299 , xx + 376 , xx + 303 ) ; xx [
376 ] = - ( xx [ 125 ] * xx [ 308 ] ) ; xx [ 377 ] = xx [ 125 ] * xx [ 216 ]
; xx [ 378 ] = xx [ 8 ] * xx [ 308 ] - xx [ 121 ] * xx [ 216 ] ;
pm_math_Quaternion_xform_ra ( xx + 299 , xx + 376 , xx + 382 ) ; xx [ 125 ] =
xx [ 8 ] * xx [ 213 ] ; xx [ 204 ] = xx [ 121 ] * xx [ 213 ] ; xx [ 213 ] =
xx [ 4 ] * xx [ 8 ] + xx [ 121 ] * xx [ 205 ] ; xx [ 376 ] = xx [ 125 ] ; xx
[ 377 ] = xx [ 204 ] ; xx [ 378 ] = - xx [ 213 ] ; pm_math_Vector3_cross_ra (
xx + 329 , xx + 376 , xx + 385 ) ; xx [ 4 ] = xx [ 0 ] * xx [ 592 ] ; xx [
205 ] = sin ( xx [ 4 ] ) ; xx [ 388 ] = cos ( xx [ 4 ] ) ; xx [ 389 ] = - (
xx [ 55 ] * xx [ 205 ] ) ; xx [ 390 ] = xx [ 57 ] * xx [ 205 ] ; xx [ 391 ] =
xx [ 58 ] * xx [ 205 ] ; pm_math_Quaternion_compose_ra ( xx + 335 , xx + 388
, xx + 392 ) ; pm_math_Quaternion_composeInverse_ra ( xx + 594 , xx + 74 , xx
+ 333 ) ; pm_math_Quaternion_compose_ra ( xx + 59 , xx + 333 , xx + 388 ) ;
pm_math_Quaternion_compose_ra ( xx + 392 , xx + 388 , xx + 59 ) ;
pm_math_Quaternion_xform_ra ( xx + 59 , xx + 86 , xx + 329 ) ;
pm_math_Quaternion_xform_ra ( xx + 388 , xx + 92 , xx + 86 ) ;
pm_math_Quaternion_xform_ra ( xx + 392 , xx + 86 , xx + 92 ) ;
pm_math_Quaternion_xform_ra ( xx + 59 , xx + 95 , xx + 86 ) ;
pm_math_Quaternion_xform_ra ( xx + 388 , xx + 104 , xx + 95 ) ;
pm_math_Quaternion_xform_ra ( xx + 392 , xx + 95 , xx + 104 ) ;
pm_math_Quaternion_xform_ra ( xx + 59 , xx + 107 , xx + 95 ) ;
pm_math_Quaternion_xform_ra ( xx + 388 , xx + 116 , xx + 107 ) ;
pm_math_Quaternion_xform_ra ( xx + 392 , xx + 107 , xx + 116 ) ; xx [ 4 ] =
xx [ 0 ] * xx [ 523 ] ; xx [ 107 ] = cos ( xx [ 4 ] ) ; xx [ 108 ] = sin ( xx
[ 4 ] ) ; xx [ 4 ] = xx [ 352 ] * xx [ 108 ] ; xx [ 109 ] = xx [ 107 ] * xx [
4 ] ; xx [ 205 ] = xx [ 437 ] * xx [ 108 ] ; xx [ 221 ] = xx [ 205 ] * xx [
108 ] ; xx [ 224 ] = xx [ 14 ] * ( xx [ 109 ] + xx [ 221 ] ) ; xx [ 306 ] =
xx [ 0 ] * xx [ 525 ] ; xx [ 316 ] = xx [ 446 ] * cos ( xx [ 306 ] ) ; xx [
317 ] = xx [ 445 ] * xx [ 316 ] ; xx [ 326 ] = xx [ 446 ] * sin ( xx [ 306 ]
) ; xx [ 306 ] = xx [ 445 ] * xx [ 326 ] ; xx [ 327 ] = xx [ 224 ] - xx [ 224
] + xx [ 444 ] - ( xx [ 14 ] * ( xx [ 317 ] * xx [ 326 ] - xx [ 306 ] * xx [
316 ] ) - xx [ 451 ] ) ; xx [ 224 ] = xx [ 317 ] * xx [ 316 ] ; xx [ 317 ] =
xx [ 306 ] * xx [ 326 ] ; xx [ 306 ] = xx [ 107 ] * xx [ 205 ] ; xx [ 205 ] =
xx [ 4 ] * xx [ 108 ] ; xx [ 4 ] = ( xx [ 306 ] - xx [ 205 ] ) * xx [ 14 ] ;
xx [ 333 ] = xx [ 4 ] - xx [ 4 ] - xx [ 456 ] - ( ( xx [ 224 ] + xx [ 317 ] )
* xx [ 14 ] - xx [ 457 ] ) ; xx [ 334 ] = xx [ 327 ] ; xx [ 335 ] = - ( xx [
443 ] - ( xx [ 224 ] + xx [ 317 ] ) * xx [ 14 ] ) ; xx [ 336 ] = xx [ 333 ] ;
xx [ 4 ] = xx [ 326 ] * xx [ 326 ] ; xx [ 224 ] = xx [ 5 ] - ( xx [ 4 ] + xx
[ 4 ] ) * xx [ 14 ] ; xx [ 317 ] = xx [ 316 ] * xx [ 326 ] ; xx [ 337 ] = (
xx [ 317 ] + xx [ 317 ] ) * xx [ 14 ] ; xx [ 376 ] = xx [ 224 ] ; xx [ 377 ]
= xx [ 14 ] * ( xx [ 317 ] - xx [ 317 ] ) ; xx [ 378 ] = - xx [ 337 ] ; xx [
338 ] = pm_math_Vector3_dot_ra ( xx + 334 , xx + 376 ) ; xx [ 340 ] = xx [
316 ] * xx [ 316 ] ; xx [ 368 ] = xx [ 14 ] * ( xx [ 4 ] - xx [ 340 ] ) ; xx
[ 376 ] = xx [ 469 ] * xx [ 108 ] ; xx [ 377 ] = xx [ 471 ] * xx [ 108 ] ; xx
[ 378 ] = ( xx [ 107 ] * xx [ 376 ] + xx [ 377 ] * xx [ 108 ] ) * xx [ 14 ] ;
xx [ 396 ] = xx [ 468 ] - ( xx [ 378 ] - ( xx [ 109 ] + xx [ 221 ] ) * xx [
14 ] ) ; xx [ 109 ] = xx [ 14 ] * ( xx [ 107 ] * xx [ 377 ] - xx [ 376 ] * xx
[ 108 ] ) ; xx [ 221 ] = xx [ 14 ] * ( xx [ 205 ] - xx [ 306 ] ) + xx [ 109 ]
+ xx [ 369 ] ; xx [ 205 ] = ( xx [ 317 ] + xx [ 317 ] ) * xx [ 14 ] ; xx [
397 ] = - xx [ 205 ] ; xx [ 398 ] = xx [ 5 ] - ( xx [ 4 ] + xx [ 340 ] ) * xx
[ 14 ] ; xx [ 399 ] = xx [ 368 ] ; xx [ 4 ] = pm_math_Vector3_dot_ra ( xx +
334 , xx + 397 ) ; xx [ 306 ] = xx [ 338 ] * xx [ 338 ] + xx [ 4 ] * xx [ 4 ]
; xx [ 317 ] = xx [ 306 ] == 0.0 ? 0.0 : ( xx [ 338 ] * ( xx [ 368 ] * xx [
396 ] - xx [ 221 ] * xx [ 205 ] ) - xx [ 4 ] * ( xx [ 221 ] * xx [ 224 ] - xx
[ 337 ] * xx [ 396 ] ) ) / xx [ 306 ] ; xx [ 340 ] = xx [ 446 ] * xx [ 108 ]
; xx [ 376 ] = xx [ 340 ] * xx [ 340 ] ; xx [ 377 ] = xx [ 5 ] - ( xx [ 376 ]
+ xx [ 376 ] ) * xx [ 14 ] ; xx [ 397 ] = xx [ 446 ] * xx [ 107 ] ; xx [ 398
] = xx [ 397 ] * xx [ 340 ] ; xx [ 340 ] = ( xx [ 398 ] + xx [ 398 ] ) * xx [
14 ] ; xx [ 399 ] = xx [ 377 ] ; xx [ 400 ] = xx [ 14 ] * ( xx [ 398 ] - xx [
398 ] ) ; xx [ 401 ] = - xx [ 340 ] ; xx [ 402 ] = pm_math_Vector3_dot_ra (
xx + 334 , xx + 399 ) ; xx [ 399 ] = xx [ 397 ] * xx [ 397 ] ; xx [ 397 ] =
xx [ 14 ] * ( xx [ 376 ] - xx [ 399 ] ) ; xx [ 400 ] = ( xx [ 398 ] + xx [
398 ] ) * xx [ 14 ] ; xx [ 398 ] = xx [ 14 ] * xx [ 108 ] * xx [ 108 ] - xx [
5 ] ; xx [ 401 ] = xx [ 14 ] * xx [ 107 ] * xx [ 108 ] ; xx [ 403 ] = - xx [
400 ] ; xx [ 404 ] = xx [ 5 ] - ( xx [ 376 ] + xx [ 399 ] ) * xx [ 14 ] ; xx
[ 405 ] = xx [ 397 ] ; xx [ 376 ] = pm_math_Vector3_dot_ra ( xx + 334 , xx +
403 ) ; xx [ 399 ] = xx [ 402 ] * xx [ 402 ] + xx [ 376 ] * xx [ 376 ] ; xx [
403 ] = xx [ 399 ] == 0.0 ? 0.0 : ( xx [ 402 ] * ( xx [ 397 ] * xx [ 396 ] -
xx [ 221 ] * xx [ 400 ] + xx [ 398 ] * xx [ 327 ] + xx [ 401 ] * xx [ 333 ] )
- xx [ 376 ] * ( xx [ 221 ] * xx [ 377 ] - xx [ 340 ] * xx [ 396 ] + xx [ 398
] * xx [ 333 ] - xx [ 401 ] * xx [ 327 ] ) ) / xx [ 399 ] ; xx [ 221 ] = xx [
0 ] * xx [ 551 ] ; xx [ 396 ] = cos ( xx [ 221 ] ) ; xx [ 398 ] = sin ( xx [
221 ] ) ; xx [ 221 ] = xx [ 453 ] * xx [ 398 ] ; xx [ 401 ] = xx [ 396 ] * xx
[ 221 ] ; xx [ 404 ] = xx [ 437 ] * xx [ 398 ] ; xx [ 405 ] = xx [ 404 ] * xx
[ 398 ] ; xx [ 406 ] = xx [ 14 ] * ( xx [ 401 ] + xx [ 405 ] ) ; xx [ 407 ] =
xx [ 0 ] * xx [ 553 ] ; xx [ 408 ] = xx [ 446 ] * cos ( xx [ 407 ] ) ; xx [
409 ] = xx [ 445 ] * xx [ 408 ] ; xx [ 410 ] = xx [ 446 ] * sin ( xx [ 407 ]
) ; xx [ 407 ] = xx [ 445 ] * xx [ 410 ] ; xx [ 411 ] = xx [ 406 ] - xx [ 406
] + xx [ 444 ] - ( xx [ 14 ] * ( xx [ 409 ] * xx [ 410 ] - xx [ 407 ] * xx [
408 ] ) - xx [ 451 ] ) ; xx [ 406 ] = xx [ 409 ] * xx [ 408 ] ; xx [ 409 ] =
xx [ 407 ] * xx [ 410 ] ; xx [ 407 ] = xx [ 396 ] * xx [ 404 ] ; xx [ 404 ] =
xx [ 221 ] * xx [ 398 ] ; xx [ 221 ] = ( xx [ 407 ] - xx [ 404 ] ) * xx [ 14
] ; xx [ 412 ] = xx [ 221 ] - xx [ 221 ] - xx [ 456 ] - ( ( xx [ 406 ] + xx [
409 ] ) * xx [ 14 ] - xx [ 457 ] ) ; xx [ 413 ] = xx [ 411 ] ; xx [ 414 ] = -
( xx [ 443 ] - ( xx [ 406 ] + xx [ 409 ] ) * xx [ 14 ] ) ; xx [ 415 ] = xx [
412 ] ; xx [ 221 ] = xx [ 410 ] * xx [ 410 ] ; xx [ 406 ] = xx [ 5 ] - ( xx [
221 ] + xx [ 221 ] ) * xx [ 14 ] ; xx [ 409 ] = xx [ 408 ] * xx [ 410 ] ; xx
[ 416 ] = ( xx [ 409 ] + xx [ 409 ] ) * xx [ 14 ] ; xx [ 417 ] = xx [ 406 ] ;
xx [ 418 ] = xx [ 14 ] * ( xx [ 409 ] - xx [ 409 ] ) ; xx [ 419 ] = - xx [
416 ] ; xx [ 420 ] = pm_math_Vector3_dot_ra ( xx + 413 , xx + 417 ) ; xx [
417 ] = xx [ 408 ] * xx [ 408 ] ; xx [ 418 ] = xx [ 14 ] * ( xx [ 221 ] - xx
[ 417 ] ) ; xx [ 419 ] = xx [ 352 ] * xx [ 398 ] ; xx [ 421 ] = xx [ 471 ] *
xx [ 398 ] ; xx [ 422 ] = ( xx [ 396 ] * xx [ 419 ] + xx [ 421 ] * xx [ 398 ]
) * xx [ 14 ] ; xx [ 423 ] = xx [ 468 ] - ( xx [ 422 ] - ( xx [ 401 ] + xx [
405 ] ) * xx [ 14 ] ) ; xx [ 401 ] = xx [ 14 ] * ( xx [ 396 ] * xx [ 421 ] -
xx [ 419 ] * xx [ 398 ] ) ; xx [ 405 ] = xx [ 14 ] * ( xx [ 404 ] - xx [ 407
] ) + xx [ 401 ] + xx [ 369 ] ; xx [ 404 ] = ( xx [ 409 ] + xx [ 409 ] ) * xx
[ 14 ] ; xx [ 424 ] = - xx [ 404 ] ; xx [ 425 ] = xx [ 5 ] - ( xx [ 221 ] +
xx [ 417 ] ) * xx [ 14 ] ; xx [ 426 ] = xx [ 418 ] ; xx [ 221 ] =
pm_math_Vector3_dot_ra ( xx + 413 , xx + 424 ) ; xx [ 407 ] = xx [ 420 ] * xx
[ 420 ] + xx [ 221 ] * xx [ 221 ] ; xx [ 409 ] = xx [ 407 ] == 0.0 ? 0.0 : (
xx [ 420 ] * ( xx [ 418 ] * xx [ 423 ] - xx [ 405 ] * xx [ 404 ] ) - xx [ 221
] * ( xx [ 405 ] * xx [ 406 ] - xx [ 416 ] * xx [ 423 ] ) ) / xx [ 407 ] ; xx
[ 417 ] = xx [ 446 ] * xx [ 398 ] ; xx [ 419 ] = xx [ 417 ] * xx [ 417 ] ; xx
[ 421 ] = xx [ 5 ] - ( xx [ 419 ] + xx [ 419 ] ) * xx [ 14 ] ; xx [ 424 ] =
xx [ 446 ] * xx [ 396 ] ; xx [ 425 ] = xx [ 424 ] * xx [ 417 ] ; xx [ 417 ] =
( xx [ 425 ] + xx [ 425 ] ) * xx [ 14 ] ; xx [ 426 ] = xx [ 421 ] ; xx [ 427
] = xx [ 14 ] * ( xx [ 425 ] - xx [ 425 ] ) ; xx [ 428 ] = - xx [ 417 ] ; xx
[ 429 ] = pm_math_Vector3_dot_ra ( xx + 413 , xx + 426 ) ; xx [ 426 ] = xx [
424 ] * xx [ 424 ] ; xx [ 424 ] = xx [ 14 ] * ( xx [ 419 ] - xx [ 426 ] ) ;
xx [ 427 ] = ( xx [ 425 ] + xx [ 425 ] ) * xx [ 14 ] ; xx [ 425 ] = xx [ 14 ]
* xx [ 398 ] * xx [ 398 ] - xx [ 5 ] ; xx [ 428 ] = xx [ 14 ] * xx [ 396 ] *
xx [ 398 ] ; xx [ 430 ] = - xx [ 427 ] ; xx [ 431 ] = xx [ 5 ] - ( xx [ 419 ]
+ xx [ 426 ] ) * xx [ 14 ] ; xx [ 432 ] = xx [ 424 ] ; xx [ 419 ] =
pm_math_Vector3_dot_ra ( xx + 413 , xx + 430 ) ; xx [ 426 ] = xx [ 429 ] * xx
[ 429 ] + xx [ 419 ] * xx [ 419 ] ; xx [ 430 ] = xx [ 426 ] == 0.0 ? 0.0 : (
xx [ 429 ] * ( xx [ 424 ] * xx [ 423 ] - xx [ 405 ] * xx [ 427 ] + xx [ 425 ]
* xx [ 411 ] + xx [ 428 ] * xx [ 412 ] ) - xx [ 419 ] * ( xx [ 405 ] * xx [
421 ] - xx [ 417 ] * xx [ 423 ] + xx [ 425 ] * xx [ 412 ] - xx [ 428 ] * xx [
411 ] ) ) / xx [ 426 ] ; xx [ 405 ] = xx [ 0 ] * xx [ 579 ] ; xx [ 423 ] =
cos ( xx [ 405 ] ) ; xx [ 425 ] = sin ( xx [ 405 ] ) ; xx [ 405 ] = xx [ 453
] * xx [ 425 ] ; xx [ 428 ] = xx [ 423 ] * xx [ 405 ] ; xx [ 431 ] = xx [ 437
] * xx [ 425 ] ; xx [ 432 ] = xx [ 431 ] * xx [ 425 ] ; xx [ 433 ] = xx [ 14
] * ( xx [ 428 ] + xx [ 432 ] ) ; xx [ 434 ] = xx [ 0 ] * xx [ 581 ] ; xx [
435 ] = xx [ 446 ] * cos ( xx [ 434 ] ) ; xx [ 436 ] = xx [ 445 ] * xx [ 435
] ; xx [ 438 ] = xx [ 446 ] * sin ( xx [ 434 ] ) ; xx [ 434 ] = xx [ 445 ] *
xx [ 438 ] ; xx [ 439 ] = xx [ 433 ] - xx [ 433 ] + xx [ 444 ] - ( xx [ 14 ]
* ( xx [ 436 ] * xx [ 438 ] - xx [ 434 ] * xx [ 435 ] ) - xx [ 451 ] ) ; xx [
433 ] = xx [ 436 ] * xx [ 435 ] ; xx [ 436 ] = xx [ 434 ] * xx [ 438 ] ; xx [
434 ] = xx [ 423 ] * xx [ 431 ] ; xx [ 431 ] = xx [ 405 ] * xx [ 425 ] ; xx [
405 ] = ( xx [ 434 ] - xx [ 431 ] ) * xx [ 14 ] ; xx [ 440 ] = xx [ 405 ] -
xx [ 405 ] - xx [ 456 ] - ( ( xx [ 433 ] + xx [ 436 ] ) * xx [ 14 ] - xx [
457 ] ) ; xx [ 447 ] = xx [ 439 ] ; xx [ 448 ] = - ( xx [ 443 ] - ( xx [ 433
] + xx [ 436 ] ) * xx [ 14 ] ) ; xx [ 449 ] = xx [ 440 ] ; xx [ 405 ] = xx [
438 ] * xx [ 438 ] ; xx [ 433 ] = xx [ 5 ] - ( xx [ 405 ] + xx [ 405 ] ) * xx
[ 14 ] ; xx [ 436 ] = xx [ 435 ] * xx [ 438 ] ; xx [ 441 ] = ( xx [ 436 ] +
xx [ 436 ] ) * xx [ 14 ] ; xx [ 458 ] = xx [ 433 ] ; xx [ 459 ] = xx [ 14 ] *
( xx [ 436 ] - xx [ 436 ] ) ; xx [ 460 ] = - xx [ 441 ] ; xx [ 442 ] =
pm_math_Vector3_dot_ra ( xx + 447 , xx + 458 ) ; xx [ 450 ] = xx [ 435 ] * xx
[ 435 ] ; xx [ 452 ] = xx [ 14 ] * ( xx [ 405 ] - xx [ 450 ] ) ; xx [ 454 ] =
xx [ 352 ] * xx [ 425 ] ; xx [ 455 ] = xx [ 471 ] * xx [ 425 ] ; xx [ 458 ] =
( xx [ 423 ] * xx [ 454 ] + xx [ 455 ] * xx [ 425 ] ) * xx [ 14 ] ; xx [ 459
] = xx [ 468 ] - ( xx [ 458 ] - ( xx [ 428 ] + xx [ 432 ] ) * xx [ 14 ] ) ;
xx [ 428 ] = xx [ 14 ] * ( xx [ 423 ] * xx [ 455 ] - xx [ 454 ] * xx [ 425 ]
) ; xx [ 432 ] = xx [ 14 ] * ( xx [ 431 ] - xx [ 434 ] ) + xx [ 428 ] + xx [
369 ] ; xx [ 369 ] = ( xx [ 436 ] + xx [ 436 ] ) * xx [ 14 ] ; xx [ 460 ] = -
xx [ 369 ] ; xx [ 461 ] = xx [ 5 ] - ( xx [ 405 ] + xx [ 450 ] ) * xx [ 14 ]
; xx [ 462 ] = xx [ 452 ] ; xx [ 405 ] = pm_math_Vector3_dot_ra ( xx + 447 ,
xx + 460 ) ; xx [ 431 ] = xx [ 442 ] * xx [ 442 ] + xx [ 405 ] * xx [ 405 ] ;
xx [ 434 ] = xx [ 431 ] == 0.0 ? 0.0 : ( xx [ 442 ] * ( xx [ 452 ] * xx [ 459
] - xx [ 432 ] * xx [ 369 ] ) - xx [ 405 ] * ( xx [ 432 ] * xx [ 433 ] - xx [
441 ] * xx [ 459 ] ) ) / xx [ 431 ] ; xx [ 436 ] = xx [ 446 ] * xx [ 425 ] ;
xx [ 450 ] = xx [ 436 ] * xx [ 436 ] ; xx [ 454 ] = xx [ 5 ] - ( xx [ 450 ] +
xx [ 450 ] ) * xx [ 14 ] ; xx [ 455 ] = xx [ 446 ] * xx [ 423 ] ; xx [ 460 ]
= xx [ 455 ] * xx [ 436 ] ; xx [ 436 ] = ( xx [ 460 ] + xx [ 460 ] ) * xx [
14 ] ; xx [ 461 ] = xx [ 454 ] ; xx [ 462 ] = xx [ 14 ] * ( xx [ 460 ] - xx [
460 ] ) ; xx [ 463 ] = - xx [ 436 ] ; xx [ 464 ] = pm_math_Vector3_dot_ra (
xx + 447 , xx + 461 ) ; xx [ 461 ] = xx [ 455 ] * xx [ 455 ] ; xx [ 455 ] =
xx [ 14 ] * ( xx [ 450 ] - xx [ 461 ] ) ; xx [ 462 ] = ( xx [ 460 ] + xx [
460 ] ) * xx [ 14 ] ; xx [ 460 ] = xx [ 14 ] * xx [ 425 ] * xx [ 425 ] - xx [
5 ] ; xx [ 463 ] = xx [ 14 ] * xx [ 423 ] * xx [ 425 ] ; xx [ 465 ] = - xx [
462 ] ; xx [ 466 ] = xx [ 5 ] - ( xx [ 450 ] + xx [ 461 ] ) * xx [ 14 ] ; xx
[ 467 ] = xx [ 455 ] ; xx [ 450 ] = pm_math_Vector3_dot_ra ( xx + 447 , xx +
465 ) ; xx [ 461 ] = xx [ 464 ] * xx [ 464 ] + xx [ 450 ] * xx [ 450 ] ; xx [
465 ] = xx [ 461 ] == 0.0 ? 0.0 : ( xx [ 464 ] * ( xx [ 455 ] * xx [ 459 ] -
xx [ 432 ] * xx [ 462 ] + xx [ 460 ] * xx [ 439 ] + xx [ 463 ] * xx [ 440 ] )
- xx [ 450 ] * ( xx [ 432 ] * xx [ 454 ] - xx [ 436 ] * xx [ 459 ] + xx [ 460
] * xx [ 440 ] - xx [ 463 ] * xx [ 439 ] ) ) / xx [ 461 ] ; xx [ 610 ] = xx [
63 ] - xx [ 66 ] ; xx [ 611 ] = xx [ 69 ] - xx [ 78 ] ; xx [ 612 ] = ( xx [
89 ] - xx [ 9 ] * xx [ 16 ] ) * xx [ 14 ] - xx [ 72 ] - xx [ 22 ] ; xx [ 613
] = xx [ 46 ] ; xx [ 614 ] = - ( xx [ 110 ] + xx [ 122 ] ) ; xx [ 615 ] = - (
xx [ 113 ] + xx [ 133 ] ) ; xx [ 616 ] = - ( xx [ 130 ] + xx [ 149 ] ) ; xx [
617 ] = xx [ 46 ] ; xx [ 618 ] = xx [ 46 ] ; xx [ 619 ] = xx [ 46 ] ; xx [
620 ] = xx [ 46 ] ; xx [ 621 ] = xx [ 46 ] ; xx [ 622 ] = xx [ 46 ] ; xx [
623 ] = xx [ 46 ] ; xx [ 624 ] = xx [ 46 ] ; xx [ 625 ] = xx [ 46 ] ; xx [
626 ] = xx [ 46 ] ; xx [ 627 ] = xx [ 46 ] ; xx [ 628 ] = xx [ 46 ] ; xx [
629 ] = xx [ 46 ] ; xx [ 630 ] = xx [ 46 ] ; xx [ 631 ] = xx [ 46 ] ; xx [
632 ] = xx [ 46 ] ; xx [ 633 ] = xx [ 46 ] ; xx [ 634 ] = xx [ 46 ] ; xx [
635 ] = xx [ 46 ] ; xx [ 636 ] = xx [ 46 ] ; xx [ 637 ] = xx [ 46 ] ; xx [
638 ] = xx [ 46 ] ; xx [ 639 ] = xx [ 46 ] ; xx [ 640 ] = xx [ 64 ] - xx [ 67
] ; xx [ 641 ] = xx [ 70 ] - xx [ 79 ] ; xx [ 642 ] = xx [ 14 ] * ( xx [ 90 ]
+ xx [ 10 ] * xx [ 16 ] ) - xx [ 73 ] + xx [ 119 ] ; xx [ 643 ] = xx [ 46 ] ;
xx [ 644 ] = - ( xx [ 111 ] + xx [ 123 ] ) ; xx [ 645 ] = - ( xx [ 114 ] + xx
[ 134 ] ) ; xx [ 646 ] = - ( xx [ 131 ] + xx [ 150 ] ) ; xx [ 647 ] = xx [ 46
] ; xx [ 648 ] = xx [ 46 ] ; xx [ 649 ] = xx [ 46 ] ; xx [ 650 ] = xx [ 46 ]
; xx [ 651 ] = xx [ 46 ] ; xx [ 652 ] = xx [ 46 ] ; xx [ 653 ] = xx [ 46 ] ;
xx [ 654 ] = xx [ 46 ] ; xx [ 655 ] = xx [ 46 ] ; xx [ 656 ] = xx [ 46 ] ; xx
[ 657 ] = xx [ 46 ] ; xx [ 658 ] = xx [ 46 ] ; xx [ 659 ] = xx [ 46 ] ; xx [
660 ] = xx [ 46 ] ; xx [ 661 ] = xx [ 46 ] ; xx [ 662 ] = xx [ 46 ] ; xx [
663 ] = xx [ 46 ] ; xx [ 664 ] = xx [ 46 ] ; xx [ 665 ] = xx [ 46 ] ; xx [
666 ] = xx [ 46 ] ; xx [ 667 ] = xx [ 46 ] ; xx [ 668 ] = xx [ 46 ] ; xx [
669 ] = xx [ 46 ] ; xx [ 670 ] = xx [ 65 ] - xx [ 68 ] ; xx [ 671 ] = xx [ 71
] - xx [ 80 ] ; xx [ 672 ] = xx [ 14 ] * ( xx [ 91 ] + xx [ 15 ] * xx [ 16 ]
) - xx [ 85 ] ; xx [ 673 ] = xx [ 46 ] ; xx [ 674 ] = - ( xx [ 112 ] + xx [
124 ] ) ; xx [ 675 ] = - ( xx [ 115 ] + xx [ 135 ] ) ; xx [ 676 ] = - ( xx [
132 ] + xx [ 151 ] ) ; xx [ 677 ] = xx [ 46 ] ; xx [ 678 ] = xx [ 46 ] ; xx [
679 ] = xx [ 46 ] ; xx [ 680 ] = xx [ 46 ] ; xx [ 681 ] = xx [ 46 ] ; xx [
682 ] = xx [ 46 ] ; xx [ 683 ] = xx [ 46 ] ; xx [ 684 ] = xx [ 46 ] ; xx [
685 ] = xx [ 46 ] ; xx [ 686 ] = xx [ 46 ] ; xx [ 687 ] = xx [ 46 ] ; xx [
688 ] = xx [ 46 ] ; xx [ 689 ] = xx [ 46 ] ; xx [ 690 ] = xx [ 46 ] ; xx [
691 ] = xx [ 46 ] ; xx [ 692 ] = xx [ 46 ] ; xx [ 693 ] = xx [ 46 ] ; xx [
694 ] = xx [ 46 ] ; xx [ 695 ] = xx [ 46 ] ; xx [ 696 ] = xx [ 46 ] ; xx [
697 ] = xx [ 46 ] ; xx [ 698 ] = xx [ 46 ] ; xx [ 699 ] = xx [ 46 ] ; xx [
700 ] = xx [ 43 ] - xx [ 66 ] ; xx [ 701 ] = xx [ 152 ] - xx [ 78 ] ; xx [
702 ] = ( xx [ 155 ] - xx [ 54 ] * xx [ 16 ] ) * xx [ 14 ] - xx [ 72 ] + xx [
121 ] ; xx [ 703 ] = xx [ 46 ] ; xx [ 704 ] = xx [ 46 ] ; xx [ 705 ] = xx [
46 ] ; xx [ 706 ] = xx [ 46 ] ; xx [ 707 ] = - ( xx [ 47 ] + xx [ 158 ] ) ;
xx [ 708 ] = - ( xx [ 146 ] + xx [ 169 ] ) ; xx [ 709 ] = - ( xx [ 166 ] + xx
[ 175 ] ) ; xx [ 710 ] = xx [ 46 ] ; xx [ 711 ] = xx [ 46 ] ; xx [ 712 ] = xx
[ 46 ] ; xx [ 713 ] = xx [ 46 ] ; xx [ 714 ] = xx [ 46 ] ; xx [ 715 ] = xx [
46 ] ; xx [ 716 ] = xx [ 46 ] ; xx [ 717 ] = xx [ 46 ] ; xx [ 718 ] = xx [ 46
] ; xx [ 719 ] = xx [ 46 ] ; xx [ 720 ] = xx [ 46 ] ; xx [ 721 ] = xx [ 46 ]
; xx [ 722 ] = xx [ 46 ] ; xx [ 723 ] = xx [ 46 ] ; xx [ 724 ] = xx [ 46 ] ;
xx [ 725 ] = xx [ 46 ] ; xx [ 726 ] = xx [ 46 ] ; xx [ 727 ] = xx [ 46 ] ; xx
[ 728 ] = xx [ 46 ] ; xx [ 729 ] = xx [ 46 ] ; xx [ 730 ] = xx [ 44 ] - xx [
67 ] ; xx [ 731 ] = xx [ 153 ] - xx [ 79 ] ; xx [ 732 ] = xx [ 14 ] * ( xx [
156 ] - xx [ 56 ] * xx [ 16 ] ) - xx [ 73 ] + xx [ 129 ] ; xx [ 733 ] = xx [
46 ] ; xx [ 734 ] = xx [ 46 ] ; xx [ 735 ] = xx [ 46 ] ; xx [ 736 ] = xx [ 46
] ; xx [ 737 ] = - ( xx [ 48 ] + xx [ 159 ] ) ; xx [ 738 ] = - ( xx [ 147 ] +
xx [ 170 ] ) ; xx [ 739 ] = - ( xx [ 167 ] + xx [ 176 ] ) ; xx [ 740 ] = xx [
46 ] ; xx [ 741 ] = xx [ 46 ] ; xx [ 742 ] = xx [ 46 ] ; xx [ 743 ] = xx [ 46
] ; xx [ 744 ] = xx [ 46 ] ; xx [ 745 ] = xx [ 46 ] ; xx [ 746 ] = xx [ 46 ]
; xx [ 747 ] = xx [ 46 ] ; xx [ 748 ] = xx [ 46 ] ; xx [ 749 ] = xx [ 46 ] ;
xx [ 750 ] = xx [ 46 ] ; xx [ 751 ] = xx [ 46 ] ; xx [ 752 ] = xx [ 46 ] ; xx
[ 753 ] = xx [ 46 ] ; xx [ 754 ] = xx [ 46 ] ; xx [ 755 ] = xx [ 46 ] ; xx [
756 ] = xx [ 46 ] ; xx [ 757 ] = xx [ 46 ] ; xx [ 758 ] = xx [ 46 ] ; xx [
759 ] = xx [ 46 ] ; xx [ 760 ] = xx [ 45 ] - xx [ 68 ] ; xx [ 761 ] = xx [
154 ] - xx [ 80 ] ; xx [ 762 ] = xx [ 14 ] * ( xx [ 157 ] - xx [ 1 ] * xx [
16 ] ) - xx [ 85 ] ; xx [ 763 ] = xx [ 46 ] ; xx [ 764 ] = xx [ 46 ] ; xx [
765 ] = xx [ 46 ] ; xx [ 766 ] = xx [ 46 ] ; xx [ 767 ] = - ( xx [ 49 ] + xx
[ 160 ] ) ; xx [ 768 ] = - ( xx [ 148 ] + xx [ 171 ] ) ; xx [ 769 ] = - ( xx
[ 168 ] + xx [ 177 ] ) ; xx [ 770 ] = xx [ 46 ] ; xx [ 771 ] = xx [ 46 ] ; xx
[ 772 ] = xx [ 46 ] ; xx [ 773 ] = xx [ 46 ] ; xx [ 774 ] = xx [ 46 ] ; xx [
775 ] = xx [ 46 ] ; xx [ 776 ] = xx [ 46 ] ; xx [ 777 ] = xx [ 46 ] ; xx [
778 ] = xx [ 46 ] ; xx [ 779 ] = xx [ 46 ] ; xx [ 780 ] = xx [ 46 ] ; xx [
781 ] = xx [ 46 ] ; xx [ 782 ] = xx [ 46 ] ; xx [ 783 ] = xx [ 46 ] ; xx [
784 ] = xx [ 46 ] ; xx [ 785 ] = xx [ 46 ] ; xx [ 786 ] = xx [ 46 ] ; xx [
787 ] = xx [ 46 ] ; xx [ 788 ] = xx [ 46 ] ; xx [ 789 ] = xx [ 46 ] ; xx [
790 ] = xx [ 46 ] ; xx [ 791 ] = xx [ 46 ] ; xx [ 792 ] = xx [ 46 ] ; xx [
793 ] = xx [ 46 ] ; xx [ 794 ] = xx [ 46 ] ; xx [ 795 ] = xx [ 46 ] ; xx [
796 ] = xx [ 46 ] ; xx [ 797 ] = xx [ 46 ] ; xx [ 798 ] = xx [ 46 ] ; xx [
799 ] = xx [ 46 ] ; xx [ 800 ] = xx [ 197 ] + xx [ 196 ] ; xx [ 801 ] = xx [
218 ] + xx [ 214 ] ; xx [ 802 ] = xx [ 14 ] * ( xx [ 239 ] - xx [ 102 ] * xx
[ 120 ] ) + xx [ 179 ] - xx [ 222 ] - xx [ 22 ] ; xx [ 803 ] = xx [ 46 ] ; xx
[ 804 ] = - ( xx [ 236 ] + xx [ 253 ] ) ; xx [ 805 ] = - ( xx [ 250 ] + xx [
259 ] ) ; xx [ 806 ] = - ( xx [ 256 ] + xx [ 265 ] ) ; xx [ 807 ] = xx [ 46 ]
; xx [ 808 ] = xx [ 46 ] ; xx [ 809 ] = xx [ 46 ] ; xx [ 810 ] = xx [ 46 ] ;
xx [ 811 ] = xx [ 46 ] ; xx [ 812 ] = xx [ 46 ] ; xx [ 813 ] = xx [ 46 ] ; xx
[ 814 ] = xx [ 46 ] ; xx [ 815 ] = xx [ 46 ] ; xx [ 816 ] = xx [ 46 ] ; xx [
817 ] = xx [ 46 ] ; xx [ 818 ] = xx [ 46 ] ; xx [ 819 ] = xx [ 46 ] ; xx [
820 ] = xx [ 46 ] ; xx [ 821 ] = xx [ 46 ] ; xx [ 822 ] = xx [ 46 ] ; xx [
823 ] = xx [ 46 ] ; xx [ 824 ] = xx [ 46 ] ; xx [ 825 ] = xx [ 46 ] ; xx [
826 ] = xx [ 46 ] ; xx [ 827 ] = xx [ 46 ] ; xx [ 828 ] = xx [ 46 ] ; xx [
829 ] = xx [ 46 ] ; xx [ 830 ] = xx [ 198 ] + xx [ 262 ] ; xx [ 831 ] = xx [
219 ] + xx [ 194 ] ; xx [ 832 ] = ( xx [ 102 ] * xx [ 181 ] + xx [ 240 ] ) *
xx [ 14 ] + xx [ 173 ] - xx [ 231 ] - xx [ 21 ] ; xx [ 833 ] = xx [ 46 ] ; xx
[ 834 ] = - ( xx [ 237 ] + xx [ 254 ] ) ; xx [ 835 ] = - ( xx [ 251 ] + xx [
260 ] ) ; xx [ 836 ] = - ( xx [ 257 ] + xx [ 266 ] ) ; xx [ 837 ] = xx [ 46 ]
; xx [ 838 ] = xx [ 46 ] ; xx [ 839 ] = xx [ 46 ] ; xx [ 840 ] = xx [ 46 ] ;
xx [ 841 ] = xx [ 46 ] ; xx [ 842 ] = xx [ 46 ] ; xx [ 843 ] = xx [ 46 ] ; xx
[ 844 ] = xx [ 46 ] ; xx [ 845 ] = xx [ 46 ] ; xx [ 846 ] = xx [ 46 ] ; xx [
847 ] = xx [ 46 ] ; xx [ 848 ] = xx [ 46 ] ; xx [ 849 ] = xx [ 46 ] ; xx [
850 ] = xx [ 46 ] ; xx [ 851 ] = xx [ 46 ] ; xx [ 852 ] = xx [ 46 ] ; xx [
853 ] = xx [ 46 ] ; xx [ 854 ] = xx [ 46 ] ; xx [ 855 ] = xx [ 46 ] ; xx [
856 ] = xx [ 46 ] ; xx [ 857 ] = xx [ 46 ] ; xx [ 858 ] = xx [ 46 ] ; xx [
859 ] = xx [ 46 ] ; xx [ 860 ] = xx [ 199 ] - xx [ 206 ] ; xx [ 861 ] = xx [
220 ] - xx [ 226 ] ; xx [ 862 ] = xx [ 14 ] * ( xx [ 241 ] + xx [ 102 ] * xx
[ 215 ] ) - xx [ 12 ] ; xx [ 863 ] = xx [ 46 ] ; xx [ 864 ] = - ( xx [ 238 ]
+ xx [ 255 ] ) ; xx [ 865 ] = - ( xx [ 252 ] + xx [ 261 ] ) ; xx [ 866 ] = -
( xx [ 258 ] + xx [ 267 ] ) ; xx [ 867 ] = xx [ 46 ] ; xx [ 868 ] = xx [ 46 ]
; xx [ 869 ] = xx [ 46 ] ; xx [ 870 ] = xx [ 46 ] ; xx [ 871 ] = xx [ 46 ] ;
xx [ 872 ] = xx [ 46 ] ; xx [ 873 ] = xx [ 46 ] ; xx [ 874 ] = xx [ 46 ] ; xx
[ 875 ] = xx [ 46 ] ; xx [ 876 ] = xx [ 46 ] ; xx [ 877 ] = xx [ 46 ] ; xx [
878 ] = xx [ 46 ] ; xx [ 879 ] = xx [ 46 ] ; xx [ 880 ] = xx [ 46 ] ; xx [
881 ] = xx [ 46 ] ; xx [ 882 ] = xx [ 46 ] ; xx [ 883 ] = xx [ 46 ] ; xx [
884 ] = xx [ 46 ] ; xx [ 885 ] = xx [ 46 ] ; xx [ 886 ] = xx [ 46 ] ; xx [
887 ] = xx [ 46 ] ; xx [ 888 ] = xx [ 46 ] ; xx [ 889 ] = xx [ 46 ] ; xx [
890 ] = xx [ 191 ] + xx [ 196 ] ; xx [ 891 ] = xx [ 271 ] + xx [ 214 ] ; xx [
892 ] = xx [ 14 ] * ( xx [ 274 ] - xx [ 102 ] * xx [ 103 ] ) + xx [ 179 ] -
xx [ 222 ] + xx [ 121 ] ; xx [ 893 ] = xx [ 46 ] ; xx [ 894 ] = xx [ 46 ] ;
xx [ 895 ] = xx [ 46 ] ; xx [ 896 ] = xx [ 46 ] ; xx [ 897 ] = - ( xx [ 268 ]
+ xx [ 284 ] ) ; xx [ 898 ] = - ( xx [ 281 ] + xx [ 290 ] ) ; xx [ 899 ] = -
( xx [ 287 ] + xx [ 296 ] ) ; xx [ 900 ] = xx [ 46 ] ; xx [ 901 ] = xx [ 46 ]
; xx [ 902 ] = xx [ 46 ] ; xx [ 903 ] = xx [ 46 ] ; xx [ 904 ] = xx [ 46 ] ;
xx [ 905 ] = xx [ 46 ] ; xx [ 906 ] = xx [ 46 ] ; xx [ 907 ] = xx [ 46 ] ; xx
[ 908 ] = xx [ 46 ] ; xx [ 909 ] = xx [ 46 ] ; xx [ 910 ] = xx [ 46 ] ; xx [
911 ] = xx [ 46 ] ; xx [ 912 ] = xx [ 46 ] ; xx [ 913 ] = xx [ 46 ] ; xx [
914 ] = xx [ 46 ] ; xx [ 915 ] = xx [ 46 ] ; xx [ 916 ] = xx [ 46 ] ; xx [
917 ] = xx [ 46 ] ; xx [ 918 ] = xx [ 46 ] ; xx [ 919 ] = xx [ 46 ] ; xx [
920 ] = xx [ 192 ] + xx [ 262 ] ; xx [ 921 ] = xx [ 272 ] + xx [ 194 ] ; xx [
922 ] = ( xx [ 275 ] - xx [ 102 ] * xx [ 174 ] ) * xx [ 14 ] + xx [ 173 ] -
xx [ 231 ] - xx [ 8 ] ; xx [ 923 ] = xx [ 46 ] ; xx [ 924 ] = xx [ 46 ] ; xx
[ 925 ] = xx [ 46 ] ; xx [ 926 ] = xx [ 46 ] ; xx [ 927 ] = - ( xx [ 269 ] +
xx [ 285 ] ) ; xx [ 928 ] = - ( xx [ 282 ] + xx [ 291 ] ) ; xx [ 929 ] = - (
xx [ 288 ] + xx [ 297 ] ) ; xx [ 930 ] = xx [ 46 ] ; xx [ 931 ] = xx [ 46 ] ;
xx [ 932 ] = xx [ 46 ] ; xx [ 933 ] = xx [ 46 ] ; xx [ 934 ] = xx [ 46 ] ; xx
[ 935 ] = xx [ 46 ] ; xx [ 936 ] = xx [ 46 ] ; xx [ 937 ] = xx [ 46 ] ; xx [
938 ] = xx [ 46 ] ; xx [ 939 ] = xx [ 46 ] ; xx [ 940 ] = xx [ 46 ] ; xx [
941 ] = xx [ 46 ] ; xx [ 942 ] = xx [ 46 ] ; xx [ 943 ] = xx [ 46 ] ; xx [
944 ] = xx [ 46 ] ; xx [ 945 ] = xx [ 46 ] ; xx [ 946 ] = xx [ 46 ] ; xx [
947 ] = xx [ 46 ] ; xx [ 948 ] = xx [ 46 ] ; xx [ 949 ] = xx [ 46 ] ; xx [
950 ] = xx [ 193 ] - xx [ 206 ] ; xx [ 951 ] = xx [ 273 ] - xx [ 226 ] ; xx [
952 ] = xx [ 14 ] * ( xx [ 276 ] - xx [ 102 ] * xx [ 180 ] ) - xx [ 12 ] ; xx
[ 953 ] = xx [ 46 ] ; xx [ 954 ] = xx [ 46 ] ; xx [ 955 ] = xx [ 46 ] ; xx [
956 ] = xx [ 46 ] ; xx [ 957 ] = - ( xx [ 270 ] + xx [ 286 ] ) ; xx [ 958 ] =
- ( xx [ 283 ] + xx [ 292 ] ) ; xx [ 959 ] = - ( xx [ 289 ] + xx [ 298 ] ) ;
xx [ 960 ] = xx [ 46 ] ; xx [ 961 ] = xx [ 46 ] ; xx [ 962 ] = xx [ 46 ] ; xx
[ 963 ] = xx [ 46 ] ; xx [ 964 ] = xx [ 46 ] ; xx [ 965 ] = xx [ 46 ] ; xx [
966 ] = xx [ 46 ] ; xx [ 967 ] = xx [ 46 ] ; xx [ 968 ] = xx [ 46 ] ; xx [
969 ] = xx [ 46 ] ; xx [ 970 ] = xx [ 46 ] ; xx [ 971 ] = xx [ 46 ] ; xx [
972 ] = xx [ 46 ] ; xx [ 973 ] = xx [ 46 ] ; xx [ 974 ] = xx [ 46 ] ; xx [
975 ] = xx [ 46 ] ; xx [ 976 ] = xx [ 46 ] ; xx [ 977 ] = xx [ 46 ] ; xx [
978 ] = xx [ 46 ] ; xx [ 979 ] = xx [ 46 ] ; xx [ 980 ] = xx [ 46 ] ; xx [
981 ] = xx [ 46 ] ; xx [ 982 ] = xx [ 46 ] ; xx [ 983 ] = xx [ 46 ] ; xx [
984 ] = xx [ 46 ] ; xx [ 985 ] = xx [ 46 ] ; xx [ 986 ] = xx [ 46 ] ; xx [
987 ] = xx [ 46 ] ; xx [ 988 ] = xx [ 46 ] ; xx [ 989 ] = xx [ 46 ] ; xx [
990 ] = xx [ 309 ] + xx [ 307 ] ; xx [ 991 ] = xx [ 323 ] + xx [ 320 ] ; xx [
992 ] = xx [ 14 ] * ( xx [ 342 ] - xx [ 195 ] * xx [ 321 ] ) + xx [ 341 ] -
xx [ 225 ] - xx [ 22 ] ; xx [ 993 ] = xx [ 46 ] ; xx [ 994 ] = - ( xx [ 349 ]
+ xx [ 364 ] ) ; xx [ 995 ] = - ( xx [ 361 ] + xx [ 373 ] ) ; xx [ 996 ] = -
( xx [ 370 ] + xx [ 379 ] ) ; xx [ 997 ] = xx [ 46 ] ; xx [ 998 ] = xx [ 46 ]
; xx [ 999 ] = xx [ 46 ] ; xx [ 1000 ] = xx [ 46 ] ; xx [ 1001 ] = xx [ 46 ]
; xx [ 1002 ] = xx [ 46 ] ; xx [ 1003 ] = xx [ 46 ] ; xx [ 1004 ] = xx [ 46 ]
; xx [ 1005 ] = xx [ 46 ] ; xx [ 1006 ] = xx [ 46 ] ; xx [ 1007 ] = xx [ 46 ]
; xx [ 1008 ] = xx [ 46 ] ; xx [ 1009 ] = xx [ 46 ] ; xx [ 1010 ] = xx [ 46 ]
; xx [ 1011 ] = xx [ 46 ] ; xx [ 1012 ] = xx [ 46 ] ; xx [ 1013 ] = xx [ 46 ]
; xx [ 1014 ] = xx [ 46 ] ; xx [ 1015 ] = xx [ 46 ] ; xx [ 1016 ] = xx [ 46 ]
; xx [ 1017 ] = xx [ 46 ] ; xx [ 1018 ] = xx [ 46 ] ; xx [ 1019 ] = xx [ 46 ]
; xx [ 1020 ] = xx [ 310 ] + xx [ 367 ] ; xx [ 1021 ] = xx [ 324 ] + xx [ 28
] ; xx [ 1022 ] = ( xx [ 195 ] * xx [ 322 ] + xx [ 343 ] ) * xx [ 14 ] + xx [
23 ] - xx [ 339 ] - xx [ 21 ] ; xx [ 1023 ] = xx [ 46 ] ; xx [ 1024 ] = - (
xx [ 350 ] + xx [ 365 ] ) ; xx [ 1025 ] = - ( xx [ 362 ] + xx [ 374 ] ) ; xx
[ 1026 ] = - ( xx [ 371 ] + xx [ 380 ] ) ; xx [ 1027 ] = xx [ 46 ] ; xx [
1028 ] = xx [ 46 ] ; xx [ 1029 ] = xx [ 46 ] ; xx [ 1030 ] = xx [ 46 ] ; xx [
1031 ] = xx [ 46 ] ; xx [ 1032 ] = xx [ 46 ] ; xx [ 1033 ] = xx [ 46 ] ; xx [
1034 ] = xx [ 46 ] ; xx [ 1035 ] = xx [ 46 ] ; xx [ 1036 ] = xx [ 46 ] ; xx [
1037 ] = xx [ 46 ] ; xx [ 1038 ] = xx [ 46 ] ; xx [ 1039 ] = xx [ 46 ] ; xx [
1040 ] = xx [ 46 ] ; xx [ 1041 ] = xx [ 46 ] ; xx [ 1042 ] = xx [ 46 ] ; xx [
1043 ] = xx [ 46 ] ; xx [ 1044 ] = xx [ 46 ] ; xx [ 1045 ] = xx [ 46 ] ; xx [
1046 ] = xx [ 46 ] ; xx [ 1047 ] = xx [ 46 ] ; xx [ 1048 ] = xx [ 46 ] ; xx [
1049 ] = xx [ 46 ] ; xx [ 1050 ] = xx [ 311 ] - xx [ 318 ] ; xx [ 1051 ] = xx
[ 325 ] - xx [ 328 ] ; xx [ 1052 ] = xx [ 14 ] * ( xx [ 344 ] + xx [ 332 ] *
xx [ 195 ] ) - xx [ 161 ] ; xx [ 1053 ] = xx [ 46 ] ; xx [ 1054 ] = - ( xx [
351 ] + xx [ 366 ] ) ; xx [ 1055 ] = - ( xx [ 363 ] + xx [ 375 ] ) ; xx [
1056 ] = - ( xx [ 372 ] + xx [ 381 ] ) ; xx [ 1057 ] = xx [ 46 ] ; xx [ 1058
] = xx [ 46 ] ; xx [ 1059 ] = xx [ 46 ] ; xx [ 1060 ] = xx [ 46 ] ; xx [ 1061
] = xx [ 46 ] ; xx [ 1062 ] = xx [ 46 ] ; xx [ 1063 ] = xx [ 46 ] ; xx [ 1064
] = xx [ 46 ] ; xx [ 1065 ] = xx [ 46 ] ; xx [ 1066 ] = xx [ 46 ] ; xx [ 1067
] = xx [ 46 ] ; xx [ 1068 ] = xx [ 46 ] ; xx [ 1069 ] = xx [ 46 ] ; xx [ 1070
] = xx [ 46 ] ; xx [ 1071 ] = xx [ 46 ] ; xx [ 1072 ] = xx [ 46 ] ; xx [ 1073
] = xx [ 46 ] ; xx [ 1074 ] = xx [ 46 ] ; xx [ 1075 ] = xx [ 46 ] ; xx [ 1076
] = xx [ 46 ] ; xx [ 1077 ] = xx [ 46 ] ; xx [ 1078 ] = xx [ 46 ] ; xx [ 1079
] = xx [ 46 ] ; xx [ 1080 ] = xx [ 303 ] + xx [ 307 ] ; xx [ 1081 ] = xx [
382 ] + xx [ 320 ] ; xx [ 1082 ] = xx [ 14 ] * ( xx [ 385 ] - xx [ 195 ] * xx
[ 125 ] ) + xx [ 341 ] - xx [ 225 ] + xx [ 121 ] ; xx [ 1083 ] = xx [ 46 ] ;
xx [ 1084 ] = xx [ 46 ] ; xx [ 1085 ] = xx [ 46 ] ; xx [ 1086 ] = xx [ 46 ] ;
xx [ 1087 ] = - ( xx [ 329 ] + xx [ 92 ] ) ; xx [ 1088 ] = - ( xx [ 86 ] + xx
[ 104 ] ) ; xx [ 1089 ] = - ( xx [ 95 ] + xx [ 116 ] ) ; xx [ 1090 ] = xx [
46 ] ; xx [ 1091 ] = xx [ 46 ] ; xx [ 1092 ] = xx [ 46 ] ; xx [ 1093 ] = xx [
46 ] ; xx [ 1094 ] = xx [ 46 ] ; xx [ 1095 ] = xx [ 46 ] ; xx [ 1096 ] = xx [
46 ] ; xx [ 1097 ] = xx [ 46 ] ; xx [ 1098 ] = xx [ 46 ] ; xx [ 1099 ] = xx [
46 ] ; xx [ 1100 ] = xx [ 46 ] ; xx [ 1101 ] = xx [ 46 ] ; xx [ 1102 ] = xx [
46 ] ; xx [ 1103 ] = xx [ 46 ] ; xx [ 1104 ] = xx [ 46 ] ; xx [ 1105 ] = xx [
46 ] ; xx [ 1106 ] = xx [ 46 ] ; xx [ 1107 ] = xx [ 46 ] ; xx [ 1108 ] = xx [
46 ] ; xx [ 1109 ] = xx [ 46 ] ; xx [ 1110 ] = xx [ 304 ] + xx [ 367 ] ; xx [
1111 ] = xx [ 383 ] + xx [ 28 ] ; xx [ 1112 ] = ( xx [ 386 ] - xx [ 195 ] *
xx [ 204 ] ) * xx [ 14 ] + xx [ 23 ] - xx [ 339 ] - xx [ 8 ] ; xx [ 1113 ] =
xx [ 46 ] ; xx [ 1114 ] = xx [ 46 ] ; xx [ 1115 ] = xx [ 46 ] ; xx [ 1116 ] =
xx [ 46 ] ; xx [ 1117 ] = - ( xx [ 330 ] + xx [ 93 ] ) ; xx [ 1118 ] = - ( xx
[ 87 ] + xx [ 105 ] ) ; xx [ 1119 ] = - ( xx [ 96 ] + xx [ 117 ] ) ; xx [
1120 ] = xx [ 46 ] ; xx [ 1121 ] = xx [ 46 ] ; xx [ 1122 ] = xx [ 46 ] ; xx [
1123 ] = xx [ 46 ] ; xx [ 1124 ] = xx [ 46 ] ; xx [ 1125 ] = xx [ 46 ] ; xx [
1126 ] = xx [ 46 ] ; xx [ 1127 ] = xx [ 46 ] ; xx [ 1128 ] = xx [ 46 ] ; xx [
1129 ] = xx [ 46 ] ; xx [ 1130 ] = xx [ 46 ] ; xx [ 1131 ] = xx [ 46 ] ; xx [
1132 ] = xx [ 46 ] ; xx [ 1133 ] = xx [ 46 ] ; xx [ 1134 ] = xx [ 46 ] ; xx [
1135 ] = xx [ 46 ] ; xx [ 1136 ] = xx [ 46 ] ; xx [ 1137 ] = xx [ 46 ] ; xx [
1138 ] = xx [ 46 ] ; xx [ 1139 ] = xx [ 46 ] ; xx [ 1140 ] = xx [ 305 ] - xx
[ 318 ] ; xx [ 1141 ] = xx [ 384 ] - xx [ 328 ] ; xx [ 1142 ] = xx [ 14 ] * (
xx [ 387 ] + xx [ 213 ] * xx [ 195 ] ) - xx [ 161 ] ; xx [ 1143 ] = xx [ 46 ]
; xx [ 1144 ] = xx [ 46 ] ; xx [ 1145 ] = xx [ 46 ] ; xx [ 1146 ] = xx [ 46 ]
; xx [ 1147 ] = - ( xx [ 331 ] + xx [ 94 ] ) ; xx [ 1148 ] = - ( xx [ 88 ] +
xx [ 106 ] ) ; xx [ 1149 ] = - ( xx [ 97 ] + xx [ 118 ] ) ; xx [ 1150 ] = xx
[ 46 ] ; xx [ 1151 ] = xx [ 46 ] ; xx [ 1152 ] = xx [ 46 ] ; xx [ 1153 ] = xx
[ 217 ] * xx [ 317 ] + xx [ 403 ] ; xx [ 1154 ] = xx [ 46 ] ; xx [ 1155 ] =
xx [ 46 ] ; xx [ 1156 ] = xx [ 46 ] ; xx [ 1157 ] = xx [ 46 ] ; xx [ 1158 ] =
xx [ 46 ] ; xx [ 1159 ] = xx [ 46 ] ; xx [ 1160 ] = xx [ 46 ] ; xx [ 1161 ] =
xx [ 46 ] ; xx [ 1162 ] = xx [ 46 ] ; xx [ 1163 ] = xx [ 46 ] ; xx [ 1164 ] =
xx [ 46 ] ; xx [ 1165 ] = xx [ 46 ] ; xx [ 1166 ] = xx [ 46 ] ; xx [ 1167 ] =
xx [ 46 ] ; xx [ 1168 ] = xx [ 46 ] ; xx [ 1169 ] = xx [ 46 ] ; xx [ 1170 ] =
xx [ 46 ] ; xx [ 1171 ] = xx [ 46 ] ; xx [ 1172 ] = xx [ 46 ] ; xx [ 1173 ] =
xx [ 46 ] ; xx [ 1174 ] = xx [ 46 ] ; xx [ 1175 ] = xx [ 46 ] ; xx [ 1176 ] =
xx [ 46 ] ; xx [ 1177 ] = xx [ 46 ] ; xx [ 1178 ] = xx [ 46 ] ; xx [ 1179 ] =
xx [ 46 ] ; xx [ 1180 ] = xx [ 46 ] ; xx [ 1181 ] = xx [ 46 ] ; xx [ 1182 ] =
xx [ 46 ] ; xx [ 1183 ] = xx [ 46 ] ; xx [ 1184 ] = xx [ 46 ] ; xx [ 1185 ] =
xx [ 46 ] ; xx [ 1186 ] = xx [ 46 ] ; xx [ 1187 ] = xx [ 46 ] ; xx [ 1188 ] =
xx [ 46 ] ; xx [ 1189 ] = xx [ 46 ] ; xx [ 1190 ] = xx [ 46 ] ; xx [ 1191 ] =
xx [ 46 ] ; xx [ 1192 ] = xx [ 46 ] ; xx [ 1193 ] = xx [ 217 ] * xx [ 409 ] +
xx [ 430 ] ; xx [ 1194 ] = xx [ 46 ] ; xx [ 1195 ] = xx [ 46 ] ; xx [ 1196 ]
= xx [ 46 ] ; xx [ 1197 ] = xx [ 46 ] ; xx [ 1198 ] = xx [ 46 ] ; xx [ 1199 ]
= xx [ 46 ] ; xx [ 1200 ] = xx [ 46 ] ; xx [ 1201 ] = xx [ 46 ] ; xx [ 1202 ]
= xx [ 46 ] ; xx [ 1203 ] = xx [ 46 ] ; xx [ 1204 ] = xx [ 46 ] ; xx [ 1205 ]
= xx [ 46 ] ; xx [ 1206 ] = xx [ 46 ] ; xx [ 1207 ] = xx [ 46 ] ; xx [ 1208 ]
= xx [ 46 ] ; xx [ 1209 ] = xx [ 46 ] ; xx [ 1210 ] = xx [ 46 ] ; xx [ 1211 ]
= xx [ 46 ] ; xx [ 1212 ] = xx [ 46 ] ; xx [ 1213 ] = xx [ 46 ] ; xx [ 1214 ]
= xx [ 46 ] ; xx [ 1215 ] = xx [ 46 ] ; xx [ 1216 ] = xx [ 46 ] ; xx [ 1217 ]
= xx [ 46 ] ; xx [ 1218 ] = xx [ 46 ] ; xx [ 1219 ] = xx [ 46 ] ; xx [ 1220 ]
= xx [ 46 ] ; xx [ 1221 ] = xx [ 46 ] ; xx [ 1222 ] = xx [ 46 ] ; xx [ 1223 ]
= xx [ 46 ] ; xx [ 1224 ] = xx [ 46 ] ; xx [ 1225 ] = xx [ 46 ] ; xx [ 1226 ]
= xx [ 46 ] ; xx [ 1227 ] = xx [ 46 ] ; xx [ 1228 ] = xx [ 46 ] ; xx [ 1229 ]
= xx [ 46 ] ; xx [ 1230 ] = xx [ 46 ] ; xx [ 1231 ] = xx [ 46 ] ; xx [ 1232 ]
= xx [ 46 ] ; xx [ 1233 ] = xx [ 217 ] * xx [ 434 ] + xx [ 465 ] ; xx [ 1234
] = xx [ 46 ] ; xx [ 1235 ] = xx [ 46 ] ; xx [ 1236 ] = xx [ 46 ] ; xx [ 1237
] = xx [ 46 ] ; xx [ 1238 ] = xx [ 46 ] ; xx [ 1239 ] = xx [ 46 ] ; xx [ 8 ]
= - ( xx [ 55 ] * xx [ 528 ] ) ; xx [ 9 ] = xx [ 57 ] * xx [ 528 ] ; xx [ 10
] = xx [ 58 ] * xx [ 528 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 81 ,
xx + 8 , xx + 21 ) ; pm_math_Quaternion_xform_ra ( xx + 74 , xx + 533 , xx +
43 ) ; xx [ 46 ] = xx [ 21 ] + xx [ 43 ] ; xx [ 47 ] = xx [ 22 ] + xx [ 44 ]
; xx [ 48 ] = xx [ 23 ] + xx [ 45 ] ; pm_math_Vector3_cross_ra ( xx + 46 , xx
+ 18 , xx + 63 ) ; pm_math_Quaternion_xform_ra ( xx + 50 , xx + 63 , xx + 46
) ; xx [ 63 ] = - 2.298050364265303e-6 ; xx [ 64 ] = 0.02367056868070961 ; xx
[ 65 ] = - 3.023104627104057e-6 ; pm_math_Quaternion_xform_ra ( xx + 98 , xx
+ 63 , xx + 66 ) ; xx [ 1 ] = xx [ 66 ] * xx [ 528 ] ;
pm_math_Vector3_cross_ra ( xx + 43 , xx + 36 , xx + 69 ) ;
pm_math_Quaternion_xform_ra ( xx + 81 , xx + 69 , xx + 43 ) ;
pm_math_Quaternion_xform_ra ( xx + 81 , xx + 36 , xx + 69 ) ; xx [ 78 ] = xx
[ 3 ] + xx [ 69 ] ; xx [ 79 ] = xx [ 7 ] + xx [ 70 ] ; xx [ 80 ] = xx [ 71 ]
- xx [ 42 ] ; pm_math_Vector3_cross_ra ( xx + 8 , xx + 78 , xx + 69 ) ; xx [
8 ] = xx [ 43 ] + xx [ 69 ] ; xx [ 9 ] = xx [ 44 ] + xx [ 70 ] ; xx [ 10 ] =
xx [ 45 ] + xx [ 71 ] ; pm_math_Quaternion_xform_ra ( xx + 98 , xx + 8 , xx +
43 ) ; xx [ 8 ] = xx [ 520 ] * xx [ 11 ] + xx [ 14 ] * xx [ 521 ] * xx [ 41 ]
; xx [ 9 ] = xx [ 14 ] * xx [ 520 ] * xx [ 17 ] + xx [ 521 ] * xx [ 40 ] ; xx
[ 10 ] = xx [ 14 ] * xx [ 35 ] * xx [ 520 ] + xx [ 522 ] ;
pm_math_Vector3_cross_ra ( xx + 8 , xx + 24 , xx + 15 ) ;
pm_math_Quaternion_xform_ra ( xx + 30 , xx + 15 , xx + 78 ) ; xx [ 15 ] = xx
[ 9 ] * xx [ 27 ] ; xx [ 16 ] = xx [ 10 ] * xx [ 29 ] - xx [ 8 ] * xx [ 27 ]
; xx [ 17 ] = - ( xx [ 9 ] * xx [ 29 ] ) ; pm_math_Quaternion_xform_ra ( xx +
30 , xx + 15 , xx + 85 ) ; xx [ 12 ] = xx [ 67 ] * xx [ 528 ] ; xx [ 15 ] =
xx [ 68 ] * xx [ 528 ] ; xx [ 66 ] = - ( xx [ 55 ] * xx [ 537 ] ) ; xx [ 67 ]
= xx [ 57 ] * xx [ 537 ] ; xx [ 68 ] = xx [ 58 ] * xx [ 537 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 140 , xx + 66 , xx + 88 ) ;
pm_math_Quaternion_xform_ra ( xx + 74 , xx + 542 , xx + 91 ) ; xx [ 94 ] = xx
[ 88 ] + xx [ 91 ] ; xx [ 95 ] = xx [ 89 ] + xx [ 92 ] ; xx [ 96 ] = xx [ 90
] + xx [ 93 ] ; pm_math_Vector3_cross_ra ( xx + 94 , xx + 18 , xx + 102 ) ;
pm_math_Quaternion_xform_ra ( xx + 136 , xx + 102 , xx + 94 ) ;
pm_math_Quaternion_xform_ra ( xx + 162 , xx + 63 , xx + 102 ) ; xx [ 16 ] =
xx [ 102 ] * xx [ 537 ] ; pm_math_Vector3_cross_ra ( xx + 91 , xx + 36 , xx +
110 ) ; pm_math_Quaternion_xform_ra ( xx + 140 , xx + 110 , xx + 91 ) ;
pm_math_Quaternion_xform_ra ( xx + 140 , xx + 36 , xx + 110 ) ; xx [ 113 ] =
xx [ 3 ] + xx [ 110 ] ; xx [ 114 ] = xx [ 7 ] + xx [ 111 ] ; xx [ 115 ] = xx
[ 112 ] - xx [ 42 ] ; pm_math_Vector3_cross_ra ( xx + 66 , xx + 113 , xx +
110 ) ; xx [ 66 ] = xx [ 91 ] + xx [ 110 ] ; xx [ 67 ] = xx [ 92 ] + xx [ 111
] ; xx [ 68 ] = xx [ 93 ] + xx [ 112 ] ; pm_math_Quaternion_xform_ra ( xx +
162 , xx + 66 , xx + 91 ) ; pm_math_Vector3_cross_ra ( xx + 8 , xx + 126 , xx
+ 66 ) ; pm_math_Quaternion_xform_ra ( xx + 30 , xx + 66 , xx + 8 ) ; xx [ 17
] = xx [ 103 ] * xx [ 537 ] ; xx [ 28 ] = xx [ 104 ] * xx [ 537 ] ; xx [ 66 ]
= - ( xx [ 55 ] * xx [ 556 ] ) ; xx [ 67 ] = xx [ 57 ] * xx [ 556 ] ; xx [ 68
] = xx [ 58 ] * xx [ 556 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 242 ,
xx + 66 , xx + 102 ) ; pm_math_Quaternion_xform_ra ( xx + 74 , xx + 561 , xx
+ 113 ) ; xx [ 116 ] = xx [ 102 ] + xx [ 113 ] ; xx [ 117 ] = xx [ 103 ] + xx
[ 114 ] ; xx [ 118 ] = xx [ 104 ] + xx [ 115 ] ; pm_math_Vector3_cross_ra (
xx + 116 , xx + 18 , xx + 119 ) ; pm_math_Quaternion_xform_ra ( xx + 232 , xx
+ 119 , xx + 116 ) ; pm_math_Quaternion_xform_ra ( xx + 246 , xx + 63 , xx +
119 ) ; xx [ 35 ] = xx [ 119 ] * xx [ 556 ] ; pm_math_Vector3_cross_ra ( xx +
113 , xx + 36 , xx + 122 ) ; pm_math_Quaternion_xform_ra ( xx + 242 , xx +
122 , xx + 113 ) ; pm_math_Quaternion_xform_ra ( xx + 242 , xx + 36 , xx +
122 ) ; xx [ 129 ] = xx [ 3 ] + xx [ 122 ] ; xx [ 130 ] = xx [ 7 ] + xx [ 123
] ; xx [ 131 ] = xx [ 124 ] - xx [ 42 ] ; pm_math_Vector3_cross_ra ( xx + 66
, xx + 129 , xx + 122 ) ; xx [ 66 ] = xx [ 113 ] + xx [ 122 ] ; xx [ 67 ] =
xx [ 114 ] + xx [ 123 ] ; xx [ 68 ] = xx [ 115 ] + xx [ 124 ] ;
pm_math_Quaternion_xform_ra ( xx + 246 , xx + 66 , xx + 113 ) ; xx [ 41 ] =
xx [ 548 ] * xx [ 186 ] + xx [ 14 ] * xx [ 549 ] * xx [ 208 ] ; xx [ 49 ] =
xx [ 14 ] * xx [ 548 ] * xx [ 187 ] + xx [ 549 ] * xx [ 207 ] ; xx [ 54 ] =
xx [ 14 ] * xx [ 189 ] * xx [ 548 ] + xx [ 550 ] ; xx [ 66 ] = xx [ 41 ] ; xx
[ 67 ] = xx [ 49 ] ; xx [ 68 ] = xx [ 54 ] ; pm_math_Vector3_cross_ra ( xx +
66 , xx + 24 , xx + 129 ) ; pm_math_Quaternion_xform_ra ( xx + 182 , xx + 129
, xx + 132 ) ; xx [ 129 ] = xx [ 49 ] * xx [ 27 ] ; xx [ 130 ] = xx [ 54 ] *
xx [ 29 ] - xx [ 41 ] * xx [ 27 ] ; xx [ 131 ] = - ( xx [ 49 ] * xx [ 29 ] )
; pm_math_Quaternion_xform_ra ( xx + 200 , xx + 129 , xx + 146 ) ; xx [ 41 ]
= xx [ 178 ] * xx [ 146 ] ; xx [ 49 ] = xx [ 178 ] * xx [ 147 ] ; xx [ 54 ] =
xx [ 146 ] - ( xx [ 178 ] * xx [ 41 ] - xx [ 144 ] * xx [ 49 ] ) * xx [ 14 ]
; xx [ 56 ] = xx [ 120 ] * xx [ 556 ] ; xx [ 72 ] = xx [ 147 ] - xx [ 14 ] *
( xx [ 144 ] * xx [ 41 ] + xx [ 178 ] * xx [ 49 ] ) ; xx [ 41 ] = xx [ 121 ]
* xx [ 556 ] ; xx [ 119 ] = - ( xx [ 55 ] * xx [ 565 ] ) ; xx [ 120 ] = xx [
57 ] * xx [ 565 ] ; xx [ 121 ] = xx [ 58 ] * xx [ 565 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 227 , xx + 119 , xx + 129 ) ;
pm_math_Quaternion_xform_ra ( xx + 74 , xx + 570 , xx + 149 ) ; xx [ 152 ] =
xx [ 129 ] + xx [ 149 ] ; xx [ 153 ] = xx [ 130 ] + xx [ 150 ] ; xx [ 154 ] =
xx [ 131 ] + xx [ 151 ] ; pm_math_Vector3_cross_ra ( xx + 152 , xx + 18 , xx
+ 155 ) ; pm_math_Quaternion_xform_ra ( xx + 209 , xx + 155 , xx + 152 ) ;
pm_math_Quaternion_xform_ra ( xx + 277 , xx + 63 , xx + 155 ) ; xx [ 49 ] =
xx [ 155 ] * xx [ 565 ] ; pm_math_Vector3_cross_ra ( xx + 149 , xx + 36 , xx
+ 158 ) ; pm_math_Quaternion_xform_ra ( xx + 227 , xx + 158 , xx + 149 ) ;
pm_math_Quaternion_xform_ra ( xx + 227 , xx + 36 , xx + 158 ) ; xx [ 166 ] =
xx [ 3 ] + xx [ 158 ] ; xx [ 167 ] = xx [ 7 ] + xx [ 159 ] ; xx [ 168 ] = xx
[ 160 ] - xx [ 42 ] ; pm_math_Vector3_cross_ra ( xx + 119 , xx + 166 , xx +
158 ) ; xx [ 119 ] = xx [ 149 ] + xx [ 158 ] ; xx [ 120 ] = xx [ 150 ] + xx [
159 ] ; xx [ 121 ] = xx [ 151 ] + xx [ 160 ] ; pm_math_Quaternion_xform_ra (
xx + 277 , xx + 119 , xx + 149 ) ; pm_math_Vector3_cross_ra ( xx + 66 , xx +
126 , xx + 119 ) ; pm_math_Quaternion_xform_ra ( xx + 182 , xx + 119 , xx +
66 ) ; xx [ 73 ] = xx [ 156 ] * xx [ 565 ] ; xx [ 97 ] = xx [ 157 ] * xx [
565 ] ; xx [ 119 ] = - ( xx [ 55 ] * xx [ 584 ] ) ; xx [ 120 ] = xx [ 57 ] *
xx [ 584 ] ; xx [ 121 ] = xx [ 58 ] * xx [ 584 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 357 , xx + 119 , xx + 155 ) ;
pm_math_Quaternion_xform_ra ( xx + 74 , xx + 589 , xx + 166 ) ; xx [ 169 ] =
xx [ 155 ] + xx [ 166 ] ; xx [ 170 ] = xx [ 156 ] + xx [ 167 ] ; xx [ 171 ] =
xx [ 157 ] + xx [ 168 ] ; pm_math_Vector3_cross_ra ( xx + 169 , xx + 18 , xx
+ 173 ) ; pm_math_Quaternion_xform_ra ( xx + 345 , xx + 173 , xx + 169 ) ;
pm_math_Quaternion_xform_ra ( xx + 353 , xx + 63 , xx + 173 ) ; xx [ 105 ] =
xx [ 173 ] * xx [ 584 ] ; pm_math_Vector3_cross_ra ( xx + 166 , xx + 36 , xx
+ 179 ) ; pm_math_Quaternion_xform_ra ( xx + 357 , xx + 179 , xx + 166 ) ;
pm_math_Quaternion_xform_ra ( xx + 357 , xx + 36 , xx + 179 ) ; xx [ 191 ] =
xx [ 3 ] + xx [ 179 ] ; xx [ 192 ] = xx [ 7 ] + xx [ 180 ] ; xx [ 193 ] = xx
[ 181 ] - xx [ 42 ] ; pm_math_Vector3_cross_ra ( xx + 119 , xx + 191 , xx +
179 ) ; xx [ 119 ] = xx [ 166 ] + xx [ 179 ] ; xx [ 120 ] = xx [ 167 ] + xx [
180 ] ; xx [ 121 ] = xx [ 168 ] + xx [ 181 ] ; pm_math_Quaternion_xform_ra (
xx + 353 , xx + 119 , xx + 166 ) ; xx [ 106 ] = xx [ 576 ] * xx [ 263 ] + xx
[ 14 ] * xx [ 577 ] * xx [ 319 ] ; xx [ 119 ] = xx [ 14 ] * xx [ 576 ] * xx [
264 ] + xx [ 577 ] * xx [ 308 ] ; xx [ 120 ] = xx [ 14 ] * xx [ 294 ] * xx [
576 ] + xx [ 578 ] ; xx [ 191 ] = xx [ 106 ] ; xx [ 192 ] = xx [ 119 ] ; xx [
193 ] = xx [ 120 ] ; pm_math_Vector3_cross_ra ( xx + 191 , xx + 24 , xx + 194
) ; pm_math_Quaternion_xform_ra ( xx + 299 , xx + 194 , xx + 197 ) ; xx [ 194
] = xx [ 119 ] * xx [ 27 ] ; xx [ 195 ] = xx [ 120 ] * xx [ 29 ] - xx [ 106 ]
* xx [ 27 ] ; xx [ 196 ] = - ( xx [ 119 ] * xx [ 29 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 312 , xx + 194 , xx + 119 ) ; xx [ 106 ] =
xx [ 223 ] * xx [ 120 ] ; xx [ 125 ] = xx [ 223 ] * xx [ 119 ] ; xx [ 135 ] =
xx [ 119 ] - ( xx [ 145 ] * xx [ 106 ] + xx [ 223 ] * xx [ 125 ] ) * xx [ 14
] ; xx [ 146 ] = xx [ 174 ] * xx [ 584 ] ; xx [ 147 ] = xx [ 120 ] + xx [ 14
] * ( xx [ 145 ] * xx [ 125 ] - xx [ 223 ] * xx [ 106 ] ) ; xx [ 106 ] = xx [
175 ] * xx [ 584 ] ; xx [ 173 ] = - ( xx [ 55 ] * xx [ 593 ] ) ; xx [ 174 ] =
xx [ 57 ] * xx [ 593 ] ; xx [ 175 ] = xx [ 58 ] * xx [ 593 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 388 , xx + 173 , xx + 194 ) ;
pm_math_Quaternion_xform_ra ( xx + 74 , xx + 598 , xx + 213 ) ; xx [ 218 ] =
xx [ 194 ] + xx [ 213 ] ; xx [ 219 ] = xx [ 195 ] + xx [ 214 ] ; xx [ 220 ] =
xx [ 196 ] + xx [ 215 ] ; pm_math_Vector3_cross_ra ( xx + 218 , xx + 18 , xx
+ 236 ) ; pm_math_Quaternion_xform_ra ( xx + 59 , xx + 236 , xx + 218 ) ;
pm_math_Quaternion_xform_ra ( xx + 392 , xx + 63 , xx + 236 ) ; xx [ 55 ] =
xx [ 236 ] * xx [ 593 ] ; pm_math_Vector3_cross_ra ( xx + 213 , xx + 36 , xx
+ 63 ) ; pm_math_Quaternion_xform_ra ( xx + 388 , xx + 63 , xx + 213 ) ;
pm_math_Quaternion_xform_ra ( xx + 388 , xx + 36 , xx + 63 ) ; xx [ 239 ] =
xx [ 3 ] + xx [ 63 ] ; xx [ 240 ] = xx [ 7 ] + xx [ 64 ] ; xx [ 241 ] = xx [
65 ] - xx [ 42 ] ; pm_math_Vector3_cross_ra ( xx + 173 , xx + 239 , xx + 63 )
; xx [ 173 ] = xx [ 213 ] + xx [ 63 ] ; xx [ 174 ] = xx [ 214 ] + xx [ 64 ] ;
xx [ 175 ] = xx [ 215 ] + xx [ 65 ] ; pm_math_Quaternion_xform_ra ( xx + 392
, xx + 173 , xx + 213 ) ; pm_math_Vector3_cross_ra ( xx + 191 , xx + 126 , xx
+ 173 ) ; pm_math_Quaternion_xform_ra ( xx + 299 , xx + 173 , xx + 191 ) ; xx
[ 3 ] = xx [ 237 ] * xx [ 593 ] ; xx [ 7 ] = xx [ 238 ] * xx [ 593 ] ; xx [
42 ] = xx [ 437 ] * xx [ 524 ] ; xx [ 57 ] = xx [ 42 ] * xx [ 108 ] ; xx [ 58
] = xx [ 352 ] * xx [ 524 ] ; xx [ 119 ] = xx [ 58 ] * xx [ 108 ] ; xx [ 120
] = xx [ 471 ] - xx [ 378 ] ; xx [ 125 ] = xx [ 14 ] * ( xx [ 57 ] * xx [ 108
] + xx [ 107 ] * xx [ 119 ] ) - xx [ 42 ] + xx [ 524 ] * xx [ 120 ] ; xx [ 42
] = xx [ 469 ] + xx [ 109 ] ; xx [ 109 ] = xx [ 42 ] * xx [ 524 ] - ( xx [ 58
] + ( xx [ 107 ] * xx [ 57 ] - xx [ 119 ] * xx [ 108 ] ) * xx [ 14 ] ) ; xx [
57 ] = xx [ 526 ] * xx [ 326 ] ; xx [ 58 ] = xx [ 326 ] * xx [ 57 ] ; xx [
119 ] = xx [ 316 ] * xx [ 57 ] ; xx [ 173 ] = ( xx [ 58 ] + xx [ 58 ] ) * xx
[ 14 ] - xx [ 526 ] ; xx [ 174 ] = xx [ 14 ] * ( xx [ 119 ] - xx [ 119 ] ) ;
xx [ 175 ] = ( xx [ 119 ] + xx [ 119 ] ) * xx [ 14 ] ; xx [ 57 ] =
pm_math_Vector3_dot_ra ( xx + 334 , xx + 173 ) ; xx [ 161 ] = xx [ 526 ] * xx
[ 316 ] ; xx [ 173 ] = xx [ 316 ] * xx [ 161 ] ; xx [ 174 ] = - ( ( xx [ 119
] + xx [ 326 ] * xx [ 161 ] ) * xx [ 14 ] ) ; xx [ 175 ] = xx [ 526 ] - ( xx
[ 58 ] + xx [ 173 ] ) * xx [ 14 ] ; xx [ 176 ] = xx [ 14 ] * ( xx [ 58 ] - xx
[ 173 ] ) ; xx [ 58 ] = pm_math_Vector3_dot_ra ( xx + 334 , xx + 174 ) ; xx [
119 ] = xx [ 306 ] == 0.0 ? 0.0 : ( xx [ 338 ] * ( xx [ 125 ] * xx [ 368 ] -
xx [ 109 ] * xx [ 205 ] + xx [ 57 ] ) - xx [ 4 ] * ( xx [ 109 ] * xx [ 224 ]
- xx [ 125 ] * xx [ 337 ] + xx [ 58 ] ) ) / xx [ 306 ] ; xx [ 161 ] = xx [
524 ] * xx [ 108 ] ; xx [ 173 ] = xx [ 14 ] * xx [ 161 ] * xx [ 108 ] - xx [
524 ] ; xx [ 174 ] = xx [ 14 ] * xx [ 107 ] * xx [ 161 ] ; xx [ 161 ] = xx [
399 ] == 0.0 ? 0.0 : ( xx [ 402 ] * ( xx [ 125 ] * xx [ 397 ] - xx [ 109 ] *
xx [ 400 ] + xx [ 327 ] * xx [ 173 ] + xx [ 174 ] * xx [ 333 ] ) - xx [ 376 ]
* ( xx [ 109 ] * xx [ 377 ] - xx [ 125 ] * xx [ 340 ] + xx [ 333 ] * xx [ 173
] - xx [ 174 ] * xx [ 327 ] ) ) / xx [ 399 ] ; xx [ 109 ] = xx [ 437 ] * xx [
552 ] ; xx [ 125 ] = xx [ 109 ] * xx [ 398 ] ; xx [ 173 ] = xx [ 453 ] * xx [
552 ] ; xx [ 174 ] = xx [ 173 ] * xx [ 398 ] ; xx [ 175 ] = xx [ 471 ] - xx [
422 ] ; xx [ 176 ] = xx [ 14 ] * ( xx [ 125 ] * xx [ 398 ] + xx [ 396 ] * xx
[ 174 ] ) - xx [ 109 ] + xx [ 552 ] * xx [ 175 ] ; xx [ 109 ] = xx [ 352 ] +
xx [ 401 ] ; xx [ 177 ] = xx [ 109 ] * xx [ 552 ] - ( xx [ 173 ] + ( xx [ 396
] * xx [ 125 ] - xx [ 174 ] * xx [ 398 ] ) * xx [ 14 ] ) ; xx [ 125 ] = xx [
554 ] * xx [ 410 ] ; xx [ 173 ] = xx [ 410 ] * xx [ 125 ] ; xx [ 174 ] = xx [
408 ] * xx [ 125 ] ; xx [ 236 ] = ( xx [ 173 ] + xx [ 173 ] ) * xx [ 14 ] -
xx [ 554 ] ; xx [ 237 ] = xx [ 14 ] * ( xx [ 174 ] - xx [ 174 ] ) ; xx [ 238
] = ( xx [ 174 ] + xx [ 174 ] ) * xx [ 14 ] ; xx [ 125 ] =
pm_math_Vector3_dot_ra ( xx + 413 , xx + 236 ) ; xx [ 187 ] = xx [ 554 ] * xx
[ 408 ] ; xx [ 189 ] = xx [ 408 ] * xx [ 187 ] ; xx [ 236 ] = - ( ( xx [ 174
] + xx [ 410 ] * xx [ 187 ] ) * xx [ 14 ] ) ; xx [ 237 ] = xx [ 554 ] - ( xx
[ 173 ] + xx [ 189 ] ) * xx [ 14 ] ; xx [ 238 ] = xx [ 14 ] * ( xx [ 173 ] -
xx [ 189 ] ) ; xx [ 173 ] = pm_math_Vector3_dot_ra ( xx + 413 , xx + 236 ) ;
xx [ 174 ] = xx [ 407 ] == 0.0 ? 0.0 : ( xx [ 420 ] * ( xx [ 176 ] * xx [ 418
] - xx [ 177 ] * xx [ 404 ] + xx [ 125 ] ) - xx [ 221 ] * ( xx [ 177 ] * xx [
406 ] - xx [ 176 ] * xx [ 416 ] + xx [ 173 ] ) ) / xx [ 407 ] ; xx [ 187 ] =
xx [ 552 ] * xx [ 398 ] ; xx [ 189 ] = xx [ 14 ] * xx [ 187 ] * xx [ 398 ] -
xx [ 552 ] ; xx [ 204 ] = xx [ 14 ] * xx [ 396 ] * xx [ 187 ] ; xx [ 187 ] =
xx [ 426 ] == 0.0 ? 0.0 : ( xx [ 429 ] * ( xx [ 176 ] * xx [ 424 ] - xx [ 177
] * xx [ 427 ] + xx [ 411 ] * xx [ 189 ] + xx [ 204 ] * xx [ 412 ] ) - xx [
419 ] * ( xx [ 177 ] * xx [ 421 ] - xx [ 176 ] * xx [ 417 ] + xx [ 412 ] * xx
[ 189 ] - xx [ 204 ] * xx [ 411 ] ) ) / xx [ 426 ] ; xx [ 176 ] = xx [ 437 ]
* xx [ 580 ] ; xx [ 177 ] = xx [ 176 ] * xx [ 425 ] ; xx [ 189 ] = xx [ 453 ]
* xx [ 580 ] ; xx [ 204 ] = xx [ 189 ] * xx [ 425 ] ; xx [ 206 ] = xx [ 471 ]
- xx [ 458 ] ; xx [ 208 ] = xx [ 14 ] * ( xx [ 177 ] * xx [ 425 ] + xx [ 423
] * xx [ 204 ] ) - xx [ 176 ] + xx [ 580 ] * xx [ 206 ] ; xx [ 176 ] = xx [
352 ] + xx [ 428 ] ; xx [ 222 ] = xx [ 176 ] * xx [ 580 ] - ( xx [ 189 ] + (
xx [ 423 ] * xx [ 177 ] - xx [ 204 ] * xx [ 425 ] ) * xx [ 14 ] ) ; xx [ 177
] = xx [ 582 ] * xx [ 438 ] ; xx [ 189 ] = xx [ 438 ] * xx [ 177 ] ; xx [ 204
] = xx [ 435 ] * xx [ 177 ] ; xx [ 236 ] = ( xx [ 189 ] + xx [ 189 ] ) * xx [
14 ] - xx [ 582 ] ; xx [ 237 ] = xx [ 14 ] * ( xx [ 204 ] - xx [ 204 ] ) ; xx
[ 238 ] = ( xx [ 204 ] + xx [ 204 ] ) * xx [ 14 ] ; xx [ 177 ] =
pm_math_Vector3_dot_ra ( xx + 447 , xx + 236 ) ; xx [ 225 ] = xx [ 582 ] * xx
[ 435 ] ; xx [ 226 ] = xx [ 435 ] * xx [ 225 ] ; xx [ 236 ] = - ( ( xx [ 204
] + xx [ 438 ] * xx [ 225 ] ) * xx [ 14 ] ) ; xx [ 237 ] = xx [ 582 ] - ( xx
[ 189 ] + xx [ 226 ] ) * xx [ 14 ] ; xx [ 238 ] = xx [ 14 ] * ( xx [ 189 ] -
xx [ 226 ] ) ; xx [ 189 ] = pm_math_Vector3_dot_ra ( xx + 447 , xx + 236 ) ;
xx [ 204 ] = xx [ 431 ] == 0.0 ? 0.0 : ( xx [ 442 ] * ( xx [ 208 ] * xx [ 452
] - xx [ 222 ] * xx [ 369 ] + xx [ 177 ] ) - xx [ 405 ] * ( xx [ 222 ] * xx [
433 ] - xx [ 208 ] * xx [ 441 ] + xx [ 189 ] ) ) / xx [ 431 ] ; xx [ 225 ] =
xx [ 580 ] * xx [ 425 ] ; xx [ 226 ] = xx [ 14 ] * xx [ 225 ] * xx [ 425 ] -
xx [ 580 ] ; xx [ 231 ] = xx [ 14 ] * xx [ 423 ] * xx [ 225 ] ; xx [ 225 ] =
xx [ 461 ] == 0.0 ? 0.0 : ( xx [ 464 ] * ( xx [ 208 ] * xx [ 455 ] - xx [ 222
] * xx [ 462 ] + xx [ 439 ] * xx [ 226 ] + xx [ 231 ] * xx [ 440 ] ) - xx [
450 ] * ( xx [ 222 ] * xx [ 454 ] - xx [ 208 ] * xx [ 436 ] + xx [ 440 ] * xx
[ 226 ] - xx [ 231 ] * xx [ 439 ] ) ) / xx [ 461 ] ; xx [ 465 ] = xx [ 46 ] +
xx [ 1 ] + xx [ 43 ] - ( xx [ 78 ] + xx [ 85 ] ) ; xx [ 466 ] = xx [ 47 ] +
xx [ 12 ] + xx [ 44 ] - ( xx [ 79 ] + xx [ 86 ] ) ; xx [ 467 ] = xx [ 48 ] +
xx [ 15 ] + xx [ 45 ] - ( xx [ 80 ] + xx [ 87 ] ) ; xx [ 468 ] = xx [ 94 ] +
xx [ 16 ] + xx [ 91 ] - ( xx [ 8 ] + xx [ 85 ] ) ; xx [ 469 ] = xx [ 95 ] +
xx [ 17 ] + xx [ 92 ] - ( xx [ 9 ] + xx [ 86 ] ) ; xx [ 470 ] = xx [ 96 ] +
xx [ 28 ] + xx [ 93 ] - ( xx [ 10 ] + xx [ 87 ] ) ; xx [ 471 ] = xx [ 116 ] +
xx [ 35 ] + xx [ 113 ] - ( xx [ 132 ] + xx [ 54 ] ) ; xx [ 472 ] = xx [ 117 ]
+ xx [ 56 ] + xx [ 114 ] - ( xx [ 133 ] + xx [ 72 ] ) ; xx [ 473 ] = xx [ 118
] + xx [ 41 ] + xx [ 115 ] - ( xx [ 134 ] + xx [ 148 ] ) ; xx [ 474 ] = xx [
152 ] + xx [ 49 ] + xx [ 149 ] - ( xx [ 66 ] + xx [ 54 ] ) ; xx [ 475 ] = xx
[ 153 ] + xx [ 73 ] + xx [ 150 ] - ( xx [ 67 ] + xx [ 72 ] ) ; xx [ 476 ] =
xx [ 154 ] + xx [ 97 ] + xx [ 151 ] - ( xx [ 68 ] + xx [ 148 ] ) ; xx [ 477 ]
= xx [ 169 ] + xx [ 105 ] + xx [ 166 ] - ( xx [ 197 ] + xx [ 135 ] ) ; xx [
478 ] = xx [ 170 ] + xx [ 146 ] + xx [ 167 ] - ( xx [ 198 ] + xx [ 147 ] ) ;
xx [ 479 ] = xx [ 171 ] + xx [ 106 ] + xx [ 168 ] - ( xx [ 199 ] + xx [ 121 ]
) ; xx [ 480 ] = xx [ 218 ] + xx [ 55 ] + xx [ 213 ] - ( xx [ 191 ] + xx [
135 ] ) ; xx [ 481 ] = xx [ 219 ] + xx [ 3 ] + xx [ 214 ] - ( xx [ 192 ] + xx
[ 147 ] ) ; xx [ 482 ] = xx [ 220 ] + xx [ 7 ] + xx [ 215 ] - ( xx [ 193 ] +
xx [ 121 ] ) ; xx [ 483 ] = - ( xx [ 217 ] * xx [ 119 ] + xx [ 161 ] ) ; xx [
484 ] = - ( xx [ 217 ] * xx [ 174 ] + xx [ 187 ] ) ; xx [ 485 ] = - ( xx [
217 ] * xx [ 204 ] + xx [ 225 ] ) ; memcpy ( xx + 1240 , xx + 610 , 630 *
sizeof ( double ) ) ; factorAndSolveWide ( 21 , 30 , xx + 1240 , xx + 1870 ,
xx + 1891 , ii + 0 , xx + 465 , xx [ 6 ] , xx + 486 ) ; xx [ 6 ] = xx [ 520 ]
+ xx [ 486 ] ; xx [ 8 ] = xx [ 521 ] + xx [ 487 ] ; xx [ 9 ] = xx [ 522 ] +
xx [ 488 ] ; xx [ 10 ] = xx [ 524 ] + xx [ 489 ] ; xx [ 43 ] = xx [ 533 ] +
xx [ 490 ] ; xx [ 44 ] = xx [ 534 ] + xx [ 491 ] ; xx [ 45 ] = xx [ 535 ] +
xx [ 492 ] ; xx [ 46 ] = xx [ 542 ] + xx [ 493 ] ; xx [ 47 ] = xx [ 543 ] +
xx [ 494 ] ; xx [ 48 ] = xx [ 544 ] + xx [ 495 ] ; xx [ 54 ] = xx [ 548 ] +
xx [ 496 ] ; xx [ 66 ] = xx [ 549 ] + xx [ 497 ] ; xx [ 67 ] = xx [ 550 ] +
xx [ 498 ] ; xx [ 68 ] = xx [ 552 ] + xx [ 499 ] ; xx [ 72 ] = xx [ 561 ] +
xx [ 500 ] ; xx [ 78 ] = xx [ 562 ] + xx [ 501 ] ; xx [ 79 ] = xx [ 563 ] +
xx [ 502 ] ; xx [ 80 ] = xx [ 570 ] + xx [ 503 ] ; xx [ 85 ] = xx [ 571 ] +
xx [ 504 ] ; xx [ 86 ] = xx [ 572 ] + xx [ 505 ] ; xx [ 87 ] = xx [ 576 ] +
xx [ 506 ] ; xx [ 91 ] = xx [ 577 ] + xx [ 507 ] ; xx [ 92 ] = xx [ 578 ] +
xx [ 508 ] ; xx [ 93 ] = xx [ 580 ] + xx [ 509 ] ; xx [ 94 ] = xx [ 589 ] +
xx [ 510 ] ; xx [ 95 ] = xx [ 590 ] + xx [ 511 ] ; xx [ 96 ] = xx [ 591 ] +
xx [ 512 ] ; xx [ 113 ] = xx [ 598 ] + xx [ 513 ] ; xx [ 114 ] = xx [ 599 ] +
xx [ 514 ] ; xx [ 115 ] = xx [ 600 ] + xx [ 515 ] ; xx [ 610 ] = xx [ 517 ] ;
xx [ 611 ] = xx [ 518 ] ; xx [ 612 ] = xx [ 519 ] ; xx [ 613 ] = xx [ 6 ] ;
xx [ 614 ] = xx [ 8 ] ; xx [ 615 ] = xx [ 9 ] ; xx [ 616 ] = xx [ 523 ] ; xx
[ 617 ] = xx [ 10 ] ; xx [ 618 ] = xx [ 525 ] ; xx [ 619 ] = xx [ 526 ] ; xx
[ 620 ] = xx [ 527 ] ; xx [ 621 ] = xx [ 528 ] ; xx [ 622 ] = xx [ 529 ] ; xx
[ 623 ] = xx [ 530 ] ; xx [ 624 ] = xx [ 531 ] ; xx [ 625 ] = xx [ 532 ] ; xx
[ 626 ] = xx [ 43 ] ; xx [ 627 ] = xx [ 44 ] ; xx [ 628 ] = xx [ 45 ] ; xx [
629 ] = xx [ 536 ] ; xx [ 630 ] = xx [ 537 ] ; xx [ 631 ] = xx [ 538 ] ; xx [
632 ] = xx [ 539 ] ; xx [ 633 ] = xx [ 540 ] ; xx [ 634 ] = xx [ 541 ] ; xx [
635 ] = xx [ 46 ] ; xx [ 636 ] = xx [ 47 ] ; xx [ 637 ] = xx [ 48 ] ; xx [
638 ] = xx [ 545 ] ; xx [ 639 ] = xx [ 546 ] ; xx [ 640 ] = xx [ 547 ] ; xx [
641 ] = xx [ 54 ] ; xx [ 642 ] = xx [ 66 ] ; xx [ 643 ] = xx [ 67 ] ; xx [
644 ] = xx [ 551 ] ; xx [ 645 ] = xx [ 68 ] ; xx [ 646 ] = xx [ 553 ] ; xx [
647 ] = xx [ 554 ] ; xx [ 648 ] = xx [ 555 ] ; xx [ 649 ] = xx [ 556 ] ; xx [
650 ] = xx [ 557 ] ; xx [ 651 ] = xx [ 558 ] ; xx [ 652 ] = xx [ 559 ] ; xx [
653 ] = xx [ 560 ] ; xx [ 654 ] = xx [ 72 ] ; xx [ 655 ] = xx [ 78 ] ; xx [
656 ] = xx [ 79 ] ; xx [ 657 ] = xx [ 564 ] ; xx [ 658 ] = xx [ 565 ] ; xx [
659 ] = xx [ 566 ] ; xx [ 660 ] = xx [ 567 ] ; xx [ 661 ] = xx [ 568 ] ; xx [
662 ] = xx [ 569 ] ; xx [ 663 ] = xx [ 80 ] ; xx [ 664 ] = xx [ 85 ] ; xx [
665 ] = xx [ 86 ] ; xx [ 666 ] = xx [ 573 ] ; xx [ 667 ] = xx [ 574 ] ; xx [
668 ] = xx [ 575 ] ; xx [ 669 ] = xx [ 87 ] ; xx [ 670 ] = xx [ 91 ] ; xx [
671 ] = xx [ 92 ] ; xx [ 672 ] = xx [ 579 ] ; xx [ 673 ] = xx [ 93 ] ; xx [
674 ] = xx [ 581 ] ; xx [ 675 ] = xx [ 582 ] ; xx [ 676 ] = xx [ 583 ] ; xx [
677 ] = xx [ 584 ] ; xx [ 678 ] = xx [ 585 ] ; xx [ 679 ] = xx [ 586 ] ; xx [
680 ] = xx [ 587 ] ; xx [ 681 ] = xx [ 588 ] ; xx [ 682 ] = xx [ 94 ] ; xx [
683 ] = xx [ 95 ] ; xx [ 684 ] = xx [ 96 ] ; xx [ 685 ] = xx [ 592 ] ; xx [
686 ] = xx [ 593 ] ; xx [ 687 ] = xx [ 594 ] ; xx [ 688 ] = xx [ 595 ] ; xx [
689 ] = xx [ 596 ] ; xx [ 690 ] = xx [ 597 ] ; xx [ 691 ] = xx [ 113 ] ; xx [
692 ] = xx [ 114 ] ; xx [ 693 ] = xx [ 115 ] ; xx [ 694 ] = xx [ 601 ] ; xx [
695 ] = xx [ 602 ] ; xx [ 696 ] = xx [ 603 ] ; xx [ 697 ] = xx [ 604 ] ; xx [
698 ] = xx [ 605 ] ; xx [ 699 ] = xx [ 606 ] ; xx [ 700 ] = xx [ 607 ] ; xx [
701 ] = xx [ 608 ] ; xx [ 702 ] = xx [ 609 ] ; xx [ 116 ] = xx [ 6 ] * xx [
11 ] + xx [ 8 ] * xx [ 13 ] ; xx [ 11 ] = xx [ 6 ] * xx [ 34 ] + xx [ 8 ] *
xx [ 40 ] ; xx [ 8 ] = xx [ 6 ] * xx [ 39 ] + xx [ 9 ] ; xx [ 117 ] = xx [
116 ] ; xx [ 118 ] = xx [ 11 ] ; xx [ 119 ] = xx [ 8 ] ;
pm_math_Vector3_cross_ra ( xx + 117 , xx + 24 , xx + 132 ) ;
pm_math_Quaternion_xform_ra ( xx + 30 , xx + 132 , xx + 147 ) ; xx [ 132 ] =
xx [ 11 ] * xx [ 27 ] ; xx [ 133 ] = xx [ 8 ] * xx [ 29 ] - xx [ 116 ] * xx [
27 ] ; xx [ 134 ] = - ( xx [ 11 ] * xx [ 29 ] ) ; pm_math_Quaternion_xform_ra
( xx + 30 , xx + 132 , xx + 150 ) ; pm_math_Quaternion_xform_ra ( xx + 74 ,
xx + 43 , xx + 132 ) ; xx [ 43 ] = xx [ 21 ] + xx [ 132 ] ; xx [ 44 ] = xx [
22 ] + xx [ 133 ] ; xx [ 45 ] = xx [ 23 ] + xx [ 134 ] ;
pm_math_Vector3_cross_ra ( xx + 43 , xx + 18 , xx + 21 ) ;
pm_math_Quaternion_xform_ra ( xx + 50 , xx + 21 , xx + 43 ) ;
pm_math_Vector3_cross_ra ( xx + 132 , xx + 36 , xx + 21 ) ;
pm_math_Quaternion_xform_ra ( xx + 81 , xx + 21 , xx + 50 ) ; xx [ 21 ] = xx
[ 50 ] + xx [ 69 ] ; xx [ 22 ] = xx [ 51 ] + xx [ 70 ] ; xx [ 23 ] = xx [ 52
] + xx [ 71 ] ; pm_math_Quaternion_xform_ra ( xx + 98 , xx + 21 , xx + 50 ) ;
pm_math_Vector3_cross_ra ( xx + 117 , xx + 126 , xx + 21 ) ;
pm_math_Quaternion_xform_ra ( xx + 30 , xx + 21 , xx + 69 ) ;
pm_math_Quaternion_xform_ra ( xx + 74 , xx + 46 , xx + 21 ) ; xx [ 30 ] = xx
[ 88 ] + xx [ 21 ] ; xx [ 31 ] = xx [ 89 ] + xx [ 22 ] ; xx [ 32 ] = xx [ 90
] + xx [ 23 ] ; pm_math_Vector3_cross_ra ( xx + 30 , xx + 18 , xx + 46 ) ;
pm_math_Quaternion_xform_ra ( xx + 136 , xx + 46 , xx + 30 ) ;
pm_math_Vector3_cross_ra ( xx + 21 , xx + 36 , xx + 46 ) ;
pm_math_Quaternion_xform_ra ( xx + 140 , xx + 46 , xx + 21 ) ; xx [ 46 ] = xx
[ 21 ] + xx [ 110 ] ; xx [ 47 ] = xx [ 22 ] + xx [ 111 ] ; xx [ 48 ] = xx [
23 ] + xx [ 112 ] ; pm_math_Quaternion_xform_ra ( xx + 162 , xx + 46 , xx +
21 ) ; xx [ 6 ] = xx [ 54 ] * xx [ 186 ] + xx [ 66 ] * xx [ 172 ] ; xx [ 8 ]
= xx [ 54 ] * xx [ 188 ] + xx [ 66 ] * xx [ 207 ] ; xx [ 9 ] = xx [ 54 ] * xx
[ 190 ] + xx [ 67 ] ; xx [ 46 ] = xx [ 6 ] ; xx [ 47 ] = xx [ 8 ] ; xx [ 48 ]
= xx [ 9 ] ; pm_math_Vector3_cross_ra ( xx + 46 , xx + 24 , xx + 81 ) ;
pm_math_Quaternion_xform_ra ( xx + 182 , xx + 81 , xx + 88 ) ; xx [ 81 ] = xx
[ 8 ] * xx [ 27 ] ; xx [ 82 ] = xx [ 9 ] * xx [ 29 ] - xx [ 6 ] * xx [ 27 ] ;
xx [ 83 ] = - ( xx [ 8 ] * xx [ 29 ] ) ; pm_math_Quaternion_xform_ra ( xx +
200 , xx + 81 , xx + 98 ) ; xx [ 6 ] = xx [ 178 ] * xx [ 98 ] ; xx [ 8 ] = xx
[ 178 ] * xx [ 99 ] ; xx [ 9 ] = xx [ 98 ] - ( xx [ 178 ] * xx [ 6 ] - xx [
144 ] * xx [ 8 ] ) * xx [ 14 ] ; xx [ 81 ] = xx [ 72 ] ; xx [ 82 ] = xx [ 78
] ; xx [ 83 ] = xx [ 79 ] ; pm_math_Quaternion_xform_ra ( xx + 74 , xx + 81 ,
xx + 110 ) ; xx [ 81 ] = xx [ 102 ] + xx [ 110 ] ; xx [ 82 ] = xx [ 103 ] +
xx [ 111 ] ; xx [ 83 ] = xx [ 104 ] + xx [ 112 ] ; pm_math_Vector3_cross_ra (
xx + 81 , xx + 18 , xx + 101 ) ; pm_math_Quaternion_xform_ra ( xx + 232 , xx
+ 101 , xx + 81 ) ; pm_math_Vector3_cross_ra ( xx + 110 , xx + 36 , xx + 101
) ; pm_math_Quaternion_xform_ra ( xx + 242 , xx + 101 , xx + 110 ) ; xx [ 101
] = xx [ 110 ] + xx [ 122 ] ; xx [ 102 ] = xx [ 111 ] + xx [ 123 ] ; xx [ 103
] = xx [ 112 ] + xx [ 124 ] ; pm_math_Quaternion_xform_ra ( xx + 246 , xx +
101 , xx + 110 ) ; xx [ 11 ] = xx [ 99 ] - xx [ 14 ] * ( xx [ 144 ] * xx [ 6
] + xx [ 178 ] * xx [ 8 ] ) ; pm_math_Vector3_cross_ra ( xx + 46 , xx + 126 ,
xx + 101 ) ; pm_math_Quaternion_xform_ra ( xx + 182 , xx + 101 , xx + 46 ) ;
xx [ 101 ] = xx [ 80 ] ; xx [ 102 ] = xx [ 85 ] ; xx [ 103 ] = xx [ 86 ] ;
pm_math_Quaternion_xform_ra ( xx + 74 , xx + 101 , xx + 78 ) ; xx [ 84 ] = xx
[ 129 ] + xx [ 78 ] ; xx [ 85 ] = xx [ 130 ] + xx [ 79 ] ; xx [ 86 ] = xx [
131 ] + xx [ 80 ] ; pm_math_Vector3_cross_ra ( xx + 84 , xx + 18 , xx + 101 )
; pm_math_Quaternion_xform_ra ( xx + 209 , xx + 101 , xx + 84 ) ;
pm_math_Vector3_cross_ra ( xx + 78 , xx + 36 , xx + 101 ) ;
pm_math_Quaternion_xform_ra ( xx + 227 , xx + 101 , xx + 78 ) ; xx [ 101 ] =
xx [ 78 ] + xx [ 158 ] ; xx [ 102 ] = xx [ 79 ] + xx [ 159 ] ; xx [ 103 ] =
xx [ 80 ] + xx [ 160 ] ; pm_math_Quaternion_xform_ra ( xx + 277 , xx + 101 ,
xx + 78 ) ; xx [ 6 ] = xx [ 87 ] * xx [ 263 ] + xx [ 91 ] * xx [ 216 ] ; xx [
8 ] = xx [ 87 ] * xx [ 293 ] + xx [ 91 ] * xx [ 308 ] ; xx [ 13 ] = xx [ 87 ]
* xx [ 295 ] + xx [ 92 ] ; xx [ 101 ] = xx [ 6 ] ; xx [ 102 ] = xx [ 8 ] ; xx
[ 103 ] = xx [ 13 ] ; pm_math_Vector3_cross_ra ( xx + 101 , xx + 24 , xx +
116 ) ; pm_math_Quaternion_xform_ra ( xx + 299 , xx + 116 , xx + 24 ) ; xx [
116 ] = xx [ 8 ] * xx [ 27 ] ; xx [ 117 ] = xx [ 13 ] * xx [ 29 ] - xx [ 6 ]
* xx [ 27 ] ; xx [ 118 ] = - ( xx [ 8 ] * xx [ 29 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 312 , xx + 116 , xx + 121 ) ; xx [ 6 ] =
xx [ 223 ] * xx [ 122 ] ; xx [ 8 ] = xx [ 223 ] * xx [ 121 ] ; xx [ 13 ] = xx
[ 121 ] - ( xx [ 145 ] * xx [ 6 ] + xx [ 223 ] * xx [ 8 ] ) * xx [ 14 ] ;
pm_math_Quaternion_xform_ra ( xx + 74 , xx + 94 , xx + 116 ) ; xx [ 94 ] = xx
[ 155 ] + xx [ 116 ] ; xx [ 95 ] = xx [ 156 ] + xx [ 117 ] ; xx [ 96 ] = xx [
157 ] + xx [ 118 ] ; pm_math_Vector3_cross_ra ( xx + 94 , xx + 18 , xx + 129
) ; pm_math_Quaternion_xform_ra ( xx + 345 , xx + 129 , xx + 94 ) ;
pm_math_Vector3_cross_ra ( xx + 116 , xx + 36 , xx + 129 ) ;
pm_math_Quaternion_xform_ra ( xx + 357 , xx + 129 , xx + 116 ) ; xx [ 129 ] =
xx [ 116 ] + xx [ 179 ] ; xx [ 130 ] = xx [ 117 ] + xx [ 180 ] ; xx [ 131 ] =
xx [ 118 ] + xx [ 181 ] ; pm_math_Quaternion_xform_ra ( xx + 353 , xx + 129 ,
xx + 116 ) ; xx [ 27 ] = xx [ 122 ] + xx [ 14 ] * ( xx [ 145 ] * xx [ 8 ] -
xx [ 223 ] * xx [ 6 ] ) ; pm_math_Vector3_cross_ra ( xx + 101 , xx + 126 , xx
+ 129 ) ; pm_math_Quaternion_xform_ra ( xx + 299 , xx + 129 , xx + 101 ) ;
pm_math_Quaternion_xform_ra ( xx + 74 , xx + 113 , xx + 126 ) ; xx [ 74 ] =
xx [ 194 ] + xx [ 126 ] ; xx [ 75 ] = xx [ 195 ] + xx [ 127 ] ; xx [ 76 ] =
xx [ 196 ] + xx [ 128 ] ; pm_math_Vector3_cross_ra ( xx + 74 , xx + 18 , xx +
113 ) ; pm_math_Quaternion_xform_ra ( xx + 59 , xx + 113 , xx + 18 ) ;
pm_math_Vector3_cross_ra ( xx + 126 , xx + 36 , xx + 59 ) ;
pm_math_Quaternion_xform_ra ( xx + 388 , xx + 59 , xx + 36 ) ; xx [ 59 ] = xx
[ 36 ] + xx [ 63 ] ; xx [ 60 ] = xx [ 37 ] + xx [ 64 ] ; xx [ 61 ] = xx [ 38
] + xx [ 65 ] ; pm_math_Quaternion_xform_ra ( xx + 392 , xx + 59 , xx + 36 )
; xx [ 6 ] = xx [ 10 ] * xx [ 437 ] ; xx [ 8 ] = xx [ 6 ] * xx [ 108 ] ; xx [
29 ] = xx [ 10 ] * xx [ 352 ] ; xx [ 33 ] = xx [ 29 ] * xx [ 108 ] ; xx [ 34
] = xx [ 14 ] * ( xx [ 8 ] * xx [ 108 ] + xx [ 107 ] * xx [ 33 ] ) - xx [ 6 ]
+ xx [ 10 ] * xx [ 120 ] ; xx [ 6 ] = xx [ 42 ] * xx [ 10 ] - ( xx [ 29 ] + (
xx [ 107 ] * xx [ 8 ] - xx [ 33 ] * xx [ 108 ] ) * xx [ 14 ] ) ; xx [ 8 ] =
xx [ 306 ] == 0.0 ? 0.0 : ( xx [ 338 ] * ( xx [ 34 ] * xx [ 368 ] - xx [ 6 ]
* xx [ 205 ] + xx [ 57 ] ) - xx [ 4 ] * ( xx [ 6 ] * xx [ 224 ] - xx [ 34 ] *
xx [ 337 ] + xx [ 58 ] ) ) / xx [ 306 ] ; xx [ 4 ] = xx [ 10 ] * xx [ 108 ] ;
xx [ 29 ] = xx [ 14 ] * xx [ 4 ] * xx [ 108 ] - xx [ 10 ] ; xx [ 10 ] = xx [
14 ] * xx [ 107 ] * xx [ 4 ] ; xx [ 4 ] = xx [ 399 ] == 0.0 ? 0.0 : ( xx [
402 ] * ( xx [ 34 ] * xx [ 397 ] - xx [ 6 ] * xx [ 400 ] + xx [ 327 ] * xx [
29 ] + xx [ 10 ] * xx [ 333 ] ) - xx [ 376 ] * ( xx [ 6 ] * xx [ 377 ] - xx [
34 ] * xx [ 340 ] + xx [ 333 ] * xx [ 29 ] - xx [ 10 ] * xx [ 327 ] ) ) / xx
[ 399 ] ; xx [ 6 ] = xx [ 68 ] * xx [ 437 ] ; xx [ 10 ] = xx [ 6 ] * xx [ 398
] ; xx [ 29 ] = xx [ 68 ] * xx [ 453 ] ; xx [ 33 ] = xx [ 29 ] * xx [ 398 ] ;
xx [ 34 ] = xx [ 14 ] * ( xx [ 10 ] * xx [ 398 ] + xx [ 396 ] * xx [ 33 ] ) -
xx [ 6 ] + xx [ 68 ] * xx [ 175 ] ; xx [ 6 ] = xx [ 109 ] * xx [ 68 ] - ( xx
[ 29 ] + ( xx [ 396 ] * xx [ 10 ] - xx [ 33 ] * xx [ 398 ] ) * xx [ 14 ] ) ;
xx [ 10 ] = xx [ 407 ] == 0.0 ? 0.0 : ( xx [ 420 ] * ( xx [ 34 ] * xx [ 418 ]
- xx [ 6 ] * xx [ 404 ] + xx [ 125 ] ) - xx [ 221 ] * ( xx [ 6 ] * xx [ 406 ]
- xx [ 34 ] * xx [ 416 ] + xx [ 173 ] ) ) / xx [ 407 ] ; xx [ 29 ] = xx [ 68
] * xx [ 398 ] ; xx [ 33 ] = xx [ 14 ] * xx [ 29 ] * xx [ 398 ] - xx [ 68 ] ;
xx [ 39 ] = xx [ 14 ] * xx [ 396 ] * xx [ 29 ] ; xx [ 29 ] = xx [ 426 ] ==
0.0 ? 0.0 : ( xx [ 429 ] * ( xx [ 34 ] * xx [ 424 ] - xx [ 6 ] * xx [ 427 ] +
xx [ 411 ] * xx [ 33 ] + xx [ 39 ] * xx [ 412 ] ) - xx [ 419 ] * ( xx [ 6 ] *
xx [ 421 ] - xx [ 34 ] * xx [ 417 ] + xx [ 412 ] * xx [ 33 ] - xx [ 39 ] * xx
[ 411 ] ) ) / xx [ 426 ] ; xx [ 6 ] = xx [ 93 ] * xx [ 437 ] ; xx [ 33 ] = xx
[ 6 ] * xx [ 425 ] ; xx [ 34 ] = xx [ 93 ] * xx [ 453 ] ; xx [ 39 ] = xx [ 34
] * xx [ 425 ] ; xx [ 40 ] = xx [ 14 ] * ( xx [ 33 ] * xx [ 425 ] + xx [ 423
] * xx [ 39 ] ) - xx [ 6 ] + xx [ 93 ] * xx [ 206 ] ; xx [ 6 ] = xx [ 176 ] *
xx [ 93 ] - ( xx [ 34 ] + ( xx [ 423 ] * xx [ 33 ] - xx [ 39 ] * xx [ 425 ] )
* xx [ 14 ] ) ; xx [ 33 ] = xx [ 431 ] == 0.0 ? 0.0 : ( xx [ 442 ] * ( xx [
40 ] * xx [ 452 ] - xx [ 6 ] * xx [ 369 ] + xx [ 177 ] ) - xx [ 405 ] * ( xx
[ 6 ] * xx [ 433 ] - xx [ 40 ] * xx [ 441 ] + xx [ 189 ] ) ) / xx [ 431 ] ;
xx [ 34 ] = xx [ 93 ] * xx [ 425 ] ; xx [ 39 ] = xx [ 14 ] * xx [ 34 ] * xx [
425 ] - xx [ 93 ] ; xx [ 42 ] = xx [ 14 ] * xx [ 423 ] * xx [ 34 ] ; xx [ 34
] = xx [ 461 ] == 0.0 ? 0.0 : ( xx [ 464 ] * ( xx [ 40 ] * xx [ 455 ] - xx [
6 ] * xx [ 462 ] + xx [ 439 ] * xx [ 39 ] + xx [ 42 ] * xx [ 440 ] ) - xx [
450 ] * ( xx [ 6 ] * xx [ 454 ] - xx [ 40 ] * xx [ 436 ] + xx [ 440 ] * xx [
39 ] - xx [ 42 ] * xx [ 439 ] ) ) / xx [ 461 ] ; xx [ 124 ] = fabs ( xx [ 147
] + xx [ 150 ] - ( xx [ 43 ] + xx [ 1 ] + xx [ 50 ] ) ) ; xx [ 125 ] = fabs (
xx [ 148 ] + xx [ 151 ] - ( xx [ 44 ] + xx [ 12 ] + xx [ 51 ] ) ) ; xx [ 126
] = fabs ( xx [ 149 ] + xx [ 152 ] - ( xx [ 45 ] + xx [ 15 ] + xx [ 52 ] ) )
; xx [ 127 ] = fabs ( xx [ 69 ] + xx [ 150 ] - ( xx [ 30 ] + xx [ 16 ] + xx [
21 ] ) ) ; xx [ 128 ] = fabs ( xx [ 70 ] + xx [ 151 ] - ( xx [ 31 ] + xx [ 17
] + xx [ 22 ] ) ) ; xx [ 129 ] = fabs ( xx [ 71 ] + xx [ 152 ] - ( xx [ 32 ]
+ xx [ 28 ] + xx [ 23 ] ) ) ; xx [ 130 ] = fabs ( xx [ 88 ] + xx [ 9 ] - ( xx
[ 81 ] + xx [ 35 ] + xx [ 110 ] ) ) ; xx [ 131 ] = fabs ( xx [ 89 ] + xx [ 11
] - ( xx [ 82 ] + xx [ 56 ] + xx [ 111 ] ) ) ; xx [ 132 ] = fabs ( xx [ 90 ]
+ xx [ 100 ] - ( xx [ 83 ] + xx [ 41 ] + xx [ 112 ] ) ) ; xx [ 133 ] = fabs (
xx [ 46 ] + xx [ 9 ] - ( xx [ 84 ] + xx [ 49 ] + xx [ 78 ] ) ) ; xx [ 134 ] =
fabs ( xx [ 47 ] + xx [ 11 ] - ( xx [ 85 ] + xx [ 73 ] + xx [ 79 ] ) ) ; xx [
135 ] = fabs ( xx [ 48 ] + xx [ 100 ] - ( xx [ 86 ] + xx [ 97 ] + xx [ 80 ] )
) ; xx [ 136 ] = fabs ( xx [ 24 ] + xx [ 13 ] - ( xx [ 94 ] + xx [ 105 ] + xx
[ 116 ] ) ) ; xx [ 137 ] = fabs ( xx [ 25 ] + xx [ 27 ] - ( xx [ 95 ] + xx [
146 ] + xx [ 117 ] ) ) ; xx [ 138 ] = fabs ( xx [ 26 ] + xx [ 123 ] - ( xx [
96 ] + xx [ 106 ] + xx [ 118 ] ) ) ; xx [ 139 ] = fabs ( xx [ 101 ] + xx [ 13
] - ( xx [ 18 ] + xx [ 55 ] + xx [ 36 ] ) ) ; xx [ 140 ] = fabs ( xx [ 102 ]
+ xx [ 27 ] - ( xx [ 19 ] + xx [ 3 ] + xx [ 37 ] ) ) ; xx [ 141 ] = fabs ( xx
[ 103 ] + xx [ 123 ] - ( xx [ 20 ] + xx [ 7 ] + xx [ 38 ] ) ) ; xx [ 142 ] =
fabs ( xx [ 217 ] * xx [ 8 ] + xx [ 4 ] ) ; xx [ 143 ] = fabs ( xx [ 217 ] *
xx [ 10 ] + xx [ 29 ] ) ; xx [ 144 ] = fabs ( xx [ 217 ] * xx [ 33 ] + xx [
34 ] ) ; ii [ 0 ] = 124 ; { int ll ; for ( ll = 125 ; ll < 145 ; ++ ll ) if (
xx [ ll ] > xx [ ii [ 0 ] ] ) ii [ 0 ] = ll ; } ii [ 0 ] -= 124 ; xx [ 1 ] =
xx [ 124 + ( ii [ 0 ] ) ] ; xx [ 3 ] = xx [ 1 ] - xx [ 2 ] ; if ( xx [ 3 ] <
0.0 ) ii [ 1 ] = - 1 ; else if ( xx [ 3 ] > 0.0 ) ii [ 1 ] = + 1 ; else ii [
1 ] = 0 ; ii [ 2 ] = ii [ 1 ] ; if ( 0 > ii [ 2 ] ) ii [ 2 ] = 0 ; if ( ii [
2 ] != 0 ) { switch ( ii [ 0 ] ) { case 0 : case 1 : case 2 : { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'triped/TriPed/Leg_0/SubChain 1/Coupling_01_2_Spherical_Joint' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 3 : case 4 : case 5 : { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'triped/TriPed/Leg_0/SubChain 2/Coupling02_2_Spherical_Joint' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 6 : case 7 : case 8 : { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'triped/TriPed/Leg_1/SubChain 1/Coupling_01_2_Spherical_Joint' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 9 : case 10 : case 11 : { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'triped/TriPed/Leg_1/SubChain 2/Coupling02_2_Spherical_Joint' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 12 : case 13 : case 14 : { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'triped/TriPed/Leg_2/SubChain 1/Coupling_01_2_Spherical_Joint' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 15 : case 16 : case 17 : { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'triped/TriPed/Leg_2/SubChain 2/Coupling02_2_Spherical_Joint' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 18 : { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'triped/TriPed/Leg_0/OpenSubChain/leg_extend_to_LL_GearConstraint' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 19 : { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'triped/TriPed/Leg_1/OpenSubChain/leg_extend_to_LL_GearConstraint' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } case 20 : { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:ConstraintViolation" ,
 "'triped/TriPed/Leg_2/OpenSubChain/leg_extend_to_LL_GearConstraint' kinematic constraints cannot be maintained. Check solver type and consistency tolerance in the Simscape Solver Configuration block. Check Simulink solver type and tolerances in Model Configuration Parameters. A kinematic singularity might be the source of this problem."
, neDiagMgr ) ; } } } xx [ 1 ] = xx [ 0 ] * xx [ 616 ] ; xx [ 2 ] = cos ( xx
[ 1 ] ) ; xx [ 3 ] = sin ( xx [ 1 ] ) ; xx [ 1 ] = xx [ 352 ] * xx [ 3 ] ; xx
[ 4 ] = xx [ 437 ] * xx [ 3 ] ; xx [ 6 ] = xx [ 14 ] * ( xx [ 2 ] * xx [ 1 ]
+ xx [ 4 ] * xx [ 3 ] ) ; xx [ 7 ] = xx [ 0 ] * xx [ 618 ] ; xx [ 8 ] = xx [
446 ] * cos ( xx [ 7 ] ) ; xx [ 9 ] = xx [ 445 ] * xx [ 8 ] ; xx [ 10 ] = xx
[ 446 ] * sin ( xx [ 7 ] ) ; xx [ 7 ] = xx [ 445 ] * xx [ 10 ] ; xx [ 11 ] =
xx [ 9 ] * xx [ 8 ] ; xx [ 12 ] = xx [ 7 ] * xx [ 10 ] ; xx [ 13 ] = ( xx [ 2
] * xx [ 4 ] - xx [ 1 ] * xx [ 3 ] ) * xx [ 14 ] ; xx [ 15 ] = xx [ 6 ] - xx
[ 6 ] + xx [ 444 ] - ( xx [ 14 ] * ( xx [ 9 ] * xx [ 10 ] - xx [ 7 ] * xx [ 8
] ) - xx [ 451 ] ) ; xx [ 16 ] = - ( xx [ 443 ] - ( xx [ 11 ] + xx [ 12 ] ) *
xx [ 14 ] ) ; xx [ 17 ] = xx [ 13 ] - xx [ 13 ] - xx [ 456 ] - ( ( xx [ 11 ]
+ xx [ 12 ] ) * xx [ 14 ] - xx [ 457 ] ) ; xx [ 1 ] = xx [ 446 ] * xx [ 2 ] ;
xx [ 4 ] = xx [ 446 ] * xx [ 3 ] ; xx [ 6 ] = xx [ 1 ] * xx [ 4 ] ; xx [ 7 ]
= xx [ 4 ] * xx [ 4 ] ; xx [ 9 ] = xx [ 1 ] * xx [ 1 ] ; xx [ 11 ] = - ( ( xx
[ 6 ] + xx [ 6 ] ) * xx [ 14 ] ) ; xx [ 12 ] = xx [ 5 ] - ( xx [ 7 ] + xx [ 9
] ) * xx [ 14 ] ; xx [ 13 ] = xx [ 14 ] * ( xx [ 7 ] - xx [ 9 ] ) ; xx [ 18 ]
= xx [ 5 ] - ( xx [ 7 ] + xx [ 7 ] ) * xx [ 14 ] ; xx [ 19 ] = xx [ 14 ] * (
xx [ 6 ] - xx [ 6 ] ) ; xx [ 20 ] = - ( ( xx [ 6 ] + xx [ 6 ] ) * xx [ 14 ] )
; xx [ 6 ] = 7.372473615415413e-3 ; xx [ 7 ] = - xx [ 4 ] ; xx [ 21 ] = - xx
[ 1 ] ; xx [ 22 ] = xx [ 1 ] ; xx [ 23 ] = xx [ 7 ] ; xx [ 24 ] = xx [ 7 ] ;
xx [ 1 ] = - xx [ 10 ] ; xx [ 25 ] = - xx [ 8 ] ; xx [ 26 ] = xx [ 8 ] ; xx [
27 ] = xx [ 1 ] ; xx [ 28 ] = xx [ 1 ] ; xx [ 1 ] = xx [ 0 ] * xx [ 611 ] ;
xx [ 4 ] = cos ( xx [ 1 ] ) ; xx [ 7 ] = xx [ 0 ] * xx [ 610 ] ; xx [ 8 ] =
sin ( xx [ 7 ] ) ; xx [ 9 ] = xx [ 4 ] * xx [ 8 ] ; xx [ 10 ] = xx [ 0 ] * xx
[ 612 ] ; xx [ 29 ] = sin ( xx [ 10 ] ) ; xx [ 30 ] = cos ( xx [ 10 ] ) ; xx
[ 10 ] = cos ( xx [ 7 ] ) ; xx [ 7 ] = sin ( xx [ 1 ] ) ; xx [ 1 ] = xx [ 10
] * xx [ 7 ] ; xx [ 31 ] = xx [ 9 ] * xx [ 29 ] - xx [ 30 ] * xx [ 1 ] ; xx [
32 ] = xx [ 10 ] * xx [ 4 ] ; xx [ 4 ] = xx [ 8 ] * xx [ 7 ] ; xx [ 7 ] = xx
[ 32 ] * xx [ 29 ] + xx [ 30 ] * xx [ 4 ] ; xx [ 8 ] = xx [ 613 ] * ( xx [ 5
] - ( xx [ 31 ] * xx [ 31 ] + xx [ 7 ] * xx [ 7 ] ) * xx [ 14 ] ) + xx [ 14 ]
* xx [ 614 ] * xx [ 30 ] * xx [ 29 ] ; xx [ 10 ] = xx [ 4 ] * xx [ 29 ] - xx
[ 30 ] * xx [ 32 ] ; xx [ 4 ] = xx [ 30 ] * xx [ 9 ] + xx [ 1 ] * xx [ 29 ] ;
xx [ 1 ] = xx [ 14 ] * xx [ 613 ] * ( xx [ 7 ] * xx [ 10 ] - xx [ 4 ] * xx [
31 ] ) + xx [ 614 ] * ( xx [ 5 ] - xx [ 14 ] * xx [ 29 ] * xx [ 29 ] ) ; xx [
9 ] = xx [ 14 ] * ( xx [ 31 ] * xx [ 10 ] + xx [ 4 ] * xx [ 7 ] ) * xx [ 613
] + xx [ 615 ] ; xx [ 29 ] = xx [ 8 ] ; xx [ 30 ] = xx [ 1 ] ; xx [ 31 ] = xx
[ 9 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 25 , xx + 29 , xx + 32 ) ;
xx [ 29 ] = xx [ 32 ] ; xx [ 30 ] = xx [ 33 ] ; xx [ 31 ] = xx [ 34 ] + xx [
619 ] ; pm_math_Quaternion_xform_ra ( xx + 25 , xx + 29 , xx + 32 ) ; xx [ 4
] = xx [ 9 ] * xx [ 3 ] ; xx [ 7 ] = xx [ 8 ] * xx [ 3 ] ; xx [ 10 ] = xx [ 8
] - ( xx [ 2 ] * xx [ 4 ] + xx [ 7 ] * xx [ 3 ] ) * xx [ 14 ] ; xx [ 8 ] = xx
[ 9 ] + xx [ 14 ] * ( xx [ 2 ] * xx [ 7 ] - xx [ 4 ] * xx [ 3 ] ) ; xx [ 4 ]
= xx [ 8 ] * xx [ 3 ] ; xx [ 7 ] = xx [ 3 ] * xx [ 10 ] ; xx [ 25 ] = xx [ 32
] - ( xx [ 10 ] + xx [ 14 ] * ( xx [ 2 ] * xx [ 4 ] - xx [ 7 ] * xx [ 3 ] ) )
; xx [ 26 ] = xx [ 33 ] - ( xx [ 1 ] + xx [ 617 ] ) ; xx [ 27 ] = xx [ 34 ] -
( xx [ 8 ] - ( xx [ 2 ] * xx [ 7 ] + xx [ 4 ] * xx [ 3 ] ) * xx [ 14 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 21 , xx + 25 , xx + 1 ) ; xx [ 1 ]
= xx [ 0 ] * xx [ 644 ] ; xx [ 2 ] = cos ( xx [ 1 ] ) ; xx [ 4 ] = sin ( xx [
1 ] ) ; xx [ 1 ] = xx [ 453 ] * xx [ 4 ] ; xx [ 7 ] = xx [ 437 ] * xx [ 4 ] ;
xx [ 8 ] = xx [ 14 ] * ( xx [ 2 ] * xx [ 1 ] + xx [ 7 ] * xx [ 4 ] ) ; xx [ 9
] = xx [ 0 ] * xx [ 646 ] ; xx [ 10 ] = xx [ 446 ] * cos ( xx [ 9 ] ) ; xx [
21 ] = xx [ 445 ] * xx [ 10 ] ; xx [ 22 ] = xx [ 446 ] * sin ( xx [ 9 ] ) ;
xx [ 9 ] = xx [ 445 ] * xx [ 22 ] ; xx [ 23 ] = xx [ 21 ] * xx [ 10 ] ; xx [
24 ] = xx [ 9 ] * xx [ 22 ] ; xx [ 25 ] = ( xx [ 2 ] * xx [ 7 ] - xx [ 1 ] *
xx [ 4 ] ) * xx [ 14 ] ; xx [ 26 ] = xx [ 8 ] - xx [ 8 ] + xx [ 444 ] - ( xx
[ 14 ] * ( xx [ 21 ] * xx [ 22 ] - xx [ 9 ] * xx [ 10 ] ) - xx [ 451 ] ) ; xx
[ 27 ] = - ( xx [ 443 ] - ( xx [ 23 ] + xx [ 24 ] ) * xx [ 14 ] ) ; xx [ 28 ]
= xx [ 25 ] - xx [ 25 ] - xx [ 456 ] - ( ( xx [ 23 ] + xx [ 24 ] ) * xx [ 14
] - xx [ 457 ] ) ; xx [ 1 ] = xx [ 446 ] * xx [ 2 ] ; xx [ 7 ] = xx [ 446 ] *
xx [ 4 ] ; xx [ 8 ] = xx [ 1 ] * xx [ 7 ] ; xx [ 9 ] = xx [ 7 ] * xx [ 7 ] ;
xx [ 21 ] = xx [ 1 ] * xx [ 1 ] ; xx [ 23 ] = - ( ( xx [ 8 ] + xx [ 8 ] ) *
xx [ 14 ] ) ; xx [ 24 ] = xx [ 5 ] - ( xx [ 9 ] + xx [ 21 ] ) * xx [ 14 ] ;
xx [ 25 ] = xx [ 14 ] * ( xx [ 9 ] - xx [ 21 ] ) ; xx [ 29 ] = xx [ 5 ] - (
xx [ 9 ] + xx [ 9 ] ) * xx [ 14 ] ; xx [ 30 ] = xx [ 14 ] * ( xx [ 8 ] - xx [
8 ] ) ; xx [ 31 ] = - ( ( xx [ 8 ] + xx [ 8 ] ) * xx [ 14 ] ) ; xx [ 8 ] = -
xx [ 7 ] ; xx [ 32 ] = - xx [ 1 ] ; xx [ 33 ] = xx [ 1 ] ; xx [ 34 ] = xx [ 8
] ; xx [ 35 ] = xx [ 8 ] ; xx [ 1 ] = - xx [ 22 ] ; xx [ 36 ] = - xx [ 10 ] ;
xx [ 37 ] = xx [ 10 ] ; xx [ 38 ] = xx [ 1 ] ; xx [ 39 ] = xx [ 1 ] ; xx [ 1
] = xx [ 0 ] * xx [ 639 ] ; xx [ 7 ] = cos ( xx [ 1 ] ) ; xx [ 8 ] = xx [ 0 ]
* xx [ 638 ] ; xx [ 9 ] = sin ( xx [ 8 ] ) ; xx [ 10 ] = xx [ 7 ] * xx [ 9 ]
; xx [ 21 ] = xx [ 0 ] * xx [ 640 ] ; xx [ 22 ] = sin ( xx [ 21 ] ) ; xx [ 40
] = cos ( xx [ 21 ] ) ; xx [ 21 ] = cos ( xx [ 8 ] ) ; xx [ 8 ] = sin ( xx [
1 ] ) ; xx [ 1 ] = xx [ 21 ] * xx [ 8 ] ; xx [ 41 ] = xx [ 10 ] * xx [ 22 ] -
xx [ 40 ] * xx [ 1 ] ; xx [ 42 ] = xx [ 21 ] * xx [ 7 ] ; xx [ 7 ] = xx [ 9 ]
* xx [ 8 ] ; xx [ 8 ] = xx [ 42 ] * xx [ 22 ] + xx [ 40 ] * xx [ 7 ] ; xx [ 9
] = xx [ 641 ] * ( xx [ 5 ] - ( xx [ 41 ] * xx [ 41 ] + xx [ 8 ] * xx [ 8 ] )
* xx [ 14 ] ) + xx [ 14 ] * xx [ 642 ] * xx [ 40 ] * xx [ 22 ] ; xx [ 21 ] =
xx [ 7 ] * xx [ 22 ] - xx [ 40 ] * xx [ 42 ] ; xx [ 7 ] = xx [ 40 ] * xx [ 10
] + xx [ 1 ] * xx [ 22 ] ; xx [ 1 ] = xx [ 14 ] * xx [ 641 ] * ( xx [ 8 ] *
xx [ 21 ] - xx [ 7 ] * xx [ 41 ] ) + xx [ 642 ] * ( xx [ 5 ] - xx [ 14 ] * xx
[ 22 ] * xx [ 22 ] ) ; xx [ 10 ] = xx [ 14 ] * ( xx [ 41 ] * xx [ 21 ] + xx [
7 ] * xx [ 8 ] ) * xx [ 641 ] + xx [ 643 ] ; xx [ 40 ] = xx [ 9 ] ; xx [ 41 ]
= xx [ 1 ] ; xx [ 42 ] = xx [ 10 ] ; pm_math_Quaternion_inverseXform_ra ( xx
+ 36 , xx + 40 , xx + 43 ) ; xx [ 40 ] = xx [ 43 ] ; xx [ 41 ] = xx [ 44 ] ;
xx [ 42 ] = xx [ 45 ] + xx [ 647 ] ; pm_math_Quaternion_xform_ra ( xx + 36 ,
xx + 40 , xx + 43 ) ; xx [ 7 ] = xx [ 10 ] * xx [ 4 ] ; xx [ 8 ] = xx [ 9 ] *
xx [ 4 ] ; xx [ 21 ] = xx [ 9 ] - ( xx [ 2 ] * xx [ 7 ] + xx [ 8 ] * xx [ 4 ]
) * xx [ 14 ] ; xx [ 9 ] = xx [ 10 ] + xx [ 14 ] * ( xx [ 2 ] * xx [ 8 ] - xx
[ 7 ] * xx [ 4 ] ) ; xx [ 7 ] = xx [ 9 ] * xx [ 4 ] ; xx [ 8 ] = xx [ 4 ] *
xx [ 21 ] ; xx [ 36 ] = xx [ 43 ] - ( xx [ 21 ] + xx [ 14 ] * ( xx [ 2 ] * xx
[ 7 ] - xx [ 8 ] * xx [ 4 ] ) ) ; xx [ 37 ] = xx [ 44 ] - ( xx [ 1 ] + xx [
645 ] ) ; xx [ 38 ] = xx [ 45 ] - ( xx [ 9 ] - ( xx [ 2 ] * xx [ 8 ] + xx [ 7
] * xx [ 4 ] ) * xx [ 14 ] ) ; pm_math_Quaternion_inverseXform_ra ( xx + 32 ,
xx + 36 , xx + 7 ) ; xx [ 1 ] = xx [ 0 ] * xx [ 672 ] ; xx [ 2 ] = cos ( xx [
1 ] ) ; xx [ 4 ] = sin ( xx [ 1 ] ) ; xx [ 1 ] = xx [ 453 ] * xx [ 4 ] ; xx [
7 ] = xx [ 437 ] * xx [ 4 ] ; xx [ 8 ] = xx [ 14 ] * ( xx [ 2 ] * xx [ 1 ] +
xx [ 7 ] * xx [ 4 ] ) ; xx [ 10 ] = xx [ 0 ] * xx [ 674 ] ; xx [ 21 ] = xx [
446 ] * cos ( xx [ 10 ] ) ; xx [ 22 ] = xx [ 445 ] * xx [ 21 ] ; xx [ 32 ] =
xx [ 446 ] * sin ( xx [ 10 ] ) ; xx [ 10 ] = xx [ 445 ] * xx [ 32 ] ; xx [ 33
] = xx [ 22 ] * xx [ 21 ] ; xx [ 34 ] = xx [ 10 ] * xx [ 32 ] ; xx [ 35 ] = (
xx [ 2 ] * xx [ 7 ] - xx [ 1 ] * xx [ 4 ] ) * xx [ 14 ] ; xx [ 36 ] = xx [ 8
] - xx [ 8 ] + xx [ 444 ] - ( xx [ 14 ] * ( xx [ 22 ] * xx [ 32 ] - xx [ 10 ]
* xx [ 21 ] ) - xx [ 451 ] ) ; xx [ 37 ] = - ( xx [ 443 ] - ( xx [ 33 ] + xx
[ 34 ] ) * xx [ 14 ] ) ; xx [ 38 ] = xx [ 35 ] - xx [ 35 ] - xx [ 456 ] - ( (
xx [ 33 ] + xx [ 34 ] ) * xx [ 14 ] - xx [ 457 ] ) ; xx [ 1 ] = xx [ 446 ] *
xx [ 2 ] ; xx [ 7 ] = xx [ 446 ] * xx [ 4 ] ; xx [ 8 ] = xx [ 1 ] * xx [ 7 ]
; xx [ 10 ] = xx [ 7 ] * xx [ 7 ] ; xx [ 22 ] = xx [ 1 ] * xx [ 1 ] ; xx [ 33
] = - ( ( xx [ 8 ] + xx [ 8 ] ) * xx [ 14 ] ) ; xx [ 34 ] = xx [ 5 ] - ( xx [
10 ] + xx [ 22 ] ) * xx [ 14 ] ; xx [ 35 ] = xx [ 14 ] * ( xx [ 10 ] - xx [
22 ] ) ; xx [ 39 ] = xx [ 5 ] - ( xx [ 10 ] + xx [ 10 ] ) * xx [ 14 ] ; xx [
40 ] = xx [ 14 ] * ( xx [ 8 ] - xx [ 8 ] ) ; xx [ 41 ] = - ( ( xx [ 8 ] + xx
[ 8 ] ) * xx [ 14 ] ) ; xx [ 8 ] = - xx [ 7 ] ; xx [ 42 ] = - xx [ 1 ] ; xx [
43 ] = xx [ 1 ] ; xx [ 44 ] = xx [ 8 ] ; xx [ 45 ] = xx [ 8 ] ; xx [ 1 ] = -
xx [ 32 ] ; xx [ 46 ] = - xx [ 21 ] ; xx [ 47 ] = xx [ 21 ] ; xx [ 48 ] = xx
[ 1 ] ; xx [ 49 ] = xx [ 1 ] ; xx [ 1 ] = xx [ 0 ] * xx [ 667 ] ; xx [ 7 ] =
cos ( xx [ 1 ] ) ; xx [ 8 ] = xx [ 0 ] * xx [ 666 ] ; xx [ 10 ] = sin ( xx [
8 ] ) ; xx [ 21 ] = xx [ 7 ] * xx [ 10 ] ; xx [ 22 ] = xx [ 0 ] * xx [ 668 ]
; xx [ 0 ] = sin ( xx [ 22 ] ) ; xx [ 32 ] = cos ( xx [ 22 ] ) ; xx [ 22 ] =
cos ( xx [ 8 ] ) ; xx [ 8 ] = sin ( xx [ 1 ] ) ; xx [ 1 ] = xx [ 22 ] * xx [
8 ] ; xx [ 50 ] = xx [ 21 ] * xx [ 0 ] - xx [ 32 ] * xx [ 1 ] ; xx [ 51 ] =
xx [ 22 ] * xx [ 7 ] ; xx [ 7 ] = xx [ 10 ] * xx [ 8 ] ; xx [ 8 ] = xx [ 51 ]
* xx [ 0 ] + xx [ 32 ] * xx [ 7 ] ; xx [ 10 ] = xx [ 669 ] * ( xx [ 5 ] - (
xx [ 50 ] * xx [ 50 ] + xx [ 8 ] * xx [ 8 ] ) * xx [ 14 ] ) + xx [ 14 ] * xx
[ 670 ] * xx [ 32 ] * xx [ 0 ] ; xx [ 22 ] = xx [ 7 ] * xx [ 0 ] - xx [ 32 ]
* xx [ 51 ] ; xx [ 7 ] = xx [ 32 ] * xx [ 21 ] + xx [ 1 ] * xx [ 0 ] ; xx [ 1
] = xx [ 14 ] * xx [ 669 ] * ( xx [ 8 ] * xx [ 22 ] - xx [ 7 ] * xx [ 50 ] )
+ xx [ 670 ] * ( xx [ 5 ] - xx [ 14 ] * xx [ 0 ] * xx [ 0 ] ) ; xx [ 0 ] = xx
[ 14 ] * ( xx [ 50 ] * xx [ 22 ] + xx [ 7 ] * xx [ 8 ] ) * xx [ 669 ] + xx [
671 ] ; xx [ 50 ] = xx [ 10 ] ; xx [ 51 ] = xx [ 1 ] ; xx [ 52 ] = xx [ 0 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 46 , xx + 50 , xx + 53 ) ; xx [ 50
] = xx [ 53 ] ; xx [ 51 ] = xx [ 54 ] ; xx [ 52 ] = xx [ 55 ] + xx [ 675 ] ;
pm_math_Quaternion_xform_ra ( xx + 46 , xx + 50 , xx + 53 ) ; xx [ 5 ] = xx [
0 ] * xx [ 4 ] ; xx [ 7 ] = xx [ 10 ] * xx [ 4 ] ; xx [ 8 ] = xx [ 10 ] - (
xx [ 2 ] * xx [ 5 ] + xx [ 7 ] * xx [ 4 ] ) * xx [ 14 ] ; xx [ 10 ] = xx [ 0
] + xx [ 14 ] * ( xx [ 2 ] * xx [ 7 ] - xx [ 5 ] * xx [ 4 ] ) ; xx [ 0 ] = xx
[ 10 ] * xx [ 4 ] ; xx [ 5 ] = xx [ 4 ] * xx [ 8 ] ; xx [ 46 ] = xx [ 53 ] -
( xx [ 8 ] + xx [ 14 ] * ( xx [ 2 ] * xx [ 0 ] - xx [ 5 ] * xx [ 4 ] ) ) ; xx
[ 47 ] = xx [ 54 ] - ( xx [ 1 ] + xx [ 673 ] ) ; xx [ 48 ] = xx [ 55 ] - ( xx
[ 10 ] - ( xx [ 2 ] * xx [ 5 ] + xx [ 0 ] * xx [ 4 ] ) * xx [ 14 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 42 , xx + 46 , xx + 0 ) ; state [ 0
] = xx [ 610 ] ; state [ 1 ] = xx [ 611 ] ; state [ 2 ] = xx [ 612 ] ; state
[ 3 ] = xx [ 613 ] ; state [ 4 ] = xx [ 614 ] ; state [ 5 ] = xx [ 615 ] ;
state [ 6 ] = xx [ 616 ] ; state [ 7 ] = xx [ 617 ] ; state [ 8 ] = xx [ 618
] ; state [ 9 ] = xx [ 619 ] ; state [ 10 ] = xx [ 620 ] ; state [ 11 ] = xx
[ 621 ] ; state [ 12 ] = xx [ 622 ] ; state [ 13 ] = xx [ 623 ] ; state [ 14
] = xx [ 624 ] ; state [ 15 ] = xx [ 625 ] ; state [ 16 ] = xx [ 626 ] ;
state [ 17 ] = xx [ 627 ] ; state [ 18 ] = xx [ 628 ] ; state [ 19 ] = xx [
629 ] ; state [ 20 ] = xx [ 630 ] ; state [ 21 ] = xx [ 631 ] ; state [ 22 ]
= xx [ 632 ] ; state [ 23 ] = xx [ 633 ] ; state [ 24 ] = xx [ 634 ] ; state
[ 25 ] = xx [ 635 ] ; state [ 26 ] = xx [ 636 ] ; state [ 27 ] = xx [ 637 ] ;
state [ 28 ] = xx [ 638 ] ; state [ 29 ] = xx [ 639 ] ; state [ 30 ] = xx [
640 ] ; state [ 31 ] = xx [ 641 ] ; state [ 32 ] = xx [ 642 ] ; state [ 33 ]
= xx [ 643 ] ; state [ 34 ] = xx [ 644 ] ; state [ 35 ] = xx [ 645 ] ; state
[ 36 ] = xx [ 646 ] ; state [ 37 ] = xx [ 647 ] ; state [ 38 ] = xx [ 648 ] ;
state [ 39 ] = xx [ 649 ] ; state [ 40 ] = xx [ 650 ] ; state [ 41 ] = xx [
651 ] ; state [ 42 ] = xx [ 652 ] ; state [ 43 ] = xx [ 653 ] ; state [ 44 ]
= xx [ 654 ] ; state [ 45 ] = xx [ 655 ] ; state [ 46 ] = xx [ 656 ] ; state
[ 47 ] = xx [ 657 ] ; state [ 48 ] = xx [ 658 ] ; state [ 49 ] = xx [ 659 ] ;
state [ 50 ] = xx [ 660 ] ; state [ 51 ] = xx [ 661 ] ; state [ 52 ] = xx [
662 ] ; state [ 53 ] = xx [ 663 ] ; state [ 54 ] = xx [ 664 ] ; state [ 55 ]
= xx [ 665 ] ; state [ 56 ] = xx [ 666 ] ; state [ 57 ] = xx [ 667 ] ; state
[ 58 ] = xx [ 668 ] ; state [ 59 ] = xx [ 669 ] ; state [ 60 ] = xx [ 670 ] ;
state [ 61 ] = xx [ 671 ] ; state [ 62 ] = xx [ 672 ] ; state [ 63 ] = xx [
673 ] ; state [ 64 ] = xx [ 674 ] ; state [ 65 ] = xx [ 675 ] ; state [ 66 ]
= xx [ 676 ] ; state [ 67 ] = xx [ 677 ] ; state [ 68 ] = xx [ 678 ] ; state
[ 69 ] = xx [ 679 ] ; state [ 70 ] = xx [ 680 ] ; state [ 71 ] = xx [ 681 ] ;
state [ 72 ] = xx [ 682 ] ; state [ 73 ] = xx [ 683 ] ; state [ 74 ] = xx [
684 ] ; state [ 75 ] = xx [ 685 ] ; state [ 76 ] = xx [ 686 ] ; state [ 77 ]
= xx [ 687 ] ; state [ 78 ] = xx [ 688 ] ; state [ 79 ] = xx [ 689 ] ; state
[ 80 ] = xx [ 690 ] ; state [ 81 ] = xx [ 691 ] ; state [ 82 ] = xx [ 692 ] ;
state [ 83 ] = xx [ 693 ] ; state [ 84 ] = xx [ 694 ] +
sm_core_canonicalAngle ( atan2 ( pm_math_Vector3_dot_ra ( xx + 15 , xx + 11 )
, pm_math_Vector3_dot_ra ( xx + 15 , xx + 18 ) ) - xx [ 694 ] ) ; state [ 85
] = xx [ 6 ] * xx [ 3 ] ; state [ 86 ] = xx [ 696 ] + sm_core_canonicalAngle
( atan2 ( pm_math_Vector3_dot_ra ( xx + 26 , xx + 23 ) ,
pm_math_Vector3_dot_ra ( xx + 26 , xx + 29 ) ) - xx [ 696 ] ) ; state [ 87 ]
= xx [ 6 ] * xx [ 9 ] ; state [ 88 ] = xx [ 698 ] + sm_core_canonicalAngle (
atan2 ( pm_math_Vector3_dot_ra ( xx + 36 , xx + 33 ) , pm_math_Vector3_dot_ra
( xx + 36 , xx + 39 ) ) - xx [ 698 ] ) ; state [ 89 ] = xx [ 6 ] * xx [ 2 ] ;
state [ 90 ] = xx [ 700 ] ; state [ 91 ] = xx [ 701 ] ; state [ 92 ] = xx [
702 ] ; return NULL ; } void triped_a151ee3d_1_computeConstraintError ( const
void * mech , const RuntimeDerivedValuesBundle * rtdv , const double * state
, const int * modeVector , double * error ) { const double * rtdvd = rtdv ->
mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ; double xx
[ 153 ] ; ( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void )
modeVector ; xx [ 0 ] = 0.5 ; xx [ 1 ] = xx [ 0 ] * state [ 0 ] ; xx [ 2 ] =
sin ( xx [ 1 ] ) ; xx [ 3 ] = xx [ 0 ] * state [ 1 ] ; xx [ 4 ] = sin ( xx [
3 ] ) ; xx [ 5 ] = xx [ 2 ] * xx [ 4 ] ; xx [ 6 ] = xx [ 0 ] * state [ 2 ] ;
xx [ 7 ] = sin ( xx [ 6 ] ) ; xx [ 8 ] = cos ( xx [ 6 ] ) ; xx [ 6 ] = cos (
xx [ 1 ] ) ; xx [ 1 ] = cos ( xx [ 3 ] ) ; xx [ 3 ] = xx [ 6 ] * xx [ 1 ] ;
xx [ 9 ] = xx [ 5 ] * xx [ 7 ] - xx [ 8 ] * xx [ 3 ] ; xx [ 10 ] = xx [ 1 ] *
xx [ 2 ] ; xx [ 1 ] = xx [ 6 ] * xx [ 4 ] ; xx [ 2 ] = xx [ 8 ] * xx [ 10 ] +
xx [ 1 ] * xx [ 7 ] ; xx [ 4 ] = - xx [ 2 ] ; xx [ 6 ] = xx [ 10 ] * xx [ 7 ]
- xx [ 8 ] * xx [ 1 ] ; xx [ 1 ] = xx [ 3 ] * xx [ 7 ] + xx [ 8 ] * xx [ 5 ]
; xx [ 3 ] = - xx [ 1 ] ; xx [ 10 ] = xx [ 9 ] ; xx [ 11 ] = xx [ 4 ] ; xx [
12 ] = xx [ 6 ] ; xx [ 13 ] = xx [ 3 ] ; xx [ 14 ] = - 0.07930000000000005 ;
xx [ 15 ] = 0.02989999999999998 ; xx [ 16 ] = - 0.105 ;
pm_math_Quaternion_xform_ra ( xx + 10 , xx + 14 , xx + 17 ) ; xx [ 20 ] = xx
[ 4 ] ; xx [ 21 ] = xx [ 6 ] ; xx [ 22 ] = xx [ 3 ] ; xx [ 3 ] =
8.499999999999917e-3 ; xx [ 4 ] = xx [ 3 ] * xx [ 6 ] ; xx [ 5 ] =
0.09430000000000001 ; xx [ 7 ] = xx [ 1 ] * xx [ 5 ] - xx [ 2 ] * xx [ 3 ] ;
xx [ 1 ] = xx [ 5 ] * xx [ 6 ] ; xx [ 23 ] = - xx [ 4 ] ; xx [ 24 ] = xx [ 7
] ; xx [ 25 ] = xx [ 1 ] ; pm_math_Vector3_cross_ra ( xx + 20 , xx + 23 , xx
+ 26 ) ; xx [ 2 ] = 2.0 ; xx [ 6 ] = 0.3593 - ( xx [ 26 ] - xx [ 4 ] * xx [ 9
] ) * xx [ 2 ] ; xx [ 20 ] = 0.9813587152233355 ; xx [ 21 ] = -
8.90329107482098e-3 ; xx [ 22 ] = 0.04727447558555155 ; xx [ 23 ] =
0.1860669971310137 ; xx [ 4 ] = xx [ 0 ] * state [ 10 ] ; xx [ 8 ] =
0.0960996545167382 ; xx [ 24 ] = sin ( xx [ 4 ] ) ; xx [ 25 ] =
1.177948454025794e-4 ; xx [ 29 ] = 0.9953717107322962 ; xx [ 30 ] = cos ( xx
[ 4 ] ) ; xx [ 31 ] = - ( xx [ 8 ] * xx [ 24 ] ) ; xx [ 32 ] = xx [ 25 ] * xx
[ 24 ] ; xx [ 33 ] = xx [ 29 ] * xx [ 24 ] ; pm_math_Quaternion_compose_ra (
xx + 20 , xx + 30 , xx + 34 ) ; xx [ 20 ] = 0.9988422572316213 ; xx [ 21 ] =
- 6.00792342022948e-5 ; xx [ 22 ] = - 0.04810551968680427 ; xx [ 23 ] =
2.312115552059532e-5 ; xx [ 30 ] = state [ 12 ] ; xx [ 31 ] = state [ 13 ] ;
xx [ 32 ] = state [ 14 ] ; xx [ 33 ] = state [ 15 ] ; xx [ 38 ] = -
0.9999999999996456 ; xx [ 39 ] = 1.335114243000915e-9 ; xx [ 40 ] =
1.564242624680818e-7 ; xx [ 41 ] = - 8.27384461422298e-7 ;
pm_math_Quaternion_composeInverse_ra ( xx + 30 , xx + 38 , xx + 42 ) ;
pm_math_Quaternion_compose_ra ( xx + 20 , xx + 42 , xx + 30 ) ;
pm_math_Quaternion_compose_ra ( xx + 34 , xx + 30 , xx + 42 ) ; xx [ 46 ] =
0.05448810068449638 ; xx [ 47 ] = 9.016809746371062e-8 ; xx [ 48 ] = -
1.197569081478675e-6 ; pm_math_Quaternion_xform_ra ( xx + 42 , xx + 46 , xx +
49 ) ; xx [ 4 ] = 0.06203617700142335 ; xx [ 42 ] = 0.05551189931534764 ; xx
[ 43 ] = 9.185648409514065e-8 ; xx [ 44 ] = 1.23198241897863e-6 ;
pm_math_Quaternion_xform_ra ( xx + 30 , xx + 42 , xx + 52 ) ; xx [ 24 ] =
6.252064263292171e-7 ; xx [ 30 ] = 4.366561113205437e-3 ; xx [ 31 ] = xx [ 4
] + xx [ 52 ] ; xx [ 32 ] = xx [ 24 ] + xx [ 53 ] ; xx [ 33 ] = xx [ 54 ] -
xx [ 30 ] ; pm_math_Quaternion_xform_ra ( xx + 34 , xx + 31 , xx + 52 ) ; xx
[ 31 ] = - 0.02492486046921943 ; xx [ 32 ] = - 9.061899534334276e-7 ; xx [ 33
] = 0.01185157563810752 ; pm_math_Quaternion_xform_ra ( xx + 34 , xx + 31 ,
xx + 55 ) ; xx [ 34 ] = 0.139807669447128 ; xx [ 35 ] = ( xx [ 9 ] * xx [ 7 ]
+ xx [ 27 ] ) * xx [ 2 ] ; xx [ 7 ] = 0.0549998406976098 ; xx [ 36 ] =
0.01205999999999992 ; xx [ 26 ] = xx [ 36 ] - xx [ 2 ] * ( xx [ 28 ] + xx [ 1
] * xx [ 9 ] ) ; xx [ 1 ] = 0.06144 ; xx [ 58 ] = - 0.07930000000000012 ; xx
[ 59 ] = - 0.02990000000000002 ; xx [ 60 ] = - 0.1049999999999999 ;
pm_math_Quaternion_xform_ra ( xx + 10 , xx + 58 , xx + 61 ) ; xx [ 9 ] = -
0.9813501000307463 ; xx [ 10 ] = - 9.021345794401411e-3 ; xx [ 11 ] = -
0.04725208941316491 ; xx [ 12 ] = 0.1861124298261472 ; xx [ 13 ] = xx [ 0 ] *
state [ 19 ] ; xx [ 27 ] = sin ( xx [ 13 ] ) ; xx [ 64 ] = cos ( xx [ 13 ] )
; xx [ 65 ] = - ( xx [ 8 ] * xx [ 27 ] ) ; xx [ 66 ] = xx [ 25 ] * xx [ 27 ]
; xx [ 67 ] = xx [ 29 ] * xx [ 27 ] ; pm_math_Quaternion_compose_ra ( xx + 9
, xx + 64 , xx + 68 ) ; xx [ 9 ] = state [ 21 ] ; xx [ 10 ] = state [ 22 ] ;
xx [ 11 ] = state [ 23 ] ; xx [ 12 ] = state [ 24 ] ;
pm_math_Quaternion_composeInverse_ra ( xx + 9 , xx + 38 , xx + 64 ) ;
pm_math_Quaternion_compose_ra ( xx + 20 , xx + 64 , xx + 9 ) ;
pm_math_Quaternion_compose_ra ( xx + 68 , xx + 9 , xx + 64 ) ;
pm_math_Quaternion_xform_ra ( xx + 64 , xx + 46 , xx + 72 ) ;
pm_math_Quaternion_xform_ra ( xx + 9 , xx + 42 , xx + 64 ) ; xx [ 9 ] = xx [
4 ] + xx [ 64 ] ; xx [ 10 ] = xx [ 24 ] + xx [ 65 ] ; xx [ 11 ] = xx [ 66 ] -
xx [ 30 ] ; pm_math_Quaternion_xform_ra ( xx + 68 , xx + 9 , xx + 64 ) ;
pm_math_Quaternion_xform_ra ( xx + 68 , xx + 31 , xx + 9 ) ; xx [ 12 ] =
0.5000000000000001 ; xx [ 13 ] = xx [ 0 ] * state [ 28 ] ; xx [ 27 ] = sin (
xx [ 13 ] ) ; xx [ 28 ] = xx [ 0 ] * state [ 29 ] ; xx [ 37 ] = sin ( xx [ 28
] ) ; xx [ 45 ] = xx [ 27 ] * xx [ 37 ] ; xx [ 67 ] = xx [ 0 ] * state [ 30 ]
; xx [ 68 ] = sin ( xx [ 67 ] ) ; xx [ 69 ] = cos ( xx [ 67 ] ) ; xx [ 67 ] =
cos ( xx [ 13 ] ) ; xx [ 13 ] = cos ( xx [ 28 ] ) ; xx [ 28 ] = xx [ 67 ] *
xx [ 13 ] ; xx [ 70 ] = xx [ 45 ] * xx [ 68 ] - xx [ 69 ] * xx [ 28 ] ; xx [
71 ] = xx [ 28 ] * xx [ 68 ] + xx [ 69 ] * xx [ 45 ] ; xx [ 28 ] =
0.8660254037844386 ; xx [ 45 ] = xx [ 13 ] * xx [ 27 ] ; xx [ 13 ] = xx [ 67
] * xx [ 37 ] ; xx [ 27 ] = xx [ 69 ] * xx [ 45 ] + xx [ 13 ] * xx [ 68 ] ;
xx [ 37 ] = xx [ 45 ] * xx [ 68 ] - xx [ 69 ] * xx [ 13 ] ; xx [ 75 ] = xx [
12 ] * xx [ 70 ] - xx [ 71 ] * xx [ 28 ] ; xx [ 76 ] = - ( xx [ 27 ] * xx [
12 ] - xx [ 28 ] * xx [ 37 ] ) ; xx [ 77 ] = xx [ 12 ] * xx [ 37 ] + xx [ 27
] * xx [ 28 ] ; xx [ 78 ] = - ( xx [ 28 ] * xx [ 70 ] + xx [ 71 ] * xx [ 12 ]
) ; pm_math_Quaternion_xform_ra ( xx + 75 , xx + 14 , xx + 67 ) ; xx [ 79 ] =
- xx [ 27 ] ; xx [ 80 ] = xx [ 37 ] ; xx [ 81 ] = - xx [ 71 ] ; xx [ 13 ] =
xx [ 3 ] * xx [ 37 ] ; xx [ 45 ] = xx [ 71 ] * xx [ 5 ] - xx [ 27 ] * xx [ 3
] ; xx [ 27 ] = xx [ 5 ] * xx [ 37 ] ; xx [ 82 ] = - xx [ 13 ] ; xx [ 83 ] =
xx [ 45 ] ; xx [ 84 ] = xx [ 27 ] ; pm_math_Vector3_cross_ra ( xx + 79 , xx +
82 , xx + 85 ) ; xx [ 37 ] = ( xx [ 85 ] - xx [ 13 ] * xx [ 70 ] ) * xx [ 2 ]
- xx [ 5 ] ; xx [ 13 ] = xx [ 37 ] * xx [ 28 ] ; xx [ 71 ] = ( xx [ 70 ] * xx
[ 45 ] + xx [ 86 ] ) * xx [ 2 ] ; xx [ 45 ] = xx [ 28 ] * xx [ 71 ] ; xx [ 79
] = ( xx [ 28 ] * xx [ 13 ] - xx [ 12 ] * xx [ 45 ] ) * xx [ 2 ] - xx [ 37 ]
- 0.1325 ; xx [ 80 ] = 0.651818103933012 ; xx [ 81 ] = 0.03648925127026437 ;
xx [ 82 ] = 0.031347714040858 ; xx [ 83 ] = - 0.7568480790431602 ; xx [ 37 ]
= xx [ 0 ] * state [ 38 ] ; xx [ 84 ] = sin ( xx [ 37 ] ) ; xx [ 88 ] = cos (
xx [ 37 ] ) ; xx [ 89 ] = - ( xx [ 8 ] * xx [ 84 ] ) ; xx [ 90 ] = xx [ 25 ]
* xx [ 84 ] ; xx [ 91 ] = xx [ 29 ] * xx [ 84 ] ;
pm_math_Quaternion_compose_ra ( xx + 80 , xx + 88 , xx + 92 ) ; xx [ 80 ] =
state [ 40 ] ; xx [ 81 ] = state [ 41 ] ; xx [ 82 ] = state [ 42 ] ; xx [ 83
] = state [ 43 ] ; pm_math_Quaternion_composeInverse_ra ( xx + 80 , xx + 38 ,
xx + 88 ) ; pm_math_Quaternion_compose_ra ( xx + 20 , xx + 88 , xx + 80 ) ;
pm_math_Quaternion_compose_ra ( xx + 92 , xx + 80 , xx + 88 ) ;
pm_math_Quaternion_xform_ra ( xx + 88 , xx + 46 , xx + 96 ) ;
pm_math_Quaternion_xform_ra ( xx + 80 , xx + 42 , xx + 88 ) ; xx [ 80 ] = xx
[ 4 ] + xx [ 88 ] ; xx [ 81 ] = xx [ 24 ] + xx [ 89 ] ; xx [ 82 ] = xx [ 90 ]
- xx [ 30 ] ; pm_math_Quaternion_xform_ra ( xx + 92 , xx + 80 , xx + 88 ) ;
pm_math_Quaternion_xform_ra ( xx + 92 , xx + 31 , xx + 80 ) ; xx [ 37 ] = xx
[ 2 ] * ( xx [ 28 ] * xx [ 45 ] + xx [ 12 ] * xx [ 13 ] ) - xx [ 71 ] -
0.2294967320028763 ; xx [ 12 ] = xx [ 36 ] - xx [ 2 ] * ( xx [ 87 ] + xx [ 27
] * xx [ 70 ] ) ; pm_math_Quaternion_xform_ra ( xx + 75 , xx + 58 , xx + 83 )
; xx [ 75 ] = - 0.3294969578258811 ; xx [ 76 ] = - 0.04543218271089525 ; xx [
77 ] = - 0.01581333007230693 ; xx [ 78 ] = 0.9429303315460998 ; xx [ 13 ] =
xx [ 0 ] * state [ 47 ] ; xx [ 27 ] = sin ( xx [ 13 ] ) ; xx [ 91 ] = cos (
xx [ 13 ] ) ; xx [ 92 ] = - ( xx [ 8 ] * xx [ 27 ] ) ; xx [ 93 ] = xx [ 25 ]
* xx [ 27 ] ; xx [ 94 ] = xx [ 29 ] * xx [ 27 ] ;
pm_math_Quaternion_compose_ra ( xx + 75 , xx + 91 , xx + 99 ) ; xx [ 75 ] =
state [ 49 ] ; xx [ 76 ] = state [ 50 ] ; xx [ 77 ] = state [ 51 ] ; xx [ 78
] = state [ 52 ] ; pm_math_Quaternion_composeInverse_ra ( xx + 75 , xx + 38 ,
xx + 91 ) ; pm_math_Quaternion_compose_ra ( xx + 20 , xx + 91 , xx + 75 ) ;
pm_math_Quaternion_compose_ra ( xx + 99 , xx + 75 , xx + 91 ) ;
pm_math_Quaternion_xform_ra ( xx + 91 , xx + 46 , xx + 103 ) ;
pm_math_Quaternion_xform_ra ( xx + 75 , xx + 42 , xx + 91 ) ; xx [ 75 ] = xx
[ 4 ] + xx [ 91 ] ; xx [ 76 ] = xx [ 24 ] + xx [ 92 ] ; xx [ 77 ] = xx [ 93 ]
- xx [ 30 ] ; pm_math_Quaternion_xform_ra ( xx + 99 , xx + 75 , xx + 91 ) ;
pm_math_Quaternion_xform_ra ( xx + 99 , xx + 31 , xx + 75 ) ; xx [ 13 ] =
0.4999999999999998 ; xx [ 27 ] = xx [ 0 ] * state [ 56 ] ; xx [ 28 ] = sin (
xx [ 27 ] ) ; xx [ 45 ] = xx [ 0 ] * state [ 57 ] ; xx [ 70 ] = sin ( xx [ 45
] ) ; xx [ 71 ] = xx [ 28 ] * xx [ 70 ] ; xx [ 78 ] = xx [ 0 ] * state [ 58 ]
; xx [ 86 ] = sin ( xx [ 78 ] ) ; xx [ 87 ] = cos ( xx [ 78 ] ) ; xx [ 78 ] =
cos ( xx [ 27 ] ) ; xx [ 27 ] = cos ( xx [ 45 ] ) ; xx [ 45 ] = xx [ 78 ] *
xx [ 27 ] ; xx [ 94 ] = xx [ 71 ] * xx [ 86 ] - xx [ 87 ] * xx [ 45 ] ; xx [
95 ] = xx [ 45 ] * xx [ 86 ] + xx [ 87 ] * xx [ 71 ] ; xx [ 45 ] =
0.8660254037844387 ; xx [ 71 ] = xx [ 27 ] * xx [ 28 ] ; xx [ 27 ] = xx [ 78
] * xx [ 70 ] ; xx [ 28 ] = xx [ 87 ] * xx [ 71 ] + xx [ 27 ] * xx [ 86 ] ;
xx [ 70 ] = xx [ 71 ] * xx [ 86 ] - xx [ 87 ] * xx [ 27 ] ; xx [ 99 ] = - (
xx [ 13 ] * xx [ 94 ] + xx [ 95 ] * xx [ 45 ] ) ; xx [ 100 ] = xx [ 28 ] * xx
[ 13 ] + xx [ 45 ] * xx [ 70 ] ; xx [ 101 ] = xx [ 28 ] * xx [ 45 ] - xx [ 13
] * xx [ 70 ] ; xx [ 102 ] = xx [ 95 ] * xx [ 13 ] - xx [ 45 ] * xx [ 94 ] ;
pm_math_Quaternion_xform_ra ( xx + 99 , xx + 14 , xx + 106 ) ; xx [ 14 ] = xx
[ 95 ] * xx [ 5 ] - xx [ 28 ] * xx [ 3 ] ; xx [ 109 ] = - xx [ 28 ] ; xx [
110 ] = xx [ 70 ] ; xx [ 111 ] = - xx [ 95 ] ; xx [ 15 ] = xx [ 3 ] * xx [ 70
] ; xx [ 3 ] = xx [ 5 ] * xx [ 70 ] ; xx [ 112 ] = - xx [ 15 ] ; xx [ 113 ] =
xx [ 14 ] ; xx [ 114 ] = xx [ 3 ] ; pm_math_Vector3_cross_ra ( xx + 109 , xx
+ 112 , xx + 115 ) ; xx [ 16 ] = ( xx [ 94 ] * xx [ 14 ] + xx [ 116 ] ) * xx
[ 2 ] ; xx [ 14 ] = xx [ 45 ] * xx [ 16 ] ; xx [ 27 ] = ( xx [ 115 ] - xx [
15 ] * xx [ 94 ] ) * xx [ 2 ] - xx [ 5 ] ; xx [ 5 ] = xx [ 27 ] * xx [ 45 ] ;
xx [ 15 ] = ( xx [ 13 ] * xx [ 14 ] + xx [ 45 ] * xx [ 5 ] ) * xx [ 2 ] - xx
[ 27 ] - 0.1325000000000001 ; xx [ 109 ] = - 0.3295406112903234 ; xx [ 110 ]
= 0.04539254234508536 ; xx [ 111 ] = - 0.01592676154469353 ; xx [ 112 ] = -
0.942915076174174 ; xx [ 27 ] = xx [ 0 ] * state [ 66 ] ; xx [ 28 ] = sin (
xx [ 27 ] ) ; xx [ 118 ] = cos ( xx [ 27 ] ) ; xx [ 119 ] = - ( xx [ 8 ] * xx
[ 28 ] ) ; xx [ 120 ] = xx [ 25 ] * xx [ 28 ] ; xx [ 121 ] = xx [ 29 ] * xx [
28 ] ; pm_math_Quaternion_compose_ra ( xx + 109 , xx + 118 , xx + 122 ) ; xx
[ 109 ] = state [ 68 ] ; xx [ 110 ] = state [ 69 ] ; xx [ 111 ] = state [ 70
] ; xx [ 112 ] = state [ 71 ] ; pm_math_Quaternion_composeInverse_ra ( xx +
109 , xx + 38 , xx + 118 ) ; pm_math_Quaternion_compose_ra ( xx + 20 , xx +
118 , xx + 109 ) ; pm_math_Quaternion_compose_ra ( xx + 122 , xx + 109 , xx +
118 ) ; pm_math_Quaternion_xform_ra ( xx + 118 , xx + 46 , xx + 126 ) ;
pm_math_Quaternion_xform_ra ( xx + 109 , xx + 42 , xx + 118 ) ; xx [ 109 ] =
xx [ 4 ] + xx [ 118 ] ; xx [ 110 ] = xx [ 24 ] + xx [ 119 ] ; xx [ 111 ] = xx
[ 120 ] - xx [ 30 ] ; pm_math_Quaternion_xform_ra ( xx + 122 , xx + 109 , xx
+ 112 ) ; pm_math_Quaternion_xform_ra ( xx + 122 , xx + 31 , xx + 109 ) ; xx
[ 27 ] = xx [ 2 ] * ( xx [ 45 ] * xx [ 14 ] - xx [ 13 ] * xx [ 5 ] ) - xx [
16 ] + 0.2294967320028762 ; xx [ 5 ] = xx [ 36 ] - xx [ 2 ] * ( xx [ 117 ] +
xx [ 3 ] * xx [ 94 ] ) ; pm_math_Quaternion_xform_ra ( xx + 99 , xx + 58 , xx
+ 115 ) ; xx [ 99 ] = 0.651853142204865 ; xx [ 100 ] = - 0.03641083691649384
; xx [ 101 ] = 0.03143875934085798 ; xx [ 102 ] = 0.7568179017199528 ; xx [ 3
] = xx [ 0 ] * state [ 75 ] ; xx [ 13 ] = sin ( xx [ 3 ] ) ; xx [ 118 ] = cos
( xx [ 3 ] ) ; xx [ 119 ] = - ( xx [ 8 ] * xx [ 13 ] ) ; xx [ 120 ] = xx [ 25
] * xx [ 13 ] ; xx [ 121 ] = xx [ 29 ] * xx [ 13 ] ;
pm_math_Quaternion_compose_ra ( xx + 99 , xx + 118 , xx + 122 ) ; xx [ 99 ] =
state [ 77 ] ; xx [ 100 ] = state [ 78 ] ; xx [ 101 ] = state [ 79 ] ; xx [
102 ] = state [ 80 ] ; pm_math_Quaternion_composeInverse_ra ( xx + 99 , xx +
38 , xx + 118 ) ; pm_math_Quaternion_compose_ra ( xx + 20 , xx + 118 , xx +
38 ) ; pm_math_Quaternion_compose_ra ( xx + 122 , xx + 38 , xx + 20 ) ;
pm_math_Quaternion_xform_ra ( xx + 20 , xx + 46 , xx + 58 ) ;
pm_math_Quaternion_xform_ra ( xx + 38 , xx + 42 , xx + 20 ) ; xx [ 38 ] = xx
[ 4 ] + xx [ 20 ] ; xx [ 39 ] = xx [ 24 ] + xx [ 21 ] ; xx [ 40 ] = xx [ 22 ]
- xx [ 30 ] ; pm_math_Quaternion_xform_ra ( xx + 122 , xx + 38 , xx + 20 ) ;
pm_math_Quaternion_xform_ra ( xx + 122 , xx + 31 , xx + 23 ) ; xx [ 3 ] = xx
[ 0 ] * state [ 6 ] ; xx [ 4 ] = cos ( xx [ 3 ] ) ; xx [ 8 ] = sin ( xx [ 3 ]
) ; xx [ 3 ] = 0.4527250000000002 * xx [ 8 ] ; xx [ 13 ] = 1.405725 ; xx [ 14
] = xx [ 13 ] * xx [ 8 ] ; xx [ 16 ] = xx [ 2 ] * ( xx [ 4 ] * xx [ 3 ] + xx
[ 14 ] * xx [ 8 ] ) ; xx [ 28 ] = 1.5457 ; xx [ 29 ] = 0.01 ; xx [ 30 ] =
0.7071067811865476 ; xx [ 31 ] = xx [ 0 ] * state [ 8 ] ; xx [ 32 ] = xx [ 30
] * cos ( xx [ 31 ] ) ; xx [ 33 ] = xx [ 29 ] * xx [ 32 ] ; xx [ 36 ] = xx [
30 ] * sin ( xx [ 31 ] ) ; xx [ 31 ] = xx [ 29 ] * xx [ 36 ] ; xx [ 38 ] =
9.300000000000017e-3 ; xx [ 39 ] = 9.999999999999957e-3 ; xx [ 40 ] = xx [ 33
] * xx [ 32 ] ; xx [ 41 ] = xx [ 31 ] * xx [ 36 ] ; xx [ 42 ] = ( xx [ 4 ] *
xx [ 14 ] - xx [ 3 ] * xx [ 8 ] ) * xx [ 2 ] ; xx [ 3 ] = 0.04550000000000132
; xx [ 14 ] = 0.0555 ; xx [ 43 ] = xx [ 16 ] - xx [ 16 ] + xx [ 28 ] - ( xx [
2 ] * ( xx [ 33 ] * xx [ 36 ] - xx [ 31 ] * xx [ 32 ] ) - xx [ 38 ] ) ; xx [
44 ] = - ( xx [ 39 ] - ( xx [ 40 ] + xx [ 41 ] ) * xx [ 2 ] ) ; xx [ 45 ] =
xx [ 42 ] - xx [ 42 ] - xx [ 3 ] - ( ( xx [ 40 ] + xx [ 41 ] ) * xx [ 2 ] -
xx [ 14 ] ) ; xx [ 16 ] = xx [ 30 ] * xx [ 4 ] ; xx [ 4 ] = xx [ 30 ] * xx [
8 ] ; xx [ 8 ] = xx [ 16 ] * xx [ 4 ] ; xx [ 31 ] = 1.0 ; xx [ 33 ] = xx [ 4
] * xx [ 4 ] ; xx [ 4 ] = xx [ 16 ] * xx [ 16 ] ; xx [ 40 ] = - ( ( xx [ 8 ]
+ xx [ 8 ] ) * xx [ 2 ] ) ; xx [ 41 ] = xx [ 31 ] - ( xx [ 33 ] + xx [ 4 ] )
* xx [ 2 ] ; xx [ 42 ] = xx [ 2 ] * ( xx [ 33 ] - xx [ 4 ] ) ; xx [ 46 ] = xx
[ 31 ] - ( xx [ 33 ] + xx [ 33 ] ) * xx [ 2 ] ; xx [ 47 ] = xx [ 2 ] * ( xx [
8 ] - xx [ 8 ] ) ; xx [ 48 ] = - ( ( xx [ 8 ] + xx [ 8 ] ) * xx [ 2 ] ) ; xx
[ 4 ] = 7.427230677621783e-3 ; xx [ 8 ] = xx [ 32 ] * xx [ 36 ] ; xx [ 16 ] =
xx [ 36 ] * xx [ 36 ] ; xx [ 33 ] = xx [ 32 ] * xx [ 32 ] ; xx [ 99 ] = - ( (
xx [ 8 ] + xx [ 8 ] ) * xx [ 2 ] ) ; xx [ 100 ] = xx [ 31 ] - ( xx [ 16 ] +
xx [ 33 ] ) * xx [ 2 ] ; xx [ 101 ] = xx [ 2 ] * ( xx [ 16 ] - xx [ 33 ] ) ;
xx [ 118 ] = xx [ 31 ] - ( xx [ 16 ] + xx [ 16 ] ) * xx [ 2 ] ; xx [ 119 ] =
xx [ 2 ] * ( xx [ 8 ] - xx [ 8 ] ) ; xx [ 120 ] = - ( ( xx [ 8 ] + xx [ 8 ] )
* xx [ 2 ] ) ; xx [ 8 ] = xx [ 0 ] * state [ 34 ] ; xx [ 16 ] = cos ( xx [ 8
] ) ; xx [ 32 ] = 0.452725 ; xx [ 33 ] = sin ( xx [ 8 ] ) ; xx [ 8 ] = xx [
32 ] * xx [ 33 ] ; xx [ 36 ] = xx [ 13 ] * xx [ 33 ] ; xx [ 70 ] = xx [ 2 ] *
( xx [ 16 ] * xx [ 8 ] + xx [ 36 ] * xx [ 33 ] ) ; xx [ 71 ] = xx [ 0 ] *
state [ 36 ] ; xx [ 78 ] = xx [ 30 ] * cos ( xx [ 71 ] ) ; xx [ 86 ] = xx [
29 ] * xx [ 78 ] ; xx [ 87 ] = xx [ 30 ] * sin ( xx [ 71 ] ) ; xx [ 71 ] = xx
[ 29 ] * xx [ 87 ] ; xx [ 94 ] = xx [ 86 ] * xx [ 78 ] ; xx [ 95 ] = xx [ 71
] * xx [ 87 ] ; xx [ 102 ] = ( xx [ 16 ] * xx [ 36 ] - xx [ 8 ] * xx [ 33 ] )
* xx [ 2 ] ; xx [ 121 ] = xx [ 70 ] - xx [ 70 ] + xx [ 28 ] - ( xx [ 2 ] * (
xx [ 86 ] * xx [ 87 ] - xx [ 71 ] * xx [ 78 ] ) - xx [ 38 ] ) ; xx [ 122 ] =
- ( xx [ 39 ] - ( xx [ 94 ] + xx [ 95 ] ) * xx [ 2 ] ) ; xx [ 123 ] = xx [
102 ] - xx [ 102 ] - xx [ 3 ] - ( ( xx [ 94 ] + xx [ 95 ] ) * xx [ 2 ] - xx [
14 ] ) ; xx [ 8 ] = xx [ 30 ] * xx [ 16 ] ; xx [ 16 ] = xx [ 30 ] * xx [ 33 ]
; xx [ 33 ] = xx [ 8 ] * xx [ 16 ] ; xx [ 36 ] = xx [ 16 ] * xx [ 16 ] ; xx [
16 ] = xx [ 8 ] * xx [ 8 ] ; xx [ 129 ] = - ( ( xx [ 33 ] + xx [ 33 ] ) * xx
[ 2 ] ) ; xx [ 130 ] = xx [ 31 ] - ( xx [ 36 ] + xx [ 16 ] ) * xx [ 2 ] ; xx
[ 131 ] = xx [ 2 ] * ( xx [ 36 ] - xx [ 16 ] ) ; xx [ 132 ] = xx [ 31 ] - (
xx [ 36 ] + xx [ 36 ] ) * xx [ 2 ] ; xx [ 133 ] = xx [ 2 ] * ( xx [ 33 ] - xx
[ 33 ] ) ; xx [ 134 ] = - ( ( xx [ 33 ] + xx [ 33 ] ) * xx [ 2 ] ) ; xx [ 8 ]
= xx [ 78 ] * xx [ 87 ] ; xx [ 16 ] = xx [ 87 ] * xx [ 87 ] ; xx [ 33 ] = xx
[ 78 ] * xx [ 78 ] ; xx [ 135 ] = - ( ( xx [ 8 ] + xx [ 8 ] ) * xx [ 2 ] ) ;
xx [ 136 ] = xx [ 31 ] - ( xx [ 16 ] + xx [ 33 ] ) * xx [ 2 ] ; xx [ 137 ] =
xx [ 2 ] * ( xx [ 16 ] - xx [ 33 ] ) ; xx [ 138 ] = xx [ 31 ] - ( xx [ 16 ] +
xx [ 16 ] ) * xx [ 2 ] ; xx [ 139 ] = xx [ 2 ] * ( xx [ 8 ] - xx [ 8 ] ) ; xx
[ 140 ] = - ( ( xx [ 8 ] + xx [ 8 ] ) * xx [ 2 ] ) ; xx [ 8 ] = xx [ 0 ] *
state [ 62 ] ; xx [ 16 ] = cos ( xx [ 8 ] ) ; xx [ 33 ] = sin ( xx [ 8 ] ) ;
xx [ 8 ] = xx [ 32 ] * xx [ 33 ] ; xx [ 32 ] = xx [ 13 ] * xx [ 33 ] ; xx [
13 ] = xx [ 2 ] * ( xx [ 16 ] * xx [ 8 ] + xx [ 32 ] * xx [ 33 ] ) ; xx [ 36
] = xx [ 0 ] * state [ 64 ] ; xx [ 0 ] = xx [ 30 ] * cos ( xx [ 36 ] ) ; xx [
70 ] = xx [ 29 ] * xx [ 0 ] ; xx [ 71 ] = xx [ 30 ] * sin ( xx [ 36 ] ) ; xx
[ 36 ] = xx [ 29 ] * xx [ 71 ] ; xx [ 29 ] = xx [ 70 ] * xx [ 0 ] ; xx [ 78 ]
= xx [ 36 ] * xx [ 71 ] ; xx [ 86 ] = ( xx [ 16 ] * xx [ 32 ] - xx [ 8 ] * xx
[ 33 ] ) * xx [ 2 ] ; xx [ 141 ] = xx [ 13 ] - xx [ 13 ] + xx [ 28 ] - ( xx [
2 ] * ( xx [ 70 ] * xx [ 71 ] - xx [ 36 ] * xx [ 0 ] ) - xx [ 38 ] ) ; xx [
142 ] = - ( xx [ 39 ] - ( xx [ 29 ] + xx [ 78 ] ) * xx [ 2 ] ) ; xx [ 143 ] =
xx [ 86 ] - xx [ 86 ] - xx [ 3 ] - ( ( xx [ 29 ] + xx [ 78 ] ) * xx [ 2 ] -
xx [ 14 ] ) ; xx [ 3 ] = xx [ 30 ] * xx [ 16 ] ; xx [ 8 ] = xx [ 30 ] * xx [
33 ] ; xx [ 13 ] = xx [ 3 ] * xx [ 8 ] ; xx [ 14 ] = xx [ 8 ] * xx [ 8 ] ; xx
[ 8 ] = xx [ 3 ] * xx [ 3 ] ; xx [ 28 ] = - ( ( xx [ 13 ] + xx [ 13 ] ) * xx
[ 2 ] ) ; xx [ 29 ] = xx [ 31 ] - ( xx [ 14 ] + xx [ 8 ] ) * xx [ 2 ] ; xx [
30 ] = xx [ 2 ] * ( xx [ 14 ] - xx [ 8 ] ) ; xx [ 144 ] = xx [ 31 ] - ( xx [
14 ] + xx [ 14 ] ) * xx [ 2 ] ; xx [ 145 ] = xx [ 2 ] * ( xx [ 13 ] - xx [ 13
] ) ; xx [ 146 ] = - ( ( xx [ 13 ] + xx [ 13 ] ) * xx [ 2 ] ) ; xx [ 3 ] = xx
[ 0 ] * xx [ 71 ] ; xx [ 8 ] = xx [ 71 ] * xx [ 71 ] ; xx [ 13 ] = xx [ 0 ] *
xx [ 0 ] ; xx [ 147 ] = - ( ( xx [ 3 ] + xx [ 3 ] ) * xx [ 2 ] ) ; xx [ 148 ]
= xx [ 31 ] - ( xx [ 8 ] + xx [ 13 ] ) * xx [ 2 ] ; xx [ 149 ] = xx [ 2 ] * (
xx [ 8 ] - xx [ 13 ] ) ; xx [ 150 ] = xx [ 31 ] - ( xx [ 8 ] + xx [ 8 ] ) *
xx [ 2 ] ; xx [ 151 ] = xx [ 2 ] * ( xx [ 3 ] - xx [ 3 ] ) ; xx [ 152 ] = - (
( xx [ 3 ] + xx [ 3 ] ) * xx [ 2 ] ) ; error [ 0 ] = xx [ 17 ] + xx [ 6 ] - (
xx [ 49 ] + xx [ 52 ] - xx [ 55 ] ) - xx [ 34 ] ; error [ 1 ] = xx [ 18 ] - (
xx [ 35 ] + xx [ 50 ] + xx [ 53 ] - xx [ 56 ] ) - xx [ 7 ] ; error [ 2 ] = xx
[ 19 ] + xx [ 26 ] - ( xx [ 51 ] + xx [ 54 ] - xx [ 57 ] ) + xx [ 1 ] ; error
[ 3 ] = xx [ 61 ] + xx [ 6 ] - ( xx [ 72 ] + xx [ 64 ] - xx [ 9 ] ) - xx [ 34
] ; error [ 4 ] = xx [ 62 ] - ( xx [ 35 ] + xx [ 73 ] + xx [ 65 ] - xx [ 10 ]
) + xx [ 7 ] ; error [ 5 ] = xx [ 63 ] + xx [ 26 ] - ( xx [ 74 ] + xx [ 66 ]
- xx [ 11 ] ) + xx [ 1 ] ; error [ 6 ] = xx [ 67 ] + xx [ 79 ] - ( xx [ 96 ]
+ xx [ 88 ] - xx [ 80 ] ) + 0.02227257547533662 ; error [ 7 ] = xx [ 68 ] +
xx [ 37 ] - ( xx [ 97 ] + xx [ 89 ] - xx [ 81 ] ) + 0.1485769137339153 ;
error [ 8 ] = xx [ 69 ] + xx [ 12 ] - ( xx [ 98 ] + xx [ 90 ] - xx [ 82 ] ) +
xx [ 1 ] ; error [ 9 ] = xx [ 83 ] + xx [ 79 ] - ( xx [ 103 ] + xx [ 91 ] -
xx [ 75 ] ) + 0.1175350939717913 ; error [ 10 ] = xx [ 84 ] + xx [ 37 ] - (
xx [ 104 ] + xx [ 92 ] - xx [ 76 ] ) + 0.09357707303630548 ; error [ 11 ] =
xx [ 85 ] + xx [ 12 ] - ( xx [ 105 ] + xx [ 93 ] - xx [ 77 ] ) + xx [ 1 ] ;
error [ 12 ] = xx [ 106 ] + xx [ 15 ] - ( xx [ 126 ] + xx [ 112 ] - xx [ 109
] ) + 0.1175350939717913 ; error [ 13 ] = xx [ 107 ] + xx [ 27 ] - ( xx [ 127
] + xx [ 113 ] - xx [ 110 ] ) - 0.09357707303630539 ; error [ 14 ] = xx [ 108
] + xx [ 5 ] - ( xx [ 128 ] + xx [ 114 ] - xx [ 111 ] ) + xx [ 1 ] ; error [
15 ] = xx [ 115 ] + xx [ 15 ] - ( xx [ 58 ] + xx [ 20 ] - xx [ 23 ] ) +
0.0222725754753367 ; error [ 16 ] = xx [ 116 ] + xx [ 27 ] - ( xx [ 59 ] + xx
[ 21 ] - xx [ 24 ] ) - 0.1485769137339152 ; error [ 17 ] = xx [ 117 ] + xx [
5 ] - ( xx [ 60 ] + xx [ 22 ] - xx [ 25 ] ) + xx [ 1 ] ; error [ 18 ] =
sm_core_canonicalAngle ( ( state [ 84 ] + sm_core_canonicalAngle ( atan2 (
pm_math_Vector3_dot_ra ( xx + 43 , xx + 40 ) , pm_math_Vector3_dot_ra ( xx +
43 , xx + 46 ) ) - state [ 84 ] ) - state [ 90 ] ) / xx [ 4 ] + atan2 (
pm_math_Vector3_dot_ra ( xx + 43 , xx + 99 ) , pm_math_Vector3_dot_ra ( xx +
43 , xx + 118 ) ) ) * xx [ 4 ] ; error [ 19 ] = sm_core_canonicalAngle ( (
state [ 86 ] + sm_core_canonicalAngle ( atan2 ( pm_math_Vector3_dot_ra ( xx +
121 , xx + 129 ) , pm_math_Vector3_dot_ra ( xx + 121 , xx + 132 ) ) - state [
86 ] ) - state [ 91 ] ) / xx [ 4 ] + atan2 ( pm_math_Vector3_dot_ra ( xx +
121 , xx + 135 ) , pm_math_Vector3_dot_ra ( xx + 121 , xx + 138 ) ) ) * xx [
4 ] ; error [ 20 ] = sm_core_canonicalAngle ( ( state [ 88 ] +
sm_core_canonicalAngle ( atan2 ( pm_math_Vector3_dot_ra ( xx + 141 , xx + 28
) , pm_math_Vector3_dot_ra ( xx + 141 , xx + 144 ) ) - state [ 88 ] ) - state
[ 92 ] ) / xx [ 4 ] + atan2 ( pm_math_Vector3_dot_ra ( xx + 141 , xx + 147 )
, pm_math_Vector3_dot_ra ( xx + 141 , xx + 150 ) ) ) * xx [ 4 ] ; } void
triped_a151ee3d_1_resetModeVector ( const void * mech , int * modeVector ) {
( void ) mech ; ( void ) modeVector ; } boolean_T
triped_a151ee3d_1_hasJointDisToNormModeChange ( const void * mech , const int
* prevModeVector , const int * modeVector ) { ( void ) mech ; ( void )
prevModeVector ; ( void ) modeVector ; return 0 ; } PmfMessageId
triped_a151ee3d_1_performJointDisToNormModeChange ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const int * prevModeVector , const int *
modeVector , const double * input , double * state , void * neDiagMgr0 ) {
const double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv
-> mInts . mValues ; NeuDiagnosticManager * neDiagMgr = (
NeuDiagnosticManager * ) neDiagMgr0 ; ( void ) mech ; ( void ) rtdvd ; ( void
) rtdvi ; ( void ) prevModeVector ; ( void ) modeVector ; ( void ) input ; (
void ) state ; ( void ) neDiagMgr ; return NULL ; } PmfMessageId
triped_a151ee3d_1_onModeChangedCutJoints ( const void * mech , const int *
prevModeVector , int * modeVector , double * state , void * neDiagMgr0 ) {
NeuDiagnosticManager * neDiagMgr = ( NeuDiagnosticManager * ) neDiagMgr0 ; (
void ) mech ; ( void ) prevModeVector ; ( void ) modeVector ; ( void ) state
; ( void ) neDiagMgr ; return NULL ; }
