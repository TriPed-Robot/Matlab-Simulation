#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "sm_CTarget.h"
void triped_a151ee3d_1_setTargets ( const RuntimeDerivedValuesBundle * rtdv ,
CTarget * targets ) { ( void ) rtdv ; ( void ) targets ; } void
triped_a151ee3d_1_resetAsmStateVector ( const void * mech , double * state )
{ double xx [ 2 ] ; ( void ) mech ; xx [ 0 ] = 0.0 ; xx [ 1 ] = 1.0 ; state [
0 ] = xx [ 0 ] ; state [ 1 ] = xx [ 0 ] ; state [ 2 ] = xx [ 0 ] ; state [ 3
] = xx [ 0 ] ; state [ 4 ] = xx [ 0 ] ; state [ 5 ] = xx [ 0 ] ; state [ 6 ]
= xx [ 0 ] ; state [ 7 ] = xx [ 0 ] ; state [ 8 ] = xx [ 0 ] ; state [ 9 ] =
xx [ 0 ] ; state [ 10 ] = xx [ 0 ] ; state [ 11 ] = xx [ 0 ] ; state [ 12 ] =
xx [ 1 ] ; state [ 13 ] = xx [ 0 ] ; state [ 14 ] = xx [ 0 ] ; state [ 15 ] =
xx [ 0 ] ; state [ 16 ] = xx [ 0 ] ; state [ 17 ] = xx [ 0 ] ; state [ 18 ] =
xx [ 0 ] ; state [ 19 ] = xx [ 0 ] ; state [ 20 ] = xx [ 0 ] ; state [ 21 ] =
xx [ 1 ] ; state [ 22 ] = xx [ 0 ] ; state [ 23 ] = xx [ 0 ] ; state [ 24 ] =
xx [ 0 ] ; state [ 25 ] = xx [ 0 ] ; state [ 26 ] = xx [ 0 ] ; state [ 27 ] =
xx [ 0 ] ; state [ 28 ] = xx [ 0 ] ; state [ 29 ] = xx [ 0 ] ; state [ 30 ] =
xx [ 0 ] ; state [ 31 ] = xx [ 0 ] ; state [ 32 ] = xx [ 0 ] ; state [ 33 ] =
xx [ 0 ] ; state [ 34 ] = xx [ 0 ] ; state [ 35 ] = xx [ 0 ] ; state [ 36 ] =
xx [ 0 ] ; state [ 37 ] = xx [ 0 ] ; state [ 38 ] = xx [ 0 ] ; state [ 39 ] =
xx [ 0 ] ; state [ 40 ] = xx [ 1 ] ; state [ 41 ] = xx [ 0 ] ; state [ 42 ] =
xx [ 0 ] ; state [ 43 ] = xx [ 0 ] ; state [ 44 ] = xx [ 0 ] ; state [ 45 ] =
xx [ 0 ] ; state [ 46 ] = xx [ 0 ] ; state [ 47 ] = xx [ 0 ] ; state [ 48 ] =
xx [ 0 ] ; state [ 49 ] = xx [ 1 ] ; state [ 50 ] = xx [ 0 ] ; state [ 51 ] =
xx [ 0 ] ; state [ 52 ] = xx [ 0 ] ; state [ 53 ] = xx [ 0 ] ; state [ 54 ] =
xx [ 0 ] ; state [ 55 ] = xx [ 0 ] ; state [ 56 ] = xx [ 0 ] ; state [ 57 ] =
xx [ 0 ] ; state [ 58 ] = xx [ 0 ] ; state [ 59 ] = xx [ 0 ] ; state [ 60 ] =
xx [ 0 ] ; state [ 61 ] = xx [ 0 ] ; state [ 62 ] = xx [ 0 ] ; state [ 63 ] =
xx [ 0 ] ; state [ 64 ] = xx [ 0 ] ; state [ 65 ] = xx [ 0 ] ; state [ 66 ] =
xx [ 0 ] ; state [ 67 ] = xx [ 0 ] ; state [ 68 ] = xx [ 1 ] ; state [ 69 ] =
xx [ 0 ] ; state [ 70 ] = xx [ 0 ] ; state [ 71 ] = xx [ 0 ] ; state [ 72 ] =
xx [ 0 ] ; state [ 73 ] = xx [ 0 ] ; state [ 74 ] = xx [ 0 ] ; state [ 75 ] =
xx [ 0 ] ; state [ 76 ] = xx [ 0 ] ; state [ 77 ] = xx [ 1 ] ; state [ 78 ] =
xx [ 0 ] ; state [ 79 ] = xx [ 0 ] ; state [ 80 ] = xx [ 0 ] ; state [ 81 ] =
xx [ 0 ] ; state [ 82 ] = xx [ 0 ] ; state [ 83 ] = xx [ 0 ] ; state [ 84 ] =
xx [ 0 ] ; state [ 85 ] = xx [ 0 ] ; state [ 86 ] = xx [ 0 ] ; state [ 87 ] =
xx [ 0 ] ; state [ 88 ] = xx [ 0 ] ; state [ 89 ] = xx [ 0 ] ; state [ 90 ] =
xx [ 0 ] ; state [ 91 ] = xx [ 0 ] ; state [ 92 ] = xx [ 0 ] ; } static
PmfMessageId initializeTrackedAngleState_6 ( const RuntimeDerivedValuesBundle
* rtdv , const int * modeVector , const double * motionData , double * state
, NeuDiagnosticManager * neDiagMgr ) { const double * rtdvd = rtdv ->
mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ; double xx
[ 29 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ; ( void )
neDiagMgr ; xx [ 0 ] = motionData [ 22 ] ; xx [ 1 ] = motionData [ 23 ] ; xx
[ 2 ] = motionData [ 24 ] ; xx [ 3 ] = 0.4527250000000002 ; xx [ 4 ] =
1.405725 ; xx [ 5 ] = xx [ 4 ] * motionData [ 24 ] + xx [ 3 ] * motionData [
22 ] ; xx [ 6 ] = xx [ 4 ] * motionData [ 23 ] ; xx [ 7 ] = - ( xx [ 3 ] *
motionData [ 23 ] ) ; xx [ 8 ] = xx [ 5 ] ; xx [ 9 ] = - xx [ 6 ] ;
pm_math_Vector3_cross_ra ( xx + 0 , xx + 7 , xx + 10 ) ; xx [ 0 ] = 2.0 ; xx
[ 1 ] = 0.01 ; xx [ 2 ] = xx [ 1 ] * motionData [ 30 ] ; xx [ 7 ] = xx [ 1 ]
* motionData [ 29 ] ; xx [ 13 ] = ( xx [ 10 ] - xx [ 3 ] * motionData [ 21 ]
* motionData [ 23 ] ) * xx [ 0 ] + motionData [ 25 ] + xx [ 4 ] - (
motionData [ 32 ] - ( xx [ 2 ] * motionData [ 28 ] + xx [ 7 ] * motionData [
31 ] ) * xx [ 0 ] ) ; xx [ 14 ] = ( xx [ 5 ] * motionData [ 21 ] + xx [ 11 ]
) * xx [ 0 ] + motionData [ 26 ] - ( xx [ 0 ] * ( xx [ 7 ] * motionData [ 28
] - xx [ 2 ] * motionData [ 31 ] ) + motionData [ 33 ] ) ; xx [ 15 ] = xx [ 0
] * ( xx [ 12 ] - xx [ 6 ] * motionData [ 21 ] ) + motionData [ 27 ] - xx [ 3
] - ( motionData [ 34 ] + ( xx [ 7 ] * motionData [ 29 ] + xx [ 2 ] *
motionData [ 30 ] ) * xx [ 0 ] - xx [ 1 ] ) ; xx [ 1 ] = 0.7071067811865476 ;
xx [ 2 ] = xx [ 1 ] * motionData [ 23 ] ; xx [ 3 ] = xx [ 1 ] * motionData [
24 ] ; xx [ 4 ] = xx [ 2 ] - xx [ 3 ] ; xx [ 5 ] = xx [ 1 ] * motionData [ 22
] ; xx [ 6 ] = xx [ 1 ] * motionData [ 21 ] ; xx [ 1 ] = xx [ 5 ] - xx [ 6 ]
; xx [ 7 ] = xx [ 4 ] * xx [ 1 ] ; xx [ 8 ] = xx [ 6 ] + xx [ 5 ] ; xx [ 5 ]
= xx [ 3 ] + xx [ 2 ] ; xx [ 2 ] = xx [ 8 ] * xx [ 5 ] ; xx [ 3 ] = 1.0 ; xx
[ 6 ] = xx [ 5 ] * xx [ 5 ] ; xx [ 9 ] = xx [ 0 ] * ( xx [ 7 ] - xx [ 2 ] ) ;
xx [ 10 ] = xx [ 3 ] - ( xx [ 6 ] + xx [ 1 ] * xx [ 1 ] ) * xx [ 0 ] ; xx [
11 ] = ( xx [ 1 ] * xx [ 8 ] + xx [ 4 ] * xx [ 5 ] ) * xx [ 0 ] ; xx [ 16 ] =
xx [ 3 ] - ( xx [ 4 ] * xx [ 4 ] + xx [ 6 ] ) * xx [ 0 ] ; xx [ 17 ] = ( xx [
2 ] + xx [ 7 ] ) * xx [ 0 ] ; xx [ 18 ] = xx [ 0 ] * ( xx [ 1 ] * xx [ 5 ] -
xx [ 4 ] * xx [ 8 ] ) ; xx [ 19 ] = xx [ 8 ] ; xx [ 20 ] = xx [ 1 ] ; xx [ 21
] = xx [ 4 ] ; xx [ 22 ] = xx [ 5 ] ; xx [ 0 ] = motionData [ 28 ] ; xx [ 1 ]
= motionData [ 29 ] ; xx [ 2 ] = motionData [ 30 ] ; xx [ 3 ] = motionData [
31 ] ; xx [ 4 ] = motionData [ 339 ] ; xx [ 5 ] = motionData [ 340 ] ; xx [ 6
] = motionData [ 341 ] ; pm_math_Quaternion_xform_ra ( xx + 0 , xx + 4 , xx +
23 ) ; xx [ 0 ] = motionData [ 21 ] ; xx [ 1 ] = motionData [ 22 ] ; xx [ 2 ]
= motionData [ 23 ] ; xx [ 3 ] = motionData [ 24 ] ; xx [ 4 ] = motionData [
333 ] ; xx [ 5 ] = motionData [ 334 ] ; xx [ 6 ] = motionData [ 335 ] ;
pm_math_Quaternion_xform_ra ( xx + 0 , xx + 4 , xx + 26 ) ; xx [ 0 ] = xx [
23 ] - xx [ 26 ] ; xx [ 1 ] = xx [ 24 ] - xx [ 27 ] ; xx [ 2 ] = xx [ 25 ] -
xx [ 28 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 19 , xx + 0 , xx + 3 )
; state [ 84 ] = sm_core_canonicalAngle ( atan2 ( pm_math_Vector3_dot_ra ( xx
+ 13 , xx + 9 ) , pm_math_Vector3_dot_ra ( xx + 13 , xx + 16 ) ) ) ; state [
85 ] = 7.372473615415413e-3 * xx [ 5 ] ; return NULL ; } static PmfMessageId
initializeTrackedAngleState_7 ( const RuntimeDerivedValuesBundle * rtdv ,
const int * modeVector , const double * motionData , double * state ,
NeuDiagnosticManager * neDiagMgr ) { const double * rtdvd = rtdv -> mDoubles
. mValues ; const int * rtdvi = rtdv -> mInts . mValues ; double xx [ 29 ] ;
( void ) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ; ( void ) neDiagMgr ;
xx [ 0 ] = motionData [ 78 ] ; xx [ 1 ] = motionData [ 79 ] ; xx [ 2 ] =
motionData [ 80 ] ; xx [ 3 ] = 0.452725 ; xx [ 4 ] = 1.405725 ; xx [ 5 ] = xx
[ 4 ] * motionData [ 80 ] + xx [ 3 ] * motionData [ 78 ] ; xx [ 6 ] = xx [ 4
] * motionData [ 79 ] ; xx [ 7 ] = - ( xx [ 3 ] * motionData [ 79 ] ) ; xx [
8 ] = xx [ 5 ] ; xx [ 9 ] = - xx [ 6 ] ; pm_math_Vector3_cross_ra ( xx + 0 ,
xx + 7 , xx + 10 ) ; xx [ 0 ] = 2.0 ; xx [ 1 ] = 0.01 ; xx [ 2 ] = xx [ 1 ] *
motionData [ 86 ] ; xx [ 7 ] = xx [ 1 ] * motionData [ 85 ] ; xx [ 13 ] = (
xx [ 10 ] - xx [ 3 ] * motionData [ 77 ] * motionData [ 79 ] ) * xx [ 0 ] +
motionData [ 81 ] + xx [ 4 ] - ( motionData [ 88 ] - ( xx [ 2 ] * motionData
[ 84 ] + xx [ 7 ] * motionData [ 87 ] ) * xx [ 0 ] ) ; xx [ 14 ] = ( xx [ 5 ]
* motionData [ 77 ] + xx [ 11 ] ) * xx [ 0 ] + motionData [ 82 ] - ( xx [ 0 ]
* ( xx [ 7 ] * motionData [ 84 ] - xx [ 2 ] * motionData [ 87 ] ) +
motionData [ 89 ] ) ; xx [ 15 ] = xx [ 0 ] * ( xx [ 12 ] - xx [ 6 ] *
motionData [ 77 ] ) + motionData [ 83 ] - xx [ 3 ] - ( motionData [ 90 ] + (
xx [ 7 ] * motionData [ 85 ] + xx [ 2 ] * motionData [ 86 ] ) * xx [ 0 ] - xx
[ 1 ] ) ; xx [ 1 ] = 0.7071067811865476 ; xx [ 2 ] = xx [ 1 ] * motionData [
77 ] ; xx [ 3 ] = xx [ 1 ] * motionData [ 78 ] ; xx [ 4 ] = xx [ 2 ] - xx [ 3
] ; xx [ 5 ] = xx [ 1 ] * motionData [ 80 ] ; xx [ 6 ] = xx [ 1 ] *
motionData [ 79 ] ; xx [ 1 ] = xx [ 5 ] - xx [ 6 ] ; xx [ 7 ] = xx [ 4 ] * xx
[ 1 ] ; xx [ 8 ] = xx [ 2 ] + xx [ 3 ] ; xx [ 2 ] = xx [ 5 ] + xx [ 6 ] ; xx
[ 3 ] = xx [ 8 ] * xx [ 2 ] ; xx [ 5 ] = 1.0 ; xx [ 6 ] = xx [ 2 ] * xx [ 2 ]
; xx [ 9 ] = xx [ 0 ] * ( xx [ 7 ] - xx [ 3 ] ) ; xx [ 10 ] = xx [ 5 ] - ( xx
[ 6 ] + xx [ 4 ] * xx [ 4 ] ) * xx [ 0 ] ; xx [ 11 ] = - ( ( xx [ 4 ] * xx [
8 ] + xx [ 1 ] * xx [ 2 ] ) * xx [ 0 ] ) ; xx [ 16 ] = xx [ 5 ] - ( xx [ 1 ]
* xx [ 1 ] + xx [ 6 ] ) * xx [ 0 ] ; xx [ 17 ] = ( xx [ 3 ] + xx [ 7 ] ) * xx
[ 0 ] ; xx [ 18 ] = xx [ 0 ] * ( xx [ 1 ] * xx [ 8 ] - xx [ 4 ] * xx [ 2 ] )
; xx [ 19 ] = - xx [ 8 ] ; xx [ 20 ] = xx [ 4 ] ; xx [ 21 ] = xx [ 1 ] ; xx [
22 ] = - xx [ 2 ] ; xx [ 0 ] = motionData [ 84 ] ; xx [ 1 ] = motionData [ 85
] ; xx [ 2 ] = motionData [ 86 ] ; xx [ 3 ] = motionData [ 87 ] ; xx [ 4 ] =
motionData [ 387 ] ; xx [ 5 ] = motionData [ 388 ] ; xx [ 6 ] = motionData [
389 ] ; pm_math_Quaternion_xform_ra ( xx + 0 , xx + 4 , xx + 23 ) ; xx [ 0 ]
= motionData [ 77 ] ; xx [ 1 ] = motionData [ 78 ] ; xx [ 2 ] = motionData [
79 ] ; xx [ 3 ] = motionData [ 80 ] ; xx [ 4 ] = motionData [ 381 ] ; xx [ 5
] = motionData [ 382 ] ; xx [ 6 ] = motionData [ 383 ] ;
pm_math_Quaternion_xform_ra ( xx + 0 , xx + 4 , xx + 26 ) ; xx [ 0 ] = xx [
23 ] - xx [ 26 ] ; xx [ 1 ] = xx [ 24 ] - xx [ 27 ] ; xx [ 2 ] = xx [ 25 ] -
xx [ 28 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 19 , xx + 0 , xx + 3 )
; state [ 86 ] = sm_core_canonicalAngle ( atan2 ( pm_math_Vector3_dot_ra ( xx
+ 13 , xx + 9 ) , pm_math_Vector3_dot_ra ( xx + 13 , xx + 16 ) ) ) ; state [
87 ] = 7.372473615415413e-3 * xx [ 5 ] ; return NULL ; } static PmfMessageId
initializeTrackedAngleState_8 ( const RuntimeDerivedValuesBundle * rtdv ,
const int * modeVector , const double * motionData , double * state ,
NeuDiagnosticManager * neDiagMgr ) { const double * rtdvd = rtdv -> mDoubles
. mValues ; const int * rtdvi = rtdv -> mInts . mValues ; double xx [ 29 ] ;
( void ) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ; ( void ) neDiagMgr ;
xx [ 0 ] = motionData [ 134 ] ; xx [ 1 ] = motionData [ 135 ] ; xx [ 2 ] =
motionData [ 136 ] ; xx [ 3 ] = 0.452725 ; xx [ 4 ] = 1.405725 ; xx [ 5 ] =
xx [ 4 ] * motionData [ 136 ] + xx [ 3 ] * motionData [ 134 ] ; xx [ 6 ] = xx
[ 4 ] * motionData [ 135 ] ; xx [ 7 ] = - ( xx [ 3 ] * motionData [ 135 ] ) ;
xx [ 8 ] = xx [ 5 ] ; xx [ 9 ] = - xx [ 6 ] ; pm_math_Vector3_cross_ra ( xx +
0 , xx + 7 , xx + 10 ) ; xx [ 0 ] = 2.0 ; xx [ 1 ] = 0.01 ; xx [ 2 ] = xx [ 1
] * motionData [ 142 ] ; xx [ 7 ] = xx [ 1 ] * motionData [ 141 ] ; xx [ 13 ]
= ( xx [ 10 ] - xx [ 3 ] * motionData [ 133 ] * motionData [ 135 ] ) * xx [ 0
] + motionData [ 137 ] + xx [ 4 ] - ( motionData [ 144 ] - ( xx [ 2 ] *
motionData [ 140 ] + xx [ 7 ] * motionData [ 143 ] ) * xx [ 0 ] ) ; xx [ 14 ]
= ( xx [ 5 ] * motionData [ 133 ] + xx [ 11 ] ) * xx [ 0 ] + motionData [ 138
] - ( xx [ 0 ] * ( xx [ 7 ] * motionData [ 140 ] - xx [ 2 ] * motionData [
143 ] ) + motionData [ 145 ] ) ; xx [ 15 ] = xx [ 0 ] * ( xx [ 12 ] - xx [ 6
] * motionData [ 133 ] ) + motionData [ 139 ] - xx [ 3 ] - ( motionData [ 146
] + ( xx [ 7 ] * motionData [ 141 ] + xx [ 2 ] * motionData [ 142 ] ) * xx [
0 ] - xx [ 1 ] ) ; xx [ 1 ] = 0.7071067811865476 ; xx [ 2 ] = xx [ 1 ] *
motionData [ 133 ] ; xx [ 3 ] = xx [ 1 ] * motionData [ 134 ] ; xx [ 4 ] = xx
[ 2 ] - xx [ 3 ] ; xx [ 5 ] = xx [ 1 ] * motionData [ 136 ] ; xx [ 6 ] = xx [
1 ] * motionData [ 135 ] ; xx [ 1 ] = xx [ 5 ] - xx [ 6 ] ; xx [ 7 ] = xx [ 4
] * xx [ 1 ] ; xx [ 8 ] = xx [ 2 ] + xx [ 3 ] ; xx [ 2 ] = xx [ 5 ] + xx [ 6
] ; xx [ 3 ] = xx [ 8 ] * xx [ 2 ] ; xx [ 5 ] = 1.0 ; xx [ 6 ] = xx [ 2 ] *
xx [ 2 ] ; xx [ 9 ] = xx [ 0 ] * ( xx [ 7 ] - xx [ 3 ] ) ; xx [ 10 ] = xx [ 5
] - ( xx [ 6 ] + xx [ 4 ] * xx [ 4 ] ) * xx [ 0 ] ; xx [ 11 ] = - ( ( xx [ 4
] * xx [ 8 ] + xx [ 1 ] * xx [ 2 ] ) * xx [ 0 ] ) ; xx [ 16 ] = xx [ 5 ] - (
xx [ 1 ] * xx [ 1 ] + xx [ 6 ] ) * xx [ 0 ] ; xx [ 17 ] = ( xx [ 3 ] + xx [ 7
] ) * xx [ 0 ] ; xx [ 18 ] = xx [ 0 ] * ( xx [ 1 ] * xx [ 8 ] - xx [ 4 ] * xx
[ 2 ] ) ; xx [ 19 ] = - xx [ 8 ] ; xx [ 20 ] = xx [ 4 ] ; xx [ 21 ] = xx [ 1
] ; xx [ 22 ] = - xx [ 2 ] ; xx [ 0 ] = motionData [ 140 ] ; xx [ 1 ] =
motionData [ 141 ] ; xx [ 2 ] = motionData [ 142 ] ; xx [ 3 ] = motionData [
143 ] ; xx [ 4 ] = motionData [ 435 ] ; xx [ 5 ] = motionData [ 436 ] ; xx [
6 ] = motionData [ 437 ] ; pm_math_Quaternion_xform_ra ( xx + 0 , xx + 4 , xx
+ 23 ) ; xx [ 0 ] = motionData [ 133 ] ; xx [ 1 ] = motionData [ 134 ] ; xx [
2 ] = motionData [ 135 ] ; xx [ 3 ] = motionData [ 136 ] ; xx [ 4 ] =
motionData [ 429 ] ; xx [ 5 ] = motionData [ 430 ] ; xx [ 6 ] = motionData [
431 ] ; pm_math_Quaternion_xform_ra ( xx + 0 , xx + 4 , xx + 26 ) ; xx [ 0 ]
= xx [ 23 ] - xx [ 26 ] ; xx [ 1 ] = xx [ 24 ] - xx [ 27 ] ; xx [ 2 ] = xx [
25 ] - xx [ 28 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 19 , xx + 0 , xx
+ 3 ) ; state [ 88 ] = sm_core_canonicalAngle ( atan2 (
pm_math_Vector3_dot_ra ( xx + 13 , xx + 9 ) , pm_math_Vector3_dot_ra ( xx +
13 , xx + 16 ) ) ) ; state [ 89 ] = 7.372473615415413e-3 * xx [ 5 ] ; return
NULL ; } void triped_a151ee3d_1_initializeTrackedAngleState ( const void *
mech , const RuntimeDerivedValuesBundle * rtdv , const int * modeVector ,
const double * motionData , double * state , void * neDiagMgr0 ) {
NeuDiagnosticManager * neDiagMgr = ( NeuDiagnosticManager * ) neDiagMgr0 ; (
void ) mech ; initializeTrackedAngleState_6 ( rtdv , modeVector , motionData
, state , neDiagMgr ) ; initializeTrackedAngleState_7 ( rtdv , modeVector ,
motionData , state , neDiagMgr ) ; initializeTrackedAngleState_8 ( rtdv ,
modeVector , motionData , state , neDiagMgr ) ; } void
triped_a151ee3d_1_computeDiscreteState ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , double * state ) { const double * rtdvd =
rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
double xx [ 41 ] ; ( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; xx [ 0 ]
= 2.0 ; xx [ 1 ] = 0.5 ; xx [ 2 ] = xx [ 1 ] * state [ 6 ] ; xx [ 3 ] = cos (
xx [ 2 ] ) ; xx [ 4 ] = sin ( xx [ 2 ] ) ; xx [ 2 ] = 0.4527250000000002 * xx
[ 4 ] ; xx [ 5 ] = 1.405725 ; xx [ 6 ] = xx [ 5 ] * xx [ 4 ] ; xx [ 7 ] = xx
[ 0 ] * ( xx [ 3 ] * xx [ 2 ] + xx [ 6 ] * xx [ 4 ] ) ; xx [ 8 ] = 1.5457 ;
xx [ 9 ] = 0.01 ; xx [ 10 ] = 0.7071067811865476 ; xx [ 11 ] = xx [ 1 ] *
state [ 8 ] ; xx [ 12 ] = xx [ 10 ] * cos ( xx [ 11 ] ) ; xx [ 13 ] = xx [ 9
] * xx [ 12 ] ; xx [ 14 ] = xx [ 10 ] * sin ( xx [ 11 ] ) ; xx [ 11 ] = xx [
9 ] * xx [ 14 ] ; xx [ 15 ] = 9.300000000000017e-3 ; xx [ 16 ] =
9.999999999999957e-3 ; xx [ 17 ] = xx [ 13 ] * xx [ 12 ] ; xx [ 18 ] = xx [
11 ] * xx [ 14 ] ; xx [ 19 ] = ( xx [ 3 ] * xx [ 6 ] - xx [ 2 ] * xx [ 4 ] )
* xx [ 0 ] ; xx [ 2 ] = 0.04550000000000132 ; xx [ 3 ] = 0.0555 ; xx [ 20 ] =
xx [ 7 ] - xx [ 7 ] + xx [ 8 ] - ( xx [ 0 ] * ( xx [ 13 ] * xx [ 14 ] - xx [
11 ] * xx [ 12 ] ) - xx [ 15 ] ) ; xx [ 21 ] = - ( xx [ 16 ] - ( xx [ 17 ] +
xx [ 18 ] ) * xx [ 0 ] ) ; xx [ 22 ] = xx [ 19 ] - xx [ 19 ] - xx [ 2 ] - ( (
xx [ 17 ] + xx [ 18 ] ) * xx [ 0 ] - xx [ 3 ] ) ; xx [ 4 ] = xx [ 12 ] * xx [
14 ] ; xx [ 6 ] = 1.0 ; xx [ 7 ] = xx [ 14 ] * xx [ 14 ] ; xx [ 11 ] = xx [
12 ] * xx [ 12 ] ; xx [ 12 ] = - ( ( xx [ 4 ] + xx [ 4 ] ) * xx [ 0 ] ) ; xx
[ 13 ] = xx [ 6 ] - ( xx [ 7 ] + xx [ 11 ] ) * xx [ 0 ] ; xx [ 14 ] = xx [ 0
] * ( xx [ 7 ] - xx [ 11 ] ) ; xx [ 17 ] = xx [ 6 ] - ( xx [ 7 ] + xx [ 7 ] )
* xx [ 0 ] ; xx [ 18 ] = xx [ 0 ] * ( xx [ 4 ] - xx [ 4 ] ) ; xx [ 19 ] = - (
( xx [ 4 ] + xx [ 4 ] ) * xx [ 0 ] ) ; xx [ 4 ] = 7.427230677621783e-3 ; xx [
7 ] = xx [ 1 ] * state [ 34 ] ; xx [ 11 ] = cos ( xx [ 7 ] ) ; xx [ 23 ] =
0.452725 ; xx [ 24 ] = sin ( xx [ 7 ] ) ; xx [ 7 ] = xx [ 23 ] * xx [ 24 ] ;
xx [ 25 ] = xx [ 5 ] * xx [ 24 ] ; xx [ 26 ] = xx [ 0 ] * ( xx [ 11 ] * xx [
7 ] + xx [ 25 ] * xx [ 24 ] ) ; xx [ 27 ] = xx [ 1 ] * state [ 36 ] ; xx [ 28
] = xx [ 10 ] * cos ( xx [ 27 ] ) ; xx [ 29 ] = xx [ 9 ] * xx [ 28 ] ; xx [
30 ] = xx [ 10 ] * sin ( xx [ 27 ] ) ; xx [ 27 ] = xx [ 9 ] * xx [ 30 ] ; xx
[ 31 ] = xx [ 29 ] * xx [ 28 ] ; xx [ 32 ] = xx [ 27 ] * xx [ 30 ] ; xx [ 33
] = ( xx [ 11 ] * xx [ 25 ] - xx [ 7 ] * xx [ 24 ] ) * xx [ 0 ] ; xx [ 34 ] =
xx [ 26 ] - xx [ 26 ] + xx [ 8 ] - ( xx [ 0 ] * ( xx [ 29 ] * xx [ 30 ] - xx
[ 27 ] * xx [ 28 ] ) - xx [ 15 ] ) ; xx [ 35 ] = - ( xx [ 16 ] - ( xx [ 31 ]
+ xx [ 32 ] ) * xx [ 0 ] ) ; xx [ 36 ] = xx [ 33 ] - xx [ 33 ] - xx [ 2 ] - (
( xx [ 31 ] + xx [ 32 ] ) * xx [ 0 ] - xx [ 3 ] ) ; xx [ 7 ] = xx [ 28 ] * xx
[ 30 ] ; xx [ 11 ] = xx [ 30 ] * xx [ 30 ] ; xx [ 24 ] = xx [ 28 ] * xx [ 28
] ; xx [ 25 ] = - ( ( xx [ 7 ] + xx [ 7 ] ) * xx [ 0 ] ) ; xx [ 26 ] = xx [ 6
] - ( xx [ 11 ] + xx [ 24 ] ) * xx [ 0 ] ; xx [ 27 ] = xx [ 0 ] * ( xx [ 11 ]
- xx [ 24 ] ) ; xx [ 28 ] = xx [ 6 ] - ( xx [ 11 ] + xx [ 11 ] ) * xx [ 0 ] ;
xx [ 29 ] = xx [ 0 ] * ( xx [ 7 ] - xx [ 7 ] ) ; xx [ 30 ] = - ( ( xx [ 7 ] +
xx [ 7 ] ) * xx [ 0 ] ) ; xx [ 7 ] = xx [ 1 ] * state [ 62 ] ; xx [ 11 ] =
cos ( xx [ 7 ] ) ; xx [ 24 ] = sin ( xx [ 7 ] ) ; xx [ 7 ] = xx [ 23 ] * xx [
24 ] ; xx [ 23 ] = xx [ 5 ] * xx [ 24 ] ; xx [ 5 ] = xx [ 0 ] * ( xx [ 11 ] *
xx [ 7 ] + xx [ 23 ] * xx [ 24 ] ) ; xx [ 31 ] = xx [ 1 ] * state [ 64 ] ; xx
[ 1 ] = xx [ 10 ] * cos ( xx [ 31 ] ) ; xx [ 32 ] = xx [ 9 ] * xx [ 1 ] ; xx
[ 33 ] = xx [ 10 ] * sin ( xx [ 31 ] ) ; xx [ 10 ] = xx [ 9 ] * xx [ 33 ] ;
xx [ 9 ] = xx [ 32 ] * xx [ 1 ] ; xx [ 31 ] = xx [ 10 ] * xx [ 33 ] ; xx [ 37
] = ( xx [ 11 ] * xx [ 23 ] - xx [ 7 ] * xx [ 24 ] ) * xx [ 0 ] ; xx [ 38 ] =
xx [ 5 ] - xx [ 5 ] + xx [ 8 ] - ( xx [ 0 ] * ( xx [ 32 ] * xx [ 33 ] - xx [
10 ] * xx [ 1 ] ) - xx [ 15 ] ) ; xx [ 39 ] = - ( xx [ 16 ] - ( xx [ 9 ] + xx
[ 31 ] ) * xx [ 0 ] ) ; xx [ 40 ] = xx [ 37 ] - xx [ 37 ] - xx [ 2 ] - ( ( xx
[ 9 ] + xx [ 31 ] ) * xx [ 0 ] - xx [ 3 ] ) ; xx [ 2 ] = xx [ 1 ] * xx [ 33 ]
; xx [ 3 ] = xx [ 33 ] * xx [ 33 ] ; xx [ 5 ] = xx [ 1 ] * xx [ 1 ] ; xx [ 7
] = - ( ( xx [ 2 ] + xx [ 2 ] ) * xx [ 0 ] ) ; xx [ 8 ] = xx [ 6 ] - ( xx [ 3
] + xx [ 5 ] ) * xx [ 0 ] ; xx [ 9 ] = xx [ 0 ] * ( xx [ 3 ] - xx [ 5 ] ) ;
xx [ 31 ] = xx [ 6 ] - ( xx [ 3 ] + xx [ 3 ] ) * xx [ 0 ] ; xx [ 32 ] = xx [
0 ] * ( xx [ 2 ] - xx [ 2 ] ) ; xx [ 33 ] = - ( ( xx [ 2 ] + xx [ 2 ] ) * xx
[ 0 ] ) ; state [ 90 ] = state [ 84 ] + atan2 ( pm_math_Vector3_dot_ra ( xx +
20 , xx + 12 ) , pm_math_Vector3_dot_ra ( xx + 20 , xx + 17 ) ) * xx [ 4 ] ;
state [ 91 ] = state [ 86 ] + atan2 ( pm_math_Vector3_dot_ra ( xx + 34 , xx +
25 ) , pm_math_Vector3_dot_ra ( xx + 34 , xx + 28 ) ) * xx [ 4 ] ; state [ 92
] = state [ 88 ] + atan2 ( pm_math_Vector3_dot_ra ( xx + 38 , xx + 7 ) ,
pm_math_Vector3_dot_ra ( xx + 38 , xx + 31 ) ) * xx [ 4 ] ; } void
triped_a151ee3d_1_adjustPosition ( const void * mech , const double *
dofDeltas , double * state ) { double xx [ 37 ] ; ( void ) mech ; xx [ 0 ] =
state [ 12 ] ; xx [ 1 ] = state [ 13 ] ; xx [ 2 ] = state [ 14 ] ; xx [ 3 ] =
state [ 15 ] ; xx [ 4 ] = dofDeltas [ 6 ] ; xx [ 5 ] = dofDeltas [ 7 ] ; xx [
6 ] = dofDeltas [ 8 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 0 , xx + 4 ,
xx + 7 ) ; xx [ 0 ] = state [ 12 ] + xx [ 7 ] ; xx [ 1 ] = state [ 13 ] + xx
[ 8 ] ; xx [ 2 ] = state [ 14 ] + xx [ 9 ] ; xx [ 3 ] = state [ 15 ] + xx [
10 ] ; xx [ 4 ] = 1.0e-64 ; xx [ 5 ] = sqrt ( xx [ 0 ] * xx [ 0 ] + xx [ 1 ]
* xx [ 1 ] + xx [ 2 ] * xx [ 2 ] + xx [ 3 ] * xx [ 3 ] ) ; if ( xx [ 4 ] > xx
[ 5 ] ) xx [ 5 ] = xx [ 4 ] ; xx [ 6 ] = state [ 21 ] ; xx [ 7 ] = state [ 22
] ; xx [ 8 ] = state [ 23 ] ; xx [ 9 ] = state [ 24 ] ; xx [ 10 ] = dofDeltas
[ 10 ] ; xx [ 11 ] = dofDeltas [ 11 ] ; xx [ 12 ] = dofDeltas [ 12 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 6 , xx + 10 , xx + 13 ) ; xx [ 6 ] =
state [ 21 ] + xx [ 13 ] ; xx [ 7 ] = state [ 22 ] + xx [ 14 ] ; xx [ 8 ] =
state [ 23 ] + xx [ 15 ] ; xx [ 9 ] = state [ 24 ] + xx [ 16 ] ; xx [ 10 ] =
sqrt ( xx [ 6 ] * xx [ 6 ] + xx [ 7 ] * xx [ 7 ] + xx [ 8 ] * xx [ 8 ] + xx [
9 ] * xx [ 9 ] ) ; if ( xx [ 4 ] > xx [ 10 ] ) xx [ 10 ] = xx [ 4 ] ; xx [ 11
] = state [ 40 ] ; xx [ 12 ] = state [ 41 ] ; xx [ 13 ] = state [ 42 ] ; xx [
14 ] = state [ 43 ] ; xx [ 15 ] = dofDeltas [ 19 ] ; xx [ 16 ] = dofDeltas [
20 ] ; xx [ 17 ] = dofDeltas [ 21 ] ; pm_math_Quaternion_compDeriv_ra ( xx +
11 , xx + 15 , xx + 18 ) ; xx [ 11 ] = state [ 40 ] + xx [ 18 ] ; xx [ 12 ] =
state [ 41 ] + xx [ 19 ] ; xx [ 13 ] = state [ 42 ] + xx [ 20 ] ; xx [ 14 ] =
state [ 43 ] + xx [ 21 ] ; xx [ 15 ] = sqrt ( xx [ 11 ] * xx [ 11 ] + xx [ 12
] * xx [ 12 ] + xx [ 13 ] * xx [ 13 ] + xx [ 14 ] * xx [ 14 ] ) ; if ( xx [ 4
] > xx [ 15 ] ) xx [ 15 ] = xx [ 4 ] ; xx [ 16 ] = state [ 49 ] ; xx [ 17 ] =
state [ 50 ] ; xx [ 18 ] = state [ 51 ] ; xx [ 19 ] = state [ 52 ] ; xx [ 20
] = dofDeltas [ 23 ] ; xx [ 21 ] = dofDeltas [ 24 ] ; xx [ 22 ] = dofDeltas [
25 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 16 , xx + 20 , xx + 23 ) ; xx [
16 ] = state [ 49 ] + xx [ 23 ] ; xx [ 17 ] = state [ 50 ] + xx [ 24 ] ; xx [
18 ] = state [ 51 ] + xx [ 25 ] ; xx [ 19 ] = state [ 52 ] + xx [ 26 ] ; xx [
20 ] = sqrt ( xx [ 16 ] * xx [ 16 ] + xx [ 17 ] * xx [ 17 ] + xx [ 18 ] * xx
[ 18 ] + xx [ 19 ] * xx [ 19 ] ) ; if ( xx [ 4 ] > xx [ 20 ] ) xx [ 20 ] = xx
[ 4 ] ; xx [ 21 ] = state [ 68 ] ; xx [ 22 ] = state [ 69 ] ; xx [ 23 ] =
state [ 70 ] ; xx [ 24 ] = state [ 71 ] ; xx [ 25 ] = dofDeltas [ 32 ] ; xx [
26 ] = dofDeltas [ 33 ] ; xx [ 27 ] = dofDeltas [ 34 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 21 , xx + 25 , xx + 28 ) ; xx [ 21 ] =
state [ 68 ] + xx [ 28 ] ; xx [ 22 ] = state [ 69 ] + xx [ 29 ] ; xx [ 23 ] =
state [ 70 ] + xx [ 30 ] ; xx [ 24 ] = state [ 71 ] + xx [ 31 ] ; xx [ 25 ] =
sqrt ( xx [ 21 ] * xx [ 21 ] + xx [ 22 ] * xx [ 22 ] + xx [ 23 ] * xx [ 23 ]
+ xx [ 24 ] * xx [ 24 ] ) ; if ( xx [ 4 ] > xx [ 25 ] ) xx [ 25 ] = xx [ 4 ]
; xx [ 26 ] = state [ 77 ] ; xx [ 27 ] = state [ 78 ] ; xx [ 28 ] = state [
79 ] ; xx [ 29 ] = state [ 80 ] ; xx [ 30 ] = dofDeltas [ 36 ] ; xx [ 31 ] =
dofDeltas [ 37 ] ; xx [ 32 ] = dofDeltas [ 38 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 26 , xx + 30 , xx + 33 ) ; xx [ 26 ] =
state [ 77 ] + xx [ 33 ] ; xx [ 27 ] = state [ 78 ] + xx [ 34 ] ; xx [ 28 ] =
state [ 79 ] + xx [ 35 ] ; xx [ 29 ] = state [ 80 ] + xx [ 36 ] ; xx [ 30 ] =
sqrt ( xx [ 26 ] * xx [ 26 ] + xx [ 27 ] * xx [ 27 ] + xx [ 28 ] * xx [ 28 ]
+ xx [ 29 ] * xx [ 29 ] ) ; if ( xx [ 4 ] > xx [ 30 ] ) xx [ 30 ] = xx [ 4 ]
; state [ 0 ] = state [ 0 ] + dofDeltas [ 0 ] ; state [ 1 ] = state [ 1 ] +
dofDeltas [ 1 ] ; state [ 2 ] = state [ 2 ] + dofDeltas [ 2 ] ; state [ 6 ] =
state [ 6 ] + dofDeltas [ 3 ] ; state [ 8 ] = state [ 8 ] + dofDeltas [ 4 ] ;
state [ 10 ] = state [ 10 ] + dofDeltas [ 5 ] ; state [ 12 ] = xx [ 0 ] / xx
[ 5 ] ; state [ 13 ] = xx [ 1 ] / xx [ 5 ] ; state [ 14 ] = xx [ 2 ] / xx [ 5
] ; state [ 15 ] = xx [ 3 ] / xx [ 5 ] ; state [ 19 ] = state [ 19 ] +
dofDeltas [ 9 ] ; state [ 21 ] = xx [ 6 ] / xx [ 10 ] ; state [ 22 ] = xx [ 7
] / xx [ 10 ] ; state [ 23 ] = xx [ 8 ] / xx [ 10 ] ; state [ 24 ] = xx [ 9 ]
/ xx [ 10 ] ; state [ 28 ] = state [ 28 ] + dofDeltas [ 13 ] ; state [ 29 ] =
state [ 29 ] + dofDeltas [ 14 ] ; state [ 30 ] = state [ 30 ] + dofDeltas [
15 ] ; state [ 34 ] = state [ 34 ] + dofDeltas [ 16 ] ; state [ 36 ] = state
[ 36 ] + dofDeltas [ 17 ] ; state [ 38 ] = state [ 38 ] + dofDeltas [ 18 ] ;
state [ 40 ] = xx [ 11 ] / xx [ 15 ] ; state [ 41 ] = xx [ 12 ] / xx [ 15 ] ;
state [ 42 ] = xx [ 13 ] / xx [ 15 ] ; state [ 43 ] = xx [ 14 ] / xx [ 15 ] ;
state [ 47 ] = state [ 47 ] + dofDeltas [ 22 ] ; state [ 49 ] = xx [ 16 ] /
xx [ 20 ] ; state [ 50 ] = xx [ 17 ] / xx [ 20 ] ; state [ 51 ] = xx [ 18 ] /
xx [ 20 ] ; state [ 52 ] = xx [ 19 ] / xx [ 20 ] ; state [ 56 ] = state [ 56
] + dofDeltas [ 26 ] ; state [ 57 ] = state [ 57 ] + dofDeltas [ 27 ] ; state
[ 58 ] = state [ 58 ] + dofDeltas [ 28 ] ; state [ 62 ] = state [ 62 ] +
dofDeltas [ 29 ] ; state [ 64 ] = state [ 64 ] + dofDeltas [ 30 ] ; state [
66 ] = state [ 66 ] + dofDeltas [ 31 ] ; state [ 68 ] = xx [ 21 ] / xx [ 25 ]
; state [ 69 ] = xx [ 22 ] / xx [ 25 ] ; state [ 70 ] = xx [ 23 ] / xx [ 25 ]
; state [ 71 ] = xx [ 24 ] / xx [ 25 ] ; state [ 75 ] = state [ 75 ] +
dofDeltas [ 35 ] ; state [ 77 ] = xx [ 26 ] / xx [ 30 ] ; state [ 78 ] = xx [
27 ] / xx [ 30 ] ; state [ 79 ] = xx [ 28 ] / xx [ 30 ] ; state [ 80 ] = xx [
29 ] / xx [ 30 ] ; } static void perturbAsmJointPrimitiveState_2_0 ( double
mag , double * state ) { state [ 0 ] = state [ 0 ] + mag ; } static void
perturbAsmJointPrimitiveState_2_0v ( double mag , double * state ) { state [
0 ] = state [ 0 ] + mag ; state [ 3 ] = state [ 3 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_2_1 ( double mag , double * state ) {
state [ 1 ] = state [ 1 ] + mag ; } static void
perturbAsmJointPrimitiveState_2_1v ( double mag , double * state ) { state [
1 ] = state [ 1 ] + mag ; state [ 4 ] = state [ 4 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_2_2 ( double mag , double * state ) {
state [ 2 ] = state [ 2 ] + mag ; } static void
perturbAsmJointPrimitiveState_2_2v ( double mag , double * state ) { state [
2 ] = state [ 2 ] + mag ; state [ 5 ] = state [ 5 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_3_0 ( double mag , double * state ) {
state [ 6 ] = state [ 6 ] + mag ; } static void
perturbAsmJointPrimitiveState_3_0v ( double mag , double * state ) { state [
6 ] = state [ 6 ] + mag ; state [ 7 ] = state [ 7 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_4_0 ( double mag , double * state ) {
state [ 8 ] = state [ 8 ] + mag ; } static void
perturbAsmJointPrimitiveState_4_0v ( double mag , double * state ) { state [
8 ] = state [ 8 ] + mag ; state [ 9 ] = state [ 9 ] - 0.875 * mag ; } static
void perturbAsmJointPrimitiveState_5_0 ( double mag , double * state ) {
state [ 10 ] = state [ 10 ] + mag ; } static void
perturbAsmJointPrimitiveState_5_0v ( double mag , double * state ) { state [
10 ] = state [ 10 ] + mag ; state [ 11 ] = state [ 11 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_6_0 ( double mag , double * state )
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
perturbAsmJointPrimitiveState_6_0v ( double mag , double * state ) { double
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
static void perturbAsmJointPrimitiveState_7_0 ( double mag , double * state )
{ state [ 19 ] = state [ 19 ] + mag ; } static void
perturbAsmJointPrimitiveState_7_0v ( double mag , double * state ) { state [
19 ] = state [ 19 ] + mag ; state [ 20 ] = state [ 20 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_8_0 ( double mag , double * state )
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
perturbAsmJointPrimitiveState_8_0v ( double mag , double * state ) { double
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
static void perturbAsmJointPrimitiveState_10_0 ( double mag , double * state
) { state [ 28 ] = state [ 28 ] + mag ; } static void
perturbAsmJointPrimitiveState_10_0v ( double mag , double * state ) { state [
28 ] = state [ 28 ] + mag ; state [ 31 ] = state [ 31 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_10_1 ( double mag , double * state
) { state [ 29 ] = state [ 29 ] + mag ; } static void
perturbAsmJointPrimitiveState_10_1v ( double mag , double * state ) { state [
29 ] = state [ 29 ] + mag ; state [ 32 ] = state [ 32 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_10_2 ( double mag , double * state
) { state [ 30 ] = state [ 30 ] + mag ; } static void
perturbAsmJointPrimitiveState_10_2v ( double mag , double * state ) { state [
30 ] = state [ 30 ] + mag ; state [ 33 ] = state [ 33 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_11_0 ( double mag , double * state
) { state [ 34 ] = state [ 34 ] + mag ; } static void
perturbAsmJointPrimitiveState_11_0v ( double mag , double * state ) { state [
34 ] = state [ 34 ] + mag ; state [ 35 ] = state [ 35 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_12_0 ( double mag , double * state
) { state [ 36 ] = state [ 36 ] + mag ; } static void
perturbAsmJointPrimitiveState_12_0v ( double mag , double * state ) { state [
36 ] = state [ 36 ] + mag ; state [ 37 ] = state [ 37 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_13_0 ( double mag , double * state
) { state [ 38 ] = state [ 38 ] + mag ; } static void
perturbAsmJointPrimitiveState_13_0v ( double mag , double * state ) { state [
38 ] = state [ 38 ] + mag ; state [ 39 ] = state [ 39 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_14_0 ( double mag , double * state
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
perturbAsmJointPrimitiveState_14_0v ( double mag , double * state ) { double
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
static void perturbAsmJointPrimitiveState_15_0 ( double mag , double * state
) { state [ 47 ] = state [ 47 ] + mag ; } static void
perturbAsmJointPrimitiveState_15_0v ( double mag , double * state ) { state [
47 ] = state [ 47 ] + mag ; state [ 48 ] = state [ 48 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_16_0 ( double mag , double * state
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
perturbAsmJointPrimitiveState_16_0v ( double mag , double * state ) { double
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
static void perturbAsmJointPrimitiveState_18_0 ( double mag , double * state
) { state [ 56 ] = state [ 56 ] + mag ; } static void
perturbAsmJointPrimitiveState_18_0v ( double mag , double * state ) { state [
56 ] = state [ 56 ] + mag ; state [ 59 ] = state [ 59 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_18_1 ( double mag , double * state
) { state [ 57 ] = state [ 57 ] + mag ; } static void
perturbAsmJointPrimitiveState_18_1v ( double mag , double * state ) { state [
57 ] = state [ 57 ] + mag ; state [ 60 ] = state [ 60 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_18_2 ( double mag , double * state
) { state [ 58 ] = state [ 58 ] + mag ; } static void
perturbAsmJointPrimitiveState_18_2v ( double mag , double * state ) { state [
58 ] = state [ 58 ] + mag ; state [ 61 ] = state [ 61 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_19_0 ( double mag , double * state
) { state [ 62 ] = state [ 62 ] + mag ; } static void
perturbAsmJointPrimitiveState_19_0v ( double mag , double * state ) { state [
62 ] = state [ 62 ] + mag ; state [ 63 ] = state [ 63 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_20_0 ( double mag , double * state
) { state [ 64 ] = state [ 64 ] + mag ; } static void
perturbAsmJointPrimitiveState_20_0v ( double mag , double * state ) { state [
64 ] = state [ 64 ] + mag ; state [ 65 ] = state [ 65 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_21_0 ( double mag , double * state
) { state [ 66 ] = state [ 66 ] + mag ; } static void
perturbAsmJointPrimitiveState_21_0v ( double mag , double * state ) { state [
66 ] = state [ 66 ] + mag ; state [ 67 ] = state [ 67 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_22_0 ( double mag , double * state
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
perturbAsmJointPrimitiveState_22_0v ( double mag , double * state ) { double
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
static void perturbAsmJointPrimitiveState_23_0 ( double mag , double * state
) { state [ 75 ] = state [ 75 ] + mag ; } static void
perturbAsmJointPrimitiveState_23_0v ( double mag , double * state ) { state [
75 ] = state [ 75 ] + mag ; state [ 76 ] = state [ 76 ] - 0.875 * mag ; }
static void perturbAsmJointPrimitiveState_24_0 ( double mag , double * state
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
perturbAsmJointPrimitiveState_24_0v ( double mag , double * state ) { double
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
void triped_a151ee3d_1_perturbAsmJointPrimitiveState ( const void * mech ,
size_t stageIdx , size_t primIdx , double mag , boolean_T doPerturbVelocity ,
double * state ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; (
void ) mag ; ( void ) doPerturbVelocity ; ( void ) state ; switch ( (
stageIdx * 6 + primIdx ) * 2 + ( doPerturbVelocity ? 1 : 0 ) ) { case 24 :
perturbAsmJointPrimitiveState_2_0 ( mag , state ) ; break ; case 25 :
perturbAsmJointPrimitiveState_2_0v ( mag , state ) ; break ; case 26 :
perturbAsmJointPrimitiveState_2_1 ( mag , state ) ; break ; case 27 :
perturbAsmJointPrimitiveState_2_1v ( mag , state ) ; break ; case 28 :
perturbAsmJointPrimitiveState_2_2 ( mag , state ) ; break ; case 29 :
perturbAsmJointPrimitiveState_2_2v ( mag , state ) ; break ; case 36 :
perturbAsmJointPrimitiveState_3_0 ( mag , state ) ; break ; case 37 :
perturbAsmJointPrimitiveState_3_0v ( mag , state ) ; break ; case 48 :
perturbAsmJointPrimitiveState_4_0 ( mag , state ) ; break ; case 49 :
perturbAsmJointPrimitiveState_4_0v ( mag , state ) ; break ; case 60 :
perturbAsmJointPrimitiveState_5_0 ( mag , state ) ; break ; case 61 :
perturbAsmJointPrimitiveState_5_0v ( mag , state ) ; break ; case 72 :
perturbAsmJointPrimitiveState_6_0 ( mag , state ) ; break ; case 73 :
perturbAsmJointPrimitiveState_6_0v ( mag , state ) ; break ; case 84 :
perturbAsmJointPrimitiveState_7_0 ( mag , state ) ; break ; case 85 :
perturbAsmJointPrimitiveState_7_0v ( mag , state ) ; break ; case 96 :
perturbAsmJointPrimitiveState_8_0 ( mag , state ) ; break ; case 97 :
perturbAsmJointPrimitiveState_8_0v ( mag , state ) ; break ; case 120 :
perturbAsmJointPrimitiveState_10_0 ( mag , state ) ; break ; case 121 :
perturbAsmJointPrimitiveState_10_0v ( mag , state ) ; break ; case 122 :
perturbAsmJointPrimitiveState_10_1 ( mag , state ) ; break ; case 123 :
perturbAsmJointPrimitiveState_10_1v ( mag , state ) ; break ; case 124 :
perturbAsmJointPrimitiveState_10_2 ( mag , state ) ; break ; case 125 :
perturbAsmJointPrimitiveState_10_2v ( mag , state ) ; break ; case 132 :
perturbAsmJointPrimitiveState_11_0 ( mag , state ) ; break ; case 133 :
perturbAsmJointPrimitiveState_11_0v ( mag , state ) ; break ; case 144 :
perturbAsmJointPrimitiveState_12_0 ( mag , state ) ; break ; case 145 :
perturbAsmJointPrimitiveState_12_0v ( mag , state ) ; break ; case 156 :
perturbAsmJointPrimitiveState_13_0 ( mag , state ) ; break ; case 157 :
perturbAsmJointPrimitiveState_13_0v ( mag , state ) ; break ; case 168 :
perturbAsmJointPrimitiveState_14_0 ( mag , state ) ; break ; case 169 :
perturbAsmJointPrimitiveState_14_0v ( mag , state ) ; break ; case 180 :
perturbAsmJointPrimitiveState_15_0 ( mag , state ) ; break ; case 181 :
perturbAsmJointPrimitiveState_15_0v ( mag , state ) ; break ; case 192 :
perturbAsmJointPrimitiveState_16_0 ( mag , state ) ; break ; case 193 :
perturbAsmJointPrimitiveState_16_0v ( mag , state ) ; break ; case 216 :
perturbAsmJointPrimitiveState_18_0 ( mag , state ) ; break ; case 217 :
perturbAsmJointPrimitiveState_18_0v ( mag , state ) ; break ; case 218 :
perturbAsmJointPrimitiveState_18_1 ( mag , state ) ; break ; case 219 :
perturbAsmJointPrimitiveState_18_1v ( mag , state ) ; break ; case 220 :
perturbAsmJointPrimitiveState_18_2 ( mag , state ) ; break ; case 221 :
perturbAsmJointPrimitiveState_18_2v ( mag , state ) ; break ; case 228 :
perturbAsmJointPrimitiveState_19_0 ( mag , state ) ; break ; case 229 :
perturbAsmJointPrimitiveState_19_0v ( mag , state ) ; break ; case 240 :
perturbAsmJointPrimitiveState_20_0 ( mag , state ) ; break ; case 241 :
perturbAsmJointPrimitiveState_20_0v ( mag , state ) ; break ; case 252 :
perturbAsmJointPrimitiveState_21_0 ( mag , state ) ; break ; case 253 :
perturbAsmJointPrimitiveState_21_0v ( mag , state ) ; break ; case 264 :
perturbAsmJointPrimitiveState_22_0 ( mag , state ) ; break ; case 265 :
perturbAsmJointPrimitiveState_22_0v ( mag , state ) ; break ; case 276 :
perturbAsmJointPrimitiveState_23_0 ( mag , state ) ; break ; case 277 :
perturbAsmJointPrimitiveState_23_0v ( mag , state ) ; break ; case 288 :
perturbAsmJointPrimitiveState_24_0 ( mag , state ) ; break ; case 289 :
perturbAsmJointPrimitiveState_24_0v ( mag , state ) ; break ; } } static void
computePosDofBlendMatrix_6_0 ( const double * state , int partialType ,
double * matrix ) { double xx [ 20 ] ; xx [ 0 ] = 0.0 ; xx [ 1 ] = 2.0 ; xx [
2 ] = xx [ 1 ] * ( state [ 13 ] * state [ 14 ] - state [ 12 ] * state [ 15 ]
) ; xx [ 3 ] = xx [ 2 ] * xx [ 2 ] ; xx [ 4 ] = 1.0 ; xx [ 5 ] = ( state [ 12
] * state [ 12 ] + state [ 13 ] * state [ 13 ] ) * xx [ 1 ] - xx [ 4 ] ; xx [
6 ] = xx [ 5 ] * xx [ 5 ] ; xx [ 7 ] = sqrt ( xx [ 3 ] + xx [ 6 ] ) ; xx [ 8
] = xx [ 7 ] == 0.0 ? 0.0 : - xx [ 2 ] / xx [ 7 ] ; xx [ 9 ] = xx [ 6 ] + xx
[ 3 ] ; xx [ 3 ] = sqrt ( xx [ 9 ] ) ; xx [ 6 ] = xx [ 3 ] == 0.0 ? 0.0 : xx
[ 5 ] / xx [ 3 ] ; xx [ 10 ] = 0.0 ; xx [ 11 ] = ( state [ 13 ] * state [ 15
] + state [ 12 ] * state [ 14 ] ) * xx [ 1 ] ; xx [ 1 ] = sqrt ( xx [ 9 ] +
xx [ 11 ] * xx [ 11 ] ) ; xx [ 12 ] = xx [ 1 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [
1 ] ; xx [ 14 ] = xx [ 8 ] ; xx [ 15 ] = xx [ 6 ] ; xx [ 16 ] = xx [ 10 ] ;
xx [ 17 ] = xx [ 8 ] ; xx [ 18 ] = xx [ 8 ] ; xx [ 19 ] = xx [ 12 ] ; xx [ 6
] = xx [ 13 + ( partialType ) ] ; xx [ 8 ] = xx [ 7 ] == 0.0 ? 0.0 : xx [ 5 ]
/ xx [ 7 ] ; xx [ 7 ] = xx [ 3 ] == 0.0 ? 0.0 : xx [ 2 ] / xx [ 3 ] ; xx [ 3
] = xx [ 1 ] == 0.0 ? 0.0 : xx [ 2 ] / xx [ 1 ] ; xx [ 13 ] = xx [ 8 ] ; xx [
14 ] = xx [ 7 ] ; xx [ 15 ] = xx [ 10 ] ; xx [ 16 ] = xx [ 8 ] ; xx [ 17 ] =
xx [ 8 ] ; xx [ 18 ] = xx [ 3 ] ; xx [ 2 ] = xx [ 12 + ( partialType ) ] ; xx
[ 3 ] = xx [ 1 ] == 0.0 ? 0.0 : xx [ 11 ] / xx [ 1 ] ; xx [ 13 ] = xx [ 10 ]
; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 4 ] ; xx [ 16 ] = xx [ 10 ] ; xx [
17 ] = xx [ 10 ] ; xx [ 18 ] = xx [ 3 ] ; xx [ 1 ] = xx [ 12 + ( partialType
) ] ; xx [ 3 ] = xx [ 11 ] * xx [ 5 ] ; xx [ 5 ] = sqrt ( xx [ 9 ] * xx [ 9 ]
+ xx [ 3 ] * xx [ 3 ] ) ; xx [ 7 ] = xx [ 5 ] == 0.0 ? 0.0 : xx [ 9 ] / xx [
5 ] ; xx [ 12 ] = xx [ 10 ] ; xx [ 13 ] = xx [ 10 ] ; xx [ 14 ] = xx [ 10 ] ;
xx [ 15 ] = xx [ 7 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 7
] = xx [ 11 + ( partialType ) ] ; xx [ 12 ] = xx [ 10 ] ; xx [ 13 ] = xx [ 10
] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 10 ] ; xx [ 16 ] = xx [ 10 ] ;
xx [ 17 ] = xx [ 10 ] ; xx [ 8 ] = xx [ 11 + ( partialType ) ] ; xx [ 9 ] =
xx [ 5 ] == 0.0 ? 0.0 : xx [ 3 ] / xx [ 5 ] ; xx [ 12 ] = xx [ 4 ] ; xx [ 13
] = xx [ 4 ] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 9 ] ; xx [ 16 ] = xx
[ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 0 ] = xx [ 11 + ( partialType ) ] ;
matrix [ 0 ] = xx [ 6 ] ; matrix [ 1 ] = xx [ 2 ] ; matrix [ 2 ] = xx [ 1 ] ;
matrix [ 3 ] = xx [ 7 ] ; matrix [ 4 ] = xx [ 8 ] ; matrix [ 5 ] = xx [ 0 ] ;
matrix [ 6 ] = xx [ 8 ] ; matrix [ 7 ] = xx [ 8 ] ; matrix [ 8 ] = xx [ 8 ] ;
} static void computePosDofBlendMatrix_8_0 ( const double * state , int
partialType , double * matrix ) { double xx [ 20 ] ; xx [ 0 ] = 0.0 ; xx [ 1
] = 2.0 ; xx [ 2 ] = xx [ 1 ] * ( state [ 22 ] * state [ 23 ] - state [ 21 ]
* state [ 24 ] ) ; xx [ 3 ] = xx [ 2 ] * xx [ 2 ] ; xx [ 4 ] = 1.0 ; xx [ 5 ]
= ( state [ 21 ] * state [ 21 ] + state [ 22 ] * state [ 22 ] ) * xx [ 1 ] -
xx [ 4 ] ; xx [ 6 ] = xx [ 5 ] * xx [ 5 ] ; xx [ 7 ] = sqrt ( xx [ 3 ] + xx [
6 ] ) ; xx [ 8 ] = xx [ 7 ] == 0.0 ? 0.0 : - xx [ 2 ] / xx [ 7 ] ; xx [ 9 ] =
xx [ 6 ] + xx [ 3 ] ; xx [ 3 ] = sqrt ( xx [ 9 ] ) ; xx [ 6 ] = xx [ 3 ] ==
0.0 ? 0.0 : xx [ 5 ] / xx [ 3 ] ; xx [ 10 ] = 0.0 ; xx [ 11 ] = ( state [ 22
] * state [ 24 ] + state [ 21 ] * state [ 23 ] ) * xx [ 1 ] ; xx [ 1 ] = sqrt
( xx [ 9 ] + xx [ 11 ] * xx [ 11 ] ) ; xx [ 12 ] = xx [ 1 ] == 0.0 ? 0.0 : xx
[ 5 ] / xx [ 1 ] ; xx [ 14 ] = xx [ 8 ] ; xx [ 15 ] = xx [ 6 ] ; xx [ 16 ] =
xx [ 10 ] ; xx [ 17 ] = xx [ 8 ] ; xx [ 18 ] = xx [ 8 ] ; xx [ 19 ] = xx [ 12
] ; xx [ 6 ] = xx [ 13 + ( partialType ) ] ; xx [ 8 ] = xx [ 7 ] == 0.0 ? 0.0
: xx [ 5 ] / xx [ 7 ] ; xx [ 7 ] = xx [ 3 ] == 0.0 ? 0.0 : xx [ 2 ] / xx [ 3
] ; xx [ 3 ] = xx [ 1 ] == 0.0 ? 0.0 : xx [ 2 ] / xx [ 1 ] ; xx [ 13 ] = xx [
8 ] ; xx [ 14 ] = xx [ 7 ] ; xx [ 15 ] = xx [ 10 ] ; xx [ 16 ] = xx [ 8 ] ;
xx [ 17 ] = xx [ 8 ] ; xx [ 18 ] = xx [ 3 ] ; xx [ 2 ] = xx [ 12 + (
partialType ) ] ; xx [ 3 ] = xx [ 1 ] == 0.0 ? 0.0 : xx [ 11 ] / xx [ 1 ] ;
xx [ 13 ] = xx [ 10 ] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 4 ] ; xx [
16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 18 ] = xx [ 3 ] ; xx [ 1 ] =
xx [ 12 + ( partialType ) ] ; xx [ 3 ] = xx [ 11 ] * xx [ 5 ] ; xx [ 5 ] =
sqrt ( xx [ 9 ] * xx [ 9 ] + xx [ 3 ] * xx [ 3 ] ) ; xx [ 7 ] = xx [ 5 ] ==
0.0 ? 0.0 : xx [ 9 ] / xx [ 5 ] ; xx [ 12 ] = xx [ 10 ] ; xx [ 13 ] = xx [ 10
] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 7 ] ; xx [ 16 ] = xx [ 10 ] ; xx
[ 17 ] = xx [ 10 ] ; xx [ 7 ] = xx [ 11 + ( partialType ) ] ; xx [ 12 ] = xx
[ 10 ] ; xx [ 13 ] = xx [ 10 ] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 10
] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 8 ] = xx [ 11 + (
partialType ) ] ; xx [ 9 ] = xx [ 5 ] == 0.0 ? 0.0 : xx [ 3 ] / xx [ 5 ] ; xx
[ 12 ] = xx [ 4 ] ; xx [ 13 ] = xx [ 4 ] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ]
= xx [ 9 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 0 ] = xx [
11 + ( partialType ) ] ; matrix [ 0 ] = xx [ 6 ] ; matrix [ 1 ] = xx [ 2 ] ;
matrix [ 2 ] = xx [ 1 ] ; matrix [ 3 ] = xx [ 7 ] ; matrix [ 4 ] = xx [ 8 ] ;
matrix [ 5 ] = xx [ 0 ] ; matrix [ 6 ] = xx [ 8 ] ; matrix [ 7 ] = xx [ 8 ] ;
matrix [ 8 ] = xx [ 8 ] ; } static void computePosDofBlendMatrix_14_0 ( const
double * state , int partialType , double * matrix ) { double xx [ 20 ] ; xx
[ 0 ] = 0.0 ; xx [ 1 ] = 2.0 ; xx [ 2 ] = xx [ 1 ] * ( state [ 41 ] * state [
42 ] - state [ 40 ] * state [ 43 ] ) ; xx [ 3 ] = xx [ 2 ] * xx [ 2 ] ; xx [
4 ] = 1.0 ; xx [ 5 ] = ( state [ 40 ] * state [ 40 ] + state [ 41 ] * state [
41 ] ) * xx [ 1 ] - xx [ 4 ] ; xx [ 6 ] = xx [ 5 ] * xx [ 5 ] ; xx [ 7 ] =
sqrt ( xx [ 3 ] + xx [ 6 ] ) ; xx [ 8 ] = xx [ 7 ] == 0.0 ? 0.0 : - xx [ 2 ]
/ xx [ 7 ] ; xx [ 9 ] = xx [ 6 ] + xx [ 3 ] ; xx [ 3 ] = sqrt ( xx [ 9 ] ) ;
xx [ 6 ] = xx [ 3 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 3 ] ; xx [ 10 ] = 0.0 ; xx
[ 11 ] = ( state [ 41 ] * state [ 43 ] + state [ 40 ] * state [ 42 ] ) * xx [
1 ] ; xx [ 1 ] = sqrt ( xx [ 9 ] + xx [ 11 ] * xx [ 11 ] ) ; xx [ 12 ] = xx [
1 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 1 ] ; xx [ 14 ] = xx [ 8 ] ; xx [ 15 ] =
xx [ 6 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 8 ] ; xx [ 18 ] = xx [ 8
] ; xx [ 19 ] = xx [ 12 ] ; xx [ 6 ] = xx [ 13 + ( partialType ) ] ; xx [ 8 ]
= xx [ 7 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 7 ] ; xx [ 7 ] = xx [ 3 ] == 0.0 ?
0.0 : xx [ 2 ] / xx [ 3 ] ; xx [ 3 ] = xx [ 1 ] == 0.0 ? 0.0 : xx [ 2 ] / xx
[ 1 ] ; xx [ 13 ] = xx [ 8 ] ; xx [ 14 ] = xx [ 7 ] ; xx [ 15 ] = xx [ 10 ] ;
xx [ 16 ] = xx [ 8 ] ; xx [ 17 ] = xx [ 8 ] ; xx [ 18 ] = xx [ 3 ] ; xx [ 2 ]
= xx [ 12 + ( partialType ) ] ; xx [ 3 ] = xx [ 1 ] == 0.0 ? 0.0 : xx [ 11 ]
/ xx [ 1 ] ; xx [ 13 ] = xx [ 10 ] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [
4 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 18 ] = xx [ 3 ] ;
xx [ 1 ] = xx [ 12 + ( partialType ) ] ; xx [ 3 ] = xx [ 11 ] * xx [ 5 ] ; xx
[ 5 ] = sqrt ( xx [ 9 ] * xx [ 9 ] + xx [ 3 ] * xx [ 3 ] ) ; xx [ 7 ] = xx [
5 ] == 0.0 ? 0.0 : xx [ 9 ] / xx [ 5 ] ; xx [ 12 ] = xx [ 10 ] ; xx [ 13 ] =
xx [ 10 ] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 7 ] ; xx [ 16 ] = xx [
10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 7 ] = xx [ 11 + ( partialType ) ] ; xx [
12 ] = xx [ 10 ] ; xx [ 13 ] = xx [ 10 ] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ]
= xx [ 10 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 8 ] = xx [
11 + ( partialType ) ] ; xx [ 9 ] = xx [ 5 ] == 0.0 ? 0.0 : xx [ 3 ] / xx [ 5
] ; xx [ 12 ] = xx [ 4 ] ; xx [ 13 ] = xx [ 4 ] ; xx [ 14 ] = xx [ 10 ] ; xx
[ 15 ] = xx [ 9 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 0 ]
= xx [ 11 + ( partialType ) ] ; matrix [ 0 ] = xx [ 6 ] ; matrix [ 1 ] = xx [
2 ] ; matrix [ 2 ] = xx [ 1 ] ; matrix [ 3 ] = xx [ 7 ] ; matrix [ 4 ] = xx [
8 ] ; matrix [ 5 ] = xx [ 0 ] ; matrix [ 6 ] = xx [ 8 ] ; matrix [ 7 ] = xx [
8 ] ; matrix [ 8 ] = xx [ 8 ] ; } static void computePosDofBlendMatrix_16_0 (
const double * state , int partialType , double * matrix ) { double xx [ 20 ]
; xx [ 0 ] = 0.0 ; xx [ 1 ] = 2.0 ; xx [ 2 ] = xx [ 1 ] * ( state [ 50 ] *
state [ 51 ] - state [ 49 ] * state [ 52 ] ) ; xx [ 3 ] = xx [ 2 ] * xx [ 2 ]
; xx [ 4 ] = 1.0 ; xx [ 5 ] = ( state [ 49 ] * state [ 49 ] + state [ 50 ] *
state [ 50 ] ) * xx [ 1 ] - xx [ 4 ] ; xx [ 6 ] = xx [ 5 ] * xx [ 5 ] ; xx [
7 ] = sqrt ( xx [ 3 ] + xx [ 6 ] ) ; xx [ 8 ] = xx [ 7 ] == 0.0 ? 0.0 : - xx
[ 2 ] / xx [ 7 ] ; xx [ 9 ] = xx [ 6 ] + xx [ 3 ] ; xx [ 3 ] = sqrt ( xx [ 9
] ) ; xx [ 6 ] = xx [ 3 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 3 ] ; xx [ 10 ] =
0.0 ; xx [ 11 ] = ( state [ 50 ] * state [ 52 ] + state [ 49 ] * state [ 51 ]
) * xx [ 1 ] ; xx [ 1 ] = sqrt ( xx [ 9 ] + xx [ 11 ] * xx [ 11 ] ) ; xx [ 12
] = xx [ 1 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 1 ] ; xx [ 14 ] = xx [ 8 ] ; xx [
15 ] = xx [ 6 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 8 ] ; xx [ 18 ] =
xx [ 8 ] ; xx [ 19 ] = xx [ 12 ] ; xx [ 6 ] = xx [ 13 + ( partialType ) ] ;
xx [ 8 ] = xx [ 7 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [ 7 ] ; xx [ 7 ] = xx [ 3 ]
== 0.0 ? 0.0 : xx [ 2 ] / xx [ 3 ] ; xx [ 3 ] = xx [ 1 ] == 0.0 ? 0.0 : xx [
2 ] / xx [ 1 ] ; xx [ 13 ] = xx [ 8 ] ; xx [ 14 ] = xx [ 7 ] ; xx [ 15 ] = xx
[ 10 ] ; xx [ 16 ] = xx [ 8 ] ; xx [ 17 ] = xx [ 8 ] ; xx [ 18 ] = xx [ 3 ] ;
xx [ 2 ] = xx [ 12 + ( partialType ) ] ; xx [ 3 ] = xx [ 1 ] == 0.0 ? 0.0 :
xx [ 11 ] / xx [ 1 ] ; xx [ 13 ] = xx [ 10 ] ; xx [ 14 ] = xx [ 10 ] ; xx [
15 ] = xx [ 4 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 18 ] =
xx [ 3 ] ; xx [ 1 ] = xx [ 12 + ( partialType ) ] ; xx [ 3 ] = xx [ 11 ] * xx
[ 5 ] ; xx [ 5 ] = sqrt ( xx [ 9 ] * xx [ 9 ] + xx [ 3 ] * xx [ 3 ] ) ; xx [
7 ] = xx [ 5 ] == 0.0 ? 0.0 : xx [ 9 ] / xx [ 5 ] ; xx [ 12 ] = xx [ 10 ] ;
xx [ 13 ] = xx [ 10 ] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 7 ] ; xx [
16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 7 ] = xx [ 11 + ( partialType
) ] ; xx [ 12 ] = xx [ 10 ] ; xx [ 13 ] = xx [ 10 ] ; xx [ 14 ] = xx [ 10 ] ;
xx [ 15 ] = xx [ 10 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [
8 ] = xx [ 11 + ( partialType ) ] ; xx [ 9 ] = xx [ 5 ] == 0.0 ? 0.0 : xx [ 3
] / xx [ 5 ] ; xx [ 12 ] = xx [ 4 ] ; xx [ 13 ] = xx [ 4 ] ; xx [ 14 ] = xx [
10 ] ; xx [ 15 ] = xx [ 9 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ;
xx [ 0 ] = xx [ 11 + ( partialType ) ] ; matrix [ 0 ] = xx [ 6 ] ; matrix [ 1
] = xx [ 2 ] ; matrix [ 2 ] = xx [ 1 ] ; matrix [ 3 ] = xx [ 7 ] ; matrix [ 4
] = xx [ 8 ] ; matrix [ 5 ] = xx [ 0 ] ; matrix [ 6 ] = xx [ 8 ] ; matrix [ 7
] = xx [ 8 ] ; matrix [ 8 ] = xx [ 8 ] ; } static void
computePosDofBlendMatrix_22_0 ( const double * state , int partialType ,
double * matrix ) { double xx [ 20 ] ; xx [ 0 ] = 0.0 ; xx [ 1 ] = 2.0 ; xx [
2 ] = xx [ 1 ] * ( state [ 69 ] * state [ 70 ] - state [ 68 ] * state [ 71 ]
) ; xx [ 3 ] = xx [ 2 ] * xx [ 2 ] ; xx [ 4 ] = 1.0 ; xx [ 5 ] = ( state [ 68
] * state [ 68 ] + state [ 69 ] * state [ 69 ] ) * xx [ 1 ] - xx [ 4 ] ; xx [
6 ] = xx [ 5 ] * xx [ 5 ] ; xx [ 7 ] = sqrt ( xx [ 3 ] + xx [ 6 ] ) ; xx [ 8
] = xx [ 7 ] == 0.0 ? 0.0 : - xx [ 2 ] / xx [ 7 ] ; xx [ 9 ] = xx [ 6 ] + xx
[ 3 ] ; xx [ 3 ] = sqrt ( xx [ 9 ] ) ; xx [ 6 ] = xx [ 3 ] == 0.0 ? 0.0 : xx
[ 5 ] / xx [ 3 ] ; xx [ 10 ] = 0.0 ; xx [ 11 ] = ( state [ 69 ] * state [ 71
] + state [ 68 ] * state [ 70 ] ) * xx [ 1 ] ; xx [ 1 ] = sqrt ( xx [ 9 ] +
xx [ 11 ] * xx [ 11 ] ) ; xx [ 12 ] = xx [ 1 ] == 0.0 ? 0.0 : xx [ 5 ] / xx [
1 ] ; xx [ 14 ] = xx [ 8 ] ; xx [ 15 ] = xx [ 6 ] ; xx [ 16 ] = xx [ 10 ] ;
xx [ 17 ] = xx [ 8 ] ; xx [ 18 ] = xx [ 8 ] ; xx [ 19 ] = xx [ 12 ] ; xx [ 6
] = xx [ 13 + ( partialType ) ] ; xx [ 8 ] = xx [ 7 ] == 0.0 ? 0.0 : xx [ 5 ]
/ xx [ 7 ] ; xx [ 7 ] = xx [ 3 ] == 0.0 ? 0.0 : xx [ 2 ] / xx [ 3 ] ; xx [ 3
] = xx [ 1 ] == 0.0 ? 0.0 : xx [ 2 ] / xx [ 1 ] ; xx [ 13 ] = xx [ 8 ] ; xx [
14 ] = xx [ 7 ] ; xx [ 15 ] = xx [ 10 ] ; xx [ 16 ] = xx [ 8 ] ; xx [ 17 ] =
xx [ 8 ] ; xx [ 18 ] = xx [ 3 ] ; xx [ 2 ] = xx [ 12 + ( partialType ) ] ; xx
[ 3 ] = xx [ 1 ] == 0.0 ? 0.0 : xx [ 11 ] / xx [ 1 ] ; xx [ 13 ] = xx [ 10 ]
; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 4 ] ; xx [ 16 ] = xx [ 10 ] ; xx [
17 ] = xx [ 10 ] ; xx [ 18 ] = xx [ 3 ] ; xx [ 1 ] = xx [ 12 + ( partialType
) ] ; xx [ 3 ] = xx [ 11 ] * xx [ 5 ] ; xx [ 5 ] = sqrt ( xx [ 9 ] * xx [ 9 ]
+ xx [ 3 ] * xx [ 3 ] ) ; xx [ 7 ] = xx [ 5 ] == 0.0 ? 0.0 : xx [ 9 ] / xx [
5 ] ; xx [ 12 ] = xx [ 10 ] ; xx [ 13 ] = xx [ 10 ] ; xx [ 14 ] = xx [ 10 ] ;
xx [ 15 ] = xx [ 7 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 7
] = xx [ 11 + ( partialType ) ] ; xx [ 12 ] = xx [ 10 ] ; xx [ 13 ] = xx [ 10
] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 10 ] ; xx [ 16 ] = xx [ 10 ] ;
xx [ 17 ] = xx [ 10 ] ; xx [ 8 ] = xx [ 11 + ( partialType ) ] ; xx [ 9 ] =
xx [ 5 ] == 0.0 ? 0.0 : xx [ 3 ] / xx [ 5 ] ; xx [ 12 ] = xx [ 4 ] ; xx [ 13
] = xx [ 4 ] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 9 ] ; xx [ 16 ] = xx
[ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 0 ] = xx [ 11 + ( partialType ) ] ;
matrix [ 0 ] = xx [ 6 ] ; matrix [ 1 ] = xx [ 2 ] ; matrix [ 2 ] = xx [ 1 ] ;
matrix [ 3 ] = xx [ 7 ] ; matrix [ 4 ] = xx [ 8 ] ; matrix [ 5 ] = xx [ 0 ] ;
matrix [ 6 ] = xx [ 8 ] ; matrix [ 7 ] = xx [ 8 ] ; matrix [ 8 ] = xx [ 8 ] ;
} static void computePosDofBlendMatrix_24_0 ( const double * state , int
partialType , double * matrix ) { double xx [ 20 ] ; xx [ 0 ] = 0.0 ; xx [ 1
] = 2.0 ; xx [ 2 ] = xx [ 1 ] * ( state [ 78 ] * state [ 79 ] - state [ 77 ]
* state [ 80 ] ) ; xx [ 3 ] = xx [ 2 ] * xx [ 2 ] ; xx [ 4 ] = 1.0 ; xx [ 5 ]
= ( state [ 77 ] * state [ 77 ] + state [ 78 ] * state [ 78 ] ) * xx [ 1 ] -
xx [ 4 ] ; xx [ 6 ] = xx [ 5 ] * xx [ 5 ] ; xx [ 7 ] = sqrt ( xx [ 3 ] + xx [
6 ] ) ; xx [ 8 ] = xx [ 7 ] == 0.0 ? 0.0 : - xx [ 2 ] / xx [ 7 ] ; xx [ 9 ] =
xx [ 6 ] + xx [ 3 ] ; xx [ 3 ] = sqrt ( xx [ 9 ] ) ; xx [ 6 ] = xx [ 3 ] ==
0.0 ? 0.0 : xx [ 5 ] / xx [ 3 ] ; xx [ 10 ] = 0.0 ; xx [ 11 ] = ( state [ 78
] * state [ 80 ] + state [ 77 ] * state [ 79 ] ) * xx [ 1 ] ; xx [ 1 ] = sqrt
( xx [ 9 ] + xx [ 11 ] * xx [ 11 ] ) ; xx [ 12 ] = xx [ 1 ] == 0.0 ? 0.0 : xx
[ 5 ] / xx [ 1 ] ; xx [ 14 ] = xx [ 8 ] ; xx [ 15 ] = xx [ 6 ] ; xx [ 16 ] =
xx [ 10 ] ; xx [ 17 ] = xx [ 8 ] ; xx [ 18 ] = xx [ 8 ] ; xx [ 19 ] = xx [ 12
] ; xx [ 6 ] = xx [ 13 + ( partialType ) ] ; xx [ 8 ] = xx [ 7 ] == 0.0 ? 0.0
: xx [ 5 ] / xx [ 7 ] ; xx [ 7 ] = xx [ 3 ] == 0.0 ? 0.0 : xx [ 2 ] / xx [ 3
] ; xx [ 3 ] = xx [ 1 ] == 0.0 ? 0.0 : xx [ 2 ] / xx [ 1 ] ; xx [ 13 ] = xx [
8 ] ; xx [ 14 ] = xx [ 7 ] ; xx [ 15 ] = xx [ 10 ] ; xx [ 16 ] = xx [ 8 ] ;
xx [ 17 ] = xx [ 8 ] ; xx [ 18 ] = xx [ 3 ] ; xx [ 2 ] = xx [ 12 + (
partialType ) ] ; xx [ 3 ] = xx [ 1 ] == 0.0 ? 0.0 : xx [ 11 ] / xx [ 1 ] ;
xx [ 13 ] = xx [ 10 ] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 4 ] ; xx [
16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 18 ] = xx [ 3 ] ; xx [ 1 ] =
xx [ 12 + ( partialType ) ] ; xx [ 3 ] = xx [ 11 ] * xx [ 5 ] ; xx [ 5 ] =
sqrt ( xx [ 9 ] * xx [ 9 ] + xx [ 3 ] * xx [ 3 ] ) ; xx [ 7 ] = xx [ 5 ] ==
0.0 ? 0.0 : xx [ 9 ] / xx [ 5 ] ; xx [ 12 ] = xx [ 10 ] ; xx [ 13 ] = xx [ 10
] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 7 ] ; xx [ 16 ] = xx [ 10 ] ; xx
[ 17 ] = xx [ 10 ] ; xx [ 7 ] = xx [ 11 + ( partialType ) ] ; xx [ 12 ] = xx
[ 10 ] ; xx [ 13 ] = xx [ 10 ] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ] = xx [ 10
] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 8 ] = xx [ 11 + (
partialType ) ] ; xx [ 9 ] = xx [ 5 ] == 0.0 ? 0.0 : xx [ 3 ] / xx [ 5 ] ; xx
[ 12 ] = xx [ 4 ] ; xx [ 13 ] = xx [ 4 ] ; xx [ 14 ] = xx [ 10 ] ; xx [ 15 ]
= xx [ 9 ] ; xx [ 16 ] = xx [ 10 ] ; xx [ 17 ] = xx [ 10 ] ; xx [ 0 ] = xx [
11 + ( partialType ) ] ; matrix [ 0 ] = xx [ 6 ] ; matrix [ 1 ] = xx [ 2 ] ;
matrix [ 2 ] = xx [ 1 ] ; matrix [ 3 ] = xx [ 7 ] ; matrix [ 4 ] = xx [ 8 ] ;
matrix [ 5 ] = xx [ 0 ] ; matrix [ 6 ] = xx [ 8 ] ; matrix [ 7 ] = xx [ 8 ] ;
matrix [ 8 ] = xx [ 8 ] ; } void triped_a151ee3d_1_computePosDofBlendMatrix (
const void * mech , size_t stageIdx , size_t primIdx , const double * state ,
int partialType , double * matrix ) { ( void ) mech ; ( void ) stageIdx ; (
void ) primIdx ; ( void ) state ; ( void ) partialType ; ( void ) matrix ;
switch ( ( stageIdx * 6 + primIdx ) ) { case 36 :
computePosDofBlendMatrix_6_0 ( state , partialType , matrix ) ; break ; case
48 : computePosDofBlendMatrix_8_0 ( state , partialType , matrix ) ; break ;
case 84 : computePosDofBlendMatrix_14_0 ( state , partialType , matrix ) ;
break ; case 96 : computePosDofBlendMatrix_16_0 ( state , partialType ,
matrix ) ; break ; case 132 : computePosDofBlendMatrix_22_0 ( state ,
partialType , matrix ) ; break ; case 144 : computePosDofBlendMatrix_24_0 (
state , partialType , matrix ) ; break ; } } static void
computeVelDofBlendMatrix_6_0 ( const double * state , int partialType ,
double * matrix ) { double xx [ 15 ] ; ( void ) state ; xx [ 0 ] = 0.0 ; xx [
1 ] = 0.0 ; xx [ 2 ] = 1.0 ; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 2 ] ; xx [
6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 2 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [
2 ] ; xx [ 10 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 2 ] ; xx [ 5 ]
= xx [ 1 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 2 ]
; xx [ 9 ] = xx [ 1 ] ; xx [ 11 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] =
xx [ 1 ] ; xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [ 2 ] ; xx [ 7 ] = xx [ 1 ] ;
xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 12 ] = xx [ 3 + (
partialType ) ] ; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [
1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [
13 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1 ]
; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 2 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ]
= xx [ 1 ] ; xx [ 14 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 2 ] ;
xx [ 5 ] = xx [ 2 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] =
xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 0 ] = xx [ 3 + ( partialType ) ] ;
matrix [ 0 ] = xx [ 10 ] ; matrix [ 1 ] = xx [ 11 ] ; matrix [ 2 ] = xx [ 12
] ; matrix [ 3 ] = xx [ 13 ] ; matrix [ 4 ] = xx [ 14 ] ; matrix [ 5 ] = xx [
0 ] ; matrix [ 6 ] = xx [ 13 ] ; matrix [ 7 ] = xx [ 13 ] ; matrix [ 8 ] = xx
[ 13 ] ; } static void computeVelDofBlendMatrix_8_0 ( const double * state ,
int partialType , double * matrix ) { double xx [ 15 ] ; ( void ) state ; xx
[ 0 ] = 0.0 ; xx [ 1 ] = 0.0 ; xx [ 2 ] = 1.0 ; xx [ 4 ] = xx [ 1 ] ; xx [ 5
] = xx [ 2 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 2 ] ; xx [ 8 ] = xx [ 1
] ; xx [ 9 ] = xx [ 2 ] ; xx [ 10 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] =
xx [ 2 ] ; xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 1 ] ;
xx [ 8 ] = xx [ 2 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 11 ] = xx [ 3 + (
partialType ) ] ; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [
2 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [
12 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1 ]
; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ]
= xx [ 1 ] ; xx [ 13 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 1 ] ;
xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 2 ] ; xx [ 8 ] =
xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 14 ] = xx [ 3 + ( partialType ) ] ; xx
[ 4 ] = xx [ 2 ] ; xx [ 5 ] = xx [ 2 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx
[ 1 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 0 ] = xx [ 3 + (
partialType ) ] ; matrix [ 0 ] = xx [ 10 ] ; matrix [ 1 ] = xx [ 11 ] ;
matrix [ 2 ] = xx [ 12 ] ; matrix [ 3 ] = xx [ 13 ] ; matrix [ 4 ] = xx [ 14
] ; matrix [ 5 ] = xx [ 0 ] ; matrix [ 6 ] = xx [ 13 ] ; matrix [ 7 ] = xx [
13 ] ; matrix [ 8 ] = xx [ 13 ] ; } static void computeVelDofBlendMatrix_14_0
( const double * state , int partialType , double * matrix ) { double xx [ 15
] ; ( void ) state ; xx [ 0 ] = 0.0 ; xx [ 1 ] = 0.0 ; xx [ 2 ] = 1.0 ; xx [
4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 2 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [
2 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 2 ] ; xx [ 10 ] = xx [ 3 + (
partialType ) ] ; xx [ 4 ] = xx [ 2 ] ; xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [
1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 2 ] ; xx [ 9 ] = xx [ 1 ] ; xx [
11 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1 ]
; xx [ 6 ] = xx [ 2 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ]
= xx [ 1 ] ; xx [ 12 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 1 ] ;
xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] =
xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 13 ] = xx [ 3 + ( partialType ) ] ; xx
[ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx
[ 2 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 14 ] = xx [ 3 + (
partialType ) ] ; xx [ 4 ] = xx [ 2 ] ; xx [ 5 ] = xx [ 2 ] ; xx [ 6 ] = xx [
1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [
0 ] = xx [ 3 + ( partialType ) ] ; matrix [ 0 ] = xx [ 10 ] ; matrix [ 1 ] =
xx [ 11 ] ; matrix [ 2 ] = xx [ 12 ] ; matrix [ 3 ] = xx [ 13 ] ; matrix [ 4
] = xx [ 14 ] ; matrix [ 5 ] = xx [ 0 ] ; matrix [ 6 ] = xx [ 13 ] ; matrix [
7 ] = xx [ 13 ] ; matrix [ 8 ] = xx [ 13 ] ; } static void
computeVelDofBlendMatrix_16_0 ( const double * state , int partialType ,
double * matrix ) { double xx [ 15 ] ; ( void ) state ; xx [ 0 ] = 0.0 ; xx [
1 ] = 0.0 ; xx [ 2 ] = 1.0 ; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 2 ] ; xx [
6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 2 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [
2 ] ; xx [ 10 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 2 ] ; xx [ 5 ]
= xx [ 1 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 2 ]
; xx [ 9 ] = xx [ 1 ] ; xx [ 11 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] =
xx [ 1 ] ; xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [ 2 ] ; xx [ 7 ] = xx [ 1 ] ;
xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 12 ] = xx [ 3 + (
partialType ) ] ; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [
1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [
13 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1 ]
; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 2 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ]
= xx [ 1 ] ; xx [ 14 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 2 ] ;
xx [ 5 ] = xx [ 2 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] =
xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 0 ] = xx [ 3 + ( partialType ) ] ;
matrix [ 0 ] = xx [ 10 ] ; matrix [ 1 ] = xx [ 11 ] ; matrix [ 2 ] = xx [ 12
] ; matrix [ 3 ] = xx [ 13 ] ; matrix [ 4 ] = xx [ 14 ] ; matrix [ 5 ] = xx [
0 ] ; matrix [ 6 ] = xx [ 13 ] ; matrix [ 7 ] = xx [ 13 ] ; matrix [ 8 ] = xx
[ 13 ] ; } static void computeVelDofBlendMatrix_22_0 ( const double * state ,
int partialType , double * matrix ) { double xx [ 15 ] ; ( void ) state ; xx
[ 0 ] = 0.0 ; xx [ 1 ] = 0.0 ; xx [ 2 ] = 1.0 ; xx [ 4 ] = xx [ 1 ] ; xx [ 5
] = xx [ 2 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 2 ] ; xx [ 8 ] = xx [ 1
] ; xx [ 9 ] = xx [ 2 ] ; xx [ 10 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] =
xx [ 2 ] ; xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 1 ] ;
xx [ 8 ] = xx [ 2 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 11 ] = xx [ 3 + (
partialType ) ] ; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [
2 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [
12 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1 ]
; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ]
= xx [ 1 ] ; xx [ 13 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 1 ] ;
xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 2 ] ; xx [ 8 ] =
xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 14 ] = xx [ 3 + ( partialType ) ] ; xx
[ 4 ] = xx [ 2 ] ; xx [ 5 ] = xx [ 2 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx
[ 1 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 0 ] = xx [ 3 + (
partialType ) ] ; matrix [ 0 ] = xx [ 10 ] ; matrix [ 1 ] = xx [ 11 ] ;
matrix [ 2 ] = xx [ 12 ] ; matrix [ 3 ] = xx [ 13 ] ; matrix [ 4 ] = xx [ 14
] ; matrix [ 5 ] = xx [ 0 ] ; matrix [ 6 ] = xx [ 13 ] ; matrix [ 7 ] = xx [
13 ] ; matrix [ 8 ] = xx [ 13 ] ; } static void computeVelDofBlendMatrix_24_0
( const double * state , int partialType , double * matrix ) { double xx [ 15
] ; ( void ) state ; xx [ 0 ] = 0.0 ; xx [ 1 ] = 0.0 ; xx [ 2 ] = 1.0 ; xx [
4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 2 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [
2 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 2 ] ; xx [ 10 ] = xx [ 3 + (
partialType ) ] ; xx [ 4 ] = xx [ 2 ] ; xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [
1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 2 ] ; xx [ 9 ] = xx [ 1 ] ; xx [
11 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1 ]
; xx [ 6 ] = xx [ 2 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ]
= xx [ 1 ] ; xx [ 12 ] = xx [ 3 + ( partialType ) ] ; xx [ 4 ] = xx [ 1 ] ;
xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] =
xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 13 ] = xx [ 3 + ( partialType ) ] ; xx
[ 4 ] = xx [ 1 ] ; xx [ 5 ] = xx [ 1 ] ; xx [ 6 ] = xx [ 1 ] ; xx [ 7 ] = xx
[ 2 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [ 14 ] = xx [ 3 + (
partialType ) ] ; xx [ 4 ] = xx [ 2 ] ; xx [ 5 ] = xx [ 2 ] ; xx [ 6 ] = xx [
1 ] ; xx [ 7 ] = xx [ 1 ] ; xx [ 8 ] = xx [ 1 ] ; xx [ 9 ] = xx [ 1 ] ; xx [
0 ] = xx [ 3 + ( partialType ) ] ; matrix [ 0 ] = xx [ 10 ] ; matrix [ 1 ] =
xx [ 11 ] ; matrix [ 2 ] = xx [ 12 ] ; matrix [ 3 ] = xx [ 13 ] ; matrix [ 4
] = xx [ 14 ] ; matrix [ 5 ] = xx [ 0 ] ; matrix [ 6 ] = xx [ 13 ] ; matrix [
7 ] = xx [ 13 ] ; matrix [ 8 ] = xx [ 13 ] ; } void
triped_a151ee3d_1_computeVelDofBlendMatrix ( const void * mech , size_t
stageIdx , size_t primIdx , const double * state , int partialType , double *
matrix ) { ( void ) mech ; ( void ) stageIdx ; ( void ) primIdx ; ( void )
state ; ( void ) partialType ; ( void ) matrix ; switch ( ( stageIdx * 6 +
primIdx ) ) { case 36 : computeVelDofBlendMatrix_6_0 ( state , partialType ,
matrix ) ; break ; case 48 : computeVelDofBlendMatrix_8_0 ( state ,
partialType , matrix ) ; break ; case 84 : computeVelDofBlendMatrix_14_0 (
state , partialType , matrix ) ; break ; case 96 :
computeVelDofBlendMatrix_16_0 ( state , partialType , matrix ) ; break ; case
132 : computeVelDofBlendMatrix_22_0 ( state , partialType , matrix ) ; break
; case 144 : computeVelDofBlendMatrix_24_0 ( state , partialType , matrix ) ;
break ; } } static void projectPartiallyTargetedPos_6_0 ( const double *
origState , int partialType , double * state ) { boolean_T bb [ 1 ] ; int ii
[ 3 ] ; double xx [ 24 ] ; xx [ 0 ] = state [ 13 ] * state [ 15 ] ; xx [ 1 ]
= state [ 12 ] * state [ 14 ] ; xx [ 2 ] = 2.0 ; xx [ 3 ] = ( xx [ 0 ] + xx [
1 ] ) * xx [ 2 ] ; xx [ 4 ] = fabs ( xx [ 3 ] ) > 1.0 ? atan2 ( xx [ 3 ] ,
0.0 ) : asin ( xx [ 3 ] ) ; xx [ 5 ] = origState [ 13 ] * origState [ 15 ] ;
xx [ 6 ] = origState [ 12 ] * origState [ 14 ] ; xx [ 7 ] = ( xx [ 5 ] + xx [
6 ] ) * xx [ 2 ] ; xx [ 8 ] = fabs ( xx [ 7 ] ) > 1.0 ? atan2 ( xx [ 7 ] ,
0.0 ) : asin ( xx [ 7 ] ) ; xx [ 9 ] = xx [ 4 ] ; xx [ 10 ] = xx [ 4 ] ; xx [
11 ] = xx [ 8 ] ; xx [ 12 ] = xx [ 8 ] ; xx [ 13 ] = xx [ 4 ] ; xx [ 14 ] =
xx [ 4 ] ; xx [ 15 ] = xx [ 8 ] ; xx [ 16 ] = xx [ 9 + ( partialType ) ] ; xx
[ 9 ] = cos ( xx [ 16 ] ) ; xx [ 10 ] = 0.99999999999999 ; xx [ 11 ] = fabs (
xx [ 3 ] ) - xx [ 10 ] ; if ( xx [ 11 ] < 0.0 ) ii [ 0 ] = - 1 ; else if ( xx
[ 11 ] > 0.0 ) ii [ 0 ] = + 1 ; else ii [ 0 ] = 0 ; ii [ 1 ] = ii [ 0 ] ; if
( 0 > ii [ 1 ] ) ii [ 1 ] = 0 ; bb [ 0 ] = ! ( ii [ 1 ] == 1 ) ; xx [ 3 ] =
state [ 13 ] * state [ 14 ] ; xx [ 11 ] = state [ 12 ] * state [ 15 ] ; xx [
12 ] = state [ 12 ] * state [ 12 ] ; xx [ 13 ] = 1.0 ; xx [ 14 ] = ( xx [ 12
] + state [ 13 ] * state [ 13 ] ) * xx [ 2 ] - xx [ 13 ] ; xx [ 15 ] = - ( xx
[ 2 ] * ( xx [ 3 ] - xx [ 11 ] ) ) ; xx [ 14 ] = ( xx [ 15 ] == 0.0 && xx [
14 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 15 ] , xx [ 14 ] ) ; if ( xx [ 4 ] < 0.0 )
xx [ 15 ] = - 1.0 ; else if ( xx [ 4 ] > 0.0 ) xx [ 15 ] = + 1.0 ; else xx [
15 ] = 0.0 ; xx [ 4 ] = ( xx [ 12 ] + state [ 15 ] * state [ 15 ] ) * xx [ 2
] - xx [ 13 ] ; xx [ 17 ] = - ( xx [ 2 ] * ( state [ 14 ] * state [ 15 ] -
state [ 12 ] * state [ 13 ] ) ) ; xx [ 4 ] = ( xx [ 17 ] == 0.0 && xx [ 4 ]
== 0.0 ) ? 0.0 : atan2 ( xx [ 17 ] , xx [ 4 ] ) ; xx [ 12 ] = 0.5 ; xx [ 17 ]
= - ( xx [ 2 ] * ( xx [ 0 ] - xx [ 1 ] ) * xx [ 15 ] ) ; xx [ 18 ] = ( xx [ 3
] + xx [ 11 ] ) * xx [ 2 ] * xx [ 15 ] ; xx [ 17 ] = ( xx [ 18 ] == 0.0 && xx
[ 17 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 18 ] , xx [ 17 ] ) ; xx [ 0 ] = bb [ 0 ]
? xx [ 4 ] : xx [ 12 ] * xx [ 17 ] ; xx [ 1 ] = bb [ 0 ] ? xx [ 14 ] : xx [
15 ] * xx [ 0 ] ; xx [ 3 ] = fabs ( xx [ 7 ] ) - xx [ 10 ] ; if ( xx [ 3 ] <
0.0 ) ii [ 0 ] = - 1 ; else if ( xx [ 3 ] > 0.0 ) ii [ 0 ] = + 1 ; else ii [
0 ] = 0 ; ii [ 1 ] = ii [ 0 ] ; if ( 0 > ii [ 1 ] ) ii [ 1 ] = 0 ; bb [ 0 ] =
! ( ii [ 1 ] == 1 ) ; xx [ 3 ] = origState [ 13 ] * origState [ 14 ] ; xx [ 4
] = origState [ 12 ] * origState [ 15 ] ; xx [ 7 ] = origState [ 12 ] *
origState [ 12 ] ; xx [ 10 ] = ( xx [ 7 ] + origState [ 13 ] * origState [ 13
] ) * xx [ 2 ] - xx [ 13 ] ; xx [ 11 ] = - ( xx [ 2 ] * ( xx [ 3 ] - xx [ 4 ]
) ) ; xx [ 10 ] = ( xx [ 11 ] == 0.0 && xx [ 10 ] == 0.0 ) ? 0.0 : atan2 ( xx
[ 11 ] , xx [ 10 ] ) ; if ( xx [ 8 ] < 0.0 ) xx [ 11 ] = - 1.0 ; else if ( xx
[ 8 ] > 0.0 ) xx [ 11 ] = + 1.0 ; else xx [ 11 ] = 0.0 ; xx [ 8 ] = ( xx [ 7
] + origState [ 15 ] * origState [ 15 ] ) * xx [ 2 ] - xx [ 13 ] ; xx [ 14 ]
= - ( xx [ 2 ] * ( origState [ 14 ] * origState [ 15 ] - origState [ 12 ] *
origState [ 13 ] ) ) ; xx [ 8 ] = ( xx [ 14 ] == 0.0 && xx [ 8 ] == 0.0 ) ?
0.0 : atan2 ( xx [ 14 ] , xx [ 8 ] ) ; xx [ 7 ] = - ( xx [ 2 ] * ( xx [ 5 ] -
xx [ 6 ] ) * xx [ 11 ] ) ; xx [ 13 ] = ( xx [ 3 ] + xx [ 4 ] ) * xx [ 2 ] *
xx [ 11 ] ; xx [ 7 ] = ( xx [ 13 ] == 0.0 && xx [ 7 ] == 0.0 ) ? 0.0 : atan2
( xx [ 13 ] , xx [ 7 ] ) ; xx [ 2 ] = bb [ 0 ] ? xx [ 8 ] : xx [ 12 ] * xx [
7 ] ; xx [ 3 ] = bb [ 0 ] ? xx [ 10 ] : xx [ 11 ] * xx [ 2 ] ; xx [ 17 ] = xx
[ 1 ] ; xx [ 18 ] = xx [ 1 ] ; xx [ 19 ] = xx [ 1 ] ; xx [ 20 ] = xx [ 1 ] ;
xx [ 21 ] = xx [ 3 ] ; xx [ 22 ] = xx [ 3 ] ; xx [ 23 ] = xx [ 3 ] ; xx [ 1 ]
= xx [ 17 + ( partialType ) ] ; xx [ 3 ] = cos ( xx [ 1 ] ) ; xx [ 4 ] = sin
( xx [ 1 ] ) ; xx [ 1 ] = sin ( xx [ 16 ] ) ; xx [ 10 ] = xx [ 0 ] ; xx [ 11
] = xx [ 2 ] ; xx [ 12 ] = xx [ 0 ] ; xx [ 13 ] = xx [ 2 ] ; xx [ 14 ] = xx [
0 ] ; xx [ 15 ] = xx [ 2 ] ; xx [ 16 ] = xx [ 0 ] ; xx [ 0 ] = xx [ 10 + (
partialType ) ] ; xx [ 2 ] = cos ( xx [ 0 ] ) ; xx [ 5 ] = sin ( xx [ 0 ] ) ;
xx [ 0 ] = xx [ 3 ] * xx [ 5 ] ; xx [ 6 ] = xx [ 3 ] * xx [ 2 ] ; xx [ 10 ] =
xx [ 9 ] * xx [ 3 ] ; xx [ 11 ] = - ( xx [ 9 ] * xx [ 4 ] ) ; xx [ 12 ] = xx
[ 1 ] ; xx [ 13 ] = xx [ 2 ] * xx [ 4 ] + xx [ 0 ] * xx [ 1 ] ; xx [ 14 ] =
xx [ 6 ] - xx [ 1 ] * xx [ 5 ] * xx [ 4 ] ; xx [ 15 ] = - ( xx [ 9 ] * xx [ 5
] ) ; xx [ 16 ] = xx [ 4 ] * xx [ 5 ] - xx [ 6 ] * xx [ 1 ] ; xx [ 17 ] = xx
[ 0 ] + xx [ 2 ] * xx [ 1 ] * xx [ 4 ] ; xx [ 18 ] = xx [ 9 ] * xx [ 2 ] ;
pm_math_Quaternion_Matrix3x3Ctor_ra ( xx + 10 , xx + 0 ) ; state [ 12 ] = xx
[ 0 ] ; state [ 13 ] = xx [ 1 ] ; state [ 14 ] = xx [ 2 ] ; state [ 15 ] = xx
[ 3 ] ; } static void projectPartiallyTargetedPos_8_0 ( const double *
origState , int partialType , double * state ) { boolean_T bb [ 1 ] ; int ii
[ 3 ] ; double xx [ 24 ] ; xx [ 0 ] = state [ 22 ] * state [ 24 ] ; xx [ 1 ]
= state [ 21 ] * state [ 23 ] ; xx [ 2 ] = 2.0 ; xx [ 3 ] = ( xx [ 0 ] + xx [
1 ] ) * xx [ 2 ] ; xx [ 4 ] = fabs ( xx [ 3 ] ) > 1.0 ? atan2 ( xx [ 3 ] ,
0.0 ) : asin ( xx [ 3 ] ) ; xx [ 5 ] = origState [ 22 ] * origState [ 24 ] ;
xx [ 6 ] = origState [ 21 ] * origState [ 23 ] ; xx [ 7 ] = ( xx [ 5 ] + xx [
6 ] ) * xx [ 2 ] ; xx [ 8 ] = fabs ( xx [ 7 ] ) > 1.0 ? atan2 ( xx [ 7 ] ,
0.0 ) : asin ( xx [ 7 ] ) ; xx [ 9 ] = xx [ 4 ] ; xx [ 10 ] = xx [ 4 ] ; xx [
11 ] = xx [ 8 ] ; xx [ 12 ] = xx [ 8 ] ; xx [ 13 ] = xx [ 4 ] ; xx [ 14 ] =
xx [ 4 ] ; xx [ 15 ] = xx [ 8 ] ; xx [ 16 ] = xx [ 9 + ( partialType ) ] ; xx
[ 9 ] = cos ( xx [ 16 ] ) ; xx [ 10 ] = 0.99999999999999 ; xx [ 11 ] = fabs (
xx [ 3 ] ) - xx [ 10 ] ; if ( xx [ 11 ] < 0.0 ) ii [ 0 ] = - 1 ; else if ( xx
[ 11 ] > 0.0 ) ii [ 0 ] = + 1 ; else ii [ 0 ] = 0 ; ii [ 1 ] = ii [ 0 ] ; if
( 0 > ii [ 1 ] ) ii [ 1 ] = 0 ; bb [ 0 ] = ! ( ii [ 1 ] == 1 ) ; xx [ 3 ] =
state [ 22 ] * state [ 23 ] ; xx [ 11 ] = state [ 21 ] * state [ 24 ] ; xx [
12 ] = state [ 21 ] * state [ 21 ] ; xx [ 13 ] = 1.0 ; xx [ 14 ] = ( xx [ 12
] + state [ 22 ] * state [ 22 ] ) * xx [ 2 ] - xx [ 13 ] ; xx [ 15 ] = - ( xx
[ 2 ] * ( xx [ 3 ] - xx [ 11 ] ) ) ; xx [ 14 ] = ( xx [ 15 ] == 0.0 && xx [
14 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 15 ] , xx [ 14 ] ) ; if ( xx [ 4 ] < 0.0 )
xx [ 15 ] = - 1.0 ; else if ( xx [ 4 ] > 0.0 ) xx [ 15 ] = + 1.0 ; else xx [
15 ] = 0.0 ; xx [ 4 ] = ( xx [ 12 ] + state [ 24 ] * state [ 24 ] ) * xx [ 2
] - xx [ 13 ] ; xx [ 17 ] = - ( xx [ 2 ] * ( state [ 23 ] * state [ 24 ] -
state [ 21 ] * state [ 22 ] ) ) ; xx [ 4 ] = ( xx [ 17 ] == 0.0 && xx [ 4 ]
== 0.0 ) ? 0.0 : atan2 ( xx [ 17 ] , xx [ 4 ] ) ; xx [ 12 ] = 0.5 ; xx [ 17 ]
= - ( xx [ 2 ] * ( xx [ 0 ] - xx [ 1 ] ) * xx [ 15 ] ) ; xx [ 18 ] = ( xx [ 3
] + xx [ 11 ] ) * xx [ 2 ] * xx [ 15 ] ; xx [ 17 ] = ( xx [ 18 ] == 0.0 && xx
[ 17 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 18 ] , xx [ 17 ] ) ; xx [ 0 ] = bb [ 0 ]
? xx [ 4 ] : xx [ 12 ] * xx [ 17 ] ; xx [ 1 ] = bb [ 0 ] ? xx [ 14 ] : xx [
15 ] * xx [ 0 ] ; xx [ 3 ] = fabs ( xx [ 7 ] ) - xx [ 10 ] ; if ( xx [ 3 ] <
0.0 ) ii [ 0 ] = - 1 ; else if ( xx [ 3 ] > 0.0 ) ii [ 0 ] = + 1 ; else ii [
0 ] = 0 ; ii [ 1 ] = ii [ 0 ] ; if ( 0 > ii [ 1 ] ) ii [ 1 ] = 0 ; bb [ 0 ] =
! ( ii [ 1 ] == 1 ) ; xx [ 3 ] = origState [ 22 ] * origState [ 23 ] ; xx [ 4
] = origState [ 21 ] * origState [ 24 ] ; xx [ 7 ] = origState [ 21 ] *
origState [ 21 ] ; xx [ 10 ] = ( xx [ 7 ] + origState [ 22 ] * origState [ 22
] ) * xx [ 2 ] - xx [ 13 ] ; xx [ 11 ] = - ( xx [ 2 ] * ( xx [ 3 ] - xx [ 4 ]
) ) ; xx [ 10 ] = ( xx [ 11 ] == 0.0 && xx [ 10 ] == 0.0 ) ? 0.0 : atan2 ( xx
[ 11 ] , xx [ 10 ] ) ; if ( xx [ 8 ] < 0.0 ) xx [ 11 ] = - 1.0 ; else if ( xx
[ 8 ] > 0.0 ) xx [ 11 ] = + 1.0 ; else xx [ 11 ] = 0.0 ; xx [ 8 ] = ( xx [ 7
] + origState [ 24 ] * origState [ 24 ] ) * xx [ 2 ] - xx [ 13 ] ; xx [ 14 ]
= - ( xx [ 2 ] * ( origState [ 23 ] * origState [ 24 ] - origState [ 21 ] *
origState [ 22 ] ) ) ; xx [ 8 ] = ( xx [ 14 ] == 0.0 && xx [ 8 ] == 0.0 ) ?
0.0 : atan2 ( xx [ 14 ] , xx [ 8 ] ) ; xx [ 7 ] = - ( xx [ 2 ] * ( xx [ 5 ] -
xx [ 6 ] ) * xx [ 11 ] ) ; xx [ 13 ] = ( xx [ 3 ] + xx [ 4 ] ) * xx [ 2 ] *
xx [ 11 ] ; xx [ 7 ] = ( xx [ 13 ] == 0.0 && xx [ 7 ] == 0.0 ) ? 0.0 : atan2
( xx [ 13 ] , xx [ 7 ] ) ; xx [ 2 ] = bb [ 0 ] ? xx [ 8 ] : xx [ 12 ] * xx [
7 ] ; xx [ 3 ] = bb [ 0 ] ? xx [ 10 ] : xx [ 11 ] * xx [ 2 ] ; xx [ 17 ] = xx
[ 1 ] ; xx [ 18 ] = xx [ 1 ] ; xx [ 19 ] = xx [ 1 ] ; xx [ 20 ] = xx [ 1 ] ;
xx [ 21 ] = xx [ 3 ] ; xx [ 22 ] = xx [ 3 ] ; xx [ 23 ] = xx [ 3 ] ; xx [ 1 ]
= xx [ 17 + ( partialType ) ] ; xx [ 3 ] = cos ( xx [ 1 ] ) ; xx [ 4 ] = sin
( xx [ 1 ] ) ; xx [ 1 ] = sin ( xx [ 16 ] ) ; xx [ 10 ] = xx [ 0 ] ; xx [ 11
] = xx [ 2 ] ; xx [ 12 ] = xx [ 0 ] ; xx [ 13 ] = xx [ 2 ] ; xx [ 14 ] = xx [
0 ] ; xx [ 15 ] = xx [ 2 ] ; xx [ 16 ] = xx [ 0 ] ; xx [ 0 ] = xx [ 10 + (
partialType ) ] ; xx [ 2 ] = cos ( xx [ 0 ] ) ; xx [ 5 ] = sin ( xx [ 0 ] ) ;
xx [ 0 ] = xx [ 3 ] * xx [ 5 ] ; xx [ 6 ] = xx [ 3 ] * xx [ 2 ] ; xx [ 10 ] =
xx [ 9 ] * xx [ 3 ] ; xx [ 11 ] = - ( xx [ 9 ] * xx [ 4 ] ) ; xx [ 12 ] = xx
[ 1 ] ; xx [ 13 ] = xx [ 2 ] * xx [ 4 ] + xx [ 0 ] * xx [ 1 ] ; xx [ 14 ] =
xx [ 6 ] - xx [ 1 ] * xx [ 5 ] * xx [ 4 ] ; xx [ 15 ] = - ( xx [ 9 ] * xx [ 5
] ) ; xx [ 16 ] = xx [ 4 ] * xx [ 5 ] - xx [ 6 ] * xx [ 1 ] ; xx [ 17 ] = xx
[ 0 ] + xx [ 2 ] * xx [ 1 ] * xx [ 4 ] ; xx [ 18 ] = xx [ 9 ] * xx [ 2 ] ;
pm_math_Quaternion_Matrix3x3Ctor_ra ( xx + 10 , xx + 0 ) ; state [ 21 ] = xx
[ 0 ] ; state [ 22 ] = xx [ 1 ] ; state [ 23 ] = xx [ 2 ] ; state [ 24 ] = xx
[ 3 ] ; } static void projectPartiallyTargetedPos_14_0 ( const double *
origState , int partialType , double * state ) { boolean_T bb [ 1 ] ; int ii
[ 3 ] ; double xx [ 24 ] ; xx [ 0 ] = state [ 41 ] * state [ 43 ] ; xx [ 1 ]
= state [ 40 ] * state [ 42 ] ; xx [ 2 ] = 2.0 ; xx [ 3 ] = ( xx [ 0 ] + xx [
1 ] ) * xx [ 2 ] ; xx [ 4 ] = fabs ( xx [ 3 ] ) > 1.0 ? atan2 ( xx [ 3 ] ,
0.0 ) : asin ( xx [ 3 ] ) ; xx [ 5 ] = origState [ 41 ] * origState [ 43 ] ;
xx [ 6 ] = origState [ 40 ] * origState [ 42 ] ; xx [ 7 ] = ( xx [ 5 ] + xx [
6 ] ) * xx [ 2 ] ; xx [ 8 ] = fabs ( xx [ 7 ] ) > 1.0 ? atan2 ( xx [ 7 ] ,
0.0 ) : asin ( xx [ 7 ] ) ; xx [ 9 ] = xx [ 4 ] ; xx [ 10 ] = xx [ 4 ] ; xx [
11 ] = xx [ 8 ] ; xx [ 12 ] = xx [ 8 ] ; xx [ 13 ] = xx [ 4 ] ; xx [ 14 ] =
xx [ 4 ] ; xx [ 15 ] = xx [ 8 ] ; xx [ 16 ] = xx [ 9 + ( partialType ) ] ; xx
[ 9 ] = cos ( xx [ 16 ] ) ; xx [ 10 ] = 0.99999999999999 ; xx [ 11 ] = fabs (
xx [ 3 ] ) - xx [ 10 ] ; if ( xx [ 11 ] < 0.0 ) ii [ 0 ] = - 1 ; else if ( xx
[ 11 ] > 0.0 ) ii [ 0 ] = + 1 ; else ii [ 0 ] = 0 ; ii [ 1 ] = ii [ 0 ] ; if
( 0 > ii [ 1 ] ) ii [ 1 ] = 0 ; bb [ 0 ] = ! ( ii [ 1 ] == 1 ) ; xx [ 3 ] =
state [ 41 ] * state [ 42 ] ; xx [ 11 ] = state [ 40 ] * state [ 43 ] ; xx [
12 ] = state [ 40 ] * state [ 40 ] ; xx [ 13 ] = 1.0 ; xx [ 14 ] = ( xx [ 12
] + state [ 41 ] * state [ 41 ] ) * xx [ 2 ] - xx [ 13 ] ; xx [ 15 ] = - ( xx
[ 2 ] * ( xx [ 3 ] - xx [ 11 ] ) ) ; xx [ 14 ] = ( xx [ 15 ] == 0.0 && xx [
14 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 15 ] , xx [ 14 ] ) ; if ( xx [ 4 ] < 0.0 )
xx [ 15 ] = - 1.0 ; else if ( xx [ 4 ] > 0.0 ) xx [ 15 ] = + 1.0 ; else xx [
15 ] = 0.0 ; xx [ 4 ] = ( xx [ 12 ] + state [ 43 ] * state [ 43 ] ) * xx [ 2
] - xx [ 13 ] ; xx [ 17 ] = - ( xx [ 2 ] * ( state [ 42 ] * state [ 43 ] -
state [ 40 ] * state [ 41 ] ) ) ; xx [ 4 ] = ( xx [ 17 ] == 0.0 && xx [ 4 ]
== 0.0 ) ? 0.0 : atan2 ( xx [ 17 ] , xx [ 4 ] ) ; xx [ 12 ] = 0.5 ; xx [ 17 ]
= - ( xx [ 2 ] * ( xx [ 0 ] - xx [ 1 ] ) * xx [ 15 ] ) ; xx [ 18 ] = ( xx [ 3
] + xx [ 11 ] ) * xx [ 2 ] * xx [ 15 ] ; xx [ 17 ] = ( xx [ 18 ] == 0.0 && xx
[ 17 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 18 ] , xx [ 17 ] ) ; xx [ 0 ] = bb [ 0 ]
? xx [ 4 ] : xx [ 12 ] * xx [ 17 ] ; xx [ 1 ] = bb [ 0 ] ? xx [ 14 ] : xx [
15 ] * xx [ 0 ] ; xx [ 3 ] = fabs ( xx [ 7 ] ) - xx [ 10 ] ; if ( xx [ 3 ] <
0.0 ) ii [ 0 ] = - 1 ; else if ( xx [ 3 ] > 0.0 ) ii [ 0 ] = + 1 ; else ii [
0 ] = 0 ; ii [ 1 ] = ii [ 0 ] ; if ( 0 > ii [ 1 ] ) ii [ 1 ] = 0 ; bb [ 0 ] =
! ( ii [ 1 ] == 1 ) ; xx [ 3 ] = origState [ 41 ] * origState [ 42 ] ; xx [ 4
] = origState [ 40 ] * origState [ 43 ] ; xx [ 7 ] = origState [ 40 ] *
origState [ 40 ] ; xx [ 10 ] = ( xx [ 7 ] + origState [ 41 ] * origState [ 41
] ) * xx [ 2 ] - xx [ 13 ] ; xx [ 11 ] = - ( xx [ 2 ] * ( xx [ 3 ] - xx [ 4 ]
) ) ; xx [ 10 ] = ( xx [ 11 ] == 0.0 && xx [ 10 ] == 0.0 ) ? 0.0 : atan2 ( xx
[ 11 ] , xx [ 10 ] ) ; if ( xx [ 8 ] < 0.0 ) xx [ 11 ] = - 1.0 ; else if ( xx
[ 8 ] > 0.0 ) xx [ 11 ] = + 1.0 ; else xx [ 11 ] = 0.0 ; xx [ 8 ] = ( xx [ 7
] + origState [ 43 ] * origState [ 43 ] ) * xx [ 2 ] - xx [ 13 ] ; xx [ 14 ]
= - ( xx [ 2 ] * ( origState [ 42 ] * origState [ 43 ] - origState [ 40 ] *
origState [ 41 ] ) ) ; xx [ 8 ] = ( xx [ 14 ] == 0.0 && xx [ 8 ] == 0.0 ) ?
0.0 : atan2 ( xx [ 14 ] , xx [ 8 ] ) ; xx [ 7 ] = - ( xx [ 2 ] * ( xx [ 5 ] -
xx [ 6 ] ) * xx [ 11 ] ) ; xx [ 13 ] = ( xx [ 3 ] + xx [ 4 ] ) * xx [ 2 ] *
xx [ 11 ] ; xx [ 7 ] = ( xx [ 13 ] == 0.0 && xx [ 7 ] == 0.0 ) ? 0.0 : atan2
( xx [ 13 ] , xx [ 7 ] ) ; xx [ 2 ] = bb [ 0 ] ? xx [ 8 ] : xx [ 12 ] * xx [
7 ] ; xx [ 3 ] = bb [ 0 ] ? xx [ 10 ] : xx [ 11 ] * xx [ 2 ] ; xx [ 17 ] = xx
[ 1 ] ; xx [ 18 ] = xx [ 1 ] ; xx [ 19 ] = xx [ 1 ] ; xx [ 20 ] = xx [ 1 ] ;
xx [ 21 ] = xx [ 3 ] ; xx [ 22 ] = xx [ 3 ] ; xx [ 23 ] = xx [ 3 ] ; xx [ 1 ]
= xx [ 17 + ( partialType ) ] ; xx [ 3 ] = cos ( xx [ 1 ] ) ; xx [ 4 ] = sin
( xx [ 1 ] ) ; xx [ 1 ] = sin ( xx [ 16 ] ) ; xx [ 10 ] = xx [ 0 ] ; xx [ 11
] = xx [ 2 ] ; xx [ 12 ] = xx [ 0 ] ; xx [ 13 ] = xx [ 2 ] ; xx [ 14 ] = xx [
0 ] ; xx [ 15 ] = xx [ 2 ] ; xx [ 16 ] = xx [ 0 ] ; xx [ 0 ] = xx [ 10 + (
partialType ) ] ; xx [ 2 ] = cos ( xx [ 0 ] ) ; xx [ 5 ] = sin ( xx [ 0 ] ) ;
xx [ 0 ] = xx [ 3 ] * xx [ 5 ] ; xx [ 6 ] = xx [ 3 ] * xx [ 2 ] ; xx [ 10 ] =
xx [ 9 ] * xx [ 3 ] ; xx [ 11 ] = - ( xx [ 9 ] * xx [ 4 ] ) ; xx [ 12 ] = xx
[ 1 ] ; xx [ 13 ] = xx [ 2 ] * xx [ 4 ] + xx [ 0 ] * xx [ 1 ] ; xx [ 14 ] =
xx [ 6 ] - xx [ 1 ] * xx [ 5 ] * xx [ 4 ] ; xx [ 15 ] = - ( xx [ 9 ] * xx [ 5
] ) ; xx [ 16 ] = xx [ 4 ] * xx [ 5 ] - xx [ 6 ] * xx [ 1 ] ; xx [ 17 ] = xx
[ 0 ] + xx [ 2 ] * xx [ 1 ] * xx [ 4 ] ; xx [ 18 ] = xx [ 9 ] * xx [ 2 ] ;
pm_math_Quaternion_Matrix3x3Ctor_ra ( xx + 10 , xx + 0 ) ; state [ 40 ] = xx
[ 0 ] ; state [ 41 ] = xx [ 1 ] ; state [ 42 ] = xx [ 2 ] ; state [ 43 ] = xx
[ 3 ] ; } static void projectPartiallyTargetedPos_16_0 ( const double *
origState , int partialType , double * state ) { boolean_T bb [ 1 ] ; int ii
[ 3 ] ; double xx [ 24 ] ; xx [ 0 ] = state [ 50 ] * state [ 52 ] ; xx [ 1 ]
= state [ 49 ] * state [ 51 ] ; xx [ 2 ] = 2.0 ; xx [ 3 ] = ( xx [ 0 ] + xx [
1 ] ) * xx [ 2 ] ; xx [ 4 ] = fabs ( xx [ 3 ] ) > 1.0 ? atan2 ( xx [ 3 ] ,
0.0 ) : asin ( xx [ 3 ] ) ; xx [ 5 ] = origState [ 50 ] * origState [ 52 ] ;
xx [ 6 ] = origState [ 49 ] * origState [ 51 ] ; xx [ 7 ] = ( xx [ 5 ] + xx [
6 ] ) * xx [ 2 ] ; xx [ 8 ] = fabs ( xx [ 7 ] ) > 1.0 ? atan2 ( xx [ 7 ] ,
0.0 ) : asin ( xx [ 7 ] ) ; xx [ 9 ] = xx [ 4 ] ; xx [ 10 ] = xx [ 4 ] ; xx [
11 ] = xx [ 8 ] ; xx [ 12 ] = xx [ 8 ] ; xx [ 13 ] = xx [ 4 ] ; xx [ 14 ] =
xx [ 4 ] ; xx [ 15 ] = xx [ 8 ] ; xx [ 16 ] = xx [ 9 + ( partialType ) ] ; xx
[ 9 ] = cos ( xx [ 16 ] ) ; xx [ 10 ] = 0.99999999999999 ; xx [ 11 ] = fabs (
xx [ 3 ] ) - xx [ 10 ] ; if ( xx [ 11 ] < 0.0 ) ii [ 0 ] = - 1 ; else if ( xx
[ 11 ] > 0.0 ) ii [ 0 ] = + 1 ; else ii [ 0 ] = 0 ; ii [ 1 ] = ii [ 0 ] ; if
( 0 > ii [ 1 ] ) ii [ 1 ] = 0 ; bb [ 0 ] = ! ( ii [ 1 ] == 1 ) ; xx [ 3 ] =
state [ 50 ] * state [ 51 ] ; xx [ 11 ] = state [ 49 ] * state [ 52 ] ; xx [
12 ] = state [ 49 ] * state [ 49 ] ; xx [ 13 ] = 1.0 ; xx [ 14 ] = ( xx [ 12
] + state [ 50 ] * state [ 50 ] ) * xx [ 2 ] - xx [ 13 ] ; xx [ 15 ] = - ( xx
[ 2 ] * ( xx [ 3 ] - xx [ 11 ] ) ) ; xx [ 14 ] = ( xx [ 15 ] == 0.0 && xx [
14 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 15 ] , xx [ 14 ] ) ; if ( xx [ 4 ] < 0.0 )
xx [ 15 ] = - 1.0 ; else if ( xx [ 4 ] > 0.0 ) xx [ 15 ] = + 1.0 ; else xx [
15 ] = 0.0 ; xx [ 4 ] = ( xx [ 12 ] + state [ 52 ] * state [ 52 ] ) * xx [ 2
] - xx [ 13 ] ; xx [ 17 ] = - ( xx [ 2 ] * ( state [ 51 ] * state [ 52 ] -
state [ 49 ] * state [ 50 ] ) ) ; xx [ 4 ] = ( xx [ 17 ] == 0.0 && xx [ 4 ]
== 0.0 ) ? 0.0 : atan2 ( xx [ 17 ] , xx [ 4 ] ) ; xx [ 12 ] = 0.5 ; xx [ 17 ]
= - ( xx [ 2 ] * ( xx [ 0 ] - xx [ 1 ] ) * xx [ 15 ] ) ; xx [ 18 ] = ( xx [ 3
] + xx [ 11 ] ) * xx [ 2 ] * xx [ 15 ] ; xx [ 17 ] = ( xx [ 18 ] == 0.0 && xx
[ 17 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 18 ] , xx [ 17 ] ) ; xx [ 0 ] = bb [ 0 ]
? xx [ 4 ] : xx [ 12 ] * xx [ 17 ] ; xx [ 1 ] = bb [ 0 ] ? xx [ 14 ] : xx [
15 ] * xx [ 0 ] ; xx [ 3 ] = fabs ( xx [ 7 ] ) - xx [ 10 ] ; if ( xx [ 3 ] <
0.0 ) ii [ 0 ] = - 1 ; else if ( xx [ 3 ] > 0.0 ) ii [ 0 ] = + 1 ; else ii [
0 ] = 0 ; ii [ 1 ] = ii [ 0 ] ; if ( 0 > ii [ 1 ] ) ii [ 1 ] = 0 ; bb [ 0 ] =
! ( ii [ 1 ] == 1 ) ; xx [ 3 ] = origState [ 50 ] * origState [ 51 ] ; xx [ 4
] = origState [ 49 ] * origState [ 52 ] ; xx [ 7 ] = origState [ 49 ] *
origState [ 49 ] ; xx [ 10 ] = ( xx [ 7 ] + origState [ 50 ] * origState [ 50
] ) * xx [ 2 ] - xx [ 13 ] ; xx [ 11 ] = - ( xx [ 2 ] * ( xx [ 3 ] - xx [ 4 ]
) ) ; xx [ 10 ] = ( xx [ 11 ] == 0.0 && xx [ 10 ] == 0.0 ) ? 0.0 : atan2 ( xx
[ 11 ] , xx [ 10 ] ) ; if ( xx [ 8 ] < 0.0 ) xx [ 11 ] = - 1.0 ; else if ( xx
[ 8 ] > 0.0 ) xx [ 11 ] = + 1.0 ; else xx [ 11 ] = 0.0 ; xx [ 8 ] = ( xx [ 7
] + origState [ 52 ] * origState [ 52 ] ) * xx [ 2 ] - xx [ 13 ] ; xx [ 14 ]
= - ( xx [ 2 ] * ( origState [ 51 ] * origState [ 52 ] - origState [ 49 ] *
origState [ 50 ] ) ) ; xx [ 8 ] = ( xx [ 14 ] == 0.0 && xx [ 8 ] == 0.0 ) ?
0.0 : atan2 ( xx [ 14 ] , xx [ 8 ] ) ; xx [ 7 ] = - ( xx [ 2 ] * ( xx [ 5 ] -
xx [ 6 ] ) * xx [ 11 ] ) ; xx [ 13 ] = ( xx [ 3 ] + xx [ 4 ] ) * xx [ 2 ] *
xx [ 11 ] ; xx [ 7 ] = ( xx [ 13 ] == 0.0 && xx [ 7 ] == 0.0 ) ? 0.0 : atan2
( xx [ 13 ] , xx [ 7 ] ) ; xx [ 2 ] = bb [ 0 ] ? xx [ 8 ] : xx [ 12 ] * xx [
7 ] ; xx [ 3 ] = bb [ 0 ] ? xx [ 10 ] : xx [ 11 ] * xx [ 2 ] ; xx [ 17 ] = xx
[ 1 ] ; xx [ 18 ] = xx [ 1 ] ; xx [ 19 ] = xx [ 1 ] ; xx [ 20 ] = xx [ 1 ] ;
xx [ 21 ] = xx [ 3 ] ; xx [ 22 ] = xx [ 3 ] ; xx [ 23 ] = xx [ 3 ] ; xx [ 1 ]
= xx [ 17 + ( partialType ) ] ; xx [ 3 ] = cos ( xx [ 1 ] ) ; xx [ 4 ] = sin
( xx [ 1 ] ) ; xx [ 1 ] = sin ( xx [ 16 ] ) ; xx [ 10 ] = xx [ 0 ] ; xx [ 11
] = xx [ 2 ] ; xx [ 12 ] = xx [ 0 ] ; xx [ 13 ] = xx [ 2 ] ; xx [ 14 ] = xx [
0 ] ; xx [ 15 ] = xx [ 2 ] ; xx [ 16 ] = xx [ 0 ] ; xx [ 0 ] = xx [ 10 + (
partialType ) ] ; xx [ 2 ] = cos ( xx [ 0 ] ) ; xx [ 5 ] = sin ( xx [ 0 ] ) ;
xx [ 0 ] = xx [ 3 ] * xx [ 5 ] ; xx [ 6 ] = xx [ 3 ] * xx [ 2 ] ; xx [ 10 ] =
xx [ 9 ] * xx [ 3 ] ; xx [ 11 ] = - ( xx [ 9 ] * xx [ 4 ] ) ; xx [ 12 ] = xx
[ 1 ] ; xx [ 13 ] = xx [ 2 ] * xx [ 4 ] + xx [ 0 ] * xx [ 1 ] ; xx [ 14 ] =
xx [ 6 ] - xx [ 1 ] * xx [ 5 ] * xx [ 4 ] ; xx [ 15 ] = - ( xx [ 9 ] * xx [ 5
] ) ; xx [ 16 ] = xx [ 4 ] * xx [ 5 ] - xx [ 6 ] * xx [ 1 ] ; xx [ 17 ] = xx
[ 0 ] + xx [ 2 ] * xx [ 1 ] * xx [ 4 ] ; xx [ 18 ] = xx [ 9 ] * xx [ 2 ] ;
pm_math_Quaternion_Matrix3x3Ctor_ra ( xx + 10 , xx + 0 ) ; state [ 49 ] = xx
[ 0 ] ; state [ 50 ] = xx [ 1 ] ; state [ 51 ] = xx [ 2 ] ; state [ 52 ] = xx
[ 3 ] ; } static void projectPartiallyTargetedPos_22_0 ( const double *
origState , int partialType , double * state ) { boolean_T bb [ 1 ] ; int ii
[ 3 ] ; double xx [ 24 ] ; xx [ 0 ] = state [ 69 ] * state [ 71 ] ; xx [ 1 ]
= state [ 68 ] * state [ 70 ] ; xx [ 2 ] = 2.0 ; xx [ 3 ] = ( xx [ 0 ] + xx [
1 ] ) * xx [ 2 ] ; xx [ 4 ] = fabs ( xx [ 3 ] ) > 1.0 ? atan2 ( xx [ 3 ] ,
0.0 ) : asin ( xx [ 3 ] ) ; xx [ 5 ] = origState [ 69 ] * origState [ 71 ] ;
xx [ 6 ] = origState [ 68 ] * origState [ 70 ] ; xx [ 7 ] = ( xx [ 5 ] + xx [
6 ] ) * xx [ 2 ] ; xx [ 8 ] = fabs ( xx [ 7 ] ) > 1.0 ? atan2 ( xx [ 7 ] ,
0.0 ) : asin ( xx [ 7 ] ) ; xx [ 9 ] = xx [ 4 ] ; xx [ 10 ] = xx [ 4 ] ; xx [
11 ] = xx [ 8 ] ; xx [ 12 ] = xx [ 8 ] ; xx [ 13 ] = xx [ 4 ] ; xx [ 14 ] =
xx [ 4 ] ; xx [ 15 ] = xx [ 8 ] ; xx [ 16 ] = xx [ 9 + ( partialType ) ] ; xx
[ 9 ] = cos ( xx [ 16 ] ) ; xx [ 10 ] = 0.99999999999999 ; xx [ 11 ] = fabs (
xx [ 3 ] ) - xx [ 10 ] ; if ( xx [ 11 ] < 0.0 ) ii [ 0 ] = - 1 ; else if ( xx
[ 11 ] > 0.0 ) ii [ 0 ] = + 1 ; else ii [ 0 ] = 0 ; ii [ 1 ] = ii [ 0 ] ; if
( 0 > ii [ 1 ] ) ii [ 1 ] = 0 ; bb [ 0 ] = ! ( ii [ 1 ] == 1 ) ; xx [ 3 ] =
state [ 69 ] * state [ 70 ] ; xx [ 11 ] = state [ 68 ] * state [ 71 ] ; xx [
12 ] = state [ 68 ] * state [ 68 ] ; xx [ 13 ] = 1.0 ; xx [ 14 ] = ( xx [ 12
] + state [ 69 ] * state [ 69 ] ) * xx [ 2 ] - xx [ 13 ] ; xx [ 15 ] = - ( xx
[ 2 ] * ( xx [ 3 ] - xx [ 11 ] ) ) ; xx [ 14 ] = ( xx [ 15 ] == 0.0 && xx [
14 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 15 ] , xx [ 14 ] ) ; if ( xx [ 4 ] < 0.0 )
xx [ 15 ] = - 1.0 ; else if ( xx [ 4 ] > 0.0 ) xx [ 15 ] = + 1.0 ; else xx [
15 ] = 0.0 ; xx [ 4 ] = ( xx [ 12 ] + state [ 71 ] * state [ 71 ] ) * xx [ 2
] - xx [ 13 ] ; xx [ 17 ] = - ( xx [ 2 ] * ( state [ 70 ] * state [ 71 ] -
state [ 68 ] * state [ 69 ] ) ) ; xx [ 4 ] = ( xx [ 17 ] == 0.0 && xx [ 4 ]
== 0.0 ) ? 0.0 : atan2 ( xx [ 17 ] , xx [ 4 ] ) ; xx [ 12 ] = 0.5 ; xx [ 17 ]
= - ( xx [ 2 ] * ( xx [ 0 ] - xx [ 1 ] ) * xx [ 15 ] ) ; xx [ 18 ] = ( xx [ 3
] + xx [ 11 ] ) * xx [ 2 ] * xx [ 15 ] ; xx [ 17 ] = ( xx [ 18 ] == 0.0 && xx
[ 17 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 18 ] , xx [ 17 ] ) ; xx [ 0 ] = bb [ 0 ]
? xx [ 4 ] : xx [ 12 ] * xx [ 17 ] ; xx [ 1 ] = bb [ 0 ] ? xx [ 14 ] : xx [
15 ] * xx [ 0 ] ; xx [ 3 ] = fabs ( xx [ 7 ] ) - xx [ 10 ] ; if ( xx [ 3 ] <
0.0 ) ii [ 0 ] = - 1 ; else if ( xx [ 3 ] > 0.0 ) ii [ 0 ] = + 1 ; else ii [
0 ] = 0 ; ii [ 1 ] = ii [ 0 ] ; if ( 0 > ii [ 1 ] ) ii [ 1 ] = 0 ; bb [ 0 ] =
! ( ii [ 1 ] == 1 ) ; xx [ 3 ] = origState [ 69 ] * origState [ 70 ] ; xx [ 4
] = origState [ 68 ] * origState [ 71 ] ; xx [ 7 ] = origState [ 68 ] *
origState [ 68 ] ; xx [ 10 ] = ( xx [ 7 ] + origState [ 69 ] * origState [ 69
] ) * xx [ 2 ] - xx [ 13 ] ; xx [ 11 ] = - ( xx [ 2 ] * ( xx [ 3 ] - xx [ 4 ]
) ) ; xx [ 10 ] = ( xx [ 11 ] == 0.0 && xx [ 10 ] == 0.0 ) ? 0.0 : atan2 ( xx
[ 11 ] , xx [ 10 ] ) ; if ( xx [ 8 ] < 0.0 ) xx [ 11 ] = - 1.0 ; else if ( xx
[ 8 ] > 0.0 ) xx [ 11 ] = + 1.0 ; else xx [ 11 ] = 0.0 ; xx [ 8 ] = ( xx [ 7
] + origState [ 71 ] * origState [ 71 ] ) * xx [ 2 ] - xx [ 13 ] ; xx [ 14 ]
= - ( xx [ 2 ] * ( origState [ 70 ] * origState [ 71 ] - origState [ 68 ] *
origState [ 69 ] ) ) ; xx [ 8 ] = ( xx [ 14 ] == 0.0 && xx [ 8 ] == 0.0 ) ?
0.0 : atan2 ( xx [ 14 ] , xx [ 8 ] ) ; xx [ 7 ] = - ( xx [ 2 ] * ( xx [ 5 ] -
xx [ 6 ] ) * xx [ 11 ] ) ; xx [ 13 ] = ( xx [ 3 ] + xx [ 4 ] ) * xx [ 2 ] *
xx [ 11 ] ; xx [ 7 ] = ( xx [ 13 ] == 0.0 && xx [ 7 ] == 0.0 ) ? 0.0 : atan2
( xx [ 13 ] , xx [ 7 ] ) ; xx [ 2 ] = bb [ 0 ] ? xx [ 8 ] : xx [ 12 ] * xx [
7 ] ; xx [ 3 ] = bb [ 0 ] ? xx [ 10 ] : xx [ 11 ] * xx [ 2 ] ; xx [ 17 ] = xx
[ 1 ] ; xx [ 18 ] = xx [ 1 ] ; xx [ 19 ] = xx [ 1 ] ; xx [ 20 ] = xx [ 1 ] ;
xx [ 21 ] = xx [ 3 ] ; xx [ 22 ] = xx [ 3 ] ; xx [ 23 ] = xx [ 3 ] ; xx [ 1 ]
= xx [ 17 + ( partialType ) ] ; xx [ 3 ] = cos ( xx [ 1 ] ) ; xx [ 4 ] = sin
( xx [ 1 ] ) ; xx [ 1 ] = sin ( xx [ 16 ] ) ; xx [ 10 ] = xx [ 0 ] ; xx [ 11
] = xx [ 2 ] ; xx [ 12 ] = xx [ 0 ] ; xx [ 13 ] = xx [ 2 ] ; xx [ 14 ] = xx [
0 ] ; xx [ 15 ] = xx [ 2 ] ; xx [ 16 ] = xx [ 0 ] ; xx [ 0 ] = xx [ 10 + (
partialType ) ] ; xx [ 2 ] = cos ( xx [ 0 ] ) ; xx [ 5 ] = sin ( xx [ 0 ] ) ;
xx [ 0 ] = xx [ 3 ] * xx [ 5 ] ; xx [ 6 ] = xx [ 3 ] * xx [ 2 ] ; xx [ 10 ] =
xx [ 9 ] * xx [ 3 ] ; xx [ 11 ] = - ( xx [ 9 ] * xx [ 4 ] ) ; xx [ 12 ] = xx
[ 1 ] ; xx [ 13 ] = xx [ 2 ] * xx [ 4 ] + xx [ 0 ] * xx [ 1 ] ; xx [ 14 ] =
xx [ 6 ] - xx [ 1 ] * xx [ 5 ] * xx [ 4 ] ; xx [ 15 ] = - ( xx [ 9 ] * xx [ 5
] ) ; xx [ 16 ] = xx [ 4 ] * xx [ 5 ] - xx [ 6 ] * xx [ 1 ] ; xx [ 17 ] = xx
[ 0 ] + xx [ 2 ] * xx [ 1 ] * xx [ 4 ] ; xx [ 18 ] = xx [ 9 ] * xx [ 2 ] ;
pm_math_Quaternion_Matrix3x3Ctor_ra ( xx + 10 , xx + 0 ) ; state [ 68 ] = xx
[ 0 ] ; state [ 69 ] = xx [ 1 ] ; state [ 70 ] = xx [ 2 ] ; state [ 71 ] = xx
[ 3 ] ; } static void projectPartiallyTargetedPos_24_0 ( const double *
origState , int partialType , double * state ) { boolean_T bb [ 1 ] ; int ii
[ 3 ] ; double xx [ 24 ] ; xx [ 0 ] = state [ 78 ] * state [ 80 ] ; xx [ 1 ]
= state [ 77 ] * state [ 79 ] ; xx [ 2 ] = 2.0 ; xx [ 3 ] = ( xx [ 0 ] + xx [
1 ] ) * xx [ 2 ] ; xx [ 4 ] = fabs ( xx [ 3 ] ) > 1.0 ? atan2 ( xx [ 3 ] ,
0.0 ) : asin ( xx [ 3 ] ) ; xx [ 5 ] = origState [ 78 ] * origState [ 80 ] ;
xx [ 6 ] = origState [ 77 ] * origState [ 79 ] ; xx [ 7 ] = ( xx [ 5 ] + xx [
6 ] ) * xx [ 2 ] ; xx [ 8 ] = fabs ( xx [ 7 ] ) > 1.0 ? atan2 ( xx [ 7 ] ,
0.0 ) : asin ( xx [ 7 ] ) ; xx [ 9 ] = xx [ 4 ] ; xx [ 10 ] = xx [ 4 ] ; xx [
11 ] = xx [ 8 ] ; xx [ 12 ] = xx [ 8 ] ; xx [ 13 ] = xx [ 4 ] ; xx [ 14 ] =
xx [ 4 ] ; xx [ 15 ] = xx [ 8 ] ; xx [ 16 ] = xx [ 9 + ( partialType ) ] ; xx
[ 9 ] = cos ( xx [ 16 ] ) ; xx [ 10 ] = 0.99999999999999 ; xx [ 11 ] = fabs (
xx [ 3 ] ) - xx [ 10 ] ; if ( xx [ 11 ] < 0.0 ) ii [ 0 ] = - 1 ; else if ( xx
[ 11 ] > 0.0 ) ii [ 0 ] = + 1 ; else ii [ 0 ] = 0 ; ii [ 1 ] = ii [ 0 ] ; if
( 0 > ii [ 1 ] ) ii [ 1 ] = 0 ; bb [ 0 ] = ! ( ii [ 1 ] == 1 ) ; xx [ 3 ] =
state [ 78 ] * state [ 79 ] ; xx [ 11 ] = state [ 77 ] * state [ 80 ] ; xx [
12 ] = state [ 77 ] * state [ 77 ] ; xx [ 13 ] = 1.0 ; xx [ 14 ] = ( xx [ 12
] + state [ 78 ] * state [ 78 ] ) * xx [ 2 ] - xx [ 13 ] ; xx [ 15 ] = - ( xx
[ 2 ] * ( xx [ 3 ] - xx [ 11 ] ) ) ; xx [ 14 ] = ( xx [ 15 ] == 0.0 && xx [
14 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 15 ] , xx [ 14 ] ) ; if ( xx [ 4 ] < 0.0 )
xx [ 15 ] = - 1.0 ; else if ( xx [ 4 ] > 0.0 ) xx [ 15 ] = + 1.0 ; else xx [
15 ] = 0.0 ; xx [ 4 ] = ( xx [ 12 ] + state [ 80 ] * state [ 80 ] ) * xx [ 2
] - xx [ 13 ] ; xx [ 17 ] = - ( xx [ 2 ] * ( state [ 79 ] * state [ 80 ] -
state [ 77 ] * state [ 78 ] ) ) ; xx [ 4 ] = ( xx [ 17 ] == 0.0 && xx [ 4 ]
== 0.0 ) ? 0.0 : atan2 ( xx [ 17 ] , xx [ 4 ] ) ; xx [ 12 ] = 0.5 ; xx [ 17 ]
= - ( xx [ 2 ] * ( xx [ 0 ] - xx [ 1 ] ) * xx [ 15 ] ) ; xx [ 18 ] = ( xx [ 3
] + xx [ 11 ] ) * xx [ 2 ] * xx [ 15 ] ; xx [ 17 ] = ( xx [ 18 ] == 0.0 && xx
[ 17 ] == 0.0 ) ? 0.0 : atan2 ( xx [ 18 ] , xx [ 17 ] ) ; xx [ 0 ] = bb [ 0 ]
? xx [ 4 ] : xx [ 12 ] * xx [ 17 ] ; xx [ 1 ] = bb [ 0 ] ? xx [ 14 ] : xx [
15 ] * xx [ 0 ] ; xx [ 3 ] = fabs ( xx [ 7 ] ) - xx [ 10 ] ; if ( xx [ 3 ] <
0.0 ) ii [ 0 ] = - 1 ; else if ( xx [ 3 ] > 0.0 ) ii [ 0 ] = + 1 ; else ii [
0 ] = 0 ; ii [ 1 ] = ii [ 0 ] ; if ( 0 > ii [ 1 ] ) ii [ 1 ] = 0 ; bb [ 0 ] =
! ( ii [ 1 ] == 1 ) ; xx [ 3 ] = origState [ 78 ] * origState [ 79 ] ; xx [ 4
] = origState [ 77 ] * origState [ 80 ] ; xx [ 7 ] = origState [ 77 ] *
origState [ 77 ] ; xx [ 10 ] = ( xx [ 7 ] + origState [ 78 ] * origState [ 78
] ) * xx [ 2 ] - xx [ 13 ] ; xx [ 11 ] = - ( xx [ 2 ] * ( xx [ 3 ] - xx [ 4 ]
) ) ; xx [ 10 ] = ( xx [ 11 ] == 0.0 && xx [ 10 ] == 0.0 ) ? 0.0 : atan2 ( xx
[ 11 ] , xx [ 10 ] ) ; if ( xx [ 8 ] < 0.0 ) xx [ 11 ] = - 1.0 ; else if ( xx
[ 8 ] > 0.0 ) xx [ 11 ] = + 1.0 ; else xx [ 11 ] = 0.0 ; xx [ 8 ] = ( xx [ 7
] + origState [ 80 ] * origState [ 80 ] ) * xx [ 2 ] - xx [ 13 ] ; xx [ 14 ]
= - ( xx [ 2 ] * ( origState [ 79 ] * origState [ 80 ] - origState [ 77 ] *
origState [ 78 ] ) ) ; xx [ 8 ] = ( xx [ 14 ] == 0.0 && xx [ 8 ] == 0.0 ) ?
0.0 : atan2 ( xx [ 14 ] , xx [ 8 ] ) ; xx [ 7 ] = - ( xx [ 2 ] * ( xx [ 5 ] -
xx [ 6 ] ) * xx [ 11 ] ) ; xx [ 13 ] = ( xx [ 3 ] + xx [ 4 ] ) * xx [ 2 ] *
xx [ 11 ] ; xx [ 7 ] = ( xx [ 13 ] == 0.0 && xx [ 7 ] == 0.0 ) ? 0.0 : atan2
( xx [ 13 ] , xx [ 7 ] ) ; xx [ 2 ] = bb [ 0 ] ? xx [ 8 ] : xx [ 12 ] * xx [
7 ] ; xx [ 3 ] = bb [ 0 ] ? xx [ 10 ] : xx [ 11 ] * xx [ 2 ] ; xx [ 17 ] = xx
[ 1 ] ; xx [ 18 ] = xx [ 1 ] ; xx [ 19 ] = xx [ 1 ] ; xx [ 20 ] = xx [ 1 ] ;
xx [ 21 ] = xx [ 3 ] ; xx [ 22 ] = xx [ 3 ] ; xx [ 23 ] = xx [ 3 ] ; xx [ 1 ]
= xx [ 17 + ( partialType ) ] ; xx [ 3 ] = cos ( xx [ 1 ] ) ; xx [ 4 ] = sin
( xx [ 1 ] ) ; xx [ 1 ] = sin ( xx [ 16 ] ) ; xx [ 10 ] = xx [ 0 ] ; xx [ 11
] = xx [ 2 ] ; xx [ 12 ] = xx [ 0 ] ; xx [ 13 ] = xx [ 2 ] ; xx [ 14 ] = xx [
0 ] ; xx [ 15 ] = xx [ 2 ] ; xx [ 16 ] = xx [ 0 ] ; xx [ 0 ] = xx [ 10 + (
partialType ) ] ; xx [ 2 ] = cos ( xx [ 0 ] ) ; xx [ 5 ] = sin ( xx [ 0 ] ) ;
xx [ 0 ] = xx [ 3 ] * xx [ 5 ] ; xx [ 6 ] = xx [ 3 ] * xx [ 2 ] ; xx [ 10 ] =
xx [ 9 ] * xx [ 3 ] ; xx [ 11 ] = - ( xx [ 9 ] * xx [ 4 ] ) ; xx [ 12 ] = xx
[ 1 ] ; xx [ 13 ] = xx [ 2 ] * xx [ 4 ] + xx [ 0 ] * xx [ 1 ] ; xx [ 14 ] =
xx [ 6 ] - xx [ 1 ] * xx [ 5 ] * xx [ 4 ] ; xx [ 15 ] = - ( xx [ 9 ] * xx [ 5
] ) ; xx [ 16 ] = xx [ 4 ] * xx [ 5 ] - xx [ 6 ] * xx [ 1 ] ; xx [ 17 ] = xx
[ 0 ] + xx [ 2 ] * xx [ 1 ] * xx [ 4 ] ; xx [ 18 ] = xx [ 9 ] * xx [ 2 ] ;
pm_math_Quaternion_Matrix3x3Ctor_ra ( xx + 10 , xx + 0 ) ; state [ 77 ] = xx
[ 0 ] ; state [ 78 ] = xx [ 1 ] ; state [ 79 ] = xx [ 2 ] ; state [ 80 ] = xx
[ 3 ] ; } void triped_a151ee3d_1_projectPartiallyTargetedPos ( const void *
mech , size_t stageIdx , size_t primIdx , const double * origState , int
partialType , double * state ) { ( void ) mech ; ( void ) stageIdx ; ( void )
primIdx ; ( void ) origState ; ( void ) partialType ; ( void ) state ; switch
( ( stageIdx * 6 + primIdx ) ) { case 36 : projectPartiallyTargetedPos_6_0 (
origState , partialType , state ) ; break ; case 48 :
projectPartiallyTargetedPos_8_0 ( origState , partialType , state ) ; break ;
case 84 : projectPartiallyTargetedPos_14_0 ( origState , partialType , state
) ; break ; case 96 : projectPartiallyTargetedPos_16_0 ( origState ,
partialType , state ) ; break ; case 132 : projectPartiallyTargetedPos_22_0 (
origState , partialType , state ) ; break ; case 144 :
projectPartiallyTargetedPos_24_0 ( origState , partialType , state ) ; break
; } } void triped_a151ee3d_1_propagateMotion ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const double * state , double *
motionData ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int
* rtdvi = rtdv -> mInts . mValues ; double xx [ 444 ] ; ( void ) mech ; (
void ) rtdvd ; ( void ) rtdvi ; xx [ 0 ] = 1.0 ; xx [ 1 ] = - xx [ 0 ] ; xx [
2 ] = 0.0 ; xx [ 3 ] = 0.265 ; xx [ 4 ] = 3.560000000000001e-3 ; xx [ 5 ] =
0.5 ; xx [ 6 ] = xx [ 5 ] * state [ 0 ] ; xx [ 7 ] = sin ( xx [ 6 ] ) ; xx [
8 ] = xx [ 5 ] * state [ 1 ] ; xx [ 9 ] = sin ( xx [ 8 ] ) ; xx [ 10 ] = xx [
7 ] * xx [ 9 ] ; xx [ 11 ] = xx [ 5 ] * state [ 2 ] ; xx [ 12 ] = sin ( xx [
11 ] ) ; xx [ 13 ] = cos ( xx [ 11 ] ) ; xx [ 11 ] = cos ( xx [ 6 ] ) ; xx [
6 ] = cos ( xx [ 8 ] ) ; xx [ 8 ] = xx [ 11 ] * xx [ 6 ] ; xx [ 14 ] = xx [
10 ] * xx [ 12 ] - xx [ 13 ] * xx [ 8 ] ; xx [ 15 ] = xx [ 6 ] * xx [ 7 ] ;
xx [ 6 ] = xx [ 11 ] * xx [ 9 ] ; xx [ 7 ] = xx [ 13 ] * xx [ 15 ] + xx [ 6 ]
* xx [ 12 ] ; xx [ 9 ] = - xx [ 7 ] ; xx [ 11 ] = xx [ 15 ] * xx [ 12 ] - xx
[ 13 ] * xx [ 6 ] ; xx [ 6 ] = xx [ 8 ] * xx [ 12 ] + xx [ 13 ] * xx [ 10 ] ;
xx [ 8 ] = - xx [ 6 ] ; xx [ 15 ] = xx [ 9 ] ; xx [ 16 ] = xx [ 11 ] ; xx [
17 ] = xx [ 8 ] ; xx [ 10 ] = 8.499999999999917e-3 ; xx [ 18 ] = xx [ 10 ] *
xx [ 11 ] ; xx [ 19 ] = 0.09430000000000001 ; xx [ 20 ] = xx [ 6 ] * xx [ 19
] - xx [ 7 ] * xx [ 10 ] ; xx [ 21 ] = xx [ 19 ] * xx [ 11 ] ; xx [ 22 ] = -
xx [ 18 ] ; xx [ 23 ] = xx [ 20 ] ; xx [ 24 ] = xx [ 21 ] ;
pm_math_Vector3_cross_ra ( xx + 15 , xx + 22 , xx + 25 ) ; xx [ 22 ] = 2.0 ;
xx [ 23 ] = ( xx [ 25 ] - xx [ 18 ] * xx [ 14 ] ) * xx [ 22 ] - xx [ 19 ] ;
xx [ 18 ] = ( xx [ 14 ] * xx [ 20 ] + xx [ 26 ] ) * xx [ 22 ] ; xx [ 20 ] = -
xx [ 18 ] ; xx [ 24 ] = xx [ 22 ] * ( xx [ 27 ] + xx [ 21 ] * xx [ 14 ] ) -
xx [ 10 ] ; xx [ 21 ] = xx [ 5 ] * state [ 6 ] ; xx [ 25 ] = cos ( xx [ 21 ]
) ; xx [ 26 ] = sin ( xx [ 21 ] ) ; xx [ 21 ] = 1.5457 ; xx [ 27 ] = 1.405725
; xx [ 28 ] = 0.4527250000000002 ; xx [ 29 ] = xx [ 28 ] * xx [ 26 ] ; xx [
30 ] = xx [ 27 ] * xx [ 26 ] ; xx [ 31 ] = xx [ 21 ] - ( xx [ 27 ] - xx [ 22
] * ( xx [ 25 ] * xx [ 29 ] + xx [ 30 ] * xx [ 26 ] ) ) ; xx [ 32 ] =
0.04550000000000134 ; xx [ 33 ] = xx [ 28 ] + ( xx [ 25 ] * xx [ 30 ] - xx [
29 ] * xx [ 26 ] ) * xx [ 22 ] - xx [ 32 ] ; xx [ 29 ] = 0.7071067811865476 ;
xx [ 30 ] = xx [ 5 ] * state [ 8 ] ; xx [ 34 ] = xx [ 29 ] * cos ( xx [ 30 ]
) ; xx [ 35 ] = - xx [ 34 ] ; xx [ 36 ] = - ( xx [ 29 ] * sin ( xx [ 30 ] ) )
; xx [ 30 ] = - 9.300000000000017e-3 ; xx [ 37 ] = 9.999999999999957e-3 ; xx
[ 38 ] = - 0.0455 ; xx [ 39 ] = 0.9813587152233355 ; xx [ 40 ] = -
8.90329107482098e-3 ; xx [ 41 ] = 0.04727447558555155 ; xx [ 42 ] =
0.1860669971310137 ; xx [ 43 ] = xx [ 5 ] * state [ 10 ] ; xx [ 44 ] =
0.0960996545167382 ; xx [ 45 ] = sin ( xx [ 43 ] ) ; xx [ 46 ] =
1.177948454025794e-4 ; xx [ 47 ] = 0.9953717107322962 ; xx [ 48 ] = cos ( xx
[ 43 ] ) ; xx [ 49 ] = - ( xx [ 44 ] * xx [ 45 ] ) ; xx [ 50 ] = xx [ 46 ] *
xx [ 45 ] ; xx [ 51 ] = xx [ 47 ] * xx [ 45 ] ; pm_math_Quaternion_compose_ra
( xx + 39 , xx + 48 , xx + 52 ) ; xx [ 39 ] = 0.139807669447128 ; xx [ 40 ] =
- 0.02492486046921943 ; xx [ 41 ] = - 9.061899534334276e-7 ; xx [ 42 ] =
0.01185157563810752 ; pm_math_Quaternion_xform_ra ( xx + 52 , xx + 40 , xx +
48 ) ; xx [ 43 ] = 0.0549998406976098 ; xx [ 45 ] = 0.06144 ; xx [ 56 ] =
0.9988422572316213 ; xx [ 57 ] = - 6.00792342022948e-5 ; xx [ 58 ] = -
0.04810551968680427 ; xx [ 59 ] = 2.312115552059532e-5 ; xx [ 60 ] = state [
12 ] ; xx [ 61 ] = state [ 13 ] ; xx [ 62 ] = state [ 14 ] ; xx [ 63 ] =
state [ 15 ] ; xx [ 64 ] = - 0.9999999999996456 ; xx [ 65 ] =
1.335114243000915e-9 ; xx [ 66 ] = 1.564242624680818e-7 ; xx [ 67 ] = -
8.27384461422298e-7 ; pm_math_Quaternion_composeInverse_ra ( xx + 60 , xx +
64 , xx + 68 ) ; pm_math_Quaternion_compose_ra ( xx + 56 , xx + 68 , xx + 60
) ; xx [ 51 ] = 0.06203617700142335 ; xx [ 68 ] = 0.05551189931534764 ; xx [
69 ] = 9.185648409514065e-8 ; xx [ 70 ] = 1.23198241897863e-6 ;
pm_math_Quaternion_xform_ra ( xx + 60 , xx + 68 , xx + 71 ) ; xx [ 74 ] = xx
[ 51 ] + xx [ 71 ] ; xx [ 75 ] = 6.252064263292171e-7 ; xx [ 76 ] = xx [ 75 ]
+ xx [ 72 ] ; xx [ 71 ] = 4.366561113205437e-3 ; xx [ 72 ] = xx [ 73 ] - xx [
71 ] ; xx [ 77 ] = - 0.9813501000307463 ; xx [ 78 ] = - 9.021345794401411e-3
; xx [ 79 ] = - 0.04725208941316491 ; xx [ 80 ] = 0.1861124298261472 ; xx [
73 ] = xx [ 5 ] * state [ 19 ] ; xx [ 81 ] = sin ( xx [ 73 ] ) ; xx [ 82 ] =
cos ( xx [ 73 ] ) ; xx [ 83 ] = - ( xx [ 44 ] * xx [ 81 ] ) ; xx [ 84 ] = xx
[ 46 ] * xx [ 81 ] ; xx [ 85 ] = xx [ 47 ] * xx [ 81 ] ;
pm_math_Quaternion_compose_ra ( xx + 77 , xx + 82 , xx + 86 ) ;
pm_math_Quaternion_xform_ra ( xx + 86 , xx + 40 , xx + 77 ) ; xx [ 80 ] =
state [ 21 ] ; xx [ 81 ] = state [ 22 ] ; xx [ 82 ] = state [ 23 ] ; xx [ 83
] = state [ 24 ] ; pm_math_Quaternion_composeInverse_ra ( xx + 80 , xx + 64 ,
xx + 90 ) ; pm_math_Quaternion_compose_ra ( xx + 56 , xx + 90 , xx + 80 ) ;
pm_math_Quaternion_xform_ra ( xx + 80 , xx + 68 , xx + 90 ) ; xx [ 73 ] = xx
[ 51 ] + xx [ 90 ] ; xx [ 84 ] = xx [ 75 ] + xx [ 91 ] ; xx [ 85 ] = xx [ 92
] - xx [ 71 ] ; xx [ 90 ] = 0.5000000000000001 ; xx [ 91 ] =
0.8660254037844386 ; xx [ 92 ] = 0.1325 ; xx [ 93 ] = - xx [ 92 ] ; xx [ 94 ]
= 0.2294967320028763 ; xx [ 95 ] = - xx [ 94 ] ; xx [ 96 ] = xx [ 5 ] * state
[ 28 ] ; xx [ 97 ] = sin ( xx [ 96 ] ) ; xx [ 98 ] = xx [ 5 ] * state [ 29 ]
; xx [ 99 ] = sin ( xx [ 98 ] ) ; xx [ 100 ] = xx [ 97 ] * xx [ 99 ] ; xx [
101 ] = xx [ 5 ] * state [ 30 ] ; xx [ 102 ] = sin ( xx [ 101 ] ) ; xx [ 103
] = cos ( xx [ 101 ] ) ; xx [ 101 ] = cos ( xx [ 96 ] ) ; xx [ 96 ] = cos (
xx [ 98 ] ) ; xx [ 98 ] = xx [ 101 ] * xx [ 96 ] ; xx [ 104 ] = xx [ 100 ] *
xx [ 102 ] - xx [ 103 ] * xx [ 98 ] ; xx [ 105 ] = xx [ 96 ] * xx [ 97 ] ; xx
[ 96 ] = xx [ 101 ] * xx [ 99 ] ; xx [ 97 ] = xx [ 103 ] * xx [ 105 ] + xx [
96 ] * xx [ 102 ] ; xx [ 99 ] = - xx [ 97 ] ; xx [ 101 ] = xx [ 105 ] * xx [
102 ] - xx [ 103 ] * xx [ 96 ] ; xx [ 96 ] = xx [ 98 ] * xx [ 102 ] + xx [
103 ] * xx [ 100 ] ; xx [ 98 ] = - xx [ 96 ] ; xx [ 105 ] = xx [ 99 ] ; xx [
106 ] = xx [ 101 ] ; xx [ 107 ] = xx [ 98 ] ; xx [ 100 ] = xx [ 10 ] * xx [
101 ] ; xx [ 108 ] = xx [ 96 ] * xx [ 19 ] - xx [ 97 ] * xx [ 10 ] ; xx [ 109
] = xx [ 19 ] * xx [ 101 ] ; xx [ 110 ] = - xx [ 100 ] ; xx [ 111 ] = xx [
108 ] ; xx [ 112 ] = xx [ 109 ] ; pm_math_Vector3_cross_ra ( xx + 105 , xx +
110 , xx + 113 ) ; xx [ 105 ] = ( xx [ 113 ] - xx [ 100 ] * xx [ 104 ] ) * xx
[ 22 ] - xx [ 19 ] ; xx [ 100 ] = ( xx [ 104 ] * xx [ 108 ] + xx [ 114 ] ) *
xx [ 22 ] ; xx [ 106 ] = xx [ 22 ] * ( xx [ 115 ] + xx [ 109 ] * xx [ 104 ] )
- xx [ 10 ] ; xx [ 107 ] = xx [ 5 ] * state [ 34 ] ; xx [ 108 ] = cos ( xx [
107 ] ) ; xx [ 109 ] = sin ( xx [ 107 ] ) ; xx [ 107 ] = 0.452725 ; xx [ 110
] = xx [ 107 ] * xx [ 109 ] ; xx [ 111 ] = xx [ 27 ] * xx [ 109 ] ; xx [ 112
] = xx [ 21 ] - ( xx [ 27 ] - xx [ 22 ] * ( xx [ 108 ] * xx [ 110 ] + xx [
111 ] * xx [ 109 ] ) ) ; xx [ 113 ] = xx [ 107 ] + ( xx [ 108 ] * xx [ 111 ]
- xx [ 110 ] * xx [ 109 ] ) * xx [ 22 ] - xx [ 32 ] ; xx [ 110 ] = xx [ 5 ] *
state [ 36 ] ; xx [ 111 ] = xx [ 29 ] * cos ( xx [ 110 ] ) ; xx [ 114 ] = -
xx [ 111 ] ; xx [ 115 ] = - ( xx [ 29 ] * sin ( xx [ 110 ] ) ) ; xx [ 116 ] =
0.651818103933012 ; xx [ 117 ] = 0.03648925127026437 ; xx [ 118 ] =
0.031347714040858 ; xx [ 119 ] = - 0.7568480790431602 ; xx [ 110 ] = xx [ 5 ]
* state [ 38 ] ; xx [ 120 ] = sin ( xx [ 110 ] ) ; xx [ 121 ] = cos ( xx [
110 ] ) ; xx [ 122 ] = - ( xx [ 44 ] * xx [ 120 ] ) ; xx [ 123 ] = xx [ 46 ]
* xx [ 120 ] ; xx [ 124 ] = xx [ 47 ] * xx [ 120 ] ;
pm_math_Quaternion_compose_ra ( xx + 116 , xx + 121 , xx + 125 ) ; xx [ 110 ]
= 0.02227257547533662 ; pm_math_Quaternion_xform_ra ( xx + 125 , xx + 40 , xx
+ 116 ) ; xx [ 119 ] = 0.1485769137339153 ; xx [ 120 ] = state [ 40 ] ; xx [
121 ] = state [ 41 ] ; xx [ 122 ] = state [ 42 ] ; xx [ 123 ] = state [ 43 ]
; pm_math_Quaternion_composeInverse_ra ( xx + 120 , xx + 64 , xx + 129 ) ;
pm_math_Quaternion_compose_ra ( xx + 56 , xx + 129 , xx + 120 ) ;
pm_math_Quaternion_xform_ra ( xx + 120 , xx + 68 , xx + 129 ) ; xx [ 124 ] =
xx [ 51 ] + xx [ 129 ] ; xx [ 132 ] = xx [ 75 ] + xx [ 130 ] ; xx [ 129 ] =
xx [ 131 ] - xx [ 71 ] ; xx [ 133 ] = - 0.3294969578258811 ; xx [ 134 ] = -
0.04543218271089525 ; xx [ 135 ] = - 0.01581333007230693 ; xx [ 136 ] =
0.9429303315460998 ; xx [ 130 ] = xx [ 5 ] * state [ 47 ] ; xx [ 131 ] = sin
( xx [ 130 ] ) ; xx [ 137 ] = cos ( xx [ 130 ] ) ; xx [ 138 ] = - ( xx [ 44 ]
* xx [ 131 ] ) ; xx [ 139 ] = xx [ 46 ] * xx [ 131 ] ; xx [ 140 ] = xx [ 47 ]
* xx [ 131 ] ; pm_math_Quaternion_compose_ra ( xx + 133 , xx + 137 , xx + 141
) ; xx [ 130 ] = 0.1175350939717913 ; pm_math_Quaternion_xform_ra ( xx + 141
, xx + 40 , xx + 133 ) ; xx [ 131 ] = 0.09357707303630548 ; xx [ 136 ] =
state [ 49 ] ; xx [ 137 ] = state [ 50 ] ; xx [ 138 ] = state [ 51 ] ; xx [
139 ] = state [ 52 ] ; pm_math_Quaternion_composeInverse_ra ( xx + 136 , xx +
64 , xx + 145 ) ; pm_math_Quaternion_compose_ra ( xx + 56 , xx + 145 , xx +
136 ) ; pm_math_Quaternion_xform_ra ( xx + 136 , xx + 68 , xx + 145 ) ; xx [
140 ] = xx [ 51 ] + xx [ 145 ] ; xx [ 148 ] = xx [ 75 ] + xx [ 146 ] ; xx [
145 ] = xx [ 147 ] - xx [ 71 ] ; xx [ 146 ] = 0.4999999999999998 ; xx [ 147 ]
= 0.8660254037844387 ; xx [ 149 ] = 0.1325000000000001 ; xx [ 150 ] = - xx [
149 ] ; xx [ 151 ] = 0.2294967320028762 ; xx [ 152 ] = xx [ 5 ] * state [ 56
] ; xx [ 153 ] = sin ( xx [ 152 ] ) ; xx [ 154 ] = xx [ 5 ] * state [ 57 ] ;
xx [ 155 ] = sin ( xx [ 154 ] ) ; xx [ 156 ] = xx [ 153 ] * xx [ 155 ] ; xx [
157 ] = xx [ 5 ] * state [ 58 ] ; xx [ 158 ] = sin ( xx [ 157 ] ) ; xx [ 159
] = cos ( xx [ 157 ] ) ; xx [ 157 ] = cos ( xx [ 152 ] ) ; xx [ 152 ] = cos (
xx [ 154 ] ) ; xx [ 154 ] = xx [ 157 ] * xx [ 152 ] ; xx [ 160 ] = xx [ 156 ]
* xx [ 158 ] - xx [ 159 ] * xx [ 154 ] ; xx [ 161 ] = xx [ 152 ] * xx [ 153 ]
; xx [ 152 ] = xx [ 157 ] * xx [ 155 ] ; xx [ 153 ] = xx [ 159 ] * xx [ 161 ]
+ xx [ 152 ] * xx [ 158 ] ; xx [ 155 ] = - xx [ 153 ] ; xx [ 157 ] = xx [ 161
] * xx [ 158 ] - xx [ 159 ] * xx [ 152 ] ; xx [ 152 ] = xx [ 154 ] * xx [ 158
] + xx [ 159 ] * xx [ 156 ] ; xx [ 154 ] = - xx [ 152 ] ; xx [ 161 ] = xx [
155 ] ; xx [ 162 ] = xx [ 157 ] ; xx [ 163 ] = xx [ 154 ] ; xx [ 156 ] = xx [
10 ] * xx [ 157 ] ; xx [ 164 ] = xx [ 152 ] * xx [ 19 ] - xx [ 153 ] * xx [
10 ] ; xx [ 165 ] = xx [ 19 ] * xx [ 157 ] ; xx [ 166 ] = - xx [ 156 ] ; xx [
167 ] = xx [ 164 ] ; xx [ 168 ] = xx [ 165 ] ; pm_math_Vector3_cross_ra ( xx
+ 161 , xx + 166 , xx + 169 ) ; xx [ 161 ] = ( xx [ 169 ] - xx [ 156 ] * xx [
160 ] ) * xx [ 22 ] - xx [ 19 ] ; xx [ 156 ] = ( xx [ 160 ] * xx [ 164 ] + xx
[ 170 ] ) * xx [ 22 ] ; xx [ 162 ] = xx [ 22 ] * ( xx [ 171 ] + xx [ 165 ] *
xx [ 160 ] ) - xx [ 10 ] ; xx [ 163 ] = xx [ 5 ] * state [ 62 ] ; xx [ 164 ]
= cos ( xx [ 163 ] ) ; xx [ 165 ] = sin ( xx [ 163 ] ) ; xx [ 163 ] = xx [
107 ] * xx [ 165 ] ; xx [ 166 ] = xx [ 27 ] * xx [ 165 ] ; xx [ 167 ] = xx [
21 ] - ( xx [ 27 ] - xx [ 22 ] * ( xx [ 164 ] * xx [ 163 ] + xx [ 166 ] * xx
[ 165 ] ) ) ; xx [ 21 ] = xx [ 107 ] + ( xx [ 164 ] * xx [ 166 ] - xx [ 163 ]
* xx [ 165 ] ) * xx [ 22 ] - xx [ 32 ] ; xx [ 27 ] = xx [ 5 ] * state [ 64 ]
; xx [ 32 ] = xx [ 29 ] * cos ( xx [ 27 ] ) ; xx [ 107 ] = - xx [ 32 ] ; xx [
163 ] = - ( xx [ 29 ] * sin ( xx [ 27 ] ) ) ; xx [ 168 ] = -
0.3295406112903234 ; xx [ 169 ] = 0.04539254234508536 ; xx [ 170 ] = -
0.01592676154469353 ; xx [ 171 ] = - 0.942915076174174 ; xx [ 27 ] = xx [ 5 ]
* state [ 66 ] ; xx [ 29 ] = sin ( xx [ 27 ] ) ; xx [ 172 ] = cos ( xx [ 27 ]
) ; xx [ 173 ] = - ( xx [ 44 ] * xx [ 29 ] ) ; xx [ 174 ] = xx [ 46 ] * xx [
29 ] ; xx [ 175 ] = xx [ 47 ] * xx [ 29 ] ; pm_math_Quaternion_compose_ra (
xx + 168 , xx + 172 , xx + 176 ) ; xx [ 27 ] = 0.1175350939717913 ;
pm_math_Quaternion_xform_ra ( xx + 176 , xx + 40 , xx + 168 ) ; xx [ 29 ] =
0.09357707303630539 ; xx [ 171 ] = state [ 68 ] ; xx [ 172 ] = state [ 69 ] ;
xx [ 173 ] = state [ 70 ] ; xx [ 174 ] = state [ 71 ] ;
pm_math_Quaternion_composeInverse_ra ( xx + 171 , xx + 64 , xx + 180 ) ;
pm_math_Quaternion_compose_ra ( xx + 56 , xx + 180 , xx + 171 ) ;
pm_math_Quaternion_xform_ra ( xx + 171 , xx + 68 , xx + 180 ) ; xx [ 166 ] =
xx [ 51 ] + xx [ 180 ] ; xx [ 175 ] = xx [ 75 ] + xx [ 181 ] ; xx [ 180 ] =
xx [ 182 ] - xx [ 71 ] ; xx [ 181 ] = 0.651853142204865 ; xx [ 182 ] = -
0.03641083691649384 ; xx [ 183 ] = 0.03143875934085798 ; xx [ 184 ] =
0.7568179017199528 ; xx [ 185 ] = xx [ 5 ] * state [ 75 ] ; xx [ 186 ] = sin
( xx [ 185 ] ) ; xx [ 187 ] = cos ( xx [ 185 ] ) ; xx [ 188 ] = - ( xx [ 44 ]
* xx [ 186 ] ) ; xx [ 189 ] = xx [ 46 ] * xx [ 186 ] ; xx [ 190 ] = xx [ 47 ]
* xx [ 186 ] ; pm_math_Quaternion_compose_ra ( xx + 181 , xx + 187 , xx + 191
) ; xx [ 181 ] = 0.0222725754753367 ; pm_math_Quaternion_xform_ra ( xx + 191
, xx + 40 , xx + 182 ) ; xx [ 40 ] = 0.1485769137339152 ; xx [ 185 ] = state
[ 77 ] ; xx [ 186 ] = state [ 78 ] ; xx [ 187 ] = state [ 79 ] ; xx [ 188 ] =
state [ 80 ] ; pm_math_Quaternion_composeInverse_ra ( xx + 185 , xx + 64 , xx
+ 195 ) ; pm_math_Quaternion_compose_ra ( xx + 56 , xx + 195 , xx + 185 ) ;
pm_math_Quaternion_xform_ra ( xx + 185 , xx + 68 , xx + 56 ) ; xx [ 41 ] = xx
[ 51 ] + xx [ 56 ] ; xx [ 42 ] = xx [ 75 ] + xx [ 57 ] ; xx [ 51 ] = xx [ 58
] - xx [ 71 ] ; pm_math_Quaternion_compose_ra ( xx + 52 , xx + 60 , xx + 56 )
; xx [ 195 ] = xx [ 74 ] ; xx [ 196 ] = xx [ 76 ] ; xx [ 197 ] = xx [ 72 ] ;
pm_math_Quaternion_xform_ra ( xx + 52 , xx + 195 , xx + 198 ) ; xx [ 71 ] =
xx [ 3 ] - xx [ 23 ] ; pm_math_Quaternion_compose_ra ( xx + 86 , xx + 80 , xx
+ 201 ) ; xx [ 205 ] = xx [ 73 ] ; xx [ 206 ] = xx [ 84 ] ; xx [ 207 ] = xx [
85 ] ; pm_math_Quaternion_xform_ra ( xx + 86 , xx + 205 , xx + 208 ) ;
pm_math_Quaternion_compose_ra ( xx + 125 , xx + 120 , xx + 211 ) ; xx [ 215 ]
= xx [ 124 ] ; xx [ 216 ] = xx [ 132 ] ; xx [ 217 ] = xx [ 129 ] ;
pm_math_Quaternion_xform_ra ( xx + 125 , xx + 215 , xx + 218 ) ; xx [ 75 ] =
xx [ 90 ] * xx [ 104 ] ; xx [ 189 ] = xx [ 96 ] * xx [ 91 ] ; xx [ 190 ] = xx
[ 97 ] * xx [ 90 ] ; xx [ 221 ] = xx [ 91 ] * xx [ 101 ] ; xx [ 222 ] = xx [
90 ] * xx [ 101 ] ; xx [ 223 ] = xx [ 97 ] * xx [ 91 ] ; xx [ 224 ] = xx [ 91
] * xx [ 104 ] ; xx [ 225 ] = xx [ 96 ] * xx [ 90 ] ; xx [ 226 ] = xx [ 105 ]
* xx [ 91 ] ; xx [ 227 ] = xx [ 91 ] * xx [ 100 ] ; xx [ 228 ] = ( xx [ 91 ]
* xx [ 226 ] - xx [ 90 ] * xx [ 227 ] ) * xx [ 22 ] - xx [ 105 ] ; xx [ 229 ]
= xx [ 228 ] - xx [ 92 ] ; xx [ 230 ] = xx [ 22 ] * ( xx [ 91 ] * xx [ 227 ]
+ xx [ 90 ] * xx [ 226 ] ) - xx [ 100 ] ; xx [ 226 ] = xx [ 230 ] - xx [ 94 ]
; pm_math_Quaternion_compose_ra ( xx + 141 , xx + 136 , xx + 231 ) ; xx [ 235
] = xx [ 140 ] ; xx [ 236 ] = xx [ 148 ] ; xx [ 237 ] = xx [ 145 ] ;
pm_math_Quaternion_xform_ra ( xx + 141 , xx + 235 , xx + 238 ) ;
pm_math_Quaternion_compose_ra ( xx + 176 , xx + 171 , xx + 241 ) ; xx [ 245 ]
= xx [ 166 ] ; xx [ 246 ] = xx [ 175 ] ; xx [ 247 ] = xx [ 180 ] ;
pm_math_Quaternion_xform_ra ( xx + 176 , xx + 245 , xx + 248 ) ; xx [ 227 ] =
xx [ 146 ] * xx [ 160 ] ; xx [ 251 ] = xx [ 152 ] * xx [ 147 ] ; xx [ 252 ] =
xx [ 153 ] * xx [ 146 ] ; xx [ 253 ] = xx [ 147 ] * xx [ 157 ] ; xx [ 254 ] =
xx [ 153 ] * xx [ 147 ] ; xx [ 255 ] = xx [ 146 ] * xx [ 157 ] ; xx [ 256 ] =
xx [ 152 ] * xx [ 146 ] ; xx [ 257 ] = xx [ 147 ] * xx [ 160 ] ; xx [ 258 ] =
xx [ 147 ] * xx [ 156 ] ; xx [ 259 ] = xx [ 161 ] * xx [ 147 ] ; xx [ 260 ] =
( xx [ 146 ] * xx [ 258 ] + xx [ 147 ] * xx [ 259 ] ) * xx [ 22 ] - xx [ 161
] ; xx [ 261 ] = xx [ 260 ] - xx [ 149 ] ; xx [ 262 ] = xx [ 22 ] * ( xx [
147 ] * xx [ 258 ] - xx [ 146 ] * xx [ 259 ] ) - xx [ 156 ] ; xx [ 258 ] = xx
[ 262 ] + xx [ 151 ] ; pm_math_Quaternion_compose_ra ( xx + 191 , xx + 185 ,
xx + 263 ) ; xx [ 267 ] = xx [ 41 ] ; xx [ 268 ] = xx [ 42 ] ; xx [ 269 ] =
xx [ 51 ] ; pm_math_Quaternion_xform_ra ( xx + 191 , xx + 267 , xx + 270 ) ;
xx [ 259 ] = 1.014 ; xx [ 273 ] = - xx [ 11 ] ; xx [ 274 ] = xx [ 25 ] * xx [
14 ] ; xx [ 275 ] = xx [ 26 ] * xx [ 11 ] ; xx [ 276 ] = xx [ 6 ] * xx [ 26 ]
; xx [ 277 ] = xx [ 7 ] * xx [ 25 ] ; xx [ 278 ] = xx [ 26 ] * xx [ 14 ] + xx
[ 25 ] * xx [ 11 ] ; xx [ 279 ] = xx [ 6 ] * xx [ 25 ] + xx [ 7 ] * xx [ 26 ]
; xx [ 280 ] = xx [ 11 ] * xx [ 33 ] ; xx [ 281 ] = xx [ 280 ] * xx [ 14 ] ;
xx [ 282 ] = xx [ 7 ] ; xx [ 283 ] = xx [ 273 ] ; xx [ 284 ] = xx [ 6 ] ; xx
[ 285 ] = xx [ 6 ] * xx [ 31 ] ; xx [ 286 ] = xx [ 7 ] * xx [ 33 ] ; xx [ 287
] = xx [ 285 ] - xx [ 286 ] ; xx [ 288 ] = xx [ 31 ] * xx [ 11 ] ; xx [ 289 ]
= - xx [ 280 ] ; xx [ 290 ] = xx [ 287 ] ; xx [ 291 ] = xx [ 288 ] ;
pm_math_Vector3_cross_ra ( xx + 282 , xx + 289 , xx + 292 ) ; xx [ 282 ] = xx
[ 288 ] * xx [ 14 ] ; xx [ 283 ] = xx [ 189 ] - xx [ 75 ] ; xx [ 284 ] = xx [
221 ] - xx [ 190 ] ; xx [ 289 ] = - xx [ 284 ] ; xx [ 290 ] = xx [ 222 ] + xx
[ 223 ] ; xx [ 291 ] = - xx [ 290 ] ; xx [ 295 ] = xx [ 224 ] + xx [ 225 ] ;
xx [ 296 ] = xx [ 289 ] ; xx [ 297 ] = xx [ 291 ] ; xx [ 298 ] = xx [ 295 ] ;
xx [ 299 ] = xx [ 113 ] * xx [ 290 ] ; xx [ 300 ] = xx [ 112 ] * xx [ 295 ] +
xx [ 284 ] * xx [ 113 ] ; xx [ 301 ] = xx [ 112 ] * xx [ 290 ] ; xx [ 302 ] =
- xx [ 299 ] ; xx [ 303 ] = xx [ 300 ] ; xx [ 304 ] = xx [ 301 ] ;
pm_math_Vector3_cross_ra ( xx + 296 , xx + 302 , xx + 305 ) ; xx [ 296 ] = xx
[ 227 ] + xx [ 251 ] ; xx [ 297 ] = xx [ 252 ] + xx [ 253 ] ; xx [ 298 ] = -
xx [ 297 ] ; xx [ 302 ] = xx [ 255 ] - xx [ 254 ] ; xx [ 303 ] = xx [ 257 ] -
xx [ 256 ] ; xx [ 304 ] = xx [ 302 ] * xx [ 21 ] ; xx [ 308 ] = xx [ 298 ] ;
xx [ 309 ] = xx [ 302 ] ; xx [ 310 ] = xx [ 303 ] ; xx [ 311 ] = xx [ 167 ] *
xx [ 303 ] + xx [ 297 ] * xx [ 21 ] ; xx [ 312 ] = xx [ 167 ] * xx [ 302 ] ;
xx [ 313 ] = xx [ 304 ] ; xx [ 314 ] = xx [ 311 ] ; xx [ 315 ] = - xx [ 312 ]
; pm_math_Vector3_cross_ra ( xx + 308 , xx + 313 , xx + 316 ) ; xx [ 308 ] =
xx [ 286 ] - xx [ 285 ] ; xx [ 313 ] = xx [ 280 ] ; xx [ 314 ] = xx [ 308 ] ;
xx [ 315 ] = - xx [ 288 ] ; pm_math_Vector3_cross_ra ( xx + 15 , xx + 313 ,
xx + 319 ) ; xx [ 15 ] = ( xx [ 0 ] - ( xx [ 11 ] * xx [ 11 ] + xx [ 6 ] * xx
[ 6 ] ) * xx [ 22 ] ) * state [ 3 ] + xx [ 22 ] * xx [ 13 ] * xx [ 12 ] *
state [ 4 ] ; xx [ 13 ] = xx [ 22 ] * ( xx [ 6 ] * xx [ 14 ] - xx [ 7 ] * xx
[ 11 ] ) * state [ 3 ] + ( xx [ 0 ] - xx [ 22 ] * xx [ 12 ] * xx [ 12 ] ) *
state [ 4 ] ; xx [ 12 ] = xx [ 22 ] * ( xx [ 11 ] * xx [ 14 ] + xx [ 7 ] * xx
[ 6 ] ) * state [ 3 ] + state [ 5 ] ; xx [ 16 ] = xx [ 13 ] * xx [ 10 ] ; xx
[ 17 ] = xx [ 12 ] * xx [ 19 ] - xx [ 15 ] * xx [ 10 ] ; xx [ 280 ] = xx [ 13
] * xx [ 19 ] ; xx [ 285 ] = xx [ 12 ] * xx [ 26 ] ; xx [ 286 ] = xx [ 15 ] *
xx [ 26 ] ; xx [ 288 ] = xx [ 13 ] * xx [ 33 ] + xx [ 16 ] ; xx [ 309 ] = xx
[ 26 ] * xx [ 288 ] ; xx [ 310 ] = xx [ 280 ] + xx [ 13 ] * xx [ 31 ] ; xx [
313 ] = xx [ 26 ] * xx [ 310 ] ; xx [ 314 ] = 1.405725 ; xx [ 322 ] = xx [ 35
] ; xx [ 323 ] = xx [ 34 ] ; xx [ 324 ] = xx [ 36 ] ; xx [ 325 ] = xx [ 36 ]
; xx [ 326 ] = xx [ 15 ] ; xx [ 327 ] = xx [ 13 ] ; xx [ 328 ] = xx [ 12 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 322 , xx + 326 , xx + 329 ) ; xx [
332 ] = xx [ 30 ] ; xx [ 333 ] = xx [ 37 ] ; xx [ 334 ] = xx [ 38 ] ;
pm_math_Vector3_cross_ra ( xx + 326 , xx + 332 , xx + 335 ) ; xx [ 326 ] = xx
[ 335 ] + xx [ 16 ] ; xx [ 327 ] = xx [ 336 ] + xx [ 17 ] ; xx [ 328 ] = xx [
337 ] - xx [ 280 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 322 , xx + 326
, xx + 335 ) ; xx [ 315 ] = - ( xx [ 44 ] * state [ 11 ] ) ; xx [ 322 ] = xx
[ 46 ] * state [ 11 ] ; xx [ 323 ] = xx [ 47 ] * state [ 11 ] ; xx [ 324 ] =
2.298050364265303e-6 ; xx [ 325 ] = xx [ 324 ] * state [ 11 ] ; xx [ 326 ] =
0.02367056868070961 ; xx [ 327 ] = xx [ 326 ] * state [ 11 ] ; xx [ 328 ] =
3.023104627104057e-6 ; xx [ 338 ] = xx [ 328 ] * state [ 11 ] ; xx [ 339 ] =
xx [ 315 ] ; xx [ 340 ] = xx [ 322 ] ; xx [ 341 ] = xx [ 323 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 60 , xx + 339 , xx + 342 ) ; xx [
345 ] = state [ 16 ] ; xx [ 346 ] = state [ 17 ] ; xx [ 347 ] = state [ 18 ]
; pm_math_Quaternion_xform_ra ( xx + 64 , xx + 345 , xx + 348 ) ;
pm_math_Vector3_cross_ra ( xx + 339 , xx + 195 , xx + 345 ) ; xx [ 195 ] = xx
[ 345 ] - xx [ 325 ] ; xx [ 196 ] = xx [ 346 ] + xx [ 327 ] ; xx [ 197 ] = xx
[ 347 ] - xx [ 338 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 60 , xx +
195 , xx + 339 ) ; pm_math_Vector3_cross_ra ( xx + 348 , xx + 68 , xx + 195 )
; xx [ 345 ] = - ( xx [ 44 ] * state [ 20 ] ) ; xx [ 346 ] = xx [ 46 ] *
state [ 20 ] ; xx [ 347 ] = xx [ 47 ] * state [ 20 ] ; xx [ 351 ] = xx [ 324
] * state [ 20 ] ; xx [ 352 ] = xx [ 326 ] * state [ 20 ] ; xx [ 353 ] = xx [
328 ] * state [ 20 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 80 , xx +
345 , xx + 354 ) ; xx [ 357 ] = state [ 25 ] ; xx [ 358 ] = state [ 26 ] ; xx
[ 359 ] = state [ 27 ] ; pm_math_Quaternion_xform_ra ( xx + 64 , xx + 357 ,
xx + 360 ) ; pm_math_Vector3_cross_ra ( xx + 345 , xx + 205 , xx + 357 ) ; xx
[ 205 ] = xx [ 357 ] - xx [ 351 ] ; xx [ 206 ] = xx [ 358 ] + xx [ 352 ] ; xx
[ 207 ] = xx [ 359 ] - xx [ 353 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
80 , xx + 205 , xx + 357 ) ; pm_math_Vector3_cross_ra ( xx + 360 , xx + 68 ,
xx + 205 ) ; xx [ 363 ] = ( xx [ 0 ] - ( xx [ 101 ] * xx [ 101 ] + xx [ 96 ]
* xx [ 96 ] ) * xx [ 22 ] ) * state [ 31 ] + xx [ 22 ] * xx [ 103 ] * xx [
102 ] * state [ 32 ] ; xx [ 103 ] = xx [ 22 ] * ( xx [ 96 ] * xx [ 104 ] - xx
[ 97 ] * xx [ 101 ] ) * state [ 31 ] + ( xx [ 0 ] - xx [ 22 ] * xx [ 102 ] *
xx [ 102 ] ) * state [ 32 ] ; xx [ 102 ] = xx [ 22 ] * ( xx [ 101 ] * xx [
104 ] + xx [ 97 ] * xx [ 96 ] ) * state [ 31 ] + state [ 33 ] ; xx [ 96 ] =
xx [ 103 ] * xx [ 10 ] ; xx [ 97 ] = xx [ 102 ] * xx [ 19 ] - xx [ 363 ] * xx
[ 10 ] ; xx [ 364 ] = xx [ 103 ] * xx [ 19 ] ; xx [ 365 ] = xx [ 102 ] * xx [
109 ] ; xx [ 366 ] = xx [ 363 ] * xx [ 109 ] ; xx [ 367 ] = xx [ 103 ] * xx [
113 ] + xx [ 96 ] ; xx [ 368 ] = xx [ 109 ] * xx [ 367 ] ; xx [ 369 ] = xx [
364 ] + xx [ 103 ] * xx [ 112 ] ; xx [ 370 ] = xx [ 109 ] * xx [ 369 ] ; xx [
371 ] = xx [ 114 ] ; xx [ 372 ] = xx [ 111 ] ; xx [ 373 ] = xx [ 115 ] ; xx [
374 ] = xx [ 115 ] ; xx [ 375 ] = xx [ 363 ] ; xx [ 376 ] = xx [ 103 ] ; xx [
377 ] = xx [ 102 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 371 , xx + 375
, xx + 378 ) ; pm_math_Vector3_cross_ra ( xx + 375 , xx + 332 , xx + 381 ) ;
xx [ 375 ] = xx [ 381 ] + xx [ 96 ] ; xx [ 376 ] = xx [ 382 ] + xx [ 97 ] ;
xx [ 377 ] = xx [ 383 ] - xx [ 364 ] ; pm_math_Quaternion_inverseXform_ra (
xx + 371 , xx + 375 , xx + 381 ) ; xx [ 371 ] = - ( xx [ 44 ] * state [ 39 ]
) ; xx [ 372 ] = xx [ 46 ] * state [ 39 ] ; xx [ 373 ] = xx [ 47 ] * state [
39 ] ; xx [ 374 ] = xx [ 324 ] * state [ 39 ] ; xx [ 375 ] = xx [ 326 ] *
state [ 39 ] ; xx [ 376 ] = xx [ 328 ] * state [ 39 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 120 , xx + 371 , xx + 384 ) ; xx [
387 ] = state [ 44 ] ; xx [ 388 ] = state [ 45 ] ; xx [ 389 ] = state [ 46 ]
; pm_math_Quaternion_xform_ra ( xx + 64 , xx + 387 , xx + 390 ) ;
pm_math_Vector3_cross_ra ( xx + 371 , xx + 215 , xx + 387 ) ; xx [ 215 ] = xx
[ 387 ] - xx [ 374 ] ; xx [ 216 ] = xx [ 388 ] + xx [ 375 ] ; xx [ 217 ] = xx
[ 389 ] - xx [ 376 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 120 , xx +
215 , xx + 387 ) ; pm_math_Vector3_cross_ra ( xx + 390 , xx + 68 , xx + 215 )
; xx [ 377 ] = - ( xx [ 44 ] * state [ 48 ] ) ; xx [ 393 ] = xx [ 46 ] *
state [ 48 ] ; xx [ 394 ] = xx [ 47 ] * state [ 48 ] ; xx [ 395 ] = xx [ 324
] * state [ 48 ] ; xx [ 396 ] = xx [ 326 ] * state [ 48 ] ; xx [ 397 ] = xx [
328 ] * state [ 48 ] ; xx [ 398 ] = xx [ 377 ] ; xx [ 399 ] = xx [ 393 ] ; xx
[ 400 ] = xx [ 394 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 136 , xx +
398 , xx + 401 ) ; xx [ 404 ] = state [ 53 ] ; xx [ 405 ] = state [ 54 ] ; xx
[ 406 ] = state [ 55 ] ; pm_math_Quaternion_xform_ra ( xx + 64 , xx + 404 ,
xx + 407 ) ; pm_math_Vector3_cross_ra ( xx + 398 , xx + 235 , xx + 404 ) ; xx
[ 235 ] = xx [ 404 ] - xx [ 395 ] ; xx [ 236 ] = xx [ 405 ] + xx [ 396 ] ; xx
[ 237 ] = xx [ 406 ] - xx [ 397 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
136 , xx + 235 , xx + 398 ) ; pm_math_Vector3_cross_ra ( xx + 407 , xx + 68 ,
xx + 235 ) ; xx [ 404 ] = ( xx [ 0 ] - ( xx [ 157 ] * xx [ 157 ] + xx [ 152 ]
* xx [ 152 ] ) * xx [ 22 ] ) * state [ 59 ] + xx [ 22 ] * xx [ 159 ] * xx [
158 ] * state [ 60 ] ; xx [ 159 ] = xx [ 22 ] * ( xx [ 152 ] * xx [ 160 ] -
xx [ 153 ] * xx [ 157 ] ) * state [ 59 ] + ( xx [ 0 ] - xx [ 22 ] * xx [ 158
] * xx [ 158 ] ) * state [ 60 ] ; xx [ 158 ] = xx [ 22 ] * ( xx [ 157 ] * xx
[ 160 ] + xx [ 153 ] * xx [ 152 ] ) * state [ 59 ] + state [ 61 ] ; xx [ 152
] = xx [ 159 ] * xx [ 10 ] ; xx [ 153 ] = xx [ 158 ] * xx [ 19 ] - xx [ 404 ]
* xx [ 10 ] ; xx [ 10 ] = xx [ 159 ] * xx [ 19 ] ; xx [ 19 ] = xx [ 158 ] *
xx [ 165 ] ; xx [ 405 ] = xx [ 404 ] * xx [ 165 ] ; xx [ 406 ] = xx [ 159 ] *
xx [ 21 ] + xx [ 152 ] ; xx [ 410 ] = xx [ 165 ] * xx [ 406 ] ; xx [ 411 ] =
xx [ 10 ] + xx [ 159 ] * xx [ 167 ] ; xx [ 412 ] = xx [ 165 ] * xx [ 411 ] ;
xx [ 413 ] = xx [ 107 ] ; xx [ 414 ] = xx [ 32 ] ; xx [ 415 ] = xx [ 163 ] ;
xx [ 416 ] = xx [ 163 ] ; xx [ 417 ] = xx [ 404 ] ; xx [ 418 ] = xx [ 159 ] ;
xx [ 419 ] = xx [ 158 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 413 , xx
+ 417 , xx + 420 ) ; pm_math_Vector3_cross_ra ( xx + 417 , xx + 332 , xx +
423 ) ; xx [ 332 ] = xx [ 423 ] + xx [ 152 ] ; xx [ 333 ] = xx [ 424 ] + xx [
153 ] ; xx [ 334 ] = xx [ 425 ] - xx [ 10 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 413 , xx + 332 , xx + 417 ) ; xx [
332 ] = - ( xx [ 44 ] * state [ 67 ] ) ; xx [ 333 ] = xx [ 46 ] * state [ 67
] ; xx [ 334 ] = xx [ 47 ] * state [ 67 ] ; xx [ 413 ] = xx [ 324 ] * state [
67 ] ; xx [ 414 ] = xx [ 326 ] * state [ 67 ] ; xx [ 415 ] = xx [ 328 ] *
state [ 67 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 171 , xx + 332 , xx
+ 423 ) ; xx [ 426 ] = state [ 72 ] ; xx [ 427 ] = state [ 73 ] ; xx [ 428 ]
= state [ 74 ] ; pm_math_Quaternion_xform_ra ( xx + 64 , xx + 426 , xx + 429
) ; pm_math_Vector3_cross_ra ( xx + 332 , xx + 245 , xx + 426 ) ; xx [ 245 ]
= xx [ 426 ] - xx [ 413 ] ; xx [ 246 ] = xx [ 427 ] + xx [ 414 ] ; xx [ 247 ]
= xx [ 428 ] - xx [ 415 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 171 ,
xx + 245 , xx + 426 ) ; pm_math_Vector3_cross_ra ( xx + 429 , xx + 68 , xx +
245 ) ; xx [ 416 ] = - ( xx [ 44 ] * state [ 76 ] ) ; xx [ 44 ] = xx [ 46 ] *
state [ 76 ] ; xx [ 46 ] = xx [ 47 ] * state [ 76 ] ; xx [ 47 ] = xx [ 324 ]
* state [ 76 ] ; xx [ 324 ] = xx [ 326 ] * state [ 76 ] ; xx [ 326 ] = xx [
328 ] * state [ 76 ] ; xx [ 432 ] = xx [ 416 ] ; xx [ 433 ] = xx [ 44 ] ; xx
[ 434 ] = xx [ 46 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 185 , xx +
432 , xx + 435 ) ; xx [ 438 ] = state [ 81 ] ; xx [ 439 ] = state [ 82 ] ; xx
[ 440 ] = state [ 83 ] ; pm_math_Quaternion_xform_ra ( xx + 64 , xx + 438 ,
xx + 441 ) ; pm_math_Vector3_cross_ra ( xx + 432 , xx + 267 , xx + 64 ) ; xx
[ 267 ] = xx [ 64 ] - xx [ 47 ] ; xx [ 268 ] = xx [ 65 ] + xx [ 324 ] ; xx [
269 ] = xx [ 66 ] - xx [ 326 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
185 , xx + 267 , xx + 64 ) ; pm_math_Vector3_cross_ra ( xx + 441 , xx + 68 ,
xx + 267 ) ; motionData [ 0 ] = xx [ 1 ] ; motionData [ 1 ] = xx [ 2 ] ;
motionData [ 2 ] = xx [ 2 ] ; motionData [ 3 ] = xx [ 2 ] ; motionData [ 4 ]
= xx [ 2 ] ; motionData [ 5 ] = xx [ 2 ] ; motionData [ 6 ] = 1.01044 ;
motionData [ 7 ] = xx [ 0 ] ; motionData [ 8 ] = xx [ 2 ] ; motionData [ 9 ]
= xx [ 2 ] ; motionData [ 10 ] = xx [ 2 ] ; motionData [ 11 ] = xx [ 3 ] ;
motionData [ 12 ] = xx [ 2 ] ; motionData [ 13 ] = xx [ 4 ] ; motionData [ 14
] = xx [ 14 ] ; motionData [ 15 ] = xx [ 9 ] ; motionData [ 16 ] = xx [ 11 ]
; motionData [ 17 ] = xx [ 8 ] ; motionData [ 18 ] = - xx [ 23 ] ; motionData
[ 19 ] = xx [ 20 ] ; motionData [ 20 ] = - xx [ 24 ] ; motionData [ 21 ] = -
xx [ 25 ] ; motionData [ 22 ] = xx [ 2 ] ; motionData [ 23 ] = - xx [ 26 ] ;
motionData [ 24 ] = xx [ 2 ] ; motionData [ 25 ] = xx [ 31 ] ; motionData [
26 ] = xx [ 2 ] ; motionData [ 27 ] = xx [ 33 ] ; motionData [ 28 ] = xx [ 35
] ; motionData [ 29 ] = xx [ 34 ] ; motionData [ 30 ] = xx [ 36 ] ;
motionData [ 31 ] = xx [ 36 ] ; motionData [ 32 ] = xx [ 30 ] ; motionData [
33 ] = xx [ 37 ] ; motionData [ 34 ] = xx [ 38 ] ; motionData [ 35 ] = xx [
52 ] ; motionData [ 36 ] = xx [ 53 ] ; motionData [ 37 ] = xx [ 54 ] ;
motionData [ 38 ] = xx [ 55 ] ; motionData [ 39 ] = xx [ 39 ] - xx [ 48 ] ;
motionData [ 40 ] = xx [ 43 ] - xx [ 49 ] ; motionData [ 41 ] = - ( xx [ 45 ]
+ xx [ 50 ] ) ; motionData [ 42 ] = xx [ 60 ] ; motionData [ 43 ] = xx [ 61 ]
; motionData [ 44 ] = xx [ 62 ] ; motionData [ 45 ] = xx [ 63 ] ; motionData
[ 46 ] = xx [ 74 ] ; motionData [ 47 ] = xx [ 76 ] ; motionData [ 48 ] = xx [
72 ] ; motionData [ 49 ] = xx [ 86 ] ; motionData [ 50 ] = xx [ 87 ] ;
motionData [ 51 ] = xx [ 88 ] ; motionData [ 52 ] = xx [ 89 ] ; motionData [
53 ] = xx [ 39 ] - xx [ 77 ] ; motionData [ 54 ] = - ( xx [ 43 ] + xx [ 78 ]
) ; motionData [ 55 ] = - ( xx [ 45 ] + xx [ 79 ] ) ; motionData [ 56 ] = xx
[ 80 ] ; motionData [ 57 ] = xx [ 81 ] ; motionData [ 58 ] = xx [ 82 ] ;
motionData [ 59 ] = xx [ 83 ] ; motionData [ 60 ] = xx [ 73 ] ; motionData [
61 ] = xx [ 84 ] ; motionData [ 62 ] = xx [ 85 ] ; motionData [ 63 ] = xx [
90 ] ; motionData [ 64 ] = xx [ 2 ] ; motionData [ 65 ] = xx [ 2 ] ;
motionData [ 66 ] = - xx [ 91 ] ; motionData [ 67 ] = xx [ 93 ] ; motionData
[ 68 ] = xx [ 95 ] ; motionData [ 69 ] = xx [ 4 ] ; motionData [ 70 ] = xx [
104 ] ; motionData [ 71 ] = xx [ 99 ] ; motionData [ 72 ] = xx [ 101 ] ;
motionData [ 73 ] = xx [ 98 ] ; motionData [ 74 ] = - xx [ 105 ] ; motionData
[ 75 ] = - xx [ 100 ] ; motionData [ 76 ] = - xx [ 106 ] ; motionData [ 77 ]
= xx [ 108 ] ; motionData [ 78 ] = xx [ 2 ] ; motionData [ 79 ] = xx [ 109 ]
; motionData [ 80 ] = xx [ 2 ] ; motionData [ 81 ] = xx [ 112 ] ; motionData
[ 82 ] = xx [ 2 ] ; motionData [ 83 ] = xx [ 113 ] ; motionData [ 84 ] = xx [
114 ] ; motionData [ 85 ] = xx [ 111 ] ; motionData [ 86 ] = xx [ 115 ] ;
motionData [ 87 ] = xx [ 115 ] ; motionData [ 88 ] = xx [ 30 ] ; motionData [
89 ] = xx [ 37 ] ; motionData [ 90 ] = xx [ 38 ] ; motionData [ 91 ] = xx [
125 ] ; motionData [ 92 ] = xx [ 126 ] ; motionData [ 93 ] = xx [ 127 ] ;
motionData [ 94 ] = xx [ 128 ] ; motionData [ 95 ] = - ( xx [ 110 ] + xx [
116 ] ) ; motionData [ 96 ] = - ( xx [ 119 ] + xx [ 117 ] ) ; motionData [ 97
] = - ( xx [ 45 ] + xx [ 118 ] ) ; motionData [ 98 ] = xx [ 120 ] ;
motionData [ 99 ] = xx [ 121 ] ; motionData [ 100 ] = xx [ 122 ] ; motionData
[ 101 ] = xx [ 123 ] ; motionData [ 102 ] = xx [ 124 ] ; motionData [ 103 ] =
xx [ 132 ] ; motionData [ 104 ] = xx [ 129 ] ; motionData [ 105 ] = xx [ 141
] ; motionData [ 106 ] = xx [ 142 ] ; motionData [ 107 ] = xx [ 143 ] ;
motionData [ 108 ] = xx [ 144 ] ; motionData [ 109 ] = - ( xx [ 130 ] + xx [
133 ] ) ; motionData [ 110 ] = - ( xx [ 131 ] + xx [ 134 ] ) ; motionData [
111 ] = - ( xx [ 45 ] + xx [ 135 ] ) ; motionData [ 112 ] = xx [ 136 ] ;
motionData [ 113 ] = xx [ 137 ] ; motionData [ 114 ] = xx [ 138 ] ;
motionData [ 115 ] = xx [ 139 ] ; motionData [ 116 ] = xx [ 140 ] ;
motionData [ 117 ] = xx [ 148 ] ; motionData [ 118 ] = xx [ 145 ] ;
motionData [ 119 ] = - xx [ 146 ] ; motionData [ 120 ] = xx [ 2 ] ;
motionData [ 121 ] = xx [ 2 ] ; motionData [ 122 ] = - xx [ 147 ] ;
motionData [ 123 ] = xx [ 150 ] ; motionData [ 124 ] = xx [ 151 ] ;
motionData [ 125 ] = xx [ 4 ] ; motionData [ 126 ] = xx [ 160 ] ; motionData
[ 127 ] = xx [ 155 ] ; motionData [ 128 ] = xx [ 157 ] ; motionData [ 129 ] =
xx [ 154 ] ; motionData [ 130 ] = - xx [ 161 ] ; motionData [ 131 ] = - xx [
156 ] ; motionData [ 132 ] = - xx [ 162 ] ; motionData [ 133 ] = xx [ 164 ] ;
motionData [ 134 ] = xx [ 2 ] ; motionData [ 135 ] = xx [ 165 ] ; motionData
[ 136 ] = xx [ 2 ] ; motionData [ 137 ] = xx [ 167 ] ; motionData [ 138 ] =
xx [ 2 ] ; motionData [ 139 ] = xx [ 21 ] ; motionData [ 140 ] = xx [ 107 ] ;
motionData [ 141 ] = xx [ 32 ] ; motionData [ 142 ] = xx [ 163 ] ; motionData
[ 143 ] = xx [ 163 ] ; motionData [ 144 ] = xx [ 30 ] ; motionData [ 145 ] =
xx [ 37 ] ; motionData [ 146 ] = xx [ 38 ] ; motionData [ 147 ] = xx [ 176 ]
; motionData [ 148 ] = xx [ 177 ] ; motionData [ 149 ] = xx [ 178 ] ;
motionData [ 150 ] = xx [ 179 ] ; motionData [ 151 ] = - ( xx [ 27 ] + xx [
168 ] ) ; motionData [ 152 ] = xx [ 29 ] - xx [ 169 ] ; motionData [ 153 ] =
- ( xx [ 45 ] + xx [ 170 ] ) ; motionData [ 154 ] = xx [ 171 ] ; motionData [
155 ] = xx [ 172 ] ; motionData [ 156 ] = xx [ 173 ] ; motionData [ 157 ] =
xx [ 174 ] ; motionData [ 158 ] = xx [ 166 ] ; motionData [ 159 ] = xx [ 175
] ; motionData [ 160 ] = xx [ 180 ] ; motionData [ 161 ] = xx [ 191 ] ;
motionData [ 162 ] = xx [ 192 ] ; motionData [ 163 ] = xx [ 193 ] ;
motionData [ 164 ] = xx [ 194 ] ; motionData [ 165 ] = - ( xx [ 181 ] + xx [
182 ] ) ; motionData [ 166 ] = xx [ 40 ] - xx [ 183 ] ; motionData [ 167 ] =
- ( xx [ 45 ] + xx [ 184 ] ) ; motionData [ 168 ] = xx [ 185 ] ; motionData [
169 ] = xx [ 186 ] ; motionData [ 170 ] = xx [ 187 ] ; motionData [ 171 ] =
xx [ 188 ] ; motionData [ 172 ] = xx [ 41 ] ; motionData [ 173 ] = xx [ 42 ]
; motionData [ 174 ] = xx [ 51 ] ; motionData [ 175 ] = xx [ 1 ] ; motionData
[ 176 ] = xx [ 2 ] ; motionData [ 177 ] = xx [ 2 ] ; motionData [ 178 ] = xx
[ 2 ] ; motionData [ 179 ] = xx [ 2 ] ; motionData [ 180 ] = xx [ 2 ] ;
motionData [ 181 ] = - xx [ 5 ] ; motionData [ 182 ] = xx [ 56 ] ; motionData
[ 183 ] = xx [ 57 ] ; motionData [ 184 ] = xx [ 58 ] ; motionData [ 185 ] =
xx [ 59 ] ; motionData [ 186 ] = xx [ 198 ] - xx [ 48 ] + xx [ 39 ] ;
motionData [ 187 ] = xx [ 199 ] - xx [ 49 ] + xx [ 43 ] ; motionData [ 188 ]
= xx [ 200 ] - xx [ 50 ] - xx [ 45 ] ; motionData [ 189 ] = xx [ 14 ] ;
motionData [ 190 ] = xx [ 9 ] ; motionData [ 191 ] = xx [ 11 ] ; motionData [
192 ] = xx [ 8 ] ; motionData [ 193 ] = xx [ 71 ] ; motionData [ 194 ] = xx [
20 ] ; motionData [ 195 ] = xx [ 4 ] - xx [ 24 ] ; motionData [ 196 ] = xx [
201 ] ; motionData [ 197 ] = xx [ 202 ] ; motionData [ 198 ] = xx [ 203 ] ;
motionData [ 199 ] = xx [ 204 ] ; motionData [ 200 ] = xx [ 208 ] - xx [ 77 ]
+ xx [ 39 ] ; motionData [ 201 ] = xx [ 209 ] - xx [ 78 ] - xx [ 43 ] ;
motionData [ 202 ] = xx [ 210 ] - xx [ 79 ] - xx [ 45 ] ; motionData [ 203 ]
= xx [ 211 ] ; motionData [ 204 ] = xx [ 212 ] ; motionData [ 205 ] = xx [
213 ] ; motionData [ 206 ] = xx [ 214 ] ; motionData [ 207 ] = xx [ 218 ] -
xx [ 116 ] - xx [ 110 ] ; motionData [ 208 ] = xx [ 219 ] - xx [ 117 ] - xx [
119 ] ; motionData [ 209 ] = xx [ 220 ] - xx [ 118 ] - xx [ 45 ] ; motionData
[ 210 ] = xx [ 75 ] - xx [ 189 ] ; motionData [ 211 ] = - ( xx [ 190 ] - xx [
221 ] ) ; motionData [ 212 ] = xx [ 222 ] + xx [ 223 ] ; motionData [ 213 ] =
- ( xx [ 224 ] + xx [ 225 ] ) ; motionData [ 214 ] = xx [ 229 ] ; motionData
[ 215 ] = xx [ 226 ] ; motionData [ 216 ] = xx [ 4 ] - xx [ 106 ] ;
motionData [ 217 ] = xx [ 231 ] ; motionData [ 218 ] = xx [ 232 ] ;
motionData [ 219 ] = xx [ 233 ] ; motionData [ 220 ] = xx [ 234 ] ;
motionData [ 221 ] = xx [ 238 ] - xx [ 133 ] - xx [ 130 ] ; motionData [ 222
] = xx [ 239 ] - xx [ 134 ] - xx [ 131 ] ; motionData [ 223 ] = xx [ 240 ] -
xx [ 135 ] - xx [ 45 ] ; motionData [ 224 ] = xx [ 241 ] ; motionData [ 225 ]
= xx [ 242 ] ; motionData [ 226 ] = xx [ 243 ] ; motionData [ 227 ] = xx [
244 ] ; motionData [ 228 ] = xx [ 248 ] - xx [ 168 ] - xx [ 27 ] ; motionData
[ 229 ] = xx [ 249 ] - xx [ 169 ] + xx [ 29 ] ; motionData [ 230 ] = xx [ 250
] - xx [ 170 ] - xx [ 45 ] ; motionData [ 231 ] = - ( xx [ 227 ] + xx [ 251 ]
) ; motionData [ 232 ] = xx [ 252 ] + xx [ 253 ] ; motionData [ 233 ] = xx [
254 ] - xx [ 255 ] ; motionData [ 234 ] = xx [ 256 ] - xx [ 257 ] ;
motionData [ 235 ] = xx [ 261 ] ; motionData [ 236 ] = xx [ 258 ] ;
motionData [ 237 ] = xx [ 4 ] - xx [ 162 ] ; motionData [ 238 ] = xx [ 263 ]
; motionData [ 239 ] = xx [ 264 ] ; motionData [ 240 ] = xx [ 265 ] ;
motionData [ 241 ] = xx [ 266 ] ; motionData [ 242 ] = xx [ 270 ] - xx [ 182
] - xx [ 181 ] ; motionData [ 243 ] = xx [ 271 ] - xx [ 183 ] + xx [ 40 ] ;
motionData [ 244 ] = xx [ 272 ] - xx [ 184 ] - xx [ 45 ] ; motionData [ 245 ]
= xx [ 1 ] ; motionData [ 246 ] = xx [ 2 ] ; motionData [ 247 ] = xx [ 2 ] ;
motionData [ 248 ] = xx [ 2 ] ; motionData [ 249 ] = xx [ 3 ] ; motionData [
250 ] = xx [ 2 ] ; motionData [ 251 ] = xx [ 259 ] ; motionData [ 252 ] = -
xx [ 14 ] ; motionData [ 253 ] = xx [ 7 ] ; motionData [ 254 ] = xx [ 273 ] ;
motionData [ 255 ] = xx [ 6 ] ; motionData [ 256 ] = xx [ 71 ] ; motionData [
257 ] = xx [ 20 ] ; motionData [ 258 ] = xx [ 259 ] - xx [ 24 ] ; motionData
[ 259 ] = xx [ 274 ] - xx [ 275 ] ; motionData [ 260 ] = xx [ 276 ] - xx [
277 ] ; motionData [ 261 ] = xx [ 278 ] ; motionData [ 262 ] = - xx [ 279 ] ;
motionData [ 263 ] = xx [ 31 ] + ( xx [ 281 ] + xx [ 292 ] ) * xx [ 22 ] - xx
[ 23 ] + xx [ 3 ] ; motionData [ 264 ] = xx [ 22 ] * ( xx [ 293 ] - xx [ 287
] * xx [ 14 ] ) - xx [ 18 ] ; motionData [ 265 ] = xx [ 33 ] + xx [ 22 ] * (
xx [ 294 ] - xx [ 282 ] ) - xx [ 24 ] + xx [ 259 ] ; motionData [ 266 ] = -
xx [ 90 ] ; motionData [ 267 ] = xx [ 2 ] ; motionData [ 268 ] = xx [ 2 ] ;
motionData [ 269 ] = xx [ 91 ] ; motionData [ 270 ] = xx [ 93 ] ; motionData
[ 271 ] = xx [ 95 ] ; motionData [ 272 ] = xx [ 259 ] ; motionData [ 273 ] =
xx [ 283 ] ; motionData [ 274 ] = xx [ 289 ] ; motionData [ 275 ] = xx [ 291
] ; motionData [ 276 ] = xx [ 295 ] ; motionData [ 277 ] = xx [ 229 ] ;
motionData [ 278 ] = xx [ 226 ] ; motionData [ 279 ] = xx [ 259 ] - xx [ 106
] ; motionData [ 280 ] = xx [ 283 ] * xx [ 108 ] + xx [ 109 ] * xx [ 290 ] ;
motionData [ 281 ] = - ( xx [ 284 ] * xx [ 108 ] + xx [ 109 ] * xx [ 295 ] )
; motionData [ 282 ] = xx [ 283 ] * xx [ 109 ] - xx [ 108 ] * xx [ 290 ] ;
motionData [ 283 ] = xx [ 108 ] * xx [ 295 ] - xx [ 284 ] * xx [ 109 ] ;
motionData [ 284 ] = xx [ 112 ] + ( xx [ 305 ] - xx [ 283 ] * xx [ 299 ] ) *
xx [ 22 ] + xx [ 228 ] - xx [ 92 ] ; motionData [ 285 ] = ( xx [ 300 ] * xx [
283 ] + xx [ 306 ] ) * xx [ 22 ] + xx [ 230 ] - xx [ 94 ] ; motionData [ 286
] = xx [ 113 ] + xx [ 22 ] * ( xx [ 307 ] + xx [ 283 ] * xx [ 301 ] ) - xx [
106 ] + xx [ 259 ] ; motionData [ 287 ] = xx [ 146 ] ; motionData [ 288 ] =
xx [ 2 ] ; motionData [ 289 ] = xx [ 2 ] ; motionData [ 290 ] = xx [ 147 ] ;
motionData [ 291 ] = xx [ 150 ] ; motionData [ 292 ] = xx [ 151 ] ;
motionData [ 293 ] = xx [ 259 ] ; motionData [ 294 ] = xx [ 296 ] ;
motionData [ 295 ] = xx [ 298 ] ; motionData [ 296 ] = xx [ 302 ] ;
motionData [ 297 ] = xx [ 303 ] ; motionData [ 298 ] = xx [ 261 ] ;
motionData [ 299 ] = xx [ 258 ] ; motionData [ 300 ] = xx [ 259 ] - xx [ 162
] ; motionData [ 301 ] = xx [ 296 ] * xx [ 164 ] - xx [ 165 ] * xx [ 302 ] ;
motionData [ 302 ] = - ( xx [ 297 ] * xx [ 164 ] + xx [ 165 ] * xx [ 303 ] )
; motionData [ 303 ] = xx [ 296 ] * xx [ 165 ] + xx [ 164 ] * xx [ 302 ] ;
motionData [ 304 ] = xx [ 164 ] * xx [ 303 ] - xx [ 297 ] * xx [ 165 ] ;
motionData [ 305 ] = xx [ 167 ] + ( xx [ 296 ] * xx [ 304 ] + xx [ 316 ] ) *
xx [ 22 ] + xx [ 260 ] - xx [ 149 ] ; motionData [ 306 ] = ( xx [ 296 ] * xx
[ 311 ] + xx [ 317 ] ) * xx [ 22 ] + xx [ 262 ] + xx [ 151 ] ; motionData [
307 ] = xx [ 21 ] + xx [ 22 ] * ( xx [ 318 ] - xx [ 296 ] * xx [ 312 ] ) - xx
[ 162 ] + xx [ 259 ] ; motionData [ 308 ] = xx [ 275 ] - xx [ 274 ] ;
motionData [ 309 ] = xx [ 277 ] - xx [ 276 ] ; motionData [ 310 ] = - xx [
278 ] ; motionData [ 311 ] = xx [ 279 ] ; motionData [ 312 ] = xx [ 31 ] + (
xx [ 281 ] + xx [ 319 ] ) * xx [ 22 ] - xx [ 23 ] + xx [ 3 ] ; motionData [
313 ] = ( xx [ 308 ] * xx [ 14 ] + xx [ 320 ] ) * xx [ 22 ] - xx [ 18 ] ;
motionData [ 314 ] = xx [ 33 ] + xx [ 22 ] * ( xx [ 321 ] - xx [ 282 ] ) - xx
[ 24 ] + xx [ 4 ] ; motionData [ 315 ] = xx [ 2 ] ; motionData [ 316 ] = xx [
2 ] ; motionData [ 317 ] = xx [ 2 ] ; motionData [ 318 ] = xx [ 2 ] ;
motionData [ 319 ] = xx [ 2 ] ; motionData [ 320 ] = xx [ 2 ] ; motionData [
321 ] = xx [ 2 ] ; motionData [ 322 ] = xx [ 2 ] ; motionData [ 323 ] = xx [
2 ] ; motionData [ 324 ] = xx [ 2 ] ; motionData [ 325 ] = xx [ 2 ] ;
motionData [ 326 ] = xx [ 2 ] ; motionData [ 327 ] = xx [ 15 ] ; motionData [
328 ] = xx [ 13 ] ; motionData [ 329 ] = xx [ 12 ] ; motionData [ 330 ] = xx
[ 16 ] ; motionData [ 331 ] = xx [ 17 ] ; motionData [ 332 ] = - xx [ 280 ] ;
motionData [ 333 ] = xx [ 15 ] - ( xx [ 25 ] * xx [ 285 ] + xx [ 286 ] * xx [
26 ] ) * xx [ 22 ] ; motionData [ 334 ] = xx [ 13 ] + state [ 7 ] ;
motionData [ 335 ] = xx [ 12 ] + xx [ 22 ] * ( xx [ 25 ] * xx [ 286 ] - xx [
285 ] * xx [ 26 ] ) ; motionData [ 336 ] = xx [ 288 ] - ( xx [ 309 ] * xx [
26 ] - xx [ 25 ] * xx [ 313 ] ) * xx [ 22 ] + 0.4527250000000003 * state [ 7
] ; motionData [ 337 ] = xx [ 12 ] * xx [ 31 ] - xx [ 15 ] * xx [ 33 ] + xx [
17 ] ; motionData [ 338 ] = xx [ 22 ] * ( xx [ 25 ] * xx [ 309 ] + xx [ 313 ]
* xx [ 26 ] ) - xx [ 310 ] + xx [ 314 ] * state [ 7 ] ; motionData [ 339 ] =
xx [ 329 ] ; motionData [ 340 ] = xx [ 330 ] ; motionData [ 341 ] = xx [ 331
] + state [ 9 ] ; motionData [ 342 ] = xx [ 335 ] ; motionData [ 343 ] = xx [
336 ] ; motionData [ 344 ] = xx [ 337 ] ; motionData [ 345 ] = xx [ 315 ] ;
motionData [ 346 ] = xx [ 322 ] ; motionData [ 347 ] = xx [ 323 ] ;
motionData [ 348 ] = - xx [ 325 ] ; motionData [ 349 ] = xx [ 327 ] ;
motionData [ 350 ] = - xx [ 338 ] ; motionData [ 351 ] = xx [ 342 ] + xx [
348 ] ; motionData [ 352 ] = xx [ 343 ] + xx [ 349 ] ; motionData [ 353 ] =
xx [ 344 ] + xx [ 350 ] ; motionData [ 354 ] = xx [ 339 ] + xx [ 195 ] ;
motionData [ 355 ] = xx [ 340 ] + xx [ 196 ] ; motionData [ 356 ] = xx [ 341
] + xx [ 197 ] ; motionData [ 357 ] = xx [ 345 ] ; motionData [ 358 ] = xx [
346 ] ; motionData [ 359 ] = xx [ 347 ] ; motionData [ 360 ] = - xx [ 351 ] ;
motionData [ 361 ] = xx [ 352 ] ; motionData [ 362 ] = - xx [ 353 ] ;
motionData [ 363 ] = xx [ 354 ] + xx [ 360 ] ; motionData [ 364 ] = xx [ 355
] + xx [ 361 ] ; motionData [ 365 ] = xx [ 356 ] + xx [ 362 ] ; motionData [
366 ] = xx [ 357 ] + xx [ 205 ] ; motionData [ 367 ] = xx [ 358 ] + xx [ 206
] ; motionData [ 368 ] = xx [ 359 ] + xx [ 207 ] ; motionData [ 369 ] = xx [
2 ] ; motionData [ 370 ] = xx [ 2 ] ; motionData [ 371 ] = xx [ 2 ] ;
motionData [ 372 ] = xx [ 2 ] ; motionData [ 373 ] = xx [ 2 ] ; motionData [
374 ] = xx [ 2 ] ; motionData [ 375 ] = xx [ 363 ] ; motionData [ 376 ] = xx
[ 103 ] ; motionData [ 377 ] = xx [ 102 ] ; motionData [ 378 ] = xx [ 96 ] ;
motionData [ 379 ] = xx [ 97 ] ; motionData [ 380 ] = - xx [ 364 ] ;
motionData [ 381 ] = xx [ 363 ] - ( xx [ 108 ] * xx [ 365 ] + xx [ 366 ] * xx
[ 109 ] ) * xx [ 22 ] ; motionData [ 382 ] = xx [ 103 ] + state [ 35 ] ;
motionData [ 383 ] = xx [ 102 ] + xx [ 22 ] * ( xx [ 108 ] * xx [ 366 ] - xx
[ 365 ] * xx [ 109 ] ) ; motionData [ 384 ] = xx [ 367 ] - ( xx [ 368 ] * xx
[ 109 ] - xx [ 108 ] * xx [ 370 ] ) * xx [ 22 ] + xx [ 28 ] * state [ 35 ] ;
motionData [ 385 ] = xx [ 102 ] * xx [ 112 ] - xx [ 363 ] * xx [ 113 ] + xx [
97 ] ; motionData [ 386 ] = xx [ 22 ] * ( xx [ 108 ] * xx [ 368 ] + xx [ 370
] * xx [ 109 ] ) - xx [ 369 ] + xx [ 314 ] * state [ 35 ] ; motionData [ 387
] = xx [ 378 ] ; motionData [ 388 ] = xx [ 379 ] ; motionData [ 389 ] = xx [
380 ] + state [ 37 ] ; motionData [ 390 ] = xx [ 381 ] ; motionData [ 391 ] =
xx [ 382 ] ; motionData [ 392 ] = xx [ 383 ] ; motionData [ 393 ] = xx [ 371
] ; motionData [ 394 ] = xx [ 372 ] ; motionData [ 395 ] = xx [ 373 ] ;
motionData [ 396 ] = - xx [ 374 ] ; motionData [ 397 ] = xx [ 375 ] ;
motionData [ 398 ] = - xx [ 376 ] ; motionData [ 399 ] = xx [ 384 ] + xx [
390 ] ; motionData [ 400 ] = xx [ 385 ] + xx [ 391 ] ; motionData [ 401 ] =
xx [ 386 ] + xx [ 392 ] ; motionData [ 402 ] = xx [ 387 ] + xx [ 215 ] ;
motionData [ 403 ] = xx [ 388 ] + xx [ 216 ] ; motionData [ 404 ] = xx [ 389
] + xx [ 217 ] ; motionData [ 405 ] = xx [ 377 ] ; motionData [ 406 ] = xx [
393 ] ; motionData [ 407 ] = xx [ 394 ] ; motionData [ 408 ] = - xx [ 395 ] ;
motionData [ 409 ] = xx [ 396 ] ; motionData [ 410 ] = - xx [ 397 ] ;
motionData [ 411 ] = xx [ 401 ] + xx [ 407 ] ; motionData [ 412 ] = xx [ 402
] + xx [ 408 ] ; motionData [ 413 ] = xx [ 403 ] + xx [ 409 ] ; motionData [
414 ] = xx [ 398 ] + xx [ 235 ] ; motionData [ 415 ] = xx [ 399 ] + xx [ 236
] ; motionData [ 416 ] = xx [ 400 ] + xx [ 237 ] ; motionData [ 417 ] = xx [
2 ] ; motionData [ 418 ] = xx [ 2 ] ; motionData [ 419 ] = xx [ 2 ] ;
motionData [ 420 ] = xx [ 2 ] ; motionData [ 421 ] = xx [ 2 ] ; motionData [
422 ] = xx [ 2 ] ; motionData [ 423 ] = xx [ 404 ] ; motionData [ 424 ] = xx
[ 159 ] ; motionData [ 425 ] = xx [ 158 ] ; motionData [ 426 ] = xx [ 152 ] ;
motionData [ 427 ] = xx [ 153 ] ; motionData [ 428 ] = - xx [ 10 ] ;
motionData [ 429 ] = xx [ 404 ] - ( xx [ 164 ] * xx [ 19 ] + xx [ 405 ] * xx
[ 165 ] ) * xx [ 22 ] ; motionData [ 430 ] = xx [ 159 ] + state [ 63 ] ;
motionData [ 431 ] = xx [ 158 ] + xx [ 22 ] * ( xx [ 164 ] * xx [ 405 ] - xx
[ 19 ] * xx [ 165 ] ) ; motionData [ 432 ] = xx [ 406 ] - ( xx [ 410 ] * xx [
165 ] - xx [ 164 ] * xx [ 412 ] ) * xx [ 22 ] + xx [ 28 ] * state [ 63 ] ;
motionData [ 433 ] = xx [ 158 ] * xx [ 167 ] - xx [ 404 ] * xx [ 21 ] + xx [
153 ] ; motionData [ 434 ] = xx [ 22 ] * ( xx [ 164 ] * xx [ 410 ] + xx [ 412
] * xx [ 165 ] ) - xx [ 411 ] + xx [ 314 ] * state [ 63 ] ; motionData [ 435
] = xx [ 420 ] ; motionData [ 436 ] = xx [ 421 ] ; motionData [ 437 ] = xx [
422 ] + state [ 65 ] ; motionData [ 438 ] = xx [ 417 ] ; motionData [ 439 ] =
xx [ 418 ] ; motionData [ 440 ] = xx [ 419 ] ; motionData [ 441 ] = xx [ 332
] ; motionData [ 442 ] = xx [ 333 ] ; motionData [ 443 ] = xx [ 334 ] ;
motionData [ 444 ] = - xx [ 413 ] ; motionData [ 445 ] = xx [ 414 ] ;
motionData [ 446 ] = - xx [ 415 ] ; motionData [ 447 ] = xx [ 423 ] + xx [
429 ] ; motionData [ 448 ] = xx [ 424 ] + xx [ 430 ] ; motionData [ 449 ] =
xx [ 425 ] + xx [ 431 ] ; motionData [ 450 ] = xx [ 426 ] + xx [ 245 ] ;
motionData [ 451 ] = xx [ 427 ] + xx [ 246 ] ; motionData [ 452 ] = xx [ 428
] + xx [ 247 ] ; motionData [ 453 ] = xx [ 416 ] ; motionData [ 454 ] = xx [
44 ] ; motionData [ 455 ] = xx [ 46 ] ; motionData [ 456 ] = - xx [ 47 ] ;
motionData [ 457 ] = xx [ 324 ] ; motionData [ 458 ] = - xx [ 326 ] ;
motionData [ 459 ] = xx [ 435 ] + xx [ 441 ] ; motionData [ 460 ] = xx [ 436
] + xx [ 442 ] ; motionData [ 461 ] = xx [ 437 ] + xx [ 443 ] ; motionData [
462 ] = xx [ 64 ] + xx [ 267 ] ; motionData [ 463 ] = xx [ 65 ] + xx [ 268 ]
; motionData [ 464 ] = xx [ 66 ] + xx [ 269 ] ; motionData [ 465 ] = xx [ 2 ]
; motionData [ 466 ] = xx [ 2 ] ; motionData [ 467 ] = xx [ 2 ] ; motionData
[ 468 ] = xx [ 2 ] ; motionData [ 469 ] = xx [ 2 ] ; motionData [ 470 ] = xx
[ 2 ] ; } static size_t computeAssemblyError_0 ( const
RuntimeDerivedValuesBundle * rtdv , const double * state , const int *
modeVector , const double * motionData , double * error ) { const double *
rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts .
mValues ; double xx [ 13 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) state
; ( void ) modeVector ; xx [ 0 ] = motionData [ 189 ] ; xx [ 1 ] = motionData
[ 190 ] ; xx [ 2 ] = motionData [ 191 ] ; xx [ 3 ] = motionData [ 192 ] ; xx
[ 4 ] = - 0.07930000000000005 ; xx [ 5 ] = 0.02989999999999998 ; xx [ 6 ] = -
0.105 ; pm_math_Quaternion_xform_ra ( xx + 0 , xx + 4 , xx + 7 ) ; xx [ 0 ] =
motionData [ 182 ] ; xx [ 1 ] = motionData [ 183 ] ; xx [ 2 ] = motionData [
184 ] ; xx [ 3 ] = motionData [ 185 ] ; xx [ 4 ] = 0.05448810068449638 ; xx [
5 ] = 9.016809746371062e-8 ; xx [ 6 ] = - 1.197569081478675e-6 ;
pm_math_Quaternion_xform_ra ( xx + 0 , xx + 4 , xx + 10 ) ; error [ 0 ] = xx
[ 7 ] + motionData [ 193 ] - ( xx [ 10 ] + motionData [ 186 ] ) ; error [ 1 ]
= xx [ 8 ] + motionData [ 194 ] - ( xx [ 11 ] + motionData [ 187 ] ) ; error
[ 2 ] = xx [ 9 ] + motionData [ 195 ] - ( xx [ 12 ] + motionData [ 188 ] ) ;
return 3 ; } static size_t computeAssemblyError_1 ( const
RuntimeDerivedValuesBundle * rtdv , const double * state , const int *
modeVector , const double * motionData , double * error ) { const double *
rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts .
mValues ; double xx [ 13 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) state
; ( void ) modeVector ; xx [ 0 ] = motionData [ 189 ] ; xx [ 1 ] = motionData
[ 190 ] ; xx [ 2 ] = motionData [ 191 ] ; xx [ 3 ] = motionData [ 192 ] ; xx
[ 4 ] = - 0.07930000000000012 ; xx [ 5 ] = - 0.02990000000000002 ; xx [ 6 ] =
- 0.1049999999999999 ; pm_math_Quaternion_xform_ra ( xx + 0 , xx + 4 , xx + 7
) ; xx [ 0 ] = motionData [ 196 ] ; xx [ 1 ] = motionData [ 197 ] ; xx [ 2 ]
= motionData [ 198 ] ; xx [ 3 ] = motionData [ 199 ] ; xx [ 4 ] =
0.05448810068449638 ; xx [ 5 ] = 9.016809746371062e-8 ; xx [ 6 ] = -
1.197569081478675e-6 ; pm_math_Quaternion_xform_ra ( xx + 0 , xx + 4 , xx +
10 ) ; error [ 0 ] = xx [ 7 ] + motionData [ 193 ] - ( xx [ 10 ] + motionData
[ 200 ] ) ; error [ 1 ] = xx [ 8 ] + motionData [ 194 ] - ( xx [ 11 ] +
motionData [ 201 ] ) ; error [ 2 ] = xx [ 9 ] + motionData [ 195 ] - ( xx [
12 ] + motionData [ 202 ] ) ; return 3 ; } static size_t
computeAssemblyError_2 ( const RuntimeDerivedValuesBundle * rtdv , const
double * state , const int * modeVector , const double * motionData , double
* error ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int *
rtdvi = rtdv -> mInts . mValues ; double xx [ 13 ] ; ( void ) rtdvd ; ( void
) rtdvi ; ( void ) state ; ( void ) modeVector ; xx [ 0 ] = motionData [ 210
] ; xx [ 1 ] = motionData [ 211 ] ; xx [ 2 ] = motionData [ 212 ] ; xx [ 3 ]
= motionData [ 213 ] ; xx [ 4 ] = - 0.07930000000000005 ; xx [ 5 ] =
0.02989999999999998 ; xx [ 6 ] = - 0.105 ; pm_math_Quaternion_xform_ra ( xx +
0 , xx + 4 , xx + 7 ) ; xx [ 0 ] = motionData [ 203 ] ; xx [ 1 ] = motionData
[ 204 ] ; xx [ 2 ] = motionData [ 205 ] ; xx [ 3 ] = motionData [ 206 ] ; xx
[ 4 ] = 0.05448810068449638 ; xx [ 5 ] = 9.016809746371062e-8 ; xx [ 6 ] = -
1.197569081478675e-6 ; pm_math_Quaternion_xform_ra ( xx + 0 , xx + 4 , xx +
10 ) ; error [ 0 ] = xx [ 7 ] + motionData [ 214 ] - ( xx [ 10 ] + motionData
[ 207 ] ) ; error [ 1 ] = xx [ 8 ] + motionData [ 215 ] - ( xx [ 11 ] +
motionData [ 208 ] ) ; error [ 2 ] = xx [ 9 ] + motionData [ 216 ] - ( xx [
12 ] + motionData [ 209 ] ) ; return 3 ; } static size_t
computeAssemblyError_3 ( const RuntimeDerivedValuesBundle * rtdv , const
double * state , const int * modeVector , const double * motionData , double
* error ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int *
rtdvi = rtdv -> mInts . mValues ; double xx [ 13 ] ; ( void ) rtdvd ; ( void
) rtdvi ; ( void ) state ; ( void ) modeVector ; xx [ 0 ] = motionData [ 210
] ; xx [ 1 ] = motionData [ 211 ] ; xx [ 2 ] = motionData [ 212 ] ; xx [ 3 ]
= motionData [ 213 ] ; xx [ 4 ] = - 0.07930000000000012 ; xx [ 5 ] = -
0.02990000000000002 ; xx [ 6 ] = - 0.1049999999999999 ;
pm_math_Quaternion_xform_ra ( xx + 0 , xx + 4 , xx + 7 ) ; xx [ 0 ] =
motionData [ 217 ] ; xx [ 1 ] = motionData [ 218 ] ; xx [ 2 ] = motionData [
219 ] ; xx [ 3 ] = motionData [ 220 ] ; xx [ 4 ] = 0.05448810068449638 ; xx [
5 ] = 9.016809746371062e-8 ; xx [ 6 ] = - 1.197569081478675e-6 ;
pm_math_Quaternion_xform_ra ( xx + 0 , xx + 4 , xx + 10 ) ; error [ 0 ] = xx
[ 7 ] + motionData [ 214 ] - ( xx [ 10 ] + motionData [ 221 ] ) ; error [ 1 ]
= xx [ 8 ] + motionData [ 215 ] - ( xx [ 11 ] + motionData [ 222 ] ) ; error
[ 2 ] = xx [ 9 ] + motionData [ 216 ] - ( xx [ 12 ] + motionData [ 223 ] ) ;
return 3 ; } static size_t computeAssemblyError_4 ( const
RuntimeDerivedValuesBundle * rtdv , const double * state , const int *
modeVector , const double * motionData , double * error ) { const double *
rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts .
mValues ; double xx [ 13 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) state
; ( void ) modeVector ; xx [ 0 ] = motionData [ 231 ] ; xx [ 1 ] = motionData
[ 232 ] ; xx [ 2 ] = motionData [ 233 ] ; xx [ 3 ] = motionData [ 234 ] ; xx
[ 4 ] = - 0.07930000000000005 ; xx [ 5 ] = 0.02989999999999998 ; xx [ 6 ] = -
0.105 ; pm_math_Quaternion_xform_ra ( xx + 0 , xx + 4 , xx + 7 ) ; xx [ 0 ] =
motionData [ 224 ] ; xx [ 1 ] = motionData [ 225 ] ; xx [ 2 ] = motionData [
226 ] ; xx [ 3 ] = motionData [ 227 ] ; xx [ 4 ] = 0.05448810068449638 ; xx [
5 ] = 9.016809746371062e-8 ; xx [ 6 ] = - 1.197569081478675e-6 ;
pm_math_Quaternion_xform_ra ( xx + 0 , xx + 4 , xx + 10 ) ; error [ 0 ] = xx
[ 7 ] + motionData [ 235 ] - ( xx [ 10 ] + motionData [ 228 ] ) ; error [ 1 ]
= xx [ 8 ] + motionData [ 236 ] - ( xx [ 11 ] + motionData [ 229 ] ) ; error
[ 2 ] = xx [ 9 ] + motionData [ 237 ] - ( xx [ 12 ] + motionData [ 230 ] ) ;
return 3 ; } static size_t computeAssemblyError_5 ( const
RuntimeDerivedValuesBundle * rtdv , const double * state , const int *
modeVector , const double * motionData , double * error ) { const double *
rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts .
mValues ; double xx [ 13 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) state
; ( void ) modeVector ; xx [ 0 ] = motionData [ 231 ] ; xx [ 1 ] = motionData
[ 232 ] ; xx [ 2 ] = motionData [ 233 ] ; xx [ 3 ] = motionData [ 234 ] ; xx
[ 4 ] = - 0.07930000000000012 ; xx [ 5 ] = - 0.02990000000000002 ; xx [ 6 ] =
- 0.1049999999999999 ; pm_math_Quaternion_xform_ra ( xx + 0 , xx + 4 , xx + 7
) ; xx [ 0 ] = motionData [ 238 ] ; xx [ 1 ] = motionData [ 239 ] ; xx [ 2 ]
= motionData [ 240 ] ; xx [ 3 ] = motionData [ 241 ] ; xx [ 4 ] =
0.05448810068449638 ; xx [ 5 ] = 9.016809746371062e-8 ; xx [ 6 ] = -
1.197569081478675e-6 ; pm_math_Quaternion_xform_ra ( xx + 0 , xx + 4 , xx +
10 ) ; error [ 0 ] = xx [ 7 ] + motionData [ 235 ] - ( xx [ 10 ] + motionData
[ 242 ] ) ; error [ 1 ] = xx [ 8 ] + motionData [ 236 ] - ( xx [ 11 ] +
motionData [ 243 ] ) ; error [ 2 ] = xx [ 9 ] + motionData [ 237 ] - ( xx [
12 ] + motionData [ 244 ] ) ; return 3 ; } static size_t
computeAssemblyError_6 ( const RuntimeDerivedValuesBundle * rtdv , const
double * state , const int * modeVector , const double * motionData , double
* error ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int *
rtdvi = rtdv -> mInts . mValues ; double xx [ 15 ] ; ( void ) rtdvd ; ( void
) rtdvi ; ( void ) state ; ( void ) modeVector ; xx [ 0 ] = motionData [ 28 ]
; xx [ 1 ] = motionData [ 29 ] ; xx [ 2 ] = motionData [ 30 ] ; xx [ 3 ] =
motionData [ 31 ] ; xx [ 4 ] = 0.7071067811865476 ; xx [ 5 ] = xx [ 4 ] *
motionData [ 21 ] ; xx [ 6 ] = xx [ 4 ] * motionData [ 22 ] ; xx [ 7 ] = xx [
4 ] * motionData [ 23 ] ; xx [ 8 ] = xx [ 4 ] * motionData [ 24 ] ; xx [ 9 ]
= xx [ 5 ] + xx [ 6 ] ; xx [ 10 ] = xx [ 6 ] - xx [ 5 ] ; xx [ 11 ] = xx [ 7
] - xx [ 8 ] ; xx [ 12 ] = xx [ 8 ] + xx [ 7 ] ;
pm_math_Quaternion_inverseCompose_ra ( xx + 0 , xx + 9 , xx + 4 ) ; xx [ 0 ]
= motionData [ 22 ] ; xx [ 1 ] = motionData [ 23 ] ; xx [ 2 ] = motionData [
24 ] ; xx [ 3 ] = 0.4527250000000002 ; xx [ 4 ] = 1.405725 ; xx [ 7 ] = xx [
4 ] * motionData [ 24 ] + xx [ 3 ] * motionData [ 22 ] ; xx [ 8 ] = xx [ 4 ]
* motionData [ 23 ] ; xx [ 9 ] = - ( xx [ 3 ] * motionData [ 23 ] ) ; xx [ 10
] = xx [ 7 ] ; xx [ 11 ] = - xx [ 8 ] ; pm_math_Vector3_cross_ra ( xx + 0 ,
xx + 9 , xx + 12 ) ; xx [ 0 ] = 2.0 ; xx [ 1 ] = 0.01 ; xx [ 2 ] = xx [ 1 ] *
motionData [ 30 ] ; xx [ 9 ] = xx [ 1 ] * motionData [ 29 ] ; xx [ 10 ] = (
xx [ 12 ] - xx [ 3 ] * motionData [ 21 ] * motionData [ 23 ] ) * xx [ 0 ] +
motionData [ 25 ] + xx [ 4 ] - ( motionData [ 32 ] - ( xx [ 2 ] * motionData
[ 28 ] + xx [ 9 ] * motionData [ 31 ] ) * xx [ 0 ] ) ; xx [ 4 ] = ( xx [ 7 ]
* motionData [ 21 ] + xx [ 13 ] ) * xx [ 0 ] + motionData [ 26 ] - ( xx [ 0 ]
* ( xx [ 9 ] * motionData [ 28 ] - xx [ 2 ] * motionData [ 31 ] ) +
motionData [ 33 ] ) ; xx [ 7 ] = xx [ 0 ] * ( xx [ 14 ] - xx [ 8 ] *
motionData [ 21 ] ) + motionData [ 27 ] - xx [ 3 ] - ( motionData [ 34 ] + (
xx [ 9 ] * motionData [ 29 ] + xx [ 2 ] * motionData [ 30 ] ) * xx [ 0 ] - xx
[ 1 ] ) ; xx [ 1 ] = xx [ 10 ] ; xx [ 2 ] = xx [ 4 ] ; xx [ 3 ] = xx [ 7 ] ;
xx [ 11 ] = ( motionData [ 28 ] * motionData [ 30 ] + motionData [ 29 ] *
motionData [ 31 ] ) * xx [ 0 ] ; xx [ 12 ] = xx [ 0 ] * ( motionData [ 30 ] *
motionData [ 31 ] - motionData [ 28 ] * motionData [ 29 ] ) ; xx [ 13 ] = 1.0
- ( motionData [ 29 ] * motionData [ 29 ] + motionData [ 30 ] * motionData [
30 ] ) * xx [ 0 ] ; error [ 0 ] = xx [ 5 ] ; error [ 1 ] = xx [ 6 ] ; error [
2 ] = sqrt ( xx [ 10 ] * xx [ 10 ] + xx [ 4 ] * xx [ 4 ] + xx [ 7 ] * xx [ 7
] ) - 1.555 ; error [ 3 ] = pm_math_Vector3_dot_ra ( xx + 1 , xx + 11 ) ;
return 4 ; } static size_t computeAssemblyError_7 ( const
RuntimeDerivedValuesBundle * rtdv , const double * state , const int *
modeVector , const double * motionData , double * error ) { const double *
rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts .
mValues ; double xx [ 15 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) state
; ( void ) modeVector ; xx [ 0 ] = motionData [ 84 ] ; xx [ 1 ] = motionData
[ 85 ] ; xx [ 2 ] = motionData [ 86 ] ; xx [ 3 ] = motionData [ 87 ] ; xx [ 4
] = 0.7071067811865476 ; xx [ 5 ] = xx [ 4 ] * motionData [ 77 ] ; xx [ 6 ] =
xx [ 4 ] * motionData [ 78 ] ; xx [ 7 ] = xx [ 4 ] * motionData [ 80 ] ; xx [
8 ] = xx [ 4 ] * motionData [ 79 ] ; xx [ 9 ] = - ( xx [ 5 ] + xx [ 6 ] ) ;
xx [ 10 ] = xx [ 5 ] - xx [ 6 ] ; xx [ 11 ] = xx [ 7 ] - xx [ 8 ] ; xx [ 12 ]
= - ( xx [ 7 ] + xx [ 8 ] ) ; pm_math_Quaternion_inverseCompose_ra ( xx + 0 ,
xx + 9 , xx + 4 ) ; xx [ 0 ] = motionData [ 78 ] ; xx [ 1 ] = motionData [ 79
] ; xx [ 2 ] = motionData [ 80 ] ; xx [ 3 ] = 0.452725 ; xx [ 4 ] = 1.405725
; xx [ 7 ] = xx [ 4 ] * motionData [ 80 ] + xx [ 3 ] * motionData [ 78 ] ; xx
[ 8 ] = xx [ 4 ] * motionData [ 79 ] ; xx [ 9 ] = - ( xx [ 3 ] * motionData [
79 ] ) ; xx [ 10 ] = xx [ 7 ] ; xx [ 11 ] = - xx [ 8 ] ;
pm_math_Vector3_cross_ra ( xx + 0 , xx + 9 , xx + 12 ) ; xx [ 0 ] = 2.0 ; xx
[ 1 ] = 0.01 ; xx [ 2 ] = xx [ 1 ] * motionData [ 86 ] ; xx [ 9 ] = xx [ 1 ]
* motionData [ 85 ] ; xx [ 10 ] = ( xx [ 12 ] - xx [ 3 ] * motionData [ 77 ]
* motionData [ 79 ] ) * xx [ 0 ] + motionData [ 81 ] + xx [ 4 ] - (
motionData [ 88 ] - ( xx [ 2 ] * motionData [ 84 ] + xx [ 9 ] * motionData [
87 ] ) * xx [ 0 ] ) ; xx [ 4 ] = ( xx [ 7 ] * motionData [ 77 ] + xx [ 13 ] )
* xx [ 0 ] + motionData [ 82 ] - ( xx [ 0 ] * ( xx [ 9 ] * motionData [ 84 ]
- xx [ 2 ] * motionData [ 87 ] ) + motionData [ 89 ] ) ; xx [ 7 ] = xx [ 0 ]
* ( xx [ 14 ] - xx [ 8 ] * motionData [ 77 ] ) + motionData [ 83 ] - xx [ 3 ]
- ( motionData [ 90 ] + ( xx [ 9 ] * motionData [ 85 ] + xx [ 2 ] *
motionData [ 86 ] ) * xx [ 0 ] - xx [ 1 ] ) ; xx [ 1 ] = xx [ 10 ] ; xx [ 2 ]
= xx [ 4 ] ; xx [ 3 ] = xx [ 7 ] ; xx [ 11 ] = ( motionData [ 84 ] *
motionData [ 86 ] + motionData [ 85 ] * motionData [ 87 ] ) * xx [ 0 ] ; xx [
12 ] = xx [ 0 ] * ( motionData [ 86 ] * motionData [ 87 ] - motionData [ 84 ]
* motionData [ 85 ] ) ; xx [ 13 ] = 1.0 - ( motionData [ 85 ] * motionData [
85 ] + motionData [ 86 ] * motionData [ 86 ] ) * xx [ 0 ] ; error [ 0 ] = xx
[ 5 ] ; error [ 1 ] = xx [ 6 ] ; error [ 2 ] = sqrt ( xx [ 10 ] * xx [ 10 ] +
xx [ 4 ] * xx [ 4 ] + xx [ 7 ] * xx [ 7 ] ) - 1.555 ; error [ 3 ] =
pm_math_Vector3_dot_ra ( xx + 1 , xx + 11 ) ; return 4 ; } static size_t
computeAssemblyError_8 ( const RuntimeDerivedValuesBundle * rtdv , const
double * state , const int * modeVector , const double * motionData , double
* error ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int *
rtdvi = rtdv -> mInts . mValues ; double xx [ 15 ] ; ( void ) rtdvd ; ( void
) rtdvi ; ( void ) state ; ( void ) modeVector ; xx [ 0 ] = motionData [ 140
] ; xx [ 1 ] = motionData [ 141 ] ; xx [ 2 ] = motionData [ 142 ] ; xx [ 3 ]
= motionData [ 143 ] ; xx [ 4 ] = 0.7071067811865476 ; xx [ 5 ] = xx [ 4 ] *
motionData [ 133 ] ; xx [ 6 ] = xx [ 4 ] * motionData [ 134 ] ; xx [ 7 ] = xx
[ 4 ] * motionData [ 136 ] ; xx [ 8 ] = xx [ 4 ] * motionData [ 135 ] ; xx [
9 ] = - ( xx [ 5 ] + xx [ 6 ] ) ; xx [ 10 ] = xx [ 5 ] - xx [ 6 ] ; xx [ 11 ]
= xx [ 7 ] - xx [ 8 ] ; xx [ 12 ] = - ( xx [ 7 ] + xx [ 8 ] ) ;
pm_math_Quaternion_inverseCompose_ra ( xx + 0 , xx + 9 , xx + 4 ) ; xx [ 0 ]
= motionData [ 134 ] ; xx [ 1 ] = motionData [ 135 ] ; xx [ 2 ] = motionData
[ 136 ] ; xx [ 3 ] = 0.452725 ; xx [ 4 ] = 1.405725 ; xx [ 7 ] = xx [ 4 ] *
motionData [ 136 ] + xx [ 3 ] * motionData [ 134 ] ; xx [ 8 ] = xx [ 4 ] *
motionData [ 135 ] ; xx [ 9 ] = - ( xx [ 3 ] * motionData [ 135 ] ) ; xx [ 10
] = xx [ 7 ] ; xx [ 11 ] = - xx [ 8 ] ; pm_math_Vector3_cross_ra ( xx + 0 ,
xx + 9 , xx + 12 ) ; xx [ 0 ] = 2.0 ; xx [ 1 ] = 0.01 ; xx [ 2 ] = xx [ 1 ] *
motionData [ 142 ] ; xx [ 9 ] = xx [ 1 ] * motionData [ 141 ] ; xx [ 10 ] = (
xx [ 12 ] - xx [ 3 ] * motionData [ 133 ] * motionData [ 135 ] ) * xx [ 0 ] +
motionData [ 137 ] + xx [ 4 ] - ( motionData [ 144 ] - ( xx [ 2 ] *
motionData [ 140 ] + xx [ 9 ] * motionData [ 143 ] ) * xx [ 0 ] ) ; xx [ 4 ]
= ( xx [ 7 ] * motionData [ 133 ] + xx [ 13 ] ) * xx [ 0 ] + motionData [ 138
] - ( xx [ 0 ] * ( xx [ 9 ] * motionData [ 140 ] - xx [ 2 ] * motionData [
143 ] ) + motionData [ 145 ] ) ; xx [ 7 ] = xx [ 0 ] * ( xx [ 14 ] - xx [ 8 ]
* motionData [ 133 ] ) + motionData [ 139 ] - xx [ 3 ] - ( motionData [ 146 ]
+ ( xx [ 9 ] * motionData [ 141 ] + xx [ 2 ] * motionData [ 142 ] ) * xx [ 0
] - xx [ 1 ] ) ; xx [ 1 ] = xx [ 10 ] ; xx [ 2 ] = xx [ 4 ] ; xx [ 3 ] = xx [
7 ] ; xx [ 11 ] = ( motionData [ 140 ] * motionData [ 142 ] + motionData [
141 ] * motionData [ 143 ] ) * xx [ 0 ] ; xx [ 12 ] = xx [ 0 ] * ( motionData
[ 142 ] * motionData [ 143 ] - motionData [ 140 ] * motionData [ 141 ] ) ; xx
[ 13 ] = 1.0 - ( motionData [ 141 ] * motionData [ 141 ] + motionData [ 142 ]
* motionData [ 142 ] ) * xx [ 0 ] ; error [ 0 ] = xx [ 5 ] ; error [ 1 ] = xx
[ 6 ] ; error [ 2 ] = sqrt ( xx [ 10 ] * xx [ 10 ] + xx [ 4 ] * xx [ 4 ] + xx
[ 7 ] * xx [ 7 ] ) - 1.555 ; error [ 3 ] = pm_math_Vector3_dot_ra ( xx + 1 ,
xx + 11 ) ; return 4 ; } size_t triped_a151ee3d_1_computeAssemblyError (
const void * mech , const RuntimeDerivedValuesBundle * rtdv , size_t
constraintIdx , const double * state , const int * modeVector , const double
* motionData , double * error ) { ( void ) mech ; ( void ) rtdv ; ( void )
state ; ( void ) modeVector ; ( void ) motionData ; ( void ) error ; switch (
constraintIdx ) { case 0 : return computeAssemblyError_0 ( rtdv , state ,
modeVector , motionData , error ) ; case 1 : return computeAssemblyError_1 (
rtdv , state , modeVector , motionData , error ) ; case 2 : return
computeAssemblyError_2 ( rtdv , state , modeVector , motionData , error ) ;
case 3 : return computeAssemblyError_3 ( rtdv , state , modeVector ,
motionData , error ) ; case 4 : return computeAssemblyError_4 ( rtdv , state
, modeVector , motionData , error ) ; case 5 : return computeAssemblyError_5
( rtdv , state , modeVector , motionData , error ) ; case 6 : return
computeAssemblyError_6 ( rtdv , state , modeVector , motionData , error ) ;
case 7 : return computeAssemblyError_7 ( rtdv , state , modeVector ,
motionData , error ) ; case 8 : return computeAssemblyError_8 ( rtdv , state
, modeVector , motionData , error ) ; } return 0 ; } static size_t
computeAssemblyJacobian_0 ( const RuntimeDerivedValuesBundle * rtdv , const
double * state , const int * modeVector , const double * motionData , double
* J ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi
= rtdv -> mInts . mValues ; double xx [ 71 ] ; ( void ) rtdvd ; ( void )
rtdvi ; ( void ) modeVector ; xx [ 0 ] = motionData [ 7 ] ; xx [ 1 ] =
motionData [ 8 ] ; xx [ 2 ] = motionData [ 9 ] ; xx [ 3 ] = motionData [ 10 ]
; xx [ 4 ] = 0.5 ; xx [ 5 ] = xx [ 4 ] * state [ 0 ] ; xx [ 6 ] = sin ( xx [
5 ] ) ; xx [ 7 ] = xx [ 4 ] * state [ 1 ] ; xx [ 8 ] = sin ( xx [ 7 ] ) ; xx
[ 9 ] = xx [ 6 ] * xx [ 8 ] ; xx [ 10 ] = xx [ 4 ] * state [ 2 ] ; xx [ 11 ]
= sin ( xx [ 10 ] ) ; xx [ 12 ] = cos ( xx [ 10 ] ) ; xx [ 10 ] = cos ( xx [
5 ] ) ; xx [ 5 ] = cos ( xx [ 7 ] ) ; xx [ 7 ] = xx [ 10 ] * xx [ 5 ] ; xx [
13 ] = xx [ 9 ] * xx [ 11 ] - xx [ 12 ] * xx [ 7 ] ; xx [ 14 ] = xx [ 5 ] *
xx [ 6 ] ; xx [ 5 ] = xx [ 10 ] * xx [ 8 ] ; xx [ 6 ] = xx [ 12 ] * xx [ 14 ]
+ xx [ 5 ] * xx [ 11 ] ; xx [ 8 ] = xx [ 14 ] * xx [ 11 ] - xx [ 12 ] * xx [
5 ] ; xx [ 5 ] = xx [ 7 ] * xx [ 11 ] + xx [ 12 ] * xx [ 9 ] ; xx [ 14 ] = xx
[ 13 ] ; xx [ 15 ] = - xx [ 6 ] ; xx [ 16 ] = xx [ 8 ] ; xx [ 17 ] = - xx [ 5
] ; pm_math_Quaternion_compose_ra ( xx + 0 , xx + 14 , xx + 18 ) ; xx [ 7 ] =
1.0 ; xx [ 9 ] = 2.0 ; xx [ 10 ] = xx [ 7 ] - ( xx [ 8 ] * xx [ 8 ] + xx [ 5
] * xx [ 5 ] ) * xx [ 9 ] ; xx [ 22 ] = xx [ 9 ] * ( xx [ 5 ] * xx [ 13 ] -
xx [ 6 ] * xx [ 8 ] ) ; xx [ 23 ] = xx [ 8 ] * xx [ 13 ] + xx [ 6 ] * xx [ 5
] ; xx [ 24 ] = xx [ 10 ] ; xx [ 25 ] = xx [ 22 ] ; xx [ 26 ] = xx [ 23 ] *
xx [ 9 ] ; xx [ 27 ] = 0.07930000000000005 ; xx [ 28 ] = 0.02989999999999998
; xx [ 29 ] = 0.105 ; xx [ 30 ] = - xx [ 27 ] ; xx [ 31 ] = xx [ 28 ] ; xx [
32 ] = - xx [ 29 ] ; pm_math_Vector3_cross_ra ( xx + 24 , xx + 30 , xx + 33 )
; pm_math_Quaternion_xform_ra ( xx + 18 , xx + 33 , xx + 24 ) ; xx [ 30 ] =
8.499999999999917e-3 ; xx [ 31 ] = 0.09430000000000001 ; xx [ 32 ] = - ( xx [
30 ] * xx [ 22 ] ) ; xx [ 33 ] = xx [ 30 ] * xx [ 10 ] - xx [ 23 ] * 0.1886 ;
xx [ 34 ] = xx [ 31 ] * xx [ 22 ] ; pm_math_Quaternion_xform_ra ( xx + 14 ,
xx + 32 , xx + 35 ) ; xx [ 32 ] = - xx [ 35 ] ; xx [ 33 ] = - xx [ 36 ] ; xx
[ 34 ] = - xx [ 37 ] ; pm_math_Quaternion_xform_ra ( xx + 0 , xx + 32 , xx +
35 ) ; xx [ 10 ] = xx [ 7 ] - xx [ 9 ] * xx [ 11 ] * xx [ 11 ] ; xx [ 7 ] =
xx [ 9 ] * xx [ 12 ] * xx [ 11 ] ; xx [ 32 ] = - ( xx [ 29 ] * xx [ 10 ] ) ;
xx [ 33 ] = xx [ 29 ] * xx [ 7 ] ; xx [ 34 ] = xx [ 28 ] * xx [ 7 ] + xx [ 27
] * xx [ 10 ] ; pm_math_Quaternion_xform_ra ( xx + 18 , xx + 32 , xx + 38 ) ;
xx [ 32 ] = - ( xx [ 30 ] * xx [ 10 ] ) ; xx [ 33 ] = xx [ 30 ] * xx [ 7 ] ;
xx [ 34 ] = xx [ 31 ] * xx [ 10 ] ; pm_math_Quaternion_xform_ra ( xx + 14 ,
xx + 32 , xx + 10 ) ; xx [ 14 ] = - xx [ 10 ] ; xx [ 15 ] = - xx [ 11 ] ; xx
[ 16 ] = - xx [ 12 ] ; pm_math_Quaternion_xform_ra ( xx + 0 , xx + 14 , xx +
10 ) ; xx [ 7 ] = xx [ 27 ] * xx [ 21 ] ; xx [ 14 ] = xx [ 28 ] * xx [ 20 ] -
xx [ 27 ] * xx [ 19 ] ; xx [ 15 ] = xx [ 7 ] ; xx [ 16 ] = - ( xx [ 28 ] * xx
[ 21 ] ) ; xx [ 17 ] = xx [ 14 ] ; pm_math_Vector3_cross_ra ( xx + 19 , xx +
15 , xx + 32 ) ; xx [ 15 ] = xx [ 6 ] * xx [ 31 ] ; xx [ 16 ] = xx [ 5 ] * xx
[ 31 ] ; xx [ 41 ] = - ( xx [ 9 ] * ( xx [ 15 ] * xx [ 8 ] - xx [ 16 ] * xx [
13 ] ) ) ; xx [ 42 ] = xx [ 31 ] - ( xx [ 5 ] * xx [ 16 ] + xx [ 6 ] * xx [
15 ] ) * xx [ 9 ] ; xx [ 43 ] = - ( ( xx [ 15 ] * xx [ 13 ] + xx [ 16 ] * xx
[ 8 ] ) * xx [ 9 ] ) ; pm_math_Quaternion_xform_ra ( xx + 0 , xx + 41 , xx +
15 ) ; xx [ 0 ] = 0.0 ; xx [ 41 ] = 0.9813587152233355 ; xx [ 42 ] = -
8.90329107482098e-3 ; xx [ 43 ] = 0.04727447558555155 ; xx [ 44 ] =
0.1860669971310137 ; xx [ 1 ] = xx [ 4 ] * state [ 10 ] ; xx [ 2 ] =
0.0960996545167382 ; xx [ 3 ] = sin ( xx [ 1 ] ) ; xx [ 4 ] =
1.177948454025794e-4 ; xx [ 5 ] = 0.9953717107322962 ; xx [ 45 ] = cos ( xx [
1 ] ) ; xx [ 46 ] = - ( xx [ 2 ] * xx [ 3 ] ) ; xx [ 47 ] = xx [ 4 ] * xx [ 3
] ; xx [ 48 ] = xx [ 5 ] * xx [ 3 ] ; pm_math_Quaternion_compose_ra ( xx + 41
, xx + 45 , xx + 49 ) ; xx [ 41 ] = motionData [ 42 ] ; xx [ 42 ] =
motionData [ 43 ] ; xx [ 43 ] = motionData [ 44 ] ; xx [ 44 ] = motionData [
45 ] ; pm_math_Quaternion_compose_ra ( xx + 49 , xx + 41 , xx + 45 ) ; xx [
29 ] = - xx [ 2 ] ; xx [ 30 ] = xx [ 4 ] ; xx [ 31 ] = xx [ 5 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 41 , xx + 29 , xx + 1 ) ; xx [ 4 ]
= 0.05448810068449638 ; xx [ 5 ] = 9.016809746371062e-8 ; xx [ 6 ] = -
1.197569081478675e-6 ; pm_math_Vector3_cross_ra ( xx + 1 , xx + 4 , xx + 41 )
; pm_math_Quaternion_xform_ra ( xx + 45 , xx + 41 , xx + 1 ) ; xx [ 4 ] =
motionData [ 46 ] ; xx [ 5 ] = motionData [ 47 ] ; xx [ 6 ] = motionData [ 48
] ; pm_math_Vector3_cross_ra ( xx + 29 , xx + 4 , xx + 41 ) ;
pm_math_Quaternion_xform_ra ( xx + 49 , xx + 41 , xx + 4 ) ; xx [ 29 ] = -
2.298050364265303e-6 ; xx [ 30 ] = 0.02367056868070961 ; xx [ 31 ] = -
3.023104627104057e-6 ; pm_math_Quaternion_xform_ra ( xx + 49 , xx + 29 , xx +
41 ) ; xx [ 44 ] = motionData [ 35 ] ; xx [ 45 ] = motionData [ 36 ] ; xx [
46 ] = motionData [ 37 ] ; xx [ 47 ] = motionData [ 38 ] ; xx [ 48 ] =
0.9988422572316213 ; xx [ 49 ] = - 6.00792342022948e-5 ; xx [ 50 ] = -
0.04810551968680427 ; xx [ 51 ] = 2.312115552059532e-5 ; xx [ 52 ] = state [
12 ] ; xx [ 53 ] = state [ 13 ] ; xx [ 54 ] = state [ 14 ] ; xx [ 55 ] =
state [ 15 ] ; xx [ 56 ] = - 0.9999999999996456 ; xx [ 57 ] =
1.335114243000915e-9 ; xx [ 58 ] = 1.564242624680818e-7 ; xx [ 59 ] = -
8.27384461422298e-7 ; pm_math_Quaternion_composeInverse_ra ( xx + 52 , xx +
56 , xx + 60 ) ; pm_math_Quaternion_compose_ra ( xx + 48 , xx + 60 , xx + 52
) ; pm_math_Quaternion_compose_ra ( xx + 44 , xx + 52 , xx + 48 ) ; xx [ 29 ]
= - 2.009909055578571e-12 ; xx [ 30 ] = 1.214615603282308e-6 ; xx [ 31 ] =
2.881763323693879e-12 ; pm_math_Quaternion_xform_ra ( xx + 48 , xx + 29 , xx
+ 56 ) ; xx [ 29 ] = 2.009909055578572e-12 ; xx [ 30 ] = -
1.21461560328232e-6 ; xx [ 31 ] = - 2.881763259213495e-12 ;
pm_math_Quaternion_xform_ra ( xx + 52 , xx + 29 , xx + 59 ) ;
pm_math_Quaternion_xform_ra ( xx + 44 , xx + 59 , xx + 29 ) ; xx [ 59 ] = -
1.197569081236243e-6 ; xx [ 60 ] = - 1.474914827216787e-10 ; xx [ 61 ] = -
0.05448810068457099 ; pm_math_Quaternion_xform_ra ( xx + 48 , xx + 59 , xx +
62 ) ; xx [ 59 ] = 1.231982419222245e-6 ; xx [ 60 ] = - 1.462051776775044e-10
; xx [ 61 ] = - 0.05551189931542364 ; pm_math_Quaternion_xform_ra ( xx + 52 ,
xx + 59 , xx + 65 ) ; pm_math_Quaternion_xform_ra ( xx + 44 , xx + 65 , xx +
59 ) ; xx [ 65 ] = - 9.016810066118371e-8 ; xx [ 66 ] = 0.05448810068412172 ;
xx [ 67 ] = - 1.455097835249509e-10 ; pm_math_Quaternion_xform_ra ( xx + 48 ,
xx + 65 , xx + 68 ) ; xx [ 48 ] = - 9.18564808057805e-8 ; xx [ 49 ] =
0.05551189931573034 ; xx [ 50 ] = - 1.482438229960606e-10 ;
pm_math_Quaternion_xform_ra ( xx + 52 , xx + 48 , xx + 65 ) ;
pm_math_Quaternion_xform_ra ( xx + 44 , xx + 65 , xx + 48 ) ; J [ 0 ] = xx [
24 ] + xx [ 35 ] ; J [ 1 ] = xx [ 38 ] + xx [ 10 ] ; J [ 2 ] = xx [ 9 ] * (
xx [ 32 ] + xx [ 18 ] * xx [ 7 ] ) + xx [ 15 ] - xx [ 28 ] ; J [ 5 ] = - ( xx
[ 1 ] + xx [ 4 ] + xx [ 41 ] ) ; J [ 6 ] = - ( xx [ 56 ] + xx [ 29 ] ) ; J [
7 ] = - ( xx [ 62 ] + xx [ 59 ] ) ; J [ 8 ] = - ( xx [ 68 ] + xx [ 48 ] ) ; J
[ 39 ] = xx [ 25 ] + xx [ 36 ] ; J [ 40 ] = xx [ 39 ] + xx [ 11 ] ; J [ 41 ]
= ( xx [ 33 ] - xx [ 28 ] * xx [ 18 ] * xx [ 21 ] ) * xx [ 9 ] + xx [ 16 ] -
xx [ 27 ] ; J [ 44 ] = - ( xx [ 2 ] + xx [ 5 ] + xx [ 42 ] ) ; J [ 45 ] = - (
xx [ 57 ] + xx [ 30 ] ) ; J [ 46 ] = - ( xx [ 63 ] + xx [ 60 ] ) ; J [ 47 ] =
- ( xx [ 69 ] + xx [ 49 ] ) ; J [ 78 ] = xx [ 26 ] + xx [ 37 ] ; J [ 79 ] =
xx [ 40 ] + xx [ 12 ] ; J [ 80 ] = ( xx [ 18 ] * xx [ 14 ] + xx [ 34 ] ) * xx
[ 9 ] + xx [ 17 ] ; J [ 83 ] = - ( xx [ 3 ] + xx [ 6 ] + xx [ 43 ] ) ; J [ 84
] = - ( xx [ 58 ] + xx [ 31 ] ) ; J [ 85 ] = - ( xx [ 64 ] + xx [ 61 ] ) ; J
[ 86 ] = - ( xx [ 70 ] + xx [ 50 ] ) ; return 3 ; } static size_t
computeAssemblyJacobian_1 ( const RuntimeDerivedValuesBundle * rtdv , const
double * state , const int * modeVector , const double * motionData , double
* J ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi
= rtdv -> mInts . mValues ; double xx [ 71 ] ; ( void ) rtdvd ; ( void )
rtdvi ; ( void ) modeVector ; xx [ 0 ] = motionData [ 7 ] ; xx [ 1 ] =
motionData [ 8 ] ; xx [ 2 ] = motionData [ 9 ] ; xx [ 3 ] = motionData [ 10 ]
; xx [ 4 ] = 0.5 ; xx [ 5 ] = xx [ 4 ] * state [ 0 ] ; xx [ 6 ] = sin ( xx [
5 ] ) ; xx [ 7 ] = xx [ 4 ] * state [ 1 ] ; xx [ 8 ] = sin ( xx [ 7 ] ) ; xx
[ 9 ] = xx [ 6 ] * xx [ 8 ] ; xx [ 10 ] = xx [ 4 ] * state [ 2 ] ; xx [ 11 ]
= sin ( xx [ 10 ] ) ; xx [ 12 ] = cos ( xx [ 10 ] ) ; xx [ 10 ] = cos ( xx [
5 ] ) ; xx [ 5 ] = cos ( xx [ 7 ] ) ; xx [ 7 ] = xx [ 10 ] * xx [ 5 ] ; xx [
13 ] = xx [ 9 ] * xx [ 11 ] - xx [ 12 ] * xx [ 7 ] ; xx [ 14 ] = xx [ 5 ] *
xx [ 6 ] ; xx [ 5 ] = xx [ 10 ] * xx [ 8 ] ; xx [ 6 ] = xx [ 12 ] * xx [ 14 ]
+ xx [ 5 ] * xx [ 11 ] ; xx [ 8 ] = xx [ 14 ] * xx [ 11 ] - xx [ 12 ] * xx [
5 ] ; xx [ 5 ] = xx [ 7 ] * xx [ 11 ] + xx [ 12 ] * xx [ 9 ] ; xx [ 14 ] = xx
[ 13 ] ; xx [ 15 ] = - xx [ 6 ] ; xx [ 16 ] = xx [ 8 ] ; xx [ 17 ] = - xx [ 5
] ; pm_math_Quaternion_compose_ra ( xx + 0 , xx + 14 , xx + 18 ) ; xx [ 7 ] =
1.0 ; xx [ 9 ] = 2.0 ; xx [ 10 ] = xx [ 7 ] - ( xx [ 8 ] * xx [ 8 ] + xx [ 5
] * xx [ 5 ] ) * xx [ 9 ] ; xx [ 22 ] = xx [ 9 ] * ( xx [ 5 ] * xx [ 13 ] -
xx [ 6 ] * xx [ 8 ] ) ; xx [ 23 ] = xx [ 8 ] * xx [ 13 ] + xx [ 6 ] * xx [ 5
] ; xx [ 24 ] = xx [ 10 ] ; xx [ 25 ] = xx [ 22 ] ; xx [ 26 ] = xx [ 23 ] *
xx [ 9 ] ; xx [ 27 ] = 0.07930000000000012 ; xx [ 28 ] = 0.02990000000000002
; xx [ 29 ] = 0.1049999999999999 ; xx [ 30 ] = - xx [ 27 ] ; xx [ 31 ] = - xx
[ 28 ] ; xx [ 32 ] = - xx [ 29 ] ; pm_math_Vector3_cross_ra ( xx + 24 , xx +
30 , xx + 33 ) ; pm_math_Quaternion_xform_ra ( xx + 18 , xx + 33 , xx + 24 )
; xx [ 30 ] = 8.499999999999917e-3 ; xx [ 31 ] = 0.09430000000000001 ; xx [
32 ] = - ( xx [ 30 ] * xx [ 22 ] ) ; xx [ 33 ] = xx [ 30 ] * xx [ 10 ] - xx [
23 ] * 0.1886 ; xx [ 34 ] = xx [ 31 ] * xx [ 22 ] ;
pm_math_Quaternion_xform_ra ( xx + 14 , xx + 32 , xx + 35 ) ; xx [ 32 ] = -
xx [ 35 ] ; xx [ 33 ] = - xx [ 36 ] ; xx [ 34 ] = - xx [ 37 ] ;
pm_math_Quaternion_xform_ra ( xx + 0 , xx + 32 , xx + 35 ) ; xx [ 10 ] = xx [
7 ] - xx [ 9 ] * xx [ 11 ] * xx [ 11 ] ; xx [ 7 ] = xx [ 9 ] * xx [ 12 ] * xx
[ 11 ] ; xx [ 32 ] = - ( xx [ 29 ] * xx [ 10 ] ) ; xx [ 33 ] = xx [ 29 ] * xx
[ 7 ] ; xx [ 34 ] = xx [ 27 ] * xx [ 10 ] - xx [ 28 ] * xx [ 7 ] ;
pm_math_Quaternion_xform_ra ( xx + 18 , xx + 32 , xx + 38 ) ; xx [ 32 ] = - (
xx [ 30 ] * xx [ 10 ] ) ; xx [ 33 ] = xx [ 30 ] * xx [ 7 ] ; xx [ 34 ] = xx [
31 ] * xx [ 10 ] ; pm_math_Quaternion_xform_ra ( xx + 14 , xx + 32 , xx + 10
) ; xx [ 14 ] = - xx [ 10 ] ; xx [ 15 ] = - xx [ 11 ] ; xx [ 16 ] = - xx [ 12
] ; pm_math_Quaternion_xform_ra ( xx + 0 , xx + 14 , xx + 10 ) ; xx [ 7 ] =
xx [ 27 ] * xx [ 21 ] ; xx [ 14 ] = xx [ 27 ] * xx [ 19 ] + xx [ 28 ] * xx [
20 ] ; xx [ 15 ] = xx [ 7 ] ; xx [ 16 ] = xx [ 28 ] * xx [ 21 ] ; xx [ 17 ] =
- xx [ 14 ] ; pm_math_Vector3_cross_ra ( xx + 19 , xx + 15 , xx + 32 ) ; xx [
15 ] = xx [ 6 ] * xx [ 31 ] ; xx [ 16 ] = xx [ 5 ] * xx [ 31 ] ; xx [ 41 ] =
- ( xx [ 9 ] * ( xx [ 15 ] * xx [ 8 ] - xx [ 16 ] * xx [ 13 ] ) ) ; xx [ 42 ]
= xx [ 31 ] - ( xx [ 5 ] * xx [ 16 ] + xx [ 6 ] * xx [ 15 ] ) * xx [ 9 ] ; xx
[ 43 ] = - ( ( xx [ 15 ] * xx [ 13 ] + xx [ 16 ] * xx [ 8 ] ) * xx [ 9 ] ) ;
pm_math_Quaternion_xform_ra ( xx + 0 , xx + 41 , xx + 15 ) ; xx [ 0 ] = 0.0 ;
xx [ 41 ] = - 0.9813501000307463 ; xx [ 42 ] = - 9.021345794401411e-3 ; xx [
43 ] = - 0.04725208941316491 ; xx [ 44 ] = 0.1861124298261472 ; xx [ 1 ] = xx
[ 4 ] * state [ 19 ] ; xx [ 2 ] = 0.0960996545167382 ; xx [ 3 ] = sin ( xx [
1 ] ) ; xx [ 4 ] = 1.177948454025794e-4 ; xx [ 5 ] = 0.9953717107322962 ; xx
[ 45 ] = cos ( xx [ 1 ] ) ; xx [ 46 ] = - ( xx [ 2 ] * xx [ 3 ] ) ; xx [ 47 ]
= xx [ 4 ] * xx [ 3 ] ; xx [ 48 ] = xx [ 5 ] * xx [ 3 ] ;
pm_math_Quaternion_compose_ra ( xx + 41 , xx + 45 , xx + 49 ) ; xx [ 41 ] =
motionData [ 56 ] ; xx [ 42 ] = motionData [ 57 ] ; xx [ 43 ] = motionData [
58 ] ; xx [ 44 ] = motionData [ 59 ] ; pm_math_Quaternion_compose_ra ( xx +
49 , xx + 41 , xx + 45 ) ; xx [ 29 ] = - xx [ 2 ] ; xx [ 30 ] = xx [ 4 ] ; xx
[ 31 ] = xx [ 5 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 41 , xx + 29 ,
xx + 1 ) ; xx [ 4 ] = 0.05448810068449638 ; xx [ 5 ] = 9.016809746371062e-8 ;
xx [ 6 ] = - 1.197569081478675e-6 ; pm_math_Vector3_cross_ra ( xx + 1 , xx +
4 , xx + 41 ) ; pm_math_Quaternion_xform_ra ( xx + 45 , xx + 41 , xx + 1 ) ;
xx [ 4 ] = motionData [ 60 ] ; xx [ 5 ] = motionData [ 61 ] ; xx [ 6 ] =
motionData [ 62 ] ; pm_math_Vector3_cross_ra ( xx + 29 , xx + 4 , xx + 41 ) ;
pm_math_Quaternion_xform_ra ( xx + 49 , xx + 41 , xx + 4 ) ; xx [ 29 ] = -
2.298050364265303e-6 ; xx [ 30 ] = 0.02367056868070961 ; xx [ 31 ] = -
3.023104627104057e-6 ; pm_math_Quaternion_xform_ra ( xx + 49 , xx + 29 , xx +
41 ) ; xx [ 44 ] = motionData [ 49 ] ; xx [ 45 ] = motionData [ 50 ] ; xx [
46 ] = motionData [ 51 ] ; xx [ 47 ] = motionData [ 52 ] ; xx [ 48 ] =
0.9988422572316213 ; xx [ 49 ] = - 6.00792342022948e-5 ; xx [ 50 ] = -
0.04810551968680427 ; xx [ 51 ] = 2.312115552059532e-5 ; xx [ 52 ] = state [
21 ] ; xx [ 53 ] = state [ 22 ] ; xx [ 54 ] = state [ 23 ] ; xx [ 55 ] =
state [ 24 ] ; xx [ 56 ] = - 0.9999999999996456 ; xx [ 57 ] =
1.335114243000915e-9 ; xx [ 58 ] = 1.564242624680818e-7 ; xx [ 59 ] = -
8.27384461422298e-7 ; pm_math_Quaternion_composeInverse_ra ( xx + 52 , xx +
56 , xx + 60 ) ; pm_math_Quaternion_compose_ra ( xx + 48 , xx + 60 , xx + 52
) ; pm_math_Quaternion_compose_ra ( xx + 44 , xx + 52 , xx + 48 ) ; xx [ 29 ]
= - 2.009909055578571e-12 ; xx [ 30 ] = 1.214615603282308e-6 ; xx [ 31 ] =
2.881763323693879e-12 ; pm_math_Quaternion_xform_ra ( xx + 48 , xx + 29 , xx
+ 56 ) ; xx [ 29 ] = 2.009909055578572e-12 ; xx [ 30 ] = -
1.21461560328232e-6 ; xx [ 31 ] = - 2.881763259213495e-12 ;
pm_math_Quaternion_xform_ra ( xx + 52 , xx + 29 , xx + 59 ) ;
pm_math_Quaternion_xform_ra ( xx + 44 , xx + 59 , xx + 29 ) ; xx [ 59 ] = -
1.197569081236243e-6 ; xx [ 60 ] = - 1.474914827216787e-10 ; xx [ 61 ] = -
0.05448810068457099 ; pm_math_Quaternion_xform_ra ( xx + 48 , xx + 59 , xx +
62 ) ; xx [ 59 ] = 1.231982419222245e-6 ; xx [ 60 ] = - 1.462051776775044e-10
; xx [ 61 ] = - 0.05551189931542364 ; pm_math_Quaternion_xform_ra ( xx + 52 ,
xx + 59 , xx + 65 ) ; pm_math_Quaternion_xform_ra ( xx + 44 , xx + 65 , xx +
59 ) ; xx [ 65 ] = - 9.016810066118371e-8 ; xx [ 66 ] = 0.05448810068412172 ;
xx [ 67 ] = - 1.455097835249509e-10 ; pm_math_Quaternion_xform_ra ( xx + 48 ,
xx + 65 , xx + 68 ) ; xx [ 48 ] = - 9.18564808057805e-8 ; xx [ 49 ] =
0.05551189931573034 ; xx [ 50 ] = - 1.482438229960606e-10 ;
pm_math_Quaternion_xform_ra ( xx + 52 , xx + 48 , xx + 65 ) ;
pm_math_Quaternion_xform_ra ( xx + 44 , xx + 65 , xx + 48 ) ; J [ 0 ] = xx [
24 ] + xx [ 35 ] ; J [ 1 ] = xx [ 38 ] + xx [ 10 ] ; J [ 2 ] = xx [ 9 ] * (
xx [ 32 ] + xx [ 18 ] * xx [ 7 ] ) + xx [ 15 ] + xx [ 28 ] ; J [ 9 ] = - ( xx
[ 1 ] + xx [ 4 ] + xx [ 41 ] ) ; J [ 10 ] = - ( xx [ 56 ] + xx [ 29 ] ) ; J [
11 ] = - ( xx [ 62 ] + xx [ 59 ] ) ; J [ 12 ] = - ( xx [ 68 ] + xx [ 48 ] ) ;
J [ 39 ] = xx [ 25 ] + xx [ 36 ] ; J [ 40 ] = xx [ 39 ] + xx [ 11 ] ; J [ 41
] = ( xx [ 28 ] * xx [ 18 ] * xx [ 21 ] + xx [ 33 ] ) * xx [ 9 ] + xx [ 16 ]
- xx [ 27 ] ; J [ 48 ] = - ( xx [ 2 ] + xx [ 5 ] + xx [ 42 ] ) ; J [ 49 ] = -
( xx [ 57 ] + xx [ 30 ] ) ; J [ 50 ] = - ( xx [ 63 ] + xx [ 60 ] ) ; J [ 51 ]
= - ( xx [ 69 ] + xx [ 49 ] ) ; J [ 78 ] = xx [ 26 ] + xx [ 37 ] ; J [ 79 ] =
xx [ 40 ] + xx [ 12 ] ; J [ 80 ] = ( xx [ 34 ] - xx [ 18 ] * xx [ 14 ] ) * xx
[ 9 ] + xx [ 17 ] ; J [ 87 ] = - ( xx [ 3 ] + xx [ 6 ] + xx [ 43 ] ) ; J [ 88
] = - ( xx [ 58 ] + xx [ 31 ] ) ; J [ 89 ] = - ( xx [ 64 ] + xx [ 61 ] ) ; J
[ 90 ] = - ( xx [ 70 ] + xx [ 50 ] ) ; return 3 ; } static size_t
computeAssemblyJacobian_2 ( const RuntimeDerivedValuesBundle * rtdv , const
double * state , const int * modeVector , const double * motionData , double
* J ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi
= rtdv -> mInts . mValues ; double xx [ 72 ] ; ( void ) rtdvd ; ( void )
rtdvi ; ( void ) modeVector ; xx [ 0 ] = 0.0 ; xx [ 1 ] = motionData [ 63 ] ;
xx [ 2 ] = motionData [ 64 ] ; xx [ 3 ] = motionData [ 65 ] ; xx [ 4 ] =
motionData [ 66 ] ; xx [ 5 ] = 0.5 ; xx [ 6 ] = xx [ 5 ] * state [ 28 ] ; xx
[ 7 ] = sin ( xx [ 6 ] ) ; xx [ 8 ] = xx [ 5 ] * state [ 29 ] ; xx [ 9 ] =
sin ( xx [ 8 ] ) ; xx [ 10 ] = xx [ 7 ] * xx [ 9 ] ; xx [ 11 ] = xx [ 5 ] *
state [ 30 ] ; xx [ 12 ] = sin ( xx [ 11 ] ) ; xx [ 13 ] = cos ( xx [ 11 ] )
; xx [ 11 ] = cos ( xx [ 6 ] ) ; xx [ 6 ] = cos ( xx [ 8 ] ) ; xx [ 8 ] = xx
[ 11 ] * xx [ 6 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 12 ] - xx [ 13 ] * xx [ 8 ]
; xx [ 15 ] = xx [ 6 ] * xx [ 7 ] ; xx [ 6 ] = xx [ 11 ] * xx [ 9 ] ; xx [ 7
] = xx [ 13 ] * xx [ 15 ] + xx [ 6 ] * xx [ 12 ] ; xx [ 9 ] = xx [ 15 ] * xx
[ 12 ] - xx [ 13 ] * xx [ 6 ] ; xx [ 6 ] = xx [ 8 ] * xx [ 12 ] + xx [ 13 ] *
xx [ 10 ] ; xx [ 15 ] = xx [ 14 ] ; xx [ 16 ] = - xx [ 7 ] ; xx [ 17 ] = xx [
9 ] ; xx [ 18 ] = - xx [ 6 ] ; pm_math_Quaternion_compose_ra ( xx + 1 , xx +
15 , xx + 19 ) ; xx [ 8 ] = 1.0 ; xx [ 10 ] = 2.0 ; xx [ 11 ] = xx [ 8 ] - (
xx [ 9 ] * xx [ 9 ] + xx [ 6 ] * xx [ 6 ] ) * xx [ 10 ] ; xx [ 23 ] = xx [ 10
] * ( xx [ 6 ] * xx [ 14 ] - xx [ 7 ] * xx [ 9 ] ) ; xx [ 24 ] = xx [ 9 ] *
xx [ 14 ] + xx [ 7 ] * xx [ 6 ] ; xx [ 25 ] = xx [ 11 ] ; xx [ 26 ] = xx [ 23
] ; xx [ 27 ] = xx [ 24 ] * xx [ 10 ] ; xx [ 28 ] = 0.07930000000000005 ; xx
[ 29 ] = 0.02989999999999998 ; xx [ 30 ] = 0.105 ; xx [ 31 ] = - xx [ 28 ] ;
xx [ 32 ] = xx [ 29 ] ; xx [ 33 ] = - xx [ 30 ] ; pm_math_Vector3_cross_ra (
xx + 25 , xx + 31 , xx + 34 ) ; pm_math_Quaternion_xform_ra ( xx + 19 , xx +
34 , xx + 25 ) ; xx [ 31 ] = 8.499999999999917e-3 ; xx [ 32 ] =
0.09430000000000001 ; xx [ 33 ] = - ( xx [ 31 ] * xx [ 23 ] ) ; xx [ 34 ] =
xx [ 31 ] * xx [ 11 ] - xx [ 24 ] * 0.1886 ; xx [ 35 ] = xx [ 32 ] * xx [ 23
] ; pm_math_Quaternion_xform_ra ( xx + 15 , xx + 33 , xx + 36 ) ; xx [ 33 ] =
- xx [ 36 ] ; xx [ 34 ] = - xx [ 37 ] ; xx [ 35 ] = - xx [ 38 ] ;
pm_math_Quaternion_xform_ra ( xx + 1 , xx + 33 , xx + 36 ) ; xx [ 11 ] = xx [
8 ] - xx [ 10 ] * xx [ 12 ] * xx [ 12 ] ; xx [ 8 ] = xx [ 10 ] * xx [ 13 ] *
xx [ 12 ] ; xx [ 33 ] = - ( xx [ 30 ] * xx [ 11 ] ) ; xx [ 34 ] = xx [ 30 ] *
xx [ 8 ] ; xx [ 35 ] = xx [ 29 ] * xx [ 8 ] + xx [ 28 ] * xx [ 11 ] ;
pm_math_Quaternion_xform_ra ( xx + 19 , xx + 33 , xx + 39 ) ; xx [ 33 ] = - (
xx [ 31 ] * xx [ 11 ] ) ; xx [ 34 ] = xx [ 31 ] * xx [ 8 ] ; xx [ 35 ] = xx [
32 ] * xx [ 11 ] ; pm_math_Quaternion_xform_ra ( xx + 15 , xx + 33 , xx + 11
) ; xx [ 15 ] = - xx [ 11 ] ; xx [ 16 ] = - xx [ 12 ] ; xx [ 17 ] = - xx [ 13
] ; pm_math_Quaternion_xform_ra ( xx + 1 , xx + 15 , xx + 11 ) ; xx [ 8 ] =
xx [ 28 ] * xx [ 22 ] ; xx [ 15 ] = xx [ 29 ] * xx [ 21 ] - xx [ 28 ] * xx [
20 ] ; xx [ 16 ] = xx [ 8 ] ; xx [ 17 ] = - ( xx [ 29 ] * xx [ 22 ] ) ; xx [
18 ] = xx [ 15 ] ; pm_math_Vector3_cross_ra ( xx + 20 , xx + 16 , xx + 33 ) ;
xx [ 16 ] = xx [ 7 ] * xx [ 32 ] ; xx [ 17 ] = xx [ 6 ] * xx [ 32 ] ; xx [ 42
] = - ( xx [ 10 ] * ( xx [ 16 ] * xx [ 9 ] - xx [ 17 ] * xx [ 14 ] ) ) ; xx [
43 ] = xx [ 32 ] - ( xx [ 6 ] * xx [ 17 ] + xx [ 7 ] * xx [ 16 ] ) * xx [ 10
] ; xx [ 44 ] = - ( ( xx [ 16 ] * xx [ 14 ] + xx [ 17 ] * xx [ 9 ] ) * xx [
10 ] ) ; pm_math_Quaternion_xform_ra ( xx + 1 , xx + 42 , xx + 16 ) ; xx [ 1
] = 0.651818103933012 ; xx [ 2 ] = 0.03648925127026437 ; xx [ 3 ] =
0.031347714040858 ; xx [ 4 ] = - 0.7568480790431602 ; xx [ 6 ] = xx [ 5 ] *
state [ 38 ] ; xx [ 5 ] = 0.0960996545167382 ; xx [ 7 ] = sin ( xx [ 6 ] ) ;
xx [ 9 ] = 1.177948454025794e-4 ; xx [ 14 ] = 0.9953717107322962 ; xx [ 42 ]
= cos ( xx [ 6 ] ) ; xx [ 43 ] = - ( xx [ 5 ] * xx [ 7 ] ) ; xx [ 44 ] = xx [
9 ] * xx [ 7 ] ; xx [ 45 ] = xx [ 14 ] * xx [ 7 ] ;
pm_math_Quaternion_compose_ra ( xx + 1 , xx + 42 , xx + 46 ) ; xx [ 1 ] =
motionData [ 98 ] ; xx [ 2 ] = motionData [ 99 ] ; xx [ 3 ] = motionData [
100 ] ; xx [ 4 ] = motionData [ 101 ] ; pm_math_Quaternion_compose_ra ( xx +
46 , xx + 1 , xx + 42 ) ; xx [ 30 ] = - xx [ 5 ] ; xx [ 31 ] = xx [ 9 ] ; xx
[ 32 ] = xx [ 14 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 1 , xx + 30 ,
xx + 5 ) ; xx [ 1 ] = 0.05448810068449638 ; xx [ 2 ] = 9.016809746371062e-8 ;
xx [ 3 ] = - 1.197569081478675e-6 ; pm_math_Vector3_cross_ra ( xx + 5 , xx +
1 , xx + 50 ) ; pm_math_Quaternion_xform_ra ( xx + 42 , xx + 50 , xx + 1 ) ;
xx [ 4 ] = motionData [ 102 ] ; xx [ 5 ] = motionData [ 103 ] ; xx [ 6 ] =
motionData [ 104 ] ; pm_math_Vector3_cross_ra ( xx + 30 , xx + 4 , xx + 42 )
; pm_math_Quaternion_xform_ra ( xx + 46 , xx + 42 , xx + 4 ) ; xx [ 30 ] = -
2.298050364265303e-6 ; xx [ 31 ] = 0.02367056868070961 ; xx [ 32 ] = -
3.023104627104057e-6 ; pm_math_Quaternion_xform_ra ( xx + 46 , xx + 30 , xx +
42 ) ; xx [ 45 ] = motionData [ 91 ] ; xx [ 46 ] = motionData [ 92 ] ; xx [
47 ] = motionData [ 93 ] ; xx [ 48 ] = motionData [ 94 ] ; xx [ 49 ] =
0.9988422572316213 ; xx [ 50 ] = - 6.00792342022948e-5 ; xx [ 51 ] = -
0.04810551968680427 ; xx [ 52 ] = 2.312115552059532e-5 ; xx [ 53 ] = state [
40 ] ; xx [ 54 ] = state [ 41 ] ; xx [ 55 ] = state [ 42 ] ; xx [ 56 ] =
state [ 43 ] ; xx [ 57 ] = - 0.9999999999996456 ; xx [ 58 ] =
1.335114243000915e-9 ; xx [ 59 ] = 1.564242624680818e-7 ; xx [ 60 ] = -
8.27384461422298e-7 ; pm_math_Quaternion_composeInverse_ra ( xx + 53 , xx +
57 , xx + 61 ) ; pm_math_Quaternion_compose_ra ( xx + 49 , xx + 61 , xx + 53
) ; pm_math_Quaternion_compose_ra ( xx + 45 , xx + 53 , xx + 49 ) ; xx [ 30 ]
= - 2.009909055578571e-12 ; xx [ 31 ] = 1.214615603282308e-6 ; xx [ 32 ] =
2.881763323693879e-12 ; pm_math_Quaternion_xform_ra ( xx + 49 , xx + 30 , xx
+ 57 ) ; xx [ 30 ] = 2.009909055578572e-12 ; xx [ 31 ] = -
1.21461560328232e-6 ; xx [ 32 ] = - 2.881763259213495e-12 ;
pm_math_Quaternion_xform_ra ( xx + 53 , xx + 30 , xx + 60 ) ;
pm_math_Quaternion_xform_ra ( xx + 45 , xx + 60 , xx + 30 ) ; xx [ 60 ] = -
1.197569081236243e-6 ; xx [ 61 ] = - 1.474914827216787e-10 ; xx [ 62 ] = -
0.05448810068457099 ; pm_math_Quaternion_xform_ra ( xx + 49 , xx + 60 , xx +
63 ) ; xx [ 60 ] = 1.231982419222245e-6 ; xx [ 61 ] = - 1.462051776775044e-10
; xx [ 62 ] = - 0.05551189931542364 ; pm_math_Quaternion_xform_ra ( xx + 53 ,
xx + 60 , xx + 66 ) ; pm_math_Quaternion_xform_ra ( xx + 45 , xx + 66 , xx +
60 ) ; xx [ 66 ] = - 9.016810066118371e-8 ; xx [ 67 ] = 0.05448810068412172 ;
xx [ 68 ] = - 1.455097835249509e-10 ; pm_math_Quaternion_xform_ra ( xx + 49 ,
xx + 66 , xx + 69 ) ; xx [ 49 ] = - 9.18564808057805e-8 ; xx [ 50 ] =
0.05551189931573034 ; xx [ 51 ] = - 1.482438229960606e-10 ;
pm_math_Quaternion_xform_ra ( xx + 53 , xx + 49 , xx + 66 ) ;
pm_math_Quaternion_xform_ra ( xx + 45 , xx + 66 , xx + 49 ) ; J [ 13 ] = xx [
25 ] + xx [ 36 ] ; J [ 14 ] = xx [ 39 ] + xx [ 11 ] ; J [ 15 ] = xx [ 10 ] *
( xx [ 33 ] + xx [ 19 ] * xx [ 8 ] ) + xx [ 16 ] - xx [ 29 ] ; J [ 18 ] = - (
xx [ 1 ] + xx [ 4 ] + xx [ 42 ] ) ; J [ 19 ] = - ( xx [ 57 ] + xx [ 30 ] ) ;
J [ 20 ] = - ( xx [ 63 ] + xx [ 60 ] ) ; J [ 21 ] = - ( xx [ 69 ] + xx [ 49 ]
) ; J [ 52 ] = xx [ 26 ] + xx [ 37 ] ; J [ 53 ] = xx [ 40 ] + xx [ 12 ] ; J [
54 ] = ( xx [ 34 ] - xx [ 29 ] * xx [ 19 ] * xx [ 22 ] ) * xx [ 10 ] + xx [
17 ] - xx [ 28 ] ; J [ 57 ] = - ( xx [ 2 ] + xx [ 5 ] + xx [ 43 ] ) ; J [ 58
] = - ( xx [ 58 ] + xx [ 31 ] ) ; J [ 59 ] = - ( xx [ 64 ] + xx [ 61 ] ) ; J
[ 60 ] = - ( xx [ 70 ] + xx [ 50 ] ) ; J [ 91 ] = xx [ 27 ] + xx [ 38 ] ; J [
92 ] = xx [ 41 ] + xx [ 13 ] ; J [ 93 ] = ( xx [ 19 ] * xx [ 15 ] + xx [ 35 ]
) * xx [ 10 ] + xx [ 18 ] ; J [ 96 ] = - ( xx [ 3 ] + xx [ 6 ] + xx [ 44 ] )
; J [ 97 ] = - ( xx [ 59 ] + xx [ 32 ] ) ; J [ 98 ] = - ( xx [ 65 ] + xx [ 62
] ) ; J [ 99 ] = - ( xx [ 71 ] + xx [ 51 ] ) ; return 3 ; } static size_t
computeAssemblyJacobian_3 ( const RuntimeDerivedValuesBundle * rtdv , const
double * state , const int * modeVector , const double * motionData , double
* J ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi
= rtdv -> mInts . mValues ; double xx [ 72 ] ; ( void ) rtdvd ; ( void )
rtdvi ; ( void ) modeVector ; xx [ 0 ] = 0.0 ; xx [ 1 ] = motionData [ 63 ] ;
xx [ 2 ] = motionData [ 64 ] ; xx [ 3 ] = motionData [ 65 ] ; xx [ 4 ] =
motionData [ 66 ] ; xx [ 5 ] = 0.5 ; xx [ 6 ] = xx [ 5 ] * state [ 28 ] ; xx
[ 7 ] = sin ( xx [ 6 ] ) ; xx [ 8 ] = xx [ 5 ] * state [ 29 ] ; xx [ 9 ] =
sin ( xx [ 8 ] ) ; xx [ 10 ] = xx [ 7 ] * xx [ 9 ] ; xx [ 11 ] = xx [ 5 ] *
state [ 30 ] ; xx [ 12 ] = sin ( xx [ 11 ] ) ; xx [ 13 ] = cos ( xx [ 11 ] )
; xx [ 11 ] = cos ( xx [ 6 ] ) ; xx [ 6 ] = cos ( xx [ 8 ] ) ; xx [ 8 ] = xx
[ 11 ] * xx [ 6 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 12 ] - xx [ 13 ] * xx [ 8 ]
; xx [ 15 ] = xx [ 6 ] * xx [ 7 ] ; xx [ 6 ] = xx [ 11 ] * xx [ 9 ] ; xx [ 7
] = xx [ 13 ] * xx [ 15 ] + xx [ 6 ] * xx [ 12 ] ; xx [ 9 ] = xx [ 15 ] * xx
[ 12 ] - xx [ 13 ] * xx [ 6 ] ; xx [ 6 ] = xx [ 8 ] * xx [ 12 ] + xx [ 13 ] *
xx [ 10 ] ; xx [ 15 ] = xx [ 14 ] ; xx [ 16 ] = - xx [ 7 ] ; xx [ 17 ] = xx [
9 ] ; xx [ 18 ] = - xx [ 6 ] ; pm_math_Quaternion_compose_ra ( xx + 1 , xx +
15 , xx + 19 ) ; xx [ 8 ] = 1.0 ; xx [ 10 ] = 2.0 ; xx [ 11 ] = xx [ 8 ] - (
xx [ 9 ] * xx [ 9 ] + xx [ 6 ] * xx [ 6 ] ) * xx [ 10 ] ; xx [ 23 ] = xx [ 10
] * ( xx [ 6 ] * xx [ 14 ] - xx [ 7 ] * xx [ 9 ] ) ; xx [ 24 ] = xx [ 9 ] *
xx [ 14 ] + xx [ 7 ] * xx [ 6 ] ; xx [ 25 ] = xx [ 11 ] ; xx [ 26 ] = xx [ 23
] ; xx [ 27 ] = xx [ 24 ] * xx [ 10 ] ; xx [ 28 ] = 0.07930000000000012 ; xx
[ 29 ] = 0.02990000000000002 ; xx [ 30 ] = 0.1049999999999999 ; xx [ 31 ] = -
xx [ 28 ] ; xx [ 32 ] = - xx [ 29 ] ; xx [ 33 ] = - xx [ 30 ] ;
pm_math_Vector3_cross_ra ( xx + 25 , xx + 31 , xx + 34 ) ;
pm_math_Quaternion_xform_ra ( xx + 19 , xx + 34 , xx + 25 ) ; xx [ 31 ] =
8.499999999999917e-3 ; xx [ 32 ] = 0.09430000000000001 ; xx [ 33 ] = - ( xx [
31 ] * xx [ 23 ] ) ; xx [ 34 ] = xx [ 31 ] * xx [ 11 ] - xx [ 24 ] * 0.1886 ;
xx [ 35 ] = xx [ 32 ] * xx [ 23 ] ; pm_math_Quaternion_xform_ra ( xx + 15 ,
xx + 33 , xx + 36 ) ; xx [ 33 ] = - xx [ 36 ] ; xx [ 34 ] = - xx [ 37 ] ; xx
[ 35 ] = - xx [ 38 ] ; pm_math_Quaternion_xform_ra ( xx + 1 , xx + 33 , xx +
36 ) ; xx [ 11 ] = xx [ 8 ] - xx [ 10 ] * xx [ 12 ] * xx [ 12 ] ; xx [ 8 ] =
xx [ 10 ] * xx [ 13 ] * xx [ 12 ] ; xx [ 33 ] = - ( xx [ 30 ] * xx [ 11 ] ) ;
xx [ 34 ] = xx [ 30 ] * xx [ 8 ] ; xx [ 35 ] = xx [ 28 ] * xx [ 11 ] - xx [
29 ] * xx [ 8 ] ; pm_math_Quaternion_xform_ra ( xx + 19 , xx + 33 , xx + 39 )
; xx [ 33 ] = - ( xx [ 31 ] * xx [ 11 ] ) ; xx [ 34 ] = xx [ 31 ] * xx [ 8 ]
; xx [ 35 ] = xx [ 32 ] * xx [ 11 ] ; pm_math_Quaternion_xform_ra ( xx + 15 ,
xx + 33 , xx + 11 ) ; xx [ 15 ] = - xx [ 11 ] ; xx [ 16 ] = - xx [ 12 ] ; xx
[ 17 ] = - xx [ 13 ] ; pm_math_Quaternion_xform_ra ( xx + 1 , xx + 15 , xx +
11 ) ; xx [ 8 ] = xx [ 28 ] * xx [ 22 ] ; xx [ 15 ] = xx [ 28 ] * xx [ 20 ] +
xx [ 29 ] * xx [ 21 ] ; xx [ 16 ] = xx [ 8 ] ; xx [ 17 ] = xx [ 29 ] * xx [
22 ] ; xx [ 18 ] = - xx [ 15 ] ; pm_math_Vector3_cross_ra ( xx + 20 , xx + 16
, xx + 33 ) ; xx [ 16 ] = xx [ 7 ] * xx [ 32 ] ; xx [ 17 ] = xx [ 6 ] * xx [
32 ] ; xx [ 42 ] = - ( xx [ 10 ] * ( xx [ 16 ] * xx [ 9 ] - xx [ 17 ] * xx [
14 ] ) ) ; xx [ 43 ] = xx [ 32 ] - ( xx [ 6 ] * xx [ 17 ] + xx [ 7 ] * xx [
16 ] ) * xx [ 10 ] ; xx [ 44 ] = - ( ( xx [ 16 ] * xx [ 14 ] + xx [ 17 ] * xx
[ 9 ] ) * xx [ 10 ] ) ; pm_math_Quaternion_xform_ra ( xx + 1 , xx + 42 , xx +
16 ) ; xx [ 1 ] = - 0.3294969578258811 ; xx [ 2 ] = - 0.04543218271089525 ;
xx [ 3 ] = - 0.01581333007230693 ; xx [ 4 ] = 0.9429303315460998 ; xx [ 6 ] =
xx [ 5 ] * state [ 47 ] ; xx [ 5 ] = 0.0960996545167382 ; xx [ 7 ] = sin ( xx
[ 6 ] ) ; xx [ 9 ] = 1.177948454025794e-4 ; xx [ 14 ] = 0.9953717107322962 ;
xx [ 42 ] = cos ( xx [ 6 ] ) ; xx [ 43 ] = - ( xx [ 5 ] * xx [ 7 ] ) ; xx [
44 ] = xx [ 9 ] * xx [ 7 ] ; xx [ 45 ] = xx [ 14 ] * xx [ 7 ] ;
pm_math_Quaternion_compose_ra ( xx + 1 , xx + 42 , xx + 46 ) ; xx [ 1 ] =
motionData [ 112 ] ; xx [ 2 ] = motionData [ 113 ] ; xx [ 3 ] = motionData [
114 ] ; xx [ 4 ] = motionData [ 115 ] ; pm_math_Quaternion_compose_ra ( xx +
46 , xx + 1 , xx + 42 ) ; xx [ 30 ] = - xx [ 5 ] ; xx [ 31 ] = xx [ 9 ] ; xx
[ 32 ] = xx [ 14 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 1 , xx + 30 ,
xx + 5 ) ; xx [ 1 ] = 0.05448810068449638 ; xx [ 2 ] = 9.016809746371062e-8 ;
xx [ 3 ] = - 1.197569081478675e-6 ; pm_math_Vector3_cross_ra ( xx + 5 , xx +
1 , xx + 50 ) ; pm_math_Quaternion_xform_ra ( xx + 42 , xx + 50 , xx + 1 ) ;
xx [ 4 ] = motionData [ 116 ] ; xx [ 5 ] = motionData [ 117 ] ; xx [ 6 ] =
motionData [ 118 ] ; pm_math_Vector3_cross_ra ( xx + 30 , xx + 4 , xx + 42 )
; pm_math_Quaternion_xform_ra ( xx + 46 , xx + 42 , xx + 4 ) ; xx [ 30 ] = -
2.298050364265303e-6 ; xx [ 31 ] = 0.02367056868070961 ; xx [ 32 ] = -
3.023104627104057e-6 ; pm_math_Quaternion_xform_ra ( xx + 46 , xx + 30 , xx +
42 ) ; xx [ 45 ] = motionData [ 105 ] ; xx [ 46 ] = motionData [ 106 ] ; xx [
47 ] = motionData [ 107 ] ; xx [ 48 ] = motionData [ 108 ] ; xx [ 49 ] =
0.9988422572316213 ; xx [ 50 ] = - 6.00792342022948e-5 ; xx [ 51 ] = -
0.04810551968680427 ; xx [ 52 ] = 2.312115552059532e-5 ; xx [ 53 ] = state [
49 ] ; xx [ 54 ] = state [ 50 ] ; xx [ 55 ] = state [ 51 ] ; xx [ 56 ] =
state [ 52 ] ; xx [ 57 ] = - 0.9999999999996456 ; xx [ 58 ] =
1.335114243000915e-9 ; xx [ 59 ] = 1.564242624680818e-7 ; xx [ 60 ] = -
8.27384461422298e-7 ; pm_math_Quaternion_composeInverse_ra ( xx + 53 , xx +
57 , xx + 61 ) ; pm_math_Quaternion_compose_ra ( xx + 49 , xx + 61 , xx + 53
) ; pm_math_Quaternion_compose_ra ( xx + 45 , xx + 53 , xx + 49 ) ; xx [ 30 ]
= - 2.009909055578571e-12 ; xx [ 31 ] = 1.214615603282308e-6 ; xx [ 32 ] =
2.881763323693879e-12 ; pm_math_Quaternion_xform_ra ( xx + 49 , xx + 30 , xx
+ 57 ) ; xx [ 30 ] = 2.009909055578572e-12 ; xx [ 31 ] = -
1.21461560328232e-6 ; xx [ 32 ] = - 2.881763259213495e-12 ;
pm_math_Quaternion_xform_ra ( xx + 53 , xx + 30 , xx + 60 ) ;
pm_math_Quaternion_xform_ra ( xx + 45 , xx + 60 , xx + 30 ) ; xx [ 60 ] = -
1.197569081236243e-6 ; xx [ 61 ] = - 1.474914827216787e-10 ; xx [ 62 ] = -
0.05448810068457099 ; pm_math_Quaternion_xform_ra ( xx + 49 , xx + 60 , xx +
63 ) ; xx [ 60 ] = 1.231982419222245e-6 ; xx [ 61 ] = - 1.462051776775044e-10
; xx [ 62 ] = - 0.05551189931542364 ; pm_math_Quaternion_xform_ra ( xx + 53 ,
xx + 60 , xx + 66 ) ; pm_math_Quaternion_xform_ra ( xx + 45 , xx + 66 , xx +
60 ) ; xx [ 66 ] = - 9.016810066118371e-8 ; xx [ 67 ] = 0.05448810068412172 ;
xx [ 68 ] = - 1.455097835249509e-10 ; pm_math_Quaternion_xform_ra ( xx + 49 ,
xx + 66 , xx + 69 ) ; xx [ 49 ] = - 9.18564808057805e-8 ; xx [ 50 ] =
0.05551189931573034 ; xx [ 51 ] = - 1.482438229960606e-10 ;
pm_math_Quaternion_xform_ra ( xx + 53 , xx + 49 , xx + 66 ) ;
pm_math_Quaternion_xform_ra ( xx + 45 , xx + 66 , xx + 49 ) ; J [ 13 ] = xx [
25 ] + xx [ 36 ] ; J [ 14 ] = xx [ 39 ] + xx [ 11 ] ; J [ 15 ] = xx [ 10 ] *
( xx [ 33 ] + xx [ 19 ] * xx [ 8 ] ) + xx [ 16 ] + xx [ 29 ] ; J [ 22 ] = - (
xx [ 1 ] + xx [ 4 ] + xx [ 42 ] ) ; J [ 23 ] = - ( xx [ 57 ] + xx [ 30 ] ) ;
J [ 24 ] = - ( xx [ 63 ] + xx [ 60 ] ) ; J [ 25 ] = - ( xx [ 69 ] + xx [ 49 ]
) ; J [ 52 ] = xx [ 26 ] + xx [ 37 ] ; J [ 53 ] = xx [ 40 ] + xx [ 12 ] ; J [
54 ] = ( xx [ 29 ] * xx [ 19 ] * xx [ 22 ] + xx [ 34 ] ) * xx [ 10 ] + xx [
17 ] - xx [ 28 ] ; J [ 61 ] = - ( xx [ 2 ] + xx [ 5 ] + xx [ 43 ] ) ; J [ 62
] = - ( xx [ 58 ] + xx [ 31 ] ) ; J [ 63 ] = - ( xx [ 64 ] + xx [ 61 ] ) ; J
[ 64 ] = - ( xx [ 70 ] + xx [ 50 ] ) ; J [ 91 ] = xx [ 27 ] + xx [ 38 ] ; J [
92 ] = xx [ 41 ] + xx [ 13 ] ; J [ 93 ] = ( xx [ 35 ] - xx [ 19 ] * xx [ 15 ]
) * xx [ 10 ] + xx [ 18 ] ; J [ 100 ] = - ( xx [ 3 ] + xx [ 6 ] + xx [ 44 ] )
; J [ 101 ] = - ( xx [ 59 ] + xx [ 32 ] ) ; J [ 102 ] = - ( xx [ 65 ] + xx [
62 ] ) ; J [ 103 ] = - ( xx [ 71 ] + xx [ 51 ] ) ; return 3 ; } static size_t
computeAssemblyJacobian_4 ( const RuntimeDerivedValuesBundle * rtdv , const
double * state , const int * modeVector , const double * motionData , double
* J ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi
= rtdv -> mInts . mValues ; double xx [ 72 ] ; ( void ) rtdvd ; ( void )
rtdvi ; ( void ) modeVector ; xx [ 0 ] = 0.0 ; xx [ 1 ] = motionData [ 119 ]
; xx [ 2 ] = motionData [ 120 ] ; xx [ 3 ] = motionData [ 121 ] ; xx [ 4 ] =
motionData [ 122 ] ; xx [ 5 ] = 0.5 ; xx [ 6 ] = xx [ 5 ] * state [ 56 ] ; xx
[ 7 ] = sin ( xx [ 6 ] ) ; xx [ 8 ] = xx [ 5 ] * state [ 57 ] ; xx [ 9 ] =
sin ( xx [ 8 ] ) ; xx [ 10 ] = xx [ 7 ] * xx [ 9 ] ; xx [ 11 ] = xx [ 5 ] *
state [ 58 ] ; xx [ 12 ] = sin ( xx [ 11 ] ) ; xx [ 13 ] = cos ( xx [ 11 ] )
; xx [ 11 ] = cos ( xx [ 6 ] ) ; xx [ 6 ] = cos ( xx [ 8 ] ) ; xx [ 8 ] = xx
[ 11 ] * xx [ 6 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 12 ] - xx [ 13 ] * xx [ 8 ]
; xx [ 15 ] = xx [ 6 ] * xx [ 7 ] ; xx [ 6 ] = xx [ 11 ] * xx [ 9 ] ; xx [ 7
] = xx [ 13 ] * xx [ 15 ] + xx [ 6 ] * xx [ 12 ] ; xx [ 9 ] = xx [ 15 ] * xx
[ 12 ] - xx [ 13 ] * xx [ 6 ] ; xx [ 6 ] = xx [ 8 ] * xx [ 12 ] + xx [ 13 ] *
xx [ 10 ] ; xx [ 15 ] = xx [ 14 ] ; xx [ 16 ] = - xx [ 7 ] ; xx [ 17 ] = xx [
9 ] ; xx [ 18 ] = - xx [ 6 ] ; pm_math_Quaternion_compose_ra ( xx + 1 , xx +
15 , xx + 19 ) ; xx [ 8 ] = 1.0 ; xx [ 10 ] = 2.0 ; xx [ 11 ] = xx [ 8 ] - (
xx [ 9 ] * xx [ 9 ] + xx [ 6 ] * xx [ 6 ] ) * xx [ 10 ] ; xx [ 23 ] = xx [ 10
] * ( xx [ 6 ] * xx [ 14 ] - xx [ 7 ] * xx [ 9 ] ) ; xx [ 24 ] = xx [ 9 ] *
xx [ 14 ] + xx [ 7 ] * xx [ 6 ] ; xx [ 25 ] = xx [ 11 ] ; xx [ 26 ] = xx [ 23
] ; xx [ 27 ] = xx [ 24 ] * xx [ 10 ] ; xx [ 28 ] = 0.07930000000000005 ; xx
[ 29 ] = 0.02989999999999998 ; xx [ 30 ] = 0.105 ; xx [ 31 ] = - xx [ 28 ] ;
xx [ 32 ] = xx [ 29 ] ; xx [ 33 ] = - xx [ 30 ] ; pm_math_Vector3_cross_ra (
xx + 25 , xx + 31 , xx + 34 ) ; pm_math_Quaternion_xform_ra ( xx + 19 , xx +
34 , xx + 25 ) ; xx [ 31 ] = 8.499999999999917e-3 ; xx [ 32 ] =
0.09430000000000001 ; xx [ 33 ] = - ( xx [ 31 ] * xx [ 23 ] ) ; xx [ 34 ] =
xx [ 31 ] * xx [ 11 ] - xx [ 24 ] * 0.1886 ; xx [ 35 ] = xx [ 32 ] * xx [ 23
] ; pm_math_Quaternion_xform_ra ( xx + 15 , xx + 33 , xx + 36 ) ; xx [ 33 ] =
- xx [ 36 ] ; xx [ 34 ] = - xx [ 37 ] ; xx [ 35 ] = - xx [ 38 ] ;
pm_math_Quaternion_xform_ra ( xx + 1 , xx + 33 , xx + 36 ) ; xx [ 11 ] = xx [
8 ] - xx [ 10 ] * xx [ 12 ] * xx [ 12 ] ; xx [ 8 ] = xx [ 10 ] * xx [ 13 ] *
xx [ 12 ] ; xx [ 33 ] = - ( xx [ 30 ] * xx [ 11 ] ) ; xx [ 34 ] = xx [ 30 ] *
xx [ 8 ] ; xx [ 35 ] = xx [ 29 ] * xx [ 8 ] + xx [ 28 ] * xx [ 11 ] ;
pm_math_Quaternion_xform_ra ( xx + 19 , xx + 33 , xx + 39 ) ; xx [ 33 ] = - (
xx [ 31 ] * xx [ 11 ] ) ; xx [ 34 ] = xx [ 31 ] * xx [ 8 ] ; xx [ 35 ] = xx [
32 ] * xx [ 11 ] ; pm_math_Quaternion_xform_ra ( xx + 15 , xx + 33 , xx + 11
) ; xx [ 15 ] = - xx [ 11 ] ; xx [ 16 ] = - xx [ 12 ] ; xx [ 17 ] = - xx [ 13
] ; pm_math_Quaternion_xform_ra ( xx + 1 , xx + 15 , xx + 11 ) ; xx [ 8 ] =
xx [ 28 ] * xx [ 22 ] ; xx [ 15 ] = xx [ 29 ] * xx [ 21 ] - xx [ 28 ] * xx [
20 ] ; xx [ 16 ] = xx [ 8 ] ; xx [ 17 ] = - ( xx [ 29 ] * xx [ 22 ] ) ; xx [
18 ] = xx [ 15 ] ; pm_math_Vector3_cross_ra ( xx + 20 , xx + 16 , xx + 33 ) ;
xx [ 16 ] = xx [ 7 ] * xx [ 32 ] ; xx [ 17 ] = xx [ 6 ] * xx [ 32 ] ; xx [ 42
] = - ( xx [ 10 ] * ( xx [ 16 ] * xx [ 9 ] - xx [ 17 ] * xx [ 14 ] ) ) ; xx [
43 ] = xx [ 32 ] - ( xx [ 6 ] * xx [ 17 ] + xx [ 7 ] * xx [ 16 ] ) * xx [ 10
] ; xx [ 44 ] = - ( ( xx [ 16 ] * xx [ 14 ] + xx [ 17 ] * xx [ 9 ] ) * xx [
10 ] ) ; pm_math_Quaternion_xform_ra ( xx + 1 , xx + 42 , xx + 16 ) ; xx [ 1
] = - 0.3295406112903234 ; xx [ 2 ] = 0.04539254234508536 ; xx [ 3 ] = -
0.01592676154469353 ; xx [ 4 ] = - 0.942915076174174 ; xx [ 6 ] = xx [ 5 ] *
state [ 66 ] ; xx [ 5 ] = 0.0960996545167382 ; xx [ 7 ] = sin ( xx [ 6 ] ) ;
xx [ 9 ] = 1.177948454025794e-4 ; xx [ 14 ] = 0.9953717107322962 ; xx [ 42 ]
= cos ( xx [ 6 ] ) ; xx [ 43 ] = - ( xx [ 5 ] * xx [ 7 ] ) ; xx [ 44 ] = xx [
9 ] * xx [ 7 ] ; xx [ 45 ] = xx [ 14 ] * xx [ 7 ] ;
pm_math_Quaternion_compose_ra ( xx + 1 , xx + 42 , xx + 46 ) ; xx [ 1 ] =
motionData [ 154 ] ; xx [ 2 ] = motionData [ 155 ] ; xx [ 3 ] = motionData [
156 ] ; xx [ 4 ] = motionData [ 157 ] ; pm_math_Quaternion_compose_ra ( xx +
46 , xx + 1 , xx + 42 ) ; xx [ 30 ] = - xx [ 5 ] ; xx [ 31 ] = xx [ 9 ] ; xx
[ 32 ] = xx [ 14 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 1 , xx + 30 ,
xx + 5 ) ; xx [ 1 ] = 0.05448810068449638 ; xx [ 2 ] = 9.016809746371062e-8 ;
xx [ 3 ] = - 1.197569081478675e-6 ; pm_math_Vector3_cross_ra ( xx + 5 , xx +
1 , xx + 50 ) ; pm_math_Quaternion_xform_ra ( xx + 42 , xx + 50 , xx + 1 ) ;
xx [ 4 ] = motionData [ 158 ] ; xx [ 5 ] = motionData [ 159 ] ; xx [ 6 ] =
motionData [ 160 ] ; pm_math_Vector3_cross_ra ( xx + 30 , xx + 4 , xx + 42 )
; pm_math_Quaternion_xform_ra ( xx + 46 , xx + 42 , xx + 4 ) ; xx [ 30 ] = -
2.298050364265303e-6 ; xx [ 31 ] = 0.02367056868070961 ; xx [ 32 ] = -
3.023104627104057e-6 ; pm_math_Quaternion_xform_ra ( xx + 46 , xx + 30 , xx +
42 ) ; xx [ 45 ] = motionData [ 147 ] ; xx [ 46 ] = motionData [ 148 ] ; xx [
47 ] = motionData [ 149 ] ; xx [ 48 ] = motionData [ 150 ] ; xx [ 49 ] =
0.9988422572316213 ; xx [ 50 ] = - 6.00792342022948e-5 ; xx [ 51 ] = -
0.04810551968680427 ; xx [ 52 ] = 2.312115552059532e-5 ; xx [ 53 ] = state [
68 ] ; xx [ 54 ] = state [ 69 ] ; xx [ 55 ] = state [ 70 ] ; xx [ 56 ] =
state [ 71 ] ; xx [ 57 ] = - 0.9999999999996456 ; xx [ 58 ] =
1.335114243000915e-9 ; xx [ 59 ] = 1.564242624680818e-7 ; xx [ 60 ] = -
8.27384461422298e-7 ; pm_math_Quaternion_composeInverse_ra ( xx + 53 , xx +
57 , xx + 61 ) ; pm_math_Quaternion_compose_ra ( xx + 49 , xx + 61 , xx + 53
) ; pm_math_Quaternion_compose_ra ( xx + 45 , xx + 53 , xx + 49 ) ; xx [ 30 ]
= - 2.009909055578571e-12 ; xx [ 31 ] = 1.214615603282308e-6 ; xx [ 32 ] =
2.881763323693879e-12 ; pm_math_Quaternion_xform_ra ( xx + 49 , xx + 30 , xx
+ 57 ) ; xx [ 30 ] = 2.009909055578572e-12 ; xx [ 31 ] = -
1.21461560328232e-6 ; xx [ 32 ] = - 2.881763259213495e-12 ;
pm_math_Quaternion_xform_ra ( xx + 53 , xx + 30 , xx + 60 ) ;
pm_math_Quaternion_xform_ra ( xx + 45 , xx + 60 , xx + 30 ) ; xx [ 60 ] = -
1.197569081236243e-6 ; xx [ 61 ] = - 1.474914827216787e-10 ; xx [ 62 ] = -
0.05448810068457099 ; pm_math_Quaternion_xform_ra ( xx + 49 , xx + 60 , xx +
63 ) ; xx [ 60 ] = 1.231982419222245e-6 ; xx [ 61 ] = - 1.462051776775044e-10
; xx [ 62 ] = - 0.05551189931542364 ; pm_math_Quaternion_xform_ra ( xx + 53 ,
xx + 60 , xx + 66 ) ; pm_math_Quaternion_xform_ra ( xx + 45 , xx + 66 , xx +
60 ) ; xx [ 66 ] = - 9.016810066118371e-8 ; xx [ 67 ] = 0.05448810068412172 ;
xx [ 68 ] = - 1.455097835249509e-10 ; pm_math_Quaternion_xform_ra ( xx + 49 ,
xx + 66 , xx + 69 ) ; xx [ 49 ] = - 9.18564808057805e-8 ; xx [ 50 ] =
0.05551189931573034 ; xx [ 51 ] = - 1.482438229960606e-10 ;
pm_math_Quaternion_xform_ra ( xx + 53 , xx + 49 , xx + 66 ) ;
pm_math_Quaternion_xform_ra ( xx + 45 , xx + 66 , xx + 49 ) ; J [ 26 ] = xx [
25 ] + xx [ 36 ] ; J [ 27 ] = xx [ 39 ] + xx [ 11 ] ; J [ 28 ] = xx [ 10 ] *
( xx [ 33 ] + xx [ 19 ] * xx [ 8 ] ) + xx [ 16 ] - xx [ 29 ] ; J [ 31 ] = - (
xx [ 1 ] + xx [ 4 ] + xx [ 42 ] ) ; J [ 32 ] = - ( xx [ 57 ] + xx [ 30 ] ) ;
J [ 33 ] = - ( xx [ 63 ] + xx [ 60 ] ) ; J [ 34 ] = - ( xx [ 69 ] + xx [ 49 ]
) ; J [ 65 ] = xx [ 26 ] + xx [ 37 ] ; J [ 66 ] = xx [ 40 ] + xx [ 12 ] ; J [
67 ] = ( xx [ 34 ] - xx [ 29 ] * xx [ 19 ] * xx [ 22 ] ) * xx [ 10 ] + xx [
17 ] - xx [ 28 ] ; J [ 70 ] = - ( xx [ 2 ] + xx [ 5 ] + xx [ 43 ] ) ; J [ 71
] = - ( xx [ 58 ] + xx [ 31 ] ) ; J [ 72 ] = - ( xx [ 64 ] + xx [ 61 ] ) ; J
[ 73 ] = - ( xx [ 70 ] + xx [ 50 ] ) ; J [ 104 ] = xx [ 27 ] + xx [ 38 ] ; J
[ 105 ] = xx [ 41 ] + xx [ 13 ] ; J [ 106 ] = ( xx [ 19 ] * xx [ 15 ] + xx [
35 ] ) * xx [ 10 ] + xx [ 18 ] ; J [ 109 ] = - ( xx [ 3 ] + xx [ 6 ] + xx [
44 ] ) ; J [ 110 ] = - ( xx [ 59 ] + xx [ 32 ] ) ; J [ 111 ] = - ( xx [ 65 ]
+ xx [ 62 ] ) ; J [ 112 ] = - ( xx [ 71 ] + xx [ 51 ] ) ; return 3 ; } static
size_t computeAssemblyJacobian_5 ( const RuntimeDerivedValuesBundle * rtdv ,
const double * state , const int * modeVector , const double * motionData ,
double * J ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int
* rtdvi = rtdv -> mInts . mValues ; double xx [ 72 ] ; ( void ) rtdvd ; (
void ) rtdvi ; ( void ) modeVector ; xx [ 0 ] = 0.0 ; xx [ 1 ] = motionData [
119 ] ; xx [ 2 ] = motionData [ 120 ] ; xx [ 3 ] = motionData [ 121 ] ; xx [
4 ] = motionData [ 122 ] ; xx [ 5 ] = 0.5 ; xx [ 6 ] = xx [ 5 ] * state [ 56
] ; xx [ 7 ] = sin ( xx [ 6 ] ) ; xx [ 8 ] = xx [ 5 ] * state [ 57 ] ; xx [ 9
] = sin ( xx [ 8 ] ) ; xx [ 10 ] = xx [ 7 ] * xx [ 9 ] ; xx [ 11 ] = xx [ 5 ]
* state [ 58 ] ; xx [ 12 ] = sin ( xx [ 11 ] ) ; xx [ 13 ] = cos ( xx [ 11 ]
) ; xx [ 11 ] = cos ( xx [ 6 ] ) ; xx [ 6 ] = cos ( xx [ 8 ] ) ; xx [ 8 ] =
xx [ 11 ] * xx [ 6 ] ; xx [ 14 ] = xx [ 10 ] * xx [ 12 ] - xx [ 13 ] * xx [ 8
] ; xx [ 15 ] = xx [ 6 ] * xx [ 7 ] ; xx [ 6 ] = xx [ 11 ] * xx [ 9 ] ; xx [
7 ] = xx [ 13 ] * xx [ 15 ] + xx [ 6 ] * xx [ 12 ] ; xx [ 9 ] = xx [ 15 ] *
xx [ 12 ] - xx [ 13 ] * xx [ 6 ] ; xx [ 6 ] = xx [ 8 ] * xx [ 12 ] + xx [ 13
] * xx [ 10 ] ; xx [ 15 ] = xx [ 14 ] ; xx [ 16 ] = - xx [ 7 ] ; xx [ 17 ] =
xx [ 9 ] ; xx [ 18 ] = - xx [ 6 ] ; pm_math_Quaternion_compose_ra ( xx + 1 ,
xx + 15 , xx + 19 ) ; xx [ 8 ] = 1.0 ; xx [ 10 ] = 2.0 ; xx [ 11 ] = xx [ 8 ]
- ( xx [ 9 ] * xx [ 9 ] + xx [ 6 ] * xx [ 6 ] ) * xx [ 10 ] ; xx [ 23 ] = xx
[ 10 ] * ( xx [ 6 ] * xx [ 14 ] - xx [ 7 ] * xx [ 9 ] ) ; xx [ 24 ] = xx [ 9
] * xx [ 14 ] + xx [ 7 ] * xx [ 6 ] ; xx [ 25 ] = xx [ 11 ] ; xx [ 26 ] = xx
[ 23 ] ; xx [ 27 ] = xx [ 24 ] * xx [ 10 ] ; xx [ 28 ] = 0.07930000000000012
; xx [ 29 ] = 0.02990000000000002 ; xx [ 30 ] = 0.1049999999999999 ; xx [ 31
] = - xx [ 28 ] ; xx [ 32 ] = - xx [ 29 ] ; xx [ 33 ] = - xx [ 30 ] ;
pm_math_Vector3_cross_ra ( xx + 25 , xx + 31 , xx + 34 ) ;
pm_math_Quaternion_xform_ra ( xx + 19 , xx + 34 , xx + 25 ) ; xx [ 31 ] =
8.499999999999917e-3 ; xx [ 32 ] = 0.09430000000000001 ; xx [ 33 ] = - ( xx [
31 ] * xx [ 23 ] ) ; xx [ 34 ] = xx [ 31 ] * xx [ 11 ] - xx [ 24 ] * 0.1886 ;
xx [ 35 ] = xx [ 32 ] * xx [ 23 ] ; pm_math_Quaternion_xform_ra ( xx + 15 ,
xx + 33 , xx + 36 ) ; xx [ 33 ] = - xx [ 36 ] ; xx [ 34 ] = - xx [ 37 ] ; xx
[ 35 ] = - xx [ 38 ] ; pm_math_Quaternion_xform_ra ( xx + 1 , xx + 33 , xx +
36 ) ; xx [ 11 ] = xx [ 8 ] - xx [ 10 ] * xx [ 12 ] * xx [ 12 ] ; xx [ 8 ] =
xx [ 10 ] * xx [ 13 ] * xx [ 12 ] ; xx [ 33 ] = - ( xx [ 30 ] * xx [ 11 ] ) ;
xx [ 34 ] = xx [ 30 ] * xx [ 8 ] ; xx [ 35 ] = xx [ 28 ] * xx [ 11 ] - xx [
29 ] * xx [ 8 ] ; pm_math_Quaternion_xform_ra ( xx + 19 , xx + 33 , xx + 39 )
; xx [ 33 ] = - ( xx [ 31 ] * xx [ 11 ] ) ; xx [ 34 ] = xx [ 31 ] * xx [ 8 ]
; xx [ 35 ] = xx [ 32 ] * xx [ 11 ] ; pm_math_Quaternion_xform_ra ( xx + 15 ,
xx + 33 , xx + 11 ) ; xx [ 15 ] = - xx [ 11 ] ; xx [ 16 ] = - xx [ 12 ] ; xx
[ 17 ] = - xx [ 13 ] ; pm_math_Quaternion_xform_ra ( xx + 1 , xx + 15 , xx +
11 ) ; xx [ 8 ] = xx [ 28 ] * xx [ 22 ] ; xx [ 15 ] = xx [ 28 ] * xx [ 20 ] +
xx [ 29 ] * xx [ 21 ] ; xx [ 16 ] = xx [ 8 ] ; xx [ 17 ] = xx [ 29 ] * xx [
22 ] ; xx [ 18 ] = - xx [ 15 ] ; pm_math_Vector3_cross_ra ( xx + 20 , xx + 16
, xx + 33 ) ; xx [ 16 ] = xx [ 7 ] * xx [ 32 ] ; xx [ 17 ] = xx [ 6 ] * xx [
32 ] ; xx [ 42 ] = - ( xx [ 10 ] * ( xx [ 16 ] * xx [ 9 ] - xx [ 17 ] * xx [
14 ] ) ) ; xx [ 43 ] = xx [ 32 ] - ( xx [ 6 ] * xx [ 17 ] + xx [ 7 ] * xx [
16 ] ) * xx [ 10 ] ; xx [ 44 ] = - ( ( xx [ 16 ] * xx [ 14 ] + xx [ 17 ] * xx
[ 9 ] ) * xx [ 10 ] ) ; pm_math_Quaternion_xform_ra ( xx + 1 , xx + 42 , xx +
16 ) ; xx [ 1 ] = 0.651853142204865 ; xx [ 2 ] = - 0.03641083691649384 ; xx [
3 ] = 0.03143875934085798 ; xx [ 4 ] = 0.7568179017199528 ; xx [ 6 ] = xx [ 5
] * state [ 75 ] ; xx [ 5 ] = 0.0960996545167382 ; xx [ 7 ] = sin ( xx [ 6 ]
) ; xx [ 9 ] = 1.177948454025794e-4 ; xx [ 14 ] = 0.9953717107322962 ; xx [
42 ] = cos ( xx [ 6 ] ) ; xx [ 43 ] = - ( xx [ 5 ] * xx [ 7 ] ) ; xx [ 44 ] =
xx [ 9 ] * xx [ 7 ] ; xx [ 45 ] = xx [ 14 ] * xx [ 7 ] ;
pm_math_Quaternion_compose_ra ( xx + 1 , xx + 42 , xx + 46 ) ; xx [ 1 ] =
motionData [ 168 ] ; xx [ 2 ] = motionData [ 169 ] ; xx [ 3 ] = motionData [
170 ] ; xx [ 4 ] = motionData [ 171 ] ; pm_math_Quaternion_compose_ra ( xx +
46 , xx + 1 , xx + 42 ) ; xx [ 30 ] = - xx [ 5 ] ; xx [ 31 ] = xx [ 9 ] ; xx
[ 32 ] = xx [ 14 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 1 , xx + 30 ,
xx + 5 ) ; xx [ 1 ] = 0.05448810068449638 ; xx [ 2 ] = 9.016809746371062e-8 ;
xx [ 3 ] = - 1.197569081478675e-6 ; pm_math_Vector3_cross_ra ( xx + 5 , xx +
1 , xx + 50 ) ; pm_math_Quaternion_xform_ra ( xx + 42 , xx + 50 , xx + 1 ) ;
xx [ 4 ] = motionData [ 172 ] ; xx [ 5 ] = motionData [ 173 ] ; xx [ 6 ] =
motionData [ 174 ] ; pm_math_Vector3_cross_ra ( xx + 30 , xx + 4 , xx + 42 )
; pm_math_Quaternion_xform_ra ( xx + 46 , xx + 42 , xx + 4 ) ; xx [ 30 ] = -
2.298050364265303e-6 ; xx [ 31 ] = 0.02367056868070961 ; xx [ 32 ] = -
3.023104627104057e-6 ; pm_math_Quaternion_xform_ra ( xx + 46 , xx + 30 , xx +
42 ) ; xx [ 45 ] = motionData [ 161 ] ; xx [ 46 ] = motionData [ 162 ] ; xx [
47 ] = motionData [ 163 ] ; xx [ 48 ] = motionData [ 164 ] ; xx [ 49 ] =
0.9988422572316213 ; xx [ 50 ] = - 6.00792342022948e-5 ; xx [ 51 ] = -
0.04810551968680427 ; xx [ 52 ] = 2.312115552059532e-5 ; xx [ 53 ] = state [
77 ] ; xx [ 54 ] = state [ 78 ] ; xx [ 55 ] = state [ 79 ] ; xx [ 56 ] =
state [ 80 ] ; xx [ 57 ] = - 0.9999999999996456 ; xx [ 58 ] =
1.335114243000915e-9 ; xx [ 59 ] = 1.564242624680818e-7 ; xx [ 60 ] = -
8.27384461422298e-7 ; pm_math_Quaternion_composeInverse_ra ( xx + 53 , xx +
57 , xx + 61 ) ; pm_math_Quaternion_compose_ra ( xx + 49 , xx + 61 , xx + 53
) ; pm_math_Quaternion_compose_ra ( xx + 45 , xx + 53 , xx + 49 ) ; xx [ 30 ]
= - 2.009909055578571e-12 ; xx [ 31 ] = 1.214615603282308e-6 ; xx [ 32 ] =
2.881763323693879e-12 ; pm_math_Quaternion_xform_ra ( xx + 49 , xx + 30 , xx
+ 57 ) ; xx [ 30 ] = 2.009909055578572e-12 ; xx [ 31 ] = -
1.21461560328232e-6 ; xx [ 32 ] = - 2.881763259213495e-12 ;
pm_math_Quaternion_xform_ra ( xx + 53 , xx + 30 , xx + 60 ) ;
pm_math_Quaternion_xform_ra ( xx + 45 , xx + 60 , xx + 30 ) ; xx [ 60 ] = -
1.197569081236243e-6 ; xx [ 61 ] = - 1.474914827216787e-10 ; xx [ 62 ] = -
0.05448810068457099 ; pm_math_Quaternion_xform_ra ( xx + 49 , xx + 60 , xx +
63 ) ; xx [ 60 ] = 1.231982419222245e-6 ; xx [ 61 ] = - 1.462051776775044e-10
; xx [ 62 ] = - 0.05551189931542364 ; pm_math_Quaternion_xform_ra ( xx + 53 ,
xx + 60 , xx + 66 ) ; pm_math_Quaternion_xform_ra ( xx + 45 , xx + 66 , xx +
60 ) ; xx [ 66 ] = - 9.016810066118371e-8 ; xx [ 67 ] = 0.05448810068412172 ;
xx [ 68 ] = - 1.455097835249509e-10 ; pm_math_Quaternion_xform_ra ( xx + 49 ,
xx + 66 , xx + 69 ) ; xx [ 49 ] = - 9.18564808057805e-8 ; xx [ 50 ] =
0.05551189931573034 ; xx [ 51 ] = - 1.482438229960606e-10 ;
pm_math_Quaternion_xform_ra ( xx + 53 , xx + 49 , xx + 66 ) ;
pm_math_Quaternion_xform_ra ( xx + 45 , xx + 66 , xx + 49 ) ; J [ 26 ] = xx [
25 ] + xx [ 36 ] ; J [ 27 ] = xx [ 39 ] + xx [ 11 ] ; J [ 28 ] = xx [ 10 ] *
( xx [ 33 ] + xx [ 19 ] * xx [ 8 ] ) + xx [ 16 ] + xx [ 29 ] ; J [ 35 ] = - (
xx [ 1 ] + xx [ 4 ] + xx [ 42 ] ) ; J [ 36 ] = - ( xx [ 57 ] + xx [ 30 ] ) ;
J [ 37 ] = - ( xx [ 63 ] + xx [ 60 ] ) ; J [ 38 ] = - ( xx [ 69 ] + xx [ 49 ]
) ; J [ 65 ] = xx [ 26 ] + xx [ 37 ] ; J [ 66 ] = xx [ 40 ] + xx [ 12 ] ; J [
67 ] = ( xx [ 29 ] * xx [ 19 ] * xx [ 22 ] + xx [ 34 ] ) * xx [ 10 ] + xx [
17 ] - xx [ 28 ] ; J [ 74 ] = - ( xx [ 2 ] + xx [ 5 ] + xx [ 43 ] ) ; J [ 75
] = - ( xx [ 58 ] + xx [ 31 ] ) ; J [ 76 ] = - ( xx [ 64 ] + xx [ 61 ] ) ; J
[ 77 ] = - ( xx [ 70 ] + xx [ 50 ] ) ; J [ 104 ] = xx [ 27 ] + xx [ 38 ] ; J
[ 105 ] = xx [ 41 ] + xx [ 13 ] ; J [ 106 ] = ( xx [ 35 ] - xx [ 19 ] * xx [
15 ] ) * xx [ 10 ] + xx [ 18 ] ; J [ 113 ] = - ( xx [ 3 ] + xx [ 6 ] + xx [
44 ] ) ; J [ 114 ] = - ( xx [ 59 ] + xx [ 32 ] ) ; J [ 115 ] = - ( xx [ 65 ]
+ xx [ 62 ] ) ; J [ 116 ] = - ( xx [ 71 ] + xx [ 51 ] ) ; return 3 ; } static
size_t computeAssemblyJacobian_6p ( const RuntimeDerivedValuesBundle * rtdv ,
const double * state , const int * modeVector , const double * motionData ,
double * J ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int
* rtdvi = rtdv -> mInts . mValues ; double xx [ 30 ] ; ( void ) rtdvd ; (
void ) rtdvi ; ( void ) modeVector ; xx [ 0 ] = 0.0 ; xx [ 1 ] = motionData [
28 ] ; xx [ 2 ] = motionData [ 29 ] ; xx [ 3 ] = motionData [ 30 ] ; xx [ 4 ]
= motionData [ 31 ] ; xx [ 5 ] = 0.7071067811865476 ; xx [ 6 ] = xx [ 5 ] *
motionData [ 21 ] ; xx [ 7 ] = xx [ 5 ] * motionData [ 22 ] ; xx [ 8 ] = xx [
5 ] * motionData [ 23 ] ; xx [ 9 ] = xx [ 5 ] * motionData [ 24 ] ; xx [ 10 ]
= xx [ 6 ] + xx [ 7 ] ; xx [ 11 ] = xx [ 7 ] - xx [ 6 ] ; xx [ 12 ] = xx [ 8
] - xx [ 9 ] ; xx [ 13 ] = xx [ 9 ] + xx [ 8 ] ;
pm_math_Quaternion_inverseCompose_ra ( xx + 1 , xx + 10 , xx + 5 ) ; xx [ 1 ]
= 0.0 ; xx [ 2 ] = 2.220446049250313e-16 ; xx [ 14 ] = xx [ 1 ] ; xx [ 15 ] =
- xx [ 2 ] ; xx [ 16 ] = 1.0 ; pm_math_Quaternion_compDeriv_ra ( xx + 5 , xx
+ 14 , xx + 17 ) ; xx [ 3 ] = 2.0 ; xx [ 4 ] = ( motionData [ 28 ] *
motionData [ 30 ] + motionData [ 29 ] * motionData [ 31 ] ) * xx [ 3 ] ; xx [
9 ] = 1.0 - ( motionData [ 29 ] * motionData [ 29 ] + motionData [ 30 ] *
motionData [ 30 ] ) * xx [ 3 ] ; xx [ 14 ] = xx [ 4 ] ; xx [ 15 ] = xx [ 3 ]
* ( motionData [ 30 ] * motionData [ 31 ] - motionData [ 28 ] * motionData [
29 ] ) ; xx [ 16 ] = xx [ 9 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 10
, xx + 14 , xx + 21 ) ; xx [ 10 ] = - xx [ 21 ] ; xx [ 11 ] = - xx [ 22 ] ;
xx [ 12 ] = - xx [ 23 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 5 , xx + 10
, xx + 13 ) ; xx [ 5 ] = 0.4527250000000002 ; xx [ 6 ] = 0.5 * state [ 6 ] ;
xx [ 7 ] = sin ( xx [ 6 ] ) ; xx [ 8 ] = xx [ 5 ] * xx [ 7 ] ; xx [ 10 ] =
cos ( xx [ 6 ] ) ; xx [ 6 ] = 1.405725 ; xx [ 11 ] = xx [ 6 ] * xx [ 7 ] ; xx
[ 12 ] = 1.405725 * xx [ 7 ] ; xx [ 13 ] = 0.4527250000000003 * xx [ 7 ] ; xx
[ 16 ] = xx [ 3 ] * ( xx [ 8 ] * xx [ 7 ] - xx [ 10 ] * xx [ 11 ] ) + xx [ 3
] * ( xx [ 10 ] * xx [ 12 ] - xx [ 13 ] * xx [ 7 ] ) + 1.110223024625157e-16
; xx [ 20 ] = motionData [ 22 ] ; xx [ 21 ] = motionData [ 23 ] ; xx [ 22 ] =
motionData [ 24 ] ; xx [ 17 ] = xx [ 6 ] * motionData [ 24 ] + xx [ 5 ] *
motionData [ 22 ] ; xx [ 23 ] = xx [ 6 ] * motionData [ 23 ] ; xx [ 24 ] = -
( xx [ 5 ] * motionData [ 23 ] ) ; xx [ 25 ] = xx [ 17 ] ; xx [ 26 ] = - xx [
23 ] ; pm_math_Vector3_cross_ra ( xx + 20 , xx + 24 , xx + 27 ) ; xx [ 20 ] =
0.01 ; xx [ 21 ] = xx [ 20 ] * motionData [ 30 ] ; xx [ 22 ] = xx [ 20 ] *
motionData [ 29 ] ; xx [ 20 ] = ( xx [ 27 ] - xx [ 5 ] * motionData [ 21 ] *
motionData [ 23 ] ) * xx [ 3 ] + motionData [ 25 ] - ( motionData [ 32 ] - (
xx [ 21 ] * motionData [ 28 ] + xx [ 22 ] * motionData [ 31 ] ) * xx [ 3 ] )
+ xx [ 6 ] ; xx [ 5 ] = ( xx [ 17 ] * motionData [ 21 ] + xx [ 28 ] ) * xx [
3 ] + motionData [ 26 ] - ( xx [ 3 ] * ( xx [ 22 ] * motionData [ 28 ] - xx [
21 ] * motionData [ 31 ] ) + motionData [ 33 ] ) ; xx [ 6 ] = xx [ 3 ] * ( xx
[ 29 ] - xx [ 23 ] * motionData [ 21 ] ) + motionData [ 27 ] - ( motionData [
34 ] + ( xx [ 22 ] * motionData [ 29 ] + xx [ 21 ] * motionData [ 30 ] ) * xx
[ 3 ] ) - 0.4427250000000001 ; xx [ 17 ] = sqrt ( xx [ 20 ] * xx [ 20 ] + xx
[ 5 ] * xx [ 5 ] + xx [ 6 ] * xx [ 6 ] ) ; xx [ 5 ] = xx [ 17 ] == 0.0 ? 0.0
: xx [ 20 ] / xx [ 17 ] ; xx [ 20 ] = xx [ 17 ] == 0.0 ? 0.0 : xx [ 6 ] / xx
[ 17 ] ; xx [ 6 ] = xx [ 2 ] - ( ( xx [ 10 ] * xx [ 13 ] + xx [ 12 ] * xx [ 7
] ) * xx [ 3 ] - ( xx [ 10 ] * xx [ 8 ] + xx [ 11 ] * xx [ 7 ] ) * xx [ 3 ] )
; J [ 3 ] = xx [ 18 ] ; J [ 4 ] = xx [ 14 ] ; J [ 42 ] = xx [ 19 ] ; J [ 43 ]
= xx [ 15 ] ; J [ 81 ] = xx [ 16 ] * xx [ 5 ] + xx [ 20 ] * xx [ 6 ] ; J [ 82
] = xx [ 1 ] ; J [ 120 ] = xx [ 16 ] * xx [ 4 ] + xx [ 6 ] * xx [ 9 ] ; J [
121 ] = xx [ 1 ] ; return 4 ; } static size_t computeAssemblyJacobian_6v (
const RuntimeDerivedValuesBundle * rtdv , const double * state , const int *
modeVector , const double * motionData , double * J ) { const double * rtdvd
= rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
double xx [ 45 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ; xx
[ 0 ] = 0.0 ; xx [ 1 ] = 7.427230677621783e-3 ; xx [ 2 ] = motionData [ 22 ]
; xx [ 3 ] = motionData [ 23 ] ; xx [ 4 ] = motionData [ 24 ] ; xx [ 5 ] =
0.4527250000000002 ; xx [ 6 ] = 1.405725 ; xx [ 7 ] = xx [ 6 ] * motionData [
24 ] + xx [ 5 ] * motionData [ 22 ] ; xx [ 8 ] = xx [ 6 ] * motionData [ 23 ]
; xx [ 9 ] = - ( xx [ 5 ] * motionData [ 23 ] ) ; xx [ 10 ] = xx [ 7 ] ; xx [
11 ] = - xx [ 8 ] ; pm_math_Vector3_cross_ra ( xx + 2 , xx + 9 , xx + 12 ) ;
xx [ 2 ] = 2.0 ; xx [ 3 ] = 0.01 ; xx [ 4 ] = xx [ 3 ] * motionData [ 30 ] ;
xx [ 9 ] = xx [ 3 ] * motionData [ 29 ] ; xx [ 10 ] = ( xx [ 12 ] - xx [ 5 ]
* motionData [ 21 ] * motionData [ 23 ] ) * xx [ 2 ] + motionData [ 25 ] + xx
[ 6 ] - ( motionData [ 32 ] - ( xx [ 4 ] * motionData [ 28 ] + xx [ 9 ] *
motionData [ 31 ] ) * xx [ 2 ] ) ; xx [ 11 ] = ( xx [ 7 ] * motionData [ 21 ]
+ xx [ 13 ] ) * xx [ 2 ] + motionData [ 26 ] - ( xx [ 2 ] * ( xx [ 9 ] *
motionData [ 28 ] - xx [ 4 ] * motionData [ 31 ] ) + motionData [ 33 ] ) ; xx
[ 7 ] = xx [ 2 ] * ( xx [ 14 ] - xx [ 8 ] * motionData [ 21 ] ) + motionData
[ 27 ] - xx [ 5 ] - ( motionData [ 34 ] + ( xx [ 9 ] * motionData [ 29 ] + xx
[ 4 ] * motionData [ 30 ] ) * xx [ 2 ] - xx [ 3 ] ) ; xx [ 12 ] = xx [ 10 ] ;
xx [ 13 ] = xx [ 11 ] ; xx [ 14 ] = xx [ 7 ] ; xx [ 3 ] = 1.0 ; xx [ 4 ] =
motionData [ 30 ] * motionData [ 30 ] ; xx [ 8 ] = motionData [ 31 ] *
motionData [ 31 ] ; xx [ 9 ] = xx [ 3 ] - ( xx [ 4 ] + xx [ 8 ] ) * xx [ 2 ]
; xx [ 15 ] = motionData [ 28 ] * motionData [ 31 ] ; xx [ 16 ] = motionData
[ 29 ] * motionData [ 30 ] ; xx [ 17 ] = motionData [ 29 ] * motionData [ 31
] ; xx [ 18 ] = motionData [ 28 ] * motionData [ 30 ] ; xx [ 19 ] = xx [ 2 ]
* ( xx [ 17 ] - xx [ 18 ] ) ; xx [ 20 ] = xx [ 9 ] ; xx [ 21 ] = ( xx [ 15 ]
+ xx [ 16 ] ) * xx [ 2 ] ; xx [ 22 ] = xx [ 19 ] ; xx [ 23 ] =
pm_math_Vector3_dot_ra ( xx + 12 , xx + 20 ) ; xx [ 20 ] = 0.5 ; xx [ 21 ] =
xx [ 20 ] * state [ 6 ] ; xx [ 22 ] = sin ( xx [ 21 ] ) ; xx [ 24 ] = xx [ 5
] * xx [ 22 ] ; xx [ 5 ] = cos ( xx [ 21 ] ) ; xx [ 21 ] = xx [ 6 ] * xx [ 22
] ; xx [ 6 ] = 1.405725 * xx [ 22 ] ; xx [ 25 ] = 0.4527250000000003 * xx [
22 ] ; xx [ 26 ] = xx [ 2 ] * ( xx [ 24 ] * xx [ 22 ] - xx [ 5 ] * xx [ 21 ]
) + xx [ 2 ] * ( xx [ 5 ] * xx [ 6 ] - xx [ 25 ] * xx [ 22 ] ) +
1.110223024625157e-16 ; xx [ 27 ] = xx [ 2 ] * ( xx [ 16 ] - xx [ 15 ] ) ; xx
[ 15 ] = motionData [ 28 ] * motionData [ 29 ] ; xx [ 16 ] = motionData [ 30
] * motionData [ 31 ] ; xx [ 28 ] = ( xx [ 15 ] + xx [ 16 ] ) * xx [ 2 ] ; xx
[ 29 ] = 2.220446049250313e-16 ; xx [ 30 ] = xx [ 29 ] - ( ( xx [ 5 ] * xx [
25 ] + xx [ 6 ] * xx [ 22 ] ) * xx [ 2 ] - ( xx [ 5 ] * xx [ 24 ] + xx [ 21 ]
* xx [ 22 ] ) * xx [ 2 ] ) ; xx [ 6 ] = motionData [ 29 ] * motionData [ 29 ]
; xx [ 31 ] = xx [ 27 ] ; xx [ 32 ] = xx [ 3 ] - ( xx [ 8 ] + xx [ 6 ] ) * xx
[ 2 ] ; xx [ 33 ] = xx [ 28 ] ; xx [ 8 ] = pm_math_Vector3_dot_ra ( xx + 12 ,
xx + 31 ) ; xx [ 21 ] = 0.02418025 ; xx [ 24 ] = xx [ 23 ] * xx [ 23 ] + xx [
8 ] * xx [ 8 ] ; if ( xx [ 21 ] > xx [ 24 ] ) xx [ 24 ] = xx [ 21 ] ; xx [ 25
] = xx [ 24 ] == 0.0 ? 0.0 : ( xx [ 23 ] * ( xx [ 26 ] * xx [ 27 ] + xx [ 28
] * xx [ 30 ] ) - xx [ 8 ] * ( xx [ 26 ] * xx [ 9 ] + xx [ 19 ] * xx [ 30 ] )
) / xx [ 24 ] ; xx [ 9 ] = 0.7071067811865476 ; xx [ 19 ] = xx [ 9 ] *
motionData [ 23 ] ; xx [ 27 ] = xx [ 9 ] * motionData [ 24 ] ; xx [ 28 ] = xx
[ 19 ] - xx [ 27 ] ; xx [ 31 ] = xx [ 27 ] + xx [ 19 ] ; xx [ 19 ] = xx [ 31
] * xx [ 31 ] ; xx [ 27 ] = xx [ 3 ] - ( xx [ 28 ] * xx [ 28 ] + xx [ 19 ] )
* xx [ 2 ] ; xx [ 32 ] = xx [ 9 ] * motionData [ 21 ] ; xx [ 33 ] = xx [ 9 ]
* motionData [ 22 ] ; xx [ 34 ] = xx [ 32 ] + xx [ 33 ] ; xx [ 35 ] = xx [ 34
] * xx [ 31 ] ; xx [ 36 ] = xx [ 33 ] - xx [ 32 ] ; xx [ 32 ] = xx [ 28 ] *
xx [ 36 ] ; xx [ 33 ] = xx [ 2 ] * ( xx [ 36 ] * xx [ 31 ] - xx [ 28 ] * xx [
34 ] ) ; xx [ 37 ] = xx [ 27 ] ; xx [ 38 ] = ( xx [ 35 ] + xx [ 32 ] ) * xx [
2 ] ; xx [ 39 ] = xx [ 33 ] ; xx [ 40 ] = pm_math_Vector3_dot_ra ( xx + 12 ,
xx + 37 ) ; xx [ 37 ] = xx [ 2 ] * ( xx [ 32 ] - xx [ 35 ] ) ; xx [ 32 ] = (
xx [ 36 ] * xx [ 34 ] + xx [ 28 ] * xx [ 31 ] ) * xx [ 2 ] ; xx [ 35 ] = xx [
2 ] * xx [ 22 ] * xx [ 22 ] - xx [ 3 ] ; xx [ 38 ] = xx [ 2 ] * xx [ 5 ] * xx
[ 22 ] ; xx [ 41 ] = xx [ 37 ] ; xx [ 42 ] = xx [ 3 ] - ( xx [ 19 ] + xx [ 36
] * xx [ 36 ] ) * xx [ 2 ] ; xx [ 43 ] = xx [ 32 ] ; xx [ 5 ] =
pm_math_Vector3_dot_ra ( xx + 12 , xx + 41 ) ; xx [ 19 ] = xx [ 40 ] * xx [
40 ] + xx [ 5 ] * xx [ 5 ] ; if ( xx [ 21 ] > xx [ 19 ] ) xx [ 19 ] = xx [ 21
] ; xx [ 21 ] = xx [ 19 ] == 0.0 ? 0.0 : ( xx [ 40 ] * ( xx [ 26 ] * xx [ 37
] + xx [ 32 ] * xx [ 30 ] + xx [ 35 ] * xx [ 10 ] + xx [ 38 ] * xx [ 7 ] ) -
xx [ 5 ] * ( xx [ 26 ] * xx [ 27 ] + xx [ 33 ] * xx [ 30 ] + xx [ 35 ] * xx [
7 ] - xx [ 38 ] * xx [ 10 ] ) ) / xx [ 19 ] ; xx [ 5 ] = xx [ 20 ] * state [
8 ] ; xx [ 19 ] = xx [ 9 ] * sin ( xx [ 5 ] ) ; xx [ 20 ] = xx [ 19 ] * xx [
19 ] ; xx [ 22 ] = xx [ 9 ] * cos ( xx [ 5 ] ) ; xx [ 5 ] = xx [ 22 ] * xx [
19 ] ; xx [ 37 ] = ( xx [ 20 ] + xx [ 20 ] ) * xx [ 2 ] - xx [ 3 ] ; xx [ 38
] = xx [ 2 ] * ( xx [ 5 ] - xx [ 5 ] ) ; xx [ 39 ] = ( xx [ 5 ] + xx [ 5 ] )
* xx [ 2 ] ; xx [ 9 ] = xx [ 22 ] * xx [ 22 ] ; xx [ 40 ] = - ( ( xx [ 5 ] +
xx [ 5 ] ) * xx [ 2 ] ) ; xx [ 41 ] = xx [ 3 ] - ( xx [ 20 ] + xx [ 9 ] ) *
xx [ 2 ] ; xx [ 42 ] = xx [ 2 ] * ( xx [ 20 ] - xx [ 9 ] ) ; xx [ 5 ] = xx [
24 ] == 0.0 ? 0.0 : ( pm_math_Vector3_dot_ra ( xx + 12 , xx + 37 ) * xx [ 23
] - xx [ 8 ] * pm_math_Vector3_dot_ra ( xx + 12 , xx + 40 ) ) / xx [ 24 ] ;
xx [ 37 ] = motionData [ 28 ] ; xx [ 38 ] = motionData [ 29 ] ; xx [ 39 ] =
motionData [ 30 ] ; xx [ 40 ] = motionData [ 31 ] ; xx [ 41 ] = xx [ 34 ] ;
xx [ 42 ] = xx [ 36 ] ; xx [ 43 ] = xx [ 28 ] ; xx [ 44 ] = xx [ 31 ] ;
pm_math_Quaternion_inverseCompose_ra ( xx + 37 , xx + 41 , xx + 31 ) ; xx [ 8
] = 0.0 ; xx [ 12 ] = xx [ 8 ] ; xx [ 13 ] = - xx [ 29 ] ; xx [ 14 ] = 1.0 ;
pm_math_Quaternion_compDeriv_ra ( xx + 31 , xx + 12 , xx + 35 ) ; xx [ 9 ] =
( xx [ 18 ] + xx [ 17 ] ) * xx [ 2 ] ; xx [ 12 ] = xx [ 3 ] - ( xx [ 6 ] + xx
[ 4 ] ) * xx [ 2 ] ; xx [ 17 ] = xx [ 9 ] ; xx [ 18 ] = xx [ 2 ] * ( xx [ 16
] - xx [ 15 ] ) ; xx [ 19 ] = xx [ 12 ] ; pm_math_Quaternion_inverseXform_ra
( xx + 41 , xx + 17 , xx + 2 ) ; xx [ 13 ] = - xx [ 2 ] ; xx [ 14 ] = - xx [
3 ] ; xx [ 15 ] = - xx [ 4 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 31 , xx
+ 13 , xx + 16 ) ; xx [ 2 ] = sqrt ( xx [ 10 ] * xx [ 10 ] + xx [ 11 ] * xx [
11 ] + xx [ 7 ] * xx [ 7 ] ) ; xx [ 3 ] = xx [ 2 ] == 0.0 ? 0.0 : xx [ 10 ] /
xx [ 2 ] ; xx [ 4 ] = xx [ 2 ] == 0.0 ? 0.0 : xx [ 7 ] / xx [ 2 ] ; J [ 3 ] =
xx [ 1 ] * xx [ 25 ] + xx [ 21 ] ; J [ 4 ] = xx [ 1 ] * xx [ 5 ] ; J [ 42 ] =
xx [ 36 ] ; J [ 43 ] = xx [ 17 ] ; J [ 81 ] = xx [ 37 ] ; J [ 82 ] = xx [ 18
] ; J [ 120 ] = xx [ 26 ] * xx [ 3 ] + xx [ 4 ] * xx [ 30 ] ; J [ 121 ] = xx
[ 8 ] ; J [ 159 ] = xx [ 26 ] * xx [ 9 ] + xx [ 30 ] * xx [ 12 ] ; J [ 160 ]
= xx [ 8 ] ; return 5 ; } static size_t computeAssemblyJacobian_7p ( const
RuntimeDerivedValuesBundle * rtdv , const double * state , const int *
modeVector , const double * motionData , double * J ) { const double * rtdvd
= rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
double xx [ 30 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ; xx
[ 0 ] = 0.0 ; xx [ 1 ] = motionData [ 84 ] ; xx [ 2 ] = motionData [ 85 ] ;
xx [ 3 ] = motionData [ 86 ] ; xx [ 4 ] = motionData [ 87 ] ; xx [ 5 ] =
0.7071067811865476 ; xx [ 6 ] = xx [ 5 ] * motionData [ 77 ] ; xx [ 7 ] = xx
[ 5 ] * motionData [ 78 ] ; xx [ 8 ] = xx [ 5 ] * motionData [ 80 ] ; xx [ 9
] = xx [ 5 ] * motionData [ 79 ] ; xx [ 10 ] = - ( xx [ 6 ] + xx [ 7 ] ) ; xx
[ 11 ] = xx [ 6 ] - xx [ 7 ] ; xx [ 12 ] = xx [ 8 ] - xx [ 9 ] ; xx [ 13 ] =
- ( xx [ 8 ] + xx [ 9 ] ) ; pm_math_Quaternion_inverseCompose_ra ( xx + 1 ,
xx + 10 , xx + 5 ) ; xx [ 1 ] = 0.0 ; xx [ 2 ] = 2.220446049250313e-16 ; xx [
14 ] = xx [ 1 ] ; xx [ 15 ] = - xx [ 2 ] ; xx [ 16 ] = 1.0 ;
pm_math_Quaternion_compDeriv_ra ( xx + 5 , xx + 14 , xx + 17 ) ; xx [ 3 ] =
2.0 ; xx [ 4 ] = ( motionData [ 84 ] * motionData [ 86 ] + motionData [ 85 ]
* motionData [ 87 ] ) * xx [ 3 ] ; xx [ 9 ] = 1.0 - ( motionData [ 85 ] *
motionData [ 85 ] + motionData [ 86 ] * motionData [ 86 ] ) * xx [ 3 ] ; xx [
14 ] = xx [ 4 ] ; xx [ 15 ] = xx [ 3 ] * ( motionData [ 86 ] * motionData [
87 ] - motionData [ 84 ] * motionData [ 85 ] ) ; xx [ 16 ] = xx [ 9 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 10 , xx + 14 , xx + 21 ) ; xx [ 10
] = - xx [ 21 ] ; xx [ 11 ] = - xx [ 22 ] ; xx [ 12 ] = - xx [ 23 ] ;
pm_math_Quaternion_compDeriv_ra ( xx + 5 , xx + 10 , xx + 13 ) ; xx [ 5 ] =
0.452725 ; xx [ 6 ] = 0.5 * state [ 34 ] ; xx [ 7 ] = sin ( xx [ 6 ] ) ; xx [
8 ] = xx [ 5 ] * xx [ 7 ] ; xx [ 10 ] = cos ( xx [ 6 ] ) ; xx [ 6 ] =
1.405725 ; xx [ 11 ] = xx [ 6 ] * xx [ 7 ] ; xx [ 12 ] = 1.405725 * xx [ 7 ]
; xx [ 13 ] = 0.4527250000000002 * xx [ 7 ] ; xx [ 16 ] = xx [ 3 ] * ( xx [ 8
] * xx [ 7 ] - xx [ 10 ] * xx [ 11 ] ) + xx [ 3 ] * ( xx [ 10 ] * xx [ 12 ] -
xx [ 13 ] * xx [ 7 ] ) + 1.110223024625157e-16 ; xx [ 20 ] = motionData [ 78
] ; xx [ 21 ] = motionData [ 79 ] ; xx [ 22 ] = motionData [ 80 ] ; xx [ 17 ]
= xx [ 6 ] * motionData [ 80 ] + xx [ 5 ] * motionData [ 78 ] ; xx [ 23 ] =
xx [ 6 ] * motionData [ 79 ] ; xx [ 24 ] = - ( xx [ 5 ] * motionData [ 79 ] )
; xx [ 25 ] = xx [ 17 ] ; xx [ 26 ] = - xx [ 23 ] ; pm_math_Vector3_cross_ra
( xx + 20 , xx + 24 , xx + 27 ) ; xx [ 20 ] = 0.01 ; xx [ 21 ] = xx [ 20 ] *
motionData [ 86 ] ; xx [ 22 ] = xx [ 20 ] * motionData [ 85 ] ; xx [ 20 ] = (
xx [ 27 ] - xx [ 5 ] * motionData [ 77 ] * motionData [ 79 ] ) * xx [ 3 ] +
motionData [ 81 ] - ( motionData [ 88 ] - ( xx [ 21 ] * motionData [ 84 ] +
xx [ 22 ] * motionData [ 87 ] ) * xx [ 3 ] ) + xx [ 6 ] ; xx [ 5 ] = ( xx [
17 ] * motionData [ 77 ] + xx [ 28 ] ) * xx [ 3 ] + motionData [ 82 ] - ( xx
[ 3 ] * ( xx [ 22 ] * motionData [ 84 ] - xx [ 21 ] * motionData [ 87 ] ) +
motionData [ 89 ] ) ; xx [ 6 ] = xx [ 3 ] * ( xx [ 29 ] - xx [ 23 ] *
motionData [ 77 ] ) + motionData [ 83 ] - ( motionData [ 90 ] + ( xx [ 22 ] *
motionData [ 85 ] + xx [ 21 ] * motionData [ 86 ] ) * xx [ 3 ] ) - 0.442725 ;
xx [ 17 ] = sqrt ( xx [ 20 ] * xx [ 20 ] + xx [ 5 ] * xx [ 5 ] + xx [ 6 ] *
xx [ 6 ] ) ; xx [ 5 ] = xx [ 17 ] == 0.0 ? 0.0 : xx [ 20 ] / xx [ 17 ] ; xx [
20 ] = xx [ 17 ] == 0.0 ? 0.0 : xx [ 6 ] / xx [ 17 ] ; xx [ 6 ] = xx [ 2 ] -
( ( xx [ 10 ] * xx [ 13 ] + xx [ 12 ] * xx [ 7 ] ) * xx [ 3 ] - ( xx [ 10 ] *
xx [ 8 ] + xx [ 11 ] * xx [ 7 ] ) * xx [ 3 ] ) ; J [ 16 ] = xx [ 18 ] ; J [
17 ] = xx [ 14 ] ; J [ 55 ] = xx [ 19 ] ; J [ 56 ] = xx [ 15 ] ; J [ 94 ] =
xx [ 16 ] * xx [ 5 ] + xx [ 20 ] * xx [ 6 ] ; J [ 95 ] = xx [ 1 ] ; J [ 133 ]
= xx [ 16 ] * xx [ 4 ] + xx [ 6 ] * xx [ 9 ] ; J [ 134 ] = xx [ 1 ] ; return
4 ; } static size_t computeAssemblyJacobian_7v ( const
RuntimeDerivedValuesBundle * rtdv , const double * state , const int *
modeVector , const double * motionData , double * J ) { const double * rtdvd
= rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
double xx [ 45 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ; xx
[ 0 ] = 0.0 ; xx [ 1 ] = 7.427230677621783e-3 ; xx [ 2 ] = motionData [ 78 ]
; xx [ 3 ] = motionData [ 79 ] ; xx [ 4 ] = motionData [ 80 ] ; xx [ 5 ] =
0.452725 ; xx [ 6 ] = 1.405725 ; xx [ 7 ] = xx [ 6 ] * motionData [ 80 ] + xx
[ 5 ] * motionData [ 78 ] ; xx [ 8 ] = xx [ 6 ] * motionData [ 79 ] ; xx [ 9
] = - ( xx [ 5 ] * motionData [ 79 ] ) ; xx [ 10 ] = xx [ 7 ] ; xx [ 11 ] = -
xx [ 8 ] ; pm_math_Vector3_cross_ra ( xx + 2 , xx + 9 , xx + 12 ) ; xx [ 2 ]
= 2.0 ; xx [ 3 ] = 0.01 ; xx [ 4 ] = xx [ 3 ] * motionData [ 86 ] ; xx [ 9 ]
= xx [ 3 ] * motionData [ 85 ] ; xx [ 10 ] = ( xx [ 12 ] - xx [ 5 ] *
motionData [ 77 ] * motionData [ 79 ] ) * xx [ 2 ] + motionData [ 81 ] + xx [
6 ] - ( motionData [ 88 ] - ( xx [ 4 ] * motionData [ 84 ] + xx [ 9 ] *
motionData [ 87 ] ) * xx [ 2 ] ) ; xx [ 11 ] = ( xx [ 7 ] * motionData [ 77 ]
+ xx [ 13 ] ) * xx [ 2 ] + motionData [ 82 ] - ( xx [ 2 ] * ( xx [ 9 ] *
motionData [ 84 ] - xx [ 4 ] * motionData [ 87 ] ) + motionData [ 89 ] ) ; xx
[ 7 ] = xx [ 2 ] * ( xx [ 14 ] - xx [ 8 ] * motionData [ 77 ] ) + motionData
[ 83 ] - xx [ 5 ] - ( motionData [ 90 ] + ( xx [ 9 ] * motionData [ 85 ] + xx
[ 4 ] * motionData [ 86 ] ) * xx [ 2 ] - xx [ 3 ] ) ; xx [ 12 ] = xx [ 10 ] ;
xx [ 13 ] = xx [ 11 ] ; xx [ 14 ] = xx [ 7 ] ; xx [ 3 ] = 1.0 ; xx [ 4 ] =
motionData [ 86 ] * motionData [ 86 ] ; xx [ 8 ] = motionData [ 87 ] *
motionData [ 87 ] ; xx [ 9 ] = xx [ 3 ] - ( xx [ 4 ] + xx [ 8 ] ) * xx [ 2 ]
; xx [ 15 ] = motionData [ 84 ] * motionData [ 87 ] ; xx [ 16 ] = motionData
[ 85 ] * motionData [ 86 ] ; xx [ 17 ] = motionData [ 85 ] * motionData [ 87
] ; xx [ 18 ] = motionData [ 84 ] * motionData [ 86 ] ; xx [ 19 ] = xx [ 2 ]
* ( xx [ 17 ] - xx [ 18 ] ) ; xx [ 20 ] = xx [ 9 ] ; xx [ 21 ] = ( xx [ 15 ]
+ xx [ 16 ] ) * xx [ 2 ] ; xx [ 22 ] = xx [ 19 ] ; xx [ 23 ] =
pm_math_Vector3_dot_ra ( xx + 12 , xx + 20 ) ; xx [ 20 ] = 0.5 ; xx [ 21 ] =
xx [ 20 ] * state [ 34 ] ; xx [ 22 ] = sin ( xx [ 21 ] ) ; xx [ 24 ] = xx [ 5
] * xx [ 22 ] ; xx [ 5 ] = cos ( xx [ 21 ] ) ; xx [ 21 ] = xx [ 6 ] * xx [ 22
] ; xx [ 6 ] = 1.405725 * xx [ 22 ] ; xx [ 25 ] = 0.4527250000000002 * xx [
22 ] ; xx [ 26 ] = xx [ 2 ] * ( xx [ 24 ] * xx [ 22 ] - xx [ 5 ] * xx [ 21 ]
) + xx [ 2 ] * ( xx [ 5 ] * xx [ 6 ] - xx [ 25 ] * xx [ 22 ] ) +
1.110223024625157e-16 ; xx [ 27 ] = xx [ 2 ] * ( xx [ 16 ] - xx [ 15 ] ) ; xx
[ 15 ] = motionData [ 84 ] * motionData [ 85 ] ; xx [ 16 ] = motionData [ 86
] * motionData [ 87 ] ; xx [ 28 ] = ( xx [ 15 ] + xx [ 16 ] ) * xx [ 2 ] ; xx
[ 29 ] = 2.220446049250313e-16 ; xx [ 30 ] = xx [ 29 ] - ( ( xx [ 5 ] * xx [
25 ] + xx [ 6 ] * xx [ 22 ] ) * xx [ 2 ] - ( xx [ 5 ] * xx [ 24 ] + xx [ 21 ]
* xx [ 22 ] ) * xx [ 2 ] ) ; xx [ 6 ] = motionData [ 85 ] * motionData [ 85 ]
; xx [ 31 ] = xx [ 27 ] ; xx [ 32 ] = xx [ 3 ] - ( xx [ 8 ] + xx [ 6 ] ) * xx
[ 2 ] ; xx [ 33 ] = xx [ 28 ] ; xx [ 8 ] = pm_math_Vector3_dot_ra ( xx + 12 ,
xx + 31 ) ; xx [ 21 ] = 0.02418025 ; xx [ 24 ] = xx [ 23 ] * xx [ 23 ] + xx [
8 ] * xx [ 8 ] ; if ( xx [ 21 ] > xx [ 24 ] ) xx [ 24 ] = xx [ 21 ] ; xx [ 25
] = xx [ 24 ] == 0.0 ? 0.0 : ( xx [ 23 ] * ( xx [ 26 ] * xx [ 27 ] + xx [ 28
] * xx [ 30 ] ) - xx [ 8 ] * ( xx [ 26 ] * xx [ 9 ] + xx [ 19 ] * xx [ 30 ] )
) / xx [ 24 ] ; xx [ 9 ] = 0.7071067811865476 ; xx [ 19 ] = xx [ 9 ] *
motionData [ 80 ] ; xx [ 27 ] = xx [ 9 ] * motionData [ 79 ] ; xx [ 28 ] = xx
[ 19 ] - xx [ 27 ] ; xx [ 31 ] = xx [ 19 ] + xx [ 27 ] ; xx [ 19 ] = xx [ 31
] * xx [ 31 ] ; xx [ 27 ] = xx [ 3 ] - ( xx [ 28 ] * xx [ 28 ] + xx [ 19 ] )
* xx [ 2 ] ; xx [ 32 ] = xx [ 9 ] * motionData [ 77 ] ; xx [ 33 ] = xx [ 9 ]
* motionData [ 78 ] ; xx [ 34 ] = xx [ 32 ] + xx [ 33 ] ; xx [ 35 ] = xx [ 34
] * xx [ 31 ] ; xx [ 36 ] = xx [ 32 ] - xx [ 33 ] ; xx [ 32 ] = xx [ 36 ] *
xx [ 28 ] ; xx [ 33 ] = xx [ 2 ] * ( xx [ 28 ] * xx [ 34 ] - xx [ 36 ] * xx [
31 ] ) ; xx [ 37 ] = xx [ 27 ] ; xx [ 38 ] = ( xx [ 35 ] + xx [ 32 ] ) * xx [
2 ] ; xx [ 39 ] = xx [ 33 ] ; xx [ 40 ] = pm_math_Vector3_dot_ra ( xx + 12 ,
xx + 37 ) ; xx [ 37 ] = xx [ 2 ] * ( xx [ 32 ] - xx [ 35 ] ) ; xx [ 32 ] = (
xx [ 36 ] * xx [ 34 ] + xx [ 28 ] * xx [ 31 ] ) * xx [ 2 ] ; xx [ 35 ] = xx [
2 ] * xx [ 22 ] * xx [ 22 ] - xx [ 3 ] ; xx [ 38 ] = xx [ 2 ] * xx [ 5 ] * xx
[ 22 ] ; xx [ 41 ] = xx [ 37 ] ; xx [ 42 ] = xx [ 3 ] - ( xx [ 19 ] + xx [ 36
] * xx [ 36 ] ) * xx [ 2 ] ; xx [ 43 ] = - xx [ 32 ] ; xx [ 5 ] =
pm_math_Vector3_dot_ra ( xx + 12 , xx + 41 ) ; xx [ 19 ] = xx [ 40 ] * xx [
40 ] + xx [ 5 ] * xx [ 5 ] ; if ( xx [ 21 ] > xx [ 19 ] ) xx [ 19 ] = xx [ 21
] ; xx [ 21 ] = xx [ 19 ] == 0.0 ? 0.0 : ( xx [ 40 ] * ( xx [ 26 ] * xx [ 37
] - xx [ 32 ] * xx [ 30 ] + xx [ 35 ] * xx [ 10 ] + xx [ 38 ] * xx [ 7 ] ) -
xx [ 5 ] * ( xx [ 26 ] * xx [ 27 ] + xx [ 33 ] * xx [ 30 ] + xx [ 35 ] * xx [
7 ] - xx [ 38 ] * xx [ 10 ] ) ) / xx [ 19 ] ; xx [ 5 ] = xx [ 20 ] * state [
36 ] ; xx [ 19 ] = xx [ 9 ] * sin ( xx [ 5 ] ) ; xx [ 20 ] = xx [ 19 ] * xx [
19 ] ; xx [ 22 ] = xx [ 9 ] * cos ( xx [ 5 ] ) ; xx [ 5 ] = xx [ 22 ] * xx [
19 ] ; xx [ 37 ] = ( xx [ 20 ] + xx [ 20 ] ) * xx [ 2 ] - xx [ 3 ] ; xx [ 38
] = xx [ 2 ] * ( xx [ 5 ] - xx [ 5 ] ) ; xx [ 39 ] = ( xx [ 5 ] + xx [ 5 ] )
* xx [ 2 ] ; xx [ 9 ] = xx [ 22 ] * xx [ 22 ] ; xx [ 40 ] = - ( ( xx [ 5 ] +
xx [ 5 ] ) * xx [ 2 ] ) ; xx [ 41 ] = xx [ 3 ] - ( xx [ 20 ] + xx [ 9 ] ) *
xx [ 2 ] ; xx [ 42 ] = xx [ 2 ] * ( xx [ 20 ] - xx [ 9 ] ) ; xx [ 5 ] = xx [
24 ] == 0.0 ? 0.0 : ( pm_math_Vector3_dot_ra ( xx + 12 , xx + 37 ) * xx [ 23
] - xx [ 8 ] * pm_math_Vector3_dot_ra ( xx + 12 , xx + 40 ) ) / xx [ 24 ] ;
xx [ 37 ] = motionData [ 84 ] ; xx [ 38 ] = motionData [ 85 ] ; xx [ 39 ] =
motionData [ 86 ] ; xx [ 40 ] = motionData [ 87 ] ; xx [ 41 ] = - xx [ 34 ] ;
xx [ 42 ] = xx [ 36 ] ; xx [ 43 ] = xx [ 28 ] ; xx [ 44 ] = - xx [ 31 ] ;
pm_math_Quaternion_inverseCompose_ra ( xx + 37 , xx + 41 , xx + 31 ) ; xx [ 8
] = 0.0 ; xx [ 12 ] = xx [ 8 ] ; xx [ 13 ] = - xx [ 29 ] ; xx [ 14 ] = 1.0 ;
pm_math_Quaternion_compDeriv_ra ( xx + 31 , xx + 12 , xx + 35 ) ; xx [ 9 ] =
( xx [ 18 ] + xx [ 17 ] ) * xx [ 2 ] ; xx [ 12 ] = xx [ 3 ] - ( xx [ 6 ] + xx
[ 4 ] ) * xx [ 2 ] ; xx [ 17 ] = xx [ 9 ] ; xx [ 18 ] = xx [ 2 ] * ( xx [ 16
] - xx [ 15 ] ) ; xx [ 19 ] = xx [ 12 ] ; pm_math_Quaternion_inverseXform_ra
( xx + 41 , xx + 17 , xx + 2 ) ; xx [ 13 ] = - xx [ 2 ] ; xx [ 14 ] = - xx [
3 ] ; xx [ 15 ] = - xx [ 4 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 31 , xx
+ 13 , xx + 16 ) ; xx [ 2 ] = sqrt ( xx [ 10 ] * xx [ 10 ] + xx [ 11 ] * xx [
11 ] + xx [ 7 ] * xx [ 7 ] ) ; xx [ 3 ] = xx [ 2 ] == 0.0 ? 0.0 : xx [ 10 ] /
xx [ 2 ] ; xx [ 4 ] = xx [ 2 ] == 0.0 ? 0.0 : xx [ 7 ] / xx [ 2 ] ; J [ 16 ]
= xx [ 1 ] * xx [ 25 ] + xx [ 21 ] ; J [ 17 ] = xx [ 1 ] * xx [ 5 ] ; J [ 55
] = xx [ 36 ] ; J [ 56 ] = xx [ 17 ] ; J [ 94 ] = xx [ 37 ] ; J [ 95 ] = xx [
18 ] ; J [ 133 ] = xx [ 26 ] * xx [ 3 ] + xx [ 4 ] * xx [ 30 ] ; J [ 134 ] =
xx [ 8 ] ; J [ 172 ] = xx [ 26 ] * xx [ 9 ] + xx [ 30 ] * xx [ 12 ] ; J [ 173
] = xx [ 8 ] ; return 5 ; } static size_t computeAssemblyJacobian_8p ( const
RuntimeDerivedValuesBundle * rtdv , const double * state , const int *
modeVector , const double * motionData , double * J ) { const double * rtdvd
= rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
double xx [ 30 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ; xx
[ 0 ] = 0.0 ; xx [ 1 ] = motionData [ 140 ] ; xx [ 2 ] = motionData [ 141 ] ;
xx [ 3 ] = motionData [ 142 ] ; xx [ 4 ] = motionData [ 143 ] ; xx [ 5 ] =
0.7071067811865476 ; xx [ 6 ] = xx [ 5 ] * motionData [ 133 ] ; xx [ 7 ] = xx
[ 5 ] * motionData [ 134 ] ; xx [ 8 ] = xx [ 5 ] * motionData [ 136 ] ; xx [
9 ] = xx [ 5 ] * motionData [ 135 ] ; xx [ 10 ] = - ( xx [ 6 ] + xx [ 7 ] ) ;
xx [ 11 ] = xx [ 6 ] - xx [ 7 ] ; xx [ 12 ] = xx [ 8 ] - xx [ 9 ] ; xx [ 13 ]
= - ( xx [ 8 ] + xx [ 9 ] ) ; pm_math_Quaternion_inverseCompose_ra ( xx + 1 ,
xx + 10 , xx + 5 ) ; xx [ 1 ] = 0.0 ; xx [ 2 ] = 2.220446049250313e-16 ; xx [
14 ] = xx [ 1 ] ; xx [ 15 ] = - xx [ 2 ] ; xx [ 16 ] = 1.0 ;
pm_math_Quaternion_compDeriv_ra ( xx + 5 , xx + 14 , xx + 17 ) ; xx [ 3 ] =
2.0 ; xx [ 4 ] = ( motionData [ 140 ] * motionData [ 142 ] + motionData [ 141
] * motionData [ 143 ] ) * xx [ 3 ] ; xx [ 9 ] = 1.0 - ( motionData [ 141 ] *
motionData [ 141 ] + motionData [ 142 ] * motionData [ 142 ] ) * xx [ 3 ] ;
xx [ 14 ] = xx [ 4 ] ; xx [ 15 ] = xx [ 3 ] * ( motionData [ 142 ] *
motionData [ 143 ] - motionData [ 140 ] * motionData [ 141 ] ) ; xx [ 16 ] =
xx [ 9 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 10 , xx + 14 , xx + 21 )
; xx [ 10 ] = - xx [ 21 ] ; xx [ 11 ] = - xx [ 22 ] ; xx [ 12 ] = - xx [ 23 ]
; pm_math_Quaternion_compDeriv_ra ( xx + 5 , xx + 10 , xx + 13 ) ; xx [ 5 ] =
0.452725 ; xx [ 6 ] = 0.5 * state [ 62 ] ; xx [ 7 ] = sin ( xx [ 6 ] ) ; xx [
8 ] = xx [ 5 ] * xx [ 7 ] ; xx [ 10 ] = cos ( xx [ 6 ] ) ; xx [ 6 ] =
1.405725 ; xx [ 11 ] = xx [ 6 ] * xx [ 7 ] ; xx [ 12 ] = 1.405725 * xx [ 7 ]
; xx [ 13 ] = 0.4527250000000002 * xx [ 7 ] ; xx [ 16 ] = xx [ 3 ] * ( xx [ 8
] * xx [ 7 ] - xx [ 10 ] * xx [ 11 ] ) + xx [ 3 ] * ( xx [ 10 ] * xx [ 12 ] -
xx [ 13 ] * xx [ 7 ] ) + 1.110223024625157e-16 ; xx [ 20 ] = motionData [ 134
] ; xx [ 21 ] = motionData [ 135 ] ; xx [ 22 ] = motionData [ 136 ] ; xx [ 17
] = xx [ 6 ] * motionData [ 136 ] + xx [ 5 ] * motionData [ 134 ] ; xx [ 23 ]
= xx [ 6 ] * motionData [ 135 ] ; xx [ 24 ] = - ( xx [ 5 ] * motionData [ 135
] ) ; xx [ 25 ] = xx [ 17 ] ; xx [ 26 ] = - xx [ 23 ] ;
pm_math_Vector3_cross_ra ( xx + 20 , xx + 24 , xx + 27 ) ; xx [ 20 ] = 0.01 ;
xx [ 21 ] = xx [ 20 ] * motionData [ 142 ] ; xx [ 22 ] = xx [ 20 ] *
motionData [ 141 ] ; xx [ 20 ] = ( xx [ 27 ] - xx [ 5 ] * motionData [ 133 ]
* motionData [ 135 ] ) * xx [ 3 ] + motionData [ 137 ] - ( motionData [ 144 ]
- ( xx [ 21 ] * motionData [ 140 ] + xx [ 22 ] * motionData [ 143 ] ) * xx [
3 ] ) + xx [ 6 ] ; xx [ 5 ] = ( xx [ 17 ] * motionData [ 133 ] + xx [ 28 ] )
* xx [ 3 ] + motionData [ 138 ] - ( xx [ 3 ] * ( xx [ 22 ] * motionData [ 140
] - xx [ 21 ] * motionData [ 143 ] ) + motionData [ 145 ] ) ; xx [ 6 ] = xx [
3 ] * ( xx [ 29 ] - xx [ 23 ] * motionData [ 133 ] ) + motionData [ 139 ] - (
motionData [ 146 ] + ( xx [ 22 ] * motionData [ 141 ] + xx [ 21 ] *
motionData [ 142 ] ) * xx [ 3 ] ) - 0.442725 ; xx [ 17 ] = sqrt ( xx [ 20 ] *
xx [ 20 ] + xx [ 5 ] * xx [ 5 ] + xx [ 6 ] * xx [ 6 ] ) ; xx [ 5 ] = xx [ 17
] == 0.0 ? 0.0 : xx [ 20 ] / xx [ 17 ] ; xx [ 20 ] = xx [ 17 ] == 0.0 ? 0.0 :
xx [ 6 ] / xx [ 17 ] ; xx [ 6 ] = xx [ 2 ] - ( ( xx [ 10 ] * xx [ 13 ] + xx [
12 ] * xx [ 7 ] ) * xx [ 3 ] - ( xx [ 10 ] * xx [ 8 ] + xx [ 11 ] * xx [ 7 ]
) * xx [ 3 ] ) ; J [ 29 ] = xx [ 18 ] ; J [ 30 ] = xx [ 14 ] ; J [ 68 ] = xx
[ 19 ] ; J [ 69 ] = xx [ 15 ] ; J [ 107 ] = xx [ 16 ] * xx [ 5 ] + xx [ 20 ]
* xx [ 6 ] ; J [ 108 ] = xx [ 1 ] ; J [ 146 ] = xx [ 16 ] * xx [ 4 ] + xx [ 6
] * xx [ 9 ] ; J [ 147 ] = xx [ 1 ] ; return 4 ; } static size_t
computeAssemblyJacobian_8v ( const RuntimeDerivedValuesBundle * rtdv , const
double * state , const int * modeVector , const double * motionData , double
* J ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi
= rtdv -> mInts . mValues ; double xx [ 45 ] ; ( void ) rtdvd ; ( void )
rtdvi ; ( void ) modeVector ; xx [ 0 ] = 0.0 ; xx [ 1 ] =
7.427230677621783e-3 ; xx [ 2 ] = motionData [ 134 ] ; xx [ 3 ] = motionData
[ 135 ] ; xx [ 4 ] = motionData [ 136 ] ; xx [ 5 ] = 0.452725 ; xx [ 6 ] =
1.405725 ; xx [ 7 ] = xx [ 6 ] * motionData [ 136 ] + xx [ 5 ] * motionData [
134 ] ; xx [ 8 ] = xx [ 6 ] * motionData [ 135 ] ; xx [ 9 ] = - ( xx [ 5 ] *
motionData [ 135 ] ) ; xx [ 10 ] = xx [ 7 ] ; xx [ 11 ] = - xx [ 8 ] ;
pm_math_Vector3_cross_ra ( xx + 2 , xx + 9 , xx + 12 ) ; xx [ 2 ] = 2.0 ; xx
[ 3 ] = 0.01 ; xx [ 4 ] = xx [ 3 ] * motionData [ 142 ] ; xx [ 9 ] = xx [ 3 ]
* motionData [ 141 ] ; xx [ 10 ] = ( xx [ 12 ] - xx [ 5 ] * motionData [ 133
] * motionData [ 135 ] ) * xx [ 2 ] + motionData [ 137 ] + xx [ 6 ] - (
motionData [ 144 ] - ( xx [ 4 ] * motionData [ 140 ] + xx [ 9 ] * motionData
[ 143 ] ) * xx [ 2 ] ) ; xx [ 11 ] = ( xx [ 7 ] * motionData [ 133 ] + xx [
13 ] ) * xx [ 2 ] + motionData [ 138 ] - ( xx [ 2 ] * ( xx [ 9 ] * motionData
[ 140 ] - xx [ 4 ] * motionData [ 143 ] ) + motionData [ 145 ] ) ; xx [ 7 ] =
xx [ 2 ] * ( xx [ 14 ] - xx [ 8 ] * motionData [ 133 ] ) + motionData [ 139 ]
- xx [ 5 ] - ( motionData [ 146 ] + ( xx [ 9 ] * motionData [ 141 ] + xx [ 4
] * motionData [ 142 ] ) * xx [ 2 ] - xx [ 3 ] ) ; xx [ 12 ] = xx [ 10 ] ; xx
[ 13 ] = xx [ 11 ] ; xx [ 14 ] = xx [ 7 ] ; xx [ 3 ] = 1.0 ; xx [ 4 ] =
motionData [ 142 ] * motionData [ 142 ] ; xx [ 8 ] = motionData [ 143 ] *
motionData [ 143 ] ; xx [ 9 ] = xx [ 3 ] - ( xx [ 4 ] + xx [ 8 ] ) * xx [ 2 ]
; xx [ 15 ] = motionData [ 140 ] * motionData [ 143 ] ; xx [ 16 ] =
motionData [ 141 ] * motionData [ 142 ] ; xx [ 17 ] = motionData [ 141 ] *
motionData [ 143 ] ; xx [ 18 ] = motionData [ 140 ] * motionData [ 142 ] ; xx
[ 19 ] = xx [ 2 ] * ( xx [ 17 ] - xx [ 18 ] ) ; xx [ 20 ] = xx [ 9 ] ; xx [
21 ] = ( xx [ 15 ] + xx [ 16 ] ) * xx [ 2 ] ; xx [ 22 ] = xx [ 19 ] ; xx [ 23
] = pm_math_Vector3_dot_ra ( xx + 12 , xx + 20 ) ; xx [ 20 ] = 0.5 ; xx [ 21
] = xx [ 20 ] * state [ 62 ] ; xx [ 22 ] = sin ( xx [ 21 ] ) ; xx [ 24 ] = xx
[ 5 ] * xx [ 22 ] ; xx [ 5 ] = cos ( xx [ 21 ] ) ; xx [ 21 ] = xx [ 6 ] * xx
[ 22 ] ; xx [ 6 ] = 1.405725 * xx [ 22 ] ; xx [ 25 ] = 0.4527250000000002 *
xx [ 22 ] ; xx [ 26 ] = xx [ 2 ] * ( xx [ 24 ] * xx [ 22 ] - xx [ 5 ] * xx [
21 ] ) + xx [ 2 ] * ( xx [ 5 ] * xx [ 6 ] - xx [ 25 ] * xx [ 22 ] ) +
1.110223024625157e-16 ; xx [ 27 ] = xx [ 2 ] * ( xx [ 16 ] - xx [ 15 ] ) ; xx
[ 15 ] = motionData [ 140 ] * motionData [ 141 ] ; xx [ 16 ] = motionData [
142 ] * motionData [ 143 ] ; xx [ 28 ] = ( xx [ 15 ] + xx [ 16 ] ) * xx [ 2 ]
; xx [ 29 ] = 2.220446049250313e-16 ; xx [ 30 ] = xx [ 29 ] - ( ( xx [ 5 ] *
xx [ 25 ] + xx [ 6 ] * xx [ 22 ] ) * xx [ 2 ] - ( xx [ 5 ] * xx [ 24 ] + xx [
21 ] * xx [ 22 ] ) * xx [ 2 ] ) ; xx [ 6 ] = motionData [ 141 ] * motionData
[ 141 ] ; xx [ 31 ] = xx [ 27 ] ; xx [ 32 ] = xx [ 3 ] - ( xx [ 8 ] + xx [ 6
] ) * xx [ 2 ] ; xx [ 33 ] = xx [ 28 ] ; xx [ 8 ] = pm_math_Vector3_dot_ra (
xx + 12 , xx + 31 ) ; xx [ 21 ] = 0.02418025 ; xx [ 24 ] = xx [ 23 ] * xx [
23 ] + xx [ 8 ] * xx [ 8 ] ; if ( xx [ 21 ] > xx [ 24 ] ) xx [ 24 ] = xx [ 21
] ; xx [ 25 ] = xx [ 24 ] == 0.0 ? 0.0 : ( xx [ 23 ] * ( xx [ 26 ] * xx [ 27
] + xx [ 28 ] * xx [ 30 ] ) - xx [ 8 ] * ( xx [ 26 ] * xx [ 9 ] + xx [ 19 ] *
xx [ 30 ] ) ) / xx [ 24 ] ; xx [ 9 ] = 0.7071067811865476 ; xx [ 19 ] = xx [
9 ] * motionData [ 136 ] ; xx [ 27 ] = xx [ 9 ] * motionData [ 135 ] ; xx [
28 ] = xx [ 19 ] - xx [ 27 ] ; xx [ 31 ] = xx [ 19 ] + xx [ 27 ] ; xx [ 19 ]
= xx [ 31 ] * xx [ 31 ] ; xx [ 27 ] = xx [ 3 ] - ( xx [ 28 ] * xx [ 28 ] + xx
[ 19 ] ) * xx [ 2 ] ; xx [ 32 ] = xx [ 9 ] * motionData [ 133 ] ; xx [ 33 ] =
xx [ 9 ] * motionData [ 134 ] ; xx [ 34 ] = xx [ 32 ] + xx [ 33 ] ; xx [ 35 ]
= xx [ 34 ] * xx [ 31 ] ; xx [ 36 ] = xx [ 32 ] - xx [ 33 ] ; xx [ 32 ] = xx
[ 36 ] * xx [ 28 ] ; xx [ 33 ] = xx [ 2 ] * ( xx [ 28 ] * xx [ 34 ] - xx [ 36
] * xx [ 31 ] ) ; xx [ 37 ] = xx [ 27 ] ; xx [ 38 ] = ( xx [ 35 ] + xx [ 32 ]
) * xx [ 2 ] ; xx [ 39 ] = xx [ 33 ] ; xx [ 40 ] = pm_math_Vector3_dot_ra (
xx + 12 , xx + 37 ) ; xx [ 37 ] = xx [ 2 ] * ( xx [ 32 ] - xx [ 35 ] ) ; xx [
32 ] = ( xx [ 36 ] * xx [ 34 ] + xx [ 28 ] * xx [ 31 ] ) * xx [ 2 ] ; xx [ 35
] = xx [ 2 ] * xx [ 22 ] * xx [ 22 ] - xx [ 3 ] ; xx [ 38 ] = xx [ 2 ] * xx [
5 ] * xx [ 22 ] ; xx [ 41 ] = xx [ 37 ] ; xx [ 42 ] = xx [ 3 ] - ( xx [ 19 ]
+ xx [ 36 ] * xx [ 36 ] ) * xx [ 2 ] ; xx [ 43 ] = - xx [ 32 ] ; xx [ 5 ] =
pm_math_Vector3_dot_ra ( xx + 12 , xx + 41 ) ; xx [ 19 ] = xx [ 40 ] * xx [
40 ] + xx [ 5 ] * xx [ 5 ] ; if ( xx [ 21 ] > xx [ 19 ] ) xx [ 19 ] = xx [ 21
] ; xx [ 21 ] = xx [ 19 ] == 0.0 ? 0.0 : ( xx [ 40 ] * ( xx [ 26 ] * xx [ 37
] - xx [ 32 ] * xx [ 30 ] + xx [ 35 ] * xx [ 10 ] + xx [ 38 ] * xx [ 7 ] ) -
xx [ 5 ] * ( xx [ 26 ] * xx [ 27 ] + xx [ 33 ] * xx [ 30 ] + xx [ 35 ] * xx [
7 ] - xx [ 38 ] * xx [ 10 ] ) ) / xx [ 19 ] ; xx [ 5 ] = xx [ 20 ] * state [
64 ] ; xx [ 19 ] = xx [ 9 ] * sin ( xx [ 5 ] ) ; xx [ 20 ] = xx [ 19 ] * xx [
19 ] ; xx [ 22 ] = xx [ 9 ] * cos ( xx [ 5 ] ) ; xx [ 5 ] = xx [ 22 ] * xx [
19 ] ; xx [ 37 ] = ( xx [ 20 ] + xx [ 20 ] ) * xx [ 2 ] - xx [ 3 ] ; xx [ 38
] = xx [ 2 ] * ( xx [ 5 ] - xx [ 5 ] ) ; xx [ 39 ] = ( xx [ 5 ] + xx [ 5 ] )
* xx [ 2 ] ; xx [ 9 ] = xx [ 22 ] * xx [ 22 ] ; xx [ 40 ] = - ( ( xx [ 5 ] +
xx [ 5 ] ) * xx [ 2 ] ) ; xx [ 41 ] = xx [ 3 ] - ( xx [ 20 ] + xx [ 9 ] ) *
xx [ 2 ] ; xx [ 42 ] = xx [ 2 ] * ( xx [ 20 ] - xx [ 9 ] ) ; xx [ 5 ] = xx [
24 ] == 0.0 ? 0.0 : ( pm_math_Vector3_dot_ra ( xx + 12 , xx + 37 ) * xx [ 23
] - xx [ 8 ] * pm_math_Vector3_dot_ra ( xx + 12 , xx + 40 ) ) / xx [ 24 ] ;
xx [ 37 ] = motionData [ 140 ] ; xx [ 38 ] = motionData [ 141 ] ; xx [ 39 ] =
motionData [ 142 ] ; xx [ 40 ] = motionData [ 143 ] ; xx [ 41 ] = - xx [ 34 ]
; xx [ 42 ] = xx [ 36 ] ; xx [ 43 ] = xx [ 28 ] ; xx [ 44 ] = - xx [ 31 ] ;
pm_math_Quaternion_inverseCompose_ra ( xx + 37 , xx + 41 , xx + 31 ) ; xx [ 8
] = 0.0 ; xx [ 12 ] = xx [ 8 ] ; xx [ 13 ] = - xx [ 29 ] ; xx [ 14 ] = 1.0 ;
pm_math_Quaternion_compDeriv_ra ( xx + 31 , xx + 12 , xx + 35 ) ; xx [ 9 ] =
( xx [ 18 ] + xx [ 17 ] ) * xx [ 2 ] ; xx [ 12 ] = xx [ 3 ] - ( xx [ 6 ] + xx
[ 4 ] ) * xx [ 2 ] ; xx [ 17 ] = xx [ 9 ] ; xx [ 18 ] = xx [ 2 ] * ( xx [ 16
] - xx [ 15 ] ) ; xx [ 19 ] = xx [ 12 ] ; pm_math_Quaternion_inverseXform_ra
( xx + 41 , xx + 17 , xx + 2 ) ; xx [ 13 ] = - xx [ 2 ] ; xx [ 14 ] = - xx [
3 ] ; xx [ 15 ] = - xx [ 4 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 31 , xx
+ 13 , xx + 16 ) ; xx [ 2 ] = sqrt ( xx [ 10 ] * xx [ 10 ] + xx [ 11 ] * xx [
11 ] + xx [ 7 ] * xx [ 7 ] ) ; xx [ 3 ] = xx [ 2 ] == 0.0 ? 0.0 : xx [ 10 ] /
xx [ 2 ] ; xx [ 4 ] = xx [ 2 ] == 0.0 ? 0.0 : xx [ 7 ] / xx [ 2 ] ; J [ 29 ]
= xx [ 1 ] * xx [ 25 ] + xx [ 21 ] ; J [ 30 ] = xx [ 1 ] * xx [ 5 ] ; J [ 68
] = xx [ 36 ] ; J [ 69 ] = xx [ 17 ] ; J [ 107 ] = xx [ 37 ] ; J [ 108 ] = xx
[ 18 ] ; J [ 146 ] = xx [ 26 ] * xx [ 3 ] + xx [ 4 ] * xx [ 30 ] ; J [ 147 ]
= xx [ 8 ] ; J [ 185 ] = xx [ 26 ] * xx [ 9 ] + xx [ 30 ] * xx [ 12 ] ; J [
186 ] = xx [ 8 ] ; return 5 ; } size_t
triped_a151ee3d_1_computeAssemblyJacobian ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , boolean_T
forVelocitySatisfaction , const double * state , const int * modeVector ,
const double * motionData , double * J ) { ( void ) mech ; ( void ) rtdv ; (
void ) state ; ( void ) modeVector ; ( void ) forVelocitySatisfaction ; (
void ) motionData ; ( void ) J ; switch ( constraintIdx ) { case 0 : return
computeAssemblyJacobian_0 ( rtdv , state , modeVector , motionData , J ) ;
case 1 : return computeAssemblyJacobian_1 ( rtdv , state , modeVector ,
motionData , J ) ; case 2 : return computeAssemblyJacobian_2 ( rtdv , state ,
modeVector , motionData , J ) ; case 3 : return computeAssemblyJacobian_3 (
rtdv , state , modeVector , motionData , J ) ; case 4 : return
computeAssemblyJacobian_4 ( rtdv , state , modeVector , motionData , J ) ;
case 5 : return computeAssemblyJacobian_5 ( rtdv , state , modeVector ,
motionData , J ) ; case 6 : return forVelocitySatisfaction ?
computeAssemblyJacobian_6v ( rtdv , state , modeVector , motionData , J ) :
computeAssemblyJacobian_6p ( rtdv , state , modeVector , motionData , J ) ;
case 7 : return forVelocitySatisfaction ? computeAssemblyJacobian_7v ( rtdv ,
state , modeVector , motionData , J ) : computeAssemblyJacobian_7p ( rtdv ,
state , modeVector , motionData , J ) ; case 8 : return
forVelocitySatisfaction ? computeAssemblyJacobian_8v ( rtdv , state ,
modeVector , motionData , J ) : computeAssemblyJacobian_8p ( rtdv , state ,
modeVector , motionData , J ) ; } return 0 ; } size_t
triped_a151ee3d_1_computeFullAssemblyJacobian ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , const double * state , const int *
modeVector , const double * motionData , double * J ) { const double * rtdvd
= rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
double xx [ 339 ] ; ( void ) mech ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) modeVector ; xx [ 0 ] = motionData [ 7 ] ; xx [ 1 ] = motionData [ 8 ] ; xx
[ 2 ] = motionData [ 9 ] ; xx [ 3 ] = motionData [ 10 ] ; xx [ 4 ] = 0.5 ; xx
[ 5 ] = xx [ 4 ] * state [ 0 ] ; xx [ 6 ] = sin ( xx [ 5 ] ) ; xx [ 7 ] = xx
[ 4 ] * state [ 1 ] ; xx [ 8 ] = sin ( xx [ 7 ] ) ; xx [ 9 ] = xx [ 6 ] * xx
[ 8 ] ; xx [ 10 ] = xx [ 4 ] * state [ 2 ] ; xx [ 11 ] = sin ( xx [ 10 ] ) ;
xx [ 12 ] = cos ( xx [ 10 ] ) ; xx [ 10 ] = cos ( xx [ 5 ] ) ; xx [ 5 ] = cos
( xx [ 7 ] ) ; xx [ 7 ] = xx [ 10 ] * xx [ 5 ] ; xx [ 13 ] = xx [ 9 ] * xx [
11 ] - xx [ 12 ] * xx [ 7 ] ; xx [ 14 ] = xx [ 5 ] * xx [ 6 ] ; xx [ 5 ] = xx
[ 10 ] * xx [ 8 ] ; xx [ 6 ] = xx [ 12 ] * xx [ 14 ] + xx [ 5 ] * xx [ 11 ] ;
xx [ 8 ] = xx [ 14 ] * xx [ 11 ] - xx [ 12 ] * xx [ 5 ] ; xx [ 5 ] = xx [ 7 ]
* xx [ 11 ] + xx [ 12 ] * xx [ 9 ] ; xx [ 14 ] = xx [ 13 ] ; xx [ 15 ] = - xx
[ 6 ] ; xx [ 16 ] = xx [ 8 ] ; xx [ 17 ] = - xx [ 5 ] ;
pm_math_Quaternion_compose_ra ( xx + 0 , xx + 14 , xx + 18 ) ; xx [ 7 ] = 1.0
; xx [ 9 ] = 2.0 ; xx [ 10 ] = xx [ 7 ] - ( xx [ 8 ] * xx [ 8 ] + xx [ 5 ] *
xx [ 5 ] ) * xx [ 9 ] ; xx [ 22 ] = xx [ 9 ] * ( xx [ 5 ] * xx [ 13 ] - xx [
6 ] * xx [ 8 ] ) ; xx [ 23 ] = xx [ 8 ] * xx [ 13 ] + xx [ 6 ] * xx [ 5 ] ;
xx [ 24 ] = xx [ 10 ] ; xx [ 25 ] = xx [ 22 ] ; xx [ 26 ] = xx [ 23 ] * xx [
9 ] ; xx [ 27 ] = 0.07930000000000005 ; xx [ 28 ] = 0.02989999999999998 ; xx
[ 29 ] = 0.105 ; xx [ 30 ] = - xx [ 27 ] ; xx [ 31 ] = xx [ 28 ] ; xx [ 32 ]
= - xx [ 29 ] ; pm_math_Vector3_cross_ra ( xx + 24 , xx + 30 , xx + 33 ) ;
pm_math_Quaternion_xform_ra ( xx + 18 , xx + 33 , xx + 36 ) ; xx [ 33 ] =
8.499999999999917e-3 ; xx [ 34 ] = 0.1886 ; xx [ 35 ] = 0.09430000000000001 ;
xx [ 39 ] = - ( xx [ 33 ] * xx [ 22 ] ) ; xx [ 40 ] = xx [ 33 ] * xx [ 10 ] -
xx [ 23 ] * xx [ 34 ] ; xx [ 41 ] = xx [ 35 ] * xx [ 22 ] ;
pm_math_Quaternion_xform_ra ( xx + 14 , xx + 39 , xx + 42 ) ; xx [ 39 ] = -
xx [ 42 ] ; xx [ 40 ] = - xx [ 43 ] ; xx [ 41 ] = - xx [ 44 ] ;
pm_math_Quaternion_xform_ra ( xx + 0 , xx + 39 , xx + 42 ) ; xx [ 10 ] = xx [
7 ] - xx [ 9 ] * xx [ 11 ] * xx [ 11 ] ; xx [ 22 ] = xx [ 9 ] * xx [ 12 ] *
xx [ 11 ] ; xx [ 39 ] = - ( xx [ 29 ] * xx [ 10 ] ) ; xx [ 40 ] = xx [ 29 ] *
xx [ 22 ] ; xx [ 41 ] = xx [ 28 ] * xx [ 22 ] + xx [ 27 ] * xx [ 10 ] ;
pm_math_Quaternion_xform_ra ( xx + 18 , xx + 39 , xx + 45 ) ; xx [ 39 ] = - (
xx [ 33 ] * xx [ 10 ] ) ; xx [ 40 ] = xx [ 33 ] * xx [ 22 ] ; xx [ 41 ] = xx
[ 35 ] * xx [ 10 ] ; pm_math_Quaternion_xform_ra ( xx + 14 , xx + 39 , xx +
48 ) ; xx [ 14 ] = - xx [ 48 ] ; xx [ 15 ] = - xx [ 49 ] ; xx [ 16 ] = - xx [
50 ] ; pm_math_Quaternion_xform_ra ( xx + 0 , xx + 14 , xx + 39 ) ; xx [ 11 ]
= xx [ 27 ] * xx [ 21 ] ; xx [ 12 ] = xx [ 28 ] * xx [ 20 ] - xx [ 27 ] * xx
[ 19 ] ; xx [ 14 ] = xx [ 11 ] ; xx [ 15 ] = - ( xx [ 28 ] * xx [ 21 ] ) ; xx
[ 16 ] = xx [ 12 ] ; pm_math_Vector3_cross_ra ( xx + 19 , xx + 14 , xx + 48 )
; xx [ 14 ] = xx [ 6 ] * xx [ 35 ] ; xx [ 15 ] = xx [ 5 ] * xx [ 35 ] ; xx [
51 ] = - ( xx [ 9 ] * ( xx [ 14 ] * xx [ 8 ] - xx [ 15 ] * xx [ 13 ] ) ) ; xx
[ 52 ] = xx [ 35 ] - ( xx [ 5 ] * xx [ 15 ] + xx [ 6 ] * xx [ 14 ] ) * xx [ 9
] ; xx [ 53 ] = - ( ( xx [ 14 ] * xx [ 13 ] + xx [ 15 ] * xx [ 8 ] ) * xx [ 9
] ) ; pm_math_Quaternion_xform_ra ( xx + 0 , xx + 51 , xx + 13 ) ; xx [ 0 ] =
0.0 ; xx [ 51 ] = 0.9813587152233355 ; xx [ 52 ] = - 8.90329107482098e-3 ; xx
[ 53 ] = 0.04727447558555155 ; xx [ 54 ] = 0.1860669971310137 ; xx [ 1 ] = xx
[ 4 ] * state [ 10 ] ; xx [ 2 ] = 0.0960996545167382 ; xx [ 3 ] = sin ( xx [
1 ] ) ; xx [ 5 ] = 1.177948454025794e-4 ; xx [ 6 ] = 0.9953717107322962 ; xx
[ 55 ] = cos ( xx [ 1 ] ) ; xx [ 56 ] = - ( xx [ 2 ] * xx [ 3 ] ) ; xx [ 57 ]
= xx [ 5 ] * xx [ 3 ] ; xx [ 58 ] = xx [ 6 ] * xx [ 3 ] ;
pm_math_Quaternion_compose_ra ( xx + 51 , xx + 55 , xx + 59 ) ; xx [ 51 ] =
motionData [ 42 ] ; xx [ 52 ] = motionData [ 43 ] ; xx [ 53 ] = motionData [
44 ] ; xx [ 54 ] = motionData [ 45 ] ; pm_math_Quaternion_compose_ra ( xx +
59 , xx + 51 , xx + 55 ) ; xx [ 63 ] = - xx [ 2 ] ; xx [ 64 ] = xx [ 5 ] ; xx
[ 65 ] = xx [ 6 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 51 , xx + 63 ,
xx + 66 ) ; xx [ 51 ] = 0.05448810068449638 ; xx [ 52 ] =
9.016809746371062e-8 ; xx [ 53 ] = - 1.197569081478675e-6 ;
pm_math_Vector3_cross_ra ( xx + 66 , xx + 51 , xx + 69 ) ;
pm_math_Quaternion_xform_ra ( xx + 55 , xx + 69 , xx + 66 ) ; xx [ 54 ] =
motionData [ 46 ] ; xx [ 55 ] = motionData [ 47 ] ; xx [ 56 ] = motionData [
48 ] ; pm_math_Vector3_cross_ra ( xx + 63 , xx + 54 , xx + 69 ) ;
pm_math_Quaternion_xform_ra ( xx + 59 , xx + 69 , xx + 54 ) ; xx [ 69 ] = -
2.298050364265303e-6 ; xx [ 70 ] = 0.02367056868070961 ; xx [ 71 ] = -
3.023104627104057e-6 ; pm_math_Quaternion_xform_ra ( xx + 59 , xx + 69 , xx +
72 ) ; xx [ 57 ] = motionData [ 35 ] ; xx [ 58 ] = motionData [ 36 ] ; xx [
59 ] = motionData [ 37 ] ; xx [ 60 ] = motionData [ 38 ] ; xx [ 75 ] =
0.9988422572316213 ; xx [ 76 ] = - 6.00792342022948e-5 ; xx [ 77 ] = -
0.04810551968680427 ; xx [ 78 ] = 2.312115552059532e-5 ; xx [ 79 ] = state [
12 ] ; xx [ 80 ] = state [ 13 ] ; xx [ 81 ] = state [ 14 ] ; xx [ 82 ] =
state [ 15 ] ; xx [ 83 ] = - 0.9999999999996456 ; xx [ 84 ] =
1.335114243000915e-9 ; xx [ 85 ] = 1.564242624680818e-7 ; xx [ 86 ] = -
8.27384461422298e-7 ; pm_math_Quaternion_composeInverse_ra ( xx + 79 , xx +
83 , xx + 87 ) ; pm_math_Quaternion_compose_ra ( xx + 75 , xx + 87 , xx + 79
) ; pm_math_Quaternion_compose_ra ( xx + 57 , xx + 79 , xx + 87 ) ; xx [ 91 ]
= - 2.009909055578571e-12 ; xx [ 92 ] = 1.214615603282308e-6 ; xx [ 93 ] =
2.881763323693879e-12 ; pm_math_Quaternion_xform_ra ( xx + 87 , xx + 91 , xx
+ 94 ) ; xx [ 97 ] = 2.009909055578572e-12 ; xx [ 98 ] = -
1.21461560328232e-6 ; xx [ 99 ] = - 2.881763259213495e-12 ;
pm_math_Quaternion_xform_ra ( xx + 79 , xx + 97 , xx + 100 ) ;
pm_math_Quaternion_xform_ra ( xx + 57 , xx + 100 , xx + 103 ) ; xx [ 100 ] =
- 1.197569081236243e-6 ; xx [ 101 ] = - 1.474914827216787e-10 ; xx [ 102 ] =
- 0.05448810068457099 ; pm_math_Quaternion_xform_ra ( xx + 87 , xx + 100 , xx
+ 106 ) ; xx [ 109 ] = 1.231982419222245e-6 ; xx [ 110 ] = -
1.462051776775044e-10 ; xx [ 111 ] = - 0.05551189931542364 ;
pm_math_Quaternion_xform_ra ( xx + 79 , xx + 109 , xx + 112 ) ;
pm_math_Quaternion_xform_ra ( xx + 57 , xx + 112 , xx + 115 ) ; xx [ 112 ] =
- 9.016810066118371e-8 ; xx [ 113 ] = 0.05448810068412172 ; xx [ 114 ] = -
1.455097835249509e-10 ; pm_math_Quaternion_xform_ra ( xx + 87 , xx + 112 , xx
+ 118 ) ; xx [ 87 ] = - 9.18564808057805e-8 ; xx [ 88 ] = 0.05551189931573034
; xx [ 89 ] = - 1.482438229960606e-10 ; pm_math_Quaternion_xform_ra ( xx + 79
, xx + 87 , xx + 121 ) ; pm_math_Quaternion_xform_ra ( xx + 57 , xx + 121 ,
xx + 79 ) ; xx [ 1 ] = xx [ 18 ] * xx [ 21 ] ; xx [ 3 ] = 0.07930000000000012
; xx [ 8 ] = 0.02990000000000002 ; xx [ 16 ] = 0.1049999999999999 ; xx [ 57 ]
= - xx [ 3 ] ; xx [ 58 ] = - xx [ 8 ] ; xx [ 59 ] = - xx [ 16 ] ;
pm_math_Vector3_cross_ra ( xx + 24 , xx + 57 , xx + 60 ) ;
pm_math_Quaternion_xform_ra ( xx + 18 , xx + 60 , xx + 23 ) ; xx [ 60 ] = - (
xx [ 16 ] * xx [ 10 ] ) ; xx [ 61 ] = xx [ 16 ] * xx [ 22 ] ; xx [ 62 ] = xx
[ 3 ] * xx [ 10 ] - xx [ 8 ] * xx [ 22 ] ; pm_math_Quaternion_xform_ra ( xx +
18 , xx + 60 , xx + 121 ) ; xx [ 10 ] = xx [ 3 ] * xx [ 21 ] ; xx [ 17 ] = xx
[ 3 ] * xx [ 19 ] + xx [ 8 ] * xx [ 20 ] ; xx [ 60 ] = xx [ 10 ] ; xx [ 61 ]
= xx [ 8 ] * xx [ 21 ] ; xx [ 62 ] = - xx [ 17 ] ; pm_math_Vector3_cross_ra (
xx + 19 , xx + 60 , xx + 124 ) ; xx [ 19 ] = - 0.9813501000307463 ; xx [ 20 ]
= - 9.021345794401411e-3 ; xx [ 21 ] = - 0.04725208941316491 ; xx [ 22 ] =
0.1861124298261472 ; xx [ 26 ] = xx [ 4 ] * state [ 19 ] ; xx [ 60 ] = sin (
xx [ 26 ] ) ; xx [ 127 ] = cos ( xx [ 26 ] ) ; xx [ 128 ] = - ( xx [ 2 ] * xx
[ 60 ] ) ; xx [ 129 ] = xx [ 5 ] * xx [ 60 ] ; xx [ 130 ] = xx [ 6 ] * xx [
60 ] ; pm_math_Quaternion_compose_ra ( xx + 19 , xx + 127 , xx + 131 ) ; xx [
19 ] = motionData [ 56 ] ; xx [ 20 ] = motionData [ 57 ] ; xx [ 21 ] =
motionData [ 58 ] ; xx [ 22 ] = motionData [ 59 ] ;
pm_math_Quaternion_compose_ra ( xx + 131 , xx + 19 , xx + 127 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 19 , xx + 63 , xx + 60 ) ;
pm_math_Vector3_cross_ra ( xx + 60 , xx + 51 , xx + 19 ) ;
pm_math_Quaternion_xform_ra ( xx + 127 , xx + 19 , xx + 60 ) ; xx [ 19 ] =
motionData [ 60 ] ; xx [ 20 ] = motionData [ 61 ] ; xx [ 21 ] = motionData [
62 ] ; pm_math_Vector3_cross_ra ( xx + 63 , xx + 19 , xx + 127 ) ;
pm_math_Quaternion_xform_ra ( xx + 131 , xx + 127 , xx + 19 ) ;
pm_math_Quaternion_xform_ra ( xx + 131 , xx + 69 , xx + 127 ) ; xx [ 130 ] =
motionData [ 49 ] ; xx [ 131 ] = motionData [ 50 ] ; xx [ 132 ] = motionData
[ 51 ] ; xx [ 133 ] = motionData [ 52 ] ; xx [ 134 ] = state [ 21 ] ; xx [
135 ] = state [ 22 ] ; xx [ 136 ] = state [ 23 ] ; xx [ 137 ] = state [ 24 ]
; pm_math_Quaternion_composeInverse_ra ( xx + 134 , xx + 83 , xx + 138 ) ;
pm_math_Quaternion_compose_ra ( xx + 75 , xx + 138 , xx + 134 ) ;
pm_math_Quaternion_compose_ra ( xx + 130 , xx + 134 , xx + 138 ) ;
pm_math_Quaternion_xform_ra ( xx + 138 , xx + 91 , xx + 142 ) ;
pm_math_Quaternion_xform_ra ( xx + 134 , xx + 97 , xx + 145 ) ;
pm_math_Quaternion_xform_ra ( xx + 130 , xx + 145 , xx + 148 ) ;
pm_math_Quaternion_xform_ra ( xx + 138 , xx + 100 , xx + 145 ) ;
pm_math_Quaternion_xform_ra ( xx + 134 , xx + 109 , xx + 151 ) ;
pm_math_Quaternion_xform_ra ( xx + 130 , xx + 151 , xx + 154 ) ;
pm_math_Quaternion_xform_ra ( xx + 138 , xx + 112 , xx + 151 ) ;
pm_math_Quaternion_xform_ra ( xx + 134 , xx + 87 , xx + 138 ) ;
pm_math_Quaternion_xform_ra ( xx + 130 , xx + 138 , xx + 134 ) ; xx [ 130 ] =
motionData [ 63 ] ; xx [ 131 ] = motionData [ 64 ] ; xx [ 132 ] = motionData
[ 65 ] ; xx [ 133 ] = motionData [ 66 ] ; xx [ 22 ] = xx [ 4 ] * state [ 28 ]
; xx [ 26 ] = sin ( xx [ 22 ] ) ; xx [ 82 ] = xx [ 4 ] * state [ 29 ] ; xx [
90 ] = sin ( xx [ 82 ] ) ; xx [ 137 ] = xx [ 26 ] * xx [ 90 ] ; xx [ 138 ] =
xx [ 4 ] * state [ 30 ] ; xx [ 139 ] = sin ( xx [ 138 ] ) ; xx [ 140 ] = cos
( xx [ 138 ] ) ; xx [ 138 ] = cos ( xx [ 22 ] ) ; xx [ 22 ] = cos ( xx [ 82 ]
) ; xx [ 82 ] = xx [ 138 ] * xx [ 22 ] ; xx [ 141 ] = xx [ 137 ] * xx [ 139 ]
- xx [ 140 ] * xx [ 82 ] ; xx [ 157 ] = xx [ 22 ] * xx [ 26 ] ; xx [ 22 ] =
xx [ 138 ] * xx [ 90 ] ; xx [ 26 ] = xx [ 140 ] * xx [ 157 ] + xx [ 22 ] * xx
[ 139 ] ; xx [ 90 ] = xx [ 157 ] * xx [ 139 ] - xx [ 140 ] * xx [ 22 ] ; xx [
22 ] = xx [ 82 ] * xx [ 139 ] + xx [ 140 ] * xx [ 137 ] ; xx [ 157 ] = xx [
141 ] ; xx [ 158 ] = - xx [ 26 ] ; xx [ 159 ] = xx [ 90 ] ; xx [ 160 ] = - xx
[ 22 ] ; pm_math_Quaternion_compose_ra ( xx + 130 , xx + 157 , xx + 161 ) ;
xx [ 82 ] = xx [ 7 ] - ( xx [ 90 ] * xx [ 90 ] + xx [ 22 ] * xx [ 22 ] ) * xx
[ 9 ] ; xx [ 137 ] = xx [ 9 ] * ( xx [ 22 ] * xx [ 141 ] - xx [ 26 ] * xx [
90 ] ) ; xx [ 138 ] = xx [ 90 ] * xx [ 141 ] + xx [ 26 ] * xx [ 22 ] ; xx [
165 ] = xx [ 82 ] ; xx [ 166 ] = xx [ 137 ] ; xx [ 167 ] = xx [ 138 ] * xx [
9 ] ; pm_math_Vector3_cross_ra ( xx + 165 , xx + 30 , xx + 168 ) ;
pm_math_Quaternion_xform_ra ( xx + 161 , xx + 168 , xx + 171 ) ; xx [ 168 ] =
- ( xx [ 33 ] * xx [ 137 ] ) ; xx [ 169 ] = xx [ 33 ] * xx [ 82 ] - xx [ 138
] * xx [ 34 ] ; xx [ 170 ] = xx [ 35 ] * xx [ 137 ] ;
pm_math_Quaternion_xform_ra ( xx + 157 , xx + 168 , xx + 174 ) ; xx [ 168 ] =
- xx [ 174 ] ; xx [ 169 ] = - xx [ 175 ] ; xx [ 170 ] = - xx [ 176 ] ;
pm_math_Quaternion_xform_ra ( xx + 130 , xx + 168 , xx + 174 ) ; xx [ 82 ] =
xx [ 7 ] - xx [ 9 ] * xx [ 139 ] * xx [ 139 ] ; xx [ 137 ] = xx [ 9 ] * xx [
140 ] * xx [ 139 ] ; xx [ 138 ] = - ( xx [ 29 ] * xx [ 82 ] ) ; xx [ 139 ] =
xx [ 29 ] * xx [ 137 ] ; xx [ 140 ] = xx [ 28 ] * xx [ 137 ] + xx [ 27 ] * xx
[ 82 ] ; pm_math_Quaternion_xform_ra ( xx + 161 , xx + 138 , xx + 168 ) ; xx
[ 138 ] = - ( xx [ 33 ] * xx [ 82 ] ) ; xx [ 139 ] = xx [ 33 ] * xx [ 137 ] ;
xx [ 140 ] = xx [ 35 ] * xx [ 82 ] ; pm_math_Quaternion_xform_ra ( xx + 157 ,
xx + 138 , xx + 177 ) ; xx [ 138 ] = - xx [ 177 ] ; xx [ 139 ] = - xx [ 178 ]
; xx [ 140 ] = - xx [ 179 ] ; pm_math_Quaternion_xform_ra ( xx + 130 , xx +
138 , xx + 157 ) ; xx [ 138 ] = xx [ 27 ] * xx [ 164 ] ; xx [ 139 ] = xx [ 28
] * xx [ 163 ] - xx [ 27 ] * xx [ 162 ] ; xx [ 177 ] = xx [ 138 ] ; xx [ 178
] = - ( xx [ 28 ] * xx [ 164 ] ) ; xx [ 179 ] = xx [ 139 ] ;
pm_math_Vector3_cross_ra ( xx + 162 , xx + 177 , xx + 180 ) ; xx [ 140 ] = xx
[ 26 ] * xx [ 35 ] ; xx [ 160 ] = xx [ 22 ] * xx [ 35 ] ; xx [ 177 ] = - ( xx
[ 9 ] * ( xx [ 140 ] * xx [ 90 ] - xx [ 160 ] * xx [ 141 ] ) ) ; xx [ 178 ] =
xx [ 35 ] - ( xx [ 22 ] * xx [ 160 ] + xx [ 26 ] * xx [ 140 ] ) * xx [ 9 ] ;
xx [ 179 ] = - ( ( xx [ 140 ] * xx [ 141 ] + xx [ 160 ] * xx [ 90 ] ) * xx [
9 ] ) ; pm_math_Quaternion_xform_ra ( xx + 130 , xx + 177 , xx + 183 ) ; xx [
130 ] = 0.651818103933012 ; xx [ 131 ] = 0.03648925127026437 ; xx [ 132 ] =
0.031347714040858 ; xx [ 133 ] = - 0.7568480790431602 ; xx [ 22 ] = xx [ 4 ]
* state [ 38 ] ; xx [ 26 ] = sin ( xx [ 22 ] ) ; xx [ 186 ] = cos ( xx [ 22 ]
) ; xx [ 187 ] = - ( xx [ 2 ] * xx [ 26 ] ) ; xx [ 188 ] = xx [ 5 ] * xx [ 26
] ; xx [ 189 ] = xx [ 6 ] * xx [ 26 ] ; pm_math_Quaternion_compose_ra ( xx +
130 , xx + 186 , xx + 190 ) ; xx [ 130 ] = motionData [ 98 ] ; xx [ 131 ] =
motionData [ 99 ] ; xx [ 132 ] = motionData [ 100 ] ; xx [ 133 ] = motionData
[ 101 ] ; pm_math_Quaternion_compose_ra ( xx + 190 , xx + 130 , xx + 186 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 130 , xx + 63 , xx + 177 ) ;
pm_math_Vector3_cross_ra ( xx + 177 , xx + 51 , xx + 130 ) ;
pm_math_Quaternion_xform_ra ( xx + 186 , xx + 130 , xx + 177 ) ; xx [ 130 ] =
motionData [ 102 ] ; xx [ 131 ] = motionData [ 103 ] ; xx [ 132 ] =
motionData [ 104 ] ; pm_math_Vector3_cross_ra ( xx + 63 , xx + 130 , xx + 186
) ; pm_math_Quaternion_xform_ra ( xx + 190 , xx + 186 , xx + 130 ) ;
pm_math_Quaternion_xform_ra ( xx + 190 , xx + 69 , xx + 186 ) ; xx [ 189 ] =
motionData [ 91 ] ; xx [ 190 ] = motionData [ 92 ] ; xx [ 191 ] = motionData
[ 93 ] ; xx [ 192 ] = motionData [ 94 ] ; xx [ 193 ] = state [ 40 ] ; xx [
194 ] = state [ 41 ] ; xx [ 195 ] = state [ 42 ] ; xx [ 196 ] = state [ 43 ]
; pm_math_Quaternion_composeInverse_ra ( xx + 193 , xx + 83 , xx + 197 ) ;
pm_math_Quaternion_compose_ra ( xx + 75 , xx + 197 , xx + 193 ) ;
pm_math_Quaternion_compose_ra ( xx + 189 , xx + 193 , xx + 197 ) ;
pm_math_Quaternion_xform_ra ( xx + 197 , xx + 91 , xx + 201 ) ;
pm_math_Quaternion_xform_ra ( xx + 193 , xx + 97 , xx + 204 ) ;
pm_math_Quaternion_xform_ra ( xx + 189 , xx + 204 , xx + 207 ) ;
pm_math_Quaternion_xform_ra ( xx + 197 , xx + 100 , xx + 204 ) ;
pm_math_Quaternion_xform_ra ( xx + 193 , xx + 109 , xx + 210 ) ;
pm_math_Quaternion_xform_ra ( xx + 189 , xx + 210 , xx + 213 ) ;
pm_math_Quaternion_xform_ra ( xx + 197 , xx + 112 , xx + 210 ) ;
pm_math_Quaternion_xform_ra ( xx + 193 , xx + 87 , xx + 197 ) ;
pm_math_Quaternion_xform_ra ( xx + 189 , xx + 197 , xx + 193 ) ; xx [ 22 ] =
xx [ 161 ] * xx [ 164 ] ; pm_math_Vector3_cross_ra ( xx + 165 , xx + 57 , xx
+ 189 ) ; pm_math_Quaternion_xform_ra ( xx + 161 , xx + 189 , xx + 165 ) ; xx
[ 189 ] = - ( xx [ 16 ] * xx [ 82 ] ) ; xx [ 190 ] = xx [ 16 ] * xx [ 137 ] ;
xx [ 191 ] = xx [ 3 ] * xx [ 82 ] - xx [ 8 ] * xx [ 137 ] ;
pm_math_Quaternion_xform_ra ( xx + 161 , xx + 189 , xx + 196 ) ; xx [ 26 ] =
xx [ 3 ] * xx [ 164 ] ; xx [ 82 ] = xx [ 3 ] * xx [ 162 ] + xx [ 8 ] * xx [
163 ] ; xx [ 189 ] = xx [ 26 ] ; xx [ 190 ] = xx [ 8 ] * xx [ 164 ] ; xx [
191 ] = - xx [ 82 ] ; pm_math_Vector3_cross_ra ( xx + 162 , xx + 189 , xx +
216 ) ; xx [ 189 ] = - 0.3294969578258811 ; xx [ 190 ] = -
0.04543218271089525 ; xx [ 191 ] = - 0.01581333007230693 ; xx [ 192 ] =
0.9429303315460998 ; xx [ 90 ] = xx [ 4 ] * state [ 47 ] ; xx [ 133 ] = sin (
xx [ 90 ] ) ; xx [ 219 ] = cos ( xx [ 90 ] ) ; xx [ 220 ] = - ( xx [ 2 ] * xx
[ 133 ] ) ; xx [ 221 ] = xx [ 5 ] * xx [ 133 ] ; xx [ 222 ] = xx [ 6 ] * xx [
133 ] ; pm_math_Quaternion_compose_ra ( xx + 189 , xx + 219 , xx + 223 ) ; xx
[ 189 ] = motionData [ 112 ] ; xx [ 190 ] = motionData [ 113 ] ; xx [ 191 ] =
motionData [ 114 ] ; xx [ 192 ] = motionData [ 115 ] ;
pm_math_Quaternion_compose_ra ( xx + 223 , xx + 189 , xx + 219 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 189 , xx + 63 , xx + 162 ) ;
pm_math_Vector3_cross_ra ( xx + 162 , xx + 51 , xx + 189 ) ;
pm_math_Quaternion_xform_ra ( xx + 219 , xx + 189 , xx + 162 ) ; xx [ 189 ] =
motionData [ 116 ] ; xx [ 190 ] = motionData [ 117 ] ; xx [ 191 ] =
motionData [ 118 ] ; pm_math_Vector3_cross_ra ( xx + 63 , xx + 189 , xx + 219
) ; pm_math_Quaternion_xform_ra ( xx + 223 , xx + 219 , xx + 189 ) ;
pm_math_Quaternion_xform_ra ( xx + 223 , xx + 69 , xx + 219 ) ; xx [ 222 ] =
motionData [ 105 ] ; xx [ 223 ] = motionData [ 106 ] ; xx [ 224 ] =
motionData [ 107 ] ; xx [ 225 ] = motionData [ 108 ] ; xx [ 226 ] = state [
49 ] ; xx [ 227 ] = state [ 50 ] ; xx [ 228 ] = state [ 51 ] ; xx [ 229 ] =
state [ 52 ] ; pm_math_Quaternion_composeInverse_ra ( xx + 226 , xx + 83 , xx
+ 230 ) ; pm_math_Quaternion_compose_ra ( xx + 75 , xx + 230 , xx + 226 ) ;
pm_math_Quaternion_compose_ra ( xx + 222 , xx + 226 , xx + 230 ) ;
pm_math_Quaternion_xform_ra ( xx + 230 , xx + 91 , xx + 234 ) ;
pm_math_Quaternion_xform_ra ( xx + 226 , xx + 97 , xx + 237 ) ;
pm_math_Quaternion_xform_ra ( xx + 222 , xx + 237 , xx + 240 ) ;
pm_math_Quaternion_xform_ra ( xx + 230 , xx + 100 , xx + 237 ) ;
pm_math_Quaternion_xform_ra ( xx + 226 , xx + 109 , xx + 243 ) ;
pm_math_Quaternion_xform_ra ( xx + 222 , xx + 243 , xx + 246 ) ;
pm_math_Quaternion_xform_ra ( xx + 230 , xx + 112 , xx + 243 ) ;
pm_math_Quaternion_xform_ra ( xx + 226 , xx + 87 , xx + 230 ) ;
pm_math_Quaternion_xform_ra ( xx + 222 , xx + 230 , xx + 226 ) ; xx [ 222 ] =
motionData [ 119 ] ; xx [ 223 ] = motionData [ 120 ] ; xx [ 224 ] =
motionData [ 121 ] ; xx [ 225 ] = motionData [ 122 ] ; xx [ 90 ] = xx [ 4 ] *
state [ 56 ] ; xx [ 133 ] = sin ( xx [ 90 ] ) ; xx [ 137 ] = xx [ 4 ] * state
[ 57 ] ; xx [ 140 ] = sin ( xx [ 137 ] ) ; xx [ 141 ] = xx [ 133 ] * xx [ 140
] ; xx [ 160 ] = xx [ 4 ] * state [ 58 ] ; xx [ 192 ] = sin ( xx [ 160 ] ) ;
xx [ 199 ] = cos ( xx [ 160 ] ) ; xx [ 160 ] = cos ( xx [ 90 ] ) ; xx [ 90 ]
= cos ( xx [ 137 ] ) ; xx [ 137 ] = xx [ 160 ] * xx [ 90 ] ; xx [ 200 ] = xx
[ 141 ] * xx [ 192 ] - xx [ 199 ] * xx [ 137 ] ; xx [ 229 ] = xx [ 90 ] * xx
[ 133 ] ; xx [ 90 ] = xx [ 160 ] * xx [ 140 ] ; xx [ 133 ] = xx [ 199 ] * xx
[ 229 ] + xx [ 90 ] * xx [ 192 ] ; xx [ 140 ] = xx [ 229 ] * xx [ 192 ] - xx
[ 199 ] * xx [ 90 ] ; xx [ 90 ] = xx [ 137 ] * xx [ 192 ] + xx [ 199 ] * xx [
141 ] ; xx [ 229 ] = xx [ 200 ] ; xx [ 230 ] = - xx [ 133 ] ; xx [ 231 ] = xx
[ 140 ] ; xx [ 232 ] = - xx [ 90 ] ; pm_math_Quaternion_compose_ra ( xx + 222
, xx + 229 , xx + 249 ) ; xx [ 137 ] = xx [ 7 ] - ( xx [ 140 ] * xx [ 140 ] +
xx [ 90 ] * xx [ 90 ] ) * xx [ 9 ] ; xx [ 141 ] = xx [ 9 ] * ( xx [ 90 ] * xx
[ 200 ] - xx [ 133 ] * xx [ 140 ] ) ; xx [ 160 ] = xx [ 140 ] * xx [ 200 ] +
xx [ 133 ] * xx [ 90 ] ; xx [ 253 ] = xx [ 137 ] ; xx [ 254 ] = xx [ 141 ] ;
xx [ 255 ] = xx [ 160 ] * xx [ 9 ] ; pm_math_Vector3_cross_ra ( xx + 253 , xx
+ 30 , xx + 256 ) ; pm_math_Quaternion_xform_ra ( xx + 249 , xx + 256 , xx +
30 ) ; xx [ 256 ] = - ( xx [ 33 ] * xx [ 141 ] ) ; xx [ 257 ] = xx [ 33 ] *
xx [ 137 ] - xx [ 160 ] * xx [ 34 ] ; xx [ 258 ] = xx [ 35 ] * xx [ 141 ] ;
pm_math_Quaternion_xform_ra ( xx + 229 , xx + 256 , xx + 259 ) ; xx [ 256 ] =
- xx [ 259 ] ; xx [ 257 ] = - xx [ 260 ] ; xx [ 258 ] = - xx [ 261 ] ;
pm_math_Quaternion_xform_ra ( xx + 222 , xx + 256 , xx + 259 ) ; xx [ 34 ] =
xx [ 7 ] - xx [ 9 ] * xx [ 192 ] * xx [ 192 ] ; xx [ 137 ] = xx [ 9 ] * xx [
199 ] * xx [ 192 ] ; xx [ 256 ] = - ( xx [ 29 ] * xx [ 34 ] ) ; xx [ 257 ] =
xx [ 29 ] * xx [ 137 ] ; xx [ 258 ] = xx [ 28 ] * xx [ 137 ] + xx [ 27 ] * xx
[ 34 ] ; pm_math_Quaternion_xform_ra ( xx + 249 , xx + 256 , xx + 262 ) ; xx
[ 256 ] = - ( xx [ 33 ] * xx [ 34 ] ) ; xx [ 257 ] = xx [ 33 ] * xx [ 137 ] ;
xx [ 258 ] = xx [ 35 ] * xx [ 34 ] ; pm_math_Quaternion_xform_ra ( xx + 229 ,
xx + 256 , xx + 265 ) ; xx [ 229 ] = - xx [ 265 ] ; xx [ 230 ] = - xx [ 266 ]
; xx [ 231 ] = - xx [ 267 ] ; pm_math_Quaternion_xform_ra ( xx + 222 , xx +
229 , xx + 256 ) ; xx [ 29 ] = xx [ 27 ] * xx [ 252 ] ; xx [ 33 ] = xx [ 28 ]
* xx [ 251 ] - xx [ 27 ] * xx [ 250 ] ; xx [ 229 ] = xx [ 29 ] ; xx [ 230 ] =
- ( xx [ 28 ] * xx [ 252 ] ) ; xx [ 231 ] = xx [ 33 ] ;
pm_math_Vector3_cross_ra ( xx + 250 , xx + 229 , xx + 265 ) ; xx [ 141 ] = xx
[ 133 ] * xx [ 35 ] ; xx [ 160 ] = xx [ 90 ] * xx [ 35 ] ; xx [ 229 ] = - (
xx [ 9 ] * ( xx [ 141 ] * xx [ 140 ] - xx [ 160 ] * xx [ 200 ] ) ) ; xx [ 230
] = xx [ 35 ] - ( xx [ 90 ] * xx [ 160 ] + xx [ 133 ] * xx [ 141 ] ) * xx [ 9
] ; xx [ 231 ] = - ( ( xx [ 141 ] * xx [ 200 ] + xx [ 160 ] * xx [ 140 ] ) *
xx [ 9 ] ) ; pm_math_Quaternion_xform_ra ( xx + 222 , xx + 229 , xx + 268 ) ;
xx [ 222 ] = - 0.3295406112903234 ; xx [ 223 ] = 0.04539254234508536 ; xx [
224 ] = - 0.01592676154469353 ; xx [ 225 ] = - 0.942915076174174 ; xx [ 35 ]
= xx [ 4 ] * state [ 66 ] ; xx [ 90 ] = sin ( xx [ 35 ] ) ; xx [ 229 ] = cos
( xx [ 35 ] ) ; xx [ 230 ] = - ( xx [ 2 ] * xx [ 90 ] ) ; xx [ 231 ] = xx [ 5
] * xx [ 90 ] ; xx [ 232 ] = xx [ 6 ] * xx [ 90 ] ;
pm_math_Quaternion_compose_ra ( xx + 222 , xx + 229 , xx + 271 ) ; xx [ 222 ]
= motionData [ 154 ] ; xx [ 223 ] = motionData [ 155 ] ; xx [ 224 ] =
motionData [ 156 ] ; xx [ 225 ] = motionData [ 157 ] ;
pm_math_Quaternion_compose_ra ( xx + 271 , xx + 222 , xx + 229 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 222 , xx + 63 , xx + 275 ) ;
pm_math_Vector3_cross_ra ( xx + 275 , xx + 51 , xx + 222 ) ;
pm_math_Quaternion_xform_ra ( xx + 229 , xx + 222 , xx + 275 ) ; xx [ 222 ] =
motionData [ 158 ] ; xx [ 223 ] = motionData [ 159 ] ; xx [ 224 ] =
motionData [ 160 ] ; pm_math_Vector3_cross_ra ( xx + 63 , xx + 222 , xx + 229
) ; pm_math_Quaternion_xform_ra ( xx + 271 , xx + 229 , xx + 222 ) ;
pm_math_Quaternion_xform_ra ( xx + 271 , xx + 69 , xx + 229 ) ; xx [ 271 ] =
motionData [ 147 ] ; xx [ 272 ] = motionData [ 148 ] ; xx [ 273 ] =
motionData [ 149 ] ; xx [ 274 ] = motionData [ 150 ] ; xx [ 278 ] = state [
68 ] ; xx [ 279 ] = state [ 69 ] ; xx [ 280 ] = state [ 70 ] ; xx [ 281 ] =
state [ 71 ] ; pm_math_Quaternion_composeInverse_ra ( xx + 278 , xx + 83 , xx
+ 282 ) ; pm_math_Quaternion_compose_ra ( xx + 75 , xx + 282 , xx + 278 ) ;
pm_math_Quaternion_compose_ra ( xx + 271 , xx + 278 , xx + 282 ) ;
pm_math_Quaternion_xform_ra ( xx + 282 , xx + 91 , xx + 286 ) ;
pm_math_Quaternion_xform_ra ( xx + 278 , xx + 97 , xx + 289 ) ;
pm_math_Quaternion_xform_ra ( xx + 271 , xx + 289 , xx + 292 ) ;
pm_math_Quaternion_xform_ra ( xx + 282 , xx + 100 , xx + 289 ) ;
pm_math_Quaternion_xform_ra ( xx + 278 , xx + 109 , xx + 295 ) ;
pm_math_Quaternion_xform_ra ( xx + 271 , xx + 295 , xx + 298 ) ;
pm_math_Quaternion_xform_ra ( xx + 282 , xx + 112 , xx + 295 ) ;
pm_math_Quaternion_xform_ra ( xx + 278 , xx + 87 , xx + 282 ) ;
pm_math_Quaternion_xform_ra ( xx + 271 , xx + 282 , xx + 278 ) ; xx [ 35 ] =
xx [ 249 ] * xx [ 252 ] ; pm_math_Vector3_cross_ra ( xx + 253 , xx + 57 , xx
+ 271 ) ; pm_math_Quaternion_xform_ra ( xx + 249 , xx + 271 , xx + 57 ) ; xx
[ 253 ] = - ( xx [ 16 ] * xx [ 34 ] ) ; xx [ 254 ] = xx [ 16 ] * xx [ 137 ] ;
xx [ 255 ] = xx [ 3 ] * xx [ 34 ] - xx [ 8 ] * xx [ 137 ] ;
pm_math_Quaternion_xform_ra ( xx + 249 , xx + 253 , xx + 271 ) ; xx [ 16 ] =
xx [ 3 ] * xx [ 252 ] ; xx [ 34 ] = xx [ 3 ] * xx [ 250 ] + xx [ 8 ] * xx [
251 ] ; xx [ 253 ] = xx [ 16 ] ; xx [ 254 ] = xx [ 8 ] * xx [ 252 ] ; xx [
255 ] = - xx [ 34 ] ; pm_math_Vector3_cross_ra ( xx + 250 , xx + 253 , xx +
281 ) ; xx [ 250 ] = 0.651853142204865 ; xx [ 251 ] = - 0.03641083691649384 ;
xx [ 252 ] = 0.03143875934085798 ; xx [ 253 ] = 0.7568179017199528 ; xx [ 90
] = xx [ 4 ] * state [ 75 ] ; xx [ 133 ] = sin ( xx [ 90 ] ) ; xx [ 301 ] =
cos ( xx [ 90 ] ) ; xx [ 302 ] = - ( xx [ 2 ] * xx [ 133 ] ) ; xx [ 303 ] =
xx [ 5 ] * xx [ 133 ] ; xx [ 304 ] = xx [ 6 ] * xx [ 133 ] ;
pm_math_Quaternion_compose_ra ( xx + 250 , xx + 301 , xx + 305 ) ; xx [ 250 ]
= motionData [ 168 ] ; xx [ 251 ] = motionData [ 169 ] ; xx [ 252 ] =
motionData [ 170 ] ; xx [ 253 ] = motionData [ 171 ] ;
pm_math_Quaternion_compose_ra ( xx + 305 , xx + 250 , xx + 301 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 250 , xx + 63 , xx + 309 ) ;
pm_math_Vector3_cross_ra ( xx + 309 , xx + 51 , xx + 250 ) ;
pm_math_Quaternion_xform_ra ( xx + 301 , xx + 250 , xx + 51 ) ; xx [ 250 ] =
motionData [ 172 ] ; xx [ 251 ] = motionData [ 173 ] ; xx [ 252 ] =
motionData [ 174 ] ; pm_math_Vector3_cross_ra ( xx + 63 , xx + 250 , xx + 253
) ; pm_math_Quaternion_xform_ra ( xx + 305 , xx + 253 , xx + 63 ) ;
pm_math_Quaternion_xform_ra ( xx + 305 , xx + 69 , xx + 250 ) ; xx [ 301 ] =
motionData [ 161 ] ; xx [ 302 ] = motionData [ 162 ] ; xx [ 303 ] =
motionData [ 163 ] ; xx [ 304 ] = motionData [ 164 ] ; xx [ 305 ] = state [
77 ] ; xx [ 306 ] = state [ 78 ] ; xx [ 307 ] = state [ 79 ] ; xx [ 308 ] =
state [ 80 ] ; pm_math_Quaternion_composeInverse_ra ( xx + 305 , xx + 83 , xx
+ 309 ) ; pm_math_Quaternion_compose_ra ( xx + 75 , xx + 309 , xx + 83 ) ;
pm_math_Quaternion_compose_ra ( xx + 301 , xx + 83 , xx + 75 ) ;
pm_math_Quaternion_xform_ra ( xx + 75 , xx + 91 , xx + 69 ) ;
pm_math_Quaternion_xform_ra ( xx + 83 , xx + 97 , xx + 90 ) ;
pm_math_Quaternion_xform_ra ( xx + 301 , xx + 90 , xx + 97 ) ;
pm_math_Quaternion_xform_ra ( xx + 75 , xx + 100 , xx + 90 ) ;
pm_math_Quaternion_xform_ra ( xx + 83 , xx + 109 , xx + 100 ) ;
pm_math_Quaternion_xform_ra ( xx + 301 , xx + 100 , xx + 109 ) ;
pm_math_Quaternion_xform_ra ( xx + 75 , xx + 112 , xx + 100 ) ;
pm_math_Quaternion_xform_ra ( xx + 83 , xx + 87 , xx + 75 ) ;
pm_math_Quaternion_xform_ra ( xx + 301 , xx + 75 , xx + 83 ) ; xx [ 2 ] =
7.427230677621783e-3 ; xx [ 75 ] = motionData [ 22 ] ; xx [ 76 ] = motionData
[ 23 ] ; xx [ 77 ] = motionData [ 24 ] ; xx [ 5 ] = 0.4527250000000002 ; xx [
6 ] = 1.405725 ; xx [ 78 ] = xx [ 6 ] * motionData [ 24 ] + xx [ 5 ] *
motionData [ 22 ] ; xx [ 86 ] = xx [ 6 ] * motionData [ 23 ] ; xx [ 87 ] = -
( xx [ 5 ] * motionData [ 23 ] ) ; xx [ 88 ] = xx [ 78 ] ; xx [ 89 ] = - xx [
86 ] ; pm_math_Vector3_cross_ra ( xx + 75 , xx + 87 , xx + 112 ) ; xx [ 75 ]
= 0.01 ; xx [ 76 ] = xx [ 75 ] * motionData [ 30 ] ; xx [ 77 ] = xx [ 75 ] *
motionData [ 29 ] ; xx [ 87 ] = ( xx [ 112 ] - xx [ 5 ] * motionData [ 21 ] *
motionData [ 23 ] ) * xx [ 9 ] + motionData [ 25 ] + xx [ 6 ] - ( motionData
[ 32 ] - ( xx [ 76 ] * motionData [ 28 ] + xx [ 77 ] * motionData [ 31 ] ) *
xx [ 9 ] ) ; xx [ 88 ] = ( xx [ 78 ] * motionData [ 21 ] + xx [ 113 ] ) * xx
[ 9 ] + motionData [ 26 ] - ( xx [ 9 ] * ( xx [ 77 ] * motionData [ 28 ] - xx
[ 76 ] * motionData [ 31 ] ) + motionData [ 33 ] ) ; xx [ 78 ] = xx [ 9 ] * (
xx [ 114 ] - xx [ 86 ] * motionData [ 21 ] ) + motionData [ 27 ] - xx [ 5 ] -
( motionData [ 34 ] + ( xx [ 77 ] * motionData [ 29 ] + xx [ 76 ] *
motionData [ 30 ] ) * xx [ 9 ] - xx [ 75 ] ) ; xx [ 112 ] = xx [ 87 ] ; xx [
113 ] = xx [ 88 ] ; xx [ 114 ] = xx [ 78 ] ; xx [ 76 ] = motionData [ 30 ] *
motionData [ 30 ] ; xx [ 77 ] = motionData [ 31 ] * motionData [ 31 ] ; xx [
86 ] = xx [ 7 ] - ( xx [ 76 ] + xx [ 77 ] ) * xx [ 9 ] ; xx [ 89 ] =
motionData [ 28 ] * motionData [ 31 ] ; xx [ 93 ] = motionData [ 29 ] *
motionData [ 30 ] ; xx [ 133 ] = motionData [ 29 ] * motionData [ 31 ] ; xx [
137 ] = motionData [ 28 ] * motionData [ 30 ] ; xx [ 140 ] = xx [ 9 ] * ( xx
[ 133 ] - xx [ 137 ] ) ; xx [ 253 ] = xx [ 86 ] ; xx [ 254 ] = ( xx [ 89 ] +
xx [ 93 ] ) * xx [ 9 ] ; xx [ 255 ] = xx [ 140 ] ; xx [ 141 ] =
pm_math_Vector3_dot_ra ( xx + 112 , xx + 253 ) ; xx [ 160 ] = xx [ 4 ] *
state [ 6 ] ; xx [ 192 ] = sin ( xx [ 160 ] ) ; xx [ 199 ] = xx [ 5 ] * xx [
192 ] ; xx [ 200 ] = cos ( xx [ 160 ] ) ; xx [ 160 ] = xx [ 6 ] * xx [ 192 ]
; xx [ 225 ] = 1.405725 ; xx [ 232 ] = xx [ 225 ] * xx [ 192 ] ; xx [ 233 ] =
0.4527250000000003 * xx [ 192 ] ; xx [ 253 ] = 1.110223024625157e-16 ; xx [
254 ] = xx [ 9 ] * ( xx [ 199 ] * xx [ 192 ] - xx [ 200 ] * xx [ 160 ] ) + xx
[ 9 ] * ( xx [ 200 ] * xx [ 232 ] - xx [ 233 ] * xx [ 192 ] ) + xx [ 253 ] ;
xx [ 255 ] = xx [ 9 ] * ( xx [ 93 ] - xx [ 89 ] ) ; xx [ 89 ] = motionData [
28 ] * motionData [ 29 ] ; xx [ 93 ] = motionData [ 30 ] * motionData [ 31 ]
; xx [ 274 ] = ( xx [ 89 ] + xx [ 93 ] ) * xx [ 9 ] ; xx [ 284 ] =
2.220446049250313e-16 ; xx [ 285 ] = xx [ 284 ] - ( ( xx [ 200 ] * xx [ 233 ]
+ xx [ 232 ] * xx [ 192 ] ) * xx [ 9 ] - ( xx [ 200 ] * xx [ 199 ] + xx [ 160
] * xx [ 192 ] ) * xx [ 9 ] ) ; xx [ 160 ] = motionData [ 29 ] * motionData [
29 ] ; xx [ 301 ] = xx [ 255 ] ; xx [ 302 ] = xx [ 7 ] - ( xx [ 77 ] + xx [
160 ] ) * xx [ 9 ] ; xx [ 303 ] = xx [ 274 ] ; xx [ 77 ] =
pm_math_Vector3_dot_ra ( xx + 112 , xx + 301 ) ; xx [ 199 ] = 0.02418025 ; xx
[ 232 ] = xx [ 141 ] * xx [ 141 ] + xx [ 77 ] * xx [ 77 ] ; if ( xx [ 199 ] >
xx [ 232 ] ) xx [ 232 ] = xx [ 199 ] ; xx [ 233 ] = xx [ 232 ] == 0.0 ? 0.0 :
( xx [ 141 ] * ( xx [ 254 ] * xx [ 255 ] + xx [ 274 ] * xx [ 285 ] ) - xx [
77 ] * ( xx [ 254 ] * xx [ 86 ] + xx [ 140 ] * xx [ 285 ] ) ) / xx [ 232 ] ;
xx [ 86 ] = 0.7071067811865476 ; xx [ 140 ] = xx [ 86 ] * motionData [ 23 ] ;
xx [ 255 ] = xx [ 86 ] * motionData [ 24 ] ; xx [ 274 ] = xx [ 140 ] - xx [
255 ] ; xx [ 301 ] = xx [ 255 ] + xx [ 140 ] ; xx [ 140 ] = xx [ 301 ] * xx [
301 ] ; xx [ 255 ] = xx [ 7 ] - ( xx [ 274 ] * xx [ 274 ] + xx [ 140 ] ) * xx
[ 9 ] ; xx [ 302 ] = xx [ 86 ] * motionData [ 21 ] ; xx [ 303 ] = xx [ 86 ] *
motionData [ 22 ] ; xx [ 304 ] = xx [ 302 ] + xx [ 303 ] ; xx [ 305 ] = xx [
304 ] * xx [ 301 ] ; xx [ 306 ] = xx [ 303 ] - xx [ 302 ] ; xx [ 302 ] = xx [
274 ] * xx [ 306 ] ; xx [ 303 ] = xx [ 9 ] * ( xx [ 306 ] * xx [ 301 ] - xx [
274 ] * xx [ 304 ] ) ; xx [ 307 ] = xx [ 255 ] ; xx [ 308 ] = ( xx [ 305 ] +
xx [ 302 ] ) * xx [ 9 ] ; xx [ 309 ] = xx [ 303 ] ; xx [ 310 ] =
pm_math_Vector3_dot_ra ( xx + 112 , xx + 307 ) ; xx [ 307 ] = xx [ 9 ] * ( xx
[ 302 ] - xx [ 305 ] ) ; xx [ 302 ] = ( xx [ 306 ] * xx [ 304 ] + xx [ 274 ]
* xx [ 301 ] ) * xx [ 9 ] ; xx [ 305 ] = xx [ 9 ] * xx [ 192 ] * xx [ 192 ] -
xx [ 7 ] ; xx [ 308 ] = xx [ 9 ] * xx [ 200 ] * xx [ 192 ] ; xx [ 311 ] = xx
[ 307 ] ; xx [ 312 ] = xx [ 7 ] - ( xx [ 140 ] + xx [ 306 ] * xx [ 306 ] ) *
xx [ 9 ] ; xx [ 313 ] = xx [ 302 ] ; xx [ 140 ] = pm_math_Vector3_dot_ra ( xx
+ 112 , xx + 311 ) ; xx [ 192 ] = xx [ 310 ] * xx [ 310 ] + xx [ 140 ] * xx [
140 ] ; if ( xx [ 199 ] > xx [ 192 ] ) xx [ 192 ] = xx [ 199 ] ; xx [ 200 ] =
xx [ 192 ] == 0.0 ? 0.0 : ( xx [ 310 ] * ( xx [ 254 ] * xx [ 307 ] + xx [ 302
] * xx [ 285 ] + xx [ 305 ] * xx [ 87 ] + xx [ 308 ] * xx [ 78 ] ) - xx [ 140
] * ( xx [ 254 ] * xx [ 255 ] + xx [ 303 ] * xx [ 285 ] + xx [ 305 ] * xx [
78 ] - xx [ 308 ] * xx [ 87 ] ) ) / xx [ 192 ] ; xx [ 140 ] = xx [ 4 ] *
state [ 8 ] ; xx [ 192 ] = xx [ 86 ] * sin ( xx [ 140 ] ) ; xx [ 255 ] = xx [
192 ] * xx [ 192 ] ; xx [ 302 ] = xx [ 86 ] * cos ( xx [ 140 ] ) ; xx [ 140 ]
= xx [ 302 ] * xx [ 192 ] ; xx [ 307 ] = ( xx [ 255 ] + xx [ 255 ] ) * xx [ 9
] - xx [ 7 ] ; xx [ 308 ] = xx [ 9 ] * ( xx [ 140 ] - xx [ 140 ] ) ; xx [ 309
] = ( xx [ 140 ] + xx [ 140 ] ) * xx [ 9 ] ; xx [ 192 ] = xx [ 302 ] * xx [
302 ] ; xx [ 310 ] = - ( ( xx [ 140 ] + xx [ 140 ] ) * xx [ 9 ] ) ; xx [ 311
] = xx [ 7 ] - ( xx [ 255 ] + xx [ 192 ] ) * xx [ 9 ] ; xx [ 312 ] = xx [ 9 ]
* ( xx [ 255 ] - xx [ 192 ] ) ; xx [ 140 ] = xx [ 232 ] == 0.0 ? 0.0 : (
pm_math_Vector3_dot_ra ( xx + 112 , xx + 307 ) * xx [ 141 ] - xx [ 77 ] *
pm_math_Vector3_dot_ra ( xx + 112 , xx + 310 ) ) / xx [ 232 ] ; xx [ 307 ] =
motionData [ 28 ] ; xx [ 308 ] = motionData [ 29 ] ; xx [ 309 ] = motionData
[ 30 ] ; xx [ 310 ] = motionData [ 31 ] ; xx [ 311 ] = xx [ 304 ] ; xx [ 312
] = xx [ 306 ] ; xx [ 313 ] = xx [ 274 ] ; xx [ 314 ] = xx [ 301 ] ;
pm_math_Quaternion_inverseCompose_ra ( xx + 307 , xx + 311 , xx + 301 ) ; xx
[ 77 ] = 0.0 ; xx [ 112 ] = xx [ 77 ] ; xx [ 113 ] = - xx [ 284 ] ; xx [ 114
] = 1.0 ; pm_math_Quaternion_compDeriv_ra ( xx + 301 , xx + 112 , xx + 305 )
; xx [ 141 ] = ( xx [ 137 ] + xx [ 133 ] ) * xx [ 9 ] ; xx [ 133 ] = xx [ 7 ]
- ( xx [ 160 ] + xx [ 76 ] ) * xx [ 9 ] ; xx [ 315 ] = xx [ 141 ] ; xx [ 316
] = xx [ 9 ] * ( xx [ 93 ] - xx [ 89 ] ) ; xx [ 317 ] = xx [ 133 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 311 , xx + 315 , xx + 318 ) ; xx [
309 ] = - xx [ 318 ] ; xx [ 310 ] = - xx [ 319 ] ; xx [ 311 ] = - xx [ 320 ]
; pm_math_Quaternion_compDeriv_ra ( xx + 301 , xx + 309 , xx + 312 ) ; xx [
76 ] = sqrt ( xx [ 87 ] * xx [ 87 ] + xx [ 88 ] * xx [ 88 ] + xx [ 78 ] * xx
[ 78 ] ) ; xx [ 88 ] = xx [ 76 ] == 0.0 ? 0.0 : xx [ 87 ] / xx [ 76 ] ; xx [
87 ] = xx [ 76 ] == 0.0 ? 0.0 : xx [ 78 ] / xx [ 76 ] ; xx [ 301 ] =
motionData [ 78 ] ; xx [ 302 ] = motionData [ 79 ] ; xx [ 303 ] = motionData
[ 80 ] ; xx [ 76 ] = 0.452725 ; xx [ 78 ] = xx [ 6 ] * motionData [ 80 ] + xx
[ 76 ] * motionData [ 78 ] ; xx [ 89 ] = xx [ 6 ] * motionData [ 79 ] ; xx [
308 ] = - ( xx [ 76 ] * motionData [ 79 ] ) ; xx [ 309 ] = xx [ 78 ] ; xx [
310 ] = - xx [ 89 ] ; pm_math_Vector3_cross_ra ( xx + 301 , xx + 308 , xx +
315 ) ; xx [ 93 ] = xx [ 75 ] * motionData [ 86 ] ; xx [ 137 ] = xx [ 75 ] *
motionData [ 85 ] ; xx [ 160 ] = ( xx [ 315 ] - xx [ 76 ] * motionData [ 77 ]
* motionData [ 79 ] ) * xx [ 9 ] + motionData [ 81 ] + xx [ 6 ] - (
motionData [ 88 ] - ( xx [ 93 ] * motionData [ 84 ] + xx [ 137 ] * motionData
[ 87 ] ) * xx [ 9 ] ) ; xx [ 192 ] = ( xx [ 78 ] * motionData [ 77 ] + xx [
316 ] ) * xx [ 9 ] + motionData [ 82 ] - ( xx [ 9 ] * ( xx [ 137 ] *
motionData [ 84 ] - xx [ 93 ] * motionData [ 87 ] ) + motionData [ 89 ] ) ;
xx [ 78 ] = xx [ 9 ] * ( xx [ 317 ] - xx [ 89 ] * motionData [ 77 ] ) +
motionData [ 83 ] - xx [ 76 ] - ( motionData [ 90 ] + ( xx [ 137 ] *
motionData [ 85 ] + xx [ 93 ] * motionData [ 86 ] ) * xx [ 9 ] - xx [ 75 ] )
; xx [ 301 ] = xx [ 160 ] ; xx [ 302 ] = xx [ 192 ] ; xx [ 303 ] = xx [ 78 ]
; xx [ 89 ] = motionData [ 86 ] * motionData [ 86 ] ; xx [ 93 ] = motionData
[ 87 ] * motionData [ 87 ] ; xx [ 137 ] = xx [ 7 ] - ( xx [ 89 ] + xx [ 93 ]
) * xx [ 9 ] ; xx [ 232 ] = motionData [ 84 ] * motionData [ 87 ] ; xx [ 255
] = motionData [ 85 ] * motionData [ 86 ] ; xx [ 274 ] = motionData [ 85 ] *
motionData [ 87 ] ; xx [ 304 ] = motionData [ 84 ] * motionData [ 86 ] ; xx [
305 ] = xx [ 9 ] * ( xx [ 274 ] - xx [ 304 ] ) ; xx [ 308 ] = xx [ 137 ] ; xx
[ 309 ] = ( xx [ 232 ] + xx [ 255 ] ) * xx [ 9 ] ; xx [ 310 ] = xx [ 305 ] ;
xx [ 311 ] = pm_math_Vector3_dot_ra ( xx + 301 , xx + 308 ) ; xx [ 308 ] = xx
[ 4 ] * state [ 34 ] ; xx [ 309 ] = sin ( xx [ 308 ] ) ; xx [ 310 ] = xx [ 76
] * xx [ 309 ] ; xx [ 312 ] = cos ( xx [ 308 ] ) ; xx [ 308 ] = xx [ 6 ] * xx
[ 309 ] ; xx [ 315 ] = xx [ 225 ] * xx [ 309 ] ; xx [ 316 ] = xx [ 5 ] * xx [
309 ] ; xx [ 317 ] = xx [ 9 ] * ( xx [ 310 ] * xx [ 309 ] - xx [ 312 ] * xx [
308 ] ) + xx [ 9 ] * ( xx [ 312 ] * xx [ 315 ] - xx [ 316 ] * xx [ 309 ] ) +
xx [ 253 ] ; xx [ 318 ] = xx [ 9 ] * ( xx [ 255 ] - xx [ 232 ] ) ; xx [ 232 ]
= motionData [ 84 ] * motionData [ 85 ] ; xx [ 255 ] = motionData [ 86 ] *
motionData [ 87 ] ; xx [ 319 ] = ( xx [ 232 ] + xx [ 255 ] ) * xx [ 9 ] ; xx
[ 320 ] = xx [ 284 ] - ( ( xx [ 312 ] * xx [ 316 ] + xx [ 315 ] * xx [ 309 ]
) * xx [ 9 ] - ( xx [ 312 ] * xx [ 310 ] + xx [ 308 ] * xx [ 309 ] ) * xx [ 9
] ) ; xx [ 308 ] = motionData [ 85 ] * motionData [ 85 ] ; xx [ 321 ] = xx [
318 ] ; xx [ 322 ] = xx [ 7 ] - ( xx [ 93 ] + xx [ 308 ] ) * xx [ 9 ] ; xx [
323 ] = xx [ 319 ] ; xx [ 93 ] = pm_math_Vector3_dot_ra ( xx + 301 , xx + 321
) ; xx [ 310 ] = xx [ 311 ] * xx [ 311 ] + xx [ 93 ] * xx [ 93 ] ; if ( xx [
199 ] > xx [ 310 ] ) xx [ 310 ] = xx [ 199 ] ; xx [ 315 ] = xx [ 310 ] == 0.0
? 0.0 : ( xx [ 311 ] * ( xx [ 317 ] * xx [ 318 ] + xx [ 319 ] * xx [ 320 ] )
- xx [ 93 ] * ( xx [ 317 ] * xx [ 137 ] + xx [ 305 ] * xx [ 320 ] ) ) / xx [
310 ] ; xx [ 137 ] = xx [ 86 ] * motionData [ 80 ] ; xx [ 305 ] = xx [ 86 ] *
motionData [ 79 ] ; xx [ 316 ] = xx [ 137 ] - xx [ 305 ] ; xx [ 318 ] = xx [
137 ] + xx [ 305 ] ; xx [ 137 ] = xx [ 318 ] * xx [ 318 ] ; xx [ 305 ] = xx [
7 ] - ( xx [ 316 ] * xx [ 316 ] + xx [ 137 ] ) * xx [ 9 ] ; xx [ 319 ] = xx [
86 ] * motionData [ 77 ] ; xx [ 321 ] = xx [ 86 ] * motionData [ 78 ] ; xx [
322 ] = xx [ 319 ] + xx [ 321 ] ; xx [ 323 ] = xx [ 322 ] * xx [ 318 ] ; xx [
324 ] = xx [ 319 ] - xx [ 321 ] ; xx [ 319 ] = xx [ 324 ] * xx [ 316 ] ; xx [
321 ] = xx [ 9 ] * ( xx [ 316 ] * xx [ 322 ] - xx [ 324 ] * xx [ 318 ] ) ; xx
[ 325 ] = xx [ 305 ] ; xx [ 326 ] = ( xx [ 323 ] + xx [ 319 ] ) * xx [ 9 ] ;
xx [ 327 ] = xx [ 321 ] ; xx [ 328 ] = pm_math_Vector3_dot_ra ( xx + 301 , xx
+ 325 ) ; xx [ 325 ] = xx [ 9 ] * ( xx [ 319 ] - xx [ 323 ] ) ; xx [ 319 ] =
( xx [ 324 ] * xx [ 322 ] + xx [ 316 ] * xx [ 318 ] ) * xx [ 9 ] ; xx [ 323 ]
= xx [ 9 ] * xx [ 309 ] * xx [ 309 ] - xx [ 7 ] ; xx [ 326 ] = xx [ 9 ] * xx
[ 312 ] * xx [ 309 ] ; xx [ 329 ] = xx [ 325 ] ; xx [ 330 ] = xx [ 7 ] - ( xx
[ 137 ] + xx [ 324 ] * xx [ 324 ] ) * xx [ 9 ] ; xx [ 331 ] = - xx [ 319 ] ;
xx [ 137 ] = pm_math_Vector3_dot_ra ( xx + 301 , xx + 329 ) ; xx [ 309 ] = xx
[ 328 ] * xx [ 328 ] + xx [ 137 ] * xx [ 137 ] ; if ( xx [ 199 ] > xx [ 309 ]
) xx [ 309 ] = xx [ 199 ] ; xx [ 312 ] = xx [ 309 ] == 0.0 ? 0.0 : ( xx [ 328
] * ( xx [ 317 ] * xx [ 325 ] - xx [ 319 ] * xx [ 320 ] + xx [ 323 ] * xx [
160 ] + xx [ 326 ] * xx [ 78 ] ) - xx [ 137 ] * ( xx [ 317 ] * xx [ 305 ] +
xx [ 321 ] * xx [ 320 ] + xx [ 323 ] * xx [ 78 ] - xx [ 326 ] * xx [ 160 ] )
) / xx [ 309 ] ; xx [ 137 ] = xx [ 4 ] * state [ 36 ] ; xx [ 305 ] = xx [ 86
] * sin ( xx [ 137 ] ) ; xx [ 309 ] = xx [ 305 ] * xx [ 305 ] ; xx [ 319 ] =
xx [ 86 ] * cos ( xx [ 137 ] ) ; xx [ 137 ] = xx [ 319 ] * xx [ 305 ] ; xx [
325 ] = ( xx [ 309 ] + xx [ 309 ] ) * xx [ 9 ] - xx [ 7 ] ; xx [ 326 ] = xx [
9 ] * ( xx [ 137 ] - xx [ 137 ] ) ; xx [ 327 ] = ( xx [ 137 ] + xx [ 137 ] )
* xx [ 9 ] ; xx [ 305 ] = xx [ 319 ] * xx [ 319 ] ; xx [ 328 ] = - ( ( xx [
137 ] + xx [ 137 ] ) * xx [ 9 ] ) ; xx [ 329 ] = xx [ 7 ] - ( xx [ 309 ] + xx
[ 305 ] ) * xx [ 9 ] ; xx [ 330 ] = xx [ 9 ] * ( xx [ 309 ] - xx [ 305 ] ) ;
xx [ 137 ] = xx [ 310 ] == 0.0 ? 0.0 : ( pm_math_Vector3_dot_ra ( xx + 301 ,
xx + 325 ) * xx [ 311 ] - xx [ 93 ] * pm_math_Vector3_dot_ra ( xx + 301 , xx
+ 328 ) ) / xx [ 310 ] ; xx [ 325 ] = motionData [ 84 ] ; xx [ 326 ] =
motionData [ 85 ] ; xx [ 327 ] = motionData [ 86 ] ; xx [ 328 ] = motionData
[ 87 ] ; xx [ 329 ] = - xx [ 322 ] ; xx [ 330 ] = xx [ 324 ] ; xx [ 331 ] =
xx [ 316 ] ; xx [ 332 ] = - xx [ 318 ] ; pm_math_Quaternion_inverseCompose_ra
( xx + 325 , xx + 329 , xx + 321 ) ; pm_math_Quaternion_compDeriv_ra ( xx +
321 , xx + 112 , xx + 325 ) ; xx [ 93 ] = ( xx [ 304 ] + xx [ 274 ] ) * xx [
9 ] ; xx [ 274 ] = xx [ 7 ] - ( xx [ 308 ] + xx [ 89 ] ) * xx [ 9 ] ; xx [
301 ] = xx [ 93 ] ; xx [ 302 ] = xx [ 9 ] * ( xx [ 255 ] - xx [ 232 ] ) ; xx
[ 303 ] = xx [ 274 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 329 , xx +
301 , xx + 308 ) ; xx [ 301 ] = - xx [ 308 ] ; xx [ 302 ] = - xx [ 309 ] ; xx
[ 303 ] = - xx [ 310 ] ; pm_math_Quaternion_compDeriv_ra ( xx + 321 , xx +
301 , xx + 308 ) ; xx [ 89 ] = sqrt ( xx [ 160 ] * xx [ 160 ] + xx [ 192 ] *
xx [ 192 ] + xx [ 78 ] * xx [ 78 ] ) ; xx [ 192 ] = xx [ 89 ] == 0.0 ? 0.0 :
xx [ 160 ] / xx [ 89 ] ; xx [ 160 ] = xx [ 89 ] == 0.0 ? 0.0 : xx [ 78 ] / xx
[ 89 ] ; xx [ 301 ] = motionData [ 134 ] ; xx [ 302 ] = motionData [ 135 ] ;
xx [ 303 ] = motionData [ 136 ] ; xx [ 78 ] = xx [ 6 ] * motionData [ 136 ] +
xx [ 76 ] * motionData [ 134 ] ; xx [ 89 ] = xx [ 6 ] * motionData [ 135 ] ;
xx [ 321 ] = - ( xx [ 76 ] * motionData [ 135 ] ) ; xx [ 322 ] = xx [ 78 ] ;
xx [ 323 ] = - xx [ 89 ] ; pm_math_Vector3_cross_ra ( xx + 301 , xx + 321 ,
xx + 328 ) ; xx [ 232 ] = xx [ 75 ] * motionData [ 142 ] ; xx [ 255 ] = xx [
75 ] * motionData [ 141 ] ; xx [ 301 ] = ( xx [ 328 ] - xx [ 76 ] *
motionData [ 133 ] * motionData [ 135 ] ) * xx [ 9 ] + motionData [ 137 ] +
xx [ 6 ] - ( motionData [ 144 ] - ( xx [ 232 ] * motionData [ 140 ] + xx [
255 ] * motionData [ 143 ] ) * xx [ 9 ] ) ; xx [ 302 ] = ( xx [ 78 ] *
motionData [ 133 ] + xx [ 329 ] ) * xx [ 9 ] + motionData [ 138 ] - ( xx [ 9
] * ( xx [ 255 ] * motionData [ 140 ] - xx [ 232 ] * motionData [ 143 ] ) +
motionData [ 145 ] ) ; xx [ 78 ] = xx [ 9 ] * ( xx [ 330 ] - xx [ 89 ] *
motionData [ 133 ] ) + motionData [ 139 ] - xx [ 76 ] - ( motionData [ 146 ]
+ ( xx [ 255 ] * motionData [ 141 ] + xx [ 232 ] * motionData [ 142 ] ) * xx
[ 9 ] - xx [ 75 ] ) ; xx [ 303 ] = xx [ 301 ] ; xx [ 304 ] = xx [ 302 ] ; xx
[ 305 ] = xx [ 78 ] ; xx [ 75 ] = motionData [ 142 ] * motionData [ 142 ] ;
xx [ 89 ] = motionData [ 143 ] * motionData [ 143 ] ; xx [ 232 ] = xx [ 7 ] -
( xx [ 75 ] + xx [ 89 ] ) * xx [ 9 ] ; xx [ 255 ] = motionData [ 140 ] *
motionData [ 143 ] ; xx [ 308 ] = motionData [ 141 ] * motionData [ 142 ] ;
xx [ 311 ] = motionData [ 141 ] * motionData [ 143 ] ; xx [ 316 ] =
motionData [ 140 ] * motionData [ 142 ] ; xx [ 318 ] = xx [ 9 ] * ( xx [ 311
] - xx [ 316 ] ) ; xx [ 321 ] = xx [ 232 ] ; xx [ 322 ] = ( xx [ 255 ] + xx [
308 ] ) * xx [ 9 ] ; xx [ 323 ] = xx [ 318 ] ; xx [ 319 ] =
pm_math_Vector3_dot_ra ( xx + 303 , xx + 321 ) ; xx [ 321 ] = xx [ 4 ] *
state [ 62 ] ; xx [ 322 ] = sin ( xx [ 321 ] ) ; xx [ 323 ] = xx [ 76 ] * xx
[ 322 ] ; xx [ 76 ] = cos ( xx [ 321 ] ) ; xx [ 321 ] = xx [ 6 ] * xx [ 322 ]
; xx [ 6 ] = xx [ 225 ] * xx [ 322 ] ; xx [ 225 ] = xx [ 5 ] * xx [ 322 ] ;
xx [ 5 ] = xx [ 9 ] * ( xx [ 323 ] * xx [ 322 ] - xx [ 76 ] * xx [ 321 ] ) +
xx [ 9 ] * ( xx [ 76 ] * xx [ 6 ] - xx [ 225 ] * xx [ 322 ] ) + xx [ 253 ] ;
xx [ 253 ] = xx [ 9 ] * ( xx [ 308 ] - xx [ 255 ] ) ; xx [ 255 ] = motionData
[ 140 ] * motionData [ 141 ] ; xx [ 308 ] = motionData [ 142 ] * motionData [
143 ] ; xx [ 324 ] = ( xx [ 255 ] + xx [ 308 ] ) * xx [ 9 ] ; xx [ 325 ] = xx
[ 284 ] - ( ( xx [ 76 ] * xx [ 225 ] + xx [ 6 ] * xx [ 322 ] ) * xx [ 9 ] - (
xx [ 76 ] * xx [ 323 ] + xx [ 321 ] * xx [ 322 ] ) * xx [ 9 ] ) ; xx [ 6 ] =
motionData [ 141 ] * motionData [ 141 ] ; xx [ 328 ] = xx [ 253 ] ; xx [ 329
] = xx [ 7 ] - ( xx [ 89 ] + xx [ 6 ] ) * xx [ 9 ] ; xx [ 330 ] = xx [ 324 ]
; xx [ 89 ] = pm_math_Vector3_dot_ra ( xx + 303 , xx + 328 ) ; xx [ 225 ] =
xx [ 319 ] * xx [ 319 ] + xx [ 89 ] * xx [ 89 ] ; if ( xx [ 199 ] > xx [ 225
] ) xx [ 225 ] = xx [ 199 ] ; xx [ 284 ] = xx [ 225 ] == 0.0 ? 0.0 : ( xx [
319 ] * ( xx [ 5 ] * xx [ 253 ] + xx [ 324 ] * xx [ 325 ] ) - xx [ 89 ] * (
xx [ 5 ] * xx [ 232 ] + xx [ 318 ] * xx [ 325 ] ) ) / xx [ 225 ] ; xx [ 232 ]
= xx [ 86 ] * motionData [ 136 ] ; xx [ 253 ] = xx [ 86 ] * motionData [ 135
] ; xx [ 318 ] = xx [ 232 ] - xx [ 253 ] ; xx [ 321 ] = xx [ 232 ] + xx [ 253
] ; xx [ 232 ] = xx [ 321 ] * xx [ 321 ] ; xx [ 253 ] = xx [ 7 ] - ( xx [ 318
] * xx [ 318 ] + xx [ 232 ] ) * xx [ 9 ] ; xx [ 323 ] = xx [ 86 ] *
motionData [ 133 ] ; xx [ 324 ] = xx [ 86 ] * motionData [ 134 ] ; xx [ 328 ]
= xx [ 323 ] + xx [ 324 ] ; xx [ 329 ] = xx [ 328 ] * xx [ 321 ] ; xx [ 330 ]
= xx [ 323 ] - xx [ 324 ] ; xx [ 323 ] = xx [ 330 ] * xx [ 318 ] ; xx [ 324 ]
= xx [ 9 ] * ( xx [ 318 ] * xx [ 328 ] - xx [ 330 ] * xx [ 321 ] ) ; xx [ 331
] = xx [ 253 ] ; xx [ 332 ] = ( xx [ 329 ] + xx [ 323 ] ) * xx [ 9 ] ; xx [
333 ] = xx [ 324 ] ; xx [ 334 ] = pm_math_Vector3_dot_ra ( xx + 303 , xx +
331 ) ; xx [ 331 ] = xx [ 9 ] * ( xx [ 323 ] - xx [ 329 ] ) ; xx [ 323 ] = (
xx [ 330 ] * xx [ 328 ] + xx [ 318 ] * xx [ 321 ] ) * xx [ 9 ] ; xx [ 329 ] =
xx [ 9 ] * xx [ 322 ] * xx [ 322 ] - xx [ 7 ] ; xx [ 332 ] = xx [ 9 ] * xx [
76 ] * xx [ 322 ] ; xx [ 335 ] = xx [ 331 ] ; xx [ 336 ] = xx [ 7 ] - ( xx [
232 ] + xx [ 330 ] * xx [ 330 ] ) * xx [ 9 ] ; xx [ 337 ] = - xx [ 323 ] ; xx
[ 76 ] = pm_math_Vector3_dot_ra ( xx + 303 , xx + 335 ) ; xx [ 232 ] = xx [
334 ] * xx [ 334 ] + xx [ 76 ] * xx [ 76 ] ; if ( xx [ 199 ] > xx [ 232 ] )
xx [ 232 ] = xx [ 199 ] ; xx [ 199 ] = xx [ 232 ] == 0.0 ? 0.0 : ( xx [ 334 ]
* ( xx [ 5 ] * xx [ 331 ] - xx [ 323 ] * xx [ 325 ] + xx [ 329 ] * xx [ 301 ]
+ xx [ 332 ] * xx [ 78 ] ) - xx [ 76 ] * ( xx [ 5 ] * xx [ 253 ] + xx [ 324 ]
* xx [ 325 ] + xx [ 329 ] * xx [ 78 ] - xx [ 332 ] * xx [ 301 ] ) ) / xx [
232 ] ; xx [ 76 ] = xx [ 4 ] * state [ 64 ] ; xx [ 4 ] = xx [ 86 ] * sin ( xx
[ 76 ] ) ; xx [ 232 ] = xx [ 4 ] * xx [ 4 ] ; xx [ 253 ] = xx [ 86 ] * cos (
xx [ 76 ] ) ; xx [ 76 ] = xx [ 253 ] * xx [ 4 ] ; xx [ 322 ] = ( xx [ 232 ] +
xx [ 232 ] ) * xx [ 9 ] - xx [ 7 ] ; xx [ 323 ] = xx [ 9 ] * ( xx [ 76 ] - xx
[ 76 ] ) ; xx [ 324 ] = ( xx [ 76 ] + xx [ 76 ] ) * xx [ 9 ] ; xx [ 4 ] = xx
[ 253 ] * xx [ 253 ] ; xx [ 331 ] = - ( ( xx [ 76 ] + xx [ 76 ] ) * xx [ 9 ]
) ; xx [ 332 ] = xx [ 7 ] - ( xx [ 232 ] + xx [ 4 ] ) * xx [ 9 ] ; xx [ 333 ]
= xx [ 9 ] * ( xx [ 232 ] - xx [ 4 ] ) ; xx [ 4 ] = xx [ 225 ] == 0.0 ? 0.0 :
( pm_math_Vector3_dot_ra ( xx + 303 , xx + 322 ) * xx [ 319 ] - xx [ 89 ] *
pm_math_Vector3_dot_ra ( xx + 303 , xx + 331 ) ) / xx [ 225 ] ; xx [ 331 ] =
motionData [ 140 ] ; xx [ 332 ] = motionData [ 141 ] ; xx [ 333 ] =
motionData [ 142 ] ; xx [ 334 ] = motionData [ 143 ] ; xx [ 335 ] = - xx [
328 ] ; xx [ 336 ] = xx [ 330 ] ; xx [ 337 ] = xx [ 318 ] ; xx [ 338 ] = - xx
[ 321 ] ; pm_math_Quaternion_inverseCompose_ra ( xx + 331 , xx + 335 , xx +
321 ) ; pm_math_Quaternion_compDeriv_ra ( xx + 321 , xx + 112 , xx + 328 ) ;
xx [ 76 ] = ( xx [ 316 ] + xx [ 311 ] ) * xx [ 9 ] ; xx [ 86 ] = xx [ 7 ] - (
xx [ 6 ] + xx [ 75 ] ) * xx [ 9 ] ; xx [ 112 ] = xx [ 76 ] ; xx [ 113 ] = xx
[ 9 ] * ( xx [ 308 ] - xx [ 255 ] ) ; xx [ 114 ] = xx [ 86 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 335 , xx + 112 , xx + 303 ) ; xx [
112 ] = - xx [ 303 ] ; xx [ 113 ] = - xx [ 304 ] ; xx [ 114 ] = - xx [ 305 ]
; pm_math_Quaternion_compDeriv_ra ( xx + 321 , xx + 112 , xx + 332 ) ; xx [ 6
] = sqrt ( xx [ 301 ] * xx [ 301 ] + xx [ 302 ] * xx [ 302 ] + xx [ 78 ] * xx
[ 78 ] ) ; xx [ 7 ] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 301 ] / xx [ 6 ] ; xx [ 75
] = xx [ 6 ] == 0.0 ? 0.0 : xx [ 78 ] / xx [ 6 ] ; J [ 0 ] = xx [ 36 ] + xx [
42 ] ; J [ 1 ] = xx [ 45 ] + xx [ 39 ] ; J [ 2 ] = xx [ 9 ] * ( xx [ 48 ] +
xx [ 18 ] * xx [ 11 ] ) + xx [ 13 ] - xx [ 28 ] ; J [ 5 ] = - ( xx [ 66 ] +
xx [ 54 ] + xx [ 72 ] ) ; J [ 6 ] = - ( xx [ 94 ] + xx [ 103 ] ) ; J [ 7 ] =
- ( xx [ 106 ] + xx [ 115 ] ) ; J [ 8 ] = - ( xx [ 118 ] + xx [ 79 ] ) ; J [
39 ] = xx [ 37 ] + xx [ 43 ] ; J [ 40 ] = xx [ 46 ] + xx [ 40 ] ; J [ 41 ] =
( xx [ 49 ] - xx [ 28 ] * xx [ 1 ] ) * xx [ 9 ] + xx [ 14 ] - xx [ 27 ] ; J [
44 ] = - ( xx [ 67 ] + xx [ 55 ] + xx [ 73 ] ) ; J [ 45 ] = - ( xx [ 95 ] +
xx [ 104 ] ) ; J [ 46 ] = - ( xx [ 107 ] + xx [ 116 ] ) ; J [ 47 ] = - ( xx [
119 ] + xx [ 80 ] ) ; J [ 78 ] = xx [ 38 ] + xx [ 44 ] ; J [ 79 ] = xx [ 47 ]
+ xx [ 41 ] ; J [ 80 ] = ( xx [ 18 ] * xx [ 12 ] + xx [ 50 ] ) * xx [ 9 ] +
xx [ 15 ] ; J [ 83 ] = - ( xx [ 68 ] + xx [ 56 ] + xx [ 74 ] ) ; J [ 84 ] = -
( xx [ 96 ] + xx [ 105 ] ) ; J [ 85 ] = - ( xx [ 108 ] + xx [ 117 ] ) ; J [
86 ] = - ( xx [ 120 ] + xx [ 81 ] ) ; J [ 117 ] = xx [ 23 ] + xx [ 42 ] ; J [
118 ] = xx [ 121 ] + xx [ 39 ] ; J [ 119 ] = xx [ 9 ] * ( xx [ 124 ] + xx [
18 ] * xx [ 10 ] ) + xx [ 13 ] + xx [ 8 ] ; J [ 126 ] = - ( xx [ 60 ] + xx [
19 ] + xx [ 127 ] ) ; J [ 127 ] = - ( xx [ 142 ] + xx [ 148 ] ) ; J [ 128 ] =
- ( xx [ 145 ] + xx [ 154 ] ) ; J [ 129 ] = - ( xx [ 151 ] + xx [ 134 ] ) ; J
[ 156 ] = xx [ 24 ] + xx [ 43 ] ; J [ 157 ] = xx [ 122 ] + xx [ 40 ] ; J [
158 ] = ( xx [ 8 ] * xx [ 1 ] + xx [ 125 ] ) * xx [ 9 ] + xx [ 14 ] - xx [ 3
] ; J [ 165 ] = - ( xx [ 61 ] + xx [ 20 ] + xx [ 128 ] ) ; J [ 166 ] = - ( xx
[ 143 ] + xx [ 149 ] ) ; J [ 167 ] = - ( xx [ 146 ] + xx [ 155 ] ) ; J [ 168
] = - ( xx [ 152 ] + xx [ 135 ] ) ; J [ 195 ] = xx [ 25 ] + xx [ 44 ] ; J [
196 ] = xx [ 123 ] + xx [ 41 ] ; J [ 197 ] = ( xx [ 126 ] - xx [ 18 ] * xx [
17 ] ) * xx [ 9 ] + xx [ 15 ] ; J [ 204 ] = - ( xx [ 62 ] + xx [ 21 ] + xx [
129 ] ) ; J [ 205 ] = - ( xx [ 144 ] + xx [ 150 ] ) ; J [ 206 ] = - ( xx [
147 ] + xx [ 156 ] ) ; J [ 207 ] = - ( xx [ 153 ] + xx [ 136 ] ) ; J [ 247 ]
= xx [ 171 ] + xx [ 174 ] ; J [ 248 ] = xx [ 168 ] + xx [ 157 ] ; J [ 249 ] =
xx [ 9 ] * ( xx [ 180 ] + xx [ 161 ] * xx [ 138 ] ) + xx [ 183 ] - xx [ 28 ]
; J [ 252 ] = - ( xx [ 177 ] + xx [ 130 ] + xx [ 186 ] ) ; J [ 253 ] = - ( xx
[ 201 ] + xx [ 207 ] ) ; J [ 254 ] = - ( xx [ 204 ] + xx [ 213 ] ) ; J [ 255
] = - ( xx [ 210 ] + xx [ 193 ] ) ; J [ 286 ] = xx [ 172 ] + xx [ 175 ] ; J [
287 ] = xx [ 169 ] + xx [ 158 ] ; J [ 288 ] = ( xx [ 181 ] - xx [ 28 ] * xx [
22 ] ) * xx [ 9 ] + xx [ 184 ] - xx [ 27 ] ; J [ 291 ] = - ( xx [ 178 ] + xx
[ 131 ] + xx [ 187 ] ) ; J [ 292 ] = - ( xx [ 202 ] + xx [ 208 ] ) ; J [ 293
] = - ( xx [ 205 ] + xx [ 214 ] ) ; J [ 294 ] = - ( xx [ 211 ] + xx [ 194 ] )
; J [ 325 ] = xx [ 173 ] + xx [ 176 ] ; J [ 326 ] = xx [ 170 ] + xx [ 159 ] ;
J [ 327 ] = ( xx [ 161 ] * xx [ 139 ] + xx [ 182 ] ) * xx [ 9 ] + xx [ 185 ]
; J [ 330 ] = - ( xx [ 179 ] + xx [ 132 ] + xx [ 188 ] ) ; J [ 331 ] = - ( xx
[ 203 ] + xx [ 209 ] ) ; J [ 332 ] = - ( xx [ 206 ] + xx [ 215 ] ) ; J [ 333
] = - ( xx [ 212 ] + xx [ 195 ] ) ; J [ 364 ] = xx [ 165 ] + xx [ 174 ] ; J [
365 ] = xx [ 196 ] + xx [ 157 ] ; J [ 366 ] = xx [ 9 ] * ( xx [ 216 ] + xx [
161 ] * xx [ 26 ] ) + xx [ 183 ] + xx [ 8 ] ; J [ 373 ] = - ( xx [ 162 ] + xx
[ 189 ] + xx [ 219 ] ) ; J [ 374 ] = - ( xx [ 234 ] + xx [ 240 ] ) ; J [ 375
] = - ( xx [ 237 ] + xx [ 246 ] ) ; J [ 376 ] = - ( xx [ 243 ] + xx [ 226 ] )
; J [ 403 ] = xx [ 166 ] + xx [ 175 ] ; J [ 404 ] = xx [ 197 ] + xx [ 158 ] ;
J [ 405 ] = ( xx [ 8 ] * xx [ 22 ] + xx [ 217 ] ) * xx [ 9 ] + xx [ 184 ] -
xx [ 3 ] ; J [ 412 ] = - ( xx [ 163 ] + xx [ 190 ] + xx [ 220 ] ) ; J [ 413 ]
= - ( xx [ 235 ] + xx [ 241 ] ) ; J [ 414 ] = - ( xx [ 238 ] + xx [ 247 ] ) ;
J [ 415 ] = - ( xx [ 244 ] + xx [ 227 ] ) ; J [ 442 ] = xx [ 167 ] + xx [ 176
] ; J [ 443 ] = xx [ 198 ] + xx [ 159 ] ; J [ 444 ] = ( xx [ 218 ] - xx [ 161
] * xx [ 82 ] ) * xx [ 9 ] + xx [ 185 ] ; J [ 451 ] = - ( xx [ 164 ] + xx [
191 ] + xx [ 221 ] ) ; J [ 452 ] = - ( xx [ 236 ] + xx [ 242 ] ) ; J [ 453 ]
= - ( xx [ 239 ] + xx [ 248 ] ) ; J [ 454 ] = - ( xx [ 245 ] + xx [ 228 ] ) ;
J [ 494 ] = xx [ 30 ] + xx [ 259 ] ; J [ 495 ] = xx [ 262 ] + xx [ 256 ] ; J
[ 496 ] = xx [ 9 ] * ( xx [ 265 ] + xx [ 249 ] * xx [ 29 ] ) + xx [ 268 ] -
xx [ 28 ] ; J [ 499 ] = - ( xx [ 275 ] + xx [ 222 ] + xx [ 229 ] ) ; J [ 500
] = - ( xx [ 286 ] + xx [ 292 ] ) ; J [ 501 ] = - ( xx [ 289 ] + xx [ 298 ] )
; J [ 502 ] = - ( xx [ 295 ] + xx [ 278 ] ) ; J [ 533 ] = xx [ 31 ] + xx [
260 ] ; J [ 534 ] = xx [ 263 ] + xx [ 257 ] ; J [ 535 ] = ( xx [ 266 ] - xx [
28 ] * xx [ 35 ] ) * xx [ 9 ] + xx [ 269 ] - xx [ 27 ] ; J [ 538 ] = - ( xx [
276 ] + xx [ 223 ] + xx [ 230 ] ) ; J [ 539 ] = - ( xx [ 287 ] + xx [ 293 ] )
; J [ 540 ] = - ( xx [ 290 ] + xx [ 299 ] ) ; J [ 541 ] = - ( xx [ 296 ] + xx
[ 279 ] ) ; J [ 572 ] = xx [ 32 ] + xx [ 261 ] ; J [ 573 ] = xx [ 264 ] + xx
[ 258 ] ; J [ 574 ] = ( xx [ 249 ] * xx [ 33 ] + xx [ 267 ] ) * xx [ 9 ] + xx
[ 270 ] ; J [ 577 ] = - ( xx [ 277 ] + xx [ 224 ] + xx [ 231 ] ) ; J [ 578 ]
= - ( xx [ 288 ] + xx [ 294 ] ) ; J [ 579 ] = - ( xx [ 291 ] + xx [ 300 ] ) ;
J [ 580 ] = - ( xx [ 297 ] + xx [ 280 ] ) ; J [ 611 ] = xx [ 57 ] + xx [ 259
] ; J [ 612 ] = xx [ 271 ] + xx [ 256 ] ; J [ 613 ] = xx [ 9 ] * ( xx [ 281 ]
+ xx [ 249 ] * xx [ 16 ] ) + xx [ 268 ] + xx [ 8 ] ; J [ 620 ] = - ( xx [ 51
] + xx [ 63 ] + xx [ 250 ] ) ; J [ 621 ] = - ( xx [ 69 ] + xx [ 97 ] ) ; J [
622 ] = - ( xx [ 90 ] + xx [ 109 ] ) ; J [ 623 ] = - ( xx [ 100 ] + xx [ 83 ]
) ; J [ 650 ] = xx [ 58 ] + xx [ 260 ] ; J [ 651 ] = xx [ 272 ] + xx [ 257 ]
; J [ 652 ] = ( xx [ 8 ] * xx [ 35 ] + xx [ 282 ] ) * xx [ 9 ] + xx [ 269 ] -
xx [ 3 ] ; J [ 659 ] = - ( xx [ 52 ] + xx [ 64 ] + xx [ 251 ] ) ; J [ 660 ] =
- ( xx [ 70 ] + xx [ 98 ] ) ; J [ 661 ] = - ( xx [ 91 ] + xx [ 110 ] ) ; J [
662 ] = - ( xx [ 101 ] + xx [ 84 ] ) ; J [ 689 ] = xx [ 59 ] + xx [ 261 ] ; J
[ 690 ] = xx [ 273 ] + xx [ 258 ] ; J [ 691 ] = ( xx [ 283 ] - xx [ 249 ] *
xx [ 34 ] ) * xx [ 9 ] + xx [ 270 ] ; J [ 698 ] = - ( xx [ 53 ] + xx [ 65 ] +
xx [ 252 ] ) ; J [ 699 ] = - ( xx [ 71 ] + xx [ 99 ] ) ; J [ 700 ] = - ( xx [
92 ] + xx [ 111 ] ) ; J [ 701 ] = - ( xx [ 102 ] + xx [ 85 ] ) ; J [ 705 ] =
xx [ 2 ] * xx [ 233 ] + xx [ 200 ] ; J [ 706 ] = xx [ 2 ] * xx [ 140 ] ; J [
744 ] = xx [ 306 ] ; J [ 745 ] = xx [ 313 ] ; J [ 783 ] = xx [ 307 ] ; J [
784 ] = xx [ 314 ] ; J [ 822 ] = xx [ 254 ] * xx [ 88 ] + xx [ 87 ] * xx [
285 ] ; J [ 823 ] = xx [ 77 ] ; J [ 861 ] = xx [ 254 ] * xx [ 141 ] + xx [
285 ] * xx [ 133 ] ; J [ 862 ] = xx [ 77 ] ; J [ 913 ] = xx [ 2 ] * xx [ 315
] + xx [ 312 ] ; J [ 914 ] = xx [ 2 ] * xx [ 137 ] ; J [ 952 ] = xx [ 326 ] ;
J [ 953 ] = xx [ 309 ] ; J [ 991 ] = xx [ 327 ] ; J [ 992 ] = xx [ 310 ] ; J
[ 1030 ] = xx [ 317 ] * xx [ 192 ] + xx [ 160 ] * xx [ 320 ] ; J [ 1031 ] =
xx [ 77 ] ; J [ 1069 ] = xx [ 317 ] * xx [ 93 ] + xx [ 320 ] * xx [ 274 ] ; J
[ 1070 ] = xx [ 77 ] ; J [ 1121 ] = xx [ 2 ] * xx [ 284 ] + xx [ 199 ] ; J [
1122 ] = xx [ 2 ] * xx [ 4 ] ; J [ 1160 ] = xx [ 329 ] ; J [ 1161 ] = xx [
333 ] ; J [ 1199 ] = xx [ 330 ] ; J [ 1200 ] = xx [ 334 ] ; J [ 1238 ] = xx [
5 ] * xx [ 7 ] + xx [ 75 ] * xx [ 325 ] ; J [ 1239 ] = xx [ 77 ] ; J [ 1277 ]
= xx [ 5 ] * xx [ 76 ] + xx [ 325 ] * xx [ 86 ] ; J [ 1278 ] = xx [ 77 ] ;
return 33 ; } static int isInKinematicSingularity_0 ( const
RuntimeDerivedValuesBundle * rtdv , const int * modeVector , const double *
motionData ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int
* rtdvi = rtdv -> mInts . mValues ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) modeVector ; ( void ) motionData ; return 0 ; } static int
isInKinematicSingularity_1 ( const RuntimeDerivedValuesBundle * rtdv , const
int * modeVector , const double * motionData ) { const double * rtdvd = rtdv
-> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ; ( void
) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ; ( void ) motionData ; return
0 ; } static int isInKinematicSingularity_2 ( const
RuntimeDerivedValuesBundle * rtdv , const int * modeVector , const double *
motionData ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int
* rtdvi = rtdv -> mInts . mValues ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) modeVector ; ( void ) motionData ; return 0 ; } static int
isInKinematicSingularity_3 ( const RuntimeDerivedValuesBundle * rtdv , const
int * modeVector , const double * motionData ) { const double * rtdvd = rtdv
-> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ; ( void
) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ; ( void ) motionData ; return
0 ; } static int isInKinematicSingularity_4 ( const
RuntimeDerivedValuesBundle * rtdv , const int * modeVector , const double *
motionData ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int
* rtdvi = rtdv -> mInts . mValues ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) modeVector ; ( void ) motionData ; return 0 ; } static int
isInKinematicSingularity_5 ( const RuntimeDerivedValuesBundle * rtdv , const
int * modeVector , const double * motionData ) { const double * rtdvd = rtdv
-> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ; ( void
) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ; ( void ) motionData ; return
0 ; } static int isInKinematicSingularity_6 ( const
RuntimeDerivedValuesBundle * rtdv , const int * modeVector , const double *
motionData ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int
* rtdvi = rtdv -> mInts . mValues ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) modeVector ; ( void ) motionData ; return 0 ; } static int
isInKinematicSingularity_7 ( const RuntimeDerivedValuesBundle * rtdv , const
int * modeVector , const double * motionData ) { const double * rtdvd = rtdv
-> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ; ( void
) rtdvd ; ( void ) rtdvi ; ( void ) modeVector ; ( void ) motionData ; return
0 ; } static int isInKinematicSingularity_8 ( const
RuntimeDerivedValuesBundle * rtdv , const int * modeVector , const double *
motionData ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int
* rtdvi = rtdv -> mInts . mValues ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) modeVector ; ( void ) motionData ; return 0 ; } int
triped_a151ee3d_1_isInKinematicSingularity ( const void * mech , const
RuntimeDerivedValuesBundle * rtdv , size_t constraintIdx , const int *
modeVector , const double * motionData ) { ( void ) mech ; ( void ) rtdv ; (
void ) modeVector ; ( void ) motionData ; switch ( constraintIdx ) { case 0 :
return isInKinematicSingularity_0 ( rtdv , modeVector , motionData ) ; case 1
: return isInKinematicSingularity_1 ( rtdv , modeVector , motionData ) ; case
2 : return isInKinematicSingularity_2 ( rtdv , modeVector , motionData ) ;
case 3 : return isInKinematicSingularity_3 ( rtdv , modeVector , motionData )
; case 4 : return isInKinematicSingularity_4 ( rtdv , modeVector , motionData
) ; case 5 : return isInKinematicSingularity_5 ( rtdv , modeVector ,
motionData ) ; case 6 : return isInKinematicSingularity_6 ( rtdv , modeVector
, motionData ) ; case 7 : return isInKinematicSingularity_7 ( rtdv ,
modeVector , motionData ) ; case 8 : return isInKinematicSingularity_8 ( rtdv
, modeVector , motionData ) ; } return 0 ; } PmfMessageId
triped_a151ee3d_1_convertStateVector ( const void * asmMech , const
RuntimeDerivedValuesBundle * rtdv , const void * simMech , const double *
asmState , const int * asmModeVector , const int * simModeVector , double *
simState , void * neDiagMgr0 ) { const double * rtdvd = rtdv -> mDoubles .
mValues ; const int * rtdvi = rtdv -> mInts . mValues ; NeuDiagnosticManager
* neDiagMgr = ( NeuDiagnosticManager * ) neDiagMgr0 ; ( void ) asmMech ; (
void ) rtdvd ; ( void ) rtdvi ; ( void ) simMech ; ( void ) asmModeVector ; (
void ) simModeVector ; ( void ) neDiagMgr ; simState [ 0 ] = asmState [ 0 ] ;
simState [ 1 ] = asmState [ 1 ] ; simState [ 2 ] = asmState [ 2 ] ; simState
[ 3 ] = asmState [ 3 ] ; simState [ 4 ] = asmState [ 4 ] ; simState [ 5 ] =
asmState [ 5 ] ; simState [ 6 ] = asmState [ 6 ] ; simState [ 7 ] = asmState
[ 7 ] ; simState [ 8 ] = asmState [ 8 ] ; simState [ 9 ] = asmState [ 9 ] ;
simState [ 10 ] = asmState [ 10 ] ; simState [ 11 ] = asmState [ 11 ] ;
simState [ 12 ] = asmState [ 12 ] ; simState [ 13 ] = asmState [ 13 ] ;
simState [ 14 ] = asmState [ 14 ] ; simState [ 15 ] = asmState [ 15 ] ;
simState [ 16 ] = asmState [ 16 ] ; simState [ 17 ] = asmState [ 17 ] ;
simState [ 18 ] = asmState [ 18 ] ; simState [ 19 ] = asmState [ 19 ] ;
simState [ 20 ] = asmState [ 20 ] ; simState [ 21 ] = asmState [ 21 ] ;
simState [ 22 ] = asmState [ 22 ] ; simState [ 23 ] = asmState [ 23 ] ;
simState [ 24 ] = asmState [ 24 ] ; simState [ 25 ] = asmState [ 25 ] ;
simState [ 26 ] = asmState [ 26 ] ; simState [ 27 ] = asmState [ 27 ] ;
simState [ 28 ] = asmState [ 28 ] ; simState [ 29 ] = asmState [ 29 ] ;
simState [ 30 ] = asmState [ 30 ] ; simState [ 31 ] = asmState [ 31 ] ;
simState [ 32 ] = asmState [ 32 ] ; simState [ 33 ] = asmState [ 33 ] ;
simState [ 34 ] = asmState [ 34 ] ; simState [ 35 ] = asmState [ 35 ] ;
simState [ 36 ] = asmState [ 36 ] ; simState [ 37 ] = asmState [ 37 ] ;
simState [ 38 ] = asmState [ 38 ] ; simState [ 39 ] = asmState [ 39 ] ;
simState [ 40 ] = asmState [ 40 ] ; simState [ 41 ] = asmState [ 41 ] ;
simState [ 42 ] = asmState [ 42 ] ; simState [ 43 ] = asmState [ 43 ] ;
simState [ 44 ] = asmState [ 44 ] ; simState [ 45 ] = asmState [ 45 ] ;
simState [ 46 ] = asmState [ 46 ] ; simState [ 47 ] = asmState [ 47 ] ;
simState [ 48 ] = asmState [ 48 ] ; simState [ 49 ] = asmState [ 49 ] ;
simState [ 50 ] = asmState [ 50 ] ; simState [ 51 ] = asmState [ 51 ] ;
simState [ 52 ] = asmState [ 52 ] ; simState [ 53 ] = asmState [ 53 ] ;
simState [ 54 ] = asmState [ 54 ] ; simState [ 55 ] = asmState [ 55 ] ;
simState [ 56 ] = asmState [ 56 ] ; simState [ 57 ] = asmState [ 57 ] ;
simState [ 58 ] = asmState [ 58 ] ; simState [ 59 ] = asmState [ 59 ] ;
simState [ 60 ] = asmState [ 60 ] ; simState [ 61 ] = asmState [ 61 ] ;
simState [ 62 ] = asmState [ 62 ] ; simState [ 63 ] = asmState [ 63 ] ;
simState [ 64 ] = asmState [ 64 ] ; simState [ 65 ] = asmState [ 65 ] ;
simState [ 66 ] = asmState [ 66 ] ; simState [ 67 ] = asmState [ 67 ] ;
simState [ 68 ] = asmState [ 68 ] ; simState [ 69 ] = asmState [ 69 ] ;
simState [ 70 ] = asmState [ 70 ] ; simState [ 71 ] = asmState [ 71 ] ;
simState [ 72 ] = asmState [ 72 ] ; simState [ 73 ] = asmState [ 73 ] ;
simState [ 74 ] = asmState [ 74 ] ; simState [ 75 ] = asmState [ 75 ] ;
simState [ 76 ] = asmState [ 76 ] ; simState [ 77 ] = asmState [ 77 ] ;
simState [ 78 ] = asmState [ 78 ] ; simState [ 79 ] = asmState [ 79 ] ;
simState [ 80 ] = asmState [ 80 ] ; simState [ 81 ] = asmState [ 81 ] ;
simState [ 82 ] = asmState [ 82 ] ; simState [ 83 ] = asmState [ 83 ] ;
simState [ 84 ] = asmState [ 84 ] ; simState [ 85 ] = asmState [ 85 ] ;
simState [ 86 ] = asmState [ 86 ] ; simState [ 87 ] = asmState [ 87 ] ;
simState [ 88 ] = asmState [ 88 ] ; simState [ 89 ] = asmState [ 89 ] ;
simState [ 90 ] = asmState [ 90 ] ; simState [ 91 ] = asmState [ 91 ] ;
simState [ 92 ] = asmState [ 92 ] ; return NULL ; }
