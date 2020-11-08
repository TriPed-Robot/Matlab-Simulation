#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "triped_a151ee3d_1_geometries.h"
const NeZCData triped_a151ee3d_1_ZCData [ 3 ] = { {
"triped/TriPed/Ground/SpatialContactForce-Leg0" , 0 , 0 ,
"TriPed.Ground.SpatialContactForce_Leg0" , "" , 0 } , {
"triped/TriPed/Ground/SpatialContactForce-Leg1" , 0 , 0 ,
"TriPed.Ground.SpatialContactForce_Leg1" , "" , 0 } , {
"triped/TriPed/Ground/SpatialContactForce-Leg2" , 0 , 0 ,
"TriPed.Ground.SpatialContactForce_Leg2" , "" , 0 } } ; PmfMessageId
triped_a151ee3d_1_computeAsmModeVector ( const double * input , const double
* inputDot , const double * inputDdot , int * modeVector , double *
errorResult , NeuDiagnosticManager * neDiagMgr ) { ( void ) input ; ( void )
inputDot ; ( void ) inputDdot ; ( void ) modeVector ; ( void ) neDiagMgr ;
errorResult [ 0 ] = 0.0 ; return NULL ; } PmfMessageId
triped_a151ee3d_1_computeSimModeVector ( const double * input , const double
* inputDot , const double * inputDdot , int * modeVector , double *
errorResult , NeuDiagnosticManager * neDiagMgr ) { ( void ) input ; ( void )
inputDot ; ( void ) inputDdot ; ( void ) modeVector ; ( void ) neDiagMgr ;
errorResult [ 0 ] = 0.0 ; return NULL ; } PmfMessageId
triped_a151ee3d_1_computeZeroCrossings ( const RuntimeDerivedValuesBundle *
rtdv , const double * solverStateVector , const double * input , const double
* inputDot , const double * inputDdot , const double * discreteStateVector ,
double * zeroCrossingsVector , double * errorResult , NeuDiagnosticManager *
neDiagMgr ) { const double * rtdvd = rtdv -> mDoubles . mValues ; const int *
rtdvi = rtdv -> mInts . mValues ; double xx [ 64 ] ; ( void ) rtdvd ; ( void
) rtdvi ; ( void ) input ; ( void ) inputDot ; ( void ) inputDdot ; ( void )
discreteStateVector ; ( void ) neDiagMgr ; xx [ 0 ] = 0.5 ; xx [ 1 ] = xx [ 0
] * solverStateVector [ 6 ] ; xx [ 2 ] = cos ( xx [ 1 ] ) ; xx [ 3 ] = xx [ 0
] * solverStateVector [ 0 ] ; xx [ 4 ] = sin ( xx [ 3 ] ) ; xx [ 5 ] = xx [ 0
] * solverStateVector [ 1 ] ; xx [ 6 ] = sin ( xx [ 5 ] ) ; xx [ 7 ] = xx [ 4
] * xx [ 6 ] ; xx [ 8 ] = xx [ 0 ] * solverStateVector [ 2 ] ; xx [ 9 ] = sin
( xx [ 8 ] ) ; xx [ 10 ] = cos ( xx [ 8 ] ) ; xx [ 8 ] = cos ( xx [ 3 ] ) ;
xx [ 3 ] = cos ( xx [ 5 ] ) ; xx [ 5 ] = xx [ 8 ] * xx [ 3 ] ; xx [ 11 ] = xx
[ 7 ] * xx [ 9 ] - xx [ 10 ] * xx [ 5 ] ; xx [ 12 ] = sin ( xx [ 1 ] ) ; xx [
1 ] = xx [ 3 ] * xx [ 4 ] ; xx [ 3 ] = xx [ 8 ] * xx [ 6 ] ; xx [ 4 ] = xx [
1 ] * xx [ 9 ] - xx [ 10 ] * xx [ 3 ] ; xx [ 6 ] = xx [ 2 ] * xx [ 11 ] - xx
[ 12 ] * xx [ 4 ] ; xx [ 8 ] = xx [ 5 ] * xx [ 9 ] + xx [ 10 ] * xx [ 7 ] ;
xx [ 5 ] = xx [ 10 ] * xx [ 1 ] + xx [ 3 ] * xx [ 9 ] ; xx [ 1 ] = xx [ 8 ] *
xx [ 12 ] - xx [ 5 ] * xx [ 2 ] ; xx [ 3 ] = xx [ 12 ] * xx [ 11 ] + xx [ 2 ]
* xx [ 4 ] ; xx [ 7 ] = xx [ 8 ] * xx [ 2 ] + xx [ 5 ] * xx [ 12 ] ; xx [ 9 ]
= - xx [ 7 ] ; xx [ 13 ] = xx [ 1 ] ; xx [ 14 ] = xx [ 3 ] ; xx [ 15 ] = xx [
9 ] ; xx [ 10 ] = 0.452725 ; xx [ 16 ] = xx [ 3 ] * xx [ 10 ] ; xx [ 17 ] =
0.09427500000000004 ; xx [ 18 ] = xx [ 7 ] * xx [ 17 ] + xx [ 10 ] * xx [ 1 ]
; xx [ 7 ] = xx [ 3 ] * xx [ 17 ] ; xx [ 19 ] = - xx [ 16 ] ; xx [ 20 ] = xx
[ 18 ] ; xx [ 21 ] = xx [ 7 ] ; pm_math_Vector3_cross_ra ( xx + 13 , xx + 19
, xx + 22 ) ; xx [ 13 ] = 2.0 ; xx [ 14 ] = 0.1399750000000002 ; xx [ 15 ] =
0.4527250000000002 * xx [ 12 ] ; xx [ 17 ] = 1.405725 ; xx [ 19 ] = xx [ 17 ]
* xx [ 12 ] ; xx [ 20 ] = xx [ 14 ] + xx [ 13 ] * ( xx [ 2 ] * xx [ 15 ] + xx
[ 19 ] * xx [ 12 ] ) ; xx [ 21 ] = ( xx [ 2 ] * xx [ 19 ] - xx [ 15 ] * xx [
12 ] ) * xx [ 13 ] + 0.4072249999999988 ; xx [ 2 ] = xx [ 21 ] * xx [ 4 ] ;
xx [ 25 ] = xx [ 5 ] ; xx [ 26 ] = - xx [ 4 ] ; xx [ 27 ] = xx [ 8 ] ; xx [
12 ] = xx [ 8 ] * xx [ 20 ] - xx [ 21 ] * xx [ 5 ] ; xx [ 15 ] = xx [ 20 ] *
xx [ 4 ] ; xx [ 28 ] = - xx [ 2 ] ; xx [ 29 ] = xx [ 12 ] ; xx [ 30 ] = xx [
15 ] ; pm_math_Vector3_cross_ra ( xx + 25 , xx + 28 , xx + 31 ) ; xx [ 25 ] =
- xx [ 5 ] ; xx [ 26 ] = xx [ 4 ] ; xx [ 27 ] = - xx [ 8 ] ; xx [ 19 ] =
8.499999999999917e-3 ; xx [ 28 ] = xx [ 19 ] * xx [ 4 ] ; xx [ 29 ] =
0.09430000000000001 ; xx [ 30 ] = xx [ 8 ] * xx [ 29 ] - xx [ 5 ] * xx [ 19 ]
; xx [ 5 ] = xx [ 29 ] * xx [ 4 ] ; xx [ 34 ] = - xx [ 28 ] ; xx [ 35 ] = xx
[ 30 ] ; xx [ 36 ] = xx [ 5 ] ; pm_math_Vector3_cross_ra ( xx + 25 , xx + 34
, xx + 37 ) ; xx [ 4 ] = 0.5697749999999999 ; xx [ 40 ] = xx [ 6 ] ; xx [ 41
] = xx [ 1 ] ; xx [ 42 ] = xx [ 3 ] ; xx [ 43 ] = xx [ 9 ] ; xx [ 44 ] = ( xx
[ 22 ] - xx [ 16 ] * xx [ 6 ] ) * xx [ 13 ] + xx [ 20 ] + ( xx [ 2 ] * xx [
11 ] + xx [ 31 ] ) * xx [ 13 ] - ( xx [ 37 ] - xx [ 28 ] * xx [ 11 ] ) * xx [
13 ] + 0.265025 ; xx [ 45 ] = xx [ 13 ] * ( xx [ 23 ] + xx [ 18 ] * xx [ 6 ]
) + xx [ 13 ] * ( xx [ 32 ] - xx [ 12 ] * xx [ 11 ] ) - ( xx [ 11 ] * xx [ 30
] + xx [ 38 ] ) * xx [ 13 ] ; xx [ 46 ] = xx [ 13 ] * ( xx [ 24 ] + xx [ 7 ]
* xx [ 6 ] ) + xx [ 21 ] + xx [ 13 ] * ( xx [ 33 ] - xx [ 15 ] * xx [ 11 ] )
- xx [ 13 ] * ( xx [ 39 ] + xx [ 5 ] * xx [ 11 ] ) + xx [ 4 ] ; xx [ 1 ] =
0.0 ; xx [ 20 ] = - 1.0 ; xx [ 21 ] = xx [ 1 ] ; xx [ 22 ] = xx [ 1 ] ; xx [
23 ] = xx [ 1 ] ; xx [ 24 ] = xx [ 1 ] ; xx [ 25 ] = xx [ 1 ] ; xx [ 26 ] = -
xx [ 0 ] ; xx [ 2 ] = sm_core_compiler_computeSignedDistanceCxpolyBrick (
triped_a151ee3d_1_geometry_0 ( rtdv ) , triped_a151ee3d_1_geometry_1 ( rtdv )
, ( pm_math_Transform3 * ) ( xx + 40 ) , ( pm_math_Transform3 * ) ( xx + 20 )
) ; xx [ 3 ] = xx [ 0 ] * solverStateVector [ 22 ] ; xx [ 5 ] = cos ( xx [ 3
] ) ; xx [ 6 ] = xx [ 0 ] * solverStateVector [ 23 ] ; xx [ 7 ] = cos ( xx [
6 ] ) ; xx [ 8 ] = xx [ 5 ] * xx [ 7 ] ; xx [ 9 ] = xx [ 0 ] *
solverStateVector [ 24 ] ; xx [ 11 ] = sin ( xx [ 9 ] ) ; xx [ 12 ] = cos (
xx [ 9 ] ) ; xx [ 9 ] = sin ( xx [ 3 ] ) ; xx [ 3 ] = sin ( xx [ 6 ] ) ; xx [
6 ] = xx [ 9 ] * xx [ 3 ] ; xx [ 15 ] = xx [ 8 ] * xx [ 11 ] + xx [ 12 ] * xx
[ 6 ] ; xx [ 16 ] = 0.8660254037844386 ; xx [ 18 ] = 0.5000000000000001 ; xx
[ 27 ] = xx [ 6 ] * xx [ 11 ] - xx [ 12 ] * xx [ 8 ] ; xx [ 6 ] = xx [ 15 ] *
xx [ 16 ] - xx [ 18 ] * xx [ 27 ] ; xx [ 8 ] = xx [ 0 ] * solverStateVector [
28 ] ; xx [ 28 ] = cos ( xx [ 8 ] ) ; xx [ 30 ] = sin ( xx [ 8 ] ) ; xx [ 8 ]
= xx [ 7 ] * xx [ 9 ] ; xx [ 7 ] = xx [ 5 ] * xx [ 3 ] ; xx [ 3 ] = xx [ 8 ]
* xx [ 11 ] - xx [ 12 ] * xx [ 7 ] ; xx [ 5 ] = xx [ 12 ] * xx [ 8 ] + xx [ 7
] * xx [ 11 ] ; xx [ 7 ] = xx [ 18 ] * xx [ 3 ] + xx [ 5 ] * xx [ 16 ] ; xx [
8 ] = xx [ 6 ] * xx [ 28 ] + xx [ 30 ] * xx [ 7 ] ; xx [ 9 ] = xx [ 16 ] * xx
[ 3 ] - xx [ 5 ] * xx [ 18 ] ; xx [ 11 ] = xx [ 16 ] * xx [ 27 ] + xx [ 15 ]
* xx [ 18 ] ; xx [ 12 ] = xx [ 9 ] * xx [ 28 ] + xx [ 30 ] * xx [ 11 ] ; xx [
31 ] = - xx [ 12 ] ; xx [ 32 ] = xx [ 6 ] * xx [ 30 ] - xx [ 28 ] * xx [ 7 ]
; xx [ 33 ] = xx [ 28 ] * xx [ 11 ] - xx [ 9 ] * xx [ 30 ] ; xx [ 34 ] = xx [
32 ] * xx [ 10 ] ; xx [ 35 ] = 0.09427500000000011 ; xx [ 36 ] = xx [ 35 ] *
xx [ 33 ] + xx [ 12 ] * xx [ 10 ] ; xx [ 12 ] = xx [ 32 ] * xx [ 35 ] ; xx [
37 ] = - xx [ 34 ] ; xx [ 38 ] = - xx [ 36 ] ; xx [ 39 ] = xx [ 12 ] ;
pm_math_Vector3_cross_ra ( xx + 31 , xx + 37 , xx + 40 ) ; xx [ 37 ] = xx [
10 ] * xx [ 30 ] ; xx [ 38 ] = xx [ 17 ] * xx [ 30 ] ; xx [ 39 ] = xx [ 14 ]
+ xx [ 13 ] * ( xx [ 28 ] * xx [ 37 ] + xx [ 38 ] * xx [ 30 ] ) ; xx [ 43 ] =
- xx [ 9 ] ; xx [ 44 ] = - xx [ 7 ] ; xx [ 45 ] = xx [ 11 ] ; xx [ 46 ] =
0.4072249999999987 ; xx [ 47 ] = ( xx [ 28 ] * xx [ 38 ] - xx [ 37 ] * xx [
30 ] ) * xx [ 13 ] + xx [ 46 ] ; xx [ 28 ] = xx [ 47 ] * xx [ 7 ] ; xx [ 30 ]
= xx [ 39 ] * xx [ 11 ] + xx [ 47 ] * xx [ 9 ] ; xx [ 9 ] = xx [ 39 ] * xx [
7 ] ; xx [ 48 ] = - xx [ 28 ] ; xx [ 49 ] = xx [ 30 ] ; xx [ 50 ] = xx [ 9 ]
; pm_math_Vector3_cross_ra ( xx + 43 , xx + 48 , xx + 51 ) ; xx [ 43 ] = - xx
[ 5 ] ; xx [ 44 ] = xx [ 3 ] ; xx [ 45 ] = - xx [ 15 ] ; xx [ 7 ] = xx [ 19 ]
* xx [ 3 ] ; xx [ 11 ] = xx [ 15 ] * xx [ 29 ] - xx [ 5 ] * xx [ 19 ] ; xx [
5 ] = xx [ 29 ] * xx [ 3 ] ; xx [ 48 ] = - xx [ 7 ] ; xx [ 49 ] = xx [ 11 ] ;
xx [ 50 ] = xx [ 5 ] ; pm_math_Vector3_cross_ra ( xx + 43 , xx + 48 , xx + 54
) ; xx [ 3 ] = ( xx [ 54 ] - xx [ 7 ] * xx [ 27 ] ) * xx [ 13 ] - xx [ 29 ] ;
xx [ 7 ] = xx [ 3 ] * xx [ 16 ] ; xx [ 15 ] = ( xx [ 27 ] * xx [ 11 ] + xx [
55 ] ) * xx [ 13 ] ; xx [ 11 ] = xx [ 16 ] * xx [ 15 ] ; xx [ 57 ] = xx [ 8 ]
; xx [ 58 ] = xx [ 31 ] ; xx [ 59 ] = xx [ 32 ] ; xx [ 60 ] = xx [ 33 ] ; xx
[ 61 ] = ( xx [ 40 ] - xx [ 34 ] * xx [ 8 ] ) * xx [ 13 ] + xx [ 39 ] + ( xx
[ 51 ] - xx [ 6 ] * xx [ 28 ] ) * xx [ 13 ] + ( xx [ 16 ] * xx [ 7 ] - xx [
18 ] * xx [ 11 ] ) * xx [ 13 ] - xx [ 3 ] - 0.2267750000000001 ; xx [ 62 ] =
( xx [ 41 ] - xx [ 36 ] * xx [ 8 ] ) * xx [ 13 ] + ( xx [ 30 ] * xx [ 6 ] +
xx [ 52 ] ) * xx [ 13 ] + xx [ 13 ] * ( xx [ 16 ] * xx [ 11 ] + xx [ 18 ] *
xx [ 7 ] ) - xx [ 15 ] - 0.2294967320028763 ; xx [ 63 ] = xx [ 13 ] * ( xx [
42 ] + xx [ 12 ] * xx [ 8 ] ) + xx [ 47 ] + xx [ 13 ] * ( xx [ 53 ] + xx [ 6
] * xx [ 9 ] ) - xx [ 13 ] * ( xx [ 56 ] + xx [ 5 ] * xx [ 27 ] ) + xx [ 4 ]
; xx [ 3 ] = sm_core_compiler_computeSignedDistanceCxpolyBrick (
triped_a151ee3d_1_geometry_0 ( rtdv ) , triped_a151ee3d_1_geometry_1 ( rtdv )
, ( pm_math_Transform3 * ) ( xx + 57 ) , ( pm_math_Transform3 * ) ( xx + 20 )
) ; xx [ 5 ] = 0.4999999999999998 ; xx [ 6 ] = xx [ 0 ] * solverStateVector [
44 ] ; xx [ 7 ] = sin ( xx [ 6 ] ) ; xx [ 8 ] = xx [ 0 ] * solverStateVector
[ 45 ] ; xx [ 9 ] = sin ( xx [ 8 ] ) ; xx [ 11 ] = xx [ 7 ] * xx [ 9 ] ; xx [
12 ] = xx [ 0 ] * solverStateVector [ 46 ] ; xx [ 15 ] = sin ( xx [ 12 ] ) ;
xx [ 16 ] = cos ( xx [ 12 ] ) ; xx [ 12 ] = cos ( xx [ 6 ] ) ; xx [ 6 ] = cos
( xx [ 8 ] ) ; xx [ 8 ] = xx [ 12 ] * xx [ 6 ] ; xx [ 18 ] = xx [ 11 ] * xx [
15 ] - xx [ 16 ] * xx [ 8 ] ; xx [ 27 ] = xx [ 8 ] * xx [ 15 ] + xx [ 16 ] *
xx [ 11 ] ; xx [ 8 ] = 0.8660254037844387 ; xx [ 11 ] = xx [ 5 ] * xx [ 18 ]
+ xx [ 27 ] * xx [ 8 ] ; xx [ 28 ] = xx [ 0 ] * solverStateVector [ 50 ] ; xx
[ 0 ] = cos ( xx [ 28 ] ) ; xx [ 30 ] = sin ( xx [ 28 ] ) ; xx [ 28 ] = xx [
6 ] * xx [ 7 ] ; xx [ 6 ] = xx [ 12 ] * xx [ 9 ] ; xx [ 7 ] = xx [ 28 ] * xx
[ 15 ] - xx [ 16 ] * xx [ 6 ] ; xx [ 9 ] = xx [ 16 ] * xx [ 28 ] + xx [ 6 ] *
xx [ 15 ] ; xx [ 6 ] = xx [ 5 ] * xx [ 7 ] - xx [ 9 ] * xx [ 8 ] ; xx [ 12 ]
= xx [ 11 ] * xx [ 0 ] - xx [ 30 ] * xx [ 6 ] ; xx [ 15 ] = xx [ 9 ] * xx [ 5
] + xx [ 8 ] * xx [ 7 ] ; xx [ 16 ] = xx [ 8 ] * xx [ 18 ] - xx [ 27 ] * xx [
5 ] ; xx [ 28 ] = xx [ 15 ] * xx [ 0 ] + xx [ 30 ] * xx [ 16 ] ; xx [ 31 ] =
- xx [ 28 ] ; xx [ 32 ] = xx [ 11 ] * xx [ 30 ] + xx [ 0 ] * xx [ 6 ] ; xx [
33 ] = xx [ 0 ] * xx [ 16 ] - xx [ 15 ] * xx [ 30 ] ; xx [ 34 ] = xx [ 32 ] *
xx [ 10 ] ; xx [ 36 ] = xx [ 35 ] * xx [ 33 ] + xx [ 28 ] * xx [ 10 ] ; xx [
28 ] = xx [ 32 ] * xx [ 35 ] ; xx [ 37 ] = - xx [ 34 ] ; xx [ 38 ] = - xx [
36 ] ; xx [ 39 ] = xx [ 28 ] ; pm_math_Vector3_cross_ra ( xx + 31 , xx + 37 ,
xx + 40 ) ; xx [ 35 ] = xx [ 10 ] * xx [ 30 ] ; xx [ 10 ] = xx [ 17 ] * xx [
30 ] ; xx [ 17 ] = xx [ 14 ] + xx [ 13 ] * ( xx [ 0 ] * xx [ 35 ] + xx [ 10 ]
* xx [ 30 ] ) ; xx [ 14 ] = ( xx [ 0 ] * xx [ 10 ] - xx [ 35 ] * xx [ 30 ] )
* xx [ 13 ] + xx [ 46 ] ; xx [ 0 ] = xx [ 14 ] * xx [ 6 ] ; xx [ 37 ] = - xx
[ 15 ] ; xx [ 38 ] = xx [ 6 ] ; xx [ 39 ] = xx [ 16 ] ; xx [ 10 ] = xx [ 17 ]
* xx [ 16 ] + xx [ 15 ] * xx [ 14 ] ; xx [ 15 ] = xx [ 17 ] * xx [ 6 ] ; xx [
43 ] = xx [ 0 ] ; xx [ 44 ] = xx [ 10 ] ; xx [ 45 ] = - xx [ 15 ] ;
pm_math_Vector3_cross_ra ( xx + 37 , xx + 43 , xx + 46 ) ; xx [ 6 ] = xx [ 27
] * xx [ 29 ] - xx [ 9 ] * xx [ 19 ] ; xx [ 37 ] = - xx [ 9 ] ; xx [ 38 ] =
xx [ 7 ] ; xx [ 39 ] = - xx [ 27 ] ; xx [ 9 ] = xx [ 19 ] * xx [ 7 ] ; xx [
16 ] = xx [ 29 ] * xx [ 7 ] ; xx [ 43 ] = - xx [ 9 ] ; xx [ 44 ] = xx [ 6 ] ;
xx [ 45 ] = xx [ 16 ] ; pm_math_Vector3_cross_ra ( xx + 37 , xx + 43 , xx +
49 ) ; xx [ 7 ] = ( xx [ 18 ] * xx [ 6 ] + xx [ 50 ] ) * xx [ 13 ] ; xx [ 6 ]
= xx [ 8 ] * xx [ 7 ] ; xx [ 19 ] = ( xx [ 49 ] - xx [ 9 ] * xx [ 18 ] ) * xx
[ 13 ] - xx [ 29 ] ; xx [ 9 ] = xx [ 19 ] * xx [ 8 ] ; xx [ 52 ] = xx [ 12 ]
; xx [ 53 ] = xx [ 31 ] ; xx [ 54 ] = xx [ 32 ] ; xx [ 55 ] = xx [ 33 ] ; xx
[ 56 ] = ( xx [ 40 ] - xx [ 34 ] * xx [ 12 ] ) * xx [ 13 ] + xx [ 17 ] + ( xx
[ 11 ] * xx [ 0 ] + xx [ 46 ] ) * xx [ 13 ] + ( xx [ 5 ] * xx [ 6 ] + xx [ 8
] * xx [ 9 ] ) * xx [ 13 ] - xx [ 19 ] - 0.2267750000000002 ; xx [ 57 ] = (
xx [ 41 ] - xx [ 36 ] * xx [ 12 ] ) * xx [ 13 ] + ( xx [ 11 ] * xx [ 10 ] +
xx [ 47 ] ) * xx [ 13 ] + xx [ 13 ] * ( xx [ 8 ] * xx [ 6 ] - xx [ 5 ] * xx [
9 ] ) - xx [ 7 ] + 0.2294967320028762 ; xx [ 58 ] = xx [ 13 ] * ( xx [ 42 ] +
xx [ 28 ] * xx [ 12 ] ) + xx [ 14 ] + xx [ 13 ] * ( xx [ 48 ] - xx [ 11 ] *
xx [ 15 ] ) - xx [ 13 ] * ( xx [ 51 ] + xx [ 16 ] * xx [ 18 ] ) + xx [ 4 ] ;
xx [ 0 ] = sm_core_compiler_computeSignedDistanceCxpolyBrick (
triped_a151ee3d_1_geometry_0 ( rtdv ) , triped_a151ee3d_1_geometry_1 ( rtdv )
, ( pm_math_Transform3 * ) ( xx + 52 ) , ( pm_math_Transform3 * ) ( xx + 20 )
) ; zeroCrossingsVector [ 0 ] = xx [ 2 ] ; zeroCrossingsVector [ 1 ] = xx [ 3
] ; zeroCrossingsVector [ 2 ] = xx [ 0 ] ; errorResult [ 0 ] = xx [ 1 ] ;
return NULL ; }
