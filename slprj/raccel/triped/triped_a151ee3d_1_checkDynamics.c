#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "triped_a151ee3d_1_geometries.h"
PmfMessageId triped_a151ee3d_1_checkDynamics ( const
RuntimeDerivedValuesBundle * rtdv , const double * state , const double *
input , const double * inputDot , const double * inputDdot , const double *
discreteState , double * result , NeuDiagnosticManager * neDiagMgr ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; double xx [ 116 ] ; ( void ) rtdvd ; ( void ) rtdvi ; (
void ) input ; ( void ) inputDot ; ( void ) inputDdot ; ( void )
discreteState ; ( void ) neDiagMgr ; xx [ 0 ] = 0.5 ; xx [ 1 ] = xx [ 0 ] *
state [ 6 ] ; xx [ 2 ] = cos ( xx [ 1 ] ) ; xx [ 3 ] = xx [ 0 ] * state [ 0 ]
; xx [ 4 ] = sin ( xx [ 3 ] ) ; xx [ 5 ] = xx [ 0 ] * state [ 1 ] ; xx [ 6 ]
= sin ( xx [ 5 ] ) ; xx [ 7 ] = xx [ 4 ] * xx [ 6 ] ; xx [ 8 ] = xx [ 0 ] *
state [ 2 ] ; xx [ 9 ] = sin ( xx [ 8 ] ) ; xx [ 10 ] = cos ( xx [ 8 ] ) ; xx
[ 8 ] = cos ( xx [ 3 ] ) ; xx [ 3 ] = cos ( xx [ 5 ] ) ; xx [ 5 ] = xx [ 8 ]
* xx [ 3 ] ; xx [ 11 ] = xx [ 7 ] * xx [ 9 ] - xx [ 10 ] * xx [ 5 ] ; xx [ 12
] = sin ( xx [ 1 ] ) ; xx [ 1 ] = xx [ 3 ] * xx [ 4 ] ; xx [ 3 ] = xx [ 8 ] *
xx [ 6 ] ; xx [ 4 ] = xx [ 1 ] * xx [ 9 ] - xx [ 10 ] * xx [ 3 ] ; xx [ 6 ] =
xx [ 2 ] * xx [ 11 ] - xx [ 12 ] * xx [ 4 ] ; xx [ 8 ] = xx [ 5 ] * xx [ 9 ]
+ xx [ 10 ] * xx [ 7 ] ; xx [ 5 ] = xx [ 10 ] * xx [ 1 ] + xx [ 3 ] * xx [ 9
] ; xx [ 1 ] = xx [ 8 ] * xx [ 12 ] - xx [ 5 ] * xx [ 2 ] ; xx [ 3 ] = xx [
12 ] * xx [ 11 ] + xx [ 2 ] * xx [ 4 ] ; xx [ 7 ] = xx [ 8 ] * xx [ 2 ] + xx
[ 5 ] * xx [ 12 ] ; xx [ 13 ] = - xx [ 7 ] ; xx [ 14 ] = xx [ 1 ] ; xx [ 15 ]
= xx [ 3 ] ; xx [ 16 ] = xx [ 13 ] ; xx [ 17 ] = 0.452725 ; xx [ 18 ] = xx [
3 ] * xx [ 17 ] ; xx [ 19 ] = 0.09427500000000004 ; xx [ 20 ] = xx [ 7 ] * xx
[ 19 ] + xx [ 17 ] * xx [ 1 ] ; xx [ 7 ] = xx [ 3 ] * xx [ 19 ] ; xx [ 21 ] =
- xx [ 18 ] ; xx [ 22 ] = xx [ 20 ] ; xx [ 23 ] = xx [ 7 ] ;
pm_math_Vector3_cross_ra ( xx + 14 , xx + 21 , xx + 24 ) ; xx [ 14 ] = 2.0 ;
xx [ 15 ] = 0.1399750000000002 ; xx [ 16 ] = 0.4527250000000002 ; xx [ 21 ] =
xx [ 16 ] * xx [ 12 ] ; xx [ 22 ] = 1.405725 ; xx [ 23 ] = xx [ 22 ] * xx [
12 ] ; xx [ 27 ] = xx [ 15 ] + xx [ 14 ] * ( xx [ 2 ] * xx [ 21 ] + xx [ 23 ]
* xx [ 12 ] ) ; xx [ 28 ] = ( xx [ 2 ] * xx [ 23 ] - xx [ 21 ] * xx [ 12 ] )
* xx [ 14 ] + 0.4072249999999988 ; xx [ 21 ] = xx [ 28 ] * xx [ 4 ] ; xx [ 29
] = xx [ 5 ] ; xx [ 30 ] = - xx [ 4 ] ; xx [ 31 ] = xx [ 8 ] ; xx [ 23 ] = xx
[ 8 ] * xx [ 27 ] - xx [ 28 ] * xx [ 5 ] ; xx [ 32 ] = xx [ 27 ] * xx [ 4 ] ;
xx [ 33 ] = - xx [ 21 ] ; xx [ 34 ] = xx [ 23 ] ; xx [ 35 ] = xx [ 32 ] ;
pm_math_Vector3_cross_ra ( xx + 29 , xx + 33 , xx + 36 ) ; xx [ 29 ] = - xx [
5 ] ; xx [ 30 ] = xx [ 4 ] ; xx [ 31 ] = - xx [ 8 ] ; xx [ 33 ] =
8.499999999999917e-3 ; xx [ 34 ] = xx [ 33 ] * xx [ 4 ] ; xx [ 35 ] =
0.09430000000000001 ; xx [ 39 ] = xx [ 8 ] * xx [ 35 ] - xx [ 5 ] * xx [ 33 ]
; xx [ 40 ] = xx [ 35 ] * xx [ 4 ] ; xx [ 41 ] = - xx [ 34 ] ; xx [ 42 ] = xx
[ 39 ] ; xx [ 43 ] = xx [ 40 ] ; pm_math_Vector3_cross_ra ( xx + 29 , xx + 41
, xx + 44 ) ; xx [ 29 ] = 1.0225 ; xx [ 47 ] = xx [ 6 ] ; xx [ 48 ] = xx [ 1
] ; xx [ 49 ] = xx [ 3 ] ; xx [ 50 ] = xx [ 13 ] ; xx [ 51 ] = ( xx [ 24 ] -
xx [ 18 ] * xx [ 6 ] ) * xx [ 14 ] - xx [ 19 ] + xx [ 27 ] + ( xx [ 21 ] * xx
[ 11 ] + xx [ 36 ] ) * xx [ 14 ] - ( xx [ 44 ] - xx [ 34 ] * xx [ 11 ] ) * xx
[ 14 ] + 0.3593 ; xx [ 52 ] = xx [ 14 ] * ( xx [ 25 ] + xx [ 20 ] * xx [ 6 ]
) + xx [ 14 ] * ( xx [ 37 ] - xx [ 23 ] * xx [ 11 ] ) - ( xx [ 11 ] * xx [ 39
] + xx [ 45 ] ) * xx [ 14 ] ; xx [ 53 ] = xx [ 14 ] * ( xx [ 26 ] + xx [ 7 ]
* xx [ 6 ] ) - xx [ 17 ] + xx [ 28 ] + xx [ 14 ] * ( xx [ 38 ] - xx [ 32 ] *
xx [ 11 ] ) - xx [ 14 ] * ( xx [ 46 ] + xx [ 40 ] * xx [ 11 ] ) + xx [ 29 ] ;
xx [ 1 ] = 1.0 ; xx [ 3 ] = 0.0 ; xx [ 36 ] = - xx [ 1 ] ; xx [ 37 ] = xx [ 3
] ; xx [ 38 ] = xx [ 3 ] ; xx [ 39 ] = xx [ 3 ] ; xx [ 40 ] = xx [ 3 ] ; xx [
41 ] = xx [ 3 ] ; xx [ 42 ] = - xx [ 0 ] ; xx [ 6 ] =
sm_core_compiler_computeProximityInfoCxpolyBrick (
triped_a151ee3d_1_geometry_0 ( rtdv ) , triped_a151ee3d_1_geometry_1 ( rtdv )
, ( pm_math_Transform3 * ) ( xx + 47 ) , ( pm_math_Transform3 * ) ( xx + 36 )
, ( pm_math_Vector3 * ) ( xx + 23 ) , ( pm_math_Vector3 * ) ( xx + 30 ) , (
pm_math_Vector3 * ) ( xx + 43 ) , ( pm_math_Vector3 * ) ( xx + 54 ) ) ; xx [
57 ] = xx [ 1 ] ; xx [ 58 ] = xx [ 3 ] ; xx [ 59 ] = xx [ 3 ] ; xx [ 60 ] =
xx [ 3 ] ; xx [ 61 ] = xx [ 3 ] ; xx [ 62 ] = xx [ 3 ] ; xx [ 63 ] = xx [ 3 ]
; xx [ 7 ] = - xx [ 17 ] ; xx [ 64 ] = xx [ 1 ] ; xx [ 65 ] = xx [ 3 ] ; xx [
66 ] = xx [ 3 ] ; xx [ 67 ] = xx [ 3 ] ; xx [ 68 ] = - xx [ 19 ] ; xx [ 69 ]
= xx [ 3 ] ; xx [ 70 ] = xx [ 7 ] ; xx [ 71 ] = xx [ 3 ] ; xx [ 72 ] = xx [ 3
] ; xx [ 73 ] = xx [ 3 ] ; xx [ 74 ] = xx [ 3 ] ; xx [ 75 ] = xx [ 3 ] ; xx [
76 ] = xx [ 3 ] ; xx [ 13 ] = ( xx [ 1 ] - ( xx [ 4 ] * xx [ 4 ] + xx [ 8 ] *
xx [ 8 ] ) * xx [ 14 ] ) * state [ 3 ] + xx [ 14 ] * xx [ 10 ] * xx [ 9 ] *
state [ 4 ] ; xx [ 10 ] = xx [ 14 ] * ( xx [ 4 ] * xx [ 11 ] + xx [ 5 ] * xx
[ 8 ] ) * state [ 3 ] + state [ 5 ] ; xx [ 18 ] = xx [ 10 ] * xx [ 12 ] ; xx
[ 19 ] = xx [ 13 ] * xx [ 12 ] ; xx [ 20 ] = xx [ 14 ] * ( xx [ 8 ] * xx [ 11
] - xx [ 5 ] * xx [ 4 ] ) * state [ 3 ] + ( xx [ 1 ] - xx [ 14 ] * xx [ 9 ] *
xx [ 9 ] ) * state [ 4 ] ; xx [ 4 ] = xx [ 28 ] * xx [ 20 ] + xx [ 20 ] * xx
[ 33 ] ; xx [ 5 ] = xx [ 12 ] * xx [ 4 ] ; xx [ 8 ] = xx [ 20 ] * xx [ 35 ] +
xx [ 20 ] * xx [ 27 ] ; xx [ 9 ] = xx [ 12 ] * xx [ 8 ] ; xx [ 11 ] =
1.405725 ; xx [ 77 ] = xx [ 13 ] - ( xx [ 2 ] * xx [ 18 ] + xx [ 19 ] * xx [
12 ] ) * xx [ 14 ] ; xx [ 78 ] = xx [ 20 ] + state [ 7 ] ; xx [ 79 ] = xx [
10 ] + xx [ 14 ] * ( xx [ 2 ] * xx [ 19 ] - xx [ 18 ] * xx [ 12 ] ) ; xx [ 80
] = xx [ 4 ] - ( xx [ 5 ] * xx [ 12 ] - xx [ 2 ] * xx [ 9 ] ) * xx [ 14 ] +
0.4527250000000003 * state [ 7 ] ; xx [ 81 ] = xx [ 10 ] * xx [ 27 ] - xx [
28 ] * xx [ 13 ] + xx [ 10 ] * xx [ 35 ] - xx [ 13 ] * xx [ 33 ] ; xx [ 82 ]
= xx [ 14 ] * ( xx [ 2 ] * xx [ 5 ] + xx [ 9 ] * xx [ 12 ] ) - xx [ 8 ] + xx
[ 11 ] * state [ 7 ] ; xx [ 2 ] = 1.0e6 ; xx [ 4 ] = 1000.0 ; xx [ 5 ] =
1.0e-4 ; xx [ 8 ] = 0.3 ; xx [ 9 ] = 0.2119573811760597 ; xx [ 10 ] =
9.126024771145405e-4 ; sm_core_compiler_computeContactWrenches ( xx [ 6 ] ,
xx + 30 , xx + 23 , xx + 54 , xx + 43 , xx + 57 , xx + 64 , xx + 36 , xx + 47
, xx + 71 , xx + 77 , 0 , 1 , xx [ 2 ] , xx [ 4 ] , xx [ 5 ] , xx [ 8 ] , xx
[ 9 ] , xx [ 10 ] , xx + 83 , xx + 89 ) ; xx [ 6 ] = xx [ 0 ] * state [ 22 ]
; xx [ 12 ] = cos ( xx [ 6 ] ) ; xx [ 13 ] = xx [ 0 ] * state [ 23 ] ; xx [
18 ] = cos ( xx [ 13 ] ) ; xx [ 19 ] = xx [ 12 ] * xx [ 18 ] ; xx [ 20 ] = xx
[ 0 ] * state [ 24 ] ; xx [ 21 ] = sin ( xx [ 20 ] ) ; xx [ 23 ] = cos ( xx [
20 ] ) ; xx [ 20 ] = sin ( xx [ 6 ] ) ; xx [ 6 ] = sin ( xx [ 13 ] ) ; xx [
13 ] = xx [ 20 ] * xx [ 6 ] ; xx [ 24 ] = xx [ 19 ] * xx [ 21 ] + xx [ 23 ] *
xx [ 13 ] ; xx [ 25 ] = 0.8660254037844386 ; xx [ 26 ] = 0.5000000000000001 ;
xx [ 27 ] = xx [ 13 ] * xx [ 21 ] - xx [ 23 ] * xx [ 19 ] ; xx [ 13 ] = xx [
24 ] * xx [ 25 ] - xx [ 26 ] * xx [ 27 ] ; xx [ 19 ] = xx [ 0 ] * state [ 28
] ; xx [ 28 ] = cos ( xx [ 19 ] ) ; xx [ 30 ] = sin ( xx [ 19 ] ) ; xx [ 19 ]
= xx [ 18 ] * xx [ 20 ] ; xx [ 18 ] = xx [ 12 ] * xx [ 6 ] ; xx [ 6 ] = xx [
19 ] * xx [ 21 ] - xx [ 23 ] * xx [ 18 ] ; xx [ 12 ] = xx [ 23 ] * xx [ 19 ]
+ xx [ 18 ] * xx [ 21 ] ; xx [ 18 ] = xx [ 26 ] * xx [ 6 ] + xx [ 12 ] * xx [
25 ] ; xx [ 19 ] = xx [ 13 ] * xx [ 28 ] + xx [ 30 ] * xx [ 18 ] ; xx [ 20 ]
= xx [ 25 ] * xx [ 6 ] - xx [ 12 ] * xx [ 26 ] ; xx [ 31 ] = xx [ 25 ] * xx [
27 ] + xx [ 24 ] * xx [ 26 ] ; xx [ 32 ] = xx [ 20 ] * xx [ 28 ] + xx [ 30 ]
* xx [ 31 ] ; xx [ 34 ] = - xx [ 32 ] ; xx [ 43 ] = xx [ 13 ] * xx [ 30 ] -
xx [ 28 ] * xx [ 18 ] ; xx [ 44 ] = xx [ 28 ] * xx [ 31 ] - xx [ 20 ] * xx [
30 ] ; xx [ 45 ] = xx [ 34 ] ; xx [ 46 ] = xx [ 43 ] ; xx [ 47 ] = xx [ 44 ]
; xx [ 48 ] = xx [ 43 ] * xx [ 17 ] ; xx [ 49 ] = 0.09427500000000011 ; xx [
50 ] = xx [ 49 ] * xx [ 44 ] + xx [ 32 ] * xx [ 17 ] ; xx [ 32 ] = xx [ 43 ]
* xx [ 49 ] ; xx [ 51 ] = - xx [ 48 ] ; xx [ 52 ] = - xx [ 50 ] ; xx [ 53 ] =
xx [ 32 ] ; pm_math_Vector3_cross_ra ( xx + 45 , xx + 51 , xx + 54 ) ; xx [
45 ] = xx [ 17 ] * xx [ 30 ] ; xx [ 46 ] = xx [ 22 ] * xx [ 30 ] ; xx [ 47 ]
= xx [ 15 ] + xx [ 14 ] * ( xx [ 28 ] * xx [ 45 ] + xx [ 46 ] * xx [ 30 ] ) ;
xx [ 51 ] = - xx [ 20 ] ; xx [ 52 ] = - xx [ 18 ] ; xx [ 53 ] = xx [ 31 ] ;
xx [ 64 ] = 0.4072249999999987 ; xx [ 65 ] = ( xx [ 28 ] * xx [ 46 ] - xx [
45 ] * xx [ 30 ] ) * xx [ 14 ] + xx [ 64 ] ; xx [ 45 ] = xx [ 65 ] * xx [ 18
] ; xx [ 46 ] = xx [ 47 ] * xx [ 31 ] + xx [ 65 ] * xx [ 20 ] ; xx [ 20 ] =
xx [ 47 ] * xx [ 18 ] ; xx [ 66 ] = - xx [ 45 ] ; xx [ 67 ] = xx [ 46 ] ; xx
[ 68 ] = xx [ 20 ] ; pm_math_Vector3_cross_ra ( xx + 51 , xx + 66 , xx + 77 )
; xx [ 51 ] = - xx [ 12 ] ; xx [ 52 ] = xx [ 6 ] ; xx [ 53 ] = - xx [ 24 ] ;
xx [ 18 ] = xx [ 33 ] * xx [ 6 ] ; xx [ 31 ] = xx [ 24 ] * xx [ 35 ] - xx [
12 ] * xx [ 33 ] ; xx [ 66 ] = xx [ 35 ] * xx [ 6 ] ; xx [ 67 ] = - xx [ 18 ]
; xx [ 68 ] = xx [ 31 ] ; xx [ 69 ] = xx [ 66 ] ; pm_math_Vector3_cross_ra (
xx + 51 , xx + 67 , xx + 80 ) ; xx [ 51 ] = ( xx [ 80 ] - xx [ 18 ] * xx [ 27
] ) * xx [ 14 ] - xx [ 35 ] ; xx [ 18 ] = xx [ 51 ] * xx [ 25 ] ; xx [ 52 ] =
( xx [ 27 ] * xx [ 31 ] + xx [ 81 ] ) * xx [ 14 ] ; xx [ 31 ] = xx [ 25 ] *
xx [ 52 ] ; xx [ 95 ] = xx [ 19 ] ; xx [ 96 ] = xx [ 34 ] ; xx [ 97 ] = xx [
43 ] ; xx [ 98 ] = xx [ 44 ] ; xx [ 99 ] = ( xx [ 54 ] - xx [ 48 ] * xx [ 19
] ) * xx [ 14 ] - xx [ 49 ] + xx [ 47 ] + ( xx [ 77 ] - xx [ 13 ] * xx [ 45 ]
) * xx [ 14 ] + ( xx [ 25 ] * xx [ 18 ] - xx [ 26 ] * xx [ 31 ] ) * xx [ 14 ]
- xx [ 51 ] - 0.1325 ; xx [ 100 ] = ( xx [ 55 ] - xx [ 50 ] * xx [ 19 ] ) *
xx [ 14 ] + ( xx [ 46 ] * xx [ 13 ] + xx [ 78 ] ) * xx [ 14 ] + xx [ 14 ] * (
xx [ 25 ] * xx [ 31 ] + xx [ 26 ] * xx [ 18 ] ) - xx [ 52 ] -
0.2294967320028763 ; xx [ 101 ] = xx [ 14 ] * ( xx [ 56 ] + xx [ 32 ] * xx [
19 ] ) - xx [ 17 ] + xx [ 65 ] + xx [ 14 ] * ( xx [ 79 ] + xx [ 13 ] * xx [
20 ] ) - xx [ 14 ] * ( xx [ 82 ] + xx [ 66 ] * xx [ 27 ] ) + xx [ 29 ] ; xx [
13 ] = sm_core_compiler_computeProximityInfoCxpolyBrick (
triped_a151ee3d_1_geometry_0 ( rtdv ) , triped_a151ee3d_1_geometry_1 ( rtdv )
, ( pm_math_Transform3 * ) ( xx + 95 ) , ( pm_math_Transform3 * ) ( xx + 36 )
, ( pm_math_Vector3 * ) ( xx + 18 ) , ( pm_math_Vector3 * ) ( xx + 43 ) , (
pm_math_Vector3 * ) ( xx + 50 ) , ( pm_math_Vector3 * ) ( xx + 53 ) ) ; xx [
102 ] = xx [ 1 ] ; xx [ 103 ] = xx [ 3 ] ; xx [ 104 ] = xx [ 3 ] ; xx [ 105 ]
= xx [ 3 ] ; xx [ 106 ] = - xx [ 49 ] ; xx [ 107 ] = xx [ 3 ] ; xx [ 108 ] =
xx [ 7 ] ; xx [ 3 ] = ( xx [ 1 ] - ( xx [ 6 ] * xx [ 6 ] + xx [ 24 ] * xx [
24 ] ) * xx [ 14 ] ) * state [ 25 ] + xx [ 14 ] * xx [ 23 ] * xx [ 21 ] *
state [ 26 ] ; xx [ 7 ] = xx [ 14 ] * ( xx [ 6 ] * xx [ 27 ] + xx [ 12 ] * xx
[ 24 ] ) * state [ 25 ] + state [ 27 ] ; xx [ 23 ] = xx [ 7 ] * xx [ 30 ] ;
xx [ 25 ] = xx [ 3 ] * xx [ 30 ] ; xx [ 26 ] = xx [ 14 ] * ( xx [ 24 ] * xx [
27 ] - xx [ 12 ] * xx [ 6 ] ) * state [ 25 ] + ( xx [ 1 ] - xx [ 14 ] * xx [
21 ] * xx [ 21 ] ) * state [ 26 ] ; xx [ 6 ] = xx [ 65 ] * xx [ 26 ] + xx [
26 ] * xx [ 33 ] ; xx [ 12 ] = xx [ 30 ] * xx [ 6 ] ; xx [ 21 ] = xx [ 26 ] *
xx [ 35 ] + xx [ 26 ] * xx [ 47 ] ; xx [ 24 ] = xx [ 30 ] * xx [ 21 ] ; xx [
77 ] = xx [ 3 ] - ( xx [ 28 ] * xx [ 23 ] + xx [ 25 ] * xx [ 30 ] ) * xx [ 14
] ; xx [ 78 ] = xx [ 26 ] + state [ 29 ] ; xx [ 79 ] = xx [ 7 ] + xx [ 14 ] *
( xx [ 28 ] * xx [ 25 ] - xx [ 23 ] * xx [ 30 ] ) ; xx [ 80 ] = xx [ 6 ] - (
xx [ 12 ] * xx [ 30 ] - xx [ 28 ] * xx [ 24 ] ) * xx [ 14 ] + xx [ 16 ] *
state [ 29 ] ; xx [ 81 ] = xx [ 7 ] * xx [ 47 ] - xx [ 65 ] * xx [ 3 ] + xx [
7 ] * xx [ 35 ] - xx [ 3 ] * xx [ 33 ] ; xx [ 82 ] = xx [ 14 ] * ( xx [ 28 ]
* xx [ 12 ] + xx [ 24 ] * xx [ 30 ] ) - xx [ 21 ] + xx [ 11 ] * state [ 29 ]
; sm_core_compiler_computeContactWrenches ( xx [ 13 ] , xx + 43 , xx + 18 ,
xx + 53 , xx + 50 , xx + 57 , xx + 102 , xx + 36 , xx + 95 , xx + 71 , xx +
77 , 0 , 1 , xx [ 2 ] , xx [ 4 ] , xx [ 5 ] , xx [ 8 ] , xx [ 9 ] , xx [ 10 ]
, xx + 23 , xx + 65 ) ; xx [ 3 ] = 0.4999999999999998 ; xx [ 6 ] = xx [ 0 ] *
state [ 44 ] ; xx [ 7 ] = sin ( xx [ 6 ] ) ; xx [ 12 ] = xx [ 0 ] * state [
45 ] ; xx [ 13 ] = sin ( xx [ 12 ] ) ; xx [ 18 ] = xx [ 7 ] * xx [ 13 ] ; xx
[ 19 ] = xx [ 0 ] * state [ 46 ] ; xx [ 20 ] = sin ( xx [ 19 ] ) ; xx [ 21 ]
= cos ( xx [ 19 ] ) ; xx [ 19 ] = cos ( xx [ 6 ] ) ; xx [ 6 ] = cos ( xx [ 12
] ) ; xx [ 12 ] = xx [ 19 ] * xx [ 6 ] ; xx [ 30 ] = xx [ 18 ] * xx [ 20 ] -
xx [ 21 ] * xx [ 12 ] ; xx [ 31 ] = xx [ 12 ] * xx [ 20 ] + xx [ 21 ] * xx [
18 ] ; xx [ 12 ] = 0.8660254037844387 ; xx [ 18 ] = xx [ 3 ] * xx [ 30 ] + xx
[ 31 ] * xx [ 12 ] ; xx [ 32 ] = xx [ 0 ] * state [ 50 ] ; xx [ 0 ] = cos (
xx [ 32 ] ) ; xx [ 34 ] = sin ( xx [ 32 ] ) ; xx [ 32 ] = xx [ 6 ] * xx [ 7 ]
; xx [ 6 ] = xx [ 19 ] * xx [ 13 ] ; xx [ 7 ] = xx [ 32 ] * xx [ 20 ] - xx [
21 ] * xx [ 6 ] ; xx [ 13 ] = xx [ 21 ] * xx [ 32 ] + xx [ 6 ] * xx [ 20 ] ;
xx [ 6 ] = xx [ 3 ] * xx [ 7 ] - xx [ 13 ] * xx [ 12 ] ; xx [ 19 ] = xx [ 18
] * xx [ 0 ] - xx [ 34 ] * xx [ 6 ] ; xx [ 32 ] = xx [ 13 ] * xx [ 3 ] + xx [
12 ] * xx [ 7 ] ; xx [ 43 ] = xx [ 12 ] * xx [ 30 ] - xx [ 31 ] * xx [ 3 ] ;
xx [ 44 ] = xx [ 32 ] * xx [ 0 ] + xx [ 34 ] * xx [ 43 ] ; xx [ 45 ] = - xx [
44 ] ; xx [ 46 ] = xx [ 18 ] * xx [ 34 ] + xx [ 0 ] * xx [ 6 ] ; xx [ 47 ] =
xx [ 0 ] * xx [ 43 ] - xx [ 32 ] * xx [ 34 ] ; xx [ 48 ] = xx [ 46 ] * xx [
17 ] ; xx [ 50 ] = xx [ 49 ] * xx [ 47 ] + xx [ 44 ] * xx [ 17 ] ; xx [ 44 ]
= xx [ 46 ] * xx [ 49 ] ; xx [ 51 ] = - xx [ 48 ] ; xx [ 52 ] = - xx [ 50 ] ;
xx [ 53 ] = xx [ 44 ] ; pm_math_Vector3_cross_ra ( xx + 45 , xx + 51 , xx +
54 ) ; xx [ 51 ] = xx [ 17 ] * xx [ 34 ] ; xx [ 52 ] = xx [ 22 ] * xx [ 34 ]
; xx [ 22 ] = xx [ 15 ] + xx [ 14 ] * ( xx [ 0 ] * xx [ 51 ] + xx [ 52 ] * xx
[ 34 ] ) ; xx [ 15 ] = ( xx [ 0 ] * xx [ 52 ] - xx [ 51 ] * xx [ 34 ] ) * xx
[ 14 ] + xx [ 64 ] ; xx [ 51 ] = xx [ 15 ] * xx [ 6 ] ; xx [ 77 ] = - xx [ 32
] ; xx [ 78 ] = xx [ 6 ] ; xx [ 79 ] = xx [ 43 ] ; xx [ 52 ] = xx [ 22 ] * xx
[ 43 ] + xx [ 32 ] * xx [ 15 ] ; xx [ 32 ] = xx [ 22 ] * xx [ 6 ] ; xx [ 80 ]
= xx [ 51 ] ; xx [ 81 ] = xx [ 52 ] ; xx [ 82 ] = - xx [ 32 ] ;
pm_math_Vector3_cross_ra ( xx + 77 , xx + 80 , xx + 95 ) ; xx [ 6 ] = xx [ 31
] * xx [ 35 ] - xx [ 13 ] * xx [ 33 ] ; xx [ 77 ] = - xx [ 13 ] ; xx [ 78 ] =
xx [ 7 ] ; xx [ 79 ] = - xx [ 31 ] ; xx [ 43 ] = xx [ 33 ] * xx [ 7 ] ; xx [
53 ] = xx [ 35 ] * xx [ 7 ] ; xx [ 80 ] = - xx [ 43 ] ; xx [ 81 ] = xx [ 6 ]
; xx [ 82 ] = xx [ 53 ] ; pm_math_Vector3_cross_ra ( xx + 77 , xx + 80 , xx +
98 ) ; xx [ 64 ] = ( xx [ 30 ] * xx [ 6 ] + xx [ 99 ] ) * xx [ 14 ] ; xx [ 6
] = xx [ 12 ] * xx [ 64 ] ; xx [ 77 ] = ( xx [ 98 ] - xx [ 43 ] * xx [ 30 ] )
* xx [ 14 ] - xx [ 35 ] ; xx [ 43 ] = xx [ 77 ] * xx [ 12 ] ; xx [ 109 ] = xx
[ 19 ] ; xx [ 110 ] = xx [ 45 ] ; xx [ 111 ] = xx [ 46 ] ; xx [ 112 ] = xx [
47 ] ; xx [ 113 ] = ( xx [ 54 ] - xx [ 48 ] * xx [ 19 ] ) * xx [ 14 ] - xx [
49 ] + xx [ 22 ] + ( xx [ 18 ] * xx [ 51 ] + xx [ 95 ] ) * xx [ 14 ] + ( xx [
3 ] * xx [ 6 ] + xx [ 12 ] * xx [ 43 ] ) * xx [ 14 ] - xx [ 77 ] -
0.1325000000000001 ; xx [ 114 ] = ( xx [ 55 ] - xx [ 50 ] * xx [ 19 ] ) * xx
[ 14 ] + ( xx [ 18 ] * xx [ 52 ] + xx [ 96 ] ) * xx [ 14 ] + xx [ 14 ] * ( xx
[ 12 ] * xx [ 6 ] - xx [ 3 ] * xx [ 43 ] ) - xx [ 64 ] + 0.2294967320028762 ;
xx [ 115 ] = xx [ 14 ] * ( xx [ 56 ] + xx [ 44 ] * xx [ 19 ] ) - xx [ 17 ] +
xx [ 15 ] + xx [ 14 ] * ( xx [ 97 ] - xx [ 18 ] * xx [ 32 ] ) - xx [ 14 ] * (
xx [ 100 ] + xx [ 53 ] * xx [ 30 ] ) + xx [ 29 ] ; xx [ 3 ] =
sm_core_compiler_computeProximityInfoCxpolyBrick (
triped_a151ee3d_1_geometry_0 ( rtdv ) , triped_a151ee3d_1_geometry_1 ( rtdv )
, ( pm_math_Transform3 * ) ( xx + 109 ) , ( pm_math_Transform3 * ) ( xx + 36
) , ( pm_math_Vector3 * ) ( xx + 17 ) , ( pm_math_Vector3 * ) ( xx + 43 ) , (
pm_math_Vector3 * ) ( xx + 46 ) , ( pm_math_Vector3 * ) ( xx + 49 ) ) ; xx [
6 ] = ( xx [ 1 ] - ( xx [ 7 ] * xx [ 7 ] + xx [ 31 ] * xx [ 31 ] ) * xx [ 14
] ) * state [ 47 ] + xx [ 14 ] * xx [ 21 ] * xx [ 20 ] * state [ 48 ] ; xx [
12 ] = xx [ 14 ] * ( xx [ 7 ] * xx [ 30 ] + xx [ 13 ] * xx [ 31 ] ) * state [
47 ] + state [ 49 ] ; xx [ 21 ] = xx [ 12 ] * xx [ 34 ] ; xx [ 29 ] = xx [ 6
] * xx [ 34 ] ; xx [ 32 ] = xx [ 14 ] * ( xx [ 31 ] * xx [ 30 ] - xx [ 13 ] *
xx [ 7 ] ) * state [ 47 ] + ( xx [ 1 ] - xx [ 14 ] * xx [ 20 ] * xx [ 20 ] )
* state [ 48 ] ; xx [ 1 ] = xx [ 15 ] * xx [ 32 ] + xx [ 32 ] * xx [ 33 ] ;
xx [ 7 ] = xx [ 34 ] * xx [ 1 ] ; xx [ 13 ] = xx [ 32 ] * xx [ 35 ] + xx [ 32
] * xx [ 22 ] ; xx [ 20 ] = xx [ 34 ] * xx [ 13 ] ; xx [ 77 ] = xx [ 6 ] - (
xx [ 0 ] * xx [ 21 ] + xx [ 29 ] * xx [ 34 ] ) * xx [ 14 ] ; xx [ 78 ] = xx [
32 ] + state [ 51 ] ; xx [ 79 ] = xx [ 12 ] + xx [ 14 ] * ( xx [ 0 ] * xx [
29 ] - xx [ 21 ] * xx [ 34 ] ) ; xx [ 80 ] = xx [ 1 ] - ( xx [ 7 ] * xx [ 34
] - xx [ 0 ] * xx [ 20 ] ) * xx [ 14 ] + xx [ 16 ] * state [ 51 ] ; xx [ 81 ]
= xx [ 12 ] * xx [ 22 ] - xx [ 15 ] * xx [ 6 ] + xx [ 12 ] * xx [ 35 ] - xx [
6 ] * xx [ 33 ] ; xx [ 82 ] = xx [ 14 ] * ( xx [ 0 ] * xx [ 7 ] + xx [ 20 ] *
xx [ 34 ] ) - xx [ 13 ] + xx [ 11 ] * state [ 51 ] ;
sm_core_compiler_computeContactWrenches ( xx [ 3 ] , xx + 43 , xx + 17 , xx +
49 , xx + 46 , xx + 57 , xx + 102 , xx + 36 , xx + 109 , xx + 71 , xx + 77 ,
0 , 1 , xx [ 2 ] , xx [ 4 ] , xx [ 5 ] , xx [ 8 ] , xx [ 9 ] , xx [ 10 ] , xx
+ 11 , xx + 29 ) ; xx [ 0 ] = xx [ 89 ] + xx [ 65 ] + xx [ 29 ] + xx [ 83 ] +
xx [ 23 ] + xx [ 11 ] ; xx [ 1 ] = xx [ 90 ] + xx [ 66 ] + xx [ 30 ] + xx [
84 ] + xx [ 24 ] + xx [ 12 ] ; xx [ 2 ] = xx [ 91 ] + xx [ 67 ] + xx [ 31 ] +
xx [ 85 ] + xx [ 25 ] + xx [ 13 ] ; xx [ 3 ] = xx [ 92 ] + xx [ 68 ] + xx [
32 ] + xx [ 86 ] + xx [ 26 ] + xx [ 14 ] ; xx [ 4 ] = xx [ 93 ] + xx [ 69 ] +
xx [ 33 ] + xx [ 87 ] + xx [ 27 ] + xx [ 15 ] ; xx [ 5 ] = xx [ 94 ] + xx [
70 ] + xx [ 34 ] + xx [ 88 ] + xx [ 28 ] + xx [ 16 ] ; result [ 0 ] = xx [ 0
] * xx [ 0 ] + xx [ 1 ] * xx [ 1 ] + xx [ 2 ] * xx [ 2 ] + xx [ 3 ] * xx [ 3
] + xx [ 4 ] * xx [ 4 ] + xx [ 5 ] * xx [ 5 ] ; return NULL ; }
