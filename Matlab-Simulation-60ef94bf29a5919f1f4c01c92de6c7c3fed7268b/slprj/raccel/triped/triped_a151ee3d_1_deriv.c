#include <math.h>
#include <string.h>
#include "pm_std.h"
#include "sm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "sm_ssci_run_time_errors.h"
#include "sm_RuntimeDerivedValuesBundle.h"
#include "triped_a151ee3d_1_geometries.h"
PmfMessageId triped_a151ee3d_1_compDerivs ( const RuntimeDerivedValuesBundle
* rtdv , const int * eqnEnableFlags , const double * state , const int *
modeVector , const double * input , const double * inputDot , const double *
inputDdot , const double * discreteState , double * deriv , double *
errorResult , NeuDiagnosticManager * neDiagMgr ) { const double * rtdvd =
rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv -> mInts . mValues ;
boolean_T bb [ 1 ] ; int ii [ 26 ] ; double xx [ 2325 ] ; ( void ) rtdvd ; (
void ) rtdvi ; ( void ) eqnEnableFlags ; ( void ) modeVector ; ( void )
discreteState ; ( void ) neDiagMgr ; xx [ 0 ] = 1.0 ; xx [ 1 ] = 0.5 ; xx [ 2
] = xx [ 1 ] * state [ 1 ] ; xx [ 3 ] = cos ( xx [ 2 ] ) ; xx [ 4 ] = xx [ 1
] * state [ 0 ] ; xx [ 5 ] = sin ( xx [ 4 ] ) ; xx [ 6 ] = xx [ 3 ] * xx [ 5
] ; xx [ 7 ] = xx [ 1 ] * state [ 2 ] ; xx [ 8 ] = sin ( xx [ 7 ] ) ; xx [ 9
] = cos ( xx [ 7 ] ) ; xx [ 7 ] = cos ( xx [ 4 ] ) ; xx [ 4 ] = sin ( xx [ 2
] ) ; xx [ 2 ] = xx [ 7 ] * xx [ 4 ] ; xx [ 10 ] = xx [ 6 ] * xx [ 8 ] - xx [
9 ] * xx [ 2 ] ; xx [ 11 ] = xx [ 10 ] * xx [ 10 ] ; xx [ 12 ] = xx [ 7 ] *
xx [ 3 ] ; xx [ 3 ] = xx [ 5 ] * xx [ 4 ] ; xx [ 4 ] = xx [ 12 ] * xx [ 8 ] +
xx [ 9 ] * xx [ 3 ] ; xx [ 5 ] = xx [ 4 ] * xx [ 4 ] ; xx [ 7 ] = 2.0 ; xx [
13 ] = xx [ 0 ] - ( xx [ 11 ] + xx [ 5 ] ) * xx [ 7 ] ; xx [ 14 ] = xx [ 3 ]
* xx [ 8 ] - xx [ 9 ] * xx [ 12 ] ; xx [ 3 ] = xx [ 4 ] * xx [ 14 ] ; xx [ 12
] = xx [ 9 ] * xx [ 6 ] + xx [ 2 ] * xx [ 8 ] ; xx [ 2 ] = xx [ 12 ] * xx [
10 ] ; xx [ 6 ] = xx [ 7 ] * ( xx [ 3 ] - xx [ 2 ] ) ; xx [ 15 ] = xx [ 10 ]
* xx [ 14 ] ; xx [ 16 ] = xx [ 12 ] * xx [ 4 ] ; xx [ 17 ] = xx [ 15 ] + xx [
16 ] ; xx [ 18 ] = xx [ 17 ] * xx [ 7 ] ; xx [ 19 ] = xx [ 13 ] ; xx [ 20 ] =
xx [ 6 ] ; xx [ 21 ] = xx [ 18 ] ; xx [ 22 ] = 7.00000000000001e-3 ; xx [ 23
] = 6.157000000000107e-4 ; xx [ 24 ] = xx [ 1 ] * state [ 6 ] ; xx [ 25 ] =
cos ( xx [ 24 ] ) ; xx [ 26 ] = xx [ 25 ] * xx [ 25 ] ; xx [ 27 ] = xx [ 7 ]
* xx [ 26 ] - xx [ 0 ] ; xx [ 28 ] = xx [ 23 ] * xx [ 27 ] ; xx [ 29 ] =
0.047 ; xx [ 30 ] = sin ( xx [ 24 ] ) ; xx [ 24 ] = xx [ 25 ] * xx [ 30 ] ;
xx [ 31 ] = xx [ 7 ] * xx [ 24 ] ; xx [ 32 ] = xx [ 29 ] * xx [ 31 ] ; xx [
33 ] = 1.405725 ; xx [ 34 ] = xx [ 33 ] * xx [ 30 ] ; xx [ 35 ] = xx [ 25 ] *
xx [ 34 ] ; xx [ 36 ] = 0.4527250000000002 ; xx [ 37 ] = xx [ 36 ] * xx [ 30
] ; xx [ 38 ] = xx [ 37 ] * xx [ 30 ] ; xx [ 39 ] = ( xx [ 35 ] - xx [ 38 ] )
* xx [ 7 ] ; xx [ 40 ] = xx [ 39 ] + 0.4072249999999988 ; xx [ 41 ] = 0.503 ;
xx [ 42 ] = xx [ 30 ] * xx [ 30 ] ; xx [ 43 ] = ( xx [ 26 ] + xx [ 42 ] ) *
xx [ 7 ] - xx [ 0 ] ; xx [ 26 ] = xx [ 41 ] * xx [ 43 ] * xx [ 43 ] ; xx [ 44
] = xx [ 40 ] * xx [ 26 ] ; xx [ 45 ] = xx [ 22 ] + xx [ 28 ] * xx [ 27 ] +
xx [ 32 ] * xx [ 31 ] + xx [ 40 ] * xx [ 44 ] ; xx [ 46 ] = xx [ 29 ] * xx [
27 ] ; xx [ 47 ] = xx [ 23 ] * xx [ 31 ] ; xx [ 48 ] = 0.1399750000000002 ;
xx [ 49 ] = xx [ 25 ] * xx [ 37 ] ; xx [ 37 ] = xx [ 34 ] * xx [ 30 ] ; xx [
34 ] = xx [ 7 ] * ( xx [ 49 ] + xx [ 37 ] ) ; xx [ 50 ] = xx [ 48 ] + xx [ 34
] ; xx [ 51 ] = xx [ 26 ] * xx [ 50 ] ; xx [ 52 ] = xx [ 46 ] * xx [ 31 ] -
xx [ 47 ] * xx [ 27 ] - xx [ 40 ] * xx [ 51 ] ; xx [ 53 ] =
0.09430000000000001 ; xx [ 54 ] = 8.499999999999917e-3 ; xx [ 55 ] = xx [ 54
] * xx [ 13 ] ; xx [ 56 ] = xx [ 53 ] * xx [ 18 ] - xx [ 55 ] ; xx [ 57 ] =
xx [ 45 ] * xx [ 13 ] + xx [ 18 ] * xx [ 52 ] - xx [ 44 ] * xx [ 56 ] ; xx [
58 ] = 5.000000000000011e-3 ; xx [ 59 ] = 0.04700000000000001 ; xx [ 60 ] =
1.14405441872875 ; ii [ 0 ] = factorSymmetricPosDef ( xx + 60 , 1 , xx + 61 )
; if ( ii [ 0 ] != 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'triped/TriPed/Leg_0/OpenSubChain/LL_revolute_Joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 61 ] = xx [ 59 ] / xx [ 60 ] ; xx [ 62 ] =
0.2277206750000001 ; xx [ 63 ] = xx [ 62 ] / xx [ 60 ] ; xx [ 64 ] = xx [ 59
] * xx [ 63 ] ; xx [ 65 ] = 0.707079675 ; xx [ 66 ] = xx [ 65 ] / xx [ 60 ] ;
xx [ 67 ] = xx [ 59 ] * xx [ 66 ] ; xx [ 68 ] = xx [ 43 ] * ( xx [ 64 ] * xx
[ 31 ] - xx [ 67 ] * xx [ 27 ] ) ; xx [ 69 ] = ( xx [ 64 ] * xx [ 27 ] + xx [
67 ] * xx [ 31 ] ) * xx [ 43 ] ; xx [ 64 ] = xx [ 68 ] * xx [ 50 ] + xx [ 40
] * xx [ 69 ] ; xx [ 67 ] = xx [ 65 ] * xx [ 63 ] ; xx [ 70 ] = xx [ 67 ] *
xx [ 31 ] ; xx [ 71 ] = xx [ 41 ] - xx [ 65 ] * xx [ 66 ] ; xx [ 72 ] = xx [
70 ] + xx [ 71 ] * xx [ 27 ] ; xx [ 73 ] = xx [ 41 ] - xx [ 62 ] * xx [ 63 ]
; xx [ 74 ] = xx [ 67 ] * xx [ 27 ] ; xx [ 67 ] = xx [ 31 ] * xx [ 73 ] + xx
[ 74 ] ; xx [ 75 ] = xx [ 72 ] * xx [ 31 ] - xx [ 67 ] * xx [ 27 ] ; xx [ 76
] = xx [ 73 ] * xx [ 27 ] - xx [ 70 ] ; xx [ 70 ] = xx [ 31 ] * xx [ 71 ] -
xx [ 74 ] ; xx [ 71 ] = xx [ 27 ] * xx [ 76 ] + xx [ 31 ] * xx [ 70 ] ; xx [
73 ] = xx [ 50 ] * xx [ 75 ] - xx [ 40 ] * xx [ 71 ] ; xx [ 74 ] = xx [ 67 ]
* xx [ 31 ] + xx [ 72 ] * xx [ 27 ] ; xx [ 67 ] = xx [ 27 ] * xx [ 70 ] - xx
[ 31 ] * xx [ 76 ] ; xx [ 70 ] = xx [ 74 ] * xx [ 50 ] - xx [ 40 ] * xx [ 67
] ; xx [ 72 ] = xx [ 58 ] + ( xx [ 59 ] - xx [ 59 ] * xx [ 61 ] ) * xx [ 43 ]
* xx [ 43 ] - xx [ 64 ] - xx [ 64 ] - ( xx [ 40 ] * xx [ 73 ] - xx [ 50 ] *
xx [ 70 ] ) ; xx [ 43 ] = xx [ 69 ] + xx [ 73 ] ; xx [ 64 ] = xx [ 54 ] * xx
[ 6 ] ; xx [ 69 ] = xx [ 53 ] * xx [ 6 ] ; xx [ 73 ] = xx [ 68 ] - xx [ 70 ]
; xx [ 68 ] = xx [ 72 ] * xx [ 6 ] - ( xx [ 43 ] * xx [ 64 ] + xx [ 69 ] * xx
[ 73 ] ) ; xx [ 70 ] = xx [ 32 ] * xx [ 27 ] - xx [ 28 ] * xx [ 31 ] - xx [
44 ] * xx [ 50 ] ; xx [ 28 ] = 8.000000000000011e-3 ; xx [ 32 ] = xx [ 28 ] +
xx [ 47 ] * xx [ 31 ] + xx [ 46 ] * xx [ 27 ] + xx [ 51 ] * xx [ 50 ] ; xx [
46 ] = xx [ 13 ] * xx [ 70 ] + xx [ 32 ] * xx [ 18 ] + xx [ 51 ] * xx [ 56 ]
; xx [ 76 ] = xx [ 57 ] ; xx [ 77 ] = xx [ 68 ] ; xx [ 78 ] = xx [ 46 ] ; xx
[ 79 ] = xx [ 64 ] ; xx [ 80 ] = xx [ 56 ] ; xx [ 81 ] = - xx [ 69 ] ; xx [
47 ] = 1.908 ; xx [ 82 ] = xx [ 47 ] + xx [ 71 ] ; xx [ 71 ] = xx [ 82 ] * xx
[ 64 ] - xx [ 69 ] * xx [ 75 ] - xx [ 43 ] * xx [ 6 ] ; xx [ 83 ] = xx [ 47 ]
+ xx [ 26 ] ; xx [ 26 ] = xx [ 18 ] * xx [ 51 ] - xx [ 44 ] * xx [ 13 ] + xx
[ 83 ] * xx [ 56 ] ; xx [ 84 ] = xx [ 47 ] + xx [ 74 ] ; xx [ 74 ] = xx [ 6 ]
* xx [ 73 ] + xx [ 64 ] * xx [ 67 ] - xx [ 84 ] * xx [ 69 ] ; xx [ 85 ] = xx
[ 71 ] ; xx [ 86 ] = xx [ 26 ] ; xx [ 87 ] = xx [ 74 ] ; xx [ 88 ] = xx [ 9 ]
* xx [ 8 ] ; xx [ 9 ] = xx [ 7 ] * xx [ 88 ] ; xx [ 89 ] = xx [ 54 ] * xx [ 9
] ; xx [ 90 ] = xx [ 45 ] * xx [ 9 ] + xx [ 44 ] * xx [ 89 ] ; xx [ 91 ] = xx
[ 0 ] - xx [ 7 ] * xx [ 8 ] * xx [ 8 ] ; xx [ 8 ] = xx [ 54 ] * xx [ 91 ] ;
xx [ 92 ] = xx [ 53 ] * xx [ 91 ] ; xx [ 93 ] = xx [ 72 ] * xx [ 91 ] - ( xx
[ 43 ] * xx [ 8 ] + xx [ 92 ] * xx [ 73 ] ) ; xx [ 94 ] = xx [ 9 ] * xx [ 70
] - xx [ 89 ] * xx [ 51 ] ; xx [ 95 ] = xx [ 90 ] ; xx [ 96 ] = xx [ 93 ] ;
xx [ 97 ] = xx [ 94 ] ; xx [ 98 ] = xx [ 82 ] * xx [ 8 ] - xx [ 92 ] * xx [
75 ] - xx [ 43 ] * xx [ 91 ] ; xx [ 99 ] = - ( xx [ 83 ] * xx [ 89 ] + xx [
44 ] * xx [ 9 ] ) ; xx [ 100 ] = xx [ 91 ] * xx [ 73 ] + xx [ 8 ] * xx [ 67 ]
- xx [ 84 ] * xx [ 92 ] ; xx [ 101 ] = pm_math_Vector3_dot_ra ( xx + 19 , xx
+ 95 ) + pm_math_Vector3_dot_ra ( xx + 79 , xx + 98 ) ; xx [ 95 ] = xx [ 52 ]
- xx [ 53 ] * xx [ 44 ] ; xx [ 96 ] = xx [ 32 ] + xx [ 53 ] * xx [ 51 ] ; xx
[ 97 ] = xx [ 51 ] + xx [ 83 ] * xx [ 53 ] ; xx [ 102 ] = xx [ 13 ] * xx [ 95
] + xx [ 96 ] * xx [ 18 ] + xx [ 97 ] * xx [ 56 ] ; xx [ 103 ] = xx [ 8 ] ;
xx [ 104 ] = - xx [ 89 ] ; xx [ 105 ] = - xx [ 92 ] ; xx [ 56 ] = xx [ 9 ] *
xx [ 95 ] - xx [ 97 ] * xx [ 89 ] ; xx [ 106 ] = pm_math_Vector3_dot_ra ( xx
+ 19 , xx + 76 ) + pm_math_Vector3_dot_ra ( xx + 79 , xx + 85 ) ; xx [ 107 ]
= xx [ 101 ] ; xx [ 108 ] = xx [ 102 ] ; xx [ 109 ] = xx [ 101 ] ; xx [ 110 ]
= xx [ 9 ] * xx [ 90 ] + xx [ 93 ] * xx [ 91 ] + pm_math_Vector3_dot_ra ( xx
+ 103 , xx + 98 ) ; xx [ 111 ] = xx [ 56 ] ; xx [ 112 ] = xx [ 102 ] ; xx [
113 ] = xx [ 56 ] ; xx [ 114 ] = xx [ 96 ] + xx [ 97 ] * xx [ 53 ] ; ii [ 0 ]
= factorSymmetricPosDef ( xx + 106 , 3 , xx + 76 ) ; xx [ 56 ] = 1.0e-6 ; ii
[ 1 ] = ( ii [ 0 ] != 0 && fabs ( cos ( state [ 1 ] ) ) < xx [ 56 ] ) ? 1 : 0
; if ( ii [ 1 ] != 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:GimbalLock" ,
 "'triped/TriPed/Leg_0/SubChain 0/LCS0_Gimbal_Joint' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes."
, neDiagMgr ) ; } if ( ii [ 0 ] + ii [ 1 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'triped/TriPed/Leg_0/SubChain 0/LCS0_Gimbal_Joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 76 ] = - xx [ 12 ] ; xx [ 77 ] = - xx [ 4 ] ; xx [ 115
] = xx [ 14 ] ; xx [ 116 ] = xx [ 76 ] ; xx [ 117 ] = xx [ 10 ] ; xx [ 118 ]
= xx [ 77 ] ; xx [ 78 ] = 0.07930000000000005 ; xx [ 85 ] =
0.02989999999999998 ; xx [ 86 ] = 0.105 ; xx [ 119 ] = - xx [ 78 ] ; xx [ 120
] = xx [ 85 ] ; xx [ 121 ] = - xx [ 86 ] ; pm_math_Vector3_cross_ra ( xx + 19
, xx + 119 , xx + 122 ) ; pm_math_Quaternion_xform_ra ( xx + 115 , xx + 122 ,
xx + 125 ) ; xx [ 87 ] = 0.1886 ; xx [ 122 ] = - xx [ 64 ] ; xx [ 123 ] = xx
[ 55 ] - xx [ 17 ] * xx [ 87 ] ; xx [ 124 ] = xx [ 69 ] ;
pm_math_Quaternion_xform_ra ( xx + 115 , xx + 122 , xx + 128 ) ; xx [ 17 ] =
xx [ 125 ] - xx [ 128 ] ; xx [ 122 ] = - ( xx [ 86 ] * xx [ 91 ] ) ; xx [ 123
] = xx [ 86 ] * xx [ 9 ] ; xx [ 124 ] = xx [ 85 ] * xx [ 9 ] + xx [ 78 ] * xx
[ 91 ] ; pm_math_Quaternion_xform_ra ( xx + 115 , xx + 122 , xx + 131 ) ; xx
[ 122 ] = - xx [ 8 ] ; xx [ 123 ] = xx [ 89 ] ; xx [ 124 ] = xx [ 92 ] ;
pm_math_Quaternion_xform_ra ( xx + 115 , xx + 122 , xx + 134 ) ; xx [ 55 ] =
xx [ 131 ] - xx [ 134 ] ; xx [ 122 ] = xx [ 76 ] ; xx [ 123 ] = xx [ 10 ] ;
xx [ 124 ] = xx [ 77 ] ; xx [ 76 ] = xx [ 4 ] * xx [ 78 ] ; xx [ 77 ] = xx [
4 ] * xx [ 85 ] ; xx [ 89 ] = xx [ 12 ] * xx [ 78 ] + xx [ 85 ] * xx [ 10 ] ;
xx [ 137 ] = - xx [ 76 ] ; xx [ 138 ] = xx [ 77 ] ; xx [ 139 ] = xx [ 89 ] ;
pm_math_Vector3_cross_ra ( xx + 122 , xx + 137 , xx + 140 ) ; xx [ 101 ] = xx
[ 12 ] * xx [ 53 ] ; xx [ 102 ] = xx [ 4 ] * xx [ 53 ] ; xx [ 137 ] = xx [ 7
] * ( xx [ 101 ] * xx [ 10 ] - xx [ 102 ] * xx [ 14 ] ) ; xx [ 138 ] = ( xx [
140 ] - xx [ 76 ] * xx [ 14 ] ) * xx [ 7 ] - xx [ 85 ] - xx [ 137 ] ; xx [
143 ] = xx [ 17 ] ; xx [ 144 ] = xx [ 55 ] ; xx [ 145 ] = xx [ 138 ] ;
solveSymmetricPosDef ( xx + 106 , xx + 143 , 3 , 1 , xx + 146 , xx + 149 ) ;
xx [ 149 ] = 0.9813587152233355 ; xx [ 150 ] = - 8.90329107482098e-3 ; xx [
151 ] = 0.04727447558555155 ; xx [ 152 ] = 0.1860669971310137 ; xx [ 76 ] =
xx [ 1 ] * input [ 1 ] ; xx [ 139 ] = 0.0960996545167382 ; xx [ 143 ] = sin (
xx [ 76 ] ) ; xx [ 144 ] = 1.177948454025794e-4 ; xx [ 145 ] =
0.9953717107322962 ; xx [ 153 ] = cos ( xx [ 76 ] ) ; xx [ 154 ] = - ( xx [
139 ] * xx [ 143 ] ) ; xx [ 155 ] = xx [ 144 ] * xx [ 143 ] ; xx [ 156 ] = xx
[ 145 ] * xx [ 143 ] ; pm_math_Quaternion_compose_ra ( xx + 149 , xx + 153 ,
xx + 157 ) ; xx [ 149 ] = 0.9988422572316213 ; xx [ 150 ] = -
6.00792342022948e-5 ; xx [ 151 ] = - 0.04810551968680427 ; xx [ 152 ] =
2.312115552059532e-5 ; xx [ 153 ] = state [ 8 ] ; xx [ 154 ] = state [ 9 ] ;
xx [ 155 ] = state [ 10 ] ; xx [ 156 ] = state [ 11 ] ; xx [ 76 ] =
0.9999999999996456 ; xx [ 143 ] = 1.335114243000915e-9 ; xx [ 161 ] =
1.564242624680818e-7 ; xx [ 162 ] = 8.27384461422298e-7 ; xx [ 163 ] = - xx [
76 ] ; xx [ 164 ] = xx [ 143 ] ; xx [ 165 ] = xx [ 161 ] ; xx [ 166 ] = - xx
[ 162 ] ; pm_math_Quaternion_composeInverse_ra ( xx + 153 , xx + 163 , xx +
167 ) ; pm_math_Quaternion_compose_ra ( xx + 149 , xx + 167 , xx + 171 ) ;
pm_math_Quaternion_compose_ra ( xx + 157 , xx + 171 , xx + 167 ) ; xx [ 175 ]
= - 2.009909055578571e-12 ; xx [ 176 ] = 1.214615603282308e-6 ; xx [ 177 ] =
2.881763323693879e-12 ; pm_math_Quaternion_xform_ra ( xx + 167 , xx + 175 ,
xx + 178 ) ; xx [ 181 ] = 2.009909055578572e-12 ; xx [ 182 ] = -
1.21461560328232e-6 ; xx [ 183 ] = - 2.881763259213495e-12 ;
pm_math_Quaternion_xform_ra ( xx + 171 , xx + 181 , xx + 184 ) ;
pm_math_Quaternion_xform_ra ( xx + 157 , xx + 184 , xx + 187 ) ; xx [ 184 ] =
xx [ 178 ] + xx [ 187 ] ; xx [ 185 ] = 7.692353462841686e-11 ; xx [ 186 ] = -
1.639390781147449e-9 ; xx [ 190 ] = - 6.538584589845958e-16 ; xx [ 191 ] =
4.94070463963532e-7 ; xx [ 192 ] = xx [ 185 ] ; xx [ 193 ] = xx [ 186 ] ; xx
[ 194 ] = xx [ 185 ] ; xx [ 195 ] = 1.225711801621771e-4 ; xx [ 196 ] = xx [
190 ] ; xx [ 197 ] = xx [ 186 ] ; xx [ 198 ] = xx [ 190 ] ; xx [ 199 ] =
1.228070472752771e-4 ; ii [ 0 ] = factorSymmetricPosDef ( xx + 191 , 3 , xx +
200 ) ; if ( ii [ 0 ] != 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'triped/TriPed/Leg_0/SubChain 1/Coupling01_1_Spherical_Joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } memcpy ( xx + 200 , xx + 191 , 9 * sizeof ( double ) ) ; xx
[ 209 ] = - 1.197569081236243e-6 ; xx [ 210 ] = - 1.474914827216787e-10 ; xx
[ 211 ] = - 0.05448810068457099 ; pm_math_Quaternion_xform_ra ( xx + 167 , xx
+ 209 , xx + 212 ) ; xx [ 215 ] = 1.231982419222245e-6 ; xx [ 216 ] = -
1.462051776775044e-10 ; xx [ 217 ] = - 0.05551189931542364 ;
pm_math_Quaternion_xform_ra ( xx + 171 , xx + 215 , xx + 218 ) ;
pm_math_Quaternion_xform_ra ( xx + 157 , xx + 218 , xx + 221 ) ; xx [ 185 ] =
xx [ 212 ] + xx [ 221 ] ; xx [ 218 ] = - 9.016810066118371e-8 ; xx [ 219 ] =
0.05448810068412172 ; xx [ 220 ] = - 1.455097835249509e-10 ;
pm_math_Quaternion_xform_ra ( xx + 167 , xx + 218 , xx + 224 ) ; xx [ 227 ] =
- 9.18564808057805e-8 ; xx [ 228 ] = 0.05551189931573034 ; xx [ 229 ] = -
1.482438229960606e-10 ; pm_math_Quaternion_xform_ra ( xx + 171 , xx + 227 ,
xx + 230 ) ; pm_math_Quaternion_xform_ra ( xx + 157 , xx + 230 , xx + 233 ) ;
xx [ 186 ] = xx [ 224 ] + xx [ 233 ] ; xx [ 230 ] = - xx [ 184 ] ; xx [ 231 ]
= - xx [ 185 ] ; xx [ 232 ] = - xx [ 186 ] ; solveSymmetricPosDef ( xx + 200
, xx + 230 , 3 , 1 , xx + 236 , xx + 239 ) ; xx [ 190 ] = xx [ 126 ] - xx [
129 ] ; xx [ 230 ] = xx [ 132 ] - xx [ 135 ] ; xx [ 231 ] = ( xx [ 4 ] * xx [
102 ] + xx [ 12 ] * xx [ 101 ] ) * xx [ 7 ] - xx [ 53 ] ; xx [ 232 ] = xx [ 7
] * ( xx [ 141 ] + xx [ 77 ] * xx [ 14 ] ) - xx [ 78 ] - xx [ 231 ] ; xx [
239 ] = xx [ 190 ] ; xx [ 240 ] = xx [ 230 ] ; xx [ 241 ] = xx [ 232 ] ;
solveSymmetricPosDef ( xx + 106 , xx + 239 , 3 , 1 , xx + 242 , xx + 245 ) ;
xx [ 77 ] = xx [ 179 ] + xx [ 188 ] ; xx [ 239 ] = xx [ 213 ] + xx [ 222 ] ;
xx [ 240 ] = xx [ 225 ] + xx [ 234 ] ; xx [ 245 ] = - xx [ 77 ] ; xx [ 246 ]
= - xx [ 239 ] ; xx [ 247 ] = - xx [ 240 ] ; solveSymmetricPosDef ( xx + 200
, xx + 245 , 3 , 1 , xx + 248 , xx + 251 ) ; xx [ 241 ] = xx [ 242 ] * xx [
17 ] + xx [ 243 ] * xx [ 55 ] + xx [ 244 ] * xx [ 138 ] - xx [ 184 ] * xx [
248 ] - xx [ 185 ] * xx [ 249 ] - xx [ 186 ] * xx [ 250 ] ; xx [ 125 ] = xx [
127 ] - xx [ 130 ] ; xx [ 126 ] = xx [ 133 ] - xx [ 136 ] ; xx [ 127 ] = ( xx
[ 101 ] * xx [ 14 ] + xx [ 102 ] * xx [ 10 ] ) * xx [ 7 ] ; xx [ 101 ] = xx [
7 ] * ( xx [ 142 ] + xx [ 89 ] * xx [ 14 ] ) - xx [ 127 ] ; xx [ 131 ] = xx [
125 ] ; xx [ 132 ] = xx [ 126 ] ; xx [ 133 ] = xx [ 101 ] ;
solveSymmetricPosDef ( xx + 106 , xx + 131 , 3 , 1 , xx + 140 , xx + 245 ) ;
xx [ 89 ] = xx [ 180 ] + xx [ 189 ] ; xx [ 131 ] = xx [ 214 ] + xx [ 223 ] ;
xx [ 132 ] = xx [ 226 ] + xx [ 235 ] ; xx [ 178 ] = - xx [ 89 ] ; xx [ 179 ]
= - xx [ 131 ] ; xx [ 180 ] = - xx [ 132 ] ; solveSymmetricPosDef ( xx + 200
, xx + 178 , 3 , 1 , xx + 187 , xx + 212 ) ; xx [ 133 ] = xx [ 140 ] * xx [
17 ] + xx [ 141 ] * xx [ 55 ] + xx [ 142 ] * xx [ 138 ] - xx [ 184 ] * xx [
187 ] - xx [ 185 ] * xx [ 188 ] - xx [ 186 ] * xx [ 189 ] ; xx [ 178 ] =
0.07930000000000012 ; xx [ 179 ] = 0.02990000000000002 ; xx [ 180 ] =
0.1049999999999999 ; xx [ 212 ] = - xx [ 178 ] ; xx [ 213 ] = - xx [ 179 ] ;
xx [ 214 ] = - xx [ 180 ] ; pm_math_Vector3_cross_ra ( xx + 19 , xx + 212 ,
xx + 221 ) ; pm_math_Quaternion_xform_ra ( xx + 115 , xx + 221 , xx + 224 ) ;
xx [ 221 ] = xx [ 224 ] - xx [ 128 ] ; xx [ 233 ] = - ( xx [ 180 ] * xx [ 91
] ) ; xx [ 234 ] = xx [ 180 ] * xx [ 9 ] ; xx [ 235 ] = xx [ 178 ] * xx [ 91
] - xx [ 179 ] * xx [ 9 ] ; pm_math_Quaternion_xform_ra ( xx + 115 , xx + 233
, xx + 245 ) ; xx [ 128 ] = xx [ 245 ] - xx [ 134 ] ; xx [ 134 ] = xx [ 4 ] *
xx [ 178 ] ; xx [ 222 ] = xx [ 4 ] * xx [ 179 ] ; xx [ 223 ] = xx [ 179 ] *
xx [ 10 ] - xx [ 12 ] * xx [ 178 ] ; xx [ 233 ] = - xx [ 134 ] ; xx [ 234 ] =
- xx [ 222 ] ; xx [ 235 ] = - xx [ 223 ] ; pm_math_Vector3_cross_ra ( xx +
122 , xx + 233 , xx + 251 ) ; xx [ 233 ] = xx [ 179 ] + ( xx [ 251 ] - xx [
134 ] * xx [ 14 ] ) * xx [ 7 ] - xx [ 137 ] ; xx [ 254 ] = xx [ 221 ] ; xx [
255 ] = xx [ 128 ] ; xx [ 256 ] = xx [ 233 ] ; solveSymmetricPosDef ( xx +
106 , xx + 254 , 3 , 1 , xx + 257 , xx + 260 ) ; xx [ 134 ] = xx [ 257 ] * xx
[ 17 ] + xx [ 258 ] * xx [ 55 ] + xx [ 259 ] * xx [ 138 ] ; xx [ 137 ] = xx [
225 ] - xx [ 129 ] ; xx [ 129 ] = xx [ 246 ] - xx [ 135 ] ; xx [ 135 ] = xx [
7 ] * ( xx [ 252 ] - xx [ 222 ] * xx [ 14 ] ) - xx [ 178 ] - xx [ 231 ] ; xx
[ 254 ] = xx [ 137 ] ; xx [ 255 ] = xx [ 129 ] ; xx [ 256 ] = xx [ 135 ] ;
solveSymmetricPosDef ( xx + 106 , xx + 254 , 3 , 1 , xx + 260 , xx + 263 ) ;
xx [ 222 ] = xx [ 260 ] * xx [ 17 ] + xx [ 261 ] * xx [ 55 ] + xx [ 262 ] *
xx [ 138 ] ; xx [ 224 ] = xx [ 226 ] - xx [ 130 ] ; xx [ 130 ] = xx [ 247 ] -
xx [ 136 ] ; xx [ 136 ] = xx [ 7 ] * ( xx [ 253 ] - xx [ 223 ] * xx [ 14 ] )
- xx [ 127 ] ; xx [ 245 ] = xx [ 224 ] ; xx [ 246 ] = xx [ 130 ] ; xx [ 247 ]
= xx [ 136 ] ; solveSymmetricPosDef ( xx + 106 , xx + 245 , 3 , 1 , xx + 251
, xx + 254 ) ; xx [ 127 ] = xx [ 251 ] * xx [ 17 ] + xx [ 252 ] * xx [ 55 ] +
xx [ 253 ] * xx [ 138 ] ; xx [ 223 ] = 0.0 ; xx [ 225 ] =
7.427230677621783e-3 ; xx [ 226 ] = 0.01 ; xx [ 231 ] = 0.7071067811865476 ;
xx [ 234 ] = xx [ 1 ] * input [ 0 ] ; xx [ 235 ] = xx [ 231 ] * cos ( xx [
234 ] ) ; xx [ 245 ] = xx [ 226 ] * xx [ 235 ] ; xx [ 246 ] = xx [ 231 ] *
sin ( xx [ 234 ] ) ; xx [ 234 ] = xx [ 226 ] * xx [ 246 ] ; xx [ 247 ] =
9.300000000000017e-3 ; xx [ 254 ] = xx [ 33 ] - xx [ 34 ] + xx [ 50 ] - ( xx
[ 7 ] * ( xx [ 245 ] * xx [ 246 ] - xx [ 234 ] * xx [ 235 ] ) - xx [ 247 ] )
; xx [ 34 ] = 9.999999999999957e-3 ; xx [ 255 ] = xx [ 245 ] * xx [ 235 ] ;
xx [ 245 ] = xx [ 234 ] * xx [ 246 ] ; xx [ 234 ] = 0.0555 ; xx [ 256 ] = xx
[ 40 ] - ( xx [ 36 ] + xx [ 39 ] ) - ( ( xx [ 255 ] + xx [ 245 ] ) * xx [ 7 ]
- xx [ 234 ] ) ; xx [ 263 ] = xx [ 254 ] ; xx [ 264 ] = - ( xx [ 34 ] - ( xx
[ 255 ] + xx [ 245 ] ) * xx [ 7 ] ) ; xx [ 265 ] = xx [ 256 ] ; xx [ 39 ] =
xx [ 246 ] * xx [ 246 ] ; xx [ 245 ] = ( xx [ 39 ] + xx [ 39 ] ) * xx [ 7 ] ;
xx [ 255 ] = xx [ 0 ] - xx [ 245 ] ; xx [ 266 ] = xx [ 235 ] * xx [ 246 ] ;
xx [ 267 ] = xx [ 266 ] - xx [ 266 ] ; xx [ 268 ] = xx [ 7 ] * xx [ 267 ] ;
xx [ 269 ] = xx [ 266 ] + xx [ 266 ] ; xx [ 270 ] = xx [ 269 ] * xx [ 7 ] ;
xx [ 271 ] = xx [ 255 ] ; xx [ 272 ] = xx [ 268 ] ; xx [ 273 ] = - xx [ 270 ]
; xx [ 274 ] = pm_math_Vector3_dot_ra ( xx + 263 , xx + 271 ) ; xx [ 271 ] =
xx [ 235 ] * xx [ 235 ] ; xx [ 272 ] = xx [ 39 ] - xx [ 271 ] ; xx [ 273 ] =
xx [ 7 ] * xx [ 272 ] ; xx [ 275 ] = 2.220446049250313e-16 ; xx [ 276 ] =
0.4527250000000003 ; xx [ 277 ] = xx [ 276 ] * xx [ 30 ] ; xx [ 278 ] =
1.405725 ; xx [ 279 ] = xx [ 278 ] * xx [ 30 ] ; xx [ 280 ] = ( xx [ 25 ] *
xx [ 277 ] + xx [ 279 ] * xx [ 30 ] ) * xx [ 7 ] ; xx [ 281 ] = xx [ 275 ] -
( xx [ 280 ] - ( xx [ 49 ] + xx [ 37 ] ) * xx [ 7 ] ) ; xx [ 37 ] = xx [ 7 ]
* ( xx [ 25 ] * xx [ 279 ] - xx [ 277 ] * xx [ 30 ] ) ; xx [ 49 ] =
1.110223024625157e-16 ; xx [ 277 ] = xx [ 7 ] * ( xx [ 38 ] - xx [ 35 ] ) +
xx [ 37 ] + xx [ 49 ] ; xx [ 35 ] = xx [ 266 ] + xx [ 266 ] ; xx [ 38 ] = xx
[ 35 ] * xx [ 7 ] ; xx [ 282 ] = - xx [ 38 ] ; xx [ 283 ] = xx [ 0 ] - ( xx [
39 ] + xx [ 271 ] ) * xx [ 7 ] ; xx [ 284 ] = xx [ 273 ] ; xx [ 266 ] =
pm_math_Vector3_dot_ra ( xx + 263 , xx + 282 ) ; xx [ 279 ] = xx [ 274 ] * xx
[ 274 ] ; xx [ 282 ] = xx [ 266 ] * xx [ 266 ] ; xx [ 283 ] = xx [ 279 ] + xx
[ 282 ] ; xx [ 284 ] = xx [ 283 ] == 0.0 ? 0.0 : ( xx [ 274 ] * ( xx [ 273 ]
* xx [ 281 ] - xx [ 277 ] * xx [ 38 ] ) - xx [ 266 ] * ( xx [ 277 ] * xx [
255 ] - xx [ 270 ] * xx [ 281 ] ) ) / xx [ 283 ] ; xx [ 285 ] = xx [ 231 ] *
xx [ 30 ] ; xx [ 286 ] = xx [ 285 ] * xx [ 285 ] ; xx [ 287 ] = xx [ 0 ] - (
xx [ 286 ] + xx [ 286 ] ) * xx [ 7 ] ; xx [ 288 ] = xx [ 231 ] * xx [ 25 ] ;
xx [ 289 ] = xx [ 288 ] * xx [ 285 ] ; xx [ 290 ] = ( xx [ 289 ] + xx [ 289 ]
) * xx [ 7 ] ; xx [ 291 ] = xx [ 287 ] ; xx [ 292 ] = xx [ 7 ] * ( xx [ 289 ]
- xx [ 289 ] ) ; xx [ 293 ] = - xx [ 290 ] ; xx [ 294 ] =
pm_math_Vector3_dot_ra ( xx + 263 , xx + 291 ) ; xx [ 291 ] = xx [ 288 ] * xx
[ 288 ] ; xx [ 292 ] = xx [ 7 ] * ( xx [ 286 ] - xx [ 291 ] ) ; xx [ 293 ] =
( xx [ 289 ] + xx [ 289 ] ) * xx [ 7 ] ; xx [ 289 ] = xx [ 7 ] * xx [ 42 ] -
xx [ 0 ] ; xx [ 295 ] = - xx [ 293 ] ; xx [ 296 ] = xx [ 0 ] - ( xx [ 286 ] +
xx [ 291 ] ) * xx [ 7 ] ; xx [ 297 ] = xx [ 292 ] ; xx [ 42 ] =
pm_math_Vector3_dot_ra ( xx + 263 , xx + 295 ) ; xx [ 286 ] = xx [ 294 ] * xx
[ 294 ] ; xx [ 291 ] = xx [ 42 ] * xx [ 42 ] ; xx [ 295 ] = xx [ 286 ] + xx [
291 ] ; xx [ 296 ] = xx [ 295 ] == 0.0 ? 0.0 : ( xx [ 294 ] * ( xx [ 292 ] *
xx [ 281 ] - xx [ 277 ] * xx [ 293 ] + xx [ 289 ] * xx [ 254 ] + xx [ 31 ] *
xx [ 256 ] ) - xx [ 42 ] * ( xx [ 277 ] * xx [ 287 ] - xx [ 290 ] * xx [ 281
] + xx [ 289 ] * xx [ 256 ] - xx [ 31 ] * xx [ 254 ] ) ) / xx [ 295 ] ; xx [
31 ] = xx [ 225 ] * xx [ 284 ] + xx [ 296 ] ; xx [ 277 ] = xx [ 31 ] / xx [
60 ] ; xx [ 281 ] = xx [ 62 ] * xx [ 277 ] ; xx [ 284 ] = xx [ 65 ] * xx [
277 ] ; xx [ 289 ] = xx [ 284 ] * xx [ 30 ] ; xx [ 296 ] = xx [ 281 ] * xx [
30 ] ; xx [ 297 ] = xx [ 281 ] + xx [ 7 ] * ( xx [ 25 ] * xx [ 289 ] - xx [
296 ] * xx [ 30 ] ) ; xx [ 281 ] = xx [ 284 ] - ( xx [ 25 ] * xx [ 296 ] + xx
[ 289 ] * xx [ 30 ] ) * xx [ 7 ] ; xx [ 284 ] = xx [ 59 ] * xx [ 277 ] + xx [
40 ] * xx [ 297 ] - xx [ 50 ] * xx [ 281 ] ; xx [ 298 ] = - ( xx [ 284 ] * xx
[ 6 ] + xx [ 297 ] * xx [ 64 ] - xx [ 69 ] * xx [ 281 ] ) ; xx [ 299 ] = - (
xx [ 284 ] * xx [ 91 ] + xx [ 297 ] * xx [ 8 ] - xx [ 92 ] * xx [ 281 ] ) ;
xx [ 300 ] = xx [ 223 ] ; solveSymmetricPosDef ( xx + 106 , xx + 298 , 3 , 1
, xx + 301 , xx + 304 ) ; xx [ 281 ] = xx [ 301 ] * xx [ 17 ] + xx [ 302 ] *
xx [ 55 ] + xx [ 303 ] * xx [ 138 ] ; xx [ 284 ] = xx [ 140 ] * xx [ 190 ] +
xx [ 141 ] * xx [ 230 ] + xx [ 142 ] * xx [ 232 ] - xx [ 77 ] * xx [ 187 ] -
xx [ 239 ] * xx [ 188 ] - xx [ 240 ] * xx [ 189 ] ; xx [ 289 ] = xx [ 257 ] *
xx [ 190 ] + xx [ 258 ] * xx [ 230 ] + xx [ 259 ] * xx [ 232 ] ; xx [ 296 ] =
xx [ 260 ] * xx [ 190 ] + xx [ 261 ] * xx [ 230 ] + xx [ 262 ] * xx [ 232 ] ;
xx [ 297 ] = xx [ 251 ] * xx [ 190 ] + xx [ 252 ] * xx [ 230 ] + xx [ 253 ] *
xx [ 232 ] ; xx [ 298 ] = xx [ 301 ] * xx [ 190 ] + xx [ 302 ] * xx [ 230 ] +
xx [ 303 ] * xx [ 232 ] ; xx [ 299 ] = xx [ 257 ] * xx [ 125 ] + xx [ 258 ] *
xx [ 126 ] + xx [ 101 ] * xx [ 259 ] ; xx [ 300 ] = xx [ 260 ] * xx [ 125 ] +
xx [ 261 ] * xx [ 126 ] + xx [ 101 ] * xx [ 262 ] ; xx [ 304 ] = xx [ 251 ] *
xx [ 125 ] + xx [ 252 ] * xx [ 126 ] + xx [ 101 ] * xx [ 253 ] ; xx [ 305 ] =
xx [ 301 ] * xx [ 125 ] + xx [ 302 ] * xx [ 126 ] + xx [ 101 ] * xx [ 303 ] ;
xx [ 306 ] = - 0.9813501000307463 ; xx [ 307 ] = - 9.021345794401411e-3 ; xx
[ 308 ] = - 0.04725208941316491 ; xx [ 309 ] = 0.1861124298261472 ; xx [ 310
] = xx [ 1 ] * input [ 2 ] ; xx [ 311 ] = sin ( xx [ 310 ] ) ; xx [ 312 ] =
cos ( xx [ 310 ] ) ; xx [ 313 ] = - ( xx [ 139 ] * xx [ 311 ] ) ; xx [ 314 ]
= xx [ 144 ] * xx [ 311 ] ; xx [ 315 ] = xx [ 145 ] * xx [ 311 ] ;
pm_math_Quaternion_compose_ra ( xx + 306 , xx + 312 , xx + 316 ) ; xx [ 306 ]
= state [ 15 ] ; xx [ 307 ] = state [ 16 ] ; xx [ 308 ] = state [ 17 ] ; xx [
309 ] = state [ 18 ] ; pm_math_Quaternion_composeInverse_ra ( xx + 306 , xx +
163 , xx + 310 ) ; pm_math_Quaternion_compose_ra ( xx + 149 , xx + 310 , xx +
320 ) ; pm_math_Quaternion_compose_ra ( xx + 316 , xx + 320 , xx + 310 ) ;
pm_math_Quaternion_xform_ra ( xx + 310 , xx + 175 , xx + 324 ) ;
pm_math_Quaternion_xform_ra ( xx + 320 , xx + 181 , xx + 327 ) ;
pm_math_Quaternion_xform_ra ( xx + 316 , xx + 327 , xx + 330 ) ; xx [ 314 ] =
xx [ 324 ] + xx [ 330 ] ; if ( ii [ 0 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'triped/TriPed/Leg_0/SubChain 2/Coupling02_1_Spherical_Joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } memcpy ( xx + 333 , xx + 191 , 9 * sizeof ( double ) ) ;
pm_math_Quaternion_xform_ra ( xx + 310 , xx + 209 , xx + 327 ) ;
pm_math_Quaternion_xform_ra ( xx + 320 , xx + 215 , xx + 342 ) ;
pm_math_Quaternion_xform_ra ( xx + 316 , xx + 342 , xx + 345 ) ; xx [ 315 ] =
xx [ 327 ] + xx [ 345 ] ; pm_math_Quaternion_xform_ra ( xx + 310 , xx + 218 ,
xx + 342 ) ; pm_math_Quaternion_xform_ra ( xx + 320 , xx + 227 , xx + 348 ) ;
pm_math_Quaternion_xform_ra ( xx + 316 , xx + 348 , xx + 351 ) ; xx [ 348 ] =
xx [ 342 ] + xx [ 351 ] ; xx [ 354 ] = - xx [ 314 ] ; xx [ 355 ] = - xx [ 315
] ; xx [ 356 ] = - xx [ 348 ] ; solveSymmetricPosDef ( xx + 333 , xx + 354 ,
3 , 1 , xx + 357 , xx + 360 ) ; xx [ 349 ] = xx [ 325 ] + xx [ 331 ] ; xx [
350 ] = xx [ 328 ] + xx [ 346 ] ; xx [ 354 ] = xx [ 343 ] + xx [ 352 ] ; xx [
360 ] = - xx [ 349 ] ; xx [ 361 ] = - xx [ 350 ] ; xx [ 362 ] = - xx [ 354 ]
; solveSymmetricPosDef ( xx + 333 , xx + 360 , 3 , 1 , xx + 363 , xx + 366 )
; xx [ 355 ] = xx [ 260 ] * xx [ 221 ] + xx [ 261 ] * xx [ 128 ] + xx [ 262 ]
* xx [ 233 ] - xx [ 314 ] * xx [ 363 ] - xx [ 315 ] * xx [ 364 ] - xx [ 348 ]
* xx [ 365 ] ; xx [ 324 ] = xx [ 326 ] + xx [ 332 ] ; xx [ 325 ] = xx [ 329 ]
+ xx [ 347 ] ; xx [ 326 ] = xx [ 344 ] + xx [ 353 ] ; xx [ 327 ] = - xx [ 324
] ; xx [ 328 ] = - xx [ 325 ] ; xx [ 329 ] = - xx [ 326 ] ;
solveSymmetricPosDef ( xx + 333 , xx + 327 , 3 , 1 , xx + 330 , xx + 342 ) ;
xx [ 327 ] = xx [ 251 ] * xx [ 221 ] + xx [ 252 ] * xx [ 128 ] + xx [ 253 ] *
xx [ 233 ] - xx [ 314 ] * xx [ 330 ] - xx [ 315 ] * xx [ 331 ] - xx [ 348 ] *
xx [ 332 ] ; xx [ 328 ] = xx [ 301 ] * xx [ 221 ] + xx [ 302 ] * xx [ 128 ] +
xx [ 303 ] * xx [ 233 ] ; xx [ 329 ] = xx [ 251 ] * xx [ 137 ] + xx [ 252 ] *
xx [ 129 ] + xx [ 253 ] * xx [ 135 ] - xx [ 349 ] * xx [ 330 ] - xx [ 350 ] *
xx [ 331 ] - xx [ 354 ] * xx [ 332 ] ; xx [ 342 ] = xx [ 301 ] * xx [ 137 ] +
xx [ 302 ] * xx [ 129 ] + xx [ 303 ] * xx [ 135 ] ; xx [ 343 ] = xx [ 301 ] *
xx [ 224 ] + xx [ 302 ] * xx [ 130 ] + xx [ 136 ] * xx [ 303 ] ; xx [ 303 ] =
0.5000000000000001 ; xx [ 344 ] = xx [ 1 ] * state [ 22 ] ; xx [ 345 ] = sin
( xx [ 344 ] ) ; xx [ 346 ] = xx [ 1 ] * state [ 23 ] ; xx [ 347 ] = sin ( xx
[ 346 ] ) ; xx [ 351 ] = xx [ 345 ] * xx [ 347 ] ; xx [ 352 ] = xx [ 1 ] *
state [ 24 ] ; xx [ 353 ] = sin ( xx [ 352 ] ) ; xx [ 356 ] = cos ( xx [ 352
] ) ; xx [ 352 ] = cos ( xx [ 344 ] ) ; xx [ 344 ] = cos ( xx [ 346 ] ) ; xx
[ 346 ] = xx [ 352 ] * xx [ 344 ] ; xx [ 360 ] = xx [ 351 ] * xx [ 353 ] - xx
[ 356 ] * xx [ 346 ] ; xx [ 361 ] = xx [ 303 ] * xx [ 360 ] ; xx [ 362 ] = xx
[ 346 ] * xx [ 353 ] + xx [ 356 ] * xx [ 351 ] ; xx [ 346 ] =
0.8660254037844386 ; xx [ 351 ] = xx [ 362 ] * xx [ 346 ] ; xx [ 366 ] = xx [
361 ] - xx [ 351 ] ; xx [ 367 ] = xx [ 344 ] * xx [ 345 ] ; xx [ 344 ] = xx [
352 ] * xx [ 347 ] ; xx [ 345 ] = xx [ 356 ] * xx [ 367 ] + xx [ 344 ] * xx [
353 ] ; xx [ 347 ] = xx [ 345 ] * xx [ 303 ] ; xx [ 352 ] = xx [ 367 ] * xx [
353 ] - xx [ 356 ] * xx [ 344 ] ; xx [ 344 ] = xx [ 346 ] * xx [ 352 ] ; xx [
367 ] = xx [ 347 ] - xx [ 344 ] ; xx [ 368 ] = - xx [ 367 ] ; xx [ 369 ] = xx
[ 303 ] * xx [ 352 ] ; xx [ 370 ] = xx [ 345 ] * xx [ 346 ] ; xx [ 371 ] = xx
[ 369 ] + xx [ 370 ] ; xx [ 372 ] = xx [ 346 ] * xx [ 360 ] ; xx [ 373 ] = xx
[ 362 ] * xx [ 303 ] ; xx [ 374 ] = xx [ 372 ] + xx [ 373 ] ; xx [ 375 ] = -
xx [ 374 ] ; xx [ 376 ] = xx [ 366 ] ; xx [ 377 ] = xx [ 368 ] ; xx [ 378 ] =
xx [ 371 ] ; xx [ 379 ] = xx [ 375 ] ; xx [ 380 ] = xx [ 352 ] * xx [ 352 ] ;
xx [ 381 ] = xx [ 362 ] * xx [ 362 ] ; xx [ 382 ] = xx [ 0 ] - ( xx [ 380 ] +
xx [ 381 ] ) * xx [ 7 ] ; xx [ 383 ] = xx [ 362 ] * xx [ 360 ] ; xx [ 384 ] =
xx [ 345 ] * xx [ 352 ] ; xx [ 385 ] = xx [ 7 ] * ( xx [ 383 ] - xx [ 384 ] )
; xx [ 386 ] = xx [ 352 ] * xx [ 360 ] ; xx [ 387 ] = xx [ 345 ] * xx [ 362 ]
; xx [ 388 ] = xx [ 386 ] + xx [ 387 ] ; xx [ 389 ] = xx [ 388 ] * xx [ 7 ] ;
xx [ 390 ] = xx [ 382 ] ; xx [ 391 ] = xx [ 385 ] ; xx [ 392 ] = xx [ 389 ] ;
pm_math_Vector3_cross_ra ( xx + 390 , xx + 119 , xx + 393 ) ;
pm_math_Quaternion_xform_ra ( xx + 376 , xx + 393 , xx + 396 ) ; xx [ 393 ] =
- xx [ 345 ] ; xx [ 394 ] = - xx [ 362 ] ; xx [ 399 ] = xx [ 360 ] ; xx [ 400
] = xx [ 393 ] ; xx [ 401 ] = xx [ 352 ] ; xx [ 402 ] = xx [ 394 ] ; xx [ 395
] = xx [ 54 ] * xx [ 385 ] ; xx [ 403 ] = xx [ 54 ] * xx [ 382 ] ; xx [ 404 ]
= xx [ 53 ] * xx [ 385 ] ; xx [ 405 ] = - xx [ 395 ] ; xx [ 406 ] = xx [ 403
] - xx [ 388 ] * xx [ 87 ] ; xx [ 407 ] = xx [ 404 ] ;
pm_math_Quaternion_xform_ra ( xx + 399 , xx + 405 , xx + 408 ) ; xx [ 388 ] =
xx [ 346 ] * xx [ 408 ] ; xx [ 405 ] = xx [ 346 ] * xx [ 409 ] ; xx [ 406 ] =
( xx [ 346 ] * xx [ 388 ] - xx [ 303 ] * xx [ 405 ] ) * xx [ 7 ] - xx [ 408 ]
; xx [ 407 ] = xx [ 396 ] + xx [ 406 ] ; xx [ 411 ] = xx [ 1 ] * state [ 28 ]
; xx [ 412 ] = cos ( xx [ 411 ] ) ; xx [ 413 ] = xx [ 412 ] * xx [ 412 ] ; xx
[ 414 ] = xx [ 7 ] * xx [ 413 ] - xx [ 0 ] ; xx [ 415 ] = xx [ 23 ] * xx [
414 ] ; xx [ 416 ] = 0.04700000000000026 ; xx [ 417 ] = sin ( xx [ 411 ] ) ;
xx [ 411 ] = xx [ 412 ] * xx [ 417 ] ; xx [ 418 ] = xx [ 7 ] * xx [ 411 ] ;
xx [ 419 ] = xx [ 416 ] * xx [ 418 ] ; xx [ 420 ] = xx [ 33 ] * xx [ 417 ] ;
xx [ 421 ] = xx [ 412 ] * xx [ 420 ] ; xx [ 422 ] = 0.452725 ; xx [ 423 ] =
xx [ 422 ] * xx [ 417 ] ; xx [ 424 ] = xx [ 423 ] * xx [ 417 ] ; xx [ 425 ] =
( xx [ 421 ] - xx [ 424 ] ) * xx [ 7 ] ; xx [ 426 ] = 0.4072249999999987 ; xx
[ 427 ] = xx [ 425 ] + xx [ 426 ] ; xx [ 428 ] = xx [ 417 ] * xx [ 417 ] ; xx
[ 429 ] = ( xx [ 413 ] + xx [ 428 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 413 ] = xx
[ 41 ] * xx [ 429 ] * xx [ 429 ] ; xx [ 430 ] = xx [ 427 ] * xx [ 413 ] ; xx
[ 431 ] = xx [ 22 ] + xx [ 415 ] * xx [ 414 ] + xx [ 419 ] * xx [ 418 ] + xx
[ 427 ] * xx [ 430 ] ; xx [ 432 ] = xx [ 416 ] * xx [ 414 ] ; xx [ 433 ] = xx
[ 23 ] * xx [ 418 ] ; xx [ 434 ] = xx [ 412 ] * xx [ 423 ] ; xx [ 423 ] = xx
[ 420 ] * xx [ 417 ] ; xx [ 420 ] = xx [ 7 ] * ( xx [ 434 ] + xx [ 423 ] ) ;
xx [ 435 ] = xx [ 48 ] + xx [ 420 ] ; xx [ 436 ] = xx [ 413 ] * xx [ 435 ] ;
xx [ 437 ] = xx [ 432 ] * xx [ 418 ] - xx [ 433 ] * xx [ 414 ] - xx [ 427 ] *
xx [ 436 ] ; xx [ 438 ] = xx [ 53 ] * xx [ 389 ] - xx [ 403 ] ; xx [ 403 ] =
xx [ 431 ] * xx [ 382 ] + xx [ 389 ] * xx [ 437 ] - xx [ 430 ] * xx [ 438 ] ;
xx [ 439 ] = 0.04700000000000028 ; xx [ 440 ] = 1.144054418728751 ; ii [ 2 ]
= factorSymmetricPosDef ( xx + 440 , 1 , xx + 441 ) ; if ( ii [ 2 ] != 0 ) {
return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'triped/TriPed/Leg_1/OpenSubChain/LL_revolute_Joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } memcpy ( xx + 441 , xx + 440 , 1 * sizeof ( double ) ) ; xx
[ 442 ] = xx [ 439 ] / xx [ 441 ] ; xx [ 443 ] = 0.2277206750000001 ; xx [
444 ] = xx [ 443 ] / xx [ 441 ] ; xx [ 445 ] = xx [ 439 ] * xx [ 444 ] ; xx [
446 ] = xx [ 65 ] / xx [ 441 ] ; xx [ 447 ] = xx [ 439 ] * xx [ 446 ] ; xx [
448 ] = xx [ 429 ] * ( xx [ 445 ] * xx [ 418 ] - xx [ 447 ] * xx [ 414 ] ) ;
xx [ 449 ] = ( xx [ 445 ] * xx [ 414 ] + xx [ 447 ] * xx [ 418 ] ) * xx [ 429
] ; xx [ 445 ] = xx [ 448 ] * xx [ 435 ] + xx [ 427 ] * xx [ 449 ] ; xx [ 447
] = xx [ 65 ] * xx [ 444 ] ; xx [ 450 ] = xx [ 447 ] * xx [ 418 ] ; xx [ 451
] = xx [ 41 ] - xx [ 65 ] * xx [ 446 ] ; xx [ 452 ] = xx [ 450 ] + xx [ 451 ]
* xx [ 414 ] ; xx [ 453 ] = xx [ 41 ] - xx [ 443 ] * xx [ 444 ] ; xx [ 454 ]
= xx [ 447 ] * xx [ 414 ] ; xx [ 447 ] = xx [ 418 ] * xx [ 453 ] + xx [ 454 ]
; xx [ 455 ] = xx [ 452 ] * xx [ 418 ] - xx [ 447 ] * xx [ 414 ] ; xx [ 456 ]
= xx [ 453 ] * xx [ 414 ] - xx [ 450 ] ; xx [ 450 ] = xx [ 418 ] * xx [ 451 ]
- xx [ 454 ] ; xx [ 451 ] = xx [ 414 ] * xx [ 456 ] + xx [ 418 ] * xx [ 450 ]
; xx [ 453 ] = xx [ 435 ] * xx [ 455 ] - xx [ 427 ] * xx [ 451 ] ; xx [ 454 ]
= xx [ 447 ] * xx [ 418 ] + xx [ 452 ] * xx [ 414 ] ; xx [ 447 ] = xx [ 414 ]
* xx [ 450 ] - xx [ 418 ] * xx [ 456 ] ; xx [ 450 ] = xx [ 454 ] * xx [ 435 ]
- xx [ 427 ] * xx [ 447 ] ; xx [ 452 ] = xx [ 58 ] + ( xx [ 439 ] - xx [ 439
] * xx [ 442 ] ) * xx [ 429 ] * xx [ 429 ] - xx [ 445 ] - xx [ 445 ] - ( xx [
427 ] * xx [ 453 ] - xx [ 435 ] * xx [ 450 ] ) ; xx [ 429 ] = xx [ 449 ] + xx
[ 453 ] ; xx [ 445 ] = xx [ 448 ] - xx [ 450 ] ; xx [ 448 ] = xx [ 452 ] * xx
[ 385 ] - ( xx [ 429 ] * xx [ 395 ] + xx [ 404 ] * xx [ 445 ] ) ; xx [ 449 ]
= xx [ 419 ] * xx [ 414 ] - xx [ 415 ] * xx [ 418 ] - xx [ 430 ] * xx [ 435 ]
; xx [ 415 ] = xx [ 28 ] + xx [ 433 ] * xx [ 418 ] + xx [ 432 ] * xx [ 414 ]
+ xx [ 436 ] * xx [ 435 ] ; xx [ 419 ] = xx [ 382 ] * xx [ 449 ] + xx [ 415 ]
* xx [ 389 ] + xx [ 436 ] * xx [ 438 ] ; xx [ 456 ] = xx [ 403 ] ; xx [ 457 ]
= xx [ 448 ] ; xx [ 458 ] = xx [ 419 ] ; xx [ 459 ] = xx [ 395 ] ; xx [ 460 ]
= xx [ 438 ] ; xx [ 461 ] = - xx [ 404 ] ; xx [ 432 ] = xx [ 47 ] + xx [ 451
] ; xx [ 433 ] = xx [ 432 ] * xx [ 395 ] - xx [ 404 ] * xx [ 455 ] - xx [ 429
] * xx [ 385 ] ; xx [ 450 ] = xx [ 47 ] + xx [ 413 ] ; xx [ 413 ] = xx [ 389
] * xx [ 436 ] - xx [ 430 ] * xx [ 382 ] + xx [ 450 ] * xx [ 438 ] ; xx [ 451
] = xx [ 47 ] + xx [ 454 ] ; xx [ 453 ] = xx [ 385 ] * xx [ 445 ] + xx [ 395
] * xx [ 447 ] - xx [ 451 ] * xx [ 404 ] ; xx [ 462 ] = xx [ 433 ] ; xx [ 463
] = xx [ 413 ] ; xx [ 464 ] = xx [ 453 ] ; xx [ 454 ] = xx [ 356 ] * xx [ 353
] ; xx [ 356 ] = xx [ 7 ] * xx [ 454 ] ; xx [ 465 ] = xx [ 54 ] * xx [ 356 ]
; xx [ 466 ] = xx [ 431 ] * xx [ 356 ] + xx [ 430 ] * xx [ 465 ] ; xx [ 467 ]
= xx [ 0 ] - xx [ 7 ] * xx [ 353 ] * xx [ 353 ] ; xx [ 353 ] = xx [ 54 ] * xx
[ 467 ] ; xx [ 468 ] = xx [ 53 ] * xx [ 467 ] ; xx [ 469 ] = xx [ 452 ] * xx
[ 467 ] - ( xx [ 429 ] * xx [ 353 ] + xx [ 468 ] * xx [ 445 ] ) ; xx [ 470 ]
= xx [ 356 ] * xx [ 449 ] - xx [ 465 ] * xx [ 436 ] ; xx [ 471 ] = xx [ 466 ]
; xx [ 472 ] = xx [ 469 ] ; xx [ 473 ] = xx [ 470 ] ; xx [ 474 ] = xx [ 432 ]
* xx [ 353 ] - xx [ 468 ] * xx [ 455 ] - xx [ 429 ] * xx [ 467 ] ; xx [ 475 ]
= - ( xx [ 450 ] * xx [ 465 ] + xx [ 430 ] * xx [ 356 ] ) ; xx [ 476 ] = xx [
467 ] * xx [ 445 ] + xx [ 353 ] * xx [ 447 ] - xx [ 451 ] * xx [ 468 ] ; xx [
477 ] = pm_math_Vector3_dot_ra ( xx + 390 , xx + 471 ) +
pm_math_Vector3_dot_ra ( xx + 459 , xx + 474 ) ; xx [ 471 ] = xx [ 437 ] - xx
[ 53 ] * xx [ 430 ] ; xx [ 472 ] = xx [ 415 ] + xx [ 53 ] * xx [ 436 ] ; xx [
473 ] = xx [ 436 ] + xx [ 450 ] * xx [ 53 ] ; xx [ 478 ] = xx [ 382 ] * xx [
471 ] + xx [ 472 ] * xx [ 389 ] + xx [ 473 ] * xx [ 438 ] ; xx [ 479 ] = xx [
353 ] ; xx [ 480 ] = - xx [ 465 ] ; xx [ 481 ] = - xx [ 468 ] ; xx [ 438 ] =
xx [ 356 ] * xx [ 471 ] - xx [ 473 ] * xx [ 465 ] ; xx [ 482 ] =
pm_math_Vector3_dot_ra ( xx + 390 , xx + 456 ) + pm_math_Vector3_dot_ra ( xx
+ 459 , xx + 462 ) ; xx [ 483 ] = xx [ 477 ] ; xx [ 484 ] = xx [ 478 ] ; xx [
485 ] = xx [ 477 ] ; xx [ 486 ] = xx [ 356 ] * xx [ 466 ] + xx [ 469 ] * xx [
467 ] + pm_math_Vector3_dot_ra ( xx + 479 , xx + 474 ) ; xx [ 487 ] = xx [
438 ] ; xx [ 488 ] = xx [ 478 ] ; xx [ 489 ] = xx [ 438 ] ; xx [ 490 ] = xx [
472 ] + xx [ 473 ] * xx [ 53 ] ; ii [ 3 ] = factorSymmetricPosDef ( xx + 482
, 3 , xx + 456 ) ; ii [ 4 ] = ( ii [ 3 ] != 0 && fabs ( cos ( state [ 23 ] )
) < xx [ 56 ] ) ? 1 : 0 ; if ( ii [ 4 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:GimbalLock" ,
 "'triped/TriPed/Leg_1/SubChain 0/LCS0_Gimbal_Joint' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes."
, neDiagMgr ) ; } if ( ii [ 3 ] + ii [ 4 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'triped/TriPed/Leg_1/SubChain 0/LCS0_Gimbal_Joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 456 ] = - ( xx [ 86 ] * xx [ 467 ] ) ; xx [ 457 ] = xx
[ 86 ] * xx [ 356 ] ; xx [ 458 ] = xx [ 85 ] * xx [ 356 ] + xx [ 78 ] * xx [
467 ] ; pm_math_Quaternion_xform_ra ( xx + 376 , xx + 456 , xx + 462 ) ; xx [
456 ] = - xx [ 353 ] ; xx [ 457 ] = xx [ 465 ] ; xx [ 458 ] = xx [ 468 ] ;
pm_math_Quaternion_xform_ra ( xx + 399 , xx + 456 , xx + 491 ) ; xx [ 399 ] =
xx [ 346 ] * xx [ 491 ] ; xx [ 400 ] = xx [ 346 ] * xx [ 492 ] ; xx [ 401 ] =
( xx [ 346 ] * xx [ 399 ] - xx [ 303 ] * xx [ 400 ] ) * xx [ 7 ] - xx [ 491 ]
; xx [ 402 ] = xx [ 462 ] + xx [ 401 ] ; xx [ 456 ] = xx [ 368 ] ; xx [ 457 ]
= xx [ 371 ] ; xx [ 458 ] = xx [ 375 ] ; xx [ 368 ] = xx [ 78 ] * xx [ 374 ]
; xx [ 375 ] = xx [ 85 ] * xx [ 374 ] ; xx [ 438 ] = xx [ 367 ] * xx [ 78 ] +
xx [ 85 ] * xx [ 371 ] ; xx [ 494 ] = - xx [ 368 ] ; xx [ 495 ] = xx [ 375 ]
; xx [ 496 ] = xx [ 438 ] ; pm_math_Vector3_cross_ra ( xx + 456 , xx + 494 ,
xx + 497 ) ; xx [ 465 ] = xx [ 345 ] * xx [ 53 ] ; xx [ 477 ] = xx [ 362 ] *
xx [ 53 ] ; xx [ 478 ] = xx [ 7 ] * ( xx [ 465 ] * xx [ 352 ] - xx [ 477 ] *
xx [ 360 ] ) ; xx [ 494 ] = xx [ 346 ] * xx [ 478 ] ; xx [ 495 ] = ( xx [ 362
] * xx [ 477 ] + xx [ 345 ] * xx [ 465 ] ) * xx [ 7 ] - xx [ 53 ] ; xx [ 496
] = xx [ 346 ] * xx [ 495 ] ; xx [ 500 ] = ( xx [ 346 ] * xx [ 494 ] - xx [
303 ] * xx [ 496 ] ) * xx [ 7 ] - xx [ 478 ] ; xx [ 478 ] = xx [ 7 ] * ( xx [
497 ] - xx [ 366 ] * xx [ 368 ] ) - xx [ 85 ] + xx [ 500 ] ; xx [ 501 ] = xx
[ 407 ] ; xx [ 502 ] = xx [ 402 ] ; xx [ 503 ] = xx [ 478 ] ;
solveSymmetricPosDef ( xx + 482 , xx + 501 , 3 , 1 , xx + 504 , xx + 507 ) ;
xx [ 507 ] = 0.651818103933012 ; xx [ 508 ] = 0.03648925127026437 ; xx [ 509
] = 0.031347714040858 ; xx [ 510 ] = - 0.7568480790431602 ; xx [ 368 ] = xx [
1 ] * input [ 4 ] ; xx [ 501 ] = sin ( xx [ 368 ] ) ; xx [ 511 ] = cos ( xx [
368 ] ) ; xx [ 512 ] = - ( xx [ 139 ] * xx [ 501 ] ) ; xx [ 513 ] = xx [ 144
] * xx [ 501 ] ; xx [ 514 ] = xx [ 145 ] * xx [ 501 ] ;
pm_math_Quaternion_compose_ra ( xx + 507 , xx + 511 , xx + 515 ) ; xx [ 507 ]
= state [ 30 ] ; xx [ 508 ] = state [ 31 ] ; xx [ 509 ] = state [ 32 ] ; xx [
510 ] = state [ 33 ] ; pm_math_Quaternion_composeInverse_ra ( xx + 507 , xx +
163 , xx + 511 ) ; pm_math_Quaternion_compose_ra ( xx + 149 , xx + 511 , xx +
519 ) ; pm_math_Quaternion_compose_ra ( xx + 515 , xx + 519 , xx + 511 ) ;
pm_math_Quaternion_xform_ra ( xx + 511 , xx + 175 , xx + 501 ) ;
pm_math_Quaternion_xform_ra ( xx + 519 , xx + 181 , xx + 523 ) ;
pm_math_Quaternion_xform_ra ( xx + 515 , xx + 523 , xx + 526 ) ; xx [ 368 ] =
xx [ 501 ] + xx [ 526 ] ; if ( ii [ 0 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'triped/TriPed/Leg_1/SubChain 1/Coupling01_1_Spherical_Joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } memcpy ( xx + 529 , xx + 191 , 9 * sizeof ( double ) ) ;
pm_math_Quaternion_xform_ra ( xx + 511 , xx + 209 , xx + 523 ) ;
pm_math_Quaternion_xform_ra ( xx + 519 , xx + 215 , xx + 538 ) ;
pm_math_Quaternion_xform_ra ( xx + 515 , xx + 538 , xx + 541 ) ; xx [ 538 ] =
xx [ 523 ] + xx [ 541 ] ; pm_math_Quaternion_xform_ra ( xx + 511 , xx + 218 ,
xx + 544 ) ; pm_math_Quaternion_xform_ra ( xx + 519 , xx + 227 , xx + 547 ) ;
pm_math_Quaternion_xform_ra ( xx + 515 , xx + 547 , xx + 550 ) ; xx [ 539 ] =
xx [ 544 ] + xx [ 550 ] ; xx [ 547 ] = - xx [ 368 ] ; xx [ 548 ] = - xx [ 538
] ; xx [ 549 ] = - xx [ 539 ] ; solveSymmetricPosDef ( xx + 529 , xx + 547 ,
3 , 1 , xx + 553 , xx + 556 ) ; xx [ 540 ] = xx [ 7 ] * ( xx [ 346 ] * xx [
405 ] + xx [ 303 ] * xx [ 388 ] ) - xx [ 409 ] ; xx [ 388 ] = xx [ 397 ] + xx
[ 540 ] ; xx [ 405 ] = xx [ 7 ] * ( xx [ 346 ] * xx [ 400 ] + xx [ 303 ] * xx
[ 399 ] ) - xx [ 492 ] ; xx [ 399 ] = xx [ 463 ] + xx [ 405 ] ; xx [ 400 ] =
xx [ 7 ] * ( xx [ 346 ] * xx [ 496 ] + xx [ 303 ] * xx [ 494 ] ) - xx [ 495 ]
; xx [ 494 ] = ( xx [ 366 ] * xx [ 375 ] + xx [ 498 ] ) * xx [ 7 ] - xx [ 78
] + xx [ 400 ] ; xx [ 547 ] = xx [ 388 ] ; xx [ 548 ] = xx [ 399 ] ; xx [ 549
] = xx [ 494 ] ; solveSymmetricPosDef ( xx + 482 , xx + 547 , 3 , 1 , xx +
556 , xx + 559 ) ; xx [ 375 ] = xx [ 502 ] + xx [ 527 ] ; xx [ 495 ] = xx [
524 ] + xx [ 542 ] ; xx [ 496 ] = xx [ 545 ] + xx [ 551 ] ; xx [ 547 ] = - xx
[ 375 ] ; xx [ 548 ] = - xx [ 495 ] ; xx [ 549 ] = - xx [ 496 ] ;
solveSymmetricPosDef ( xx + 529 , xx + 547 , 3 , 1 , xx + 559 , xx + 562 ) ;
xx [ 547 ] = xx [ 407 ] * xx [ 556 ] + xx [ 402 ] * xx [ 557 ] + xx [ 478 ] *
xx [ 558 ] - xx [ 368 ] * xx [ 559 ] - xx [ 538 ] * xx [ 560 ] - xx [ 539 ] *
xx [ 561 ] ; xx [ 396 ] = xx [ 398 ] - xx [ 410 ] ; xx [ 397 ] = xx [ 464 ] -
xx [ 493 ] ; xx [ 398 ] = ( xx [ 465 ] * xx [ 360 ] + xx [ 477 ] * xx [ 352 ]
) * xx [ 7 ] ; xx [ 408 ] = xx [ 7 ] * ( xx [ 499 ] + xx [ 366 ] * xx [ 438 ]
) - xx [ 398 ] ; xx [ 462 ] = xx [ 396 ] ; xx [ 463 ] = xx [ 397 ] ; xx [ 464
] = xx [ 408 ] ; solveSymmetricPosDef ( xx + 482 , xx + 462 , 3 , 1 , xx +
497 , xx + 562 ) ; xx [ 409 ] = xx [ 503 ] + xx [ 528 ] ; xx [ 438 ] = xx [
525 ] + xx [ 543 ] ; xx [ 462 ] = xx [ 546 ] + xx [ 552 ] ; xx [ 463 ] = - xx
[ 409 ] ; xx [ 464 ] = - xx [ 438 ] ; xx [ 465 ] = - xx [ 462 ] ;
solveSymmetricPosDef ( xx + 529 , xx + 463 , 3 , 1 , xx + 501 , xx + 523 ) ;
xx [ 463 ] = xx [ 407 ] * xx [ 497 ] + xx [ 402 ] * xx [ 498 ] + xx [ 478 ] *
xx [ 499 ] - xx [ 368 ] * xx [ 501 ] - xx [ 538 ] * xx [ 502 ] - xx [ 539 ] *
xx [ 503 ] ; pm_math_Vector3_cross_ra ( xx + 390 , xx + 212 , xx + 523 ) ;
pm_math_Quaternion_xform_ra ( xx + 376 , xx + 523 , xx + 526 ) ; xx [ 464 ] =
xx [ 526 ] + xx [ 406 ] ; xx [ 523 ] = - ( xx [ 180 ] * xx [ 467 ] ) ; xx [
524 ] = xx [ 180 ] * xx [ 356 ] ; xx [ 525 ] = xx [ 178 ] * xx [ 467 ] - xx [
179 ] * xx [ 356 ] ; pm_math_Quaternion_xform_ra ( xx + 376 , xx + 523 , xx +
541 ) ; xx [ 406 ] = xx [ 541 ] + xx [ 401 ] ; xx [ 401 ] = xx [ 178 ] * xx [
374 ] ; xx [ 465 ] = xx [ 179 ] * xx [ 374 ] ; xx [ 374 ] = xx [ 179 ] * xx [
371 ] - xx [ 367 ] * xx [ 178 ] ; xx [ 523 ] = - xx [ 401 ] ; xx [ 524 ] = -
xx [ 465 ] ; xx [ 525 ] = - xx [ 374 ] ; pm_math_Vector3_cross_ra ( xx + 456
, xx + 523 , xx + 544 ) ; xx [ 367 ] = xx [ 179 ] + xx [ 7 ] * ( xx [ 544 ] -
xx [ 366 ] * xx [ 401 ] ) + xx [ 500 ] ; xx [ 456 ] = xx [ 464 ] ; xx [ 457 ]
= xx [ 406 ] ; xx [ 458 ] = xx [ 367 ] ; solveSymmetricPosDef ( xx + 482 , xx
+ 456 , 3 , 1 , xx + 523 , xx + 548 ) ; xx [ 371 ] = xx [ 407 ] * xx [ 523 ]
+ xx [ 402 ] * xx [ 524 ] + xx [ 478 ] * xx [ 525 ] ; xx [ 401 ] = xx [ 527 ]
+ xx [ 540 ] ; xx [ 456 ] = xx [ 542 ] + xx [ 405 ] ; xx [ 405 ] = ( xx [ 545
] - xx [ 366 ] * xx [ 465 ] ) * xx [ 7 ] - xx [ 178 ] + xx [ 400 ] ; xx [ 548
] = xx [ 401 ] ; xx [ 549 ] = xx [ 456 ] ; xx [ 550 ] = xx [ 405 ] ;
solveSymmetricPosDef ( xx + 482 , xx + 548 , 3 , 1 , xx + 562 , xx + 565 ) ;
xx [ 400 ] = xx [ 407 ] * xx [ 562 ] + xx [ 402 ] * xx [ 563 ] + xx [ 478 ] *
xx [ 564 ] ; xx [ 457 ] = xx [ 528 ] - xx [ 410 ] ; xx [ 410 ] = xx [ 543 ] -
xx [ 493 ] ; xx [ 458 ] = xx [ 7 ] * ( xx [ 546 ] - xx [ 366 ] * xx [ 374 ] )
- xx [ 398 ] ; xx [ 491 ] = xx [ 457 ] ; xx [ 492 ] = xx [ 410 ] ; xx [ 493 ]
= xx [ 458 ] ; solveSymmetricPosDef ( xx + 482 , xx + 491 , 3 , 1 , xx + 526
, xx + 540 ) ; xx [ 366 ] = xx [ 407 ] * xx [ 526 ] + xx [ 402 ] * xx [ 527 ]
+ xx [ 478 ] * xx [ 528 ] ; xx [ 374 ] = xx [ 1 ] * input [ 3 ] ; xx [ 398 ]
= xx [ 231 ] * cos ( xx [ 374 ] ) ; xx [ 465 ] = xx [ 226 ] * xx [ 398 ] ; xx
[ 491 ] = xx [ 231 ] * sin ( xx [ 374 ] ) ; xx [ 374 ] = xx [ 226 ] * xx [
491 ] ; xx [ 492 ] = xx [ 33 ] - xx [ 420 ] + xx [ 435 ] - ( xx [ 7 ] * ( xx
[ 465 ] * xx [ 491 ] - xx [ 374 ] * xx [ 398 ] ) - xx [ 247 ] ) ; xx [ 420 ]
= xx [ 465 ] * xx [ 398 ] ; xx [ 465 ] = xx [ 374 ] * xx [ 491 ] ; xx [ 374 ]
= xx [ 427 ] - ( xx [ 422 ] + xx [ 425 ] ) - ( ( xx [ 420 ] + xx [ 465 ] ) *
xx [ 7 ] - xx [ 234 ] ) ; xx [ 540 ] = xx [ 492 ] ; xx [ 541 ] = - ( xx [ 34
] - ( xx [ 420 ] + xx [ 465 ] ) * xx [ 7 ] ) ; xx [ 542 ] = xx [ 374 ] ; xx [
420 ] = xx [ 491 ] * xx [ 491 ] ; xx [ 425 ] = ( xx [ 420 ] + xx [ 420 ] ) *
xx [ 7 ] ; xx [ 465 ] = xx [ 0 ] - xx [ 425 ] ; xx [ 493 ] = xx [ 398 ] * xx
[ 491 ] ; xx [ 500 ] = xx [ 493 ] - xx [ 493 ] ; xx [ 543 ] = xx [ 7 ] * xx [
500 ] ; xx [ 544 ] = xx [ 493 ] + xx [ 493 ] ; xx [ 545 ] = xx [ 544 ] * xx [
7 ] ; xx [ 548 ] = xx [ 465 ] ; xx [ 549 ] = xx [ 543 ] ; xx [ 550 ] = - xx [
545 ] ; xx [ 546 ] = pm_math_Vector3_dot_ra ( xx + 540 , xx + 548 ) ; xx [
548 ] = xx [ 398 ] * xx [ 398 ] ; xx [ 549 ] = xx [ 420 ] - xx [ 548 ] ; xx [
550 ] = xx [ 7 ] * xx [ 549 ] ; xx [ 551 ] = xx [ 36 ] * xx [ 417 ] ; xx [
552 ] = xx [ 278 ] * xx [ 417 ] ; xx [ 565 ] = ( xx [ 412 ] * xx [ 551 ] + xx
[ 552 ] * xx [ 417 ] ) * xx [ 7 ] ; xx [ 566 ] = xx [ 275 ] - ( xx [ 565 ] -
( xx [ 434 ] + xx [ 423 ] ) * xx [ 7 ] ) ; xx [ 423 ] = xx [ 7 ] * ( xx [ 412
] * xx [ 552 ] - xx [ 551 ] * xx [ 417 ] ) ; xx [ 434 ] = xx [ 7 ] * ( xx [
424 ] - xx [ 421 ] ) + xx [ 423 ] + xx [ 49 ] ; xx [ 421 ] = xx [ 493 ] + xx
[ 493 ] ; xx [ 424 ] = xx [ 421 ] * xx [ 7 ] ; xx [ 567 ] = - xx [ 424 ] ; xx
[ 568 ] = xx [ 0 ] - ( xx [ 420 ] + xx [ 548 ] ) * xx [ 7 ] ; xx [ 569 ] = xx
[ 550 ] ; xx [ 493 ] = pm_math_Vector3_dot_ra ( xx + 540 , xx + 567 ) ; xx [
551 ] = xx [ 546 ] * xx [ 546 ] ; xx [ 552 ] = xx [ 493 ] * xx [ 493 ] ; xx [
567 ] = xx [ 551 ] + xx [ 552 ] ; xx [ 568 ] = xx [ 567 ] == 0.0 ? 0.0 : ( xx
[ 546 ] * ( xx [ 550 ] * xx [ 566 ] - xx [ 434 ] * xx [ 424 ] ) - xx [ 493 ]
* ( xx [ 434 ] * xx [ 465 ] - xx [ 545 ] * xx [ 566 ] ) ) / xx [ 567 ] ; xx [
569 ] = xx [ 231 ] * xx [ 417 ] ; xx [ 570 ] = xx [ 569 ] * xx [ 569 ] ; xx [
571 ] = xx [ 0 ] - ( xx [ 570 ] + xx [ 570 ] ) * xx [ 7 ] ; xx [ 572 ] = xx [
231 ] * xx [ 412 ] ; xx [ 573 ] = xx [ 572 ] * xx [ 569 ] ; xx [ 574 ] = ( xx
[ 573 ] + xx [ 573 ] ) * xx [ 7 ] ; xx [ 575 ] = xx [ 571 ] ; xx [ 576 ] = xx
[ 7 ] * ( xx [ 573 ] - xx [ 573 ] ) ; xx [ 577 ] = - xx [ 574 ] ; xx [ 578 ]
= pm_math_Vector3_dot_ra ( xx + 540 , xx + 575 ) ; xx [ 575 ] = xx [ 572 ] *
xx [ 572 ] ; xx [ 576 ] = xx [ 7 ] * ( xx [ 570 ] - xx [ 575 ] ) ; xx [ 577 ]
= ( xx [ 573 ] + xx [ 573 ] ) * xx [ 7 ] ; xx [ 573 ] = xx [ 7 ] * xx [ 428 ]
- xx [ 0 ] ; xx [ 579 ] = - xx [ 577 ] ; xx [ 580 ] = xx [ 0 ] - ( xx [ 570 ]
+ xx [ 575 ] ) * xx [ 7 ] ; xx [ 581 ] = xx [ 576 ] ; xx [ 428 ] =
pm_math_Vector3_dot_ra ( xx + 540 , xx + 579 ) ; xx [ 570 ] = xx [ 578 ] * xx
[ 578 ] ; xx [ 575 ] = xx [ 428 ] * xx [ 428 ] ; xx [ 579 ] = xx [ 570 ] + xx
[ 575 ] ; xx [ 580 ] = xx [ 579 ] == 0.0 ? 0.0 : ( xx [ 578 ] * ( xx [ 576 ]
* xx [ 566 ] - xx [ 434 ] * xx [ 577 ] + xx [ 573 ] * xx [ 492 ] + xx [ 418 ]
* xx [ 374 ] ) - xx [ 428 ] * ( xx [ 434 ] * xx [ 571 ] - xx [ 574 ] * xx [
566 ] + xx [ 573 ] * xx [ 374 ] - xx [ 418 ] * xx [ 492 ] ) ) / xx [ 579 ] ;
xx [ 418 ] = xx [ 225 ] * xx [ 568 ] + xx [ 580 ] ; xx [ 434 ] = xx [ 418 ] /
xx [ 441 ] ; xx [ 566 ] = xx [ 443 ] * xx [ 434 ] ; xx [ 568 ] = xx [ 65 ] *
xx [ 434 ] ; xx [ 573 ] = xx [ 568 ] * xx [ 417 ] ; xx [ 580 ] = xx [ 566 ] *
xx [ 417 ] ; xx [ 581 ] = xx [ 566 ] + xx [ 7 ] * ( xx [ 412 ] * xx [ 573 ] -
xx [ 580 ] * xx [ 417 ] ) ; xx [ 566 ] = xx [ 568 ] - ( xx [ 412 ] * xx [ 580
] + xx [ 573 ] * xx [ 417 ] ) * xx [ 7 ] ; xx [ 568 ] = xx [ 439 ] * xx [ 434
] + xx [ 427 ] * xx [ 581 ] - xx [ 435 ] * xx [ 566 ] ; xx [ 582 ] = - ( xx [
568 ] * xx [ 385 ] + xx [ 581 ] * xx [ 395 ] - xx [ 404 ] * xx [ 566 ] ) ; xx
[ 583 ] = - ( xx [ 568 ] * xx [ 467 ] + xx [ 581 ] * xx [ 353 ] - xx [ 468 ]
* xx [ 566 ] ) ; xx [ 584 ] = xx [ 223 ] ; solveSymmetricPosDef ( xx + 482 ,
xx + 582 , 3 , 1 , xx + 585 , xx + 588 ) ; xx [ 566 ] = xx [ 407 ] * xx [ 585
] + xx [ 402 ] * xx [ 586 ] + xx [ 478 ] * xx [ 587 ] ; xx [ 568 ] = xx [ 388
] * xx [ 497 ] + xx [ 399 ] * xx [ 498 ] + xx [ 494 ] * xx [ 499 ] - xx [ 375
] * xx [ 501 ] - xx [ 495 ] * xx [ 502 ] - xx [ 496 ] * xx [ 503 ] ; xx [ 573
] = xx [ 388 ] * xx [ 523 ] + xx [ 399 ] * xx [ 524 ] + xx [ 494 ] * xx [ 525
] ; xx [ 580 ] = xx [ 388 ] * xx [ 562 ] + xx [ 399 ] * xx [ 563 ] + xx [ 494
] * xx [ 564 ] ; xx [ 581 ] = xx [ 388 ] * xx [ 526 ] + xx [ 399 ] * xx [ 527
] + xx [ 494 ] * xx [ 528 ] ; xx [ 582 ] = xx [ 388 ] * xx [ 585 ] + xx [ 399
] * xx [ 586 ] + xx [ 494 ] * xx [ 587 ] ; xx [ 583 ] = xx [ 523 ] * xx [ 396
] + xx [ 524 ] * xx [ 397 ] + xx [ 408 ] * xx [ 525 ] ; xx [ 584 ] = xx [ 562
] * xx [ 396 ] + xx [ 563 ] * xx [ 397 ] + xx [ 408 ] * xx [ 564 ] ; xx [ 588
] = xx [ 526 ] * xx [ 396 ] + xx [ 527 ] * xx [ 397 ] + xx [ 408 ] * xx [ 528
] ; xx [ 589 ] = xx [ 585 ] * xx [ 396 ] + xx [ 586 ] * xx [ 397 ] + xx [ 408
] * xx [ 587 ] ; xx [ 590 ] = - 0.3294969578258811 ; xx [ 591 ] = -
0.04543218271089525 ; xx [ 592 ] = - 0.01581333007230693 ; xx [ 593 ] =
0.9429303315460998 ; xx [ 594 ] = xx [ 1 ] * input [ 5 ] ; xx [ 595 ] = sin (
xx [ 594 ] ) ; xx [ 596 ] = cos ( xx [ 594 ] ) ; xx [ 597 ] = - ( xx [ 139 ]
* xx [ 595 ] ) ; xx [ 598 ] = xx [ 144 ] * xx [ 595 ] ; xx [ 599 ] = xx [ 145
] * xx [ 595 ] ; pm_math_Quaternion_compose_ra ( xx + 590 , xx + 596 , xx +
600 ) ; xx [ 590 ] = state [ 37 ] ; xx [ 591 ] = state [ 38 ] ; xx [ 592 ] =
state [ 39 ] ; xx [ 593 ] = state [ 40 ] ;
pm_math_Quaternion_composeInverse_ra ( xx + 590 , xx + 163 , xx + 594 ) ;
pm_math_Quaternion_compose_ra ( xx + 149 , xx + 594 , xx + 604 ) ;
pm_math_Quaternion_compose_ra ( xx + 600 , xx + 604 , xx + 594 ) ;
pm_math_Quaternion_xform_ra ( xx + 594 , xx + 175 , xx + 608 ) ;
pm_math_Quaternion_xform_ra ( xx + 604 , xx + 181 , xx + 611 ) ;
pm_math_Quaternion_xform_ra ( xx + 600 , xx + 611 , xx + 614 ) ; xx [ 598 ] =
xx [ 608 ] + xx [ 614 ] ; if ( ii [ 0 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'triped/TriPed/Leg_1/SubChain 2/Coupling02_1_Spherical_Joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } memcpy ( xx + 617 , xx + 191 , 9 * sizeof ( double ) ) ;
pm_math_Quaternion_xform_ra ( xx + 594 , xx + 209 , xx + 611 ) ;
pm_math_Quaternion_xform_ra ( xx + 604 , xx + 215 , xx + 626 ) ;
pm_math_Quaternion_xform_ra ( xx + 600 , xx + 626 , xx + 629 ) ; xx [ 599 ] =
xx [ 611 ] + xx [ 629 ] ; pm_math_Quaternion_xform_ra ( xx + 594 , xx + 218 ,
xx + 626 ) ; pm_math_Quaternion_xform_ra ( xx + 604 , xx + 227 , xx + 632 ) ;
pm_math_Quaternion_xform_ra ( xx + 600 , xx + 632 , xx + 635 ) ; xx [ 632 ] =
xx [ 626 ] + xx [ 635 ] ; xx [ 638 ] = - xx [ 598 ] ; xx [ 639 ] = - xx [ 599
] ; xx [ 640 ] = - xx [ 632 ] ; solveSymmetricPosDef ( xx + 617 , xx + 638 ,
3 , 1 , xx + 641 , xx + 644 ) ; xx [ 633 ] = xx [ 609 ] + xx [ 615 ] ; xx [
634 ] = xx [ 612 ] + xx [ 630 ] ; xx [ 638 ] = xx [ 627 ] + xx [ 636 ] ; xx [
644 ] = - xx [ 633 ] ; xx [ 645 ] = - xx [ 634 ] ; xx [ 646 ] = - xx [ 638 ]
; solveSymmetricPosDef ( xx + 617 , xx + 644 , 3 , 1 , xx + 647 , xx + 650 )
; xx [ 639 ] = xx [ 464 ] * xx [ 562 ] + xx [ 406 ] * xx [ 563 ] + xx [ 367 ]
* xx [ 564 ] - xx [ 598 ] * xx [ 647 ] - xx [ 599 ] * xx [ 648 ] - xx [ 632 ]
* xx [ 649 ] ; xx [ 608 ] = xx [ 610 ] + xx [ 616 ] ; xx [ 609 ] = xx [ 613 ]
+ xx [ 631 ] ; xx [ 610 ] = xx [ 628 ] + xx [ 637 ] ; xx [ 611 ] = - xx [ 608
] ; xx [ 612 ] = - xx [ 609 ] ; xx [ 613 ] = - xx [ 610 ] ;
solveSymmetricPosDef ( xx + 617 , xx + 611 , 3 , 1 , xx + 614 , xx + 626 ) ;
xx [ 611 ] = xx [ 464 ] * xx [ 526 ] + xx [ 406 ] * xx [ 527 ] + xx [ 367 ] *
xx [ 528 ] - xx [ 598 ] * xx [ 614 ] - xx [ 599 ] * xx [ 615 ] - xx [ 632 ] *
xx [ 616 ] ; xx [ 612 ] = xx [ 464 ] * xx [ 585 ] + xx [ 406 ] * xx [ 586 ] +
xx [ 367 ] * xx [ 587 ] ; xx [ 613 ] = xx [ 401 ] * xx [ 526 ] + xx [ 456 ] *
xx [ 527 ] + xx [ 405 ] * xx [ 528 ] - xx [ 633 ] * xx [ 614 ] - xx [ 634 ] *
xx [ 615 ] - xx [ 638 ] * xx [ 616 ] ; xx [ 626 ] = xx [ 401 ] * xx [ 585 ] +
xx [ 456 ] * xx [ 586 ] + xx [ 405 ] * xx [ 587 ] ; xx [ 627 ] = xx [ 585 ] *
xx [ 457 ] + xx [ 586 ] * xx [ 410 ] + xx [ 458 ] * xx [ 587 ] ; xx [ 587 ] =
0.4999999999999998 ; xx [ 628 ] = xx [ 1 ] * state [ 44 ] ; xx [ 629 ] = sin
( xx [ 628 ] ) ; xx [ 630 ] = xx [ 1 ] * state [ 45 ] ; xx [ 631 ] = sin ( xx
[ 630 ] ) ; xx [ 635 ] = xx [ 629 ] * xx [ 631 ] ; xx [ 636 ] = xx [ 1 ] *
state [ 46 ] ; xx [ 637 ] = sin ( xx [ 636 ] ) ; xx [ 640 ] = cos ( xx [ 636
] ) ; xx [ 636 ] = cos ( xx [ 628 ] ) ; xx [ 628 ] = cos ( xx [ 630 ] ) ; xx
[ 630 ] = xx [ 636 ] * xx [ 628 ] ; xx [ 644 ] = xx [ 635 ] * xx [ 637 ] - xx
[ 640 ] * xx [ 630 ] ; xx [ 645 ] = xx [ 587 ] * xx [ 644 ] ; xx [ 646 ] = xx
[ 630 ] * xx [ 637 ] + xx [ 640 ] * xx [ 635 ] ; xx [ 630 ] =
0.8660254037844387 ; xx [ 635 ] = xx [ 646 ] * xx [ 630 ] ; xx [ 650 ] = xx [
645 ] + xx [ 635 ] ; xx [ 651 ] = xx [ 628 ] * xx [ 629 ] ; xx [ 628 ] = xx [
636 ] * xx [ 631 ] ; xx [ 629 ] = xx [ 640 ] * xx [ 651 ] + xx [ 628 ] * xx [
637 ] ; xx [ 631 ] = xx [ 629 ] * xx [ 587 ] ; xx [ 636 ] = xx [ 651 ] * xx [
637 ] - xx [ 640 ] * xx [ 628 ] ; xx [ 628 ] = xx [ 630 ] * xx [ 636 ] ; xx [
651 ] = xx [ 631 ] + xx [ 628 ] ; xx [ 652 ] = xx [ 629 ] * xx [ 630 ] ; xx [
653 ] = xx [ 587 ] * xx [ 636 ] ; xx [ 654 ] = xx [ 652 ] - xx [ 653 ] ; xx [
655 ] = xx [ 646 ] * xx [ 587 ] ; xx [ 656 ] = xx [ 630 ] * xx [ 644 ] ; xx [
657 ] = xx [ 655 ] - xx [ 656 ] ; xx [ 658 ] = - xx [ 650 ] ; xx [ 659 ] = xx
[ 651 ] ; xx [ 660 ] = xx [ 654 ] ; xx [ 661 ] = xx [ 657 ] ; xx [ 662 ] = xx
[ 636 ] * xx [ 636 ] ; xx [ 663 ] = xx [ 646 ] * xx [ 646 ] ; xx [ 664 ] = xx
[ 0 ] - ( xx [ 662 ] + xx [ 663 ] ) * xx [ 7 ] ; xx [ 665 ] = xx [ 646 ] * xx
[ 644 ] ; xx [ 666 ] = xx [ 629 ] * xx [ 636 ] ; xx [ 667 ] = xx [ 7 ] * ( xx
[ 665 ] - xx [ 666 ] ) ; xx [ 668 ] = xx [ 636 ] * xx [ 644 ] ; xx [ 669 ] =
xx [ 629 ] * xx [ 646 ] ; xx [ 670 ] = xx [ 668 ] + xx [ 669 ] ; xx [ 671 ] =
xx [ 670 ] * xx [ 7 ] ; xx [ 672 ] = xx [ 664 ] ; xx [ 673 ] = xx [ 667 ] ;
xx [ 674 ] = xx [ 671 ] ; pm_math_Vector3_cross_ra ( xx + 672 , xx + 119 , xx
+ 675 ) ; pm_math_Quaternion_xform_ra ( xx + 658 , xx + 675 , xx + 678 ) ; xx
[ 675 ] = - xx [ 629 ] ; xx [ 676 ] = - xx [ 646 ] ; xx [ 681 ] = xx [ 644 ]
; xx [ 682 ] = xx [ 675 ] ; xx [ 683 ] = xx [ 636 ] ; xx [ 684 ] = xx [ 676 ]
; xx [ 677 ] = xx [ 54 ] * xx [ 667 ] ; xx [ 685 ] = xx [ 54 ] * xx [ 664 ] ;
xx [ 686 ] = xx [ 53 ] * xx [ 667 ] ; xx [ 687 ] = - xx [ 677 ] ; xx [ 688 ]
= xx [ 685 ] - xx [ 670 ] * xx [ 87 ] ; xx [ 689 ] = xx [ 686 ] ;
pm_math_Quaternion_xform_ra ( xx + 681 , xx + 687 , xx + 690 ) ; xx [ 87 ] =
xx [ 630 ] * xx [ 691 ] ; xx [ 670 ] = xx [ 630 ] * xx [ 690 ] ; xx [ 687 ] =
( xx [ 587 ] * xx [ 87 ] + xx [ 630 ] * xx [ 670 ] ) * xx [ 7 ] - xx [ 690 ]
; xx [ 688 ] = xx [ 678 ] + xx [ 687 ] ; xx [ 689 ] = xx [ 1 ] * state [ 50 ]
; xx [ 693 ] = cos ( xx [ 689 ] ) ; xx [ 694 ] = xx [ 693 ] * xx [ 693 ] ; xx
[ 695 ] = xx [ 7 ] * xx [ 694 ] - xx [ 0 ] ; xx [ 696 ] = xx [ 23 ] * xx [
695 ] ; xx [ 697 ] = sin ( xx [ 689 ] ) ; xx [ 689 ] = xx [ 693 ] * xx [ 697
] ; xx [ 698 ] = xx [ 7 ] * xx [ 689 ] ; xx [ 699 ] = xx [ 416 ] * xx [ 698 ]
; xx [ 700 ] = xx [ 33 ] * xx [ 697 ] ; xx [ 701 ] = xx [ 693 ] * xx [ 700 ]
; xx [ 702 ] = xx [ 422 ] * xx [ 697 ] ; xx [ 703 ] = xx [ 702 ] * xx [ 697 ]
; xx [ 704 ] = ( xx [ 701 ] - xx [ 703 ] ) * xx [ 7 ] ; xx [ 705 ] = xx [ 704
] + xx [ 426 ] ; xx [ 426 ] = xx [ 697 ] * xx [ 697 ] ; xx [ 706 ] = ( xx [
694 ] + xx [ 426 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 694 ] = xx [ 41 ] * xx [
706 ] * xx [ 706 ] ; xx [ 707 ] = xx [ 705 ] * xx [ 694 ] ; xx [ 708 ] = xx [
22 ] + xx [ 696 ] * xx [ 695 ] + xx [ 699 ] * xx [ 698 ] + xx [ 705 ] * xx [
707 ] ; xx [ 709 ] = xx [ 416 ] * xx [ 695 ] ; xx [ 710 ] = xx [ 23 ] * xx [
698 ] ; xx [ 711 ] = xx [ 693 ] * xx [ 702 ] ; xx [ 702 ] = xx [ 700 ] * xx [
697 ] ; xx [ 700 ] = xx [ 7 ] * ( xx [ 711 ] + xx [ 702 ] ) ; xx [ 712 ] = xx
[ 48 ] + xx [ 700 ] ; xx [ 48 ] = xx [ 694 ] * xx [ 712 ] ; xx [ 713 ] = xx [
709 ] * xx [ 698 ] - xx [ 710 ] * xx [ 695 ] - xx [ 705 ] * xx [ 48 ] ; xx [
714 ] = xx [ 53 ] * xx [ 671 ] - xx [ 685 ] ; xx [ 685 ] = xx [ 708 ] * xx [
664 ] + xx [ 671 ] * xx [ 713 ] - xx [ 707 ] * xx [ 714 ] ; if ( ii [ 2 ] !=
0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'triped/TriPed/Leg_2/OpenSubChain/LL_revolute_Joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 715 ] = xx [ 439 ] / xx [ 440 ] ; xx [ 716 ] = xx [
443 ] / xx [ 440 ] ; xx [ 717 ] = xx [ 439 ] * xx [ 716 ] ; xx [ 718 ] = xx [
65 ] / xx [ 440 ] ; xx [ 719 ] = xx [ 439 ] * xx [ 718 ] ; xx [ 720 ] = xx [
706 ] * ( xx [ 717 ] * xx [ 698 ] - xx [ 719 ] * xx [ 695 ] ) ; xx [ 721 ] =
( xx [ 717 ] * xx [ 695 ] + xx [ 719 ] * xx [ 698 ] ) * xx [ 706 ] ; xx [ 717
] = xx [ 720 ] * xx [ 712 ] + xx [ 705 ] * xx [ 721 ] ; xx [ 719 ] = xx [ 65
] * xx [ 716 ] ; xx [ 722 ] = xx [ 719 ] * xx [ 698 ] ; xx [ 723 ] = xx [ 41
] - xx [ 65 ] * xx [ 718 ] ; xx [ 724 ] = xx [ 722 ] + xx [ 723 ] * xx [ 695
] ; xx [ 725 ] = xx [ 41 ] - xx [ 443 ] * xx [ 716 ] ; xx [ 726 ] = xx [ 719
] * xx [ 695 ] ; xx [ 719 ] = xx [ 698 ] * xx [ 725 ] + xx [ 726 ] ; xx [ 727
] = xx [ 724 ] * xx [ 698 ] - xx [ 719 ] * xx [ 695 ] ; xx [ 728 ] = xx [ 725
] * xx [ 695 ] - xx [ 722 ] ; xx [ 722 ] = xx [ 698 ] * xx [ 723 ] - xx [ 726
] ; xx [ 723 ] = xx [ 695 ] * xx [ 728 ] + xx [ 698 ] * xx [ 722 ] ; xx [ 725
] = xx [ 712 ] * xx [ 727 ] - xx [ 705 ] * xx [ 723 ] ; xx [ 726 ] = xx [ 719
] * xx [ 698 ] + xx [ 724 ] * xx [ 695 ] ; xx [ 719 ] = xx [ 695 ] * xx [ 722
] - xx [ 698 ] * xx [ 728 ] ; xx [ 722 ] = xx [ 726 ] * xx [ 712 ] - xx [ 705
] * xx [ 719 ] ; xx [ 724 ] = xx [ 58 ] + ( xx [ 439 ] - xx [ 439 ] * xx [
715 ] ) * xx [ 706 ] * xx [ 706 ] - xx [ 717 ] - xx [ 717 ] - ( xx [ 705 ] *
xx [ 725 ] - xx [ 712 ] * xx [ 722 ] ) ; xx [ 706 ] = xx [ 721 ] + xx [ 725 ]
; xx [ 717 ] = xx [ 720 ] - xx [ 722 ] ; xx [ 720 ] = xx [ 724 ] * xx [ 667 ]
- ( xx [ 706 ] * xx [ 677 ] + xx [ 686 ] * xx [ 717 ] ) ; xx [ 721 ] = xx [
699 ] * xx [ 695 ] - xx [ 696 ] * xx [ 698 ] - xx [ 707 ] * xx [ 712 ] ; xx [
696 ] = xx [ 28 ] + xx [ 710 ] * xx [ 698 ] + xx [ 709 ] * xx [ 695 ] + xx [
48 ] * xx [ 712 ] ; xx [ 699 ] = xx [ 664 ] * xx [ 721 ] + xx [ 696 ] * xx [
671 ] + xx [ 48 ] * xx [ 714 ] ; xx [ 728 ] = xx [ 685 ] ; xx [ 729 ] = xx [
720 ] ; xx [ 730 ] = xx [ 699 ] ; xx [ 731 ] = xx [ 677 ] ; xx [ 732 ] = xx [
714 ] ; xx [ 733 ] = - xx [ 686 ] ; xx [ 709 ] = xx [ 47 ] + xx [ 723 ] ; xx
[ 710 ] = xx [ 709 ] * xx [ 677 ] - xx [ 686 ] * xx [ 727 ] - xx [ 706 ] * xx
[ 667 ] ; xx [ 722 ] = xx [ 47 ] + xx [ 694 ] ; xx [ 694 ] = xx [ 671 ] * xx
[ 48 ] - xx [ 707 ] * xx [ 664 ] + xx [ 722 ] * xx [ 714 ] ; xx [ 723 ] = xx
[ 47 ] + xx [ 726 ] ; xx [ 47 ] = xx [ 667 ] * xx [ 717 ] + xx [ 677 ] * xx [
719 ] - xx [ 723 ] * xx [ 686 ] ; xx [ 734 ] = xx [ 710 ] ; xx [ 735 ] = xx [
694 ] ; xx [ 736 ] = xx [ 47 ] ; xx [ 725 ] = xx [ 640 ] * xx [ 637 ] ; xx [
640 ] = xx [ 7 ] * xx [ 725 ] ; xx [ 726 ] = xx [ 54 ] * xx [ 640 ] ; xx [
737 ] = xx [ 708 ] * xx [ 640 ] + xx [ 707 ] * xx [ 726 ] ; xx [ 738 ] = xx [
0 ] - xx [ 7 ] * xx [ 637 ] * xx [ 637 ] ; xx [ 637 ] = xx [ 54 ] * xx [ 738
] ; xx [ 739 ] = xx [ 53 ] * xx [ 738 ] ; xx [ 740 ] = xx [ 724 ] * xx [ 738
] - ( xx [ 706 ] * xx [ 637 ] + xx [ 739 ] * xx [ 717 ] ) ; xx [ 741 ] = xx [
640 ] * xx [ 721 ] - xx [ 726 ] * xx [ 48 ] ; xx [ 742 ] = xx [ 737 ] ; xx [
743 ] = xx [ 740 ] ; xx [ 744 ] = xx [ 741 ] ; xx [ 745 ] = xx [ 709 ] * xx [
637 ] - xx [ 739 ] * xx [ 727 ] - xx [ 706 ] * xx [ 738 ] ; xx [ 746 ] = - (
xx [ 722 ] * xx [ 726 ] + xx [ 707 ] * xx [ 640 ] ) ; xx [ 747 ] = xx [ 738 ]
* xx [ 717 ] + xx [ 637 ] * xx [ 719 ] - xx [ 723 ] * xx [ 739 ] ; xx [ 748 ]
= pm_math_Vector3_dot_ra ( xx + 672 , xx + 742 ) + pm_math_Vector3_dot_ra (
xx + 731 , xx + 745 ) ; xx [ 742 ] = xx [ 713 ] - xx [ 53 ] * xx [ 707 ] ; xx
[ 743 ] = xx [ 696 ] + xx [ 53 ] * xx [ 48 ] ; xx [ 744 ] = xx [ 48 ] + xx [
722 ] * xx [ 53 ] ; xx [ 749 ] = xx [ 664 ] * xx [ 742 ] + xx [ 743 ] * xx [
671 ] + xx [ 744 ] * xx [ 714 ] ; xx [ 750 ] = xx [ 637 ] ; xx [ 751 ] = - xx
[ 726 ] ; xx [ 752 ] = - xx [ 739 ] ; xx [ 714 ] = xx [ 640 ] * xx [ 742 ] -
xx [ 744 ] * xx [ 726 ] ; xx [ 753 ] = pm_math_Vector3_dot_ra ( xx + 672 , xx
+ 728 ) + pm_math_Vector3_dot_ra ( xx + 731 , xx + 734 ) ; xx [ 754 ] = xx [
748 ] ; xx [ 755 ] = xx [ 749 ] ; xx [ 756 ] = xx [ 748 ] ; xx [ 757 ] = xx [
640 ] * xx [ 737 ] + xx [ 740 ] * xx [ 738 ] + pm_math_Vector3_dot_ra ( xx +
750 , xx + 745 ) ; xx [ 758 ] = xx [ 714 ] ; xx [ 759 ] = xx [ 749 ] ; xx [
760 ] = xx [ 714 ] ; xx [ 761 ] = xx [ 743 ] + xx [ 744 ] * xx [ 53 ] ; ii [
2 ] = factorSymmetricPosDef ( xx + 753 , 3 , xx + 728 ) ; ii [ 3 ] = ( ii [ 2
] != 0 && fabs ( cos ( state [ 45 ] ) ) < xx [ 56 ] ) ? 1 : 0 ; if ( ii [ 3 ]
!= 0 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:GimbalLock" ,
 "'triped/TriPed/Leg_2/SubChain 0/LCS0_Gimbal_Joint' is in gimbal lock: the middle revolute angle is +/- 90 degrees, aligning the first and third revolute axes."
, neDiagMgr ) ; } if ( ii [ 2 ] + ii [ 3 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'triped/TriPed/Leg_2/SubChain 0/LCS0_Gimbal_Joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } xx [ 728 ] = - ( xx [ 86 ] * xx [ 738 ] ) ; xx [ 729 ] = xx
[ 86 ] * xx [ 640 ] ; xx [ 730 ] = xx [ 85 ] * xx [ 640 ] + xx [ 78 ] * xx [
738 ] ; pm_math_Quaternion_xform_ra ( xx + 658 , xx + 728 , xx + 734 ) ; xx [
728 ] = - xx [ 637 ] ; xx [ 729 ] = xx [ 726 ] ; xx [ 730 ] = xx [ 739 ] ;
pm_math_Quaternion_xform_ra ( xx + 681 , xx + 728 , xx + 762 ) ; xx [ 56 ] =
xx [ 630 ] * xx [ 763 ] ; xx [ 86 ] = xx [ 630 ] * xx [ 762 ] ; xx [ 681 ] =
( xx [ 587 ] * xx [ 56 ] + xx [ 630 ] * xx [ 86 ] ) * xx [ 7 ] - xx [ 762 ] ;
xx [ 682 ] = xx [ 734 ] + xx [ 681 ] ; xx [ 728 ] = xx [ 651 ] ; xx [ 729 ] =
xx [ 654 ] ; xx [ 730 ] = xx [ 657 ] ; xx [ 683 ] = xx [ 78 ] * xx [ 657 ] ;
xx [ 684 ] = xx [ 85 ] * xx [ 657 ] ; xx [ 714 ] = xx [ 651 ] * xx [ 78 ] -
xx [ 85 ] * xx [ 654 ] ; xx [ 765 ] = xx [ 683 ] ; xx [ 766 ] = - xx [ 684 ]
; xx [ 767 ] = - xx [ 714 ] ; pm_math_Vector3_cross_ra ( xx + 728 , xx + 765
, xx + 768 ) ; xx [ 726 ] = xx [ 646 ] * xx [ 53 ] ; xx [ 748 ] = xx [ 629 ]
* xx [ 53 ] ; xx [ 749 ] = ( xx [ 646 ] * xx [ 726 ] + xx [ 629 ] * xx [ 748
] ) * xx [ 7 ] - xx [ 53 ] ; xx [ 765 ] = xx [ 630 ] * xx [ 749 ] ; xx [ 766
] = xx [ 7 ] * ( xx [ 748 ] * xx [ 636 ] - xx [ 726 ] * xx [ 644 ] ) ; xx [
767 ] = xx [ 630 ] * xx [ 766 ] ; xx [ 771 ] = ( xx [ 587 ] * xx [ 765 ] + xx
[ 630 ] * xx [ 767 ] ) * xx [ 7 ] - xx [ 766 ] ; xx [ 766 ] = xx [ 7 ] * ( xx
[ 768 ] - xx [ 650 ] * xx [ 683 ] ) - xx [ 85 ] + xx [ 771 ] ; xx [ 772 ] =
xx [ 688 ] ; xx [ 773 ] = xx [ 682 ] ; xx [ 774 ] = xx [ 766 ] ;
solveSymmetricPosDef ( xx + 753 , xx + 772 , 3 , 1 , xx + 775 , xx + 778 ) ;
xx [ 778 ] = - 0.3295406112903234 ; xx [ 779 ] = 0.04539254234508536 ; xx [
780 ] = - 0.01592676154469353 ; xx [ 781 ] = - 0.942915076174174 ; xx [ 85 ]
= xx [ 1 ] * input [ 7 ] ; xx [ 683 ] = sin ( xx [ 85 ] ) ; xx [ 782 ] = cos
( xx [ 85 ] ) ; xx [ 783 ] = - ( xx [ 139 ] * xx [ 683 ] ) ; xx [ 784 ] = xx
[ 144 ] * xx [ 683 ] ; xx [ 785 ] = xx [ 145 ] * xx [ 683 ] ;
pm_math_Quaternion_compose_ra ( xx + 778 , xx + 782 , xx + 786 ) ; xx [ 778 ]
= state [ 52 ] ; xx [ 779 ] = state [ 53 ] ; xx [ 780 ] = state [ 54 ] ; xx [
781 ] = state [ 55 ] ; pm_math_Quaternion_composeInverse_ra ( xx + 778 , xx +
163 , xx + 782 ) ; pm_math_Quaternion_compose_ra ( xx + 149 , xx + 782 , xx +
790 ) ; pm_math_Quaternion_compose_ra ( xx + 786 , xx + 790 , xx + 782 ) ;
pm_math_Quaternion_xform_ra ( xx + 782 , xx + 175 , xx + 772 ) ;
pm_math_Quaternion_xform_ra ( xx + 790 , xx + 181 , xx + 794 ) ;
pm_math_Quaternion_xform_ra ( xx + 786 , xx + 794 , xx + 797 ) ; xx [ 85 ] =
xx [ 772 ] + xx [ 797 ] ; if ( ii [ 0 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'triped/TriPed/Leg_2/SubChain 1/Coupling01_1_Spherical_Joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } memcpy ( xx + 800 , xx + 191 , 9 * sizeof ( double ) ) ;
pm_math_Quaternion_xform_ra ( xx + 782 , xx + 209 , xx + 794 ) ;
pm_math_Quaternion_xform_ra ( xx + 790 , xx + 215 , xx + 809 ) ;
pm_math_Quaternion_xform_ra ( xx + 786 , xx + 809 , xx + 812 ) ; xx [ 683 ] =
xx [ 794 ] + xx [ 812 ] ; pm_math_Quaternion_xform_ra ( xx + 782 , xx + 218 ,
xx + 809 ) ; pm_math_Quaternion_xform_ra ( xx + 790 , xx + 227 , xx + 815 ) ;
pm_math_Quaternion_xform_ra ( xx + 786 , xx + 815 , xx + 818 ) ; xx [ 815 ] =
xx [ 809 ] + xx [ 818 ] ; xx [ 821 ] = - xx [ 85 ] ; xx [ 822 ] = - xx [ 683
] ; xx [ 823 ] = - xx [ 815 ] ; solveSymmetricPosDef ( xx + 800 , xx + 821 ,
3 , 1 , xx + 824 , xx + 827 ) ; xx [ 816 ] = xx [ 7 ] * ( xx [ 630 ] * xx [
87 ] - xx [ 587 ] * xx [ 670 ] ) - xx [ 691 ] ; xx [ 87 ] = xx [ 679 ] + xx [
816 ] ; xx [ 670 ] = xx [ 7 ] * ( xx [ 630 ] * xx [ 56 ] - xx [ 587 ] * xx [
86 ] ) - xx [ 763 ] ; xx [ 56 ] = xx [ 735 ] + xx [ 670 ] ; xx [ 86 ] = xx [
7 ] * ( xx [ 630 ] * xx [ 765 ] - xx [ 587 ] * xx [ 767 ] ) - xx [ 749 ] ; xx
[ 749 ] = ( xx [ 650 ] * xx [ 684 ] + xx [ 769 ] ) * xx [ 7 ] - xx [ 78 ] +
xx [ 86 ] ; xx [ 821 ] = xx [ 87 ] ; xx [ 822 ] = xx [ 56 ] ; xx [ 823 ] = xx
[ 749 ] ; solveSymmetricPosDef ( xx + 753 , xx + 821 , 3 , 1 , xx + 827 , xx
+ 830 ) ; xx [ 78 ] = xx [ 773 ] + xx [ 798 ] ; xx [ 684 ] = xx [ 795 ] + xx
[ 813 ] ; xx [ 765 ] = xx [ 810 ] + xx [ 819 ] ; xx [ 821 ] = - xx [ 78 ] ;
xx [ 822 ] = - xx [ 684 ] ; xx [ 823 ] = - xx [ 765 ] ; solveSymmetricPosDef
( xx + 800 , xx + 821 , 3 , 1 , xx + 830 , xx + 833 ) ; xx [ 767 ] = xx [ 688
] * xx [ 827 ] + xx [ 682 ] * xx [ 828 ] + xx [ 766 ] * xx [ 829 ] - xx [ 85
] * xx [ 830 ] - xx [ 683 ] * xx [ 831 ] - xx [ 815 ] * xx [ 832 ] ; xx [ 678
] = xx [ 680 ] - xx [ 692 ] ; xx [ 679 ] = xx [ 736 ] - xx [ 764 ] ; xx [ 680
] = ( xx [ 748 ] * xx [ 644 ] + xx [ 726 ] * xx [ 636 ] ) * xx [ 7 ] ; xx [
690 ] = xx [ 7 ] * ( xx [ 770 ] + xx [ 714 ] * xx [ 650 ] ) - xx [ 680 ] ; xx
[ 734 ] = xx [ 678 ] ; xx [ 735 ] = xx [ 679 ] ; xx [ 736 ] = xx [ 690 ] ;
solveSymmetricPosDef ( xx + 753 , xx + 734 , 3 , 1 , xx + 768 , xx + 821 ) ;
xx [ 691 ] = xx [ 774 ] + xx [ 799 ] ; xx [ 714 ] = xx [ 796 ] + xx [ 814 ] ;
xx [ 734 ] = xx [ 811 ] + xx [ 820 ] ; xx [ 772 ] = - xx [ 691 ] ; xx [ 773 ]
= - xx [ 714 ] ; xx [ 774 ] = - xx [ 734 ] ; solveSymmetricPosDef ( xx + 800
, xx + 772 , 3 , 1 , xx + 794 , xx + 797 ) ; xx [ 735 ] = xx [ 688 ] * xx [
768 ] + xx [ 682 ] * xx [ 769 ] + xx [ 766 ] * xx [ 770 ] - xx [ 85 ] * xx [
794 ] - xx [ 683 ] * xx [ 795 ] - xx [ 815 ] * xx [ 796 ] ;
pm_math_Vector3_cross_ra ( xx + 672 , xx + 212 , xx + 772 ) ;
pm_math_Quaternion_xform_ra ( xx + 658 , xx + 772 , xx + 797 ) ; xx [ 736 ] =
xx [ 797 ] + xx [ 687 ] ; xx [ 772 ] = - ( xx [ 180 ] * xx [ 738 ] ) ; xx [
773 ] = xx [ 180 ] * xx [ 640 ] ; xx [ 774 ] = xx [ 178 ] * xx [ 738 ] - xx [
179 ] * xx [ 640 ] ; pm_math_Quaternion_xform_ra ( xx + 658 , xx + 772 , xx +
809 ) ; xx [ 180 ] = xx [ 809 ] + xx [ 681 ] ; xx [ 681 ] = xx [ 178 ] * xx [
657 ] ; xx [ 687 ] = xx [ 179 ] * xx [ 657 ] ; xx [ 657 ] = xx [ 651 ] * xx [
178 ] + xx [ 179 ] * xx [ 654 ] ; xx [ 772 ] = xx [ 681 ] ; xx [ 773 ] = xx [
687 ] ; xx [ 774 ] = - xx [ 657 ] ; pm_math_Vector3_cross_ra ( xx + 728 , xx
+ 772 , xx + 812 ) ; xx [ 651 ] = xx [ 179 ] + xx [ 7 ] * ( xx [ 812 ] - xx [
650 ] * xx [ 681 ] ) + xx [ 771 ] ; xx [ 728 ] = xx [ 736 ] ; xx [ 729 ] = xx
[ 180 ] ; xx [ 730 ] = xx [ 651 ] ; solveSymmetricPosDef ( xx + 753 , xx +
728 , 3 , 1 , xx + 771 , xx + 817 ) ; xx [ 179 ] = xx [ 688 ] * xx [ 771 ] +
xx [ 682 ] * xx [ 772 ] + xx [ 766 ] * xx [ 773 ] ; xx [ 654 ] = xx [ 798 ] +
xx [ 816 ] ; xx [ 681 ] = xx [ 810 ] + xx [ 670 ] ; xx [ 670 ] = ( xx [ 813 ]
- xx [ 650 ] * xx [ 687 ] ) * xx [ 7 ] - xx [ 178 ] + xx [ 86 ] ; xx [ 728 ]
= xx [ 654 ] ; xx [ 729 ] = xx [ 681 ] ; xx [ 730 ] = xx [ 670 ] ;
solveSymmetricPosDef ( xx + 753 , xx + 728 , 3 , 1 , xx + 816 , xx + 819 ) ;
xx [ 86 ] = xx [ 688 ] * xx [ 816 ] + xx [ 682 ] * xx [ 817 ] + xx [ 766 ] *
xx [ 818 ] ; xx [ 178 ] = xx [ 799 ] - xx [ 692 ] ; xx [ 687 ] = xx [ 811 ] -
xx [ 764 ] ; xx [ 692 ] = xx [ 7 ] * ( xx [ 814 ] + xx [ 657 ] * xx [ 650 ] )
- xx [ 680 ] ; xx [ 728 ] = xx [ 178 ] ; xx [ 729 ] = xx [ 687 ] ; xx [ 730 ]
= xx [ 692 ] ; solveSymmetricPosDef ( xx + 753 , xx + 728 , 3 , 1 , xx + 762
, xx + 797 ) ; xx [ 650 ] = xx [ 688 ] * xx [ 762 ] + xx [ 682 ] * xx [ 763 ]
+ xx [ 766 ] * xx [ 764 ] ; xx [ 657 ] = xx [ 1 ] * input [ 6 ] ; xx [ 680 ]
= xx [ 231 ] * cos ( xx [ 657 ] ) ; xx [ 728 ] = xx [ 226 ] * xx [ 680 ] ; xx
[ 729 ] = xx [ 231 ] * sin ( xx [ 657 ] ) ; xx [ 657 ] = xx [ 226 ] * xx [
729 ] ; xx [ 226 ] = xx [ 33 ] - xx [ 700 ] + xx [ 712 ] - ( xx [ 7 ] * ( xx
[ 728 ] * xx [ 729 ] - xx [ 657 ] * xx [ 680 ] ) - xx [ 247 ] ) ; xx [ 247 ]
= xx [ 728 ] * xx [ 680 ] ; xx [ 700 ] = xx [ 657 ] * xx [ 729 ] ; xx [ 657 ]
= xx [ 705 ] - ( xx [ 422 ] + xx [ 704 ] ) - ( ( xx [ 247 ] + xx [ 700 ] ) *
xx [ 7 ] - xx [ 234 ] ) ; xx [ 797 ] = xx [ 226 ] ; xx [ 798 ] = - ( xx [ 34
] - ( xx [ 247 ] + xx [ 700 ] ) * xx [ 7 ] ) ; xx [ 799 ] = xx [ 657 ] ; xx [
34 ] = xx [ 729 ] * xx [ 729 ] ; xx [ 234 ] = ( xx [ 34 ] + xx [ 34 ] ) * xx
[ 7 ] ; xx [ 247 ] = xx [ 0 ] - xx [ 234 ] ; xx [ 700 ] = xx [ 680 ] * xx [
729 ] ; xx [ 704 ] = xx [ 700 ] - xx [ 700 ] ; xx [ 728 ] = xx [ 7 ] * xx [
704 ] ; xx [ 730 ] = xx [ 700 ] + xx [ 700 ] ; xx [ 748 ] = xx [ 730 ] * xx [
7 ] ; xx [ 809 ] = xx [ 247 ] ; xx [ 810 ] = xx [ 728 ] ; xx [ 811 ] = - xx [
748 ] ; xx [ 774 ] = pm_math_Vector3_dot_ra ( xx + 797 , xx + 809 ) ; xx [
809 ] = xx [ 680 ] * xx [ 680 ] ; xx [ 810 ] = xx [ 34 ] - xx [ 809 ] ; xx [
811 ] = xx [ 7 ] * xx [ 810 ] ; xx [ 812 ] = xx [ 36 ] * xx [ 697 ] ; xx [
813 ] = xx [ 278 ] * xx [ 697 ] ; xx [ 814 ] = ( xx [ 693 ] * xx [ 812 ] + xx
[ 813 ] * xx [ 697 ] ) * xx [ 7 ] ; xx [ 819 ] = xx [ 275 ] - ( xx [ 814 ] -
( xx [ 711 ] + xx [ 702 ] ) * xx [ 7 ] ) ; xx [ 275 ] = xx [ 7 ] * ( xx [ 693
] * xx [ 813 ] - xx [ 812 ] * xx [ 697 ] ) ; xx [ 702 ] = xx [ 7 ] * ( xx [
703 ] - xx [ 701 ] ) + xx [ 275 ] + xx [ 49 ] ; xx [ 49 ] = xx [ 700 ] + xx [
700 ] ; xx [ 700 ] = xx [ 49 ] * xx [ 7 ] ; xx [ 820 ] = - xx [ 700 ] ; xx [
821 ] = xx [ 0 ] - ( xx [ 34 ] + xx [ 809 ] ) * xx [ 7 ] ; xx [ 822 ] = xx [
811 ] ; xx [ 701 ] = pm_math_Vector3_dot_ra ( xx + 797 , xx + 820 ) ; xx [
703 ] = xx [ 774 ] * xx [ 774 ] ; xx [ 711 ] = xx [ 701 ] * xx [ 701 ] ; xx [
812 ] = xx [ 703 ] + xx [ 711 ] ; xx [ 813 ] = xx [ 812 ] == 0.0 ? 0.0 : ( xx
[ 774 ] * ( xx [ 811 ] * xx [ 819 ] - xx [ 702 ] * xx [ 700 ] ) - xx [ 701 ]
* ( xx [ 702 ] * xx [ 247 ] - xx [ 748 ] * xx [ 819 ] ) ) / xx [ 812 ] ; xx [
820 ] = xx [ 231 ] * xx [ 697 ] ; xx [ 821 ] = xx [ 820 ] * xx [ 820 ] ; xx [
822 ] = xx [ 0 ] - ( xx [ 821 ] + xx [ 821 ] ) * xx [ 7 ] ; xx [ 823 ] = xx [
231 ] * xx [ 693 ] ; xx [ 231 ] = xx [ 823 ] * xx [ 820 ] ; xx [ 833 ] = ( xx
[ 231 ] + xx [ 231 ] ) * xx [ 7 ] ; xx [ 834 ] = xx [ 822 ] ; xx [ 835 ] = xx
[ 7 ] * ( xx [ 231 ] - xx [ 231 ] ) ; xx [ 836 ] = - xx [ 833 ] ; xx [ 837 ]
= pm_math_Vector3_dot_ra ( xx + 797 , xx + 834 ) ; xx [ 834 ] = xx [ 823 ] *
xx [ 823 ] ; xx [ 835 ] = xx [ 7 ] * ( xx [ 821 ] - xx [ 834 ] ) ; xx [ 836 ]
= ( xx [ 231 ] + xx [ 231 ] ) * xx [ 7 ] ; xx [ 231 ] = xx [ 7 ] * xx [ 426 ]
- xx [ 0 ] ; xx [ 838 ] = - xx [ 836 ] ; xx [ 839 ] = xx [ 0 ] - ( xx [ 821 ]
+ xx [ 834 ] ) * xx [ 7 ] ; xx [ 840 ] = xx [ 835 ] ; xx [ 426 ] =
pm_math_Vector3_dot_ra ( xx + 797 , xx + 838 ) ; xx [ 821 ] = xx [ 837 ] * xx
[ 837 ] ; xx [ 834 ] = xx [ 426 ] * xx [ 426 ] ; xx [ 838 ] = xx [ 821 ] + xx
[ 834 ] ; xx [ 839 ] = xx [ 838 ] == 0.0 ? 0.0 : ( xx [ 837 ] * ( xx [ 835 ]
* xx [ 819 ] - xx [ 702 ] * xx [ 836 ] + xx [ 231 ] * xx [ 226 ] + xx [ 698 ]
* xx [ 657 ] ) - xx [ 426 ] * ( xx [ 702 ] * xx [ 822 ] - xx [ 833 ] * xx [
819 ] + xx [ 231 ] * xx [ 657 ] - xx [ 698 ] * xx [ 226 ] ) ) / xx [ 838 ] ;
xx [ 231 ] = xx [ 225 ] * xx [ 813 ] + xx [ 839 ] ; xx [ 698 ] = xx [ 231 ] /
xx [ 440 ] ; xx [ 702 ] = xx [ 443 ] * xx [ 698 ] ; xx [ 813 ] = xx [ 65 ] *
xx [ 698 ] ; xx [ 819 ] = xx [ 813 ] * xx [ 697 ] ; xx [ 839 ] = xx [ 702 ] *
xx [ 697 ] ; xx [ 840 ] = xx [ 702 ] + xx [ 7 ] * ( xx [ 693 ] * xx [ 819 ] -
xx [ 839 ] * xx [ 697 ] ) ; xx [ 702 ] = xx [ 813 ] - ( xx [ 693 ] * xx [ 839
] + xx [ 819 ] * xx [ 697 ] ) * xx [ 7 ] ; xx [ 813 ] = xx [ 439 ] * xx [ 698
] + xx [ 705 ] * xx [ 840 ] - xx [ 712 ] * xx [ 702 ] ; xx [ 841 ] = - ( xx [
813 ] * xx [ 667 ] + xx [ 840 ] * xx [ 677 ] - xx [ 686 ] * xx [ 702 ] ) ; xx
[ 842 ] = - ( xx [ 813 ] * xx [ 738 ] + xx [ 840 ] * xx [ 637 ] - xx [ 739 ]
* xx [ 702 ] ) ; xx [ 843 ] = xx [ 223 ] ; solveSymmetricPosDef ( xx + 753 ,
xx + 841 , 3 , 1 , xx + 844 , xx + 847 ) ; xx [ 702 ] = xx [ 688 ] * xx [ 844
] + xx [ 682 ] * xx [ 845 ] + xx [ 766 ] * xx [ 846 ] ; xx [ 813 ] = xx [ 87
] * xx [ 768 ] + xx [ 56 ] * xx [ 769 ] + xx [ 749 ] * xx [ 770 ] - xx [ 78 ]
* xx [ 794 ] - xx [ 684 ] * xx [ 795 ] - xx [ 765 ] * xx [ 796 ] ; xx [ 819 ]
= xx [ 87 ] * xx [ 771 ] + xx [ 56 ] * xx [ 772 ] + xx [ 749 ] * xx [ 773 ] ;
xx [ 839 ] = xx [ 87 ] * xx [ 816 ] + xx [ 56 ] * xx [ 817 ] + xx [ 749 ] *
xx [ 818 ] ; xx [ 840 ] = xx [ 87 ] * xx [ 762 ] + xx [ 56 ] * xx [ 763 ] +
xx [ 749 ] * xx [ 764 ] ; xx [ 841 ] = xx [ 87 ] * xx [ 844 ] + xx [ 56 ] *
xx [ 845 ] + xx [ 749 ] * xx [ 846 ] ; xx [ 842 ] = xx [ 771 ] * xx [ 678 ] +
xx [ 772 ] * xx [ 679 ] + xx [ 690 ] * xx [ 773 ] ; xx [ 843 ] = xx [ 816 ] *
xx [ 678 ] + xx [ 817 ] * xx [ 679 ] + xx [ 690 ] * xx [ 818 ] ; xx [ 847 ] =
xx [ 762 ] * xx [ 678 ] + xx [ 763 ] * xx [ 679 ] + xx [ 690 ] * xx [ 764 ] ;
xx [ 848 ] = xx [ 844 ] * xx [ 678 ] + xx [ 845 ] * xx [ 679 ] + xx [ 690 ] *
xx [ 846 ] ; xx [ 849 ] = 0.651853142204865 ; xx [ 850 ] = -
0.03641083691649384 ; xx [ 851 ] = 0.03143875934085798 ; xx [ 852 ] =
0.7568179017199528 ; xx [ 853 ] = xx [ 1 ] * input [ 8 ] ; xx [ 854 ] = sin (
xx [ 853 ] ) ; xx [ 855 ] = cos ( xx [ 853 ] ) ; xx [ 856 ] = - ( xx [ 139 ]
* xx [ 854 ] ) ; xx [ 857 ] = xx [ 144 ] * xx [ 854 ] ; xx [ 858 ] = xx [ 145
] * xx [ 854 ] ; pm_math_Quaternion_compose_ra ( xx + 849 , xx + 855 , xx +
859 ) ; xx [ 849 ] = state [ 59 ] ; xx [ 850 ] = state [ 60 ] ; xx [ 851 ] =
state [ 61 ] ; xx [ 852 ] = state [ 62 ] ;
pm_math_Quaternion_composeInverse_ra ( xx + 849 , xx + 163 , xx + 853 ) ;
pm_math_Quaternion_compose_ra ( xx + 149 , xx + 853 , xx + 863 ) ;
pm_math_Quaternion_compose_ra ( xx + 859 , xx + 863 , xx + 149 ) ;
pm_math_Quaternion_xform_ra ( xx + 149 , xx + 175 , xx + 853 ) ;
pm_math_Quaternion_xform_ra ( xx + 863 , xx + 181 , xx + 175 ) ;
pm_math_Quaternion_xform_ra ( xx + 859 , xx + 175 , xx + 856 ) ; xx [ 175 ] =
xx [ 853 ] + xx [ 856 ] ; if ( ii [ 0 ] != 0 ) { return
sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:DegenerateMass" ,
 "'triped/TriPed/Leg_2/SubChain 2/Coupling02_1_Spherical_Joint' has a degenerate mass distribution on its follower side."
, neDiagMgr ) ; } pm_math_Quaternion_xform_ra ( xx + 149 , xx + 209 , xx +
867 ) ; pm_math_Quaternion_xform_ra ( xx + 863 , xx + 215 , xx + 209 ) ;
pm_math_Quaternion_xform_ra ( xx + 859 , xx + 209 , xx + 870 ) ; xx [ 176 ] =
xx [ 867 ] + xx [ 870 ] ; pm_math_Quaternion_xform_ra ( xx + 149 , xx + 218 ,
xx + 209 ) ; pm_math_Quaternion_xform_ra ( xx + 863 , xx + 227 , xx + 218 ) ;
pm_math_Quaternion_xform_ra ( xx + 859 , xx + 218 , xx + 873 ) ; xx [ 177 ] =
xx [ 209 ] + xx [ 873 ] ; xx [ 218 ] = - xx [ 175 ] ; xx [ 219 ] = - xx [ 176
] ; xx [ 220 ] = - xx [ 177 ] ; solveSymmetricPosDef ( xx + 191 , xx + 218 ,
3 , 1 , xx + 876 , xx + 879 ) ; xx [ 218 ] = xx [ 854 ] + xx [ 857 ] ; xx [
219 ] = xx [ 868 ] + xx [ 871 ] ; xx [ 220 ] = xx [ 210 ] + xx [ 874 ] ; xx [
879 ] = - xx [ 218 ] ; xx [ 880 ] = - xx [ 219 ] ; xx [ 881 ] = - xx [ 220 ]
; solveSymmetricPosDef ( xx + 191 , xx + 879 , 3 , 1 , xx + 882 , xx + 885 )
; xx [ 879 ] = xx [ 736 ] * xx [ 816 ] + xx [ 180 ] * xx [ 817 ] + xx [ 651 ]
* xx [ 818 ] - xx [ 175 ] * xx [ 882 ] - xx [ 176 ] * xx [ 883 ] - xx [ 177 ]
* xx [ 884 ] ; xx [ 853 ] = xx [ 855 ] + xx [ 858 ] ; xx [ 854 ] = xx [ 869 ]
+ xx [ 872 ] ; xx [ 209 ] = xx [ 211 ] + xx [ 875 ] ; xx [ 855 ] = - xx [ 853
] ; xx [ 856 ] = - xx [ 854 ] ; xx [ 857 ] = - xx [ 209 ] ;
solveSymmetricPosDef ( xx + 191 , xx + 855 , 3 , 1 , xx + 867 , xx + 870 ) ;
xx [ 210 ] = xx [ 736 ] * xx [ 762 ] + xx [ 180 ] * xx [ 763 ] + xx [ 651 ] *
xx [ 764 ] - xx [ 175 ] * xx [ 867 ] - xx [ 176 ] * xx [ 868 ] - xx [ 177 ] *
xx [ 869 ] ; xx [ 211 ] = xx [ 736 ] * xx [ 844 ] + xx [ 180 ] * xx [ 845 ] +
xx [ 651 ] * xx [ 846 ] ; xx [ 855 ] = xx [ 654 ] * xx [ 762 ] + xx [ 681 ] *
xx [ 763 ] + xx [ 670 ] * xx [ 764 ] - xx [ 218 ] * xx [ 867 ] - xx [ 219 ] *
xx [ 868 ] - xx [ 220 ] * xx [ 869 ] ; xx [ 856 ] = xx [ 654 ] * xx [ 844 ] +
xx [ 681 ] * xx [ 845 ] + xx [ 670 ] * xx [ 846 ] ; xx [ 857 ] = xx [ 844 ] *
xx [ 178 ] + xx [ 845 ] * xx [ 687 ] + xx [ 692 ] * xx [ 846 ] ; xx [ 846 ] =
xx [ 301 ] * xx [ 6 ] + xx [ 302 ] * xx [ 91 ] ; xx [ 858 ] = xx [ 40 ] * xx
[ 846 ] + xx [ 301 ] * xx [ 64 ] + xx [ 302 ] * xx [ 8 ] ; xx [ 870 ] = xx [
30 ] * xx [ 858 ] ; xx [ 871 ] = xx [ 301 ] * xx [ 69 ] + xx [ 302 ] * xx [
92 ] + xx [ 846 ] * xx [ 50 ] ; xx [ 301 ] = xx [ 30 ] * xx [ 871 ] ; xx [
302 ] = xx [ 585 ] * xx [ 385 ] + xx [ 586 ] * xx [ 467 ] ; xx [ 872 ] = xx [
427 ] * xx [ 302 ] + xx [ 585 ] * xx [ 395 ] + xx [ 586 ] * xx [ 353 ] ; xx [
873 ] = xx [ 417 ] * xx [ 872 ] ; xx [ 874 ] = xx [ 585 ] * xx [ 404 ] + xx [
586 ] * xx [ 468 ] + xx [ 302 ] * xx [ 435 ] ; xx [ 585 ] = xx [ 417 ] * xx [
874 ] ; xx [ 586 ] = xx [ 844 ] * xx [ 667 ] + xx [ 845 ] * xx [ 738 ] ; xx [
875 ] = xx [ 705 ] * xx [ 586 ] + xx [ 844 ] * xx [ 677 ] + xx [ 845 ] * xx [
637 ] ; xx [ 880 ] = xx [ 697 ] * xx [ 875 ] ; xx [ 881 ] = xx [ 844 ] * xx [
686 ] + xx [ 845 ] * xx [ 739 ] + xx [ 586 ] * xx [ 712 ] ; xx [ 844 ] = xx [
697 ] * xx [ 881 ] ; xx [ 885 ] = xx [ 146 ] * xx [ 17 ] + xx [ 147 ] * xx [
55 ] + xx [ 148 ] * xx [ 138 ] - xx [ 184 ] * xx [ 236 ] - xx [ 185 ] * xx [
237 ] - xx [ 186 ] * xx [ 238 ] ; xx [ 886 ] = xx [ 241 ] ; xx [ 887 ] = xx [
133 ] ; xx [ 888 ] = xx [ 134 ] ; xx [ 889 ] = xx [ 222 ] ; xx [ 890 ] = xx [
127 ] ; xx [ 891 ] = xx [ 223 ] ; xx [ 892 ] = xx [ 223 ] ; xx [ 893 ] = xx [
223 ] ; xx [ 894 ] = xx [ 223 ] ; xx [ 895 ] = xx [ 223 ] ; xx [ 896 ] = xx [
223 ] ; xx [ 897 ] = xx [ 223 ] ; xx [ 898 ] = xx [ 223 ] ; xx [ 899 ] = xx [
223 ] ; xx [ 900 ] = xx [ 223 ] ; xx [ 901 ] = xx [ 223 ] ; xx [ 902 ] = xx [
223 ] ; xx [ 903 ] = xx [ 281 ] ; xx [ 904 ] = xx [ 223 ] ; xx [ 905 ] = xx [
223 ] ; xx [ 906 ] = xx [ 241 ] ; xx [ 907 ] = xx [ 242 ] * xx [ 190 ] + xx [
243 ] * xx [ 230 ] + xx [ 244 ] * xx [ 232 ] - xx [ 77 ] * xx [ 248 ] - xx [
239 ] * xx [ 249 ] - xx [ 240 ] * xx [ 250 ] ; xx [ 908 ] = xx [ 284 ] ; xx [
909 ] = xx [ 289 ] ; xx [ 910 ] = xx [ 296 ] ; xx [ 911 ] = xx [ 297 ] ; xx [
912 ] = xx [ 223 ] ; xx [ 913 ] = xx [ 223 ] ; xx [ 914 ] = xx [ 223 ] ; xx [
915 ] = xx [ 223 ] ; xx [ 916 ] = xx [ 223 ] ; xx [ 917 ] = xx [ 223 ] ; xx [
918 ] = xx [ 223 ] ; xx [ 919 ] = xx [ 223 ] ; xx [ 920 ] = xx [ 223 ] ; xx [
921 ] = xx [ 223 ] ; xx [ 922 ] = xx [ 223 ] ; xx [ 923 ] = xx [ 223 ] ; xx [
924 ] = xx [ 298 ] ; xx [ 925 ] = xx [ 223 ] ; xx [ 926 ] = xx [ 223 ] ; xx [
927 ] = xx [ 133 ] ; xx [ 928 ] = xx [ 284 ] ; xx [ 929 ] = xx [ 140 ] * xx [
125 ] + xx [ 141 ] * xx [ 126 ] + xx [ 101 ] * xx [ 142 ] - xx [ 89 ] * xx [
187 ] - xx [ 131 ] * xx [ 188 ] - xx [ 132 ] * xx [ 189 ] ; xx [ 930 ] = xx [
299 ] ; xx [ 931 ] = xx [ 300 ] ; xx [ 932 ] = xx [ 304 ] ; xx [ 933 ] = xx [
223 ] ; xx [ 934 ] = xx [ 223 ] ; xx [ 935 ] = xx [ 223 ] ; xx [ 936 ] = xx [
223 ] ; xx [ 937 ] = xx [ 223 ] ; xx [ 938 ] = xx [ 223 ] ; xx [ 939 ] = xx [
223 ] ; xx [ 940 ] = xx [ 223 ] ; xx [ 941 ] = xx [ 223 ] ; xx [ 942 ] = xx [
223 ] ; xx [ 943 ] = xx [ 223 ] ; xx [ 944 ] = xx [ 223 ] ; xx [ 945 ] = xx [
305 ] ; xx [ 946 ] = xx [ 223 ] ; xx [ 947 ] = xx [ 223 ] ; xx [ 948 ] = xx [
134 ] ; xx [ 949 ] = xx [ 289 ] ; xx [ 950 ] = xx [ 299 ] ; xx [ 951 ] = xx [
257 ] * xx [ 221 ] + xx [ 258 ] * xx [ 128 ] + xx [ 259 ] * xx [ 233 ] - xx [
314 ] * xx [ 357 ] - xx [ 315 ] * xx [ 358 ] - xx [ 348 ] * xx [ 359 ] ; xx [
952 ] = xx [ 355 ] ; xx [ 953 ] = xx [ 327 ] ; xx [ 954 ] = xx [ 223 ] ; xx [
955 ] = xx [ 223 ] ; xx [ 956 ] = xx [ 223 ] ; xx [ 957 ] = xx [ 223 ] ; xx [
958 ] = xx [ 223 ] ; xx [ 959 ] = xx [ 223 ] ; xx [ 960 ] = xx [ 223 ] ; xx [
961 ] = xx [ 223 ] ; xx [ 962 ] = xx [ 223 ] ; xx [ 963 ] = xx [ 223 ] ; xx [
964 ] = xx [ 223 ] ; xx [ 965 ] = xx [ 223 ] ; xx [ 966 ] = xx [ 328 ] ; xx [
967 ] = xx [ 223 ] ; xx [ 968 ] = xx [ 223 ] ; xx [ 969 ] = xx [ 222 ] ; xx [
970 ] = xx [ 296 ] ; xx [ 971 ] = xx [ 300 ] ; xx [ 972 ] = xx [ 355 ] ; xx [
973 ] = xx [ 260 ] * xx [ 137 ] + xx [ 261 ] * xx [ 129 ] + xx [ 262 ] * xx [
135 ] - xx [ 349 ] * xx [ 363 ] - xx [ 350 ] * xx [ 364 ] - xx [ 354 ] * xx [
365 ] ; xx [ 974 ] = xx [ 329 ] ; xx [ 975 ] = xx [ 223 ] ; xx [ 976 ] = xx [
223 ] ; xx [ 977 ] = xx [ 223 ] ; xx [ 978 ] = xx [ 223 ] ; xx [ 979 ] = xx [
223 ] ; xx [ 980 ] = xx [ 223 ] ; xx [ 981 ] = xx [ 223 ] ; xx [ 982 ] = xx [
223 ] ; xx [ 983 ] = xx [ 223 ] ; xx [ 984 ] = xx [ 223 ] ; xx [ 985 ] = xx [
223 ] ; xx [ 986 ] = xx [ 223 ] ; xx [ 987 ] = xx [ 342 ] ; xx [ 988 ] = xx [
223 ] ; xx [ 989 ] = xx [ 223 ] ; xx [ 990 ] = xx [ 127 ] ; xx [ 991 ] = xx [
297 ] ; xx [ 992 ] = xx [ 304 ] ; xx [ 993 ] = xx [ 327 ] ; xx [ 994 ] = xx [
329 ] ; xx [ 995 ] = xx [ 251 ] * xx [ 224 ] + xx [ 252 ] * xx [ 130 ] + xx [
136 ] * xx [ 253 ] - xx [ 324 ] * xx [ 330 ] - xx [ 325 ] * xx [ 331 ] - xx [
326 ] * xx [ 332 ] ; xx [ 996 ] = xx [ 223 ] ; xx [ 997 ] = xx [ 223 ] ; xx [
998 ] = xx [ 223 ] ; xx [ 999 ] = xx [ 223 ] ; xx [ 1000 ] = xx [ 223 ] ; xx
[ 1001 ] = xx [ 223 ] ; xx [ 1002 ] = xx [ 223 ] ; xx [ 1003 ] = xx [ 223 ] ;
xx [ 1004 ] = xx [ 223 ] ; xx [ 1005 ] = xx [ 223 ] ; xx [ 1006 ] = xx [ 223
] ; xx [ 1007 ] = xx [ 223 ] ; xx [ 1008 ] = xx [ 343 ] ; xx [ 1009 ] = xx [
223 ] ; xx [ 1010 ] = xx [ 223 ] ; xx [ 1011 ] = xx [ 223 ] ; xx [ 1012 ] =
xx [ 223 ] ; xx [ 1013 ] = xx [ 223 ] ; xx [ 1014 ] = xx [ 223 ] ; xx [ 1015
] = xx [ 223 ] ; xx [ 1016 ] = xx [ 223 ] ; xx [ 1017 ] = xx [ 407 ] * xx [
504 ] + xx [ 402 ] * xx [ 505 ] + xx [ 478 ] * xx [ 506 ] - xx [ 368 ] * xx [
553 ] - xx [ 538 ] * xx [ 554 ] - xx [ 539 ] * xx [ 555 ] ; xx [ 1018 ] = xx
[ 547 ] ; xx [ 1019 ] = xx [ 463 ] ; xx [ 1020 ] = xx [ 371 ] ; xx [ 1021 ] =
xx [ 400 ] ; xx [ 1022 ] = xx [ 366 ] ; xx [ 1023 ] = xx [ 223 ] ; xx [ 1024
] = xx [ 223 ] ; xx [ 1025 ] = xx [ 223 ] ; xx [ 1026 ] = xx [ 223 ] ; xx [
1027 ] = xx [ 223 ] ; xx [ 1028 ] = xx [ 223 ] ; xx [ 1029 ] = xx [ 223 ] ;
xx [ 1030 ] = xx [ 566 ] ; xx [ 1031 ] = xx [ 223 ] ; xx [ 1032 ] = xx [ 223
] ; xx [ 1033 ] = xx [ 223 ] ; xx [ 1034 ] = xx [ 223 ] ; xx [ 1035 ] = xx [
223 ] ; xx [ 1036 ] = xx [ 223 ] ; xx [ 1037 ] = xx [ 223 ] ; xx [ 1038 ] =
xx [ 547 ] ; xx [ 1039 ] = xx [ 388 ] * xx [ 556 ] + xx [ 399 ] * xx [ 557 ]
+ xx [ 494 ] * xx [ 558 ] - xx [ 375 ] * xx [ 559 ] - xx [ 495 ] * xx [ 560 ]
- xx [ 496 ] * xx [ 561 ] ; xx [ 1040 ] = xx [ 568 ] ; xx [ 1041 ] = xx [ 573
] ; xx [ 1042 ] = xx [ 580 ] ; xx [ 1043 ] = xx [ 581 ] ; xx [ 1044 ] = xx [
223 ] ; xx [ 1045 ] = xx [ 223 ] ; xx [ 1046 ] = xx [ 223 ] ; xx [ 1047 ] =
xx [ 223 ] ; xx [ 1048 ] = xx [ 223 ] ; xx [ 1049 ] = xx [ 223 ] ; xx [ 1050
] = xx [ 223 ] ; xx [ 1051 ] = xx [ 582 ] ; xx [ 1052 ] = xx [ 223 ] ; xx [
1053 ] = xx [ 223 ] ; xx [ 1054 ] = xx [ 223 ] ; xx [ 1055 ] = xx [ 223 ] ;
xx [ 1056 ] = xx [ 223 ] ; xx [ 1057 ] = xx [ 223 ] ; xx [ 1058 ] = xx [ 223
] ; xx [ 1059 ] = xx [ 463 ] ; xx [ 1060 ] = xx [ 568 ] ; xx [ 1061 ] = xx [
497 ] * xx [ 396 ] + xx [ 498 ] * xx [ 397 ] + xx [ 408 ] * xx [ 499 ] - xx [
409 ] * xx [ 501 ] - xx [ 438 ] * xx [ 502 ] - xx [ 462 ] * xx [ 503 ] ; xx [
1062 ] = xx [ 583 ] ; xx [ 1063 ] = xx [ 584 ] ; xx [ 1064 ] = xx [ 588 ] ;
xx [ 1065 ] = xx [ 223 ] ; xx [ 1066 ] = xx [ 223 ] ; xx [ 1067 ] = xx [ 223
] ; xx [ 1068 ] = xx [ 223 ] ; xx [ 1069 ] = xx [ 223 ] ; xx [ 1070 ] = xx [
223 ] ; xx [ 1071 ] = xx [ 223 ] ; xx [ 1072 ] = xx [ 589 ] ; xx [ 1073 ] =
xx [ 223 ] ; xx [ 1074 ] = xx [ 223 ] ; xx [ 1075 ] = xx [ 223 ] ; xx [ 1076
] = xx [ 223 ] ; xx [ 1077 ] = xx [ 223 ] ; xx [ 1078 ] = xx [ 223 ] ; xx [
1079 ] = xx [ 223 ] ; xx [ 1080 ] = xx [ 371 ] ; xx [ 1081 ] = xx [ 573 ] ;
xx [ 1082 ] = xx [ 583 ] ; xx [ 1083 ] = xx [ 464 ] * xx [ 523 ] + xx [ 406 ]
* xx [ 524 ] + xx [ 367 ] * xx [ 525 ] - xx [ 598 ] * xx [ 641 ] - xx [ 599 ]
* xx [ 642 ] - xx [ 632 ] * xx [ 643 ] ; xx [ 1084 ] = xx [ 639 ] ; xx [ 1085
] = xx [ 611 ] ; xx [ 1086 ] = xx [ 223 ] ; xx [ 1087 ] = xx [ 223 ] ; xx [
1088 ] = xx [ 223 ] ; xx [ 1089 ] = xx [ 223 ] ; xx [ 1090 ] = xx [ 223 ] ;
xx [ 1091 ] = xx [ 223 ] ; xx [ 1092 ] = xx [ 223 ] ; xx [ 1093 ] = xx [ 612
] ; xx [ 1094 ] = xx [ 223 ] ; xx [ 1095 ] = xx [ 223 ] ; xx [ 1096 ] = xx [
223 ] ; xx [ 1097 ] = xx [ 223 ] ; xx [ 1098 ] = xx [ 223 ] ; xx [ 1099 ] =
xx [ 223 ] ; xx [ 1100 ] = xx [ 223 ] ; xx [ 1101 ] = xx [ 400 ] ; xx [ 1102
] = xx [ 580 ] ; xx [ 1103 ] = xx [ 584 ] ; xx [ 1104 ] = xx [ 639 ] ; xx [
1105 ] = xx [ 401 ] * xx [ 562 ] + xx [ 456 ] * xx [ 563 ] + xx [ 405 ] * xx
[ 564 ] - xx [ 633 ] * xx [ 647 ] - xx [ 634 ] * xx [ 648 ] - xx [ 638 ] * xx
[ 649 ] ; xx [ 1106 ] = xx [ 613 ] ; xx [ 1107 ] = xx [ 223 ] ; xx [ 1108 ] =
xx [ 223 ] ; xx [ 1109 ] = xx [ 223 ] ; xx [ 1110 ] = xx [ 223 ] ; xx [ 1111
] = xx [ 223 ] ; xx [ 1112 ] = xx [ 223 ] ; xx [ 1113 ] = xx [ 223 ] ; xx [
1114 ] = xx [ 626 ] ; xx [ 1115 ] = xx [ 223 ] ; xx [ 1116 ] = xx [ 223 ] ;
xx [ 1117 ] = xx [ 223 ] ; xx [ 1118 ] = xx [ 223 ] ; xx [ 1119 ] = xx [ 223
] ; xx [ 1120 ] = xx [ 223 ] ; xx [ 1121 ] = xx [ 223 ] ; xx [ 1122 ] = xx [
366 ] ; xx [ 1123 ] = xx [ 581 ] ; xx [ 1124 ] = xx [ 588 ] ; xx [ 1125 ] =
xx [ 611 ] ; xx [ 1126 ] = xx [ 613 ] ; xx [ 1127 ] = xx [ 526 ] * xx [ 457 ]
+ xx [ 527 ] * xx [ 410 ] + xx [ 458 ] * xx [ 528 ] - xx [ 608 ] * xx [ 614 ]
- xx [ 609 ] * xx [ 615 ] - xx [ 610 ] * xx [ 616 ] ; xx [ 1128 ] = xx [ 223
] ; xx [ 1129 ] = xx [ 223 ] ; xx [ 1130 ] = xx [ 223 ] ; xx [ 1131 ] = xx [
223 ] ; xx [ 1132 ] = xx [ 223 ] ; xx [ 1133 ] = xx [ 223 ] ; xx [ 1134 ] =
xx [ 223 ] ; xx [ 1135 ] = xx [ 627 ] ; xx [ 1136 ] = xx [ 223 ] ; xx [ 1137
] = xx [ 223 ] ; xx [ 1138 ] = xx [ 223 ] ; xx [ 1139 ] = xx [ 223 ] ; xx [
1140 ] = xx [ 223 ] ; xx [ 1141 ] = xx [ 223 ] ; xx [ 1142 ] = xx [ 223 ] ;
xx [ 1143 ] = xx [ 223 ] ; xx [ 1144 ] = xx [ 223 ] ; xx [ 1145 ] = xx [ 223
] ; xx [ 1146 ] = xx [ 223 ] ; xx [ 1147 ] = xx [ 223 ] ; xx [ 1148 ] = xx [
223 ] ; xx [ 1149 ] = xx [ 688 ] * xx [ 775 ] + xx [ 682 ] * xx [ 776 ] + xx
[ 766 ] * xx [ 777 ] - xx [ 85 ] * xx [ 824 ] - xx [ 683 ] * xx [ 825 ] - xx
[ 815 ] * xx [ 826 ] ; xx [ 1150 ] = xx [ 767 ] ; xx [ 1151 ] = xx [ 735 ] ;
xx [ 1152 ] = xx [ 179 ] ; xx [ 1153 ] = xx [ 86 ] ; xx [ 1154 ] = xx [ 650 ]
; xx [ 1155 ] = xx [ 223 ] ; xx [ 1156 ] = xx [ 223 ] ; xx [ 1157 ] = xx [
702 ] ; xx [ 1158 ] = xx [ 223 ] ; xx [ 1159 ] = xx [ 223 ] ; xx [ 1160 ] =
xx [ 223 ] ; xx [ 1161 ] = xx [ 223 ] ; xx [ 1162 ] = xx [ 223 ] ; xx [ 1163
] = xx [ 223 ] ; xx [ 1164 ] = xx [ 223 ] ; xx [ 1165 ] = xx [ 223 ] ; xx [
1166 ] = xx [ 223 ] ; xx [ 1167 ] = xx [ 223 ] ; xx [ 1168 ] = xx [ 223 ] ;
xx [ 1169 ] = xx [ 223 ] ; xx [ 1170 ] = xx [ 767 ] ; xx [ 1171 ] = xx [ 87 ]
* xx [ 827 ] + xx [ 56 ] * xx [ 828 ] + xx [ 749 ] * xx [ 829 ] - xx [ 78 ] *
xx [ 830 ] - xx [ 684 ] * xx [ 831 ] - xx [ 765 ] * xx [ 832 ] ; xx [ 1172 ]
= xx [ 813 ] ; xx [ 1173 ] = xx [ 819 ] ; xx [ 1174 ] = xx [ 839 ] ; xx [
1175 ] = xx [ 840 ] ; xx [ 1176 ] = xx [ 223 ] ; xx [ 1177 ] = xx [ 223 ] ;
xx [ 1178 ] = xx [ 841 ] ; xx [ 1179 ] = xx [ 223 ] ; xx [ 1180 ] = xx [ 223
] ; xx [ 1181 ] = xx [ 223 ] ; xx [ 1182 ] = xx [ 223 ] ; xx [ 1183 ] = xx [
223 ] ; xx [ 1184 ] = xx [ 223 ] ; xx [ 1185 ] = xx [ 223 ] ; xx [ 1186 ] =
xx [ 223 ] ; xx [ 1187 ] = xx [ 223 ] ; xx [ 1188 ] = xx [ 223 ] ; xx [ 1189
] = xx [ 223 ] ; xx [ 1190 ] = xx [ 223 ] ; xx [ 1191 ] = xx [ 735 ] ; xx [
1192 ] = xx [ 813 ] ; xx [ 1193 ] = xx [ 768 ] * xx [ 678 ] + xx [ 769 ] * xx
[ 679 ] + xx [ 690 ] * xx [ 770 ] - xx [ 691 ] * xx [ 794 ] - xx [ 714 ] * xx
[ 795 ] - xx [ 734 ] * xx [ 796 ] ; xx [ 1194 ] = xx [ 842 ] ; xx [ 1195 ] =
xx [ 843 ] ; xx [ 1196 ] = xx [ 847 ] ; xx [ 1197 ] = xx [ 223 ] ; xx [ 1198
] = xx [ 223 ] ; xx [ 1199 ] = xx [ 848 ] ; xx [ 1200 ] = xx [ 223 ] ; xx [
1201 ] = xx [ 223 ] ; xx [ 1202 ] = xx [ 223 ] ; xx [ 1203 ] = xx [ 223 ] ;
xx [ 1204 ] = xx [ 223 ] ; xx [ 1205 ] = xx [ 223 ] ; xx [ 1206 ] = xx [ 223
] ; xx [ 1207 ] = xx [ 223 ] ; xx [ 1208 ] = xx [ 223 ] ; xx [ 1209 ] = xx [
223 ] ; xx [ 1210 ] = xx [ 223 ] ; xx [ 1211 ] = xx [ 223 ] ; xx [ 1212 ] =
xx [ 179 ] ; xx [ 1213 ] = xx [ 819 ] ; xx [ 1214 ] = xx [ 842 ] ; xx [ 1215
] = xx [ 736 ] * xx [ 771 ] + xx [ 180 ] * xx [ 772 ] + xx [ 651 ] * xx [ 773
] - xx [ 175 ] * xx [ 876 ] - xx [ 176 ] * xx [ 877 ] - xx [ 177 ] * xx [ 878
] ; xx [ 1216 ] = xx [ 879 ] ; xx [ 1217 ] = xx [ 210 ] ; xx [ 1218 ] = xx [
223 ] ; xx [ 1219 ] = xx [ 223 ] ; xx [ 1220 ] = xx [ 211 ] ; xx [ 1221 ] =
xx [ 223 ] ; xx [ 1222 ] = xx [ 223 ] ; xx [ 1223 ] = xx [ 223 ] ; xx [ 1224
] = xx [ 223 ] ; xx [ 1225 ] = xx [ 223 ] ; xx [ 1226 ] = xx [ 223 ] ; xx [
1227 ] = xx [ 223 ] ; xx [ 1228 ] = xx [ 223 ] ; xx [ 1229 ] = xx [ 223 ] ;
xx [ 1230 ] = xx [ 223 ] ; xx [ 1231 ] = xx [ 223 ] ; xx [ 1232 ] = xx [ 223
] ; xx [ 1233 ] = xx [ 86 ] ; xx [ 1234 ] = xx [ 839 ] ; xx [ 1235 ] = xx [
843 ] ; xx [ 1236 ] = xx [ 879 ] ; xx [ 1237 ] = xx [ 654 ] * xx [ 816 ] + xx
[ 681 ] * xx [ 817 ] + xx [ 670 ] * xx [ 818 ] - xx [ 218 ] * xx [ 882 ] - xx
[ 219 ] * xx [ 883 ] - xx [ 220 ] * xx [ 884 ] ; xx [ 1238 ] = xx [ 855 ] ;
xx [ 1239 ] = xx [ 223 ] ; xx [ 1240 ] = xx [ 223 ] ; xx [ 1241 ] = xx [ 856
] ; xx [ 1242 ] = xx [ 223 ] ; xx [ 1243 ] = xx [ 223 ] ; xx [ 1244 ] = xx [
223 ] ; xx [ 1245 ] = xx [ 223 ] ; xx [ 1246 ] = xx [ 223 ] ; xx [ 1247 ] =
xx [ 223 ] ; xx [ 1248 ] = xx [ 223 ] ; xx [ 1249 ] = xx [ 223 ] ; xx [ 1250
] = xx [ 223 ] ; xx [ 1251 ] = xx [ 223 ] ; xx [ 1252 ] = xx [ 223 ] ; xx [
1253 ] = xx [ 223 ] ; xx [ 1254 ] = xx [ 650 ] ; xx [ 1255 ] = xx [ 840 ] ;
xx [ 1256 ] = xx [ 847 ] ; xx [ 1257 ] = xx [ 210 ] ; xx [ 1258 ] = xx [ 855
] ; xx [ 1259 ] = xx [ 762 ] * xx [ 178 ] + xx [ 763 ] * xx [ 687 ] + xx [
692 ] * xx [ 764 ] - xx [ 853 ] * xx [ 867 ] - xx [ 854 ] * xx [ 868 ] - xx [
209 ] * xx [ 869 ] ; xx [ 1260 ] = xx [ 223 ] ; xx [ 1261 ] = xx [ 223 ] ; xx
[ 1262 ] = xx [ 857 ] ; xx [ 1263 ] = xx [ 281 ] ; xx [ 1264 ] = xx [ 298 ] ;
xx [ 1265 ] = xx [ 305 ] ; xx [ 1266 ] = xx [ 328 ] ; xx [ 1267 ] = xx [ 342
] ; xx [ 1268 ] = xx [ 343 ] ; xx [ 1269 ] = xx [ 223 ] ; xx [ 1270 ] = xx [
223 ] ; xx [ 1271 ] = xx [ 223 ] ; xx [ 1272 ] = xx [ 223 ] ; xx [ 1273 ] =
xx [ 223 ] ; xx [ 1274 ] = xx [ 223 ] ; xx [ 1275 ] = xx [ 223 ] ; xx [ 1276
] = xx [ 223 ] ; xx [ 1277 ] = xx [ 223 ] ; xx [ 1278 ] = xx [ 223 ] ; xx [
1279 ] = xx [ 223 ] ; xx [ 1280 ] = xx [ 223 ] ; xx [ 1281 ] = xx [ 31 ] * (
xx [ 277 ] - ( xx [ 846 ] * xx [ 61 ] + xx [ 63 ] * ( xx [ 858 ] - ( xx [ 870
] * xx [ 30 ] - xx [ 25 ] * xx [ 301 ] ) * xx [ 7 ] ) + ( xx [ 7 ] * ( xx [
25 ] * xx [ 870 ] + xx [ 301 ] * xx [ 30 ] ) - xx [ 871 ] ) * xx [ 66 ] ) ) ;
xx [ 1282 ] = xx [ 223 ] ; xx [ 1283 ] = xx [ 223 ] ; xx [ 1284 ] = xx [ 223
] ; xx [ 1285 ] = xx [ 223 ] ; xx [ 1286 ] = xx [ 223 ] ; xx [ 1287 ] = xx [
223 ] ; xx [ 1288 ] = xx [ 223 ] ; xx [ 1289 ] = xx [ 223 ] ; xx [ 1290 ] =
xx [ 566 ] ; xx [ 1291 ] = xx [ 582 ] ; xx [ 1292 ] = xx [ 589 ] ; xx [ 1293
] = xx [ 612 ] ; xx [ 1294 ] = xx [ 626 ] ; xx [ 1295 ] = xx [ 627 ] ; xx [
1296 ] = xx [ 223 ] ; xx [ 1297 ] = xx [ 223 ] ; xx [ 1298 ] = xx [ 223 ] ;
xx [ 1299 ] = xx [ 223 ] ; xx [ 1300 ] = xx [ 223 ] ; xx [ 1301 ] = xx [ 223
] ; xx [ 1302 ] = xx [ 223 ] ; xx [ 1303 ] = xx [ 418 ] * ( xx [ 434 ] - ( xx
[ 302 ] * xx [ 442 ] + xx [ 444 ] * ( xx [ 872 ] - ( xx [ 873 ] * xx [ 417 ]
- xx [ 412 ] * xx [ 585 ] ) * xx [ 7 ] ) + ( xx [ 7 ] * ( xx [ 412 ] * xx [
873 ] + xx [ 585 ] * xx [ 417 ] ) - xx [ 874 ] ) * xx [ 446 ] ) ) ; xx [ 1304
] = xx [ 223 ] ; xx [ 1305 ] = xx [ 223 ] ; xx [ 1306 ] = xx [ 223 ] ; xx [
1307 ] = xx [ 223 ] ; xx [ 1308 ] = xx [ 223 ] ; xx [ 1309 ] = xx [ 223 ] ;
xx [ 1310 ] = xx [ 223 ] ; xx [ 1311 ] = xx [ 223 ] ; xx [ 1312 ] = xx [ 223
] ; xx [ 1313 ] = xx [ 223 ] ; xx [ 1314 ] = xx [ 223 ] ; xx [ 1315 ] = xx [
223 ] ; xx [ 1316 ] = xx [ 223 ] ; xx [ 1317 ] = xx [ 702 ] ; xx [ 1318 ] =
xx [ 841 ] ; xx [ 1319 ] = xx [ 848 ] ; xx [ 1320 ] = xx [ 211 ] ; xx [ 1321
] = xx [ 856 ] ; xx [ 1322 ] = xx [ 857 ] ; xx [ 1323 ] = xx [ 223 ] ; xx [
1324 ] = xx [ 223 ] ; xx [ 1325 ] = xx [ 231 ] * ( xx [ 698 ] - ( xx [ 586 ]
* xx [ 715 ] + xx [ 716 ] * ( xx [ 875 ] - ( xx [ 880 ] * xx [ 697 ] - xx [
693 ] * xx [ 844 ] ) * xx [ 7 ] ) + ( xx [ 7 ] * ( xx [ 693 ] * xx [ 880 ] +
xx [ 844 ] * xx [ 697 ] ) - xx [ 881 ] ) * xx [ 718 ] ) ) ; xx [ 140 ] = - xx
[ 139 ] ; xx [ 141 ] = xx [ 144 ] ; xx [ 142 ] = xx [ 145 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 171 , xx + 140 , xx + 146 ) ; xx [
187 ] = 0.05448810068449638 ; xx [ 188 ] = 9.016809746371062e-8 ; xx [ 189 ]
= - 1.197569081478675e-6 ; pm_math_Vector3_cross_ra ( xx + 146 , xx + 187 ,
xx + 236 ) ; pm_math_Quaternion_xform_ra ( xx + 167 , xx + 236 , xx + 146 ) ;
xx [ 86 ] = 0.06203617700142335 ; xx [ 236 ] = 0.05551189931534764 ; xx [ 237
] = 9.185648409514065e-8 ; xx [ 238 ] = 1.23198241897863e-6 ;
pm_math_Quaternion_xform_ra ( xx + 171 , xx + 236 , xx + 241 ) ; xx [ 127 ] =
6.252064263292171e-7 ; xx [ 133 ] = 4.366561113205437e-3 ; xx [ 248 ] = xx [
86 ] + xx [ 241 ] ; xx [ 249 ] = xx [ 127 ] + xx [ 242 ] ; xx [ 250 ] = xx [
243 ] - xx [ 133 ] ; pm_math_Vector3_cross_ra ( xx + 140 , xx + 248 , xx +
241 ) ; pm_math_Quaternion_xform_ra ( xx + 157 , xx + 241 , xx + 251 ) ; xx [
134 ] = 2.298050364265303e-6 ; xx [ 179 ] = 0.02367056868070961 ; xx [ 210 ]
= 3.023104627104057e-6 ; xx [ 241 ] = - xx [ 134 ] ; xx [ 242 ] = xx [ 179 ]
; xx [ 243 ] = - xx [ 210 ] ; pm_math_Quaternion_xform_ra ( xx + 157 , xx +
241 , xx + 257 ) ; xx [ 211 ] = xx [ 14 ] * xx [ 14 ] ; xx [ 222 ] = xx [ 12
] * xx [ 14 ] ; xx [ 244 ] = xx [ 4 ] * xx [ 10 ] ; xx [ 553 ] = ( xx [ 211 ]
+ xx [ 12 ] * xx [ 12 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 554 ] = xx [ 6 ] ; xx
[ 555 ] = ( xx [ 16 ] + xx [ 15 ] ) * xx [ 7 ] ; xx [ 556 ] = - ( ( xx [ 2 ]
+ xx [ 3 ] ) * xx [ 7 ] ) ; xx [ 557 ] = ( xx [ 211 ] + xx [ 11 ] ) * xx [ 7
] - xx [ 0 ] ; xx [ 558 ] = xx [ 7 ] * ( xx [ 222 ] - xx [ 244 ] ) ; xx [ 559
] = xx [ 7 ] * ( xx [ 16 ] - xx [ 15 ] ) ; xx [ 560 ] = - ( ( xx [ 244 ] + xx
[ 222 ] ) * xx [ 7 ] ) ; xx [ 561 ] = ( xx [ 211 ] + xx [ 5 ] ) * xx [ 7 ] -
xx [ 0 ] ; xx [ 2 ] = xx [ 13 ] * state [ 3 ] ; xx [ 3 ] = xx [ 7 ] * xx [ 88
] * state [ 4 ] ; xx [ 5 ] = xx [ 2 ] + xx [ 3 ] ; xx [ 11 ] = xx [ 6 ] *
state [ 3 ] ; xx [ 15 ] = xx [ 91 ] * state [ 4 ] ; xx [ 16 ] = xx [ 11 ] +
xx [ 15 ] ; xx [ 88 ] = xx [ 18 ] * state [ 3 ] ; xx [ 211 ] = xx [ 88 ] +
state [ 5 ] ; xx [ 260 ] = xx [ 5 ] ; xx [ 261 ] = xx [ 16 ] ; xx [ 262 ] =
xx [ 211 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 553 , xx + 260 , xx + 824
) ; pm_math_Matrix3x3_postCross_ra ( xx + 824 , xx + 260 , xx + 839 ) ; xx [
296 ] = xx [ 2 ] ; xx [ 297 ] = xx [ 11 ] ; xx [ 298 ] = xx [ 88 ] ;
pm_math_Vector3_cross_ra ( xx + 260 , xx + 296 , xx + 299 ) ; xx [ 2 ] = xx [
15 ] * state [ 5 ] - xx [ 299 ] ; xx [ 11 ] = xx [ 300 ] + xx [ 3 ] * state [
5 ] ; xx [ 296 ] = xx [ 2 ] ; xx [ 297 ] = - xx [ 11 ] ; xx [ 298 ] = - xx [
301 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 553 , xx + 296 , xx + 824 ) ;
xx [ 3 ] = xx [ 839 ] + xx [ 824 ] ; xx [ 15 ] = xx [ 841 ] + xx [ 826 ] ; xx
[ 88 ] = xx [ 842 ] + xx [ 827 ] ; xx [ 222 ] = xx [ 844 ] + xx [ 829 ] ; xx
[ 244 ] = xx [ 845 ] + xx [ 830 ] ; xx [ 277 ] = xx [ 847 ] + xx [ 832 ] ; xx
[ 553 ] = xx [ 3 ] ; xx [ 554 ] = xx [ 840 ] + xx [ 825 ] ; xx [ 555 ] = xx [
15 ] ; xx [ 556 ] = xx [ 88 ] ; xx [ 557 ] = xx [ 843 ] + xx [ 828 ] ; xx [
558 ] = xx [ 222 ] ; xx [ 559 ] = xx [ 244 ] ; xx [ 560 ] = xx [ 846 ] + xx [
831 ] ; xx [ 561 ] = xx [ 277 ] ; pm_math_Matrix3x3_xform_ra ( xx + 553 , xx
+ 119 , xx + 296 ) ; xx [ 281 ] = xx [ 3 ] * xx [ 53 ] + xx [ 15 ] * xx [ 54
] ; xx [ 3 ] = xx [ 145 ] * inputDot [ 1 ] ; xx [ 15 ] = xx [ 158 ] * xx [
160 ] ; xx [ 284 ] = xx [ 157 ] * xx [ 159 ] ; xx [ 289 ] = ( xx [ 15 ] + xx
[ 284 ] ) * xx [ 7 ] ; xx [ 299 ] = xx [ 139 ] * inputDot [ 1 ] ; xx [ 300 ]
= xx [ 157 ] * xx [ 157 ] ; xx [ 302 ] = ( xx [ 300 ] + xx [ 158 ] * xx [ 158
] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 304 ] = xx [ 289 ] * xx [ 299 ] + xx [ 3 ] *
xx [ 302 ] ; xx [ 305 ] = xx [ 144 ] * inputDot [ 1 ] ; xx [ 327 ] = xx [ 158
] * xx [ 159 ] ; xx [ 328 ] = xx [ 157 ] * xx [ 160 ] ; xx [ 329 ] = xx [ 7 ]
* ( xx [ 327 ] - xx [ 328 ] ) ; xx [ 330 ] = xx [ 305 ] * xx [ 302 ] + xx [
299 ] * xx [ 329 ] ; xx [ 331 ] = xx [ 3 ] * xx [ 329 ] - xx [ 289 ] * xx [
305 ] ; xx [ 332 ] = xx [ 159 ] * xx [ 160 ] ; xx [ 342 ] = xx [ 157 ] * xx [
158 ] ; xx [ 343 ] = xx [ 7 ] * ( xx [ 332 ] - xx [ 342 ] ) ; xx [ 355 ] = (
xx [ 327 ] + xx [ 328 ] ) * xx [ 7 ] ; xx [ 327 ] = xx [ 299 ] * xx [ 343 ] +
xx [ 355 ] * xx [ 3 ] ; xx [ 328 ] = ( xx [ 300 ] + xx [ 159 ] * xx [ 159 ] )
* xx [ 7 ] - xx [ 0 ] ; xx [ 357 ] = xx [ 355 ] * xx [ 305 ] + xx [ 299 ] *
xx [ 328 ] ; xx [ 358 ] = xx [ 3 ] * xx [ 328 ] - xx [ 305 ] * xx [ 343 ] ;
xx [ 359 ] = ( xx [ 300 ] + xx [ 160 ] * xx [ 160 ] ) * xx [ 7 ] - xx [ 0 ] ;
xx [ 300 ] = xx [ 7 ] * ( xx [ 15 ] - xx [ 284 ] ) ; xx [ 15 ] = xx [ 299 ] *
xx [ 359 ] + xx [ 3 ] * xx [ 300 ] ; xx [ 284 ] = ( xx [ 332 ] + xx [ 342 ] )
* xx [ 7 ] ; xx [ 332 ] = xx [ 305 ] * xx [ 300 ] + xx [ 284 ] * xx [ 299 ] ;
xx [ 342 ] = xx [ 284 ] * xx [ 3 ] - xx [ 305 ] * xx [ 359 ] ; xx [ 824 ] = -
( xx [ 3 ] * xx [ 304 ] + xx [ 305 ] * xx [ 330 ] ) ; xx [ 825 ] = - ( xx [
299 ] * xx [ 330 ] + xx [ 3 ] * xx [ 331 ] ) ; xx [ 826 ] = xx [ 305 ] * xx [
331 ] - xx [ 299 ] * xx [ 304 ] ; xx [ 827 ] = - ( xx [ 3 ] * xx [ 327 ] + xx
[ 305 ] * xx [ 357 ] ) ; xx [ 828 ] = - ( xx [ 299 ] * xx [ 357 ] + xx [ 3 ]
* xx [ 358 ] ) ; xx [ 829 ] = xx [ 305 ] * xx [ 358 ] - xx [ 299 ] * xx [ 327
] ; xx [ 830 ] = - ( xx [ 3 ] * xx [ 15 ] + xx [ 305 ] * xx [ 332 ] ) ; xx [
831 ] = - ( xx [ 299 ] * xx [ 332 ] + xx [ 3 ] * xx [ 342 ] ) ; xx [ 832 ] =
xx [ 305 ] * xx [ 342 ] - xx [ 299 ] * xx [ 15 ] ; xx [ 15 ] = xx [ 171 ] *
xx [ 171 ] ; xx [ 304 ] = ( xx [ 15 ] + xx [ 172 ] * xx [ 172 ] ) * xx [ 7 ]
- xx [ 0 ] ; xx [ 327 ] = xx [ 172 ] * xx [ 173 ] ; xx [ 330 ] = xx [ 171 ] *
xx [ 174 ] ; xx [ 331 ] = xx [ 7 ] * ( xx [ 327 ] - xx [ 330 ] ) ; xx [ 332 ]
= xx [ 172 ] * xx [ 174 ] ; xx [ 342 ] = xx [ 171 ] * xx [ 173 ] ; xx [ 357 ]
= ( xx [ 332 ] + xx [ 342 ] ) * xx [ 7 ] ; xx [ 358 ] = ( xx [ 327 ] + xx [
330 ] ) * xx [ 7 ] ; xx [ 327 ] = ( xx [ 15 ] + xx [ 173 ] * xx [ 173 ] ) *
xx [ 7 ] - xx [ 0 ] ; xx [ 330 ] = xx [ 173 ] * xx [ 174 ] ; xx [ 363 ] = xx
[ 171 ] * xx [ 172 ] ; xx [ 364 ] = xx [ 7 ] * ( xx [ 330 ] - xx [ 363 ] ) ;
xx [ 365 ] = xx [ 7 ] * ( xx [ 332 ] - xx [ 342 ] ) ; xx [ 332 ] = ( xx [ 330
] + xx [ 363 ] ) * xx [ 7 ] ; xx [ 330 ] = ( xx [ 15 ] + xx [ 174 ] * xx [
174 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 839 ] = xx [ 304 ] ; xx [ 840 ] = xx [
331 ] ; xx [ 841 ] = xx [ 357 ] ; xx [ 842 ] = xx [ 358 ] ; xx [ 843 ] = xx [
327 ] ; xx [ 844 ] = xx [ 364 ] ; xx [ 845 ] = xx [ 365 ] ; xx [ 846 ] = xx [
332 ] ; xx [ 847 ] = xx [ 330 ] ; pm_math_Matrix3x3_compose_ra ( xx + 824 ,
xx + 839 , xx + 867 ) ; xx [ 839 ] = xx [ 302 ] ; xx [ 840 ] = xx [ 329 ] ;
xx [ 841 ] = xx [ 289 ] ; xx [ 842 ] = xx [ 355 ] ; xx [ 843 ] = xx [ 328 ] ;
xx [ 844 ] = xx [ 343 ] ; xx [ 845 ] = xx [ 300 ] ; xx [ 846 ] = xx [ 284 ] ;
xx [ 847 ] = xx [ 359 ] ; xx [ 497 ] = state [ 12 ] ; xx [ 498 ] = state [ 13
] ; xx [ 499 ] = state [ 14 ] ; pm_math_Quaternion_xform_ra ( xx + 163 , xx +
497 , xx + 501 ) ; xx [ 15 ] = xx [ 501 ] * xx [ 357 ] - xx [ 503 ] * xx [
304 ] ; xx [ 284 ] = xx [ 502 ] * xx [ 304 ] - xx [ 501 ] * xx [ 331 ] ; xx [
289 ] = xx [ 503 ] * xx [ 331 ] - xx [ 502 ] * xx [ 357 ] ; xx [ 300 ] = xx [
501 ] * xx [ 364 ] - xx [ 503 ] * xx [ 358 ] ; xx [ 302 ] = xx [ 502 ] * xx [
358 ] - xx [ 501 ] * xx [ 327 ] ; xx [ 304 ] = xx [ 503 ] * xx [ 327 ] - xx [
502 ] * xx [ 364 ] ; xx [ 327 ] = xx [ 501 ] * xx [ 330 ] - xx [ 503 ] * xx [
365 ] ; xx [ 328 ] = xx [ 502 ] * xx [ 365 ] - xx [ 501 ] * xx [ 332 ] ; xx [
329 ] = xx [ 503 ] * xx [ 332 ] - xx [ 502 ] * xx [ 330 ] ; xx [ 876 ] = xx [
503 ] * xx [ 15 ] - xx [ 502 ] * xx [ 284 ] ; xx [ 877 ] = xx [ 501 ] * xx [
284 ] - xx [ 503 ] * xx [ 289 ] ; xx [ 878 ] = xx [ 502 ] * xx [ 289 ] - xx [
501 ] * xx [ 15 ] ; xx [ 879 ] = xx [ 503 ] * xx [ 300 ] - xx [ 502 ] * xx [
302 ] ; xx [ 880 ] = xx [ 501 ] * xx [ 302 ] - xx [ 503 ] * xx [ 304 ] ; xx [
881 ] = xx [ 502 ] * xx [ 304 ] - xx [ 501 ] * xx [ 300 ] ; xx [ 882 ] = xx [
503 ] * xx [ 327 ] - xx [ 502 ] * xx [ 328 ] ; xx [ 883 ] = xx [ 501 ] * xx [
328 ] - xx [ 503 ] * xx [ 329 ] ; xx [ 884 ] = xx [ 502 ] * xx [ 329 ] - xx [
501 ] * xx [ 327 ] ; pm_math_Matrix3x3_compose_ra ( xx + 839 , xx + 876 , xx
+ 1326 ) ; xx [ 15 ] = xx [ 167 ] * xx [ 167 ] ; xx [ 284 ] = xx [ 168 ] * xx
[ 169 ] ; xx [ 289 ] = xx [ 167 ] * xx [ 170 ] ; xx [ 300 ] = xx [ 168 ] * xx
[ 170 ] ; xx [ 302 ] = xx [ 167 ] * xx [ 169 ] ; xx [ 304 ] = xx [ 169 ] * xx
[ 170 ] ; xx [ 327 ] = xx [ 167 ] * xx [ 168 ] ; xx [ 839 ] = ( xx [ 15 ] +
xx [ 168 ] * xx [ 168 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 840 ] = xx [ 7 ] * (
xx [ 284 ] - xx [ 289 ] ) ; xx [ 841 ] = ( xx [ 300 ] + xx [ 302 ] ) * xx [ 7
] ; xx [ 842 ] = ( xx [ 284 ] + xx [ 289 ] ) * xx [ 7 ] ; xx [ 843 ] = ( xx [
15 ] + xx [ 169 ] * xx [ 169 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 844 ] = xx [ 7
] * ( xx [ 304 ] - xx [ 327 ] ) ; xx [ 845 ] = xx [ 7 ] * ( xx [ 300 ] - xx [
302 ] ) ; xx [ 846 ] = ( xx [ 304 ] + xx [ 327 ] ) * xx [ 7 ] ; xx [ 847 ] =
( xx [ 15 ] + xx [ 170 ] * xx [ 170 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 327 ] =
- xx [ 299 ] ; xx [ 328 ] = xx [ 305 ] ; xx [ 329 ] = xx [ 3 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 171 , xx + 327 , xx + 330 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 839 , xx + 330 , xx + 1335 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 1335 , xx + 501 , xx + 839 ) ; xx [
1335 ] = xx [ 867 ] + xx [ 1326 ] + xx [ 7 ] * xx [ 839 ] ; xx [ 1336 ] = xx
[ 868 ] + xx [ 1327 ] + xx [ 7 ] * xx [ 840 ] ; xx [ 1337 ] = xx [ 869 ] + xx
[ 1328 ] + xx [ 7 ] * xx [ 841 ] ; xx [ 1338 ] = xx [ 870 ] + xx [ 1329 ] +
xx [ 7 ] * xx [ 842 ] ; xx [ 1339 ] = xx [ 871 ] + xx [ 1330 ] + xx [ 7 ] *
xx [ 843 ] ; xx [ 1340 ] = xx [ 872 ] + xx [ 1331 ] + xx [ 7 ] * xx [ 844 ] ;
xx [ 1341 ] = xx [ 873 ] + xx [ 1332 ] + xx [ 7 ] * xx [ 845 ] ; xx [ 1342 ]
= xx [ 874 ] + xx [ 1333 ] + xx [ 7 ] * xx [ 846 ] ; xx [ 1343 ] = xx [ 875 ]
+ xx [ 1334 ] + xx [ 7 ] * xx [ 847 ] ; pm_math_Matrix3x3_xform_ra ( xx +
1335 , xx + 187 , xx + 357 ) ; pm_math_Matrix3x3_xform_ra ( xx + 824 , xx +
248 , xx + 363 ) ; xx [ 504 ] = - 0.02356101479783038 ; xx [ 505 ] = -
2.577933632660384e-6 ; xx [ 506 ] = - 2.27473320173243e-3 ;
pm_math_Quaternion_xform_ra ( xx + 157 , xx + 504 , xx + 523 ) ; xx [ 3 ] =
inputDot [ 1 ] * inputDot [ 1 ] ; pm_math_Matrix3x3_xform_ra ( xx + 876 , xx
+ 236 , xx + 526 ) ; pm_math_Quaternion_xform_ra ( xx + 157 , xx + 526 , xx +
562 ) ; pm_math_Vector3_cross_ra ( xx + 501 , xx + 236 , xx + 526 ) ;
pm_math_Quaternion_xform_ra ( xx + 171 , xx + 526 , xx + 580 ) ;
pm_math_Vector3_cross_ra ( xx + 327 , xx + 580 , xx + 583 ) ;
pm_math_Quaternion_xform_ra ( xx + 157 , xx + 583 , xx + 580 ) ; xx [ 15 ] =
1.145915590261647e4 ; xx [ 284 ] = xx [ 15 ] * state [ 0 ] ; xx [ 583 ] = xx
[ 5 ] * xx [ 22 ] ; xx [ 584 ] = xx [ 16 ] * xx [ 58 ] ; xx [ 585 ] = xx [
211 ] * xx [ 28 ] ; pm_math_Vector3_cross_ra ( xx + 260 , xx + 583 , xx + 611
) ; xx [ 583 ] = xx [ 76 ] ; xx [ 584 ] = - xx [ 143 ] ; xx [ 585 ] = - xx [
161 ] ; xx [ 586 ] = xx [ 162 ] ; pm_math_Quaternion_inverseCompose_ra ( xx +
167 , xx + 115 , xx + 647 ) ; pm_math_Quaternion_inverseCompose_ra ( xx + 583
, xx + 647 , xx + 167 ) ; xx [ 76 ] = xx [ 170 ] * xx [ 170 ] ; xx [ 143 ] =
sqrt ( xx [ 168 ] * xx [ 168 ] + xx [ 169 ] * xx [ 169 ] + xx [ 76 ] ) ; xx [
161 ] = 229.1831180523293 ; xx [ 162 ] = atan2 ( xx [ 143 ] , fabs ( xx [ 167
] ) ) * xx [ 161 ] ; xx [ 289 ] = xx [ 143 ] == 0.0 ? 0.0 : 1.0 / xx [ 143 ]
; xx [ 143 ] = ( xx [ 167 ] < 0.0 ? - 1.0 : + 1.0 ) * xx [ 289 ] ; xx [ 289 ]
= 11.45915590261647 ; xx [ 299 ] = xx [ 330 ] + xx [ 501 ] ; xx [ 300 ] = xx
[ 331 ] + xx [ 502 ] ; xx [ 302 ] = xx [ 332 ] + xx [ 503 ] ; xx [ 614 ] = xx
[ 299 ] ; xx [ 615 ] = xx [ 300 ] ; xx [ 616 ] = xx [ 302 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 647 , xx + 614 , xx + 641 ) ; xx [
304 ] = xx [ 5 ] - xx [ 641 ] ; xx [ 305 ] = 5.729577951308233e5 ; xx [ 342 ]
= ( xx [ 167 ] * xx [ 167 ] + xx [ 76 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 342 ]
= fabs ( xx [ 342 ] ) > 1.0 ? atan2 ( 0.0 , xx [ 342 ] ) : acos ( xx [ 342 ]
) ; xx [ 76 ] = 0.6981317007977318 ; xx [ 343 ] = xx [ 342 ] - xx [ 76 ] ; if
( xx [ 223 ] > xx [ 343 ] ) xx [ 343 ] = xx [ 223 ] ; xx [ 342 ] = xx [ 167 ]
* xx [ 168 ] + xx [ 169 ] * xx [ 170 ] ; xx [ 355 ] = xx [ 167 ] * xx [ 169 ]
- xx [ 168 ] * xx [ 170 ] ; xx [ 366 ] = sqrt ( xx [ 342 ] * xx [ 342 ] + xx
[ 355 ] * xx [ 355 ] ) ; bb [ 0 ] = xx [ 366 ] == xx [ 223 ] ; xx [ 371 ] =
xx [ 366 ] == 0.0 ? 0.0 : xx [ 342 ] / xx [ 366 ] ; xx [ 342 ] = bb [ 0 ] ?
xx [ 0 ] : xx [ 371 ] ; xx [ 371 ] = xx [ 16 ] - xx [ 642 ] ; xx [ 400 ] = xx
[ 366 ] == 0.0 ? 0.0 : xx [ 355 ] / xx [ 366 ] ; xx [ 355 ] = bb [ 0 ] ? xx [
223 ] : xx [ 400 ] ; xx [ 366 ] = 1.74532925199433e-3 ; xx [ 400 ] = xx [ 343
] / xx [ 366 ] ; if ( xx [ 0 ] < xx [ 400 ] ) xx [ 400 ] = xx [ 0 ] ; xx [
434 ] = 3.0 ; xx [ 463 ] = ( xx [ 305 ] * xx [ 343 ] + ( xx [ 343 ] == xx [
223 ] ? xx [ 223 ] : ( xx [ 304 ] * xx [ 342 ] + xx [ 371 ] * xx [ 355 ] ) *
xx [ 305 ] ) ) * xx [ 400 ] * xx [ 400 ] * ( xx [ 434 ] - xx [ 7 ] * xx [ 400
] ) ; if ( xx [ 223 ] > xx [ 463 ] ) xx [ 463 ] = xx [ 223 ] ; xx [ 343 ] =
xx [ 162 ] * xx [ 168 ] * xx [ 143 ] + xx [ 289 ] * xx [ 304 ] + xx [ 463 ] *
xx [ 342 ] ; pm_math_Quaternion_inverseCompose_ra ( xx + 310 , xx + 115 , xx
+ 647 ) ; pm_math_Quaternion_inverseCompose_ra ( xx + 583 , xx + 647 , xx +
115 ) ; xx [ 304 ] = xx [ 118 ] * xx [ 118 ] ; xx [ 342 ] = sqrt ( xx [ 116 ]
* xx [ 116 ] + xx [ 117 ] * xx [ 117 ] + xx [ 304 ] ) ; xx [ 400 ] = atan2 (
xx [ 342 ] , fabs ( xx [ 115 ] ) ) * xx [ 161 ] ; xx [ 547 ] = xx [ 342 ] ==
0.0 ? 0.0 : 1.0 / xx [ 342 ] ; xx [ 342 ] = ( xx [ 115 ] < 0.0 ? - 1.0 : +
1.0 ) * xx [ 547 ] ; xx [ 547 ] = xx [ 139 ] * inputDot [ 2 ] ; xx [ 566 ] =
xx [ 144 ] * inputDot [ 2 ] ; xx [ 568 ] = xx [ 145 ] * inputDot [ 2 ] ; xx [
762 ] = - xx [ 547 ] ; xx [ 763 ] = xx [ 566 ] ; xx [ 764 ] = xx [ 568 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 320 , xx + 762 , xx + 767 ) ; xx [
770 ] = state [ 19 ] ; xx [ 771 ] = state [ 20 ] ; xx [ 772 ] = state [ 21 ]
; pm_math_Quaternion_xform_ra ( xx + 163 , xx + 770 , xx + 775 ) ; xx [ 573 ]
= xx [ 767 ] + xx [ 775 ] ; xx [ 588 ] = xx [ 768 ] + xx [ 776 ] ; xx [ 589 ]
= xx [ 769 ] + xx [ 777 ] ; xx [ 794 ] = xx [ 573 ] ; xx [ 795 ] = xx [ 588 ]
; xx [ 796 ] = xx [ 589 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 647 ,
xx + 794 , xx + 816 ) ; xx [ 626 ] = xx [ 5 ] - xx [ 816 ] ; xx [ 627 ] = (
xx [ 115 ] * xx [ 115 ] + xx [ 304 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 627 ] =
fabs ( xx [ 627 ] ) > 1.0 ? atan2 ( 0.0 , xx [ 627 ] ) : acos ( xx [ 627 ] )
; xx [ 304 ] = xx [ 627 ] - xx [ 76 ] ; if ( xx [ 223 ] > xx [ 304 ] ) xx [
304 ] = xx [ 223 ] ; xx [ 627 ] = xx [ 115 ] * xx [ 116 ] + xx [ 117 ] * xx [
118 ] ; xx [ 639 ] = xx [ 115 ] * xx [ 117 ] - xx [ 116 ] * xx [ 118 ] ; xx [
647 ] = sqrt ( xx [ 627 ] * xx [ 627 ] + xx [ 639 ] * xx [ 639 ] ) ; bb [ 0 ]
= xx [ 647 ] == xx [ 223 ] ; xx [ 648 ] = xx [ 647 ] == 0.0 ? 0.0 : xx [ 627
] / xx [ 647 ] ; xx [ 627 ] = bb [ 0 ] ? xx [ 0 ] : xx [ 648 ] ; xx [ 648 ] =
xx [ 16 ] - xx [ 817 ] ; xx [ 649 ] = xx [ 647 ] == 0.0 ? 0.0 : xx [ 639 ] /
xx [ 647 ] ; xx [ 639 ] = bb [ 0 ] ? xx [ 223 ] : xx [ 649 ] ; xx [ 647 ] =
xx [ 304 ] / xx [ 366 ] ; if ( xx [ 0 ] < xx [ 647 ] ) xx [ 647 ] = xx [ 0 ]
; xx [ 649 ] = ( xx [ 305 ] * xx [ 304 ] + ( xx [ 304 ] == xx [ 223 ] ? xx [
223 ] : ( xx [ 626 ] * xx [ 627 ] + xx [ 648 ] * xx [ 639 ] ) * xx [ 305 ] )
) * xx [ 647 ] * xx [ 647 ] * ( xx [ 434 ] - xx [ 7 ] * xx [ 647 ] ) ; if (
xx [ 223 ] > xx [ 649 ] ) xx [ 649 ] = xx [ 223 ] ; xx [ 304 ] = xx [ 400 ] *
xx [ 116 ] * xx [ 342 ] + xx [ 289 ] * xx [ 626 ] + xx [ 649 ] * xx [ 627 ] ;
xx [ 626 ] = xx [ 211 ] * xx [ 30 ] ; xx [ 627 ] = xx [ 5 ] * xx [ 30 ] ; xx
[ 647 ] = xx [ 5 ] - ( xx [ 25 ] * xx [ 626 ] + xx [ 627 ] * xx [ 30 ] ) * xx
[ 7 ] ; xx [ 650 ] = xx [ 16 ] + state [ 7 ] ; xx [ 698 ] = xx [ 211 ] + xx [
7 ] * ( xx [ 25 ] * xx [ 627 ] - xx [ 626 ] * xx [ 30 ] ) ; xx [ 824 ] = xx [
647 ] ; xx [ 825 ] = xx [ 650 ] ; xx [ 826 ] = xx [ 698 ] ; xx [ 827 ] = xx [
23 ] * xx [ 647 ] ; xx [ 828 ] = xx [ 650 ] * xx [ 59 ] ; xx [ 829 ] = xx [
698 ] * xx [ 29 ] ; pm_math_Vector3_cross_ra ( xx + 824 , xx + 827 , xx + 830
) ; xx [ 626 ] = xx [ 25 ] * xx [ 14 ] - xx [ 30 ] * xx [ 10 ] ; xx [ 627 ] =
xx [ 4 ] * xx [ 30 ] - xx [ 12 ] * xx [ 25 ] ; xx [ 702 ] = xx [ 30 ] * xx [
14 ] + xx [ 25 ] * xx [ 10 ] ; xx [ 735 ] = xx [ 4 ] * xx [ 25 ] + xx [ 12 ]
* xx [ 30 ] ; xx [ 773 ] = - xx [ 735 ] ; xx [ 824 ] = xx [ 627 ] ; xx [ 825
] = xx [ 702 ] ; xx [ 826 ] = xx [ 773 ] ; xx [ 813 ] = xx [ 702 ] * xx [ 422
] ; xx [ 819 ] = 0.09427500000000004 ; xx [ 827 ] = xx [ 735 ] * xx [ 819 ] +
xx [ 422 ] * xx [ 627 ] ; xx [ 735 ] = xx [ 702 ] * xx [ 819 ] ; xx [ 839 ] =
- xx [ 813 ] ; xx [ 840 ] = xx [ 827 ] ; xx [ 841 ] = xx [ 735 ] ;
pm_math_Vector3_cross_ra ( xx + 824 , xx + 839 , xx + 842 ) ; xx [ 824 ] = xx
[ 40 ] * xx [ 10 ] ; xx [ 839 ] = xx [ 12 ] ; xx [ 840 ] = - xx [ 10 ] ; xx [
841 ] = xx [ 4 ] ; xx [ 825 ] = xx [ 4 ] * xx [ 50 ] - xx [ 40 ] * xx [ 12 ]
; xx [ 826 ] = xx [ 50 ] * xx [ 10 ] ; xx [ 845 ] = - xx [ 824 ] ; xx [ 846 ]
= xx [ 825 ] ; xx [ 847 ] = xx [ 826 ] ; pm_math_Vector3_cross_ra ( xx + 839
, xx + 845 , xx + 855 ) ; xx [ 828 ] = xx [ 54 ] * xx [ 10 ] ; xx [ 829 ] =
xx [ 102 ] - xx [ 12 ] * xx [ 54 ] ; xx [ 102 ] = xx [ 53 ] * xx [ 10 ] ; xx
[ 839 ] = - xx [ 828 ] ; xx [ 840 ] = xx [ 829 ] ; xx [ 841 ] = xx [ 102 ] ;
pm_math_Vector3_cross_ra ( xx + 122 , xx + 839 , xx + 845 ) ; xx [ 122 ] =
1.0225 ; xx [ 867 ] = xx [ 626 ] ; xx [ 868 ] = xx [ 627 ] ; xx [ 869 ] = xx
[ 702 ] ; xx [ 870 ] = xx [ 773 ] ; xx [ 871 ] = ( xx [ 842 ] - xx [ 813 ] *
xx [ 626 ] ) * xx [ 7 ] - xx [ 819 ] + xx [ 50 ] + ( xx [ 824 ] * xx [ 14 ] +
xx [ 855 ] ) * xx [ 7 ] - ( xx [ 845 ] - xx [ 828 ] * xx [ 14 ] ) * xx [ 7 ]
+ 0.3593 ; xx [ 872 ] = xx [ 7 ] * ( xx [ 843 ] + xx [ 827 ] * xx [ 626 ] ) +
xx [ 7 ] * ( xx [ 856 ] - xx [ 825 ] * xx [ 14 ] ) - ( xx [ 14 ] * xx [ 829 ]
+ xx [ 846 ] ) * xx [ 7 ] ; xx [ 873 ] = xx [ 7 ] * ( xx [ 844 ] + xx [ 735 ]
* xx [ 626 ] ) - xx [ 422 ] + xx [ 40 ] + xx [ 7 ] * ( xx [ 857 ] - xx [ 826
] * xx [ 14 ] ) - xx [ 7 ] * ( xx [ 847 ] + xx [ 102 ] * xx [ 14 ] ) + xx [
122 ] ; xx [ 839 ] = - xx [ 0 ] ; xx [ 840 ] = xx [ 223 ] ; xx [ 841 ] = xx [
223 ] ; xx [ 842 ] = xx [ 223 ] ; xx [ 843 ] = xx [ 223 ] ; xx [ 844 ] = xx [
223 ] ; xx [ 845 ] = - xx [ 1 ] ; xx [ 1 ] =
sm_core_compiler_computeProximityInfoCxpolyBrick (
triped_a151ee3d_1_geometry_0 ( rtdv ) , triped_a151ee3d_1_geometry_1 ( rtdv )
, ( pm_math_Transform3 * ) ( xx + 867 ) , ( pm_math_Transform3 * ) ( xx + 839
) , ( pm_math_Vector3 * ) ( xx + 824 ) , ( pm_math_Vector3 * ) ( xx + 827 ) ,
( pm_math_Vector3 * ) ( xx + 846 ) , ( pm_math_Vector3 * ) ( xx + 855 ) ) ;
xx [ 874 ] = xx [ 0 ] ; xx [ 875 ] = xx [ 223 ] ; xx [ 876 ] = xx [ 223 ] ;
xx [ 877 ] = xx [ 223 ] ; xx [ 878 ] = xx [ 223 ] ; xx [ 879 ] = xx [ 223 ] ;
xx [ 880 ] = xx [ 223 ] ; xx [ 102 ] = - xx [ 422 ] ; xx [ 1326 ] = xx [ 0 ]
; xx [ 1327 ] = xx [ 223 ] ; xx [ 1328 ] = xx [ 223 ] ; xx [ 1329 ] = xx [
223 ] ; xx [ 1330 ] = - xx [ 819 ] ; xx [ 1331 ] = xx [ 223 ] ; xx [ 1332 ] =
xx [ 102 ] ; xx [ 1333 ] = xx [ 223 ] ; xx [ 1334 ] = xx [ 223 ] ; xx [ 1335
] = xx [ 223 ] ; xx [ 1336 ] = xx [ 223 ] ; xx [ 1337 ] = xx [ 223 ] ; xx [
1338 ] = xx [ 223 ] ; xx [ 123 ] = xx [ 40 ] * xx [ 16 ] ; xx [ 124 ] = xx [
16 ] * xx [ 54 ] ; xx [ 626 ] = xx [ 123 ] + xx [ 124 ] ; xx [ 627 ] = xx [
30 ] * xx [ 626 ] ; xx [ 702 ] = xx [ 16 ] * xx [ 53 ] ; xx [ 735 ] = xx [ 16
] * xx [ 50 ] ; xx [ 773 ] = xx [ 702 ] + xx [ 735 ] ; xx [ 813 ] = xx [ 30 ]
* xx [ 773 ] ; xx [ 819 ] = xx [ 276 ] * state [ 7 ] ; xx [ 858 ] = xx [ 211
] * xx [ 50 ] - xx [ 40 ] * xx [ 5 ] ; xx [ 881 ] = xx [ 211 ] * xx [ 53 ] -
xx [ 5 ] * xx [ 54 ] ; xx [ 5 ] = xx [ 278 ] * state [ 7 ] ; xx [ 1339 ] = xx
[ 647 ] ; xx [ 1340 ] = xx [ 650 ] ; xx [ 1341 ] = xx [ 698 ] ; xx [ 1342 ] =
xx [ 626 ] - ( xx [ 627 ] * xx [ 30 ] - xx [ 25 ] * xx [ 813 ] ) * xx [ 7 ] +
xx [ 819 ] ; xx [ 1343 ] = xx [ 858 ] + xx [ 881 ] ; xx [ 1344 ] = xx [ 7 ] *
( xx [ 25 ] * xx [ 627 ] + xx [ 813 ] * xx [ 30 ] ) - xx [ 773 ] + xx [ 5 ] ;
xx [ 626 ] = 1.0e6 ; xx [ 627 ] = 1000.0 ; xx [ 773 ] = 1.0e-4 ; xx [ 813 ] =
0.3 ; xx [ 882 ] = 0.2119573811760597 ; xx [ 883 ] = 9.126024771145405e-4 ;
sm_core_compiler_computeContactWrenches ( xx [ 1 ] , xx + 827 , xx + 824 , xx
+ 855 , xx + 846 , xx + 874 , xx + 1326 , xx + 839 , xx + 867 , xx + 1333 ,
xx + 1339 , 0 , 1 , xx [ 626 ] , xx [ 627 ] , xx [ 773 ] , xx [ 813 ] , xx [
882 ] , xx [ 883 ] , xx + 1345 , xx + 1351 ) ; xx [ 1 ] = xx [ 698 ] * state
[ 7 ] ; xx [ 824 ] = xx [ 830 ] - xx [ 1351 ] - xx [ 23 ] * xx [ 1 ] ; xx [
825 ] = xx [ 647 ] * state [ 7 ] ; xx [ 826 ] = xx [ 832 ] - xx [ 1353 ] + xx
[ 29 ] * xx [ 825 ] ; xx [ 29 ] = xx [ 826 ] * xx [ 30 ] ; xx [ 827 ] = xx [
30 ] * xx [ 824 ] ; xx [ 846 ] = xx [ 123 ] ; xx [ 847 ] = xx [ 858 ] ; xx [
848 ] = - xx [ 735 ] ; pm_math_Vector3_cross_ra ( xx + 260 , xx + 846 , xx +
855 ) ; xx [ 123 ] = ( ( xx [ 698 ] + xx [ 698 ] ) * xx [ 819 ] - ( xx [ 647
] + xx [ 647 ] ) * xx [ 5 ] + xx [ 856 ] ) * xx [ 41 ] - xx [ 1355 ] ; xx [
846 ] = xx [ 124 ] ; xx [ 847 ] = xx [ 881 ] ; xx [ 848 ] = - xx [ 702 ] ;
pm_math_Vector3_cross_ra ( xx + 260 , xx + 846 , xx + 867 ) ; xx [ 124 ] = xx
[ 868 ] - ( xx [ 54 ] * xx [ 2 ] + xx [ 53 ] * xx [ 301 ] ) ; xx [ 647 ] = xx
[ 611 ] + xx [ 343 ] + xx [ 304 ] + xx [ 824 ] + xx [ 7 ] * ( xx [ 25 ] * xx
[ 29 ] - xx [ 827 ] * xx [ 30 ] ) - xx [ 40 ] * xx [ 123 ] + xx [ 45 ] * xx [
2 ] - xx [ 301 ] * xx [ 52 ] - xx [ 124 ] * xx [ 44 ] ; xx [ 45 ] = xx [ 162
] * xx [ 169 ] * xx [ 143 ] + xx [ 289 ] * xx [ 371 ] + xx [ 463 ] * xx [ 355
] ; xx [ 52 ] = xx [ 400 ] * xx [ 117 ] * xx [ 342 ] + xx [ 289 ] * xx [ 648
] + xx [ 649 ] * xx [ 639 ] ; xx [ 355 ] = xx [ 612 ] + xx [ 45 ] + xx [ 52 ]
; xx [ 371 ] = xx [ 831 ] - xx [ 1352 ] ; xx [ 463 ] = xx [ 16 ] + xx [ 650 ]
; xx [ 16 ] = xx [ 857 ] * xx [ 30 ] ; xx [ 639 ] = xx [ 855 ] * xx [ 30 ] ;
xx [ 648 ] = ( xx [ 463 ] * xx [ 5 ] + xx [ 855 ] - ( xx [ 25 ] * xx [ 16 ] +
xx [ 639 ] * xx [ 30 ] ) * xx [ 7 ] ) * xx [ 41 ] - xx [ 1354 ] ; xx [ 5 ] =
xx [ 41 ] * ( xx [ 857 ] + xx [ 7 ] * ( xx [ 25 ] * xx [ 639 ] - xx [ 16 ] *
xx [ 30 ] ) - xx [ 463 ] * xx [ 819 ] ) - xx [ 1356 ] ; xx [ 16 ] = xx [ 371
] + xx [ 276 ] * xx [ 648 ] + xx [ 278 ] * xx [ 5 ] ; xx [ 463 ] = xx [ 16 ]
/ xx [ 60 ] ; xx [ 639 ] = xx [ 648 ] - xx [ 62 ] * xx [ 463 ] ; xx [ 649 ] =
xx [ 5 ] - xx [ 65 ] * xx [ 463 ] ; xx [ 650 ] = xx [ 30 ] * xx [ 649 ] ; xx
[ 698 ] = xx [ 30 ] * xx [ 639 ] ; xx [ 702 ] = xx [ 639 ] + xx [ 7 ] * ( xx
[ 25 ] * xx [ 650 ] - xx [ 698 ] * xx [ 30 ] ) ; xx [ 639 ] = xx [ 649 ] - (
xx [ 25 ] * xx [ 698 ] + xx [ 650 ] * xx [ 30 ] ) * xx [ 7 ] ; xx [ 649 ] =
xx [ 869 ] + xx [ 11 ] * xx [ 53 ] ; xx [ 650 ] = xx [ 867 ] - xx [ 11 ] * xx
[ 54 ] ; xx [ 698 ] = xx [ 649 ] * xx [ 73 ] - xx [ 650 ] * xx [ 43 ] - xx [
72 ] * xx [ 11 ] ; xx [ 72 ] = xx [ 355 ] + xx [ 371 ] - xx [ 59 ] * xx [ 463
] + xx [ 40 ] * xx [ 702 ] - xx [ 50 ] * xx [ 639 ] + xx [ 698 ] ; xx [ 611 ]
= xx [ 162 ] * xx [ 170 ] * xx [ 143 ] + xx [ 289 ] * ( xx [ 211 ] - xx [ 643
] ) ; xx [ 143 ] = xx [ 400 ] * xx [ 118 ] * xx [ 342 ] + xx [ 289 ] * ( xx [
211 ] - xx [ 818 ] ) ; xx [ 162 ] = xx [ 613 ] + xx [ 611 ] + xx [ 143 ] + xx
[ 826 ] - ( xx [ 25 ] * xx [ 827 ] + xx [ 29 ] * xx [ 30 ] ) * xx [ 7 ] + xx
[ 50 ] * xx [ 123 ] + xx [ 2 ] * xx [ 70 ] - xx [ 32 ] * xx [ 301 ] + xx [
124 ] * xx [ 51 ] ; xx [ 641 ] = xx [ 647 ] ; xx [ 642 ] = xx [ 72 ] ; xx [
643 ] = xx [ 162 ] ; xx [ 29 ] = xx [ 11 ] * xx [ 43 ] + xx [ 82 ] * xx [ 650
] + xx [ 649 ] * xx [ 75 ] ; xx [ 32 ] = xx [ 123 ] + xx [ 83 ] * xx [ 124 ]
- ( xx [ 44 ] * xx [ 2 ] + xx [ 301 ] * xx [ 51 ] ) ; xx [ 43 ] = xx [ 650 ]
* xx [ 67 ] + xx [ 84 ] * xx [ 649 ] - xx [ 11 ] * xx [ 73 ] ; xx [ 82 ] = xx
[ 702 ] + xx [ 29 ] ; xx [ 83 ] = xx [ 32 ] ; xx [ 84 ] = xx [ 639 ] + xx [
43 ] ; xx [ 44 ] = xx [ 15 ] * state [ 1 ] ; xx [ 51 ] = xx [ 647 ] * xx [ 9
] ; xx [ 67 ] = xx [ 15 ] * state [ 2 ] + xx [ 162 ] + xx [ 32 ] * xx [ 53 ]
; xx [ 816 ] = - ( xx [ 284 ] + pm_math_Vector3_dot_ra ( xx + 19 , xx + 641 )
+ pm_math_Vector3_dot_ra ( xx + 79 , xx + 82 ) ) ; xx [ 817 ] = - ( xx [ 44 ]
+ xx [ 51 ] + xx [ 72 ] * xx [ 91 ] + pm_math_Vector3_dot_ra ( xx + 103 , xx
+ 82 ) ) ; xx [ 818 ] = - xx [ 67 ] ; solveSymmetricPosDef ( xx + 106 , xx +
816 , 3 , 1 , xx + 82 , xx + 641 ) ; xx [ 1339 ] = xx [ 57 ] ; xx [ 1340 ] =
xx [ 90 ] ; xx [ 1341 ] = xx [ 95 ] ; xx [ 1342 ] = xx [ 68 ] ; xx [ 1343 ] =
xx [ 93 ] ; xx [ 1344 ] = xx [ 223 ] ; xx [ 1345 ] = xx [ 46 ] ; xx [ 1346 ]
= xx [ 94 ] ; xx [ 1347 ] = xx [ 96 ] ; xx [ 1348 ] = xx [ 71 ] ; xx [ 1349 ]
= xx [ 98 ] ; xx [ 1350 ] = xx [ 223 ] ; xx [ 1351 ] = xx [ 26 ] ; xx [ 1352
] = xx [ 99 ] ; xx [ 1353 ] = xx [ 97 ] ; xx [ 1354 ] = xx [ 74 ] ; xx [ 1355
] = xx [ 100 ] ; xx [ 1356 ] = xx [ 223 ] ; solveSymmetricPosDef ( xx + 106 ,
xx + 1339 , 3 , 6 , xx + 1357 , xx + 70 ) ; xx [ 70 ] = xx [ 1366 ] ; xx [ 71
] = xx [ 1369 ] ; xx [ 72 ] = xx [ 1372 ] ; xx [ 26 ] = 9.806649999999999 ;
xx [ 46 ] = xx [ 12 ] * xx [ 26 ] ; xx [ 57 ] = xx [ 26 ] * xx [ 10 ] ; xx [
68 ] = xx [ 7 ] * ( xx [ 4 ] * xx [ 46 ] - xx [ 57 ] * xx [ 14 ] ) ; xx [ 73
] = ( xx [ 12 ] * xx [ 46 ] + xx [ 57 ] * xx [ 10 ] ) * xx [ 7 ] ; xx [ 93 ]
= xx [ 68 ] ; xx [ 94 ] = - ( ( xx [ 46 ] * xx [ 14 ] + xx [ 4 ] * xx [ 57 ]
) * xx [ 7 ] ) ; xx [ 95 ] = xx [ 26 ] - xx [ 73 ] ; xx [ 4 ] =
pm_math_Vector3_dot_ra ( xx + 70 , xx + 93 ) ; xx [ 10 ] = xx [ 82 ] - xx [ 4
] ; xx [ 70 ] = xx [ 1367 ] ; xx [ 71 ] = xx [ 1370 ] ; xx [ 72 ] = xx [ 1373
] ; xx [ 12 ] = pm_math_Vector3_dot_ra ( xx + 70 , xx + 93 ) ; xx [ 14 ] = xx
[ 83 ] - xx [ 12 ] ; xx [ 70 ] = xx [ 1368 ] ; xx [ 71 ] = xx [ 1371 ] ; xx [
72 ] = xx [ 1374 ] ; xx [ 46 ] = pm_math_Vector3_dot_ra ( xx + 70 , xx + 93 )
; xx [ 57 ] = xx [ 84 ] - xx [ 46 ] ; xx [ 70 ] = state [ 11 ] * state [ 11 ]
; xx [ 71 ] = sqrt ( state [ 9 ] * state [ 9 ] + state [ 10 ] * state [ 10 ]
+ xx [ 70 ] ) ; xx [ 72 ] = - state [ 8 ] ; xx [ 74 ] = atan2 ( xx [ 71 ] ,
fabs ( xx [ 72 ] ) ) * xx [ 161 ] ; xx [ 75 ] = xx [ 71 ] == 0.0 ? 0.0 : 1.0
/ xx [ 71 ] ; xx [ 71 ] = ( xx [ 72 ] < 0.0 ? - 1.0 : + 1.0 ) * xx [ 75 ] ;
xx [ 72 ] = ( state [ 8 ] * state [ 8 ] + xx [ 70 ] ) * xx [ 7 ] - xx [ 0 ] ;
xx [ 72 ] = fabs ( xx [ 72 ] ) > 1.0 ? atan2 ( 0.0 , xx [ 72 ] ) : acos ( xx
[ 72 ] ) ; xx [ 70 ] = xx [ 72 ] - xx [ 76 ] ; if ( xx [ 223 ] > xx [ 70 ] )
xx [ 70 ] = xx [ 223 ] ; xx [ 72 ] = state [ 8 ] * state [ 9 ] + state [ 10 ]
* state [ 11 ] ; xx [ 75 ] = state [ 8 ] * state [ 10 ] - state [ 9 ] * state
[ 11 ] ; xx [ 82 ] = sqrt ( xx [ 72 ] * xx [ 72 ] + xx [ 75 ] * xx [ 75 ] ) ;
bb [ 0 ] = xx [ 82 ] == xx [ 223 ] ; xx [ 83 ] = xx [ 82 ] == 0.0 ? 0.0 : xx
[ 72 ] / xx [ 82 ] ; xx [ 72 ] = bb [ 0 ] ? xx [ 0 ] : xx [ 83 ] ; xx [ 83 ]
= xx [ 82 ] == 0.0 ? 0.0 : xx [ 75 ] / xx [ 82 ] ; xx [ 75 ] = bb [ 0 ] ? xx
[ 223 ] : xx [ 83 ] ; xx [ 82 ] = xx [ 70 ] / xx [ 366 ] ; if ( xx [ 0 ] < xx
[ 82 ] ) xx [ 82 ] = xx [ 0 ] ; xx [ 83 ] = ( xx [ 305 ] * xx [ 70 ] + ( xx [
70 ] == xx [ 223 ] ? xx [ 223 ] : ( xx [ 72 ] * state [ 12 ] + xx [ 75 ] *
state [ 13 ] ) * xx [ 305 ] ) ) * xx [ 82 ] * xx [ 82 ] * ( xx [ 434 ] - xx [
7 ] * xx [ 82 ] ) ; if ( xx [ 223 ] > xx [ 83 ] ) xx [ 83 ] = xx [ 223 ] ; xx
[ 93 ] = 0.9999999999985819 ; xx [ 94 ] = 1.654768923261698e-6 ; xx [ 95 ] =
3.128485227267472e-7 ; xx [ 70 ] = 4.9407042764155e-7 ; xx [ 82 ] =
4.697766394841771e-5 ; xx [ 84 ] = 4.721353109758054e-5 ; xx [ 96 ] = xx [
299 ] * xx [ 70 ] ; xx [ 97 ] = xx [ 300 ] * xx [ 82 ] ; xx [ 98 ] = xx [ 302
] * xx [ 84 ] ; pm_math_Vector3_cross_ra ( xx + 614 , xx + 96 , xx + 641 ) ;
xx [ 96 ] = - xx [ 167 ] ; xx [ 97 ] = - xx [ 168 ] ; xx [ 98 ] = - xx [ 169
] ; xx [ 99 ] = - xx [ 170 ] ; pm_math_Quaternion_compose_ra ( xx + 583 , xx
+ 96 , xx + 167 ) ; xx [ 96 ] = xx [ 343 ] ; xx [ 97 ] = xx [ 45 ] ; xx [ 98
] = xx [ 611 ] ; pm_math_Quaternion_xform_ra ( xx + 167 , xx + 96 , xx + 611
) ; pm_math_Vector3_cross_ra ( xx + 330 , xx + 501 , xx + 96 ) ; xx [ 45 ] =
xx [ 641 ] - xx [ 611 ] + xx [ 70 ] * xx [ 96 ] ; xx [ 90 ] = xx [ 642 ] - xx
[ 612 ] + xx [ 82 ] * xx [ 97 ] ; xx [ 96 ] = xx [ 643 ] - xx [ 613 ] + xx [
84 ] * xx [ 98 ] ; xx [ 97 ] = xx [ 45 ] ; xx [ 98 ] = xx [ 90 ] ; xx [ 99 ]
= xx [ 96 ] ; xx [ 167 ] = xx [ 330 ] + xx [ 299 ] ; xx [ 168 ] = xx [ 331 ]
+ xx [ 300 ] ; xx [ 169 ] = xx [ 332 ] + xx [ 302 ] ;
pm_math_Vector3_cross_ra ( xx + 167 , xx + 526 , xx + 330 ) ;
pm_math_Vector3_cross_ra ( xx + 327 , xx + 248 , xx + 167 ) ;
pm_math_Vector3_cross_ra ( xx + 327 , xx + 167 , xx + 501 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 171 , xx + 501 , xx + 167 ) ; xx [
100 ] = 0.02453083736197363 ; xx [ 501 ] = ( xx [ 330 ] + xx [ 167 ] ) * xx [
100 ] ; xx [ 502 ] = ( xx [ 331 ] + xx [ 168 ] ) * xx [ 100 ] ; xx [ 503 ] =
( xx [ 332 ] + xx [ 169 ] ) * xx [ 100 ] ; xx [ 123 ] = xx [ 74 ] * xx [ 71 ]
* state [ 9 ] - xx [ 289 ] * state [ 12 ] - xx [ 83 ] * xx [ 72 ] - (
pm_math_Vector3_dot_ra ( xx + 93 , xx + 97 ) + pm_math_Vector3_dot_ra ( xx +
181 , xx + 501 ) ) ; xx [ 167 ] = - 1.654768922426321e-6 ; xx [ 168 ] =
0.9999999999986309 ; xx [ 169 ] = - 2.670487332009195e-9 ; xx [ 72 ] = xx [
74 ] * xx [ 71 ] * state [ 10 ] - xx [ 289 ] * state [ 13 ] - xx [ 83 ] * xx
[ 75 ] - ( pm_math_Vector3_dot_ra ( xx + 167 , xx + 97 ) +
pm_math_Vector3_dot_ra ( xx + 215 , xx + 501 ) ) ; xx [ 75 ] =
2.669969639992573e-9 ; xx [ 83 ] = 3.128485271453583e-7 ; xx [ 97 ] = xx [ 74
] * xx [ 71 ] * state [ 11 ] - xx [ 289 ] * state [ 14 ] - ( xx [ 90 ] * xx [
75 ] - xx [ 45 ] * xx [ 83 ] + xx [ 96 ] + pm_math_Vector3_dot_ra ( xx + 227
, xx + 501 ) ) ; xx [ 330 ] = xx [ 123 ] ; xx [ 331 ] = xx [ 72 ] ; xx [ 332
] = xx [ 97 ] ; solveSymmetricPosDef ( xx + 200 , xx + 330 , 3 , 1 , xx + 501
, xx + 526 ) ; xx [ 1339 ] = 4.940704276408494e-7 ; xx [ 1340 ] = -
8.175723891511193e-13 ; xx [ 1341 ] = - 1.545692055937363e-13 ; xx [ 1342 ] =
7.773717838927306e-11 ; xx [ 1343 ] = 4.697766394835339e-5 ; xx [ 1344 ] =
1.254289365000489e-13 ; xx [ 1345 ] = 1.477068345659141e-11 ; xx [ 1346 ] = -
1.26083136695511e-13 ; xx [ 1347 ] = xx [ 84 ] ; xx [ 1348 ] =
4.930475215475595e-14 ; xx [ 1349 ] = 3.02215603587517e-8 ; xx [ 1350 ] = -
2.253316391289854e-9 ; xx [ 1351 ] = - 2.979553782143408e-8 ; xx [ 1352 ] = -
3.586535435085316e-12 ; xx [ 1353 ] = 1.361753373768436e-3 ; xx [ 1354 ] = -
7.06920658274773e-14 ; xx [ 1355 ] = - 1.361753373760912e-3 ; xx [ 1356 ] = -
3.636545111833569e-12 ; solveSymmetricPosDef ( xx + 200 , xx + 1339 , 3 , 6 ,
xx + 1357 , xx + 330 ) ; xx [ 330 ] = xx [ 1357 ] ; xx [ 331 ] = xx [ 1360 ]
; xx [ 332 ] = xx [ 1363 ] ; xx [ 526 ] = - ( xx [ 139 ] * inputDdot [ 1 ] )
; xx [ 527 ] = xx [ 144 ] * inputDdot [ 1 ] ; xx [ 528 ] = xx [ 145 ] *
inputDdot [ 1 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 171 , xx + 526 ,
xx + 611 ) ; xx [ 614 ] = xx [ 1366 ] ; xx [ 615 ] = xx [ 1369 ] ; xx [ 616 ]
= xx [ 1372 ] ; xx [ 45 ] = xx [ 26 ] * xx [ 158 ] ; xx [ 71 ] = xx [ 26 ] *
xx [ 159 ] ; xx [ 641 ] = - ( xx [ 134 ] * inputDot [ 1 ] ) ; xx [ 642 ] = xx
[ 179 ] * inputDot [ 1 ] ; xx [ 643 ] = - ( xx [ 210 ] * inputDot [ 1 ] ) ;
pm_math_Vector3_cross_ra ( xx + 327 , xx + 641 , xx + 816 ) ;
pm_math_Vector3_cross_ra ( xx + 526 , xx + 248 , xx + 327 ) ; xx [ 248 ] = xx
[ 7 ] * ( xx [ 160 ] * xx [ 45 ] - xx [ 157 ] * xx [ 71 ] ) + xx [ 816 ] - xx
[ 134 ] * inputDdot [ 1 ] + xx [ 327 ] ; xx [ 249 ] = ( xx [ 157 ] * xx [ 45
] + xx [ 160 ] * xx [ 71 ] ) * xx [ 7 ] + xx [ 817 ] + xx [ 179 ] * inputDdot
[ 1 ] + xx [ 328 ] ; xx [ 250 ] = xx [ 818 ] - xx [ 210 ] * inputDdot [ 1 ] -
( xx [ 158 ] * xx [ 45 ] + xx [ 159 ] * xx [ 71 ] ) * xx [ 7 ] + xx [ 329 ] +
xx [ 26 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 171 , xx + 248 , xx +
157 ) ; xx [ 45 ] = pm_math_Vector3_dot_ra ( xx + 330 , xx + 611 ) +
pm_math_Vector3_dot_ra ( xx + 614 , xx + 157 ) ; xx [ 71 ] = xx [ 501 ] - xx
[ 45 ] ; xx [ 170 ] = xx [ 1358 ] ; xx [ 171 ] = xx [ 1361 ] ; xx [ 172 ] =
xx [ 1364 ] ; xx [ 248 ] = xx [ 1367 ] ; xx [ 249 ] = xx [ 1370 ] ; xx [ 250
] = xx [ 1373 ] ; xx [ 74 ] = pm_math_Vector3_dot_ra ( xx + 170 , xx + 611 )
+ pm_math_Vector3_dot_ra ( xx + 248 , xx + 157 ) ; xx [ 90 ] = xx [ 502 ] -
xx [ 74 ] ; xx [ 170 ] = xx [ 1359 ] ; xx [ 171 ] = xx [ 1362 ] ; xx [ 172 ]
= xx [ 1365 ] ; xx [ 248 ] = xx [ 1368 ] ; xx [ 249 ] = xx [ 1371 ] ; xx [
250 ] = xx [ 1374 ] ; xx [ 96 ] = pm_math_Vector3_dot_ra ( xx + 170 , xx +
611 ) + pm_math_Vector3_dot_ra ( xx + 248 , xx + 157 ) ; xx [ 98 ] = xx [ 503
] - xx [ 96 ] ; xx [ 99 ] = xx [ 88 ] * xx [ 53 ] + xx [ 222 ] * xx [ 54 ] ;
xx [ 88 ] = xx [ 244 ] * xx [ 53 ] + xx [ 277 ] * xx [ 54 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 320 , xx + 140 , xx + 157 ) ;
pm_math_Vector3_cross_ra ( xx + 157 , xx + 187 , xx + 170 ) ;
pm_math_Quaternion_xform_ra ( xx + 310 , xx + 170 , xx + 157 ) ;
pm_math_Quaternion_xform_ra ( xx + 320 , xx + 236 , xx + 170 ) ; xx [ 248 ] =
xx [ 86 ] + xx [ 170 ] ; xx [ 249 ] = xx [ 127 ] + xx [ 171 ] ; xx [ 250 ] =
xx [ 172 ] - xx [ 133 ] ; pm_math_Vector3_cross_ra ( xx + 140 , xx + 248 , xx
+ 170 ) ; pm_math_Quaternion_xform_ra ( xx + 316 , xx + 170 , xx + 327 ) ;
pm_math_Quaternion_xform_ra ( xx + 316 , xx + 241 , xx + 170 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 553 , xx + 212 , xx + 330 ) ; xx [ 124 ] =
xx [ 317 ] * xx [ 319 ] ; xx [ 160 ] = xx [ 316 ] * xx [ 318 ] ; xx [ 173 ] =
( xx [ 124 ] + xx [ 160 ] ) * xx [ 7 ] ; xx [ 174 ] = xx [ 316 ] * xx [ 316 ]
; xx [ 211 ] = ( xx [ 174 ] + xx [ 317 ] * xx [ 317 ] ) * xx [ 7 ] - xx [ 0 ]
; xx [ 222 ] = xx [ 173 ] * xx [ 547 ] + xx [ 568 ] * xx [ 211 ] ; xx [ 244 ]
= xx [ 317 ] * xx [ 318 ] ; xx [ 277 ] = xx [ 316 ] * xx [ 319 ] ; xx [ 299 ]
= xx [ 7 ] * ( xx [ 244 ] - xx [ 277 ] ) ; xx [ 300 ] = xx [ 566 ] * xx [ 211
] + xx [ 547 ] * xx [ 299 ] ; xx [ 302 ] = xx [ 568 ] * xx [ 299 ] - xx [ 173
] * xx [ 566 ] ; xx [ 342 ] = xx [ 318 ] * xx [ 319 ] ; xx [ 343 ] = xx [ 316
] * xx [ 317 ] ; xx [ 400 ] = xx [ 7 ] * ( xx [ 342 ] - xx [ 343 ] ) ; xx [
501 ] = ( xx [ 244 ] + xx [ 277 ] ) * xx [ 7 ] ; xx [ 244 ] = xx [ 547 ] * xx
[ 400 ] + xx [ 501 ] * xx [ 568 ] ; xx [ 277 ] = ( xx [ 174 ] + xx [ 318 ] *
xx [ 318 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 502 ] = xx [ 501 ] * xx [ 566 ] +
xx [ 547 ] * xx [ 277 ] ; xx [ 503 ] = xx [ 568 ] * xx [ 277 ] - xx [ 566 ] *
xx [ 400 ] ; xx [ 526 ] = ( xx [ 174 ] + xx [ 319 ] * xx [ 319 ] ) * xx [ 7 ]
- xx [ 0 ] ; xx [ 174 ] = xx [ 7 ] * ( xx [ 124 ] - xx [ 160 ] ) ; xx [ 124 ]
= xx [ 547 ] * xx [ 526 ] + xx [ 568 ] * xx [ 174 ] ; xx [ 160 ] = ( xx [ 342
] + xx [ 343 ] ) * xx [ 7 ] ; xx [ 342 ] = xx [ 566 ] * xx [ 174 ] + xx [ 160
] * xx [ 547 ] ; xx [ 343 ] = xx [ 160 ] * xx [ 568 ] - xx [ 566 ] * xx [ 526
] ; xx [ 553 ] = - ( xx [ 568 ] * xx [ 222 ] + xx [ 566 ] * xx [ 300 ] ) ; xx
[ 554 ] = - ( xx [ 547 ] * xx [ 300 ] + xx [ 568 ] * xx [ 302 ] ) ; xx [ 555
] = xx [ 566 ] * xx [ 302 ] - xx [ 547 ] * xx [ 222 ] ; xx [ 556 ] = - ( xx [
568 ] * xx [ 244 ] + xx [ 566 ] * xx [ 502 ] ) ; xx [ 557 ] = - ( xx [ 547 ]
* xx [ 502 ] + xx [ 568 ] * xx [ 503 ] ) ; xx [ 558 ] = xx [ 566 ] * xx [ 503
] - xx [ 547 ] * xx [ 244 ] ; xx [ 559 ] = - ( xx [ 568 ] * xx [ 124 ] + xx [
566 ] * xx [ 342 ] ) ; xx [ 560 ] = - ( xx [ 547 ] * xx [ 342 ] + xx [ 568 ]
* xx [ 343 ] ) ; xx [ 561 ] = xx [ 566 ] * xx [ 343 ] - xx [ 547 ] * xx [ 124
] ; xx [ 124 ] = xx [ 320 ] * xx [ 320 ] ; xx [ 222 ] = ( xx [ 124 ] + xx [
321 ] * xx [ 321 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 244 ] = xx [ 321 ] * xx [
322 ] ; xx [ 300 ] = xx [ 320 ] * xx [ 323 ] ; xx [ 302 ] = xx [ 7 ] * ( xx [
244 ] - xx [ 300 ] ) ; xx [ 342 ] = xx [ 321 ] * xx [ 323 ] ; xx [ 343 ] = xx
[ 320 ] * xx [ 322 ] ; xx [ 502 ] = ( xx [ 342 ] + xx [ 343 ] ) * xx [ 7 ] ;
xx [ 503 ] = ( xx [ 244 ] + xx [ 300 ] ) * xx [ 7 ] ; xx [ 244 ] = ( xx [ 124
] + xx [ 322 ] * xx [ 322 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 300 ] = xx [ 322 ]
* xx [ 323 ] ; xx [ 527 ] = xx [ 320 ] * xx [ 321 ] ; xx [ 528 ] = xx [ 7 ] *
( xx [ 300 ] - xx [ 527 ] ) ; xx [ 547 ] = xx [ 7 ] * ( xx [ 342 ] - xx [ 343
] ) ; xx [ 342 ] = ( xx [ 300 ] + xx [ 527 ] ) * xx [ 7 ] ; xx [ 300 ] = ( xx
[ 124 ] + xx [ 323 ] * xx [ 323 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 1357 ] = xx
[ 222 ] ; xx [ 1358 ] = xx [ 302 ] ; xx [ 1359 ] = xx [ 502 ] ; xx [ 1360 ] =
xx [ 503 ] ; xx [ 1361 ] = xx [ 244 ] ; xx [ 1362 ] = xx [ 528 ] ; xx [ 1363
] = xx [ 547 ] ; xx [ 1364 ] = xx [ 342 ] ; xx [ 1365 ] = xx [ 300 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 553 , xx + 1357 , xx + 1366 ) ; xx [ 1357
] = xx [ 211 ] ; xx [ 1358 ] = xx [ 299 ] ; xx [ 1359 ] = xx [ 173 ] ; xx [
1360 ] = xx [ 501 ] ; xx [ 1361 ] = xx [ 277 ] ; xx [ 1362 ] = xx [ 400 ] ;
xx [ 1363 ] = xx [ 174 ] ; xx [ 1364 ] = xx [ 160 ] ; xx [ 1365 ] = xx [ 526
] ; xx [ 124 ] = xx [ 775 ] * xx [ 502 ] - xx [ 777 ] * xx [ 222 ] ; xx [ 160
] = xx [ 776 ] * xx [ 222 ] - xx [ 775 ] * xx [ 302 ] ; xx [ 173 ] = xx [ 777
] * xx [ 302 ] - xx [ 776 ] * xx [ 502 ] ; xx [ 174 ] = xx [ 775 ] * xx [ 528
] - xx [ 777 ] * xx [ 503 ] ; xx [ 211 ] = xx [ 776 ] * xx [ 503 ] - xx [ 775
] * xx [ 244 ] ; xx [ 222 ] = xx [ 777 ] * xx [ 244 ] - xx [ 776 ] * xx [ 528
] ; xx [ 244 ] = xx [ 775 ] * xx [ 300 ] - xx [ 777 ] * xx [ 547 ] ; xx [ 277
] = xx [ 776 ] * xx [ 547 ] - xx [ 775 ] * xx [ 342 ] ; xx [ 299 ] = xx [ 777
] * xx [ 342 ] - xx [ 776 ] * xx [ 300 ] ; xx [ 1375 ] = xx [ 777 ] * xx [
124 ] - xx [ 776 ] * xx [ 160 ] ; xx [ 1376 ] = xx [ 775 ] * xx [ 160 ] - xx
[ 777 ] * xx [ 173 ] ; xx [ 1377 ] = xx [ 776 ] * xx [ 173 ] - xx [ 775 ] *
xx [ 124 ] ; xx [ 1378 ] = xx [ 777 ] * xx [ 174 ] - xx [ 776 ] * xx [ 211 ]
; xx [ 1379 ] = xx [ 775 ] * xx [ 211 ] - xx [ 777 ] * xx [ 222 ] ; xx [ 1380
] = xx [ 776 ] * xx [ 222 ] - xx [ 775 ] * xx [ 174 ] ; xx [ 1381 ] = xx [
777 ] * xx [ 244 ] - xx [ 776 ] * xx [ 277 ] ; xx [ 1382 ] = xx [ 775 ] * xx
[ 277 ] - xx [ 777 ] * xx [ 299 ] ; xx [ 1383 ] = xx [ 776 ] * xx [ 299 ] -
xx [ 775 ] * xx [ 244 ] ; pm_math_Matrix3x3_compose_ra ( xx + 1357 , xx +
1375 , xx + 1384 ) ; xx [ 124 ] = xx [ 310 ] * xx [ 310 ] ; xx [ 160 ] = xx [
311 ] * xx [ 312 ] ; xx [ 173 ] = xx [ 310 ] * xx [ 313 ] ; xx [ 174 ] = xx [
311 ] * xx [ 313 ] ; xx [ 211 ] = xx [ 310 ] * xx [ 312 ] ; xx [ 222 ] = xx [
312 ] * xx [ 313 ] ; xx [ 244 ] = xx [ 310 ] * xx [ 311 ] ; xx [ 1357 ] = (
xx [ 124 ] + xx [ 311 ] * xx [ 311 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 1358 ] =
xx [ 7 ] * ( xx [ 160 ] - xx [ 173 ] ) ; xx [ 1359 ] = ( xx [ 174 ] + xx [
211 ] ) * xx [ 7 ] ; xx [ 1360 ] = ( xx [ 160 ] + xx [ 173 ] ) * xx [ 7 ] ;
xx [ 1361 ] = ( xx [ 124 ] + xx [ 312 ] * xx [ 312 ] ) * xx [ 7 ] - xx [ 0 ]
; xx [ 1362 ] = xx [ 7 ] * ( xx [ 222 ] - xx [ 244 ] ) ; xx [ 1363 ] = xx [ 7
] * ( xx [ 174 ] - xx [ 211 ] ) ; xx [ 1364 ] = ( xx [ 222 ] + xx [ 244 ] ) *
xx [ 7 ] ; xx [ 1365 ] = ( xx [ 124 ] + xx [ 313 ] * xx [ 313 ] ) * xx [ 7 ]
- xx [ 0 ] ; pm_math_Matrix3x3_postCross_ra ( xx + 1357 , xx + 767 , xx +
1393 ) ; pm_math_Matrix3x3_postCross_ra ( xx + 1393 , xx + 775 , xx + 1357 )
; xx [ 1393 ] = xx [ 1366 ] + xx [ 1384 ] + xx [ 7 ] * xx [ 1357 ] ; xx [
1394 ] = xx [ 1367 ] + xx [ 1385 ] + xx [ 7 ] * xx [ 1358 ] ; xx [ 1395 ] =
xx [ 1368 ] + xx [ 1386 ] + xx [ 7 ] * xx [ 1359 ] ; xx [ 1396 ] = xx [ 1369
] + xx [ 1387 ] + xx [ 7 ] * xx [ 1360 ] ; xx [ 1397 ] = xx [ 1370 ] + xx [
1388 ] + xx [ 7 ] * xx [ 1361 ] ; xx [ 1398 ] = xx [ 1371 ] + xx [ 1389 ] +
xx [ 7 ] * xx [ 1362 ] ; xx [ 1399 ] = xx [ 1372 ] + xx [ 1390 ] + xx [ 7 ] *
xx [ 1363 ] ; xx [ 1400 ] = xx [ 1373 ] + xx [ 1391 ] + xx [ 7 ] * xx [ 1364
] ; xx [ 1401 ] = xx [ 1374 ] + xx [ 1392 ] + xx [ 7 ] * xx [ 1365 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 1393 , xx + 187 , xx + 310 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 553 , xx + 248 , xx + 501 ) ;
pm_math_Quaternion_xform_ra ( xx + 316 , xx + 504 , xx + 526 ) ; xx [ 124 ] =
inputDot [ 2 ] * inputDot [ 2 ] ; pm_math_Matrix3x3_xform_ra ( xx + 1375 , xx
+ 236 , xx + 553 ) ; pm_math_Quaternion_xform_ra ( xx + 316 , xx + 553 , xx +
556 ) ; pm_math_Vector3_cross_ra ( xx + 775 , xx + 236 , xx + 553 ) ;
pm_math_Quaternion_xform_ra ( xx + 320 , xx + 553 , xx + 559 ) ;
pm_math_Vector3_cross_ra ( xx + 762 , xx + 559 , xx + 611 ) ;
pm_math_Quaternion_xform_ra ( xx + 316 , xx + 611 , xx + 559 ) ; xx [ 160 ] =
state [ 18 ] * state [ 18 ] ; xx [ 173 ] = sqrt ( state [ 16 ] * state [ 16 ]
+ state [ 17 ] * state [ 17 ] + xx [ 160 ] ) ; xx [ 174 ] = - state [ 15 ] ;
xx [ 211 ] = atan2 ( xx [ 173 ] , fabs ( xx [ 174 ] ) ) * xx [ 161 ] ; xx [
222 ] = xx [ 173 ] == 0.0 ? 0.0 : 1.0 / xx [ 173 ] ; xx [ 173 ] = ( xx [ 174
] < 0.0 ? - 1.0 : + 1.0 ) * xx [ 222 ] ; xx [ 174 ] = ( state [ 15 ] * state
[ 15 ] + xx [ 160 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 174 ] = fabs ( xx [ 174 ]
) > 1.0 ? atan2 ( 0.0 , xx [ 174 ] ) : acos ( xx [ 174 ] ) ; xx [ 160 ] = xx
[ 174 ] - xx [ 76 ] ; if ( xx [ 223 ] > xx [ 160 ] ) xx [ 160 ] = xx [ 223 ]
; xx [ 174 ] = state [ 15 ] * state [ 16 ] + state [ 17 ] * state [ 18 ] ; xx
[ 222 ] = state [ 15 ] * state [ 17 ] - state [ 16 ] * state [ 18 ] ; xx [
244 ] = sqrt ( xx [ 174 ] * xx [ 174 ] + xx [ 222 ] * xx [ 222 ] ) ; bb [ 0 ]
= xx [ 244 ] == xx [ 223 ] ; xx [ 277 ] = xx [ 244 ] == 0.0 ? 0.0 : xx [ 174
] / xx [ 244 ] ; xx [ 174 ] = bb [ 0 ] ? xx [ 0 ] : xx [ 277 ] ; xx [ 277 ] =
xx [ 244 ] == 0.0 ? 0.0 : xx [ 222 ] / xx [ 244 ] ; xx [ 222 ] = bb [ 0 ] ?
xx [ 223 ] : xx [ 277 ] ; xx [ 244 ] = xx [ 160 ] / xx [ 366 ] ; if ( xx [ 0
] < xx [ 244 ] ) xx [ 244 ] = xx [ 0 ] ; xx [ 277 ] = ( xx [ 305 ] * xx [ 160
] + ( xx [ 160 ] == xx [ 223 ] ? xx [ 223 ] : ( xx [ 174 ] * state [ 19 ] +
xx [ 222 ] * state [ 20 ] ) * xx [ 305 ] ) ) * xx [ 244 ] * xx [ 244 ] * ( xx
[ 434 ] - xx [ 7 ] * xx [ 244 ] ) ; if ( xx [ 223 ] > xx [ 277 ] ) xx [ 277 ]
= xx [ 223 ] ; xx [ 611 ] = xx [ 573 ] * xx [ 70 ] ; xx [ 612 ] = xx [ 588 ]
* xx [ 82 ] ; xx [ 613 ] = xx [ 589 ] * xx [ 84 ] ; pm_math_Vector3_cross_ra
( xx + 794 , xx + 611 , xx + 614 ) ; xx [ 816 ] = - xx [ 115 ] ; xx [ 817 ] =
- xx [ 116 ] ; xx [ 818 ] = - xx [ 117 ] ; xx [ 819 ] = - xx [ 118 ] ;
pm_math_Quaternion_compose_ra ( xx + 583 , xx + 816 , xx + 115 ) ; xx [ 611 ]
= xx [ 304 ] ; xx [ 612 ] = xx [ 52 ] ; xx [ 613 ] = xx [ 143 ] ;
pm_math_Quaternion_xform_ra ( xx + 115 , xx + 611 , xx + 641 ) ;
pm_math_Vector3_cross_ra ( xx + 767 , xx + 775 , xx + 115 ) ; xx [ 52 ] = xx
[ 614 ] - xx [ 641 ] + xx [ 70 ] * xx [ 115 ] ; xx [ 118 ] = xx [ 615 ] - xx
[ 642 ] + xx [ 82 ] * xx [ 116 ] ; xx [ 115 ] = xx [ 616 ] - xx [ 643 ] + xx
[ 84 ] * xx [ 117 ] ; xx [ 611 ] = xx [ 52 ] ; xx [ 612 ] = xx [ 118 ] ; xx [
613 ] = xx [ 115 ] ; xx [ 614 ] = xx [ 767 ] + xx [ 573 ] ; xx [ 615 ] = xx [
768 ] + xx [ 588 ] ; xx [ 616 ] = xx [ 769 ] + xx [ 589 ] ;
pm_math_Vector3_cross_ra ( xx + 614 , xx + 553 , xx + 641 ) ;
pm_math_Vector3_cross_ra ( xx + 762 , xx + 248 , xx + 553 ) ;
pm_math_Vector3_cross_ra ( xx + 762 , xx + 553 , xx + 614 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 320 , xx + 614 , xx + 553 ) ; xx [
614 ] = ( xx [ 641 ] + xx [ 553 ] ) * xx [ 100 ] ; xx [ 615 ] = ( xx [ 642 ]
+ xx [ 554 ] ) * xx [ 100 ] ; xx [ 616 ] = ( xx [ 643 ] + xx [ 555 ] ) * xx [
100 ] ; xx [ 116 ] = xx [ 211 ] * xx [ 173 ] * state [ 16 ] - xx [ 289 ] *
state [ 19 ] - xx [ 277 ] * xx [ 174 ] - ( pm_math_Vector3_dot_ra ( xx + 93 ,
xx + 611 ) + pm_math_Vector3_dot_ra ( xx + 181 , xx + 614 ) ) ; xx [ 117 ] =
xx [ 211 ] * xx [ 173 ] * state [ 17 ] - xx [ 289 ] * state [ 20 ] - xx [ 277
] * xx [ 222 ] - ( pm_math_Vector3_dot_ra ( xx + 167 , xx + 611 ) +
pm_math_Vector3_dot_ra ( xx + 215 , xx + 614 ) ) ; xx [ 143 ] = xx [ 211 ] *
xx [ 173 ] * state [ 18 ] - xx [ 289 ] * state [ 21 ] - ( xx [ 118 ] * xx [
75 ] - xx [ 52 ] * xx [ 83 ] + xx [ 115 ] + pm_math_Vector3_dot_ra ( xx + 227
, xx + 614 ) ) ; xx [ 553 ] = xx [ 116 ] ; xx [ 554 ] = xx [ 117 ] ; xx [ 555
] = xx [ 143 ] ; solveSymmetricPosDef ( xx + 333 , xx + 553 , 3 , 1 , xx +
611 , xx + 614 ) ; solveSymmetricPosDef ( xx + 333 , xx + 1339 , 3 , 6 , xx +
1357 , xx + 553 ) ; xx [ 553 ] = xx [ 1357 ] ; xx [ 554 ] = xx [ 1360 ] ; xx
[ 555 ] = xx [ 1363 ] ; xx [ 614 ] = - ( xx [ 139 ] * inputDdot [ 2 ] ) ; xx
[ 615 ] = xx [ 144 ] * inputDdot [ 2 ] ; xx [ 616 ] = xx [ 145 ] * inputDdot
[ 2 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 320 , xx + 614 , xx + 641 )
; xx [ 767 ] = xx [ 1366 ] ; xx [ 768 ] = xx [ 1369 ] ; xx [ 769 ] = xx [
1372 ] ; xx [ 52 ] = xx [ 26 ] * xx [ 317 ] ; xx [ 115 ] = xx [ 26 ] * xx [
318 ] ; xx [ 775 ] = - ( xx [ 134 ] * inputDot [ 2 ] ) ; xx [ 776 ] = xx [
179 ] * inputDot [ 2 ] ; xx [ 777 ] = - ( xx [ 210 ] * inputDot [ 2 ] ) ;
pm_math_Vector3_cross_ra ( xx + 762 , xx + 775 , xx + 794 ) ;
pm_math_Vector3_cross_ra ( xx + 614 , xx + 248 , xx + 762 ) ; xx [ 248 ] = xx
[ 7 ] * ( xx [ 319 ] * xx [ 52 ] - xx [ 316 ] * xx [ 115 ] ) + xx [ 794 ] -
xx [ 134 ] * inputDdot [ 2 ] + xx [ 762 ] ; xx [ 249 ] = ( xx [ 316 ] * xx [
52 ] + xx [ 319 ] * xx [ 115 ] ) * xx [ 7 ] + xx [ 795 ] + xx [ 179 ] *
inputDdot [ 2 ] + xx [ 763 ] ; xx [ 250 ] = xx [ 796 ] - xx [ 210 ] *
inputDdot [ 2 ] - ( xx [ 317 ] * xx [ 52 ] + xx [ 318 ] * xx [ 115 ] ) * xx [
7 ] + xx [ 764 ] + xx [ 26 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 320
, xx + 248 , xx + 316 ) ; xx [ 52 ] = pm_math_Vector3_dot_ra ( xx + 553 , xx
+ 641 ) + pm_math_Vector3_dot_ra ( xx + 767 , xx + 316 ) ; xx [ 115 ] = xx [
611 ] - xx [ 52 ] ; xx [ 248 ] = xx [ 1358 ] ; xx [ 249 ] = xx [ 1361 ] ; xx
[ 250 ] = xx [ 1364 ] ; xx [ 319 ] = xx [ 1367 ] ; xx [ 320 ] = xx [ 1370 ] ;
xx [ 321 ] = xx [ 1373 ] ; xx [ 118 ] = pm_math_Vector3_dot_ra ( xx + 248 ,
xx + 641 ) + pm_math_Vector3_dot_ra ( xx + 319 , xx + 316 ) ; xx [ 160 ] = xx
[ 612 ] - xx [ 118 ] ; xx [ 248 ] = xx [ 1359 ] ; xx [ 249 ] = xx [ 1362 ] ;
xx [ 250 ] = xx [ 1365 ] ; xx [ 319 ] = xx [ 1368 ] ; xx [ 320 ] = xx [ 1371
] ; xx [ 321 ] = xx [ 1374 ] ; xx [ 173 ] = pm_math_Vector3_dot_ra ( xx + 248
, xx + 641 ) + pm_math_Vector3_dot_ra ( xx + 319 , xx + 316 ) ; xx [ 174 ] =
xx [ 613 ] - xx [ 173 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 519 , xx
+ 140 , xx + 248 ) ; pm_math_Vector3_cross_ra ( xx + 248 , xx + 187 , xx +
316 ) ; pm_math_Quaternion_xform_ra ( xx + 511 , xx + 316 , xx + 248 ) ;
pm_math_Quaternion_xform_ra ( xx + 519 , xx + 236 , xx + 316 ) ; xx [ 319 ] =
xx [ 86 ] + xx [ 316 ] ; xx [ 320 ] = xx [ 127 ] + xx [ 317 ] ; xx [ 321 ] =
xx [ 318 ] - xx [ 133 ] ; pm_math_Vector3_cross_ra ( xx + 140 , xx + 319 , xx
+ 316 ) ; pm_math_Quaternion_xform_ra ( xx + 515 , xx + 316 , xx + 553 ) ;
pm_math_Quaternion_xform_ra ( xx + 515 , xx + 241 , xx + 316 ) ; xx [ 211 ] =
xx [ 360 ] * xx [ 360 ] ; xx [ 222 ] = xx [ 345 ] * xx [ 360 ] ; xx [ 244 ] =
xx [ 362 ] * xx [ 352 ] ; xx [ 1357 ] = ( xx [ 211 ] + xx [ 345 ] * xx [ 345
] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 1358 ] = xx [ 385 ] ; xx [ 1359 ] = ( xx [
387 ] + xx [ 386 ] ) * xx [ 7 ] ; xx [ 1360 ] = - ( ( xx [ 384 ] + xx [ 383 ]
) * xx [ 7 ] ) ; xx [ 1361 ] = ( xx [ 211 ] + xx [ 380 ] ) * xx [ 7 ] - xx [
0 ] ; xx [ 1362 ] = xx [ 7 ] * ( xx [ 222 ] - xx [ 244 ] ) ; xx [ 1363 ] = xx
[ 7 ] * ( xx [ 387 ] - xx [ 386 ] ) ; xx [ 1364 ] = - ( ( xx [ 244 ] + xx [
222 ] ) * xx [ 7 ] ) ; xx [ 1365 ] = ( xx [ 211 ] + xx [ 381 ] ) * xx [ 7 ] -
xx [ 0 ] ; xx [ 211 ] = xx [ 382 ] * state [ 25 ] ; xx [ 222 ] = xx [ 7 ] *
xx [ 454 ] * state [ 26 ] ; xx [ 244 ] = xx [ 211 ] + xx [ 222 ] ; xx [ 277 ]
= xx [ 385 ] * state [ 25 ] ; xx [ 299 ] = xx [ 467 ] * state [ 26 ] ; xx [
300 ] = xx [ 277 ] + xx [ 299 ] ; xx [ 302 ] = xx [ 389 ] * state [ 25 ] ; xx
[ 304 ] = xx [ 302 ] + state [ 27 ] ; xx [ 611 ] = xx [ 244 ] ; xx [ 612 ] =
xx [ 300 ] ; xx [ 613 ] = xx [ 304 ] ; pm_math_Matrix3x3_postCross_ra ( xx +
1357 , xx + 611 , xx + 1366 ) ; pm_math_Matrix3x3_postCross_ra ( xx + 1366 ,
xx + 611 , xx + 1375 ) ; xx [ 614 ] = xx [ 211 ] ; xx [ 615 ] = xx [ 277 ] ;
xx [ 616 ] = xx [ 302 ] ; pm_math_Vector3_cross_ra ( xx + 611 , xx + 614 , xx
+ 641 ) ; xx [ 211 ] = xx [ 299 ] * state [ 27 ] - xx [ 641 ] ; xx [ 277 ] =
xx [ 642 ] + xx [ 222 ] * state [ 27 ] ; xx [ 614 ] = xx [ 211 ] ; xx [ 615 ]
= - xx [ 277 ] ; xx [ 616 ] = - xx [ 643 ] ; pm_math_Matrix3x3_postCross_ra (
xx + 1357 , xx + 614 , xx + 1366 ) ; xx [ 222 ] = xx [ 1378 ] + xx [ 1369 ] ;
xx [ 299 ] = 0.8660254037844388 ; xx [ 302 ] = xx [ 1375 ] + xx [ 1366 ] ; xx
[ 313 ] = xx [ 1379 ] + xx [ 1370 ] ; xx [ 322 ] = xx [ 1376 ] + xx [ 1367 ]
; xx [ 323 ] = xx [ 1380 ] + xx [ 1371 ] ; xx [ 342 ] = xx [ 1377 ] + xx [
1368 ] ; xx [ 343 ] = xx [ 1381 ] + xx [ 1372 ] ; xx [ 380 ] = xx [ 1383 ] +
xx [ 1374 ] ; xx [ 1357 ] = xx [ 222 ] * xx [ 299 ] - xx [ 302 ] * xx [ 587 ]
; xx [ 1358 ] = xx [ 313 ] * xx [ 299 ] - xx [ 322 ] * xx [ 587 ] ; xx [ 1359
] = xx [ 323 ] * xx [ 299 ] - xx [ 342 ] * xx [ 587 ] ; xx [ 1360 ] = - ( xx
[ 302 ] * xx [ 299 ] + xx [ 222 ] * xx [ 587 ] ) ; xx [ 1361 ] = - ( xx [ 322
] * xx [ 299 ] + xx [ 313 ] * xx [ 587 ] ) ; xx [ 1362 ] = - ( xx [ 342 ] *
xx [ 299 ] + xx [ 323 ] * xx [ 587 ] ) ; xx [ 1363 ] = xx [ 343 ] ; xx [ 1364
] = xx [ 1382 ] + xx [ 1373 ] ; xx [ 1365 ] = xx [ 380 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 1357 , xx + 119 , xx + 614 ) ; xx [ 299 ] =
xx [ 222 ] * xx [ 53 ] + xx [ 323 ] * xx [ 54 ] ; xx [ 222 ] = xx [ 299 ] *
xx [ 346 ] ; xx [ 313 ] = xx [ 302 ] * xx [ 53 ] + xx [ 342 ] * xx [ 54 ] ;
xx [ 302 ] = xx [ 313 ] * xx [ 346 ] ; xx [ 322 ] = ( xx [ 303 ] * xx [ 222 ]
- xx [ 346 ] * xx [ 302 ] ) * xx [ 7 ] + xx [ 313 ] ; xx [ 313 ] = xx [ 145 ]
* inputDot [ 4 ] ; xx [ 323 ] = xx [ 516 ] * xx [ 518 ] ; xx [ 342 ] = xx [
515 ] * xx [ 517 ] ; xx [ 381 ] = ( xx [ 323 ] + xx [ 342 ] ) * xx [ 7 ] ; xx
[ 383 ] = xx [ 139 ] * inputDot [ 4 ] ; xx [ 384 ] = xx [ 515 ] * xx [ 515 ]
; xx [ 386 ] = ( xx [ 384 ] + xx [ 516 ] * xx [ 516 ] ) * xx [ 7 ] - xx [ 0 ]
; xx [ 387 ] = xx [ 381 ] * xx [ 383 ] + xx [ 313 ] * xx [ 386 ] ; xx [ 400 ]
= xx [ 144 ] * inputDot [ 4 ] ; xx [ 454 ] = xx [ 516 ] * xx [ 517 ] ; xx [
547 ] = xx [ 515 ] * xx [ 518 ] ; xx [ 566 ] = xx [ 7 ] * ( xx [ 454 ] - xx [
547 ] ) ; xx [ 568 ] = xx [ 400 ] * xx [ 386 ] + xx [ 383 ] * xx [ 566 ] ; xx
[ 573 ] = xx [ 313 ] * xx [ 566 ] - xx [ 381 ] * xx [ 400 ] ; xx [ 588 ] = xx
[ 517 ] * xx [ 518 ] ; xx [ 589 ] = xx [ 515 ] * xx [ 516 ] ; xx [ 639 ] = xx
[ 7 ] * ( xx [ 588 ] - xx [ 589 ] ) ; xx [ 641 ] = ( xx [ 454 ] + xx [ 547 ]
) * xx [ 7 ] ; xx [ 454 ] = xx [ 383 ] * xx [ 639 ] + xx [ 641 ] * xx [ 313 ]
; xx [ 547 ] = ( xx [ 384 ] + xx [ 517 ] * xx [ 517 ] ) * xx [ 7 ] - xx [ 0 ]
; xx [ 642 ] = xx [ 641 ] * xx [ 400 ] + xx [ 383 ] * xx [ 547 ] ; xx [ 702 ]
= xx [ 313 ] * xx [ 547 ] - xx [ 400 ] * xx [ 639 ] ; xx [ 735 ] = ( xx [ 384
] + xx [ 518 ] * xx [ 518 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 384 ] = xx [ 7 ] *
( xx [ 323 ] - xx [ 342 ] ) ; xx [ 323 ] = xx [ 383 ] * xx [ 735 ] + xx [ 313
] * xx [ 384 ] ; xx [ 342 ] = ( xx [ 588 ] + xx [ 589 ] ) * xx [ 7 ] ; xx [
588 ] = xx [ 400 ] * xx [ 384 ] + xx [ 342 ] * xx [ 383 ] ; xx [ 589 ] = xx [
342 ] * xx [ 313 ] - xx [ 400 ] * xx [ 735 ] ; xx [ 1366 ] = - ( xx [ 313 ] *
xx [ 387 ] + xx [ 400 ] * xx [ 568 ] ) ; xx [ 1367 ] = - ( xx [ 383 ] * xx [
568 ] + xx [ 313 ] * xx [ 573 ] ) ; xx [ 1368 ] = xx [ 400 ] * xx [ 573 ] -
xx [ 383 ] * xx [ 387 ] ; xx [ 1369 ] = - ( xx [ 313 ] * xx [ 454 ] + xx [
400 ] * xx [ 642 ] ) ; xx [ 1370 ] = - ( xx [ 383 ] * xx [ 642 ] + xx [ 313 ]
* xx [ 702 ] ) ; xx [ 1371 ] = xx [ 400 ] * xx [ 702 ] - xx [ 383 ] * xx [
454 ] ; xx [ 1372 ] = - ( xx [ 313 ] * xx [ 323 ] + xx [ 400 ] * xx [ 588 ] )
; xx [ 1373 ] = - ( xx [ 383 ] * xx [ 588 ] + xx [ 313 ] * xx [ 589 ] ) ; xx
[ 1374 ] = xx [ 400 ] * xx [ 589 ] - xx [ 383 ] * xx [ 323 ] ; xx [ 323 ] =
xx [ 519 ] * xx [ 519 ] ; xx [ 387 ] = ( xx [ 323 ] + xx [ 520 ] * xx [ 520 ]
) * xx [ 7 ] - xx [ 0 ] ; xx [ 454 ] = xx [ 520 ] * xx [ 521 ] ; xx [ 568 ] =
xx [ 519 ] * xx [ 522 ] ; xx [ 573 ] = xx [ 7 ] * ( xx [ 454 ] - xx [ 568 ] )
; xx [ 588 ] = xx [ 520 ] * xx [ 522 ] ; xx [ 589 ] = xx [ 519 ] * xx [ 521 ]
; xx [ 642 ] = ( xx [ 588 ] + xx [ 589 ] ) * xx [ 7 ] ; xx [ 702 ] = ( xx [
454 ] + xx [ 568 ] ) * xx [ 7 ] ; xx [ 454 ] = ( xx [ 323 ] + xx [ 521 ] * xx
[ 521 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 568 ] = xx [ 521 ] * xx [ 522 ] ; xx [
762 ] = xx [ 519 ] * xx [ 520 ] ; xx [ 763 ] = xx [ 7 ] * ( xx [ 568 ] - xx [
762 ] ) ; xx [ 764 ] = xx [ 7 ] * ( xx [ 588 ] - xx [ 589 ] ) ; xx [ 588 ] =
( xx [ 568 ] + xx [ 762 ] ) * xx [ 7 ] ; xx [ 568 ] = ( xx [ 323 ] + xx [ 522
] * xx [ 522 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 1375 ] = xx [ 387 ] ; xx [ 1376
] = xx [ 573 ] ; xx [ 1377 ] = xx [ 642 ] ; xx [ 1378 ] = xx [ 702 ] ; xx [
1379 ] = xx [ 454 ] ; xx [ 1380 ] = xx [ 763 ] ; xx [ 1381 ] = xx [ 764 ] ;
xx [ 1382 ] = xx [ 588 ] ; xx [ 1383 ] = xx [ 568 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 1366 , xx + 1375 , xx + 1384 ) ; xx [
1375 ] = xx [ 386 ] ; xx [ 1376 ] = xx [ 566 ] ; xx [ 1377 ] = xx [ 381 ] ;
xx [ 1378 ] = xx [ 641 ] ; xx [ 1379 ] = xx [ 547 ] ; xx [ 1380 ] = xx [ 639
] ; xx [ 1381 ] = xx [ 384 ] ; xx [ 1382 ] = xx [ 342 ] ; xx [ 1383 ] = xx [
735 ] ; xx [ 767 ] = state [ 34 ] ; xx [ 768 ] = state [ 35 ] ; xx [ 769 ] =
state [ 36 ] ; pm_math_Quaternion_xform_ra ( xx + 163 , xx + 767 , xx + 775 )
; xx [ 323 ] = xx [ 775 ] * xx [ 642 ] - xx [ 777 ] * xx [ 387 ] ; xx [ 342 ]
= xx [ 776 ] * xx [ 387 ] - xx [ 775 ] * xx [ 573 ] ; xx [ 381 ] = xx [ 777 ]
* xx [ 573 ] - xx [ 776 ] * xx [ 642 ] ; xx [ 384 ] = xx [ 775 ] * xx [ 763 ]
- xx [ 777 ] * xx [ 702 ] ; xx [ 386 ] = xx [ 776 ] * xx [ 702 ] - xx [ 775 ]
* xx [ 454 ] ; xx [ 387 ] = xx [ 777 ] * xx [ 454 ] - xx [ 776 ] * xx [ 763 ]
; xx [ 454 ] = xx [ 775 ] * xx [ 568 ] - xx [ 777 ] * xx [ 764 ] ; xx [ 547 ]
= xx [ 776 ] * xx [ 764 ] - xx [ 775 ] * xx [ 588 ] ; xx [ 566 ] = xx [ 777 ]
* xx [ 588 ] - xx [ 776 ] * xx [ 568 ] ; xx [ 1393 ] = xx [ 777 ] * xx [ 323
] - xx [ 776 ] * xx [ 342 ] ; xx [ 1394 ] = xx [ 775 ] * xx [ 342 ] - xx [
777 ] * xx [ 381 ] ; xx [ 1395 ] = xx [ 776 ] * xx [ 381 ] - xx [ 775 ] * xx
[ 323 ] ; xx [ 1396 ] = xx [ 777 ] * xx [ 384 ] - xx [ 776 ] * xx [ 386 ] ;
xx [ 1397 ] = xx [ 775 ] * xx [ 386 ] - xx [ 777 ] * xx [ 387 ] ; xx [ 1398 ]
= xx [ 776 ] * xx [ 387 ] - xx [ 775 ] * xx [ 384 ] ; xx [ 1399 ] = xx [ 777
] * xx [ 454 ] - xx [ 776 ] * xx [ 547 ] ; xx [ 1400 ] = xx [ 775 ] * xx [
547 ] - xx [ 777 ] * xx [ 566 ] ; xx [ 1401 ] = xx [ 776 ] * xx [ 566 ] - xx
[ 775 ] * xx [ 454 ] ; pm_math_Matrix3x3_compose_ra ( xx + 1375 , xx + 1393 ,
xx + 1402 ) ; xx [ 323 ] = xx [ 511 ] * xx [ 511 ] ; xx [ 342 ] = xx [ 512 ]
* xx [ 513 ] ; xx [ 381 ] = xx [ 511 ] * xx [ 514 ] ; xx [ 384 ] = xx [ 512 ]
* xx [ 514 ] ; xx [ 386 ] = xx [ 511 ] * xx [ 513 ] ; xx [ 387 ] = xx [ 513 ]
* xx [ 514 ] ; xx [ 454 ] = xx [ 511 ] * xx [ 512 ] ; xx [ 1375 ] = ( xx [
323 ] + xx [ 512 ] * xx [ 512 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 1376 ] = xx [
7 ] * ( xx [ 342 ] - xx [ 381 ] ) ; xx [ 1377 ] = ( xx [ 384 ] + xx [ 386 ] )
* xx [ 7 ] ; xx [ 1378 ] = ( xx [ 342 ] + xx [ 381 ] ) * xx [ 7 ] ; xx [ 1379
] = ( xx [ 323 ] + xx [ 513 ] * xx [ 513 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [
1380 ] = xx [ 7 ] * ( xx [ 387 ] - xx [ 454 ] ) ; xx [ 1381 ] = xx [ 7 ] * (
xx [ 384 ] - xx [ 386 ] ) ; xx [ 1382 ] = ( xx [ 387 ] + xx [ 454 ] ) * xx [
7 ] ; xx [ 1383 ] = ( xx [ 323 ] + xx [ 514 ] * xx [ 514 ] ) * xx [ 7 ] - xx
[ 0 ] ; xx [ 762 ] = - xx [ 383 ] ; xx [ 763 ] = xx [ 400 ] ; xx [ 764 ] = xx
[ 313 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 519 , xx + 762 , xx + 794
) ; pm_math_Matrix3x3_postCross_ra ( xx + 1375 , xx + 794 , xx + 1411 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 1411 , xx + 775 , xx + 1375 ) ; xx [
1411 ] = xx [ 1384 ] + xx [ 1402 ] + xx [ 7 ] * xx [ 1375 ] ; xx [ 1412 ] =
xx [ 1385 ] + xx [ 1403 ] + xx [ 7 ] * xx [ 1376 ] ; xx [ 1413 ] = xx [ 1386
] + xx [ 1404 ] + xx [ 7 ] * xx [ 1377 ] ; xx [ 1414 ] = xx [ 1387 ] + xx [
1405 ] + xx [ 7 ] * xx [ 1378 ] ; xx [ 1415 ] = xx [ 1388 ] + xx [ 1406 ] +
xx [ 7 ] * xx [ 1379 ] ; xx [ 1416 ] = xx [ 1389 ] + xx [ 1407 ] + xx [ 7 ] *
xx [ 1380 ] ; xx [ 1417 ] = xx [ 1390 ] + xx [ 1408 ] + xx [ 7 ] * xx [ 1381
] ; xx [ 1418 ] = xx [ 1391 ] + xx [ 1409 ] + xx [ 7 ] * xx [ 1382 ] ; xx [
1419 ] = xx [ 1392 ] + xx [ 1410 ] + xx [ 7 ] * xx [ 1383 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 1411 , xx + 187 , xx + 816 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 1366 , xx + 319 , xx + 826 ) ;
pm_math_Quaternion_xform_ra ( xx + 515 , xx + 504 , xx + 829 ) ; xx [ 313 ] =
inputDot [ 4 ] * inputDot [ 4 ] ; pm_math_Matrix3x3_xform_ra ( xx + 1393 , xx
+ 236 , xx + 846 ) ; pm_math_Quaternion_xform_ra ( xx + 515 , xx + 846 , xx +
855 ) ; pm_math_Vector3_cross_ra ( xx + 775 , xx + 236 , xx + 846 ) ;
pm_math_Quaternion_xform_ra ( xx + 519 , xx + 846 , xx + 867 ) ;
pm_math_Vector3_cross_ra ( xx + 762 , xx + 867 , xx + 870 ) ;
pm_math_Quaternion_xform_ra ( xx + 515 , xx + 870 , xx + 867 ) ; xx [ 323 ] =
xx [ 15 ] * state [ 22 ] ; xx [ 870 ] = xx [ 244 ] * xx [ 22 ] ; xx [ 871 ] =
xx [ 300 ] * xx [ 58 ] ; xx [ 872 ] = xx [ 304 ] * xx [ 28 ] ;
pm_math_Vector3_cross_ra ( xx + 611 , xx + 870 , xx + 1326 ) ;
pm_math_Quaternion_inverseCompose_ra ( xx + 511 , xx + 376 , xx + 870 ) ;
pm_math_Quaternion_inverseCompose_ra ( xx + 583 , xx + 870 , xx + 511 ) ; xx
[ 342 ] = xx [ 514 ] * xx [ 514 ] ; xx [ 381 ] = sqrt ( xx [ 512 ] * xx [ 512
] + xx [ 513 ] * xx [ 513 ] + xx [ 342 ] ) ; xx [ 383 ] = atan2 ( xx [ 381 ]
, fabs ( xx [ 511 ] ) ) * xx [ 161 ] ; xx [ 384 ] = xx [ 381 ] == 0.0 ? 0.0 :
1.0 / xx [ 381 ] ; xx [ 381 ] = ( xx [ 511 ] < 0.0 ? - 1.0 : + 1.0 ) * xx [
384 ] ; xx [ 384 ] = xx [ 794 ] + xx [ 775 ] ; xx [ 386 ] = xx [ 795 ] + xx [
776 ] ; xx [ 387 ] = xx [ 796 ] + xx [ 777 ] ; xx [ 1329 ] = xx [ 384 ] ; xx
[ 1330 ] = xx [ 386 ] ; xx [ 1331 ] = xx [ 387 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 870 , xx + 1329 , xx + 1366 ) ; xx
[ 400 ] = xx [ 244 ] - xx [ 1366 ] ; xx [ 454 ] = ( xx [ 511 ] * xx [ 511 ] +
xx [ 342 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 454 ] = fabs ( xx [ 454 ] ) > 1.0 ?
atan2 ( 0.0 , xx [ 454 ] ) : acos ( xx [ 454 ] ) ; xx [ 342 ] = xx [ 454 ] -
xx [ 76 ] ; if ( xx [ 223 ] > xx [ 342 ] ) xx [ 342 ] = xx [ 223 ] ; xx [ 454
] = xx [ 511 ] * xx [ 512 ] + xx [ 513 ] * xx [ 514 ] ; xx [ 547 ] = xx [ 511
] * xx [ 513 ] - xx [ 512 ] * xx [ 514 ] ; xx [ 566 ] = sqrt ( xx [ 454 ] *
xx [ 454 ] + xx [ 547 ] * xx [ 547 ] ) ; bb [ 0 ] = xx [ 566 ] == xx [ 223 ]
; xx [ 568 ] = xx [ 566 ] == 0.0 ? 0.0 : xx [ 454 ] / xx [ 566 ] ; xx [ 454 ]
= bb [ 0 ] ? xx [ 0 ] : xx [ 568 ] ; xx [ 568 ] = xx [ 300 ] - xx [ 1367 ] ;
xx [ 573 ] = xx [ 566 ] == 0.0 ? 0.0 : xx [ 547 ] / xx [ 566 ] ; xx [ 547 ] =
bb [ 0 ] ? xx [ 223 ] : xx [ 573 ] ; xx [ 566 ] = xx [ 342 ] / xx [ 366 ] ;
if ( xx [ 0 ] < xx [ 566 ] ) xx [ 566 ] = xx [ 0 ] ; xx [ 573 ] = ( xx [ 305
] * xx [ 342 ] + ( xx [ 342 ] == xx [ 223 ] ? xx [ 223 ] : ( xx [ 400 ] * xx
[ 454 ] + xx [ 568 ] * xx [ 547 ] ) * xx [ 305 ] ) ) * xx [ 566 ] * xx [ 566
] * ( xx [ 434 ] - xx [ 7 ] * xx [ 566 ] ) ; if ( xx [ 223 ] > xx [ 573 ] )
xx [ 573 ] = xx [ 223 ] ; xx [ 342 ] = xx [ 383 ] * xx [ 512 ] * xx [ 381 ] +
xx [ 289 ] * xx [ 400 ] + xx [ 573 ] * xx [ 454 ] ;
pm_math_Quaternion_inverseCompose_ra ( xx + 594 , xx + 376 , xx + 870 ) ;
pm_math_Quaternion_inverseCompose_ra ( xx + 583 , xx + 870 , xx + 376 ) ; xx
[ 400 ] = xx [ 379 ] * xx [ 379 ] ; xx [ 454 ] = sqrt ( xx [ 377 ] * xx [ 377
] + xx [ 378 ] * xx [ 378 ] + xx [ 400 ] ) ; xx [ 566 ] = atan2 ( xx [ 454 ]
, fabs ( xx [ 376 ] ) ) * xx [ 161 ] ; xx [ 588 ] = xx [ 454 ] == 0.0 ? 0.0 :
1.0 / xx [ 454 ] ; xx [ 454 ] = ( xx [ 376 ] < 0.0 ? - 1.0 : + 1.0 ) * xx [
588 ] ; xx [ 588 ] = xx [ 139 ] * inputDot [ 5 ] ; xx [ 589 ] = xx [ 144 ] *
inputDot [ 5 ] ; xx [ 639 ] = xx [ 145 ] * inputDot [ 5 ] ; xx [ 1369 ] = -
xx [ 588 ] ; xx [ 1370 ] = xx [ 589 ] ; xx [ 1371 ] = xx [ 639 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 604 , xx + 1369 , xx + 1372 ) ; xx
[ 1375 ] = state [ 41 ] ; xx [ 1376 ] = state [ 42 ] ; xx [ 1377 ] = state [
43 ] ; pm_math_Quaternion_xform_ra ( xx + 163 , xx + 1375 , xx + 1378 ) ; xx
[ 641 ] = xx [ 1372 ] + xx [ 1378 ] ; xx [ 642 ] = xx [ 1373 ] + xx [ 1379 ]
; xx [ 702 ] = xx [ 1374 ] + xx [ 1380 ] ; xx [ 1381 ] = xx [ 641 ] ; xx [
1382 ] = xx [ 642 ] ; xx [ 1383 ] = xx [ 702 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 870 , xx + 1381 , xx + 1384 ) ; xx
[ 735 ] = xx [ 244 ] - xx [ 1384 ] ; xx [ 819 ] = ( xx [ 376 ] * xx [ 376 ] +
xx [ 400 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 819 ] = fabs ( xx [ 819 ] ) > 1.0 ?
atan2 ( 0.0 , xx [ 819 ] ) : acos ( xx [ 819 ] ) ; xx [ 400 ] = xx [ 819 ] -
xx [ 76 ] ; if ( xx [ 223 ] > xx [ 400 ] ) xx [ 400 ] = xx [ 223 ] ; xx [ 819
] = xx [ 376 ] * xx [ 377 ] + xx [ 378 ] * xx [ 379 ] ; xx [ 824 ] = xx [ 376
] * xx [ 378 ] - xx [ 377 ] * xx [ 379 ] ; xx [ 832 ] = sqrt ( xx [ 819 ] *
xx [ 819 ] + xx [ 824 ] * xx [ 824 ] ) ; bb [ 0 ] = xx [ 832 ] == xx [ 223 ]
; xx [ 858 ] = xx [ 832 ] == 0.0 ? 0.0 : xx [ 819 ] / xx [ 832 ] ; xx [ 819 ]
= bb [ 0 ] ? xx [ 0 ] : xx [ 858 ] ; xx [ 858 ] = xx [ 300 ] - xx [ 1385 ] ;
xx [ 870 ] = xx [ 832 ] == 0.0 ? 0.0 : xx [ 824 ] / xx [ 832 ] ; xx [ 824 ] =
bb [ 0 ] ? xx [ 223 ] : xx [ 870 ] ; xx [ 832 ] = xx [ 400 ] / xx [ 366 ] ;
if ( xx [ 0 ] < xx [ 832 ] ) xx [ 832 ] = xx [ 0 ] ; xx [ 870 ] = ( xx [ 305
] * xx [ 400 ] + ( xx [ 400 ] == xx [ 223 ] ? xx [ 223 ] : ( xx [ 735 ] * xx
[ 819 ] + xx [ 858 ] * xx [ 824 ] ) * xx [ 305 ] ) ) * xx [ 832 ] * xx [ 832
] * ( xx [ 434 ] - xx [ 7 ] * xx [ 832 ] ) ; if ( xx [ 223 ] > xx [ 870 ] )
xx [ 870 ] = xx [ 223 ] ; xx [ 400 ] = xx [ 566 ] * xx [ 377 ] * xx [ 454 ] +
xx [ 289 ] * xx [ 735 ] + xx [ 870 ] * xx [ 819 ] ; xx [ 735 ] = xx [ 304 ] *
xx [ 417 ] ; xx [ 819 ] = xx [ 244 ] * xx [ 417 ] ; xx [ 832 ] = xx [ 244 ] -
( xx [ 412 ] * xx [ 735 ] + xx [ 819 ] * xx [ 417 ] ) * xx [ 7 ] ; xx [ 871 ]
= xx [ 300 ] + state [ 29 ] ; xx [ 872 ] = xx [ 304 ] + xx [ 7 ] * ( xx [ 412
] * xx [ 819 ] - xx [ 735 ] * xx [ 417 ] ) ; xx [ 1387 ] = xx [ 832 ] ; xx [
1388 ] = xx [ 871 ] ; xx [ 1389 ] = xx [ 872 ] ; xx [ 1390 ] = xx [ 23 ] * xx
[ 832 ] ; xx [ 1391 ] = xx [ 871 ] * xx [ 439 ] ; xx [ 1392 ] = xx [ 872 ] *
xx [ 416 ] ; pm_math_Vector3_cross_ra ( xx + 1387 , xx + 1390 , xx + 1393 ) ;
xx [ 735 ] = xx [ 351 ] - xx [ 361 ] ; xx [ 351 ] = xx [ 369 ] + xx [ 370 ] ;
xx [ 361 ] = xx [ 735 ] * xx [ 412 ] + xx [ 417 ] * xx [ 351 ] ; xx [ 369 ] =
xx [ 344 ] - xx [ 347 ] ; xx [ 344 ] = xx [ 372 ] + xx [ 373 ] ; xx [ 347 ] =
xx [ 369 ] * xx [ 412 ] + xx [ 417 ] * xx [ 344 ] ; xx [ 370 ] = - xx [ 347 ]
; xx [ 372 ] = xx [ 735 ] * xx [ 417 ] - xx [ 412 ] * xx [ 351 ] ; xx [ 373 ]
= xx [ 412 ] * xx [ 344 ] - xx [ 369 ] * xx [ 417 ] ; xx [ 1387 ] = xx [ 370
] ; xx [ 1388 ] = xx [ 372 ] ; xx [ 1389 ] = xx [ 373 ] ; xx [ 819 ] = xx [
372 ] * xx [ 422 ] ; xx [ 873 ] = 0.09427500000000011 ; xx [ 881 ] = xx [ 873
] * xx [ 373 ] + xx [ 347 ] * xx [ 422 ] ; xx [ 347 ] = xx [ 372 ] * xx [ 873
] ; xx [ 1390 ] = - xx [ 819 ] ; xx [ 1391 ] = - xx [ 881 ] ; xx [ 1392 ] =
xx [ 347 ] ; pm_math_Vector3_cross_ra ( xx + 1387 , xx + 1390 , xx + 1396 ) ;
xx [ 1387 ] = - xx [ 369 ] ; xx [ 1388 ] = - xx [ 351 ] ; xx [ 1389 ] = xx [
344 ] ; xx [ 884 ] = xx [ 427 ] * xx [ 351 ] ; xx [ 1332 ] = xx [ 435 ] * xx
[ 344 ] + xx [ 427 ] * xx [ 369 ] ; xx [ 344 ] = xx [ 435 ] * xx [ 351 ] ; xx
[ 1390 ] = - xx [ 884 ] ; xx [ 1391 ] = xx [ 1332 ] ; xx [ 1392 ] = xx [ 344
] ; pm_math_Vector3_cross_ra ( xx + 1387 , xx + 1390 , xx + 1399 ) ; xx [
1387 ] = xx [ 393 ] ; xx [ 1388 ] = xx [ 352 ] ; xx [ 1389 ] = xx [ 394 ] ;
xx [ 351 ] = xx [ 54 ] * xx [ 352 ] ; xx [ 369 ] = xx [ 477 ] - xx [ 345 ] *
xx [ 54 ] ; xx [ 393 ] = xx [ 53 ] * xx [ 352 ] ; xx [ 1390 ] = - xx [ 351 ]
; xx [ 1391 ] = xx [ 369 ] ; xx [ 1392 ] = xx [ 393 ] ;
pm_math_Vector3_cross_ra ( xx + 1387 , xx + 1390 , xx + 1402 ) ; xx [ 394 ] =
( xx [ 1402 ] - xx [ 351 ] * xx [ 360 ] ) * xx [ 7 ] - xx [ 53 ] ; xx [ 351 ]
= xx [ 394 ] * xx [ 346 ] ; xx [ 477 ] = ( xx [ 360 ] * xx [ 369 ] + xx [
1403 ] ) * xx [ 7 ] ; xx [ 369 ] = xx [ 346 ] * xx [ 477 ] ; xx [ 1405 ] = xx
[ 361 ] ; xx [ 1406 ] = xx [ 370 ] ; xx [ 1407 ] = xx [ 372 ] ; xx [ 1408 ] =
xx [ 373 ] ; xx [ 1409 ] = ( xx [ 1396 ] - xx [ 819 ] * xx [ 361 ] ) * xx [ 7
] - xx [ 873 ] + xx [ 435 ] + ( xx [ 1399 ] - xx [ 735 ] * xx [ 884 ] ) * xx
[ 7 ] + ( xx [ 346 ] * xx [ 351 ] - xx [ 303 ] * xx [ 369 ] ) * xx [ 7 ] - xx
[ 394 ] - 0.1325 ; xx [ 1410 ] = ( xx [ 1397 ] - xx [ 881 ] * xx [ 361 ] ) *
xx [ 7 ] + ( xx [ 1332 ] * xx [ 735 ] + xx [ 1400 ] ) * xx [ 7 ] + xx [ 7 ] *
( xx [ 346 ] * xx [ 369 ] + xx [ 303 ] * xx [ 351 ] ) - xx [ 477 ] -
0.2294967320028763 ; xx [ 1411 ] = xx [ 7 ] * ( xx [ 1398 ] + xx [ 347 ] * xx
[ 361 ] ) - xx [ 422 ] + xx [ 427 ] + xx [ 7 ] * ( xx [ 1401 ] + xx [ 735 ] *
xx [ 344 ] ) - xx [ 7 ] * ( xx [ 1404 ] + xx [ 393 ] * xx [ 360 ] ) + xx [
122 ] ; xx [ 344 ] = sm_core_compiler_computeProximityInfoCxpolyBrick (
triped_a151ee3d_1_geometry_0 ( rtdv ) , triped_a151ee3d_1_geometry_1 ( rtdv )
, ( pm_math_Transform3 * ) ( xx + 1405 ) , ( pm_math_Transform3 * ) ( xx +
839 ) , ( pm_math_Vector3 * ) ( xx + 1387 ) , ( pm_math_Vector3 * ) ( xx +
1390 ) , ( pm_math_Vector3 * ) ( xx + 1396 ) , ( pm_math_Vector3 * ) ( xx +
1399 ) ) ; xx [ 1412 ] = xx [ 0 ] ; xx [ 1413 ] = xx [ 223 ] ; xx [ 1414 ] =
xx [ 223 ] ; xx [ 1415 ] = xx [ 223 ] ; xx [ 1416 ] = - xx [ 873 ] ; xx [
1417 ] = xx [ 223 ] ; xx [ 1418 ] = xx [ 102 ] ; xx [ 102 ] = xx [ 427 ] * xx
[ 300 ] ; xx [ 347 ] = xx [ 300 ] * xx [ 54 ] ; xx [ 351 ] = xx [ 102 ] + xx
[ 347 ] ; xx [ 361 ] = xx [ 417 ] * xx [ 351 ] ; xx [ 369 ] = xx [ 300 ] * xx
[ 53 ] ; xx [ 370 ] = xx [ 300 ] * xx [ 435 ] ; xx [ 372 ] = xx [ 369 ] + xx
[ 370 ] ; xx [ 373 ] = xx [ 417 ] * xx [ 372 ] ; xx [ 393 ] = xx [ 36 ] *
state [ 29 ] ; xx [ 394 ] = xx [ 304 ] * xx [ 435 ] - xx [ 427 ] * xx [ 244 ]
; xx [ 477 ] = xx [ 304 ] * xx [ 53 ] - xx [ 244 ] * xx [ 54 ] ; xx [ 244 ] =
xx [ 278 ] * state [ 29 ] ; xx [ 1419 ] = xx [ 832 ] ; xx [ 1420 ] = xx [ 871
] ; xx [ 1421 ] = xx [ 872 ] ; xx [ 1422 ] = xx [ 351 ] - ( xx [ 361 ] * xx [
417 ] - xx [ 412 ] * xx [ 373 ] ) * xx [ 7 ] + xx [ 393 ] ; xx [ 1423 ] = xx
[ 394 ] + xx [ 477 ] ; xx [ 1424 ] = xx [ 7 ] * ( xx [ 412 ] * xx [ 361 ] +
xx [ 373 ] * xx [ 417 ] ) - xx [ 372 ] + xx [ 244 ] ;
sm_core_compiler_computeContactWrenches ( xx [ 344 ] , xx + 1390 , xx + 1387
, xx + 1399 , xx + 1396 , xx + 874 , xx + 1412 , xx + 839 , xx + 1405 , xx +
1333 , xx + 1419 , 0 , 1 , xx [ 626 ] , xx [ 627 ] , xx [ 773 ] , xx [ 813 ]
, xx [ 882 ] , xx [ 883 ] , xx + 1425 , xx + 1431 ) ; xx [ 344 ] = xx [ 872 ]
* state [ 29 ] ; xx [ 351 ] = xx [ 1393 ] - xx [ 1431 ] - xx [ 23 ] * xx [
344 ] ; xx [ 361 ] = xx [ 832 ] * state [ 29 ] ; xx [ 372 ] = xx [ 1395 ] -
xx [ 1433 ] + xx [ 416 ] * xx [ 361 ] ; xx [ 373 ] = xx [ 372 ] * xx [ 417 ]
; xx [ 735 ] = xx [ 417 ] * xx [ 351 ] ; xx [ 1387 ] = xx [ 102 ] ; xx [ 1388
] = xx [ 394 ] ; xx [ 1389 ] = - xx [ 370 ] ; pm_math_Vector3_cross_ra ( xx +
611 , xx + 1387 , xx + 1390 ) ; xx [ 102 ] = ( ( xx [ 872 ] + xx [ 872 ] ) *
xx [ 393 ] - ( xx [ 832 ] + xx [ 832 ] ) * xx [ 244 ] + xx [ 1391 ] ) * xx [
41 ] - xx [ 1435 ] ; xx [ 1387 ] = xx [ 347 ] ; xx [ 1388 ] = xx [ 477 ] ; xx
[ 1389 ] = - xx [ 369 ] ; pm_math_Vector3_cross_ra ( xx + 611 , xx + 1387 ,
xx + 1396 ) ; xx [ 347 ] = xx [ 1397 ] - ( xx [ 54 ] * xx [ 211 ] + xx [ 53 ]
* xx [ 643 ] ) ; xx [ 369 ] = xx [ 1326 ] + xx [ 342 ] + xx [ 400 ] + xx [
351 ] + xx [ 7 ] * ( xx [ 412 ] * xx [ 373 ] - xx [ 735 ] * xx [ 417 ] ) - xx
[ 427 ] * xx [ 102 ] + xx [ 431 ] * xx [ 211 ] - xx [ 643 ] * xx [ 437 ] - xx
[ 347 ] * xx [ 430 ] ; xx [ 351 ] = xx [ 383 ] * xx [ 513 ] * xx [ 381 ] + xx
[ 289 ] * xx [ 568 ] + xx [ 573 ] * xx [ 547 ] ; xx [ 370 ] = xx [ 566 ] * xx
[ 378 ] * xx [ 454 ] + xx [ 289 ] * xx [ 858 ] + xx [ 870 ] * xx [ 824 ] ; xx
[ 394 ] = xx [ 1327 ] + xx [ 351 ] + xx [ 370 ] ; xx [ 431 ] = xx [ 1394 ] -
xx [ 1432 ] ; xx [ 437 ] = xx [ 300 ] + xx [ 871 ] ; xx [ 300 ] = xx [ 1392 ]
* xx [ 417 ] ; xx [ 477 ] = xx [ 1390 ] * xx [ 417 ] ; xx [ 547 ] = ( xx [
437 ] * xx [ 244 ] + xx [ 1390 ] - ( xx [ 412 ] * xx [ 300 ] + xx [ 477 ] *
xx [ 417 ] ) * xx [ 7 ] ) * xx [ 41 ] - xx [ 1434 ] ; xx [ 244 ] = xx [ 41 ]
* ( xx [ 1392 ] + xx [ 7 ] * ( xx [ 412 ] * xx [ 477 ] - xx [ 300 ] * xx [
417 ] ) - xx [ 437 ] * xx [ 393 ] ) - xx [ 1436 ] ; xx [ 300 ] = xx [ 431 ] +
xx [ 36 ] * xx [ 547 ] + xx [ 278 ] * xx [ 244 ] ; xx [ 393 ] = xx [ 300 ] /
xx [ 441 ] ; xx [ 437 ] = xx [ 547 ] - xx [ 443 ] * xx [ 393 ] ; xx [ 477 ] =
xx [ 244 ] - xx [ 65 ] * xx [ 393 ] ; xx [ 568 ] = xx [ 417 ] * xx [ 477 ] ;
xx [ 573 ] = xx [ 417 ] * xx [ 437 ] ; xx [ 819 ] = xx [ 437 ] + xx [ 7 ] * (
xx [ 412 ] * xx [ 568 ] - xx [ 573 ] * xx [ 417 ] ) ; xx [ 437 ] = xx [ 477 ]
- ( xx [ 412 ] * xx [ 573 ] + xx [ 568 ] * xx [ 417 ] ) * xx [ 7 ] ; xx [ 477
] = xx [ 1398 ] + xx [ 277 ] * xx [ 53 ] ; xx [ 568 ] = xx [ 1396 ] - xx [
277 ] * xx [ 54 ] ; xx [ 573 ] = xx [ 477 ] * xx [ 445 ] - xx [ 568 ] * xx [
429 ] - xx [ 452 ] * xx [ 277 ] ; xx [ 452 ] = xx [ 394 ] + xx [ 431 ] - xx [
439 ] * xx [ 393 ] + xx [ 427 ] * xx [ 819 ] - xx [ 435 ] * xx [ 437 ] + xx [
573 ] ; xx [ 824 ] = xx [ 383 ] * xx [ 514 ] * xx [ 381 ] + xx [ 289 ] * ( xx
[ 304 ] - xx [ 1368 ] ) ; xx [ 381 ] = xx [ 566 ] * xx [ 379 ] * xx [ 454 ] +
xx [ 289 ] * ( xx [ 304 ] - xx [ 1386 ] ) ; xx [ 304 ] = xx [ 1328 ] + xx [
824 ] + xx [ 381 ] + xx [ 372 ] - ( xx [ 412 ] * xx [ 735 ] + xx [ 373 ] * xx
[ 417 ] ) * xx [ 7 ] + xx [ 435 ] * xx [ 102 ] + xx [ 211 ] * xx [ 449 ] - xx
[ 415 ] * xx [ 643 ] + xx [ 347 ] * xx [ 436 ] ; xx [ 870 ] = xx [ 369 ] ; xx
[ 871 ] = xx [ 452 ] ; xx [ 872 ] = xx [ 304 ] ; xx [ 372 ] = xx [ 277 ] * xx
[ 429 ] + xx [ 432 ] * xx [ 568 ] + xx [ 477 ] * xx [ 455 ] ; xx [ 373 ] = xx
[ 102 ] + xx [ 450 ] * xx [ 347 ] - ( xx [ 430 ] * xx [ 211 ] + xx [ 643 ] *
xx [ 436 ] ) ; xx [ 102 ] = xx [ 568 ] * xx [ 447 ] + xx [ 451 ] * xx [ 477 ]
- xx [ 277 ] * xx [ 445 ] ; xx [ 449 ] = xx [ 819 ] + xx [ 372 ] ; xx [ 450 ]
= xx [ 373 ] ; xx [ 451 ] = xx [ 437 ] + xx [ 102 ] ; xx [ 347 ] = xx [ 15 ]
* state [ 23 ] ; xx [ 383 ] = xx [ 369 ] * xx [ 356 ] ; xx [ 415 ] = xx [ 15
] * state [ 24 ] + xx [ 304 ] + xx [ 373 ] * xx [ 53 ] ; xx [ 1326 ] = - ( xx
[ 323 ] + pm_math_Vector3_dot_ra ( xx + 390 , xx + 870 ) +
pm_math_Vector3_dot_ra ( xx + 459 , xx + 449 ) ) ; xx [ 1327 ] = - ( xx [ 347
] + xx [ 383 ] + xx [ 452 ] * xx [ 467 ] + pm_math_Vector3_dot_ra ( xx + 479
, xx + 449 ) ) ; xx [ 1328 ] = - xx [ 415 ] ; solveSymmetricPosDef ( xx + 482
, xx + 1326 , 3 , 1 , xx + 449 , xx + 870 ) ; xx [ 1384 ] = xx [ 403 ] ; xx [
1385 ] = xx [ 466 ] ; xx [ 1386 ] = xx [ 471 ] ; xx [ 1387 ] = xx [ 448 ] ;
xx [ 1388 ] = xx [ 469 ] ; xx [ 1389 ] = xx [ 223 ] ; xx [ 1390 ] = xx [ 419
] ; xx [ 1391 ] = xx [ 470 ] ; xx [ 1392 ] = xx [ 472 ] ; xx [ 1393 ] = xx [
433 ] ; xx [ 1394 ] = xx [ 474 ] ; xx [ 1395 ] = xx [ 223 ] ; xx [ 1396 ] =
xx [ 413 ] ; xx [ 1397 ] = xx [ 475 ] ; xx [ 1398 ] = xx [ 473 ] ; xx [ 1399
] = xx [ 453 ] ; xx [ 1400 ] = xx [ 476 ] ; xx [ 1401 ] = xx [ 223 ] ;
solveSymmetricPosDef ( xx + 482 , xx + 1384 , 3 , 6 , xx + 1419 , xx + 452 )
; xx [ 452 ] = xx [ 1428 ] ; xx [ 453 ] = xx [ 1431 ] ; xx [ 454 ] = xx [
1434 ] ; xx [ 403 ] = xx [ 345 ] * xx [ 26 ] ; xx [ 413 ] = xx [ 26 ] * xx [
352 ] ; xx [ 419 ] = xx [ 7 ] * ( xx [ 362 ] * xx [ 403 ] - xx [ 413 ] * xx [
360 ] ) ; xx [ 429 ] = ( xx [ 345 ] * xx [ 403 ] + xx [ 413 ] * xx [ 352 ] )
* xx [ 7 ] ; xx [ 469 ] = xx [ 419 ] ; xx [ 470 ] = - ( ( xx [ 403 ] * xx [
360 ] + xx [ 362 ] * xx [ 413 ] ) * xx [ 7 ] ) ; xx [ 471 ] = xx [ 26 ] - xx
[ 429 ] ; xx [ 345 ] = pm_math_Vector3_dot_ra ( xx + 452 , xx + 469 ) ; xx [
352 ] = xx [ 449 ] - xx [ 345 ] ; xx [ 452 ] = xx [ 1429 ] ; xx [ 453 ] = xx
[ 1432 ] ; xx [ 454 ] = xx [ 1435 ] ; xx [ 360 ] = pm_math_Vector3_dot_ra (
xx + 452 , xx + 469 ) ; xx [ 362 ] = xx [ 450 ] - xx [ 360 ] ; xx [ 447 ] =
xx [ 1430 ] ; xx [ 448 ] = xx [ 1433 ] ; xx [ 449 ] = xx [ 1436 ] ; xx [ 403
] = pm_math_Vector3_dot_ra ( xx + 447 , xx + 469 ) ; xx [ 413 ] = xx [ 451 ]
- xx [ 403 ] ; xx [ 430 ] = state [ 33 ] * state [ 33 ] ; xx [ 432 ] = sqrt (
state [ 31 ] * state [ 31 ] + state [ 32 ] * state [ 32 ] + xx [ 430 ] ) ; xx
[ 433 ] = - state [ 30 ] ; xx [ 436 ] = atan2 ( xx [ 432 ] , fabs ( xx [ 433
] ) ) * xx [ 161 ] ; xx [ 437 ] = xx [ 432 ] == 0.0 ? 0.0 : 1.0 / xx [ 432 ]
; xx [ 432 ] = ( xx [ 433 ] < 0.0 ? - 1.0 : + 1.0 ) * xx [ 437 ] ; xx [ 433 ]
= ( state [ 30 ] * state [ 30 ] + xx [ 430 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [
433 ] = fabs ( xx [ 433 ] ) > 1.0 ? atan2 ( 0.0 , xx [ 433 ] ) : acos ( xx [
433 ] ) ; xx [ 430 ] = xx [ 433 ] - xx [ 76 ] ; if ( xx [ 223 ] > xx [ 430 ]
) xx [ 430 ] = xx [ 223 ] ; xx [ 433 ] = state [ 30 ] * state [ 31 ] + state
[ 32 ] * state [ 33 ] ; xx [ 437 ] = state [ 30 ] * state [ 32 ] - state [ 31
] * state [ 33 ] ; xx [ 445 ] = sqrt ( xx [ 433 ] * xx [ 433 ] + xx [ 437 ] *
xx [ 437 ] ) ; bb [ 0 ] = xx [ 445 ] == xx [ 223 ] ; xx [ 447 ] = xx [ 445 ]
== 0.0 ? 0.0 : xx [ 433 ] / xx [ 445 ] ; xx [ 433 ] = bb [ 0 ] ? xx [ 0 ] :
xx [ 447 ] ; xx [ 447 ] = xx [ 445 ] == 0.0 ? 0.0 : xx [ 437 ] / xx [ 445 ] ;
xx [ 437 ] = bb [ 0 ] ? xx [ 223 ] : xx [ 447 ] ; xx [ 445 ] = xx [ 430 ] /
xx [ 366 ] ; if ( xx [ 0 ] < xx [ 445 ] ) xx [ 445 ] = xx [ 0 ] ; xx [ 447 ]
= ( xx [ 305 ] * xx [ 430 ] + ( xx [ 430 ] == xx [ 223 ] ? xx [ 223 ] : ( xx
[ 433 ] * state [ 34 ] + xx [ 437 ] * state [ 35 ] ) * xx [ 305 ] ) ) * xx [
445 ] * xx [ 445 ] * ( xx [ 434 ] - xx [ 7 ] * xx [ 445 ] ) ; if ( xx [ 223 ]
> xx [ 447 ] ) xx [ 447 ] = xx [ 223 ] ; xx [ 448 ] = xx [ 384 ] * xx [ 70 ]
; xx [ 449 ] = xx [ 386 ] * xx [ 82 ] ; xx [ 450 ] = xx [ 387 ] * xx [ 84 ] ;
pm_math_Vector3_cross_ra ( xx + 1329 , xx + 448 , xx + 451 ) ; xx [ 469 ] = -
xx [ 511 ] ; xx [ 470 ] = - xx [ 512 ] ; xx [ 471 ] = - xx [ 513 ] ; xx [ 472
] = - xx [ 514 ] ; pm_math_Quaternion_compose_ra ( xx + 583 , xx + 469 , xx +
473 ) ; xx [ 448 ] = xx [ 342 ] ; xx [ 449 ] = xx [ 351 ] ; xx [ 450 ] = xx [
824 ] ; pm_math_Quaternion_xform_ra ( xx + 473 , xx + 448 , xx + 469 ) ;
pm_math_Vector3_cross_ra ( xx + 794 , xx + 775 , xx + 448 ) ; xx [ 342 ] = xx
[ 451 ] - xx [ 469 ] + xx [ 70 ] * xx [ 448 ] ; xx [ 351 ] = xx [ 452 ] - xx
[ 470 ] + xx [ 82 ] * xx [ 449 ] ; xx [ 430 ] = xx [ 453 ] - xx [ 471 ] + xx
[ 84 ] * xx [ 450 ] ; xx [ 448 ] = xx [ 342 ] ; xx [ 449 ] = xx [ 351 ] ; xx
[ 450 ] = xx [ 430 ] ; xx [ 451 ] = xx [ 794 ] + xx [ 384 ] ; xx [ 452 ] = xx
[ 795 ] + xx [ 386 ] ; xx [ 453 ] = xx [ 796 ] + xx [ 387 ] ;
pm_math_Vector3_cross_ra ( xx + 451 , xx + 846 , xx + 469 ) ;
pm_math_Vector3_cross_ra ( xx + 762 , xx + 319 , xx + 451 ) ;
pm_math_Vector3_cross_ra ( xx + 762 , xx + 451 , xx + 472 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 519 , xx + 472 , xx + 451 ) ; xx [
472 ] = ( xx [ 469 ] + xx [ 451 ] ) * xx [ 100 ] ; xx [ 473 ] = ( xx [ 470 ]
+ xx [ 452 ] ) * xx [ 100 ] ; xx [ 474 ] = ( xx [ 471 ] + xx [ 453 ] ) * xx [
100 ] ; xx [ 384 ] = xx [ 436 ] * xx [ 432 ] * state [ 31 ] - xx [ 289 ] *
state [ 34 ] - xx [ 447 ] * xx [ 433 ] - ( pm_math_Vector3_dot_ra ( xx + 93 ,
xx + 448 ) + pm_math_Vector3_dot_ra ( xx + 181 , xx + 472 ) ) ; xx [ 386 ] =
xx [ 436 ] * xx [ 432 ] * state [ 32 ] - xx [ 289 ] * state [ 35 ] - xx [ 447
] * xx [ 437 ] - ( pm_math_Vector3_dot_ra ( xx + 167 , xx + 448 ) +
pm_math_Vector3_dot_ra ( xx + 215 , xx + 472 ) ) ; xx [ 387 ] = xx [ 436 ] *
xx [ 432 ] * state [ 33 ] - xx [ 289 ] * state [ 36 ] - ( xx [ 351 ] * xx [
75 ] - xx [ 342 ] * xx [ 83 ] + xx [ 430 ] + pm_math_Vector3_dot_ra ( xx +
227 , xx + 472 ) ) ; xx [ 447 ] = xx [ 384 ] ; xx [ 448 ] = xx [ 386 ] ; xx [
449 ] = xx [ 387 ] ; solveSymmetricPosDef ( xx + 529 , xx + 447 , 3 , 1 , xx
+ 450 , xx + 453 ) ; solveSymmetricPosDef ( xx + 529 , xx + 1339 , 3 , 6 , xx
+ 1384 , xx + 447 ) ; xx [ 447 ] = xx [ 1384 ] ; xx [ 448 ] = xx [ 1387 ] ;
xx [ 449 ] = xx [ 1390 ] ; xx [ 453 ] = - ( xx [ 139 ] * inputDdot [ 4 ] ) ;
xx [ 454 ] = xx [ 144 ] * inputDdot [ 4 ] ; xx [ 455 ] = xx [ 145 ] *
inputDdot [ 4 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 519 , xx + 453 ,
xx + 469 ) ; xx [ 472 ] = xx [ 1393 ] ; xx [ 473 ] = xx [ 1396 ] ; xx [ 474 ]
= xx [ 1399 ] ; xx [ 342 ] = xx [ 26 ] * xx [ 516 ] ; xx [ 351 ] = xx [ 26 ]
* xx [ 517 ] ; xx [ 511 ] = - ( xx [ 134 ] * inputDot [ 4 ] ) ; xx [ 512 ] =
xx [ 179 ] * inputDot [ 4 ] ; xx [ 513 ] = - ( xx [ 210 ] * inputDot [ 4 ] )
; pm_math_Vector3_cross_ra ( xx + 762 , xx + 511 , xx + 775 ) ;
pm_math_Vector3_cross_ra ( xx + 453 , xx + 319 , xx + 511 ) ; xx [ 319 ] = xx
[ 7 ] * ( xx [ 518 ] * xx [ 342 ] - xx [ 515 ] * xx [ 351 ] ) + xx [ 775 ] -
xx [ 134 ] * inputDdot [ 4 ] + xx [ 511 ] ; xx [ 320 ] = ( xx [ 515 ] * xx [
342 ] + xx [ 518 ] * xx [ 351 ] ) * xx [ 7 ] + xx [ 776 ] + xx [ 179 ] *
inputDdot [ 4 ] + xx [ 512 ] ; xx [ 321 ] = xx [ 777 ] - xx [ 210 ] *
inputDdot [ 4 ] - ( xx [ 516 ] * xx [ 342 ] + xx [ 517 ] * xx [ 351 ] ) * xx
[ 7 ] + xx [ 513 ] + xx [ 26 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
519 , xx + 319 , xx + 453 ) ; xx [ 319 ] = pm_math_Vector3_dot_ra ( xx + 447
, xx + 469 ) + pm_math_Vector3_dot_ra ( xx + 472 , xx + 453 ) ; xx [ 320 ] =
xx [ 450 ] - xx [ 319 ] ; xx [ 447 ] = xx [ 1385 ] ; xx [ 448 ] = xx [ 1388 ]
; xx [ 449 ] = xx [ 1391 ] ; xx [ 472 ] = xx [ 1394 ] ; xx [ 473 ] = xx [
1397 ] ; xx [ 474 ] = xx [ 1400 ] ; xx [ 321 ] = pm_math_Vector3_dot_ra ( xx
+ 447 , xx + 469 ) + pm_math_Vector3_dot_ra ( xx + 472 , xx + 453 ) ; xx [
342 ] = xx [ 451 ] - xx [ 321 ] ; xx [ 447 ] = xx [ 1386 ] ; xx [ 448 ] = xx
[ 1389 ] ; xx [ 449 ] = xx [ 1392 ] ; xx [ 472 ] = xx [ 1395 ] ; xx [ 473 ] =
xx [ 1398 ] ; xx [ 474 ] = xx [ 1401 ] ; xx [ 351 ] = pm_math_Vector3_dot_ra
( xx + 447 , xx + 469 ) + pm_math_Vector3_dot_ra ( xx + 472 , xx + 453 ) ; xx
[ 430 ] = xx [ 452 ] - xx [ 351 ] ; xx [ 432 ] = xx [ 299 ] - xx [ 7 ] * ( xx
[ 346 ] * xx [ 222 ] + xx [ 303 ] * xx [ 302 ] ) ; xx [ 222 ] = xx [ 343 ] *
xx [ 53 ] + xx [ 380 ] * xx [ 54 ] ; pm_math_Quaternion_inverseXform_ra ( xx
+ 604 , xx + 140 , xx + 447 ) ; pm_math_Vector3_cross_ra ( xx + 447 , xx +
187 , xx + 450 ) ; pm_math_Quaternion_xform_ra ( xx + 594 , xx + 450 , xx +
447 ) ; pm_math_Quaternion_xform_ra ( xx + 604 , xx + 236 , xx + 450 ) ; xx [
453 ] = xx [ 86 ] + xx [ 450 ] ; xx [ 454 ] = xx [ 127 ] + xx [ 451 ] ; xx [
455 ] = xx [ 452 ] - xx [ 133 ] ; pm_math_Vector3_cross_ra ( xx + 140 , xx +
453 , xx + 450 ) ; pm_math_Quaternion_xform_ra ( xx + 600 , xx + 450 , xx +
469 ) ; pm_math_Quaternion_xform_ra ( xx + 600 , xx + 241 , xx + 450 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 1357 , xx + 212 , xx + 472 ) ; xx [ 299 ] =
xx [ 601 ] * xx [ 603 ] ; xx [ 302 ] = xx [ 600 ] * xx [ 602 ] ; xx [ 303 ] =
( xx [ 299 ] + xx [ 302 ] ) * xx [ 7 ] ; xx [ 343 ] = xx [ 600 ] * xx [ 600 ]
; xx [ 346 ] = ( xx [ 343 ] + xx [ 601 ] * xx [ 601 ] ) * xx [ 7 ] - xx [ 0 ]
; xx [ 380 ] = xx [ 303 ] * xx [ 588 ] + xx [ 639 ] * xx [ 346 ] ; xx [ 433 ]
= xx [ 601 ] * xx [ 602 ] ; xx [ 436 ] = xx [ 600 ] * xx [ 603 ] ; xx [ 437 ]
= xx [ 7 ] * ( xx [ 433 ] - xx [ 436 ] ) ; xx [ 445 ] = xx [ 589 ] * xx [ 346
] + xx [ 588 ] * xx [ 437 ] ; xx [ 466 ] = xx [ 639 ] * xx [ 437 ] - xx [ 303
] * xx [ 589 ] ; xx [ 475 ] = xx [ 602 ] * xx [ 603 ] ; xx [ 476 ] = xx [ 600
] * xx [ 601 ] ; xx [ 511 ] = xx [ 7 ] * ( xx [ 475 ] - xx [ 476 ] ) ; xx [
512 ] = ( xx [ 433 ] + xx [ 436 ] ) * xx [ 7 ] ; xx [ 433 ] = xx [ 588 ] * xx
[ 511 ] + xx [ 512 ] * xx [ 639 ] ; xx [ 436 ] = ( xx [ 343 ] + xx [ 602 ] *
xx [ 602 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 513 ] = xx [ 512 ] * xx [ 589 ] +
xx [ 588 ] * xx [ 436 ] ; xx [ 514 ] = xx [ 639 ] * xx [ 436 ] - xx [ 589 ] *
xx [ 511 ] ; xx [ 515 ] = ( xx [ 343 ] + xx [ 603 ] * xx [ 603 ] ) * xx [ 7 ]
- xx [ 0 ] ; xx [ 343 ] = xx [ 7 ] * ( xx [ 299 ] - xx [ 302 ] ) ; xx [ 299 ]
= xx [ 588 ] * xx [ 515 ] + xx [ 639 ] * xx [ 343 ] ; xx [ 302 ] = ( xx [ 475
] + xx [ 476 ] ) * xx [ 7 ] ; xx [ 475 ] = xx [ 589 ] * xx [ 343 ] + xx [ 302
] * xx [ 588 ] ; xx [ 476 ] = xx [ 302 ] * xx [ 639 ] - xx [ 589 ] * xx [ 515
] ; xx [ 1357 ] = - ( xx [ 639 ] * xx [ 380 ] + xx [ 589 ] * xx [ 445 ] ) ;
xx [ 1358 ] = - ( xx [ 588 ] * xx [ 445 ] + xx [ 639 ] * xx [ 466 ] ) ; xx [
1359 ] = xx [ 589 ] * xx [ 466 ] - xx [ 588 ] * xx [ 380 ] ; xx [ 1360 ] = -
( xx [ 639 ] * xx [ 433 ] + xx [ 589 ] * xx [ 513 ] ) ; xx [ 1361 ] = - ( xx
[ 588 ] * xx [ 513 ] + xx [ 639 ] * xx [ 514 ] ) ; xx [ 1362 ] = xx [ 589 ] *
xx [ 514 ] - xx [ 588 ] * xx [ 433 ] ; xx [ 1363 ] = - ( xx [ 639 ] * xx [
299 ] + xx [ 589 ] * xx [ 475 ] ) ; xx [ 1364 ] = - ( xx [ 588 ] * xx [ 475 ]
+ xx [ 639 ] * xx [ 476 ] ) ; xx [ 1365 ] = xx [ 589 ] * xx [ 476 ] - xx [
588 ] * xx [ 299 ] ; xx [ 299 ] = xx [ 604 ] * xx [ 604 ] ; xx [ 380 ] = ( xx
[ 299 ] + xx [ 605 ] * xx [ 605 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 433 ] = xx [
605 ] * xx [ 606 ] ; xx [ 445 ] = xx [ 604 ] * xx [ 607 ] ; xx [ 466 ] = xx [
7 ] * ( xx [ 433 ] - xx [ 445 ] ) ; xx [ 475 ] = xx [ 605 ] * xx [ 607 ] ; xx
[ 476 ] = xx [ 604 ] * xx [ 606 ] ; xx [ 513 ] = ( xx [ 475 ] + xx [ 476 ] )
* xx [ 7 ] ; xx [ 514 ] = ( xx [ 433 ] + xx [ 445 ] ) * xx [ 7 ] ; xx [ 433 ]
= ( xx [ 299 ] + xx [ 606 ] * xx [ 606 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 445 ]
= xx [ 606 ] * xx [ 607 ] ; xx [ 516 ] = xx [ 604 ] * xx [ 605 ] ; xx [ 517 ]
= xx [ 7 ] * ( xx [ 445 ] - xx [ 516 ] ) ; xx [ 518 ] = xx [ 7 ] * ( xx [ 475
] - xx [ 476 ] ) ; xx [ 475 ] = ( xx [ 445 ] + xx [ 516 ] ) * xx [ 7 ] ; xx [
445 ] = ( xx [ 299 ] + xx [ 607 ] * xx [ 607 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [
1384 ] = xx [ 380 ] ; xx [ 1385 ] = xx [ 466 ] ; xx [ 1386 ] = xx [ 513 ] ;
xx [ 1387 ] = xx [ 514 ] ; xx [ 1388 ] = xx [ 433 ] ; xx [ 1389 ] = xx [ 517
] ; xx [ 1390 ] = xx [ 518 ] ; xx [ 1391 ] = xx [ 475 ] ; xx [ 1392 ] = xx [
445 ] ; pm_math_Matrix3x3_compose_ra ( xx + 1357 , xx + 1384 , xx + 1393 ) ;
xx [ 1384 ] = xx [ 346 ] ; xx [ 1385 ] = xx [ 437 ] ; xx [ 1386 ] = xx [ 303
] ; xx [ 1387 ] = xx [ 512 ] ; xx [ 1388 ] = xx [ 436 ] ; xx [ 1389 ] = xx [
511 ] ; xx [ 1390 ] = xx [ 343 ] ; xx [ 1391 ] = xx [ 302 ] ; xx [ 1392 ] =
xx [ 515 ] ; xx [ 299 ] = xx [ 1378 ] * xx [ 513 ] - xx [ 1380 ] * xx [ 380 ]
; xx [ 302 ] = xx [ 1379 ] * xx [ 380 ] - xx [ 1378 ] * xx [ 466 ] ; xx [ 303
] = xx [ 1380 ] * xx [ 466 ] - xx [ 1379 ] * xx [ 513 ] ; xx [ 343 ] = xx [
1378 ] * xx [ 517 ] - xx [ 1380 ] * xx [ 514 ] ; xx [ 346 ] = xx [ 1379 ] *
xx [ 514 ] - xx [ 1378 ] * xx [ 433 ] ; xx [ 380 ] = xx [ 1380 ] * xx [ 433 ]
- xx [ 1379 ] * xx [ 517 ] ; xx [ 433 ] = xx [ 1378 ] * xx [ 445 ] - xx [
1380 ] * xx [ 518 ] ; xx [ 436 ] = xx [ 1379 ] * xx [ 518 ] - xx [ 1378 ] *
xx [ 475 ] ; xx [ 437 ] = xx [ 1380 ] * xx [ 475 ] - xx [ 1379 ] * xx [ 445 ]
; xx [ 511 ] = xx [ 1380 ] * xx [ 299 ] - xx [ 1379 ] * xx [ 302 ] ; xx [ 512
] = xx [ 1378 ] * xx [ 302 ] - xx [ 1380 ] * xx [ 303 ] ; xx [ 513 ] = xx [
1379 ] * xx [ 303 ] - xx [ 1378 ] * xx [ 299 ] ; xx [ 514 ] = xx [ 1380 ] *
xx [ 343 ] - xx [ 1379 ] * xx [ 346 ] ; xx [ 515 ] = xx [ 1378 ] * xx [ 346 ]
- xx [ 1380 ] * xx [ 380 ] ; xx [ 516 ] = xx [ 1379 ] * xx [ 380 ] - xx [
1378 ] * xx [ 343 ] ; xx [ 517 ] = xx [ 1380 ] * xx [ 433 ] - xx [ 1379 ] *
xx [ 436 ] ; xx [ 518 ] = xx [ 1378 ] * xx [ 436 ] - xx [ 1380 ] * xx [ 437 ]
; xx [ 519 ] = xx [ 1379 ] * xx [ 437 ] - xx [ 1378 ] * xx [ 433 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 1384 , xx + 511 , xx + 1402 ) ; xx [ 299
] = xx [ 594 ] * xx [ 594 ] ; xx [ 302 ] = xx [ 595 ] * xx [ 596 ] ; xx [ 303
] = xx [ 594 ] * xx [ 597 ] ; xx [ 343 ] = xx [ 595 ] * xx [ 597 ] ; xx [ 346
] = xx [ 594 ] * xx [ 596 ] ; xx [ 380 ] = xx [ 596 ] * xx [ 597 ] ; xx [ 433
] = xx [ 594 ] * xx [ 595 ] ; xx [ 1384 ] = ( xx [ 299 ] + xx [ 595 ] * xx [
595 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 1385 ] = xx [ 7 ] * ( xx [ 302 ] - xx [
303 ] ) ; xx [ 1386 ] = ( xx [ 343 ] + xx [ 346 ] ) * xx [ 7 ] ; xx [ 1387 ]
= ( xx [ 302 ] + xx [ 303 ] ) * xx [ 7 ] ; xx [ 1388 ] = ( xx [ 299 ] + xx [
596 ] * xx [ 596 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 1389 ] = xx [ 7 ] * ( xx [
380 ] - xx [ 433 ] ) ; xx [ 1390 ] = xx [ 7 ] * ( xx [ 343 ] - xx [ 346 ] ) ;
xx [ 1391 ] = ( xx [ 380 ] + xx [ 433 ] ) * xx [ 7 ] ; xx [ 1392 ] = ( xx [
299 ] + xx [ 597 ] * xx [ 597 ] ) * xx [ 7 ] - xx [ 0 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 1384 , xx + 1372 , xx + 1419 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 1419 , xx + 1378 , xx + 1384 ) ; xx [
1419 ] = xx [ 1393 ] + xx [ 1402 ] + xx [ 7 ] * xx [ 1384 ] ; xx [ 1420 ] =
xx [ 1394 ] + xx [ 1403 ] + xx [ 7 ] * xx [ 1385 ] ; xx [ 1421 ] = xx [ 1395
] + xx [ 1404 ] + xx [ 7 ] * xx [ 1386 ] ; xx [ 1422 ] = xx [ 1396 ] + xx [
1405 ] + xx [ 7 ] * xx [ 1387 ] ; xx [ 1423 ] = xx [ 1397 ] + xx [ 1406 ] +
xx [ 7 ] * xx [ 1388 ] ; xx [ 1424 ] = xx [ 1398 ] + xx [ 1407 ] + xx [ 7 ] *
xx [ 1389 ] ; xx [ 1425 ] = xx [ 1399 ] + xx [ 1408 ] + xx [ 7 ] * xx [ 1390
] ; xx [ 1426 ] = xx [ 1400 ] + xx [ 1409 ] + xx [ 7 ] * xx [ 1391 ] ; xx [
1427 ] = xx [ 1401 ] + xx [ 1410 ] + xx [ 7 ] * xx [ 1392 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 1419 , xx + 187 , xx + 520 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 1357 , xx + 453 , xx + 594 ) ;
pm_math_Quaternion_xform_ra ( xx + 600 , xx + 504 , xx + 762 ) ; xx [ 299 ] =
inputDot [ 5 ] * inputDot [ 5 ] ; pm_math_Matrix3x3_xform_ra ( xx + 511 , xx
+ 236 , xx + 775 ) ; pm_math_Quaternion_xform_ra ( xx + 600 , xx + 775 , xx +
511 ) ; pm_math_Vector3_cross_ra ( xx + 1378 , xx + 236 , xx + 514 ) ;
pm_math_Quaternion_xform_ra ( xx + 604 , xx + 514 , xx + 517 ) ;
pm_math_Vector3_cross_ra ( xx + 1369 , xx + 517 , xx + 775 ) ;
pm_math_Quaternion_xform_ra ( xx + 600 , xx + 775 , xx + 517 ) ; xx [ 302 ] =
state [ 40 ] * state [ 40 ] ; xx [ 303 ] = sqrt ( state [ 38 ] * state [ 38 ]
+ state [ 39 ] * state [ 39 ] + xx [ 302 ] ) ; xx [ 343 ] = - state [ 37 ] ;
xx [ 346 ] = atan2 ( xx [ 303 ] , fabs ( xx [ 343 ] ) ) * xx [ 161 ] ; xx [
380 ] = xx [ 303 ] == 0.0 ? 0.0 : 1.0 / xx [ 303 ] ; xx [ 303 ] = ( xx [ 343
] < 0.0 ? - 1.0 : + 1.0 ) * xx [ 380 ] ; xx [ 343 ] = ( state [ 37 ] * state
[ 37 ] + xx [ 302 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 343 ] = fabs ( xx [ 343 ]
) > 1.0 ? atan2 ( 0.0 , xx [ 343 ] ) : acos ( xx [ 343 ] ) ; xx [ 302 ] = xx
[ 343 ] - xx [ 76 ] ; if ( xx [ 223 ] > xx [ 302 ] ) xx [ 302 ] = xx [ 223 ]
; xx [ 343 ] = state [ 37 ] * state [ 38 ] + state [ 39 ] * state [ 40 ] ; xx
[ 380 ] = state [ 37 ] * state [ 39 ] - state [ 38 ] * state [ 40 ] ; xx [
433 ] = sqrt ( xx [ 343 ] * xx [ 343 ] + xx [ 380 ] * xx [ 380 ] ) ; bb [ 0 ]
= xx [ 433 ] == xx [ 223 ] ; xx [ 436 ] = xx [ 433 ] == 0.0 ? 0.0 : xx [ 343
] / xx [ 433 ] ; xx [ 343 ] = bb [ 0 ] ? xx [ 0 ] : xx [ 436 ] ; xx [ 436 ] =
xx [ 433 ] == 0.0 ? 0.0 : xx [ 380 ] / xx [ 433 ] ; xx [ 380 ] = bb [ 0 ] ?
xx [ 223 ] : xx [ 436 ] ; xx [ 433 ] = xx [ 302 ] / xx [ 366 ] ; if ( xx [ 0
] < xx [ 433 ] ) xx [ 433 ] = xx [ 0 ] ; xx [ 436 ] = ( xx [ 305 ] * xx [ 302
] + ( xx [ 302 ] == xx [ 223 ] ? xx [ 223 ] : ( xx [ 343 ] * state [ 41 ] +
xx [ 380 ] * state [ 42 ] ) * xx [ 305 ] ) ) * xx [ 433 ] * xx [ 433 ] * ( xx
[ 434 ] - xx [ 7 ] * xx [ 433 ] ) ; if ( xx [ 223 ] > xx [ 436 ] ) xx [ 436 ]
= xx [ 223 ] ; xx [ 775 ] = xx [ 641 ] * xx [ 70 ] ; xx [ 776 ] = xx [ 642 ]
* xx [ 82 ] ; xx [ 777 ] = xx [ 702 ] * xx [ 84 ] ; pm_math_Vector3_cross_ra
( xx + 1381 , xx + 775 , xx + 794 ) ; xx [ 1326 ] = - xx [ 376 ] ; xx [ 1327
] = - xx [ 377 ] ; xx [ 1328 ] = - xx [ 378 ] ; xx [ 1329 ] = - xx [ 379 ] ;
pm_math_Quaternion_compose_ra ( xx + 583 , xx + 1326 , xx + 376 ) ; xx [ 775
] = xx [ 400 ] ; xx [ 776 ] = xx [ 370 ] ; xx [ 777 ] = xx [ 381 ] ;
pm_math_Quaternion_xform_ra ( xx + 376 , xx + 775 , xx + 846 ) ;
pm_math_Vector3_cross_ra ( xx + 1372 , xx + 1378 , xx + 376 ) ; xx [ 302 ] =
xx [ 794 ] - xx [ 846 ] + xx [ 70 ] * xx [ 376 ] ; xx [ 370 ] = xx [ 795 ] -
xx [ 847 ] + xx [ 82 ] * xx [ 377 ] ; xx [ 376 ] = xx [ 796 ] - xx [ 848 ] +
xx [ 84 ] * xx [ 378 ] ; xx [ 377 ] = xx [ 302 ] ; xx [ 378 ] = xx [ 370 ] ;
xx [ 379 ] = xx [ 376 ] ; xx [ 775 ] = xx [ 1372 ] + xx [ 641 ] ; xx [ 776 ]
= xx [ 1373 ] + xx [ 642 ] ; xx [ 777 ] = xx [ 1374 ] + xx [ 702 ] ;
pm_math_Vector3_cross_ra ( xx + 775 , xx + 514 , xx + 794 ) ;
pm_math_Vector3_cross_ra ( xx + 1369 , xx + 453 , xx + 514 ) ;
pm_math_Vector3_cross_ra ( xx + 1369 , xx + 514 , xx + 775 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 604 , xx + 775 , xx + 514 ) ; xx [
775 ] = ( xx [ 794 ] + xx [ 514 ] ) * xx [ 100 ] ; xx [ 776 ] = ( xx [ 795 ]
+ xx [ 515 ] ) * xx [ 100 ] ; xx [ 777 ] = ( xx [ 796 ] + xx [ 516 ] ) * xx [
100 ] ; xx [ 381 ] = xx [ 346 ] * xx [ 303 ] * state [ 38 ] - xx [ 289 ] *
state [ 41 ] - xx [ 436 ] * xx [ 343 ] - ( pm_math_Vector3_dot_ra ( xx + 93 ,
xx + 377 ) + pm_math_Vector3_dot_ra ( xx + 181 , xx + 775 ) ) ; xx [ 343 ] =
xx [ 346 ] * xx [ 303 ] * state [ 39 ] - xx [ 289 ] * state [ 42 ] - xx [ 436
] * xx [ 380 ] - ( pm_math_Vector3_dot_ra ( xx + 167 , xx + 377 ) +
pm_math_Vector3_dot_ra ( xx + 215 , xx + 775 ) ) ; xx [ 377 ] = xx [ 346 ] *
xx [ 303 ] * state [ 40 ] - xx [ 289 ] * state [ 43 ] - ( xx [ 370 ] * xx [
75 ] - xx [ 302 ] * xx [ 83 ] + xx [ 376 ] + pm_math_Vector3_dot_ra ( xx +
227 , xx + 775 ) ) ; xx [ 378 ] = xx [ 381 ] ; xx [ 379 ] = xx [ 343 ] ; xx [
380 ] = xx [ 377 ] ; solveSymmetricPosDef ( xx + 617 , xx + 378 , 3 , 1 , xx
+ 514 , xx + 775 ) ; solveSymmetricPosDef ( xx + 617 , xx + 1339 , 3 , 6 , xx
+ 1378 , xx + 378 ) ; xx [ 378 ] = xx [ 1378 ] ; xx [ 379 ] = xx [ 1381 ] ;
xx [ 380 ] = xx [ 1384 ] ; xx [ 775 ] = - ( xx [ 139 ] * inputDdot [ 5 ] ) ;
xx [ 776 ] = xx [ 144 ] * inputDdot [ 5 ] ; xx [ 777 ] = xx [ 145 ] *
inputDdot [ 5 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 604 , xx + 775 ,
xx + 794 ) ; xx [ 846 ] = xx [ 1387 ] ; xx [ 847 ] = xx [ 1390 ] ; xx [ 848 ]
= xx [ 1393 ] ; xx [ 302 ] = xx [ 26 ] * xx [ 601 ] ; xx [ 303 ] = xx [ 26 ]
* xx [ 602 ] ; xx [ 870 ] = - ( xx [ 134 ] * inputDot [ 5 ] ) ; xx [ 871 ] =
xx [ 179 ] * inputDot [ 5 ] ; xx [ 872 ] = - ( xx [ 210 ] * inputDot [ 5 ] )
; pm_math_Vector3_cross_ra ( xx + 1369 , xx + 870 , xx + 1326 ) ;
pm_math_Vector3_cross_ra ( xx + 775 , xx + 453 , xx + 870 ) ; xx [ 453 ] = xx
[ 7 ] * ( xx [ 603 ] * xx [ 302 ] - xx [ 600 ] * xx [ 303 ] ) + xx [ 1326 ] -
xx [ 134 ] * inputDdot [ 5 ] + xx [ 870 ] ; xx [ 454 ] = ( xx [ 600 ] * xx [
302 ] + xx [ 603 ] * xx [ 303 ] ) * xx [ 7 ] + xx [ 1327 ] + xx [ 179 ] *
inputDdot [ 5 ] + xx [ 871 ] ; xx [ 455 ] = xx [ 1328 ] - xx [ 210 ] *
inputDdot [ 5 ] - ( xx [ 601 ] * xx [ 302 ] + xx [ 602 ] * xx [ 303 ] ) * xx
[ 7 ] + xx [ 872 ] + xx [ 26 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
604 , xx + 453 , xx + 600 ) ; xx [ 302 ] = pm_math_Vector3_dot_ra ( xx + 378
, xx + 794 ) + pm_math_Vector3_dot_ra ( xx + 846 , xx + 600 ) ; xx [ 303 ] =
xx [ 514 ] - xx [ 302 ] ; xx [ 378 ] = xx [ 1379 ] ; xx [ 379 ] = xx [ 1382 ]
; xx [ 380 ] = xx [ 1385 ] ; xx [ 453 ] = xx [ 1388 ] ; xx [ 454 ] = xx [
1391 ] ; xx [ 455 ] = xx [ 1394 ] ; xx [ 346 ] = pm_math_Vector3_dot_ra ( xx
+ 378 , xx + 794 ) + pm_math_Vector3_dot_ra ( xx + 453 , xx + 600 ) ; xx [
370 ] = xx [ 515 ] - xx [ 346 ] ; xx [ 378 ] = xx [ 1380 ] ; xx [ 379 ] = xx
[ 1383 ] ; xx [ 380 ] = xx [ 1386 ] ; xx [ 453 ] = xx [ 1389 ] ; xx [ 454 ] =
xx [ 1392 ] ; xx [ 455 ] = xx [ 1395 ] ; xx [ 376 ] = pm_math_Vector3_dot_ra
( xx + 378 , xx + 794 ) + pm_math_Vector3_dot_ra ( xx + 453 , xx + 600 ) ; xx
[ 378 ] = xx [ 516 ] - xx [ 376 ] ; pm_math_Quaternion_inverseXform_ra ( xx +
790 , xx + 140 , xx + 453 ) ; pm_math_Vector3_cross_ra ( xx + 453 , xx + 187
, xx + 514 ) ; pm_math_Quaternion_xform_ra ( xx + 782 , xx + 514 , xx + 453 )
; pm_math_Quaternion_xform_ra ( xx + 790 , xx + 236 , xx + 514 ) ; xx [ 600 ]
= xx [ 86 ] + xx [ 514 ] ; xx [ 601 ] = xx [ 127 ] + xx [ 515 ] ; xx [ 602 ]
= xx [ 516 ] - xx [ 133 ] ; pm_math_Vector3_cross_ra ( xx + 140 , xx + 600 ,
xx + 514 ) ; pm_math_Quaternion_xform_ra ( xx + 786 , xx + 514 , xx + 603 ) ;
pm_math_Quaternion_xform_ra ( xx + 786 , xx + 241 , xx + 514 ) ; xx [ 379 ] =
xx [ 644 ] * xx [ 644 ] ; xx [ 380 ] = xx [ 629 ] * xx [ 644 ] ; xx [ 400 ] =
xx [ 646 ] * xx [ 636 ] ; xx [ 1357 ] = ( xx [ 379 ] + xx [ 629 ] * xx [ 629
] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 1358 ] = xx [ 667 ] ; xx [ 1359 ] = ( xx [
669 ] + xx [ 668 ] ) * xx [ 7 ] ; xx [ 1360 ] = - ( ( xx [ 666 ] + xx [ 665 ]
) * xx [ 7 ] ) ; xx [ 1361 ] = ( xx [ 379 ] + xx [ 662 ] ) * xx [ 7 ] - xx [
0 ] ; xx [ 1362 ] = xx [ 7 ] * ( xx [ 380 ] - xx [ 400 ] ) ; xx [ 1363 ] = xx
[ 7 ] * ( xx [ 669 ] - xx [ 668 ] ) ; xx [ 1364 ] = - ( ( xx [ 400 ] + xx [
380 ] ) * xx [ 7 ] ) ; xx [ 1365 ] = ( xx [ 379 ] + xx [ 663 ] ) * xx [ 7 ] -
xx [ 0 ] ; xx [ 379 ] = xx [ 664 ] * state [ 47 ] ; xx [ 380 ] = xx [ 7 ] *
xx [ 725 ] * state [ 48 ] ; xx [ 400 ] = xx [ 379 ] + xx [ 380 ] ; xx [ 433 ]
= xx [ 667 ] * state [ 47 ] ; xx [ 436 ] = xx [ 738 ] * state [ 48 ] ; xx [
437 ] = xx [ 433 ] + xx [ 436 ] ; xx [ 445 ] = xx [ 671 ] * state [ 47 ] ; xx
[ 466 ] = xx [ 445 ] + state [ 49 ] ; xx [ 775 ] = xx [ 400 ] ; xx [ 776 ] =
xx [ 437 ] ; xx [ 777 ] = xx [ 466 ] ; pm_math_Matrix3x3_postCross_ra ( xx +
1357 , xx + 775 , xx + 1366 ) ; pm_math_Matrix3x3_postCross_ra ( xx + 1366 ,
xx + 775 , xx + 1378 ) ; xx [ 794 ] = xx [ 379 ] ; xx [ 795 ] = xx [ 433 ] ;
xx [ 796 ] = xx [ 445 ] ; pm_math_Vector3_cross_ra ( xx + 775 , xx + 794 , xx
+ 846 ) ; xx [ 379 ] = xx [ 436 ] * state [ 49 ] - xx [ 846 ] ; xx [ 433 ] =
xx [ 847 ] + xx [ 380 ] * state [ 49 ] ; xx [ 794 ] = xx [ 379 ] ; xx [ 795 ]
= - xx [ 433 ] ; xx [ 796 ] = - xx [ 848 ] ; pm_math_Matrix3x3_postCross_ra (
xx + 1357 , xx + 794 , xx + 1366 ) ; xx [ 380 ] = xx [ 1378 ] + xx [ 1366 ] ;
xx [ 436 ] = 0.5000000000000004 ; xx [ 445 ] = xx [ 1381 ] + xx [ 1369 ] ; xx
[ 475 ] = 0.8660254037844384 ; xx [ 476 ] = xx [ 1379 ] + xx [ 1367 ] ; xx [
566 ] = xx [ 1382 ] + xx [ 1370 ] ; xx [ 588 ] = xx [ 1380 ] + xx [ 1368 ] ;
xx [ 589 ] = xx [ 1383 ] + xx [ 1371 ] ; xx [ 597 ] = xx [ 1384 ] + xx [ 1372
] ; xx [ 606 ] = 0.9999999999999998 ; xx [ 607 ] = xx [ 1386 ] + xx [ 1374 ]
; xx [ 1357 ] = - ( xx [ 380 ] * xx [ 436 ] + xx [ 445 ] * xx [ 475 ] ) ; xx
[ 1358 ] = - ( xx [ 476 ] * xx [ 436 ] + xx [ 566 ] * xx [ 475 ] ) ; xx [
1359 ] = - ( xx [ 588 ] * xx [ 436 ] + xx [ 589 ] * xx [ 475 ] ) ; xx [ 1360
] = xx [ 380 ] * xx [ 475 ] - xx [ 445 ] * xx [ 436 ] ; xx [ 1361 ] = xx [
476 ] * xx [ 475 ] - xx [ 566 ] * xx [ 436 ] ; xx [ 1362 ] = xx [ 588 ] * xx
[ 475 ] - xx [ 589 ] * xx [ 436 ] ; xx [ 1363 ] = xx [ 597 ] * xx [ 606 ] ;
xx [ 1364 ] = ( xx [ 1385 ] + xx [ 1373 ] ) * xx [ 606 ] ; xx [ 1365 ] = xx [
607 ] * xx [ 606 ] ; pm_math_Matrix3x3_xform_ra ( xx + 1357 , xx + 119 , xx +
794 ) ; xx [ 119 ] = xx [ 380 ] * xx [ 53 ] + xx [ 588 ] * xx [ 54 ] ; xx [
120 ] = xx [ 445 ] * xx [ 53 ] + xx [ 589 ] * xx [ 54 ] ; xx [ 121 ] = xx [
120 ] * xx [ 630 ] ; xx [ 380 ] = xx [ 119 ] * xx [ 630 ] ; xx [ 436 ] = xx [
119 ] - ( xx [ 587 ] * xx [ 121 ] + xx [ 630 ] * xx [ 380 ] ) * xx [ 7 ] ; xx
[ 119 ] = xx [ 145 ] * inputDot [ 7 ] ; xx [ 445 ] = xx [ 787 ] * xx [ 789 ]
; xx [ 475 ] = xx [ 786 ] * xx [ 788 ] ; xx [ 476 ] = ( xx [ 445 ] + xx [ 475
] ) * xx [ 7 ] ; xx [ 566 ] = xx [ 139 ] * inputDot [ 7 ] ; xx [ 588 ] = xx [
786 ] * xx [ 786 ] ; xx [ 589 ] = ( xx [ 588 ] + xx [ 787 ] * xx [ 787 ] ) *
xx [ 7 ] - xx [ 0 ] ; xx [ 606 ] = xx [ 476 ] * xx [ 566 ] + xx [ 119 ] * xx
[ 589 ] ; xx [ 639 ] = xx [ 144 ] * inputDot [ 7 ] ; xx [ 641 ] = xx [ 787 ]
* xx [ 788 ] ; xx [ 642 ] = xx [ 786 ] * xx [ 789 ] ; xx [ 662 ] = xx [ 7 ] *
( xx [ 641 ] - xx [ 642 ] ) ; xx [ 663 ] = xx [ 639 ] * xx [ 589 ] + xx [ 566
] * xx [ 662 ] ; xx [ 665 ] = xx [ 119 ] * xx [ 662 ] - xx [ 476 ] * xx [ 639
] ; xx [ 666 ] = xx [ 788 ] * xx [ 789 ] ; xx [ 668 ] = xx [ 786 ] * xx [ 787
] ; xx [ 669 ] = xx [ 7 ] * ( xx [ 666 ] - xx [ 668 ] ) ; xx [ 702 ] = ( xx [
641 ] + xx [ 642 ] ) * xx [ 7 ] ; xx [ 641 ] = xx [ 566 ] * xx [ 669 ] + xx [
702 ] * xx [ 119 ] ; xx [ 642 ] = ( xx [ 588 ] + xx [ 788 ] * xx [ 788 ] ) *
xx [ 7 ] - xx [ 0 ] ; xx [ 725 ] = xx [ 702 ] * xx [ 639 ] + xx [ 566 ] * xx
[ 642 ] ; xx [ 735 ] = xx [ 119 ] * xx [ 642 ] - xx [ 639 ] * xx [ 669 ] ; xx
[ 819 ] = ( xx [ 588 ] + xx [ 789 ] * xx [ 789 ] ) * xx [ 7 ] - xx [ 0 ] ; xx
[ 588 ] = xx [ 7 ] * ( xx [ 445 ] - xx [ 475 ] ) ; xx [ 445 ] = xx [ 566 ] *
xx [ 819 ] + xx [ 119 ] * xx [ 588 ] ; xx [ 475 ] = ( xx [ 666 ] + xx [ 668 ]
) * xx [ 7 ] ; xx [ 666 ] = xx [ 639 ] * xx [ 588 ] + xx [ 475 ] * xx [ 566 ]
; xx [ 668 ] = xx [ 475 ] * xx [ 119 ] - xx [ 639 ] * xx [ 819 ] ; xx [ 1366
] = - ( xx [ 119 ] * xx [ 606 ] + xx [ 639 ] * xx [ 663 ] ) ; xx [ 1367 ] = -
( xx [ 566 ] * xx [ 663 ] + xx [ 119 ] * xx [ 665 ] ) ; xx [ 1368 ] = xx [
639 ] * xx [ 665 ] - xx [ 566 ] * xx [ 606 ] ; xx [ 1369 ] = - ( xx [ 119 ] *
xx [ 641 ] + xx [ 639 ] * xx [ 725 ] ) ; xx [ 1370 ] = - ( xx [ 566 ] * xx [
725 ] + xx [ 119 ] * xx [ 735 ] ) ; xx [ 1371 ] = xx [ 639 ] * xx [ 735 ] -
xx [ 566 ] * xx [ 641 ] ; xx [ 1372 ] = - ( xx [ 119 ] * xx [ 445 ] + xx [
639 ] * xx [ 666 ] ) ; xx [ 1373 ] = - ( xx [ 566 ] * xx [ 666 ] + xx [ 119 ]
* xx [ 668 ] ) ; xx [ 1374 ] = xx [ 639 ] * xx [ 668 ] - xx [ 566 ] * xx [
445 ] ; xx [ 445 ] = xx [ 790 ] * xx [ 790 ] ; xx [ 606 ] = ( xx [ 445 ] + xx
[ 791 ] * xx [ 791 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 641 ] = xx [ 791 ] * xx [
792 ] ; xx [ 663 ] = xx [ 790 ] * xx [ 793 ] ; xx [ 665 ] = xx [ 7 ] * ( xx [
641 ] - xx [ 663 ] ) ; xx [ 666 ] = xx [ 791 ] * xx [ 793 ] ; xx [ 668 ] = xx
[ 790 ] * xx [ 792 ] ; xx [ 725 ] = ( xx [ 666 ] + xx [ 668 ] ) * xx [ 7 ] ;
xx [ 735 ] = ( xx [ 641 ] + xx [ 663 ] ) * xx [ 7 ] ; xx [ 641 ] = ( xx [ 445
] + xx [ 792 ] * xx [ 792 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 663 ] = xx [ 792 ]
* xx [ 793 ] ; xx [ 824 ] = xx [ 790 ] * xx [ 791 ] ; xx [ 832 ] = xx [ 7 ] *
( xx [ 663 ] - xx [ 824 ] ) ; xx [ 846 ] = xx [ 7 ] * ( xx [ 666 ] - xx [ 668
] ) ; xx [ 666 ] = ( xx [ 663 ] + xx [ 824 ] ) * xx [ 7 ] ; xx [ 663 ] = ( xx
[ 445 ] + xx [ 793 ] * xx [ 793 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 1378 ] = xx
[ 606 ] ; xx [ 1379 ] = xx [ 665 ] ; xx [ 1380 ] = xx [ 725 ] ; xx [ 1381 ] =
xx [ 735 ] ; xx [ 1382 ] = xx [ 641 ] ; xx [ 1383 ] = xx [ 832 ] ; xx [ 1384
] = xx [ 846 ] ; xx [ 1385 ] = xx [ 666 ] ; xx [ 1386 ] = xx [ 663 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 1366 , xx + 1378 , xx + 1387 ) ; xx [
1378 ] = xx [ 589 ] ; xx [ 1379 ] = xx [ 662 ] ; xx [ 1380 ] = xx [ 476 ] ;
xx [ 1381 ] = xx [ 702 ] ; xx [ 1382 ] = xx [ 642 ] ; xx [ 1383 ] = xx [ 669
] ; xx [ 1384 ] = xx [ 588 ] ; xx [ 1385 ] = xx [ 475 ] ; xx [ 1386 ] = xx [
819 ] ; xx [ 870 ] = state [ 56 ] ; xx [ 871 ] = state [ 57 ] ; xx [ 872 ] =
state [ 58 ] ; pm_math_Quaternion_xform_ra ( xx + 163 , xx + 870 , xx + 1326
) ; xx [ 445 ] = xx [ 1326 ] * xx [ 725 ] - xx [ 1328 ] * xx [ 606 ] ; xx [
475 ] = xx [ 1327 ] * xx [ 606 ] - xx [ 1326 ] * xx [ 665 ] ; xx [ 476 ] = xx
[ 1328 ] * xx [ 665 ] - xx [ 1327 ] * xx [ 725 ] ; xx [ 588 ] = xx [ 1326 ] *
xx [ 832 ] - xx [ 1328 ] * xx [ 735 ] ; xx [ 589 ] = xx [ 1327 ] * xx [ 735 ]
- xx [ 1326 ] * xx [ 641 ] ; xx [ 606 ] = xx [ 1328 ] * xx [ 641 ] - xx [
1327 ] * xx [ 832 ] ; xx [ 641 ] = xx [ 1326 ] * xx [ 663 ] - xx [ 1328 ] *
xx [ 846 ] ; xx [ 642 ] = xx [ 1327 ] * xx [ 846 ] - xx [ 1326 ] * xx [ 666 ]
; xx [ 662 ] = xx [ 1328 ] * xx [ 666 ] - xx [ 1327 ] * xx [ 663 ] ; xx [
1396 ] = xx [ 1328 ] * xx [ 445 ] - xx [ 1327 ] * xx [ 475 ] ; xx [ 1397 ] =
xx [ 1326 ] * xx [ 475 ] - xx [ 1328 ] * xx [ 476 ] ; xx [ 1398 ] = xx [ 1327
] * xx [ 476 ] - xx [ 1326 ] * xx [ 445 ] ; xx [ 1399 ] = xx [ 1328 ] * xx [
588 ] - xx [ 1327 ] * xx [ 589 ] ; xx [ 1400 ] = xx [ 1326 ] * xx [ 589 ] -
xx [ 1328 ] * xx [ 606 ] ; xx [ 1401 ] = xx [ 1327 ] * xx [ 606 ] - xx [ 1326
] * xx [ 588 ] ; xx [ 1402 ] = xx [ 1328 ] * xx [ 641 ] - xx [ 1327 ] * xx [
642 ] ; xx [ 1403 ] = xx [ 1326 ] * xx [ 642 ] - xx [ 1328 ] * xx [ 662 ] ;
xx [ 1404 ] = xx [ 1327 ] * xx [ 662 ] - xx [ 1326 ] * xx [ 641 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 1378 , xx + 1396 , xx + 1419 ) ; xx [ 445
] = xx [ 782 ] * xx [ 782 ] ; xx [ 475 ] = xx [ 783 ] * xx [ 784 ] ; xx [ 476
] = xx [ 782 ] * xx [ 785 ] ; xx [ 588 ] = xx [ 783 ] * xx [ 785 ] ; xx [ 589
] = xx [ 782 ] * xx [ 784 ] ; xx [ 606 ] = xx [ 784 ] * xx [ 785 ] ; xx [ 641
] = xx [ 782 ] * xx [ 783 ] ; xx [ 1378 ] = ( xx [ 445 ] + xx [ 783 ] * xx [
783 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 1379 ] = xx [ 7 ] * ( xx [ 475 ] - xx [
476 ] ) ; xx [ 1380 ] = ( xx [ 588 ] + xx [ 589 ] ) * xx [ 7 ] ; xx [ 1381 ]
= ( xx [ 475 ] + xx [ 476 ] ) * xx [ 7 ] ; xx [ 1382 ] = ( xx [ 445 ] + xx [
784 ] * xx [ 784 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 1383 ] = xx [ 7 ] * ( xx [
606 ] - xx [ 641 ] ) ; xx [ 1384 ] = xx [ 7 ] * ( xx [ 588 ] - xx [ 589 ] ) ;
xx [ 1385 ] = ( xx [ 606 ] + xx [ 641 ] ) * xx [ 7 ] ; xx [ 1386 ] = ( xx [
445 ] + xx [ 785 ] * xx [ 785 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 1329 ] = - xx
[ 566 ] ; xx [ 1330 ] = xx [ 639 ] ; xx [ 1331 ] = xx [ 119 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 790 , xx + 1329 , xx + 1405 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 1378 , xx + 1405 , xx + 1428 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 1428 , xx + 1326 , xx + 1378 ) ; xx [
1428 ] = xx [ 1387 ] + xx [ 1419 ] + xx [ 7 ] * xx [ 1378 ] ; xx [ 1429 ] =
xx [ 1388 ] + xx [ 1420 ] + xx [ 7 ] * xx [ 1379 ] ; xx [ 1430 ] = xx [ 1389
] + xx [ 1421 ] + xx [ 7 ] * xx [ 1380 ] ; xx [ 1431 ] = xx [ 1390 ] + xx [
1422 ] + xx [ 7 ] * xx [ 1381 ] ; xx [ 1432 ] = xx [ 1391 ] + xx [ 1423 ] +
xx [ 7 ] * xx [ 1382 ] ; xx [ 1433 ] = xx [ 1392 ] + xx [ 1424 ] + xx [ 7 ] *
xx [ 1383 ] ; xx [ 1434 ] = xx [ 1393 ] + xx [ 1425 ] + xx [ 7 ] * xx [ 1384
] ; xx [ 1435 ] = xx [ 1394 ] + xx [ 1426 ] + xx [ 7 ] * xx [ 1385 ] ; xx [
1436 ] = xx [ 1395 ] + xx [ 1427 ] + xx [ 7 ] * xx [ 1386 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 1428 , xx + 187 , xx + 1378 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 1366 , xx + 600 , xx + 1381 ) ;
pm_math_Quaternion_xform_ra ( xx + 786 , xx + 504 , xx + 1366 ) ; xx [ 119 ]
= inputDot [ 7 ] * inputDot [ 7 ] ; pm_math_Matrix3x3_xform_ra ( xx + 1396 ,
xx + 236 , xx + 1369 ) ; pm_math_Quaternion_xform_ra ( xx + 786 , xx + 1369 ,
xx + 1372 ) ; pm_math_Vector3_cross_ra ( xx + 1326 , xx + 236 , xx + 1369 ) ;
pm_math_Quaternion_xform_ra ( xx + 790 , xx + 1369 , xx + 1384 ) ;
pm_math_Vector3_cross_ra ( xx + 1329 , xx + 1384 , xx + 1387 ) ;
pm_math_Quaternion_xform_ra ( xx + 786 , xx + 1387 , xx + 1384 ) ; xx [ 445 ]
= xx [ 15 ] * state [ 44 ] ; xx [ 1387 ] = xx [ 400 ] * xx [ 22 ] ; xx [ 1388
] = xx [ 437 ] * xx [ 58 ] ; xx [ 1389 ] = xx [ 466 ] * xx [ 28 ] ;
pm_math_Vector3_cross_ra ( xx + 775 , xx + 1387 , xx + 1390 ) ;
pm_math_Quaternion_inverseCompose_ra ( xx + 782 , xx + 658 , xx + 1393 ) ;
pm_math_Quaternion_inverseCompose_ra ( xx + 583 , xx + 1393 , xx + 782 ) ; xx
[ 22 ] = xx [ 785 ] * xx [ 785 ] ; xx [ 28 ] = sqrt ( xx [ 783 ] * xx [ 783 ]
+ xx [ 784 ] * xx [ 784 ] + xx [ 22 ] ) ; xx [ 58 ] = atan2 ( xx [ 28 ] ,
fabs ( xx [ 782 ] ) ) * xx [ 161 ] ; xx [ 475 ] = xx [ 28 ] == 0.0 ? 0.0 :
1.0 / xx [ 28 ] ; xx [ 28 ] = ( xx [ 782 ] < 0.0 ? - 1.0 : + 1.0 ) * xx [ 475
] ; xx [ 475 ] = xx [ 1405 ] + xx [ 1326 ] ; xx [ 476 ] = xx [ 1406 ] + xx [
1327 ] ; xx [ 566 ] = xx [ 1407 ] + xx [ 1328 ] ; xx [ 1387 ] = xx [ 475 ] ;
xx [ 1388 ] = xx [ 476 ] ; xx [ 1389 ] = xx [ 566 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 1393 , xx + 1387 , xx + 1397 ) ; xx
[ 588 ] = xx [ 400 ] - xx [ 1397 ] ; xx [ 589 ] = ( xx [ 782 ] * xx [ 782 ] +
xx [ 22 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 589 ] = fabs ( xx [ 589 ] ) > 1.0 ?
atan2 ( 0.0 , xx [ 589 ] ) : acos ( xx [ 589 ] ) ; xx [ 22 ] = xx [ 589 ] -
xx [ 76 ] ; if ( xx [ 223 ] > xx [ 22 ] ) xx [ 22 ] = xx [ 223 ] ; xx [ 589 ]
= xx [ 782 ] * xx [ 783 ] + xx [ 784 ] * xx [ 785 ] ; xx [ 606 ] = xx [ 782 ]
* xx [ 784 ] - xx [ 783 ] * xx [ 785 ] ; xx [ 639 ] = sqrt ( xx [ 589 ] * xx
[ 589 ] + xx [ 606 ] * xx [ 606 ] ) ; bb [ 0 ] = xx [ 639 ] == xx [ 223 ] ;
xx [ 641 ] = xx [ 639 ] == 0.0 ? 0.0 : xx [ 589 ] / xx [ 639 ] ; xx [ 589 ] =
bb [ 0 ] ? xx [ 0 ] : xx [ 641 ] ; xx [ 641 ] = xx [ 437 ] - xx [ 1398 ] ; xx
[ 642 ] = xx [ 639 ] == 0.0 ? 0.0 : xx [ 606 ] / xx [ 639 ] ; xx [ 606 ] = bb
[ 0 ] ? xx [ 223 ] : xx [ 642 ] ; xx [ 639 ] = xx [ 22 ] / xx [ 366 ] ; if (
xx [ 0 ] < xx [ 639 ] ) xx [ 639 ] = xx [ 0 ] ; xx [ 642 ] = ( xx [ 305 ] *
xx [ 22 ] + ( xx [ 22 ] == xx [ 223 ] ? xx [ 223 ] : ( xx [ 588 ] * xx [ 589
] + xx [ 641 ] * xx [ 606 ] ) * xx [ 305 ] ) ) * xx [ 639 ] * xx [ 639 ] * (
xx [ 434 ] - xx [ 7 ] * xx [ 639 ] ) ; if ( xx [ 223 ] > xx [ 642 ] ) xx [
642 ] = xx [ 223 ] ; xx [ 22 ] = xx [ 58 ] * xx [ 783 ] * xx [ 28 ] + xx [
289 ] * xx [ 588 ] + xx [ 642 ] * xx [ 589 ] ;
pm_math_Quaternion_inverseCompose_ra ( xx + 149 , xx + 658 , xx + 1393 ) ;
pm_math_Quaternion_inverseCompose_ra ( xx + 583 , xx + 1393 , xx + 658 ) ; xx
[ 588 ] = xx [ 661 ] * xx [ 661 ] ; xx [ 589 ] = sqrt ( xx [ 659 ] * xx [ 659
] + xx [ 660 ] * xx [ 660 ] + xx [ 588 ] ) ; xx [ 639 ] = atan2 ( xx [ 589 ]
, fabs ( xx [ 658 ] ) ) * xx [ 161 ] ; xx [ 662 ] = xx [ 589 ] == 0.0 ? 0.0 :
1.0 / xx [ 589 ] ; xx [ 589 ] = ( xx [ 658 ] < 0.0 ? - 1.0 : + 1.0 ) * xx [
662 ] ; xx [ 662 ] = xx [ 139 ] * inputDot [ 8 ] ; xx [ 663 ] = xx [ 144 ] *
inputDot [ 8 ] ; xx [ 665 ] = xx [ 145 ] * inputDot [ 8 ] ; xx [ 1400 ] = -
xx [ 662 ] ; xx [ 1401 ] = xx [ 663 ] ; xx [ 1402 ] = xx [ 665 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 863 , xx + 1400 , xx + 1408 ) ; xx
[ 1419 ] = state [ 63 ] ; xx [ 1420 ] = state [ 64 ] ; xx [ 1421 ] = state [
65 ] ; pm_math_Quaternion_xform_ra ( xx + 163 , xx + 1419 , xx + 1422 ) ; xx
[ 163 ] = xx [ 1408 ] + xx [ 1422 ] ; xx [ 164 ] = xx [ 1409 ] + xx [ 1423 ]
; xx [ 165 ] = xx [ 1410 ] + xx [ 1424 ] ; pm_math_Quaternion_inverseXform_ra
( xx + 1393 , xx + 163 , xx + 1425 ) ; xx [ 166 ] = xx [ 400 ] - xx [ 1425 ]
; xx [ 666 ] = ( xx [ 658 ] * xx [ 658 ] + xx [ 588 ] ) * xx [ 7 ] - xx [ 0 ]
; xx [ 666 ] = fabs ( xx [ 666 ] ) > 1.0 ? atan2 ( 0.0 , xx [ 666 ] ) : acos
( xx [ 666 ] ) ; xx [ 588 ] = xx [ 666 ] - xx [ 76 ] ; if ( xx [ 223 ] > xx [
588 ] ) xx [ 588 ] = xx [ 223 ] ; xx [ 666 ] = xx [ 658 ] * xx [ 659 ] + xx [
660 ] * xx [ 661 ] ; xx [ 668 ] = xx [ 658 ] * xx [ 660 ] - xx [ 659 ] * xx [
661 ] ; xx [ 669 ] = sqrt ( xx [ 666 ] * xx [ 666 ] + xx [ 668 ] * xx [ 668 ]
) ; bb [ 0 ] = xx [ 669 ] == xx [ 223 ] ; xx [ 702 ] = xx [ 669 ] == 0.0 ?
0.0 : xx [ 666 ] / xx [ 669 ] ; xx [ 666 ] = bb [ 0 ] ? xx [ 0 ] : xx [ 702 ]
; xx [ 702 ] = xx [ 437 ] - xx [ 1426 ] ; xx [ 725 ] = xx [ 669 ] == 0.0 ?
0.0 : xx [ 668 ] / xx [ 669 ] ; xx [ 668 ] = bb [ 0 ] ? xx [ 223 ] : xx [ 725
] ; xx [ 669 ] = xx [ 588 ] / xx [ 366 ] ; if ( xx [ 0 ] < xx [ 669 ] ) xx [
669 ] = xx [ 0 ] ; xx [ 725 ] = ( xx [ 305 ] * xx [ 588 ] + ( xx [ 588 ] ==
xx [ 223 ] ? xx [ 223 ] : ( xx [ 166 ] * xx [ 666 ] + xx [ 702 ] * xx [ 668 ]
) * xx [ 305 ] ) ) * xx [ 669 ] * xx [ 669 ] * ( xx [ 434 ] - xx [ 7 ] * xx [
669 ] ) ; if ( xx [ 223 ] > xx [ 725 ] ) xx [ 725 ] = xx [ 223 ] ; xx [ 588 ]
= xx [ 639 ] * xx [ 659 ] * xx [ 589 ] + xx [ 289 ] * xx [ 166 ] + xx [ 725 ]
* xx [ 666 ] ; xx [ 166 ] = xx [ 466 ] * xx [ 697 ] ; xx [ 666 ] = xx [ 400 ]
* xx [ 697 ] ; xx [ 669 ] = xx [ 400 ] - ( xx [ 693 ] * xx [ 166 ] + xx [ 666
] * xx [ 697 ] ) * xx [ 7 ] ; xx [ 735 ] = xx [ 437 ] + state [ 51 ] ; xx [
819 ] = xx [ 466 ] + xx [ 7 ] * ( xx [ 693 ] * xx [ 666 ] - xx [ 166 ] * xx [
697 ] ) ; xx [ 1393 ] = xx [ 669 ] ; xx [ 1394 ] = xx [ 735 ] ; xx [ 1395 ] =
xx [ 819 ] ; xx [ 1428 ] = xx [ 23 ] * xx [ 669 ] ; xx [ 1429 ] = xx [ 735 ]
* xx [ 439 ] ; xx [ 1430 ] = xx [ 819 ] * xx [ 416 ] ;
pm_math_Vector3_cross_ra ( xx + 1393 , xx + 1428 , xx + 1431 ) ; xx [ 166 ] =
xx [ 645 ] + xx [ 635 ] ; xx [ 635 ] = xx [ 653 ] - xx [ 652 ] ; xx [ 645 ] =
xx [ 166 ] * xx [ 693 ] - xx [ 697 ] * xx [ 635 ] ; xx [ 652 ] = xx [ 631 ] +
xx [ 628 ] ; xx [ 628 ] = xx [ 656 ] - xx [ 655 ] ; xx [ 631 ] = xx [ 652 ] *
xx [ 693 ] + xx [ 697 ] * xx [ 628 ] ; xx [ 653 ] = - xx [ 631 ] ; xx [ 655 ]
= xx [ 166 ] * xx [ 697 ] + xx [ 693 ] * xx [ 635 ] ; xx [ 656 ] = xx [ 693 ]
* xx [ 628 ] - xx [ 652 ] * xx [ 697 ] ; xx [ 1393 ] = xx [ 653 ] ; xx [ 1394
] = xx [ 655 ] ; xx [ 1395 ] = xx [ 656 ] ; xx [ 666 ] = xx [ 655 ] * xx [
422 ] ; xx [ 824 ] = xx [ 873 ] * xx [ 656 ] + xx [ 631 ] * xx [ 422 ] ; xx [
631 ] = xx [ 655 ] * xx [ 873 ] ; xx [ 1428 ] = - xx [ 666 ] ; xx [ 1429 ] =
- xx [ 824 ] ; xx [ 1430 ] = xx [ 631 ] ; pm_math_Vector3_cross_ra ( xx +
1393 , xx + 1428 , xx + 1434 ) ; xx [ 832 ] = xx [ 705 ] * xx [ 635 ] ; xx [
1393 ] = - xx [ 652 ] ; xx [ 1394 ] = xx [ 635 ] ; xx [ 1395 ] = xx [ 628 ] ;
xx [ 846 ] = xx [ 712 ] * xx [ 628 ] + xx [ 652 ] * xx [ 705 ] ; xx [ 628 ] =
xx [ 712 ] * xx [ 635 ] ; xx [ 1428 ] = xx [ 832 ] ; xx [ 1429 ] = xx [ 846 ]
; xx [ 1430 ] = - xx [ 628 ] ; pm_math_Vector3_cross_ra ( xx + 1393 , xx +
1428 , xx + 1437 ) ; xx [ 635 ] = xx [ 726 ] - xx [ 629 ] * xx [ 54 ] ; xx [
1393 ] = xx [ 675 ] ; xx [ 1394 ] = xx [ 636 ] ; xx [ 1395 ] = xx [ 676 ] ;
xx [ 652 ] = xx [ 54 ] * xx [ 636 ] ; xx [ 675 ] = xx [ 53 ] * xx [ 636 ] ;
xx [ 1428 ] = - xx [ 652 ] ; xx [ 1429 ] = xx [ 635 ] ; xx [ 1430 ] = xx [
675 ] ; pm_math_Vector3_cross_ra ( xx + 1393 , xx + 1428 , xx + 1440 ) ; xx [
676 ] = ( xx [ 644 ] * xx [ 635 ] + xx [ 1441 ] ) * xx [ 7 ] ; xx [ 635 ] =
xx [ 630 ] * xx [ 676 ] ; xx [ 726 ] = ( xx [ 1440 ] - xx [ 652 ] * xx [ 644
] ) * xx [ 7 ] - xx [ 53 ] ; xx [ 652 ] = xx [ 726 ] * xx [ 630 ] ; xx [ 1443
] = xx [ 645 ] ; xx [ 1444 ] = xx [ 653 ] ; xx [ 1445 ] = xx [ 655 ] ; xx [
1446 ] = xx [ 656 ] ; xx [ 1447 ] = ( xx [ 1434 ] - xx [ 666 ] * xx [ 645 ] )
* xx [ 7 ] - xx [ 873 ] + xx [ 712 ] + ( xx [ 166 ] * xx [ 832 ] + xx [ 1437
] ) * xx [ 7 ] + ( xx [ 587 ] * xx [ 635 ] + xx [ 630 ] * xx [ 652 ] ) * xx [
7 ] - xx [ 726 ] - 0.1325000000000001 ; xx [ 1448 ] = ( xx [ 1435 ] - xx [
824 ] * xx [ 645 ] ) * xx [ 7 ] + ( xx [ 166 ] * xx [ 846 ] + xx [ 1438 ] ) *
xx [ 7 ] + xx [ 7 ] * ( xx [ 630 ] * xx [ 635 ] - xx [ 587 ] * xx [ 652 ] ) -
xx [ 676 ] + 0.2294967320028762 ; xx [ 1449 ] = xx [ 7 ] * ( xx [ 1436 ] + xx
[ 631 ] * xx [ 645 ] ) - xx [ 422 ] + xx [ 705 ] + xx [ 7 ] * ( xx [ 1439 ] -
xx [ 166 ] * xx [ 628 ] ) - xx [ 7 ] * ( xx [ 1442 ] + xx [ 675 ] * xx [ 644
] ) + xx [ 122 ] ; xx [ 122 ] =
sm_core_compiler_computeProximityInfoCxpolyBrick (
triped_a151ee3d_1_geometry_0 ( rtdv ) , triped_a151ee3d_1_geometry_1 ( rtdv )
, ( pm_math_Transform3 * ) ( xx + 1443 ) , ( pm_math_Transform3 * ) ( xx +
839 ) , ( pm_math_Vector3 * ) ( xx + 1393 ) , ( pm_math_Vector3 * ) ( xx +
1428 ) , ( pm_math_Vector3 * ) ( xx + 1434 ) , ( pm_math_Vector3 * ) ( xx +
1437 ) ) ; xx [ 166 ] = xx [ 705 ] * xx [ 437 ] ; xx [ 628 ] = xx [ 437 ] *
xx [ 54 ] ; xx [ 631 ] = xx [ 166 ] + xx [ 628 ] ; xx [ 635 ] = xx [ 697 ] *
xx [ 631 ] ; xx [ 645 ] = xx [ 437 ] * xx [ 53 ] ; xx [ 652 ] = xx [ 437 ] *
xx [ 712 ] ; xx [ 653 ] = xx [ 645 ] + xx [ 652 ] ; xx [ 655 ] = xx [ 697 ] *
xx [ 653 ] ; xx [ 656 ] = xx [ 36 ] * state [ 51 ] ; xx [ 666 ] = xx [ 466 ]
* xx [ 712 ] - xx [ 705 ] * xx [ 400 ] ; xx [ 675 ] = xx [ 466 ] * xx [ 53 ]
- xx [ 400 ] * xx [ 54 ] ; xx [ 400 ] = xx [ 278 ] * state [ 51 ] ; xx [ 1450
] = xx [ 669 ] ; xx [ 1451 ] = xx [ 735 ] ; xx [ 1452 ] = xx [ 819 ] ; xx [
1453 ] = xx [ 631 ] - ( xx [ 635 ] * xx [ 697 ] - xx [ 693 ] * xx [ 655 ] ) *
xx [ 7 ] + xx [ 656 ] ; xx [ 1454 ] = xx [ 666 ] + xx [ 675 ] ; xx [ 1455 ] =
xx [ 7 ] * ( xx [ 693 ] * xx [ 635 ] + xx [ 655 ] * xx [ 697 ] ) - xx [ 653 ]
+ xx [ 400 ] ; sm_core_compiler_computeContactWrenches ( xx [ 122 ] , xx +
1428 , xx + 1393 , xx + 1437 , xx + 1434 , xx + 874 , xx + 1412 , xx + 839 ,
xx + 1443 , xx + 1333 , xx + 1450 , 0 , 1 , xx [ 626 ] , xx [ 627 ] , xx [
773 ] , xx [ 813 ] , xx [ 882 ] , xx [ 883 ] , xx + 1456 , xx + 1462 ) ; xx [
122 ] = xx [ 819 ] * state [ 51 ] ; xx [ 626 ] = xx [ 1431 ] - xx [ 1462 ] -
xx [ 23 ] * xx [ 122 ] ; xx [ 23 ] = xx [ 669 ] * state [ 51 ] ; xx [ 627 ] =
xx [ 1433 ] - xx [ 1464 ] + xx [ 416 ] * xx [ 23 ] ; xx [ 416 ] = xx [ 627 ]
* xx [ 697 ] ; xx [ 631 ] = xx [ 697 ] * xx [ 626 ] ; xx [ 839 ] = xx [ 166 ]
; xx [ 840 ] = xx [ 666 ] ; xx [ 841 ] = - xx [ 652 ] ;
pm_math_Vector3_cross_ra ( xx + 775 , xx + 839 , xx + 842 ) ; xx [ 166 ] = (
( xx [ 819 ] + xx [ 819 ] ) * xx [ 656 ] - ( xx [ 669 ] + xx [ 669 ] ) * xx [
400 ] + xx [ 843 ] ) * xx [ 41 ] - xx [ 1466 ] ; xx [ 839 ] = xx [ 628 ] ; xx
[ 840 ] = xx [ 675 ] ; xx [ 841 ] = - xx [ 645 ] ; pm_math_Vector3_cross_ra (
xx + 775 , xx + 839 , xx + 845 ) ; xx [ 628 ] = xx [ 846 ] - ( xx [ 54 ] * xx
[ 379 ] + xx [ 53 ] * xx [ 848 ] ) ; xx [ 635 ] = xx [ 1390 ] + xx [ 22 ] +
xx [ 588 ] + xx [ 626 ] + xx [ 7 ] * ( xx [ 693 ] * xx [ 416 ] - xx [ 631 ] *
xx [ 697 ] ) - xx [ 705 ] * xx [ 166 ] + xx [ 708 ] * xx [ 379 ] - xx [ 848 ]
* xx [ 713 ] - xx [ 628 ] * xx [ 707 ] ; xx [ 626 ] = xx [ 58 ] * xx [ 784 ]
* xx [ 28 ] + xx [ 289 ] * xx [ 641 ] + xx [ 642 ] * xx [ 606 ] ; xx [ 606 ]
= xx [ 639 ] * xx [ 660 ] * xx [ 589 ] + xx [ 289 ] * xx [ 702 ] + xx [ 725 ]
* xx [ 668 ] ; xx [ 641 ] = xx [ 1391 ] + xx [ 626 ] + xx [ 606 ] ; xx [ 642
] = xx [ 1432 ] - xx [ 1463 ] ; xx [ 645 ] = xx [ 437 ] + xx [ 735 ] ; xx [
437 ] = xx [ 844 ] * xx [ 697 ] ; xx [ 652 ] = xx [ 842 ] * xx [ 697 ] ; xx [
653 ] = ( xx [ 645 ] * xx [ 400 ] + xx [ 842 ] - ( xx [ 693 ] * xx [ 437 ] +
xx [ 652 ] * xx [ 697 ] ) * xx [ 7 ] ) * xx [ 41 ] - xx [ 1465 ] ; xx [ 400 ]
= xx [ 41 ] * ( xx [ 844 ] + xx [ 7 ] * ( xx [ 693 ] * xx [ 652 ] - xx [ 437
] * xx [ 697 ] ) - xx [ 645 ] * xx [ 656 ] ) - xx [ 1467 ] ; xx [ 41 ] = xx [
642 ] + xx [ 36 ] * xx [ 653 ] + xx [ 278 ] * xx [ 400 ] ; xx [ 437 ] = xx [
41 ] / xx [ 440 ] ; xx [ 645 ] = xx [ 653 ] - xx [ 443 ] * xx [ 437 ] ; xx [
652 ] = xx [ 400 ] - xx [ 65 ] * xx [ 437 ] ; xx [ 655 ] = xx [ 697 ] * xx [
652 ] ; xx [ 656 ] = xx [ 697 ] * xx [ 645 ] ; xx [ 666 ] = xx [ 645 ] + xx [
7 ] * ( xx [ 693 ] * xx [ 655 ] - xx [ 656 ] * xx [ 697 ] ) ; xx [ 645 ] = xx
[ 652 ] - ( xx [ 693 ] * xx [ 656 ] + xx [ 655 ] * xx [ 697 ] ) * xx [ 7 ] ;
xx [ 652 ] = xx [ 847 ] + xx [ 433 ] * xx [ 53 ] ; xx [ 655 ] = xx [ 845 ] -
xx [ 433 ] * xx [ 54 ] ; xx [ 656 ] = xx [ 652 ] * xx [ 717 ] - xx [ 655 ] *
xx [ 706 ] - xx [ 724 ] * xx [ 433 ] ; xx [ 668 ] = xx [ 641 ] + xx [ 642 ] -
xx [ 439 ] * xx [ 437 ] + xx [ 705 ] * xx [ 666 ] - xx [ 712 ] * xx [ 645 ] +
xx [ 656 ] ; xx [ 669 ] = xx [ 58 ] * xx [ 785 ] * xx [ 28 ] + xx [ 289 ] * (
xx [ 466 ] - xx [ 1399 ] ) ; xx [ 28 ] = xx [ 639 ] * xx [ 661 ] * xx [ 589 ]
+ xx [ 289 ] * ( xx [ 466 ] - xx [ 1427 ] ) ; xx [ 58 ] = xx [ 1392 ] + xx [
669 ] + xx [ 28 ] + xx [ 627 ] - ( xx [ 693 ] * xx [ 631 ] + xx [ 416 ] * xx
[ 697 ] ) * xx [ 7 ] + xx [ 712 ] * xx [ 166 ] + xx [ 379 ] * xx [ 721 ] - xx
[ 696 ] * xx [ 848 ] + xx [ 628 ] * xx [ 48 ] ; xx [ 724 ] = xx [ 635 ] ; xx
[ 725 ] = xx [ 668 ] ; xx [ 726 ] = xx [ 58 ] ; xx [ 416 ] = xx [ 433 ] * xx
[ 706 ] + xx [ 709 ] * xx [ 655 ] + xx [ 652 ] * xx [ 727 ] ; xx [ 466 ] = xx
[ 166 ] + xx [ 722 ] * xx [ 628 ] - ( xx [ 707 ] * xx [ 379 ] + xx [ 848 ] *
xx [ 48 ] ) ; xx [ 48 ] = xx [ 655 ] * xx [ 719 ] + xx [ 723 ] * xx [ 652 ] -
xx [ 433 ] * xx [ 717 ] ; xx [ 706 ] = xx [ 666 ] + xx [ 416 ] ; xx [ 707 ] =
xx [ 466 ] ; xx [ 708 ] = xx [ 645 ] + xx [ 48 ] ; xx [ 166 ] = xx [ 15 ] *
state [ 45 ] ; xx [ 589 ] = xx [ 635 ] * xx [ 640 ] ; xx [ 627 ] = xx [ 15 ]
* state [ 46 ] + xx [ 58 ] + xx [ 466 ] * xx [ 53 ] ; xx [ 721 ] = - ( xx [
445 ] + pm_math_Vector3_dot_ra ( xx + 672 , xx + 724 ) +
pm_math_Vector3_dot_ra ( xx + 731 , xx + 706 ) ) ; xx [ 722 ] = - ( xx [ 166
] + xx [ 589 ] + xx [ 668 ] * xx [ 738 ] + pm_math_Vector3_dot_ra ( xx + 750
, xx + 706 ) ) ; xx [ 723 ] = - xx [ 627 ] ; solveSymmetricPosDef ( xx + 753
, xx + 721 , 3 , 1 , xx + 706 , xx + 724 ) ; xx [ 1425 ] = xx [ 685 ] ; xx [
1426 ] = xx [ 737 ] ; xx [ 1427 ] = xx [ 742 ] ; xx [ 1428 ] = xx [ 720 ] ;
xx [ 1429 ] = xx [ 740 ] ; xx [ 1430 ] = xx [ 223 ] ; xx [ 1431 ] = xx [ 699
] ; xx [ 1432 ] = xx [ 741 ] ; xx [ 1433 ] = xx [ 743 ] ; xx [ 1434 ] = xx [
710 ] ; xx [ 1435 ] = xx [ 745 ] ; xx [ 1436 ] = xx [ 223 ] ; xx [ 1437 ] =
xx [ 694 ] ; xx [ 1438 ] = xx [ 746 ] ; xx [ 1439 ] = xx [ 744 ] ; xx [ 1440
] = xx [ 47 ] ; xx [ 1441 ] = xx [ 747 ] ; xx [ 1442 ] = xx [ 223 ] ;
solveSymmetricPosDef ( xx + 753 , xx + 1425 , 3 , 6 , xx + 1443 , xx + 719 )
; xx [ 719 ] = xx [ 1452 ] ; xx [ 720 ] = xx [ 1455 ] ; xx [ 721 ] = xx [
1458 ] ; xx [ 15 ] = xx [ 629 ] * xx [ 26 ] ; xx [ 47 ] = xx [ 26 ] * xx [
636 ] ; xx [ 628 ] = xx [ 7 ] * ( xx [ 646 ] * xx [ 15 ] - xx [ 47 ] * xx [
644 ] ) ; xx [ 631 ] = ( xx [ 629 ] * xx [ 15 ] + xx [ 47 ] * xx [ 636 ] ) *
xx [ 7 ] ; xx [ 722 ] = xx [ 628 ] ; xx [ 723 ] = - ( ( xx [ 15 ] * xx [ 644
] + xx [ 646 ] * xx [ 47 ] ) * xx [ 7 ] ) ; xx [ 724 ] = xx [ 26 ] - xx [ 631
] ; xx [ 15 ] = pm_math_Vector3_dot_ra ( xx + 719 , xx + 722 ) ; xx [ 47 ] =
xx [ 706 ] - xx [ 15 ] ; xx [ 644 ] = xx [ 1453 ] ; xx [ 645 ] = xx [ 1456 ]
; xx [ 646 ] = xx [ 1459 ] ; xx [ 629 ] = pm_math_Vector3_dot_ra ( xx + 644 ,
xx + 722 ) ; xx [ 636 ] = xx [ 707 ] - xx [ 629 ] ; xx [ 644 ] = xx [ 1454 ]
; xx [ 645 ] = xx [ 1457 ] ; xx [ 646 ] = xx [ 1460 ] ; xx [ 639 ] =
pm_math_Vector3_dot_ra ( xx + 644 , xx + 722 ) ; xx [ 644 ] = xx [ 708 ] - xx
[ 639 ] ; xx [ 645 ] = state [ 55 ] * state [ 55 ] ; xx [ 646 ] = sqrt (
state [ 53 ] * state [ 53 ] + state [ 54 ] * state [ 54 ] + xx [ 645 ] ) ; xx
[ 666 ] = - state [ 52 ] ; xx [ 668 ] = atan2 ( xx [ 646 ] , fabs ( xx [ 666
] ) ) * xx [ 161 ] ; xx [ 675 ] = xx [ 646 ] == 0.0 ? 0.0 : 1.0 / xx [ 646 ]
; xx [ 646 ] = ( xx [ 666 ] < 0.0 ? - 1.0 : + 1.0 ) * xx [ 675 ] ; xx [ 666 ]
= ( state [ 52 ] * state [ 52 ] + xx [ 645 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [
666 ] = fabs ( xx [ 666 ] ) > 1.0 ? atan2 ( 0.0 , xx [ 666 ] ) : acos ( xx [
666 ] ) ; xx [ 645 ] = xx [ 666 ] - xx [ 76 ] ; if ( xx [ 223 ] > xx [ 645 ]
) xx [ 645 ] = xx [ 223 ] ; xx [ 666 ] = state [ 52 ] * state [ 53 ] + state
[ 54 ] * state [ 55 ] ; xx [ 675 ] = state [ 52 ] * state [ 54 ] - state [ 53
] * state [ 55 ] ; xx [ 676 ] = sqrt ( xx [ 666 ] * xx [ 666 ] + xx [ 675 ] *
xx [ 675 ] ) ; bb [ 0 ] = xx [ 676 ] == xx [ 223 ] ; xx [ 685 ] = xx [ 676 ]
== 0.0 ? 0.0 : xx [ 666 ] / xx [ 676 ] ; xx [ 666 ] = bb [ 0 ] ? xx [ 0 ] :
xx [ 685 ] ; xx [ 685 ] = xx [ 676 ] == 0.0 ? 0.0 : xx [ 675 ] / xx [ 676 ] ;
xx [ 675 ] = bb [ 0 ] ? xx [ 223 ] : xx [ 685 ] ; xx [ 676 ] = xx [ 645 ] /
xx [ 366 ] ; if ( xx [ 0 ] < xx [ 676 ] ) xx [ 676 ] = xx [ 0 ] ; xx [ 685 ]
= ( xx [ 305 ] * xx [ 645 ] + ( xx [ 645 ] == xx [ 223 ] ? xx [ 223 ] : ( xx
[ 666 ] * state [ 56 ] + xx [ 675 ] * state [ 57 ] ) * xx [ 305 ] ) ) * xx [
676 ] * xx [ 676 ] * ( xx [ 434 ] - xx [ 7 ] * xx [ 676 ] ) ; if ( xx [ 223 ]
> xx [ 685 ] ) xx [ 685 ] = xx [ 223 ] ; xx [ 706 ] = xx [ 475 ] * xx [ 70 ]
; xx [ 707 ] = xx [ 476 ] * xx [ 82 ] ; xx [ 708 ] = xx [ 566 ] * xx [ 84 ] ;
pm_math_Vector3_cross_ra ( xx + 1387 , xx + 706 , xx + 719 ) ; xx [ 706 ] = -
xx [ 782 ] ; xx [ 707 ] = - xx [ 783 ] ; xx [ 708 ] = - xx [ 784 ] ; xx [ 709
] = - xx [ 785 ] ; pm_math_Quaternion_compose_ra ( xx + 583 , xx + 706 , xx +
722 ) ; xx [ 706 ] = xx [ 22 ] ; xx [ 707 ] = xx [ 626 ] ; xx [ 708 ] = xx [
669 ] ; pm_math_Quaternion_xform_ra ( xx + 722 , xx + 706 , xx + 740 ) ;
pm_math_Vector3_cross_ra ( xx + 1405 , xx + 1326 , xx + 706 ) ; xx [ 22 ] =
xx [ 719 ] - xx [ 740 ] + xx [ 70 ] * xx [ 706 ] ; xx [ 626 ] = xx [ 720 ] -
xx [ 741 ] + xx [ 82 ] * xx [ 707 ] ; xx [ 645 ] = xx [ 721 ] - xx [ 742 ] +
xx [ 84 ] * xx [ 708 ] ; xx [ 706 ] = xx [ 22 ] ; xx [ 707 ] = xx [ 626 ] ;
xx [ 708 ] = xx [ 645 ] ; xx [ 719 ] = xx [ 1405 ] + xx [ 475 ] ; xx [ 720 ]
= xx [ 1406 ] + xx [ 476 ] ; xx [ 721 ] = xx [ 1407 ] + xx [ 566 ] ;
pm_math_Vector3_cross_ra ( xx + 719 , xx + 1369 , xx + 722 ) ;
pm_math_Vector3_cross_ra ( xx + 1329 , xx + 600 , xx + 719 ) ;
pm_math_Vector3_cross_ra ( xx + 1329 , xx + 719 , xx + 725 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 790 , xx + 725 , xx + 719 ) ; xx [
725 ] = ( xx [ 722 ] + xx [ 719 ] ) * xx [ 100 ] ; xx [ 726 ] = ( xx [ 723 ]
+ xx [ 720 ] ) * xx [ 100 ] ; xx [ 727 ] = ( xx [ 724 ] + xx [ 721 ] ) * xx [
100 ] ; xx [ 475 ] = xx [ 668 ] * xx [ 646 ] * state [ 53 ] - xx [ 289 ] *
state [ 56 ] - xx [ 685 ] * xx [ 666 ] - ( pm_math_Vector3_dot_ra ( xx + 93 ,
xx + 706 ) + pm_math_Vector3_dot_ra ( xx + 181 , xx + 725 ) ) ; xx [ 476 ] =
xx [ 668 ] * xx [ 646 ] * state [ 54 ] - xx [ 289 ] * state [ 57 ] - xx [ 685
] * xx [ 675 ] - ( pm_math_Vector3_dot_ra ( xx + 167 , xx + 706 ) +
pm_math_Vector3_dot_ra ( xx + 215 , xx + 725 ) ) ; xx [ 566 ] = xx [ 668 ] *
xx [ 646 ] * state [ 55 ] - xx [ 289 ] * state [ 58 ] - ( xx [ 626 ] * xx [
75 ] - xx [ 22 ] * xx [ 83 ] + xx [ 645 ] + pm_math_Vector3_dot_ra ( xx + 227
, xx + 725 ) ) ; xx [ 706 ] = xx [ 475 ] ; xx [ 707 ] = xx [ 476 ] ; xx [ 708
] = xx [ 566 ] ; solveSymmetricPosDef ( xx + 800 , xx + 706 , 3 , 1 , xx +
719 , xx + 722 ) ; solveSymmetricPosDef ( xx + 800 , xx + 1339 , 3 , 6 , xx +
1425 , xx + 706 ) ; xx [ 706 ] = xx [ 1425 ] ; xx [ 707 ] = xx [ 1428 ] ; xx
[ 708 ] = xx [ 1431 ] ; xx [ 722 ] = - ( xx [ 139 ] * inputDdot [ 7 ] ) ; xx
[ 723 ] = xx [ 144 ] * inputDdot [ 7 ] ; xx [ 724 ] = xx [ 145 ] * inputDdot
[ 7 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 790 , xx + 722 , xx + 725 )
; xx [ 740 ] = xx [ 1434 ] ; xx [ 741 ] = xx [ 1437 ] ; xx [ 742 ] = xx [
1440 ] ; xx [ 22 ] = xx [ 26 ] * xx [ 787 ] ; xx [ 626 ] = xx [ 26 ] * xx [
788 ] ; xx [ 743 ] = - ( xx [ 134 ] * inputDot [ 7 ] ) ; xx [ 744 ] = xx [
179 ] * inputDot [ 7 ] ; xx [ 745 ] = - ( xx [ 210 ] * inputDot [ 7 ] ) ;
pm_math_Vector3_cross_ra ( xx + 1329 , xx + 743 , xx + 782 ) ;
pm_math_Vector3_cross_ra ( xx + 722 , xx + 600 , xx + 743 ) ; xx [ 600 ] = xx
[ 7 ] * ( xx [ 789 ] * xx [ 22 ] - xx [ 786 ] * xx [ 626 ] ) + xx [ 782 ] -
xx [ 134 ] * inputDdot [ 7 ] + xx [ 743 ] ; xx [ 601 ] = ( xx [ 786 ] * xx [
22 ] + xx [ 789 ] * xx [ 626 ] ) * xx [ 7 ] + xx [ 783 ] + xx [ 179 ] *
inputDdot [ 7 ] + xx [ 744 ] ; xx [ 602 ] = xx [ 784 ] - xx [ 210 ] *
inputDdot [ 7 ] - ( xx [ 787 ] * xx [ 22 ] + xx [ 788 ] * xx [ 626 ] ) * xx [
7 ] + xx [ 745 ] + xx [ 26 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 790
, xx + 600 , xx + 722 ) ; xx [ 22 ] = pm_math_Vector3_dot_ra ( xx + 706 , xx
+ 725 ) + pm_math_Vector3_dot_ra ( xx + 740 , xx + 722 ) ; xx [ 600 ] = xx [
719 ] - xx [ 22 ] ; xx [ 706 ] = xx [ 1426 ] ; xx [ 707 ] = xx [ 1429 ] ; xx
[ 708 ] = xx [ 1432 ] ; xx [ 740 ] = xx [ 1435 ] ; xx [ 741 ] = xx [ 1438 ] ;
xx [ 742 ] = xx [ 1441 ] ; xx [ 601 ] = pm_math_Vector3_dot_ra ( xx + 706 ,
xx + 725 ) + pm_math_Vector3_dot_ra ( xx + 740 , xx + 722 ) ; xx [ 602 ] = xx
[ 720 ] - xx [ 601 ] ; xx [ 706 ] = xx [ 1427 ] ; xx [ 707 ] = xx [ 1430 ] ;
xx [ 708 ] = xx [ 1433 ] ; xx [ 740 ] = xx [ 1436 ] ; xx [ 741 ] = xx [ 1439
] ; xx [ 742 ] = xx [ 1442 ] ; xx [ 626 ] = pm_math_Vector3_dot_ra ( xx + 706
, xx + 725 ) + pm_math_Vector3_dot_ra ( xx + 740 , xx + 722 ) ; xx [ 645 ] =
xx [ 721 ] - xx [ 626 ] ; xx [ 646 ] = xx [ 7 ] * ( xx [ 587 ] * xx [ 380 ] -
xx [ 630 ] * xx [ 121 ] ) + xx [ 120 ] ; xx [ 120 ] = xx [ 597 ] * xx [ 53 ]
+ xx [ 607 ] * xx [ 54 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 863 , xx
+ 140 , xx + 706 ) ; pm_math_Vector3_cross_ra ( xx + 706 , xx + 187 , xx +
719 ) ; pm_math_Quaternion_xform_ra ( xx + 149 , xx + 719 , xx + 706 ) ;
pm_math_Quaternion_xform_ra ( xx + 863 , xx + 236 , xx + 719 ) ; xx [ 722 ] =
xx [ 86 ] + xx [ 719 ] ; xx [ 723 ] = xx [ 127 ] + xx [ 720 ] ; xx [ 724 ] =
xx [ 721 ] - xx [ 133 ] ; pm_math_Vector3_cross_ra ( xx + 140 , xx + 722 , xx
+ 719 ) ; pm_math_Quaternion_xform_ra ( xx + 859 , xx + 719 , xx + 140 ) ;
pm_math_Quaternion_xform_ra ( xx + 859 , xx + 241 , xx + 719 ) ;
pm_math_Matrix3x3_xform_ra ( xx + 1357 , xx + 212 , xx + 241 ) ; xx [ 53 ] =
xx [ 860 ] * xx [ 862 ] ; xx [ 54 ] = xx [ 859 ] * xx [ 861 ] ; xx [ 86 ] = (
xx [ 53 ] + xx [ 54 ] ) * xx [ 7 ] ; xx [ 121 ] = xx [ 859 ] * xx [ 859 ] ;
xx [ 127 ] = ( xx [ 121 ] + xx [ 860 ] * xx [ 860 ] ) * xx [ 7 ] - xx [ 0 ] ;
xx [ 133 ] = xx [ 86 ] * xx [ 662 ] + xx [ 665 ] * xx [ 127 ] ; xx [ 212 ] =
xx [ 860 ] * xx [ 861 ] ; xx [ 213 ] = xx [ 859 ] * xx [ 862 ] ; xx [ 214 ] =
xx [ 7 ] * ( xx [ 212 ] - xx [ 213 ] ) ; xx [ 380 ] = xx [ 663 ] * xx [ 127 ]
+ xx [ 662 ] * xx [ 214 ] ; xx [ 587 ] = xx [ 665 ] * xx [ 214 ] - xx [ 86 ]
* xx [ 663 ] ; xx [ 597 ] = xx [ 861 ] * xx [ 862 ] ; xx [ 607 ] = xx [ 859 ]
* xx [ 860 ] ; xx [ 630 ] = xx [ 7 ] * ( xx [ 597 ] - xx [ 607 ] ) ; xx [ 666
] = ( xx [ 212 ] + xx [ 213 ] ) * xx [ 7 ] ; xx [ 212 ] = xx [ 662 ] * xx [
630 ] + xx [ 666 ] * xx [ 665 ] ; xx [ 213 ] = ( xx [ 121 ] + xx [ 861 ] * xx
[ 861 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 668 ] = xx [ 666 ] * xx [ 663 ] + xx [
662 ] * xx [ 213 ] ; xx [ 669 ] = xx [ 665 ] * xx [ 213 ] - xx [ 663 ] * xx [
630 ] ; xx [ 675 ] = ( xx [ 121 ] + xx [ 862 ] * xx [ 862 ] ) * xx [ 7 ] - xx
[ 0 ] ; xx [ 121 ] = xx [ 7 ] * ( xx [ 53 ] - xx [ 54 ] ) ; xx [ 53 ] = xx [
662 ] * xx [ 675 ] + xx [ 665 ] * xx [ 121 ] ; xx [ 54 ] = ( xx [ 597 ] + xx
[ 607 ] ) * xx [ 7 ] ; xx [ 597 ] = xx [ 663 ] * xx [ 121 ] + xx [ 54 ] * xx
[ 662 ] ; xx [ 607 ] = xx [ 54 ] * xx [ 665 ] - xx [ 663 ] * xx [ 675 ] ; xx
[ 782 ] = - ( xx [ 665 ] * xx [ 133 ] + xx [ 663 ] * xx [ 380 ] ) ; xx [ 783
] = - ( xx [ 662 ] * xx [ 380 ] + xx [ 665 ] * xx [ 587 ] ) ; xx [ 784 ] = xx
[ 663 ] * xx [ 587 ] - xx [ 662 ] * xx [ 133 ] ; xx [ 785 ] = - ( xx [ 665 ]
* xx [ 212 ] + xx [ 663 ] * xx [ 668 ] ) ; xx [ 786 ] = - ( xx [ 662 ] * xx [
668 ] + xx [ 665 ] * xx [ 669 ] ) ; xx [ 787 ] = xx [ 663 ] * xx [ 669 ] - xx
[ 662 ] * xx [ 212 ] ; xx [ 788 ] = - ( xx [ 665 ] * xx [ 53 ] + xx [ 663 ] *
xx [ 597 ] ) ; xx [ 789 ] = - ( xx [ 662 ] * xx [ 597 ] + xx [ 665 ] * xx [
607 ] ) ; xx [ 790 ] = xx [ 663 ] * xx [ 607 ] - xx [ 662 ] * xx [ 53 ] ; xx
[ 53 ] = xx [ 863 ] * xx [ 863 ] ; xx [ 133 ] = ( xx [ 53 ] + xx [ 864 ] * xx
[ 864 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 212 ] = xx [ 864 ] * xx [ 865 ] ; xx [
380 ] = xx [ 863 ] * xx [ 866 ] ; xx [ 587 ] = xx [ 7 ] * ( xx [ 212 ] - xx [
380 ] ) ; xx [ 597 ] = xx [ 864 ] * xx [ 866 ] ; xx [ 607 ] = xx [ 863 ] * xx
[ 865 ] ; xx [ 662 ] = ( xx [ 597 ] + xx [ 607 ] ) * xx [ 7 ] ; xx [ 663 ] =
( xx [ 212 ] + xx [ 380 ] ) * xx [ 7 ] ; xx [ 212 ] = ( xx [ 53 ] + xx [ 865
] * xx [ 865 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 380 ] = xx [ 865 ] * xx [ 866 ]
; xx [ 665 ] = xx [ 863 ] * xx [ 864 ] ; xx [ 668 ] = xx [ 7 ] * ( xx [ 380 ]
- xx [ 665 ] ) ; xx [ 669 ] = xx [ 7 ] * ( xx [ 597 ] - xx [ 607 ] ) ; xx [
597 ] = ( xx [ 380 ] + xx [ 665 ] ) * xx [ 7 ] ; xx [ 380 ] = ( xx [ 53 ] +
xx [ 866 ] * xx [ 866 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 839 ] = xx [ 133 ] ;
xx [ 840 ] = xx [ 587 ] ; xx [ 841 ] = xx [ 662 ] ; xx [ 842 ] = xx [ 663 ] ;
xx [ 843 ] = xx [ 212 ] ; xx [ 844 ] = xx [ 668 ] ; xx [ 845 ] = xx [ 669 ] ;
xx [ 846 ] = xx [ 597 ] ; xx [ 847 ] = xx [ 380 ] ;
pm_math_Matrix3x3_compose_ra ( xx + 782 , xx + 839 , xx + 873 ) ; xx [ 839 ]
= xx [ 127 ] ; xx [ 840 ] = xx [ 214 ] ; xx [ 841 ] = xx [ 86 ] ; xx [ 842 ]
= xx [ 666 ] ; xx [ 843 ] = xx [ 213 ] ; xx [ 844 ] = xx [ 630 ] ; xx [ 845 ]
= xx [ 121 ] ; xx [ 846 ] = xx [ 54 ] ; xx [ 847 ] = xx [ 675 ] ; xx [ 53 ] =
xx [ 1422 ] * xx [ 662 ] - xx [ 1424 ] * xx [ 133 ] ; xx [ 54 ] = xx [ 1423 ]
* xx [ 133 ] - xx [ 1422 ] * xx [ 587 ] ; xx [ 86 ] = xx [ 1424 ] * xx [ 587
] - xx [ 1423 ] * xx [ 662 ] ; xx [ 121 ] = xx [ 1422 ] * xx [ 668 ] - xx [
1424 ] * xx [ 663 ] ; xx [ 127 ] = xx [ 1423 ] * xx [ 663 ] - xx [ 1422 ] *
xx [ 212 ] ; xx [ 133 ] = xx [ 1424 ] * xx [ 212 ] - xx [ 1423 ] * xx [ 668 ]
; xx [ 212 ] = xx [ 1422 ] * xx [ 380 ] - xx [ 1424 ] * xx [ 669 ] ; xx [ 213
] = xx [ 1423 ] * xx [ 669 ] - xx [ 1422 ] * xx [ 597 ] ; xx [ 214 ] = xx [
1424 ] * xx [ 597 ] - xx [ 1423 ] * xx [ 380 ] ; xx [ 1326 ] = xx [ 1424 ] *
xx [ 53 ] - xx [ 1423 ] * xx [ 54 ] ; xx [ 1327 ] = xx [ 1422 ] * xx [ 54 ] -
xx [ 1424 ] * xx [ 86 ] ; xx [ 1328 ] = xx [ 1423 ] * xx [ 86 ] - xx [ 1422 ]
* xx [ 53 ] ; xx [ 1329 ] = xx [ 1424 ] * xx [ 121 ] - xx [ 1423 ] * xx [ 127
] ; xx [ 1330 ] = xx [ 1422 ] * xx [ 127 ] - xx [ 1424 ] * xx [ 133 ] ; xx [
1331 ] = xx [ 1423 ] * xx [ 133 ] - xx [ 1422 ] * xx [ 121 ] ; xx [ 1332 ] =
xx [ 1424 ] * xx [ 212 ] - xx [ 1423 ] * xx [ 213 ] ; xx [ 1333 ] = xx [ 1422
] * xx [ 213 ] - xx [ 1424 ] * xx [ 214 ] ; xx [ 1334 ] = xx [ 1423 ] * xx [
214 ] - xx [ 1422 ] * xx [ 212 ] ; pm_math_Matrix3x3_compose_ra ( xx + 839 ,
xx + 1326 , xx + 1357 ) ; xx [ 53 ] = xx [ 149 ] * xx [ 149 ] ; xx [ 54 ] =
xx [ 150 ] * xx [ 151 ] ; xx [ 86 ] = xx [ 149 ] * xx [ 152 ] ; xx [ 121 ] =
xx [ 150 ] * xx [ 152 ] ; xx [ 127 ] = xx [ 149 ] * xx [ 151 ] ; xx [ 133 ] =
xx [ 151 ] * xx [ 152 ] ; xx [ 212 ] = xx [ 149 ] * xx [ 150 ] ; xx [ 839 ] =
( xx [ 53 ] + xx [ 150 ] * xx [ 150 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 840 ] =
xx [ 7 ] * ( xx [ 54 ] - xx [ 86 ] ) ; xx [ 841 ] = ( xx [ 121 ] + xx [ 127 ]
) * xx [ 7 ] ; xx [ 842 ] = ( xx [ 54 ] + xx [ 86 ] ) * xx [ 7 ] ; xx [ 843 ]
= ( xx [ 53 ] + xx [ 151 ] * xx [ 151 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 844 ]
= xx [ 7 ] * ( xx [ 133 ] - xx [ 212 ] ) ; xx [ 845 ] = xx [ 7 ] * ( xx [ 121
] - xx [ 127 ] ) ; xx [ 846 ] = ( xx [ 133 ] + xx [ 212 ] ) * xx [ 7 ] ; xx [
847 ] = ( xx [ 53 ] + xx [ 152 ] * xx [ 152 ] ) * xx [ 7 ] - xx [ 0 ] ;
pm_math_Matrix3x3_postCross_ra ( xx + 839 , xx + 1408 , xx + 1387 ) ;
pm_math_Matrix3x3_postCross_ra ( xx + 1387 , xx + 1422 , xx + 839 ) ; xx [
1387 ] = xx [ 873 ] + xx [ 1357 ] + xx [ 7 ] * xx [ 839 ] ; xx [ 1388 ] = xx
[ 874 ] + xx [ 1358 ] + xx [ 7 ] * xx [ 840 ] ; xx [ 1389 ] = xx [ 875 ] + xx
[ 1359 ] + xx [ 7 ] * xx [ 841 ] ; xx [ 1390 ] = xx [ 876 ] + xx [ 1360 ] +
xx [ 7 ] * xx [ 842 ] ; xx [ 1391 ] = xx [ 877 ] + xx [ 1361 ] + xx [ 7 ] *
xx [ 843 ] ; xx [ 1392 ] = xx [ 878 ] + xx [ 1362 ] + xx [ 7 ] * xx [ 844 ] ;
xx [ 1393 ] = xx [ 879 ] + xx [ 1363 ] + xx [ 7 ] * xx [ 845 ] ; xx [ 1394 ]
= xx [ 880 ] + xx [ 1364 ] + xx [ 7 ] * xx [ 846 ] ; xx [ 1395 ] = xx [ 881 ]
+ xx [ 1365 ] + xx [ 7 ] * xx [ 847 ] ; pm_math_Matrix3x3_xform_ra ( xx +
1387 , xx + 187 , xx + 149 ) ; pm_math_Matrix3x3_xform_ra ( xx + 782 , xx +
722 , xx + 187 ) ; pm_math_Quaternion_xform_ra ( xx + 859 , xx + 504 , xx +
212 ) ; xx [ 53 ] = inputDot [ 8 ] * inputDot [ 8 ] ;
pm_math_Matrix3x3_xform_ra ( xx + 1326 , xx + 236 , xx + 504 ) ;
pm_math_Quaternion_xform_ra ( xx + 859 , xx + 504 , xx + 725 ) ;
pm_math_Vector3_cross_ra ( xx + 1422 , xx + 236 , xx + 504 ) ;
pm_math_Quaternion_xform_ra ( xx + 863 , xx + 504 , xx + 236 ) ;
pm_math_Vector3_cross_ra ( xx + 1400 , xx + 236 , xx + 740 ) ;
pm_math_Quaternion_xform_ra ( xx + 859 , xx + 740 , xx + 236 ) ; xx [ 54 ] =
state [ 62 ] * state [ 62 ] ; xx [ 86 ] = sqrt ( state [ 60 ] * state [ 60 ]
+ state [ 61 ] * state [ 61 ] + xx [ 54 ] ) ; xx [ 121 ] = - state [ 59 ] ;
xx [ 127 ] = atan2 ( xx [ 86 ] , fabs ( xx [ 121 ] ) ) * xx [ 161 ] ; xx [
133 ] = xx [ 86 ] == 0.0 ? 0.0 : 1.0 / xx [ 86 ] ; xx [ 86 ] = ( xx [ 121 ] <
0.0 ? - 1.0 : + 1.0 ) * xx [ 133 ] ; xx [ 121 ] = ( state [ 59 ] * state [ 59
] + xx [ 54 ] ) * xx [ 7 ] - xx [ 0 ] ; xx [ 121 ] = fabs ( xx [ 121 ] ) >
1.0 ? atan2 ( 0.0 , xx [ 121 ] ) : acos ( xx [ 121 ] ) ; xx [ 54 ] = xx [ 121
] - xx [ 76 ] ; if ( xx [ 223 ] > xx [ 54 ] ) xx [ 54 ] = xx [ 223 ] ; xx [
76 ] = state [ 59 ] * state [ 60 ] + state [ 61 ] * state [ 62 ] ; xx [ 121 ]
= state [ 59 ] * state [ 61 ] - state [ 60 ] * state [ 62 ] ; xx [ 133 ] =
sqrt ( xx [ 76 ] * xx [ 76 ] + xx [ 121 ] * xx [ 121 ] ) ; bb [ 0 ] = xx [
133 ] == xx [ 223 ] ; xx [ 152 ] = xx [ 133 ] == 0.0 ? 0.0 : xx [ 76 ] / xx [
133 ] ; xx [ 76 ] = bb [ 0 ] ? xx [ 0 ] : xx [ 152 ] ; xx [ 152 ] = xx [ 133
] == 0.0 ? 0.0 : xx [ 121 ] / xx [ 133 ] ; xx [ 121 ] = bb [ 0 ] ? xx [ 223 ]
: xx [ 152 ] ; xx [ 133 ] = xx [ 54 ] / xx [ 366 ] ; if ( xx [ 0 ] < xx [ 133
] ) xx [ 133 ] = xx [ 0 ] ; xx [ 152 ] = ( xx [ 305 ] * xx [ 54 ] + ( xx [ 54
] == xx [ 223 ] ? xx [ 223 ] : ( xx [ 76 ] * state [ 63 ] + xx [ 121 ] *
state [ 64 ] ) * xx [ 305 ] ) ) * xx [ 133 ] * xx [ 133 ] * ( xx [ 434 ] - xx
[ 7 ] * xx [ 133 ] ) ; if ( xx [ 223 ] > xx [ 152 ] ) xx [ 152 ] = xx [ 223 ]
; xx [ 740 ] = xx [ 163 ] * xx [ 70 ] ; xx [ 741 ] = xx [ 164 ] * xx [ 82 ] ;
xx [ 742 ] = xx [ 165 ] * xx [ 84 ] ; pm_math_Vector3_cross_ra ( xx + 163 ,
xx + 740 , xx + 743 ) ; xx [ 782 ] = - xx [ 658 ] ; xx [ 783 ] = - xx [ 659 ]
; xx [ 784 ] = - xx [ 660 ] ; xx [ 785 ] = - xx [ 661 ] ;
pm_math_Quaternion_compose_ra ( xx + 583 , xx + 782 , xx + 658 ) ; xx [ 583 ]
= xx [ 588 ] ; xx [ 584 ] = xx [ 606 ] ; xx [ 585 ] = xx [ 28 ] ;
pm_math_Quaternion_xform_ra ( xx + 658 , xx + 583 , xx + 586 ) ;
pm_math_Vector3_cross_ra ( xx + 1408 , xx + 1422 , xx + 583 ) ; xx [ 28 ] =
xx [ 743 ] - xx [ 586 ] + xx [ 70 ] * xx [ 583 ] ; xx [ 54 ] = xx [ 744 ] -
xx [ 587 ] + xx [ 82 ] * xx [ 584 ] ; xx [ 70 ] = xx [ 745 ] - xx [ 588 ] +
xx [ 84 ] * xx [ 585 ] ; xx [ 583 ] = xx [ 28 ] ; xx [ 584 ] = xx [ 54 ] ; xx
[ 585 ] = xx [ 70 ] ; xx [ 586 ] = xx [ 1408 ] + xx [ 163 ] ; xx [ 587 ] = xx
[ 1409 ] + xx [ 164 ] ; xx [ 588 ] = xx [ 1410 ] + xx [ 165 ] ;
pm_math_Vector3_cross_ra ( xx + 586 , xx + 504 , xx + 163 ) ;
pm_math_Vector3_cross_ra ( xx + 1400 , xx + 722 , xx + 504 ) ;
pm_math_Vector3_cross_ra ( xx + 1400 , xx + 504 , xx + 586 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 863 , xx + 586 , xx + 504 ) ; xx [
586 ] = ( xx [ 163 ] + xx [ 504 ] ) * xx [ 100 ] ; xx [ 587 ] = ( xx [ 164 ]
+ xx [ 505 ] ) * xx [ 100 ] ; xx [ 588 ] = ( xx [ 165 ] + xx [ 506 ] ) * xx [
100 ] ; xx [ 82 ] = xx [ 127 ] * xx [ 86 ] * state [ 60 ] - xx [ 289 ] *
state [ 63 ] - xx [ 152 ] * xx [ 76 ] - ( pm_math_Vector3_dot_ra ( xx + 93 ,
xx + 583 ) + pm_math_Vector3_dot_ra ( xx + 181 , xx + 586 ) ) ; xx [ 76 ] =
xx [ 127 ] * xx [ 86 ] * state [ 61 ] - xx [ 289 ] * state [ 64 ] - xx [ 152
] * xx [ 121 ] - ( pm_math_Vector3_dot_ra ( xx + 167 , xx + 583 ) +
pm_math_Vector3_dot_ra ( xx + 215 , xx + 586 ) ) ; xx [ 84 ] = xx [ 127 ] *
xx [ 86 ] * state [ 62 ] - xx [ 289 ] * state [ 65 ] - ( xx [ 54 ] * xx [ 75
] - xx [ 28 ] * xx [ 83 ] + xx [ 70 ] + pm_math_Vector3_dot_ra ( xx + 227 ,
xx + 586 ) ) ; xx [ 93 ] = xx [ 82 ] ; xx [ 94 ] = xx [ 76 ] ; xx [ 95 ] = xx
[ 84 ] ; solveSymmetricPosDef ( xx + 191 , xx + 93 , 3 , 1 , xx + 163 , xx +
167 ) ; solveSymmetricPosDef ( xx + 191 , xx + 1339 , 3 , 6 , xx + 1422 , xx
+ 93 ) ; xx [ 93 ] = xx [ 1422 ] ; xx [ 94 ] = xx [ 1425 ] ; xx [ 95 ] = xx [
1428 ] ; xx [ 167 ] = - ( xx [ 139 ] * inputDdot [ 8 ] ) ; xx [ 168 ] = xx [
144 ] * inputDdot [ 8 ] ; xx [ 169 ] = xx [ 145 ] * inputDdot [ 8 ] ;
pm_math_Quaternion_inverseXform_ra ( xx + 863 , xx + 167 , xx + 181 ) ; xx [
215 ] = xx [ 1431 ] ; xx [ 216 ] = xx [ 1434 ] ; xx [ 217 ] = xx [ 1437 ] ;
xx [ 28 ] = xx [ 26 ] * xx [ 860 ] ; xx [ 54 ] = xx [ 26 ] * xx [ 861 ] ; xx
[ 227 ] = - ( xx [ 134 ] * inputDot [ 8 ] ) ; xx [ 228 ] = xx [ 179 ] *
inputDot [ 8 ] ; xx [ 229 ] = - ( xx [ 210 ] * inputDot [ 8 ] ) ;
pm_math_Vector3_cross_ra ( xx + 1400 , xx + 227 , xx + 504 ) ;
pm_math_Vector3_cross_ra ( xx + 167 , xx + 722 , xx + 227 ) ; xx [ 167 ] = xx
[ 7 ] * ( xx [ 862 ] * xx [ 28 ] - xx [ 859 ] * xx [ 54 ] ) + xx [ 504 ] - xx
[ 134 ] * inputDdot [ 8 ] + xx [ 227 ] ; xx [ 168 ] = ( xx [ 859 ] * xx [ 28
] + xx [ 862 ] * xx [ 54 ] ) * xx [ 7 ] + xx [ 505 ] + xx [ 179 ] * inputDdot
[ 8 ] + xx [ 228 ] ; xx [ 169 ] = xx [ 506 ] - xx [ 210 ] * inputDdot [ 8 ] -
( xx [ 860 ] * xx [ 28 ] + xx [ 861 ] * xx [ 54 ] ) * xx [ 7 ] + xx [ 229 ] +
xx [ 26 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 863 , xx + 167 , xx +
227 ) ; xx [ 28 ] = pm_math_Vector3_dot_ra ( xx + 93 , xx + 181 ) +
pm_math_Vector3_dot_ra ( xx + 215 , xx + 227 ) ; xx [ 54 ] = xx [ 163 ] - xx
[ 28 ] ; xx [ 93 ] = xx [ 1423 ] ; xx [ 94 ] = xx [ 1426 ] ; xx [ 95 ] = xx [
1429 ] ; xx [ 167 ] = xx [ 1432 ] ; xx [ 168 ] = xx [ 1435 ] ; xx [ 169 ] =
xx [ 1438 ] ; xx [ 70 ] = pm_math_Vector3_dot_ra ( xx + 93 , xx + 181 ) +
pm_math_Vector3_dot_ra ( xx + 167 , xx + 227 ) ; xx [ 75 ] = xx [ 164 ] - xx
[ 70 ] ; xx [ 93 ] = xx [ 1424 ] ; xx [ 94 ] = xx [ 1427 ] ; xx [ 95 ] = xx [
1430 ] ; xx [ 167 ] = xx [ 1433 ] ; xx [ 168 ] = xx [ 1436 ] ; xx [ 169 ] =
xx [ 1439 ] ; xx [ 83 ] = pm_math_Vector3_dot_ra ( xx + 93 , xx + 181 ) +
pm_math_Vector3_dot_ra ( xx + 167 , xx + 227 ) ; xx [ 86 ] = xx [ 165 ] - xx
[ 83 ] ; xx [ 93 ] = xx [ 6 ] * xx [ 10 ] + xx [ 91 ] * xx [ 14 ] - xx [ 11 ]
; xx [ 94 ] = xx [ 68 ] + xx [ 64 ] * xx [ 10 ] + xx [ 8 ] * xx [ 14 ] + xx [
650 ] + xx [ 40 ] * xx [ 93 ] ; xx [ 95 ] = xx [ 26 ] - ( xx [ 69 ] * xx [ 10
] + xx [ 73 ] + xx [ 92 ] * xx [ 14 ] ) + xx [ 649 ] - xx [ 93 ] * xx [ 50 ]
; xx [ 100 ] = xx [ 30 ] * xx [ 95 ] ; xx [ 121 ] = xx [ 94 ] * xx [ 30 ] ;
xx [ 163 ] = xx [ 7 ] * xx [ 35 ] * inputDot [ 0 ] * inputDot [ 0 ] ; xx [
164 ] = - ( ( ( xx [ 271 ] + xx [ 39 ] ) * xx [ 7 ] - xx [ 0 ] ) * inputDot [
0 ] * inputDot [ 0 ] ) ; xx [ 165 ] = - ( xx [ 7 ] * xx [ 272 ] * inputDot [
0 ] * inputDot [ 0 ] ) ; xx [ 167 ] = - ( ( ( xx [ 271 ] + xx [ 271 ] ) * xx
[ 7 ] - xx [ 0 ] ) * inputDot [ 0 ] * inputDot [ 0 ] ) ; xx [ 168 ] = - ( xx
[ 7 ] * xx [ 267 ] * inputDot [ 0 ] * inputDot [ 0 ] ) ; xx [ 169 ] = xx [ 7
] * xx [ 269 ] * inputDot [ 0 ] * inputDot [ 0 ] ; xx [ 35 ] = xx [ 283 ] ==
0.0 ? 0.0 : ( pm_math_Vector3_dot_ra ( xx + 263 , xx + 163 ) * xx [ 274 ] -
xx [ 266 ] * pm_math_Vector3_dot_ra ( xx + 263 , xx + 167 ) ) / xx [ 283 ] ;
xx [ 39 ] = xx [ 7 ] * xx [ 24 ] * state [ 7 ] * state [ 7 ] ; xx [ 24 ] = xx
[ 27 ] * state [ 7 ] * state [ 7 ] ; xx [ 27 ] = state [ 7 ] * state [ 7 ] ;
xx [ 127 ] = 0.4527250000000004 ; xx [ 133 ] = 1.405725 ; xx [ 134 ] = xx [
133 ] * xx [ 30 ] ; xx [ 139 ] = xx [ 127 ] * xx [ 30 ] ; xx [ 144 ] = xx [
33 ] * xx [ 39 ] + xx [ 36 ] * xx [ 24 ] - xx [ 27 ] * ( xx [ 127 ] + ( xx [
25 ] * xx [ 134 ] - xx [ 139 ] * xx [ 30 ] ) * xx [ 7 ] ) ; xx [ 127 ] = ( xx
[ 133 ] - xx [ 7 ] * ( xx [ 25 ] * xx [ 139 ] + xx [ 134 ] * xx [ 30 ] ) ) *
xx [ 27 ] - ( xx [ 33 ] * xx [ 24 ] - xx [ 36 ] * xx [ 39 ] ) ; xx [ 27 ] =
xx [ 283 ] == 0.0 ? 0.0 : ( xx [ 274 ] * ( xx [ 144 ] * xx [ 273 ] - xx [ 38
] * xx [ 127 ] ) - xx [ 266 ] * ( xx [ 255 ] * xx [ 127 ] - xx [ 144 ] * xx [
270 ] ) ) / xx [ 283 ] ; xx [ 134 ] = xx [ 295 ] == 0.0 ? 0.0 : ( xx [ 294 ]
* ( xx [ 144 ] * xx [ 292 ] - xx [ 293 ] * xx [ 127 ] + xx [ 39 ] * xx [ 254
] + xx [ 24 ] * xx [ 256 ] ) - xx [ 42 ] * ( xx [ 287 ] * xx [ 127 ] - xx [
144 ] * xx [ 290 ] + xx [ 39 ] * xx [ 256 ] - xx [ 24 ] * xx [ 254 ] ) ) / xx
[ 295 ] ; xx [ 24 ] = xx [ 36 ] * state [ 7 ] ; xx [ 39 ] = xx [ 33 ] * state
[ 7 ] ; xx [ 127 ] = xx [ 39 ] * xx [ 30 ] ; xx [ 139 ] = xx [ 24 ] * xx [ 30
] ; xx [ 144 ] = ( xx [ 276 ] + xx [ 37 ] ) * state [ 7 ] - ( xx [ 24 ] + (
xx [ 25 ] * xx [ 127 ] - xx [ 139 ] * xx [ 30 ] ) * xx [ 7 ] ) ; xx [ 24 ] =
xx [ 246 ] * inputDot [ 0 ] ; xx [ 37 ] = xx [ 246 ] * xx [ 24 ] ; xx [ 145 ]
= ( xx [ 37 ] + xx [ 37 ] ) * xx [ 7 ] - inputDot [ 0 ] ; xx [ 152 ] = xx [ 7
] * ( xx [ 127 ] * xx [ 30 ] + xx [ 25 ] * xx [ 139 ] ) - xx [ 39 ] + ( xx [
278 ] - xx [ 280 ] ) * state [ 7 ] ; xx [ 39 ] = xx [ 235 ] * xx [ 24 ] ; xx
[ 24 ] = ( xx [ 39 ] + xx [ 39 ] ) * xx [ 7 ] ; xx [ 127 ] = xx [ 235 ] *
inputDot [ 0 ] ; xx [ 139 ] = xx [ 235 ] * xx [ 127 ] ; xx [ 161 ] = xx [ 7 ]
* ( xx [ 37 ] - xx [ 139 ] ) ; xx [ 163 ] = ( xx [ 39 ] + xx [ 246 ] * xx [
127 ] ) * xx [ 7 ] ; xx [ 127 ] = xx [ 283 ] == 0.0 ? 0.0 : xx [ 225 ] * ( xx
[ 274 ] * xx [ 7 ] * ( xx [ 144 ] * xx [ 145 ] + xx [ 152 ] * xx [ 24 ] ) -
xx [ 266 ] * xx [ 7 ] * ( xx [ 152 ] * xx [ 161 ] - xx [ 144 ] * xx [ 163 ] )
) / xx [ 283 ] ; xx [ 164 ] = xx [ 30 ] * state [ 7 ] ; xx [ 165 ] = xx [ 7 ]
* xx [ 164 ] * xx [ 30 ] - state [ 7 ] ; xx [ 167 ] = xx [ 7 ] * xx [ 25 ] *
xx [ 164 ] ; xx [ 164 ] = xx [ 295 ] == 0.0 ? 0.0 : ( xx [ 294 ] * ( xx [ 144
] * xx [ 165 ] + xx [ 152 ] * xx [ 167 ] ) * xx [ 7 ] - xx [ 42 ] * xx [ 7 ]
* ( xx [ 152 ] * xx [ 165 ] - xx [ 144 ] * xx [ 167 ] ) ) / xx [ 295 ] ; xx [
168 ] = 0.01485446135524357 ; xx [ 181 ] = xx [ 145 ] ; xx [ 182 ] = xx [ 7 ]
* ( xx [ 39 ] - xx [ 39 ] ) ; xx [ 183 ] = xx [ 24 ] ; xx [ 24 ] = xx [ 152 ]
* xx [ 273 ] - xx [ 144 ] * xx [ 38 ] + pm_math_Vector3_dot_ra ( xx + 263 ,
xx + 181 ) ; xx [ 181 ] = - xx [ 163 ] ; xx [ 182 ] = inputDot [ 0 ] - ( xx [
37 ] + xx [ 139 ] ) * xx [ 7 ] ; xx [ 183 ] = xx [ 161 ] ; xx [ 37 ] = xx [
144 ] * xx [ 255 ] - xx [ 152 ] * xx [ 270 ] + pm_math_Vector3_dot_ra ( xx +
263 , xx + 181 ) ; xx [ 38 ] = xx [ 283 ] * xx [ 283 ] ; xx [ 38 ] = xx [ 38
] == 0.0 ? 0.0 : ( xx [ 24 ] * xx [ 37 ] * ( xx [ 279 ] - xx [ 282 ] ) - xx [
266 ] * xx [ 274 ] * ( xx [ 37 ] * xx [ 37 ] - xx [ 24 ] * xx [ 24 ] ) ) / xx
[ 38 ] ; xx [ 24 ] = xx [ 152 ] * xx [ 292 ] - xx [ 144 ] * xx [ 293 ] + xx [
254 ] * xx [ 165 ] + xx [ 167 ] * xx [ 256 ] ; xx [ 37 ] = xx [ 144 ] * xx [
287 ] - xx [ 152 ] * xx [ 290 ] + xx [ 256 ] * xx [ 165 ] - xx [ 167 ] * xx [
254 ] ; xx [ 39 ] = xx [ 295 ] * xx [ 295 ] ; xx [ 39 ] = xx [ 39 ] == 0.0 ?
0.0 : ( xx [ 24 ] * xx [ 37 ] * ( xx [ 286 ] - xx [ 291 ] ) - xx [ 42 ] * xx
[ 294 ] * ( xx [ 37 ] * xx [ 37 ] - xx [ 24 ] * xx [ 24 ] ) ) / xx [ 39 ] ;
xx [ 181 ] = xx [ 245 ] - xx [ 0 ] ; xx [ 182 ] = xx [ 268 ] ; xx [ 183 ] =
xx [ 270 ] ; xx [ 24 ] = xx [ 283 ] == 0.0 ? 0.0 : ( pm_math_Vector3_dot_ra (
xx + 263 , xx + 181 ) * xx [ 274 ] - xx [ 282 ] ) / xx [ 283 ] ; xx [ 37 ] =
xx [ 385 ] * xx [ 352 ] + xx [ 467 ] * xx [ 362 ] - xx [ 277 ] ; xx [ 42 ] =
xx [ 419 ] + xx [ 395 ] * xx [ 352 ] + xx [ 353 ] * xx [ 362 ] + xx [ 568 ] +
xx [ 427 ] * xx [ 37 ] ; xx [ 139 ] = xx [ 26 ] - ( xx [ 404 ] * xx [ 352 ] +
xx [ 429 ] + xx [ 468 ] * xx [ 362 ] ) + xx [ 477 ] - xx [ 37 ] * xx [ 435 ]
; xx [ 144 ] = xx [ 417 ] * xx [ 139 ] ; xx [ 145 ] = xx [ 42 ] * xx [ 417 ]
; xx [ 181 ] = xx [ 7 ] * xx [ 421 ] * inputDot [ 3 ] * inputDot [ 3 ] ; xx [
182 ] = - ( ( ( xx [ 548 ] + xx [ 420 ] ) * xx [ 7 ] - xx [ 0 ] ) * inputDot
[ 3 ] * inputDot [ 3 ] ) ; xx [ 183 ] = - ( xx [ 7 ] * xx [ 549 ] * inputDot
[ 3 ] * inputDot [ 3 ] ) ; xx [ 215 ] = - ( ( ( xx [ 548 ] + xx [ 548 ] ) *
xx [ 7 ] - xx [ 0 ] ) * inputDot [ 3 ] * inputDot [ 3 ] ) ; xx [ 216 ] = - (
xx [ 7 ] * xx [ 500 ] * inputDot [ 3 ] * inputDot [ 3 ] ) ; xx [ 217 ] = xx [
7 ] * xx [ 544 ] * inputDot [ 3 ] * inputDot [ 3 ] ; xx [ 152 ] = xx [ 567 ]
== 0.0 ? 0.0 : ( pm_math_Vector3_dot_ra ( xx + 540 , xx + 181 ) * xx [ 546 ]
- xx [ 493 ] * pm_math_Vector3_dot_ra ( xx + 540 , xx + 215 ) ) / xx [ 567 ]
; xx [ 161 ] = xx [ 7 ] * xx [ 411 ] * state [ 29 ] * state [ 29 ] ; xx [ 163
] = xx [ 414 ] * state [ 29 ] * state [ 29 ] ; xx [ 165 ] = state [ 29 ] *
state [ 29 ] ; xx [ 167 ] = xx [ 133 ] * xx [ 417 ] ; xx [ 169 ] = xx [ 276 ]
* xx [ 417 ] ; xx [ 179 ] = xx [ 33 ] * xx [ 161 ] + xx [ 422 ] * xx [ 163 ]
- xx [ 165 ] * ( xx [ 276 ] + ( xx [ 412 ] * xx [ 167 ] - xx [ 169 ] * xx [
417 ] ) * xx [ 7 ] ) ; xx [ 181 ] = ( xx [ 133 ] - xx [ 7 ] * ( xx [ 412 ] *
xx [ 169 ] + xx [ 167 ] * xx [ 417 ] ) ) * xx [ 165 ] - ( xx [ 33 ] * xx [
163 ] - xx [ 422 ] * xx [ 161 ] ) ; xx [ 165 ] = xx [ 567 ] == 0.0 ? 0.0 : (
xx [ 546 ] * ( xx [ 179 ] * xx [ 550 ] - xx [ 424 ] * xx [ 181 ] ) - xx [ 493
] * ( xx [ 465 ] * xx [ 181 ] - xx [ 179 ] * xx [ 545 ] ) ) / xx [ 567 ] ; xx
[ 167 ] = xx [ 579 ] == 0.0 ? 0.0 : ( xx [ 578 ] * ( xx [ 179 ] * xx [ 576 ]
- xx [ 577 ] * xx [ 181 ] + xx [ 161 ] * xx [ 492 ] + xx [ 163 ] * xx [ 374 ]
) - xx [ 428 ] * ( xx [ 571 ] * xx [ 181 ] - xx [ 179 ] * xx [ 574 ] + xx [
161 ] * xx [ 374 ] - xx [ 163 ] * xx [ 492 ] ) ) / xx [ 579 ] ; xx [ 161 ] =
xx [ 422 ] * state [ 29 ] ; xx [ 163 ] = xx [ 33 ] * state [ 29 ] ; xx [ 169
] = xx [ 163 ] * xx [ 417 ] ; xx [ 179 ] = xx [ 161 ] * xx [ 417 ] ; xx [ 181
] = ( xx [ 36 ] + xx [ 423 ] ) * state [ 29 ] - ( xx [ 161 ] + ( xx [ 412 ] *
xx [ 169 ] - xx [ 179 ] * xx [ 417 ] ) * xx [ 7 ] ) ; xx [ 161 ] = xx [ 491 ]
* inputDot [ 3 ] ; xx [ 182 ] = xx [ 491 ] * xx [ 161 ] ; xx [ 183 ] = ( xx [
182 ] + xx [ 182 ] ) * xx [ 7 ] - inputDot [ 3 ] ; xx [ 210 ] = xx [ 7 ] * (
xx [ 169 ] * xx [ 417 ] + xx [ 412 ] * xx [ 179 ] ) - xx [ 163 ] + ( xx [ 278
] - xx [ 565 ] ) * state [ 29 ] ; xx [ 163 ] = xx [ 398 ] * xx [ 161 ] ; xx [
161 ] = ( xx [ 163 ] + xx [ 163 ] ) * xx [ 7 ] ; xx [ 169 ] = xx [ 398 ] *
inputDot [ 3 ] ; xx [ 179 ] = xx [ 398 ] * xx [ 169 ] ; xx [ 215 ] = xx [ 7 ]
* ( xx [ 182 ] - xx [ 179 ] ) ; xx [ 216 ] = ( xx [ 163 ] + xx [ 491 ] * xx [
169 ] ) * xx [ 7 ] ; xx [ 169 ] = xx [ 567 ] == 0.0 ? 0.0 : xx [ 225 ] * ( xx
[ 546 ] * xx [ 7 ] * ( xx [ 181 ] * xx [ 183 ] + xx [ 210 ] * xx [ 161 ] ) -
xx [ 493 ] * xx [ 7 ] * ( xx [ 210 ] * xx [ 215 ] - xx [ 181 ] * xx [ 216 ] )
) / xx [ 567 ] ; xx [ 217 ] = xx [ 417 ] * state [ 29 ] ; xx [ 223 ] = xx [ 7
] * xx [ 217 ] * xx [ 417 ] - state [ 29 ] ; xx [ 227 ] = xx [ 7 ] * xx [ 412
] * xx [ 217 ] ; xx [ 217 ] = xx [ 579 ] == 0.0 ? 0.0 : ( xx [ 578 ] * ( xx [
181 ] * xx [ 223 ] + xx [ 210 ] * xx [ 227 ] ) * xx [ 7 ] - xx [ 428 ] * xx [
7 ] * ( xx [ 210 ] * xx [ 223 ] - xx [ 181 ] * xx [ 227 ] ) ) / xx [ 579 ] ;
xx [ 254 ] = xx [ 183 ] ; xx [ 255 ] = xx [ 7 ] * ( xx [ 163 ] - xx [ 163 ] )
; xx [ 256 ] = xx [ 161 ] ; xx [ 161 ] = xx [ 210 ] * xx [ 550 ] - xx [ 181 ]
* xx [ 424 ] + pm_math_Vector3_dot_ra ( xx + 540 , xx + 254 ) ; xx [ 254 ] =
- xx [ 216 ] ; xx [ 255 ] = inputDot [ 3 ] - ( xx [ 182 ] + xx [ 179 ] ) * xx
[ 7 ] ; xx [ 256 ] = xx [ 215 ] ; xx [ 163 ] = xx [ 181 ] * xx [ 465 ] - xx [
210 ] * xx [ 545 ] + pm_math_Vector3_dot_ra ( xx + 540 , xx + 254 ) ; xx [
179 ] = xx [ 567 ] * xx [ 567 ] ; xx [ 179 ] = xx [ 179 ] == 0.0 ? 0.0 : ( xx
[ 161 ] * xx [ 163 ] * ( xx [ 551 ] - xx [ 552 ] ) - xx [ 493 ] * xx [ 546 ]
* ( xx [ 163 ] * xx [ 163 ] - xx [ 161 ] * xx [ 161 ] ) ) / xx [ 179 ] ; xx [
161 ] = xx [ 210 ] * xx [ 576 ] - xx [ 181 ] * xx [ 577 ] + xx [ 492 ] * xx [
223 ] + xx [ 227 ] * xx [ 374 ] ; xx [ 163 ] = xx [ 181 ] * xx [ 571 ] - xx [
210 ] * xx [ 574 ] + xx [ 374 ] * xx [ 223 ] - xx [ 227 ] * xx [ 492 ] ; xx [
181 ] = xx [ 579 ] * xx [ 579 ] ; xx [ 181 ] = xx [ 181 ] == 0.0 ? 0.0 : ( xx
[ 161 ] * xx [ 163 ] * ( xx [ 570 ] - xx [ 575 ] ) - xx [ 428 ] * xx [ 578 ]
* ( xx [ 163 ] * xx [ 163 ] - xx [ 161 ] * xx [ 161 ] ) ) / xx [ 181 ] ; xx [
227 ] = xx [ 425 ] - xx [ 0 ] ; xx [ 228 ] = xx [ 543 ] ; xx [ 229 ] = xx [
545 ] ; xx [ 161 ] = xx [ 567 ] == 0.0 ? 0.0 : ( pm_math_Vector3_dot_ra ( xx
+ 540 , xx + 227 ) * xx [ 546 ] - xx [ 552 ] ) / xx [ 567 ] ; xx [ 163 ] = xx
[ 667 ] * xx [ 47 ] + xx [ 738 ] * xx [ 636 ] - xx [ 433 ] ; xx [ 182 ] = xx
[ 628 ] + xx [ 677 ] * xx [ 47 ] + xx [ 637 ] * xx [ 636 ] + xx [ 655 ] + xx
[ 705 ] * xx [ 163 ] ; xx [ 183 ] = xx [ 26 ] - ( xx [ 686 ] * xx [ 47 ] + xx
[ 631 ] + xx [ 739 ] * xx [ 636 ] ) + xx [ 652 ] - xx [ 163 ] * xx [ 712 ] ;
xx [ 210 ] = xx [ 697 ] * xx [ 183 ] ; xx [ 215 ] = xx [ 182 ] * xx [ 697 ] ;
xx [ 227 ] = xx [ 7 ] * xx [ 49 ] * inputDot [ 6 ] * inputDot [ 6 ] ; xx [
228 ] = - ( ( ( xx [ 809 ] + xx [ 34 ] ) * xx [ 7 ] - xx [ 0 ] ) * inputDot [
6 ] * inputDot [ 6 ] ) ; xx [ 229 ] = - ( xx [ 7 ] * xx [ 810 ] * inputDot [
6 ] * inputDot [ 6 ] ) ; xx [ 254 ] = - ( ( ( xx [ 809 ] + xx [ 809 ] ) * xx
[ 7 ] - xx [ 0 ] ) * inputDot [ 6 ] * inputDot [ 6 ] ) ; xx [ 255 ] = - ( xx
[ 7 ] * xx [ 704 ] * inputDot [ 6 ] * inputDot [ 6 ] ) ; xx [ 256 ] = xx [ 7
] * xx [ 730 ] * inputDot [ 6 ] * inputDot [ 6 ] ; xx [ 34 ] = xx [ 812 ] ==
0.0 ? 0.0 : ( pm_math_Vector3_dot_ra ( xx + 797 , xx + 227 ) * xx [ 774 ] -
xx [ 701 ] * pm_math_Vector3_dot_ra ( xx + 797 , xx + 254 ) ) / xx [ 812 ] ;
xx [ 49 ] = xx [ 7 ] * xx [ 689 ] * state [ 51 ] * state [ 51 ] ; xx [ 216 ]
= xx [ 695 ] * state [ 51 ] * state [ 51 ] ; xx [ 223 ] = state [ 51 ] *
state [ 51 ] ; xx [ 227 ] = xx [ 133 ] * xx [ 697 ] ; xx [ 228 ] = xx [ 276 ]
* xx [ 697 ] ; xx [ 229 ] = xx [ 33 ] * xx [ 49 ] + xx [ 422 ] * xx [ 216 ] -
xx [ 223 ] * ( xx [ 276 ] + ( xx [ 693 ] * xx [ 227 ] - xx [ 228 ] * xx [ 697
] ) * xx [ 7 ] ) ; xx [ 245 ] = ( xx [ 133 ] - xx [ 7 ] * ( xx [ 693 ] * xx [
228 ] + xx [ 227 ] * xx [ 697 ] ) ) * xx [ 223 ] - ( xx [ 33 ] * xx [ 216 ] -
xx [ 422 ] * xx [ 49 ] ) ; xx [ 133 ] = xx [ 812 ] == 0.0 ? 0.0 : ( xx [ 774
] * ( xx [ 229 ] * xx [ 811 ] - xx [ 700 ] * xx [ 245 ] ) - xx [ 701 ] * ( xx
[ 247 ] * xx [ 245 ] - xx [ 229 ] * xx [ 748 ] ) ) / xx [ 812 ] ; xx [ 223 ]
= xx [ 838 ] == 0.0 ? 0.0 : ( xx [ 837 ] * ( xx [ 229 ] * xx [ 835 ] - xx [
836 ] * xx [ 245 ] + xx [ 49 ] * xx [ 226 ] + xx [ 216 ] * xx [ 657 ] ) - xx
[ 426 ] * ( xx [ 822 ] * xx [ 245 ] - xx [ 229 ] * xx [ 833 ] + xx [ 49 ] *
xx [ 657 ] - xx [ 216 ] * xx [ 226 ] ) ) / xx [ 838 ] ; xx [ 49 ] = xx [ 422
] * state [ 51 ] ; xx [ 216 ] = xx [ 33 ] * state [ 51 ] ; xx [ 33 ] = xx [
216 ] * xx [ 697 ] ; xx [ 227 ] = xx [ 49 ] * xx [ 697 ] ; xx [ 228 ] = ( xx
[ 36 ] + xx [ 275 ] ) * state [ 51 ] - ( xx [ 49 ] + ( xx [ 693 ] * xx [ 33 ]
- xx [ 227 ] * xx [ 697 ] ) * xx [ 7 ] ) ; xx [ 36 ] = xx [ 729 ] * inputDot
[ 6 ] ; xx [ 49 ] = xx [ 729 ] * xx [ 36 ] ; xx [ 229 ] = ( xx [ 49 ] + xx [
49 ] ) * xx [ 7 ] - inputDot [ 6 ] ; xx [ 245 ] = xx [ 7 ] * ( xx [ 33 ] * xx
[ 697 ] + xx [ 693 ] * xx [ 227 ] ) - xx [ 216 ] + ( xx [ 278 ] - xx [ 814 ]
) * state [ 51 ] ; xx [ 33 ] = xx [ 680 ] * xx [ 36 ] ; xx [ 36 ] = ( xx [ 33
] + xx [ 33 ] ) * xx [ 7 ] ; xx [ 216 ] = xx [ 680 ] * inputDot [ 6 ] ; xx [
227 ] = xx [ 680 ] * xx [ 216 ] ; xx [ 254 ] = xx [ 7 ] * ( xx [ 49 ] - xx [
227 ] ) ; xx [ 255 ] = ( xx [ 33 ] + xx [ 729 ] * xx [ 216 ] ) * xx [ 7 ] ;
xx [ 216 ] = xx [ 812 ] == 0.0 ? 0.0 : xx [ 225 ] * ( xx [ 774 ] * xx [ 7 ] *
( xx [ 228 ] * xx [ 229 ] + xx [ 245 ] * xx [ 36 ] ) - xx [ 701 ] * xx [ 7 ]
* ( xx [ 245 ] * xx [ 254 ] - xx [ 228 ] * xx [ 255 ] ) ) / xx [ 812 ] ; xx [
256 ] = xx [ 697 ] * state [ 51 ] ; xx [ 263 ] = xx [ 7 ] * xx [ 256 ] * xx [
697 ] - state [ 51 ] ; xx [ 264 ] = xx [ 7 ] * xx [ 693 ] * xx [ 256 ] ; xx [
256 ] = xx [ 838 ] == 0.0 ? 0.0 : ( xx [ 837 ] * ( xx [ 228 ] * xx [ 263 ] +
xx [ 245 ] * xx [ 264 ] ) * xx [ 7 ] - xx [ 426 ] * xx [ 7 ] * ( xx [ 245 ] *
xx [ 263 ] - xx [ 228 ] * xx [ 264 ] ) ) / xx [ 838 ] ; xx [ 265 ] = xx [ 229
] ; xx [ 266 ] = xx [ 7 ] * ( xx [ 33 ] - xx [ 33 ] ) ; xx [ 267 ] = xx [ 36
] ; xx [ 33 ] = xx [ 245 ] * xx [ 811 ] - xx [ 228 ] * xx [ 700 ] +
pm_math_Vector3_dot_ra ( xx + 797 , xx + 265 ) ; xx [ 265 ] = - xx [ 255 ] ;
xx [ 266 ] = inputDot [ 6 ] - ( xx [ 49 ] + xx [ 227 ] ) * xx [ 7 ] ; xx [
267 ] = xx [ 254 ] ; xx [ 36 ] = xx [ 228 ] * xx [ 247 ] - xx [ 245 ] * xx [
748 ] + pm_math_Vector3_dot_ra ( xx + 797 , xx + 265 ) ; xx [ 49 ] = xx [ 812
] * xx [ 812 ] ; xx [ 49 ] = xx [ 49 ] == 0.0 ? 0.0 : ( xx [ 33 ] * xx [ 36 ]
* ( xx [ 703 ] - xx [ 711 ] ) - xx [ 701 ] * xx [ 774 ] * ( xx [ 36 ] * xx [
36 ] - xx [ 33 ] * xx [ 33 ] ) ) / xx [ 49 ] ; xx [ 33 ] = xx [ 245 ] * xx [
835 ] - xx [ 228 ] * xx [ 836 ] + xx [ 226 ] * xx [ 263 ] + xx [ 264 ] * xx [
657 ] ; xx [ 36 ] = xx [ 228 ] * xx [ 822 ] - xx [ 245 ] * xx [ 833 ] + xx [
657 ] * xx [ 263 ] - xx [ 264 ] * xx [ 226 ] ; xx [ 226 ] = xx [ 838 ] * xx [
838 ] ; xx [ 226 ] = xx [ 226 ] == 0.0 ? 0.0 : ( xx [ 33 ] * xx [ 36 ] * ( xx
[ 821 ] - xx [ 834 ] ) - xx [ 426 ] * xx [ 837 ] * ( xx [ 36 ] * xx [ 36 ] -
xx [ 33 ] * xx [ 33 ] ) ) / xx [ 226 ] ; xx [ 227 ] = xx [ 234 ] - xx [ 0 ] ;
xx [ 228 ] = xx [ 728 ] ; xx [ 229 ] = xx [ 748 ] ; xx [ 0 ] = xx [ 812 ] ==
0.0 ? 0.0 : ( pm_math_Vector3_dot_ra ( xx + 797 , xx + 227 ) * xx [ 774 ] -
xx [ 711 ] ) / xx [ 812 ] ; xx [ 1326 ] = ( xx [ 146 ] + xx [ 251 ] + xx [
257 ] ) * inputDdot [ 1 ] - ( xx [ 296 ] + xx [ 281 ] - ( xx [ 357 ] + xx [
363 ] + xx [ 523 ] * xx [ 3 ] + xx [ 562 ] + xx [ 7 ] * xx [ 580 ] ) + xx [
17 ] * xx [ 10 ] + xx [ 55 ] * xx [ 14 ] + xx [ 138 ] * xx [ 57 ] ) + xx [
184 ] * xx [ 71 ] + xx [ 185 ] * xx [ 90 ] + xx [ 186 ] * xx [ 98 ] ; xx [
1327 ] = ( xx [ 147 ] + xx [ 252 ] + xx [ 258 ] ) * inputDdot [ 1 ] - ( xx [
297 ] + xx [ 99 ] - ( xx [ 358 ] + xx [ 364 ] + xx [ 524 ] * xx [ 3 ] + xx [
563 ] + xx [ 7 ] * xx [ 581 ] ) + xx [ 10 ] * xx [ 190 ] + xx [ 230 ] * xx [
14 ] + xx [ 232 ] * xx [ 57 ] ) + xx [ 77 ] * xx [ 71 ] + xx [ 239 ] * xx [
90 ] + xx [ 240 ] * xx [ 98 ] ; xx [ 1328 ] = ( xx [ 148 ] + xx [ 253 ] + xx
[ 259 ] ) * inputDdot [ 1 ] - ( xx [ 298 ] + xx [ 88 ] - ( xx [ 359 ] + xx [
365 ] + xx [ 525 ] * xx [ 3 ] + xx [ 564 ] + xx [ 7 ] * xx [ 582 ] ) + xx [
10 ] * xx [ 125 ] + xx [ 14 ] * xx [ 126 ] + xx [ 101 ] * xx [ 57 ] ) + xx [
89 ] * xx [ 71 ] + xx [ 131 ] * xx [ 90 ] + xx [ 132 ] * xx [ 98 ] ; xx [
1329 ] = ( xx [ 157 ] + xx [ 327 ] + xx [ 170 ] ) * inputDdot [ 2 ] - ( xx [
330 ] + xx [ 281 ] - ( xx [ 310 ] + xx [ 501 ] + xx [ 526 ] * xx [ 124 ] + xx
[ 556 ] + xx [ 7 ] * xx [ 559 ] ) + xx [ 221 ] * xx [ 10 ] + xx [ 128 ] * xx
[ 14 ] + xx [ 233 ] * xx [ 57 ] ) + xx [ 314 ] * xx [ 115 ] + xx [ 315 ] * xx
[ 160 ] + xx [ 348 ] * xx [ 174 ] ; xx [ 1330 ] = ( xx [ 158 ] + xx [ 328 ] +
xx [ 171 ] ) * inputDdot [ 2 ] - ( xx [ 331 ] + xx [ 99 ] - ( xx [ 311 ] + xx
[ 502 ] + xx [ 527 ] * xx [ 124 ] + xx [ 557 ] + xx [ 7 ] * xx [ 560 ] ) + xx
[ 10 ] * xx [ 137 ] + xx [ 129 ] * xx [ 14 ] + xx [ 135 ] * xx [ 57 ] ) + xx
[ 349 ] * xx [ 115 ] + xx [ 350 ] * xx [ 160 ] + xx [ 354 ] * xx [ 174 ] ; xx
[ 1331 ] = ( xx [ 159 ] + xx [ 329 ] + xx [ 172 ] ) * inputDdot [ 2 ] - ( xx
[ 332 ] + xx [ 88 ] - ( xx [ 312 ] + xx [ 503 ] + xx [ 528 ] * xx [ 124 ] +
xx [ 558 ] + xx [ 7 ] * xx [ 561 ] ) + xx [ 10 ] * xx [ 224 ] + xx [ 14 ] *
xx [ 130 ] + xx [ 136 ] * xx [ 57 ] ) + xx [ 324 ] * xx [ 115 ] + xx [ 325 ]
* xx [ 160 ] + xx [ 326 ] * xx [ 174 ] ; xx [ 1332 ] = ( xx [ 248 ] + xx [
553 ] + xx [ 316 ] ) * inputDdot [ 4 ] - ( xx [ 614 ] + xx [ 322 ] - ( xx [
816 ] + xx [ 826 ] + xx [ 829 ] * xx [ 313 ] + xx [ 855 ] + xx [ 7 ] * xx [
867 ] ) + xx [ 407 ] * xx [ 352 ] + xx [ 402 ] * xx [ 362 ] + xx [ 478 ] * xx
[ 413 ] ) + xx [ 368 ] * xx [ 320 ] + xx [ 538 ] * xx [ 342 ] + xx [ 539 ] *
xx [ 430 ] ; xx [ 1333 ] = ( xx [ 249 ] + xx [ 554 ] + xx [ 317 ] ) *
inputDdot [ 4 ] - ( xx [ 615 ] + xx [ 432 ] - ( xx [ 817 ] + xx [ 827 ] + xx
[ 830 ] * xx [ 313 ] + xx [ 856 ] + xx [ 7 ] * xx [ 868 ] ) + xx [ 388 ] * xx
[ 352 ] + xx [ 399 ] * xx [ 362 ] + xx [ 494 ] * xx [ 413 ] ) + xx [ 375 ] *
xx [ 320 ] + xx [ 495 ] * xx [ 342 ] + xx [ 496 ] * xx [ 430 ] ; xx [ 1334 ]
= ( xx [ 250 ] + xx [ 555 ] + xx [ 318 ] ) * inputDdot [ 4 ] - ( xx [ 616 ] +
xx [ 222 ] - ( xx [ 818 ] + xx [ 828 ] + xx [ 831 ] * xx [ 313 ] + xx [ 857 ]
+ xx [ 7 ] * xx [ 869 ] ) + xx [ 352 ] * xx [ 396 ] + xx [ 362 ] * xx [ 397 ]
+ xx [ 408 ] * xx [ 413 ] ) + xx [ 409 ] * xx [ 320 ] + xx [ 438 ] * xx [ 342
] + xx [ 462 ] * xx [ 430 ] ; xx [ 1335 ] = ( xx [ 447 ] + xx [ 469 ] + xx [
450 ] ) * inputDdot [ 5 ] - ( xx [ 472 ] + xx [ 322 ] - ( xx [ 520 ] + xx [
594 ] + xx [ 762 ] * xx [ 299 ] + xx [ 511 ] + xx [ 7 ] * xx [ 517 ] ) + xx [
464 ] * xx [ 352 ] + xx [ 406 ] * xx [ 362 ] + xx [ 367 ] * xx [ 413 ] ) + xx
[ 598 ] * xx [ 303 ] + xx [ 599 ] * xx [ 370 ] + xx [ 632 ] * xx [ 378 ] ; xx
[ 1336 ] = ( xx [ 448 ] + xx [ 470 ] + xx [ 451 ] ) * inputDdot [ 5 ] - ( xx
[ 473 ] + xx [ 432 ] - ( xx [ 521 ] + xx [ 595 ] + xx [ 763 ] * xx [ 299 ] +
xx [ 512 ] + xx [ 7 ] * xx [ 518 ] ) + xx [ 401 ] * xx [ 352 ] + xx [ 456 ] *
xx [ 362 ] + xx [ 405 ] * xx [ 413 ] ) + xx [ 633 ] * xx [ 303 ] + xx [ 634 ]
* xx [ 370 ] + xx [ 638 ] * xx [ 378 ] ; xx [ 1337 ] = ( xx [ 449 ] + xx [
471 ] + xx [ 452 ] ) * inputDdot [ 5 ] - ( xx [ 474 ] + xx [ 222 ] - ( xx [
522 ] + xx [ 596 ] + xx [ 764 ] * xx [ 299 ] + xx [ 513 ] + xx [ 7 ] * xx [
519 ] ) + xx [ 352 ] * xx [ 457 ] + xx [ 362 ] * xx [ 410 ] + xx [ 458 ] * xx
[ 413 ] ) + xx [ 608 ] * xx [ 303 ] + xx [ 609 ] * xx [ 370 ] + xx [ 610 ] *
xx [ 378 ] ; xx [ 1338 ] = ( xx [ 453 ] + xx [ 603 ] + xx [ 514 ] ) *
inputDdot [ 7 ] - ( xx [ 794 ] + xx [ 436 ] - ( xx [ 1378 ] + xx [ 1381 ] +
xx [ 1366 ] * xx [ 119 ] + xx [ 1372 ] + xx [ 7 ] * xx [ 1384 ] ) + xx [ 688
] * xx [ 47 ] + xx [ 682 ] * xx [ 636 ] + xx [ 766 ] * xx [ 644 ] ) + xx [ 85
] * xx [ 600 ] + xx [ 683 ] * xx [ 602 ] + xx [ 815 ] * xx [ 645 ] ; xx [
1339 ] = ( xx [ 454 ] + xx [ 604 ] + xx [ 515 ] ) * inputDdot [ 7 ] - ( xx [
795 ] + xx [ 646 ] - ( xx [ 1379 ] + xx [ 1382 ] + xx [ 1367 ] * xx [ 119 ] +
xx [ 1373 ] + xx [ 7 ] * xx [ 1385 ] ) + xx [ 87 ] * xx [ 47 ] + xx [ 56 ] *
xx [ 636 ] + xx [ 749 ] * xx [ 644 ] ) + xx [ 78 ] * xx [ 600 ] + xx [ 684 ]
* xx [ 602 ] + xx [ 765 ] * xx [ 645 ] ; xx [ 1340 ] = ( xx [ 455 ] + xx [
605 ] + xx [ 516 ] ) * inputDdot [ 7 ] - ( xx [ 796 ] + xx [ 120 ] - ( xx [
1380 ] + xx [ 1383 ] + xx [ 1368 ] * xx [ 119 ] + xx [ 1374 ] + xx [ 7 ] * xx
[ 1386 ] ) + xx [ 47 ] * xx [ 678 ] + xx [ 636 ] * xx [ 679 ] + xx [ 690 ] *
xx [ 644 ] ) + xx [ 691 ] * xx [ 600 ] + xx [ 714 ] * xx [ 602 ] + xx [ 734 ]
* xx [ 645 ] ; xx [ 1341 ] = ( xx [ 706 ] + xx [ 140 ] + xx [ 719 ] ) *
inputDdot [ 8 ] - ( xx [ 241 ] + xx [ 436 ] - ( xx [ 149 ] + xx [ 187 ] + xx
[ 212 ] * xx [ 53 ] + xx [ 725 ] + xx [ 7 ] * xx [ 236 ] ) + xx [ 736 ] * xx
[ 47 ] + xx [ 180 ] * xx [ 636 ] + xx [ 651 ] * xx [ 644 ] ) + xx [ 175 ] *
xx [ 54 ] + xx [ 176 ] * xx [ 75 ] + xx [ 177 ] * xx [ 86 ] ; xx [ 1342 ] = (
xx [ 707 ] + xx [ 141 ] + xx [ 720 ] ) * inputDdot [ 8 ] - ( xx [ 242 ] + xx
[ 646 ] - ( xx [ 150 ] + xx [ 188 ] + xx [ 213 ] * xx [ 53 ] + xx [ 726 ] +
xx [ 7 ] * xx [ 237 ] ) + xx [ 654 ] * xx [ 47 ] + xx [ 681 ] * xx [ 636 ] +
xx [ 670 ] * xx [ 644 ] ) + xx [ 218 ] * xx [ 54 ] + xx [ 219 ] * xx [ 75 ] +
xx [ 220 ] * xx [ 86 ] ; xx [ 1343 ] = ( xx [ 708 ] + xx [ 142 ] + xx [ 721 ]
) * inputDdot [ 8 ] - ( xx [ 243 ] + xx [ 120 ] - ( xx [ 151 ] + xx [ 189 ] +
xx [ 214 ] * xx [ 53 ] + xx [ 727 ] + xx [ 7 ] * xx [ 238 ] ) + xx [ 47 ] *
xx [ 178 ] + xx [ 636 ] * xx [ 687 ] + xx [ 692 ] * xx [ 644 ] ) + xx [ 853 ]
* xx [ 54 ] + xx [ 854 ] * xx [ 75 ] + xx [ 209 ] * xx [ 86 ] ; xx [ 1344 ] =
( xx [ 463 ] + xx [ 61 ] * xx [ 93 ] + xx [ 63 ] * ( xx [ 94 ] - ( xx [ 25 ]
* xx [ 100 ] + xx [ 121 ] * xx [ 30 ] ) * xx [ 7 ] ) + ( xx [ 95 ] + xx [ 7 ]
* ( xx [ 25 ] * xx [ 121 ] - xx [ 100 ] * xx [ 30 ] ) ) * xx [ 66 ] ) * xx [
31 ] - ( xx [ 225 ] * xx [ 35 ] + xx [ 225 ] * xx [ 27 ] + xx [ 134 ] + xx [
127 ] + xx [ 164 ] - xx [ 168 ] * xx [ 38 ] - xx [ 7 ] * xx [ 39 ] ) - xx [
225 ] * xx [ 24 ] * inputDdot [ 0 ] ; xx [ 1345 ] = ( xx [ 393 ] + xx [ 442 ]
* xx [ 37 ] + xx [ 444 ] * ( xx [ 42 ] - ( xx [ 412 ] * xx [ 144 ] + xx [ 145
] * xx [ 417 ] ) * xx [ 7 ] ) + ( xx [ 139 ] + xx [ 7 ] * ( xx [ 412 ] * xx [
145 ] - xx [ 144 ] * xx [ 417 ] ) ) * xx [ 446 ] ) * xx [ 418 ] - ( xx [ 225
] * xx [ 152 ] + xx [ 225 ] * xx [ 165 ] + xx [ 167 ] + xx [ 169 ] + xx [ 217
] - xx [ 168 ] * xx [ 179 ] - xx [ 7 ] * xx [ 181 ] ) - xx [ 225 ] * xx [ 161
] * inputDdot [ 3 ] ; xx [ 1346 ] = ( xx [ 437 ] + xx [ 715 ] * xx [ 163 ] +
xx [ 716 ] * ( xx [ 182 ] - ( xx [ 693 ] * xx [ 210 ] + xx [ 215 ] * xx [ 697
] ) * xx [ 7 ] ) + ( xx [ 183 ] + xx [ 7 ] * ( xx [ 693 ] * xx [ 215 ] - xx [
210 ] * xx [ 697 ] ) ) * xx [ 718 ] ) * xx [ 231 ] - ( xx [ 225 ] * xx [ 34 ]
+ xx [ 225 ] * xx [ 133 ] + xx [ 223 ] + xx [ 216 ] + xx [ 256 ] - xx [ 168 ]
* xx [ 49 ] - xx [ 7 ] * xx [ 226 ] ) - xx [ 225 ] * xx [ 0 ] * inputDdot [ 6
] ; memcpy ( xx + 1422 , xx + 885 , 441 * sizeof ( double ) ) ;
factorAndSolveSymmetric ( xx + 1422 , 21 , xx + 1347 , ii + 5 , xx + 1326 ,
xx + 826 , xx + 1863 ) ; xx [ 0 ] = ( xx [ 31 ] * xx [ 844 ] - xx [ 16 ] ) /
xx [ 60 ] ; xx [ 3 ] = xx [ 648 ] + xx [ 62 ] * xx [ 0 ] ; xx [ 10 ] = xx [ 5
] + xx [ 65 ] * xx [ 0 ] ; xx [ 5 ] = xx [ 10 ] * xx [ 30 ] ; xx [ 14 ] = xx
[ 3 ] * xx [ 30 ] ; xx [ 16 ] = xx [ 3 ] + xx [ 7 ] * ( xx [ 25 ] * xx [ 5 ]
- xx [ 14 ] * xx [ 30 ] ) ; xx [ 3 ] = xx [ 10 ] - ( xx [ 25 ] * xx [ 14 ] +
xx [ 5 ] * xx [ 30 ] ) * xx [ 7 ] ; xx [ 5 ] = xx [ 355 ] + xx [ 371 ] + xx [
59 ] * xx [ 0 ] + xx [ 16 ] * xx [ 40 ] - xx [ 3 ] * xx [ 50 ] + xx [ 698 ] ;
xx [ 33 ] = xx [ 647 ] ; xx [ 34 ] = xx [ 5 ] ; xx [ 35 ] = xx [ 162 ] ; xx [
36 ] = xx [ 16 ] + xx [ 29 ] ; xx [ 37 ] = xx [ 32 ] ; xx [ 38 ] = xx [ 3 ] +
xx [ 43 ] ; xx [ 93 ] = xx [ 826 ] * xx [ 17 ] + xx [ 827 ] * xx [ 190 ] + xx
[ 828 ] * xx [ 125 ] + xx [ 829 ] * xx [ 221 ] + xx [ 830 ] * xx [ 137 ] + xx
[ 831 ] * xx [ 224 ] - ( xx [ 284 ] + pm_math_Vector3_dot_ra ( xx + 19 , xx +
33 ) + pm_math_Vector3_dot_ra ( xx + 79 , xx + 36 ) ) ; xx [ 94 ] = xx [ 826
] * xx [ 55 ] + xx [ 827 ] * xx [ 230 ] + xx [ 828 ] * xx [ 126 ] + xx [ 829
] * xx [ 128 ] + xx [ 830 ] * xx [ 129 ] + xx [ 831 ] * xx [ 130 ] - ( xx [
44 ] + xx [ 51 ] + xx [ 5 ] * xx [ 91 ] + pm_math_Vector3_dot_ra ( xx + 103 ,
xx + 36 ) ) ; xx [ 95 ] = xx [ 826 ] * xx [ 138 ] + xx [ 827 ] * xx [ 232 ] +
xx [ 101 ] * xx [ 828 ] + xx [ 829 ] * xx [ 233 ] + xx [ 830 ] * xx [ 135 ] +
xx [ 136 ] * xx [ 831 ] - xx [ 67 ] ; solveSymmetricPosDef ( xx + 106 , xx +
93 , 3 , 1 , xx + 19 , xx + 31 ) ; xx [ 3 ] = xx [ 19 ] - xx [ 4 ] ; xx [ 4 ]
= xx [ 20 ] - xx [ 12 ] ; xx [ 5 ] = xx [ 21 ] - xx [ 46 ] ; xx [ 10 ] = xx [
6 ] * xx [ 3 ] + xx [ 91 ] * xx [ 4 ] - xx [ 11 ] ; xx [ 6 ] = xx [ 68 ] + xx
[ 64 ] * xx [ 3 ] + xx [ 8 ] * xx [ 4 ] + xx [ 650 ] + xx [ 40 ] * xx [ 10 ]
; xx [ 8 ] = xx [ 26 ] - ( xx [ 69 ] * xx [ 3 ] + xx [ 73 ] + xx [ 92 ] * xx
[ 4 ] ) + xx [ 649 ] - xx [ 10 ] * xx [ 50 ] ; xx [ 11 ] = xx [ 30 ] * xx [ 8
] ; xx [ 12 ] = xx [ 6 ] * xx [ 30 ] ; xx [ 14 ] = xx [ 0 ] - ( xx [ 61 ] *
xx [ 10 ] + xx [ 63 ] * ( xx [ 6 ] - ( xx [ 25 ] * xx [ 11 ] + xx [ 12 ] * xx
[ 30 ] ) * xx [ 7 ] ) + ( xx [ 8 ] + xx [ 7 ] * ( xx [ 25 ] * xx [ 12 ] - xx
[ 11 ] * xx [ 30 ] ) ) * xx [ 66 ] ) ; pm_math_Quaternion_compDeriv_ra ( xx +
153 , xx + 497 , xx + 31 ) ; xx [ 19 ] = xx [ 123 ] - ( xx [ 184 ] * xx [ 826
] + xx [ 77 ] * xx [ 827 ] + xx [ 89 ] * xx [ 828 ] ) ; xx [ 20 ] = xx [ 72 ]
- ( xx [ 185 ] * xx [ 826 ] + xx [ 239 ] * xx [ 827 ] + xx [ 131 ] * xx [ 828
] ) ; xx [ 21 ] = xx [ 97 ] - ( xx [ 186 ] * xx [ 826 ] + xx [ 240 ] * xx [
827 ] + xx [ 132 ] * xx [ 828 ] ) ; solveSymmetricPosDef ( xx + 200 , xx + 19
, 3 , 1 , xx + 35 , xx + 38 ) ; pm_math_Quaternion_compDeriv_ra ( xx + 306 ,
xx + 770 , xx + 59 ) ; xx [ 19 ] = xx [ 116 ] - ( xx [ 314 ] * xx [ 829 ] +
xx [ 349 ] * xx [ 830 ] + xx [ 324 ] * xx [ 831 ] ) ; xx [ 20 ] = xx [ 117 ]
- ( xx [ 315 ] * xx [ 829 ] + xx [ 350 ] * xx [ 830 ] + xx [ 325 ] * xx [ 831
] ) ; xx [ 21 ] = xx [ 143 ] - ( xx [ 348 ] * xx [ 829 ] + xx [ 354 ] * xx [
830 ] + xx [ 326 ] * xx [ 831 ] ) ; solveSymmetricPosDef ( xx + 333 , xx + 19
, 3 , 1 , xx + 38 , xx + 42 ) ; xx [ 0 ] = ( xx [ 418 ] * xx [ 845 ] - xx [
300 ] ) / xx [ 441 ] ; xx [ 6 ] = xx [ 547 ] + xx [ 443 ] * xx [ 0 ] ; xx [ 8
] = xx [ 244 ] + xx [ 65 ] * xx [ 0 ] ; xx [ 11 ] = xx [ 8 ] * xx [ 417 ] ;
xx [ 12 ] = xx [ 6 ] * xx [ 417 ] ; xx [ 16 ] = xx [ 6 ] + xx [ 7 ] * ( xx [
412 ] * xx [ 11 ] - xx [ 12 ] * xx [ 417 ] ) ; xx [ 6 ] = xx [ 8 ] - ( xx [
412 ] * xx [ 12 ] + xx [ 11 ] * xx [ 417 ] ) * xx [ 7 ] ; xx [ 8 ] = xx [ 394
] + xx [ 431 ] + xx [ 439 ] * xx [ 0 ] + xx [ 16 ] * xx [ 427 ] - xx [ 6 ] *
xx [ 435 ] + xx [ 573 ] ; xx [ 19 ] = xx [ 369 ] ; xx [ 20 ] = xx [ 8 ] ; xx
[ 21 ] = xx [ 304 ] ; xx [ 42 ] = xx [ 16 ] + xx [ 372 ] ; xx [ 43 ] = xx [
373 ] ; xx [ 44 ] = xx [ 6 ] + xx [ 102 ] ; xx [ 49 ] = xx [ 407 ] * xx [ 832
] + xx [ 388 ] * xx [ 833 ] + xx [ 834 ] * xx [ 396 ] + xx [ 464 ] * xx [ 835
] + xx [ 401 ] * xx [ 836 ] + xx [ 837 ] * xx [ 457 ] - ( xx [ 323 ] +
pm_math_Vector3_dot_ra ( xx + 390 , xx + 19 ) + pm_math_Vector3_dot_ra ( xx +
459 , xx + 42 ) ) ; xx [ 50 ] = xx [ 402 ] * xx [ 832 ] + xx [ 399 ] * xx [
833 ] + xx [ 834 ] * xx [ 397 ] + xx [ 406 ] * xx [ 835 ] + xx [ 456 ] * xx [
836 ] + xx [ 837 ] * xx [ 410 ] - ( xx [ 347 ] + xx [ 383 ] + xx [ 8 ] * xx [
467 ] + pm_math_Vector3_dot_ra ( xx + 479 , xx + 42 ) ) ; xx [ 51 ] = xx [
478 ] * xx [ 832 ] + xx [ 494 ] * xx [ 833 ] + xx [ 408 ] * xx [ 834 ] + xx [
367 ] * xx [ 835 ] + xx [ 405 ] * xx [ 836 ] + xx [ 458 ] * xx [ 837 ] - xx [
415 ] ; solveSymmetricPosDef ( xx + 482 , xx + 49 , 3 , 1 , xx + 19 , xx + 42
) ; xx [ 6 ] = xx [ 19 ] - xx [ 345 ] ; xx [ 8 ] = xx [ 20 ] - xx [ 360 ] ;
xx [ 11 ] = xx [ 21 ] - xx [ 403 ] ; xx [ 12 ] = xx [ 385 ] * xx [ 6 ] + xx [
467 ] * xx [ 8 ] - xx [ 277 ] ; xx [ 16 ] = xx [ 419 ] + xx [ 395 ] * xx [ 6
] + xx [ 353 ] * xx [ 8 ] + xx [ 568 ] + xx [ 427 ] * xx [ 12 ] ; xx [ 17 ] =
xx [ 26 ] - ( xx [ 404 ] * xx [ 6 ] + xx [ 429 ] + xx [ 468 ] * xx [ 8 ] ) +
xx [ 477 ] - xx [ 12 ] * xx [ 435 ] ; xx [ 19 ] = xx [ 417 ] * xx [ 17 ] ; xx
[ 20 ] = xx [ 16 ] * xx [ 417 ] ; xx [ 21 ] = xx [ 0 ] - ( xx [ 442 ] * xx [
12 ] + xx [ 444 ] * ( xx [ 16 ] - ( xx [ 412 ] * xx [ 19 ] + xx [ 20 ] * xx [
417 ] ) * xx [ 7 ] ) + ( xx [ 17 ] + xx [ 7 ] * ( xx [ 412 ] * xx [ 20 ] - xx
[ 19 ] * xx [ 417 ] ) ) * xx [ 446 ] ) ; pm_math_Quaternion_compDeriv_ra ( xx
+ 507 , xx + 767 , xx + 66 ) ; xx [ 42 ] = xx [ 384 ] - ( xx [ 368 ] * xx [
832 ] + xx [ 375 ] * xx [ 833 ] + xx [ 409 ] * xx [ 834 ] ) ; xx [ 43 ] = xx
[ 386 ] - ( xx [ 538 ] * xx [ 832 ] + xx [ 495 ] * xx [ 833 ] + xx [ 438 ] *
xx [ 834 ] ) ; xx [ 44 ] = xx [ 387 ] - ( xx [ 539 ] * xx [ 832 ] + xx [ 496
] * xx [ 833 ] + xx [ 462 ] * xx [ 834 ] ) ; solveSymmetricPosDef ( xx + 529
, xx + 42 , 3 , 1 , xx + 49 , xx + 53 ) ; pm_math_Quaternion_compDeriv_ra (
xx + 590 , xx + 1375 , xx + 88 ) ; xx [ 42 ] = xx [ 381 ] - ( xx [ 598 ] * xx
[ 835 ] + xx [ 633 ] * xx [ 836 ] + xx [ 608 ] * xx [ 837 ] ) ; xx [ 43 ] =
xx [ 343 ] - ( xx [ 599 ] * xx [ 835 ] + xx [ 634 ] * xx [ 836 ] + xx [ 609 ]
* xx [ 837 ] ) ; xx [ 44 ] = xx [ 377 ] - ( xx [ 632 ] * xx [ 835 ] + xx [
638 ] * xx [ 836 ] + xx [ 610 ] * xx [ 837 ] ) ; solveSymmetricPosDef ( xx +
617 , xx + 42 , 3 , 1 , xx + 53 , xx + 71 ) ; xx [ 0 ] = ( xx [ 231 ] * xx [
846 ] - xx [ 41 ] ) / xx [ 440 ] ; xx [ 16 ] = xx [ 653 ] + xx [ 443 ] * xx [
0 ] ; xx [ 17 ] = xx [ 400 ] + xx [ 65 ] * xx [ 0 ] ; xx [ 19 ] = xx [ 17 ] *
xx [ 697 ] ; xx [ 20 ] = xx [ 16 ] * xx [ 697 ] ; xx [ 24 ] = xx [ 16 ] + xx
[ 7 ] * ( xx [ 693 ] * xx [ 19 ] - xx [ 20 ] * xx [ 697 ] ) ; xx [ 16 ] = xx
[ 17 ] - ( xx [ 693 ] * xx [ 20 ] + xx [ 19 ] * xx [ 697 ] ) * xx [ 7 ] ; xx
[ 17 ] = xx [ 641 ] + xx [ 642 ] + xx [ 439 ] * xx [ 0 ] + xx [ 24 ] * xx [
705 ] - xx [ 16 ] * xx [ 712 ] + xx [ 656 ] ; xx [ 41 ] = xx [ 635 ] ; xx [
42 ] = xx [ 17 ] ; xx [ 43 ] = xx [ 58 ] ; xx [ 63 ] = xx [ 24 ] + xx [ 416 ]
; xx [ 64 ] = xx [ 466 ] ; xx [ 65 ] = xx [ 16 ] + xx [ 48 ] ; xx [ 46 ] = xx
[ 688 ] * xx [ 838 ] + xx [ 87 ] * xx [ 839 ] + xx [ 840 ] * xx [ 678 ] + xx
[ 736 ] * xx [ 841 ] + xx [ 654 ] * xx [ 842 ] + xx [ 843 ] * xx [ 178 ] - (
xx [ 445 ] + pm_math_Vector3_dot_ra ( xx + 672 , xx + 41 ) +
pm_math_Vector3_dot_ra ( xx + 731 , xx + 63 ) ) ; xx [ 47 ] = xx [ 682 ] * xx
[ 838 ] + xx [ 56 ] * xx [ 839 ] + xx [ 840 ] * xx [ 679 ] + xx [ 180 ] * xx
[ 841 ] + xx [ 681 ] * xx [ 842 ] + xx [ 843 ] * xx [ 687 ] - ( xx [ 166 ] +
xx [ 589 ] + xx [ 17 ] * xx [ 738 ] + pm_math_Vector3_dot_ra ( xx + 750 , xx
+ 63 ) ) ; xx [ 48 ] = xx [ 766 ] * xx [ 838 ] + xx [ 749 ] * xx [ 839 ] + xx
[ 690 ] * xx [ 840 ] + xx [ 651 ] * xx [ 841 ] + xx [ 670 ] * xx [ 842 ] + xx
[ 692 ] * xx [ 843 ] - xx [ 627 ] ; solveSymmetricPosDef ( xx + 753 , xx + 46
, 3 , 1 , xx + 41 , xx + 56 ) ; xx [ 16 ] = xx [ 41 ] - xx [ 15 ] ; xx [ 15 ]
= xx [ 42 ] - xx [ 629 ] ; xx [ 17 ] = xx [ 43 ] - xx [ 639 ] ; xx [ 19 ] =
xx [ 667 ] * xx [ 16 ] + xx [ 738 ] * xx [ 15 ] - xx [ 433 ] ; xx [ 20 ] = xx
[ 628 ] + xx [ 677 ] * xx [ 16 ] + xx [ 637 ] * xx [ 15 ] + xx [ 655 ] + xx [
705 ] * xx [ 19 ] ; xx [ 24 ] = xx [ 26 ] - ( xx [ 686 ] * xx [ 16 ] + xx [
631 ] + xx [ 739 ] * xx [ 15 ] ) + xx [ 652 ] - xx [ 19 ] * xx [ 712 ] ; xx [
26 ] = xx [ 697 ] * xx [ 24 ] ; xx [ 27 ] = xx [ 20 ] * xx [ 697 ] ; xx [ 29
] = xx [ 0 ] - ( xx [ 715 ] * xx [ 19 ] + xx [ 716 ] * ( xx [ 20 ] - ( xx [
693 ] * xx [ 26 ] + xx [ 27 ] * xx [ 697 ] ) * xx [ 7 ] ) + ( xx [ 24 ] + xx
[ 7 ] * ( xx [ 693 ] * xx [ 27 ] - xx [ 26 ] * xx [ 697 ] ) ) * xx [ 718 ] )
; pm_math_Quaternion_compDeriv_ra ( xx + 778 , xx + 870 , xx + 41 ) ; xx [ 46
] = xx [ 475 ] - ( xx [ 85 ] * xx [ 838 ] + xx [ 78 ] * xx [ 839 ] + xx [ 691
] * xx [ 840 ] ) ; xx [ 47 ] = xx [ 476 ] - ( xx [ 683 ] * xx [ 838 ] + xx [
684 ] * xx [ 839 ] + xx [ 714 ] * xx [ 840 ] ) ; xx [ 48 ] = xx [ 566 ] - (
xx [ 815 ] * xx [ 838 ] + xx [ 765 ] * xx [ 839 ] + xx [ 734 ] * xx [ 840 ] )
; solveSymmetricPosDef ( xx + 800 , xx + 46 , 3 , 1 , xx + 56 , xx + 63 ) ;
pm_math_Quaternion_compDeriv_ra ( xx + 849 , xx + 1419 , xx + 77 ) ; xx [ 46
] = xx [ 82 ] - ( xx [ 175 ] * xx [ 841 ] + xx [ 218 ] * xx [ 842 ] + xx [
853 ] * xx [ 843 ] ) ; xx [ 47 ] = xx [ 76 ] - ( xx [ 176 ] * xx [ 841 ] + xx
[ 219 ] * xx [ 842 ] + xx [ 854 ] * xx [ 843 ] ) ; xx [ 48 ] = xx [ 84 ] - (
xx [ 177 ] * xx [ 841 ] + xx [ 220 ] * xx [ 842 ] + xx [ 209 ] * xx [ 843 ] )
; solveSymmetricPosDef ( xx + 191 , xx + 46 , 3 , 1 , xx + 63 , xx + 71 ) ;
xx [ 0 ] = 7.372473615415413e-3 ; xx [ 20 ] = - xx [ 285 ] ; xx [ 84 ] = - xx
[ 288 ] ; xx [ 85 ] = xx [ 288 ] ; xx [ 86 ] = xx [ 20 ] ; xx [ 87 ] = xx [
20 ] ; xx [ 20 ] = - xx [ 246 ] ; xx [ 92 ] = - xx [ 235 ] ; xx [ 93 ] = xx [
235 ] ; xx [ 94 ] = xx [ 20 ] ; xx [ 95 ] = xx [ 20 ] ; xx [ 20 ] = xx [ 13 ]
* xx [ 3 ] + xx [ 9 ] * xx [ 4 ] + xx [ 2 ] ; xx [ 2 ] = xx [ 18 ] * xx [ 3 ]
+ xx [ 5 ] - xx [ 301 ] ; xx [ 46 ] = xx [ 20 ] ; xx [ 47 ] = xx [ 10 ] ; xx
[ 48 ] = xx [ 2 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 92 , xx + 46 ,
xx + 71 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 92 , xx + 260 , xx + 46
) ; xx [ 97 ] = xx [ 71 ] + xx [ 47 ] * inputDot [ 0 ] ; xx [ 98 ] = xx [ 72
] - xx [ 46 ] * inputDot [ 0 ] ; xx [ 99 ] = xx [ 73 ] + inputDdot [ 0 ] ;
pm_math_Quaternion_xform_ra ( xx + 92 , xx + 97 , xx + 46 ) ; xx [ 9 ] = xx [
30 ] * xx [ 2 ] ; xx [ 13 ] = xx [ 20 ] * xx [ 30 ] ; xx [ 18 ] = xx [ 20 ] -
( xx [ 25 ] * xx [ 9 ] + xx [ 13 ] * xx [ 30 ] ) * xx [ 7 ] - xx [ 1 ] ; xx [
1 ] = xx [ 2 ] + xx [ 7 ] * ( xx [ 25 ] * xx [ 13 ] - xx [ 9 ] * xx [ 30 ] )
+ xx [ 825 ] ; xx [ 2 ] = xx [ 1 ] * xx [ 30 ] ; xx [ 9 ] = xx [ 30 ] * xx [
18 ] ; xx [ 71 ] = xx [ 46 ] - ( xx [ 18 ] + xx [ 7 ] * ( xx [ 25 ] * xx [ 2
] - xx [ 9 ] * xx [ 30 ] ) ) ; xx [ 72 ] = xx [ 47 ] - ( xx [ 10 ] + xx [ 14
] ) ; xx [ 73 ] = xx [ 48 ] - ( xx [ 1 ] - ( xx [ 25 ] * xx [ 9 ] + xx [ 2 ]
* xx [ 30 ] ) * xx [ 7 ] ) ; pm_math_Quaternion_inverseXform_ra ( xx + 84 ,
xx + 71 , xx + 24 ) ; xx [ 1 ] = - xx [ 569 ] ; xx [ 84 ] = - xx [ 572 ] ; xx
[ 85 ] = xx [ 572 ] ; xx [ 86 ] = xx [ 1 ] ; xx [ 87 ] = xx [ 1 ] ; xx [ 1 ]
= - xx [ 491 ] ; xx [ 92 ] = - xx [ 398 ] ; xx [ 93 ] = xx [ 398 ] ; xx [ 94
] = xx [ 1 ] ; xx [ 95 ] = xx [ 1 ] ; xx [ 1 ] = xx [ 382 ] * xx [ 6 ] + xx [
356 ] * xx [ 8 ] + xx [ 211 ] ; xx [ 2 ] = xx [ 389 ] * xx [ 6 ] + xx [ 11 ]
- xx [ 643 ] ; xx [ 46 ] = xx [ 1 ] ; xx [ 47 ] = xx [ 12 ] ; xx [ 48 ] = xx
[ 2 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 92 , xx + 46 , xx + 71 ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 92 , xx + 611 , xx + 46 ) ; xx [ 97
] = xx [ 71 ] + xx [ 47 ] * inputDot [ 3 ] ; xx [ 98 ] = xx [ 72 ] - xx [ 46
] * inputDot [ 3 ] ; xx [ 99 ] = xx [ 73 ] + inputDdot [ 3 ] ;
pm_math_Quaternion_xform_ra ( xx + 92 , xx + 97 , xx + 46 ) ; xx [ 9 ] = xx [
417 ] * xx [ 2 ] ; xx [ 10 ] = xx [ 1 ] * xx [ 417 ] ; xx [ 13 ] = xx [ 1 ] -
( xx [ 412 ] * xx [ 9 ] + xx [ 10 ] * xx [ 417 ] ) * xx [ 7 ] - xx [ 344 ] ;
xx [ 1 ] = xx [ 2 ] + xx [ 7 ] * ( xx [ 412 ] * xx [ 10 ] - xx [ 9 ] * xx [
417 ] ) + xx [ 361 ] ; xx [ 2 ] = xx [ 1 ] * xx [ 417 ] ; xx [ 9 ] = xx [ 417
] * xx [ 13 ] ; xx [ 71 ] = xx [ 46 ] - ( xx [ 13 ] + xx [ 7 ] * ( xx [ 412 ]
* xx [ 2 ] - xx [ 9 ] * xx [ 417 ] ) ) ; xx [ 72 ] = xx [ 47 ] - ( xx [ 12 ]
+ xx [ 21 ] ) ; xx [ 73 ] = xx [ 48 ] - ( xx [ 1 ] - ( xx [ 412 ] * xx [ 9 ]
+ xx [ 2 ] * xx [ 417 ] ) * xx [ 7 ] ) ; pm_math_Quaternion_inverseXform_ra (
xx + 84 , xx + 71 , xx + 46 ) ; xx [ 1 ] = - xx [ 820 ] ; xx [ 84 ] = - xx [
823 ] ; xx [ 85 ] = xx [ 823 ] ; xx [ 86 ] = xx [ 1 ] ; xx [ 87 ] = xx [ 1 ]
; xx [ 1 ] = - xx [ 729 ] ; xx [ 92 ] = - xx [ 680 ] ; xx [ 93 ] = xx [ 680 ]
; xx [ 94 ] = xx [ 1 ] ; xx [ 95 ] = xx [ 1 ] ; xx [ 1 ] = xx [ 664 ] * xx [
16 ] + xx [ 640 ] * xx [ 15 ] + xx [ 379 ] ; xx [ 2 ] = xx [ 671 ] * xx [ 16
] + xx [ 17 ] - xx [ 848 ] ; xx [ 71 ] = xx [ 1 ] ; xx [ 72 ] = xx [ 19 ] ;
xx [ 73 ] = xx [ 2 ] ; pm_math_Quaternion_inverseXform_ra ( xx + 92 , xx + 71
, xx + 97 ) ; pm_math_Quaternion_inverseXform_ra ( xx + 92 , xx + 775 , xx +
71 ) ; xx [ 100 ] = xx [ 97 ] + xx [ 72 ] * inputDot [ 6 ] ; xx [ 101 ] = xx
[ 98 ] - xx [ 71 ] * inputDot [ 6 ] ; xx [ 102 ] = xx [ 99 ] + inputDdot [ 6
] ; pm_math_Quaternion_xform_ra ( xx + 92 , xx + 100 , xx + 71 ) ; xx [ 9 ] =
xx [ 697 ] * xx [ 2 ] ; xx [ 10 ] = xx [ 1 ] * xx [ 697 ] ; xx [ 12 ] = xx [
1 ] - ( xx [ 693 ] * xx [ 9 ] + xx [ 10 ] * xx [ 697 ] ) * xx [ 7 ] - xx [
122 ] ; xx [ 1 ] = xx [ 2 ] + xx [ 7 ] * ( xx [ 693 ] * xx [ 10 ] - xx [ 9 ]
* xx [ 697 ] ) + xx [ 23 ] ; xx [ 2 ] = xx [ 1 ] * xx [ 697 ] ; xx [ 9 ] = xx
[ 697 ] * xx [ 12 ] ; xx [ 23 ] = xx [ 71 ] - ( xx [ 12 ] + xx [ 7 ] * ( xx [
693 ] * xx [ 2 ] - xx [ 9 ] * xx [ 697 ] ) ) ; xx [ 24 ] = xx [ 72 ] - ( xx [
19 ] + xx [ 29 ] ) ; xx [ 25 ] = xx [ 73 ] - ( xx [ 1 ] - ( xx [ 693 ] * xx [
9 ] + xx [ 2 ] * xx [ 697 ] ) * xx [ 7 ] ) ;
pm_math_Quaternion_inverseXform_ra ( xx + 84 , xx + 23 , xx + 18 ) ; deriv [
0 ] = state [ 3 ] ; deriv [ 1 ] = state [ 4 ] ; deriv [ 2 ] = state [ 5 ] ;
deriv [ 3 ] = xx [ 3 ] ; deriv [ 4 ] = xx [ 4 ] ; deriv [ 5 ] = xx [ 5 ] ;
deriv [ 6 ] = state [ 7 ] ; deriv [ 7 ] = xx [ 14 ] ; deriv [ 8 ] = xx [ 31 ]
; deriv [ 9 ] = xx [ 32 ] ; deriv [ 10 ] = xx [ 33 ] ; deriv [ 11 ] = xx [ 34
] ; deriv [ 12 ] = xx [ 35 ] - xx [ 45 ] ; deriv [ 13 ] = xx [ 36 ] - xx [ 74
] ; deriv [ 14 ] = xx [ 37 ] - xx [ 96 ] ; deriv [ 15 ] = xx [ 59 ] ; deriv [
16 ] = xx [ 60 ] ; deriv [ 17 ] = xx [ 61 ] ; deriv [ 18 ] = xx [ 62 ] ;
deriv [ 19 ] = xx [ 38 ] - xx [ 52 ] ; deriv [ 20 ] = xx [ 39 ] - xx [ 118 ]
; deriv [ 21 ] = xx [ 40 ] - xx [ 173 ] ; deriv [ 22 ] = state [ 25 ] ; deriv
[ 23 ] = state [ 26 ] ; deriv [ 24 ] = state [ 27 ] ; deriv [ 25 ] = xx [ 6 ]
; deriv [ 26 ] = xx [ 8 ] ; deriv [ 27 ] = xx [ 11 ] ; deriv [ 28 ] = state [
29 ] ; deriv [ 29 ] = xx [ 21 ] ; deriv [ 30 ] = xx [ 66 ] ; deriv [ 31 ] =
xx [ 67 ] ; deriv [ 32 ] = xx [ 68 ] ; deriv [ 33 ] = xx [ 69 ] ; deriv [ 34
] = xx [ 49 ] - xx [ 319 ] ; deriv [ 35 ] = xx [ 50 ] - xx [ 321 ] ; deriv [
36 ] = xx [ 51 ] - xx [ 351 ] ; deriv [ 37 ] = xx [ 88 ] ; deriv [ 38 ] = xx
[ 89 ] ; deriv [ 39 ] = xx [ 90 ] ; deriv [ 40 ] = xx [ 91 ] ; deriv [ 41 ] =
xx [ 53 ] - xx [ 302 ] ; deriv [ 42 ] = xx [ 54 ] - xx [ 346 ] ; deriv [ 43 ]
= xx [ 55 ] - xx [ 376 ] ; deriv [ 44 ] = state [ 47 ] ; deriv [ 45 ] = state
[ 48 ] ; deriv [ 46 ] = state [ 49 ] ; deriv [ 47 ] = xx [ 16 ] ; deriv [ 48
] = xx [ 15 ] ; deriv [ 49 ] = xx [ 17 ] ; deriv [ 50 ] = state [ 51 ] ;
deriv [ 51 ] = xx [ 29 ] ; deriv [ 52 ] = xx [ 41 ] ; deriv [ 53 ] = xx [ 42
] ; deriv [ 54 ] = xx [ 43 ] ; deriv [ 55 ] = xx [ 44 ] ; deriv [ 56 ] = xx [
56 ] - xx [ 22 ] ; deriv [ 57 ] = xx [ 57 ] - xx [ 601 ] ; deriv [ 58 ] = xx
[ 58 ] - xx [ 626 ] ; deriv [ 59 ] = xx [ 77 ] ; deriv [ 60 ] = xx [ 78 ] ;
deriv [ 61 ] = xx [ 79 ] ; deriv [ 62 ] = xx [ 80 ] ; deriv [ 63 ] = xx [ 63
] - xx [ 28 ] ; deriv [ 64 ] = xx [ 64 ] - xx [ 70 ] ; deriv [ 65 ] = xx [ 65
] - xx [ 83 ] ; deriv [ 66 ] = state [ 67 ] ; deriv [ 67 ] = xx [ 0 ] * xx [
26 ] ; deriv [ 68 ] = state [ 69 ] ; deriv [ 69 ] = xx [ 0 ] * xx [ 48 ] ;
deriv [ 70 ] = state [ 71 ] ; deriv [ 71 ] = xx [ 0 ] * xx [ 20 ] ;
errorResult [ 0 ] = ( double ) ( ii [ 3 ] + ii [ 4 ] + ii [ 1 ] ) ; return
NULL ; } PmfMessageId triped_a151ee3d_1_numJacPerturbLoBounds ( const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* state , const int * modeVector , const double * input , const double *
inputDot , const double * inputDdot , const double * discreteState , double *
bounds , double * errorResult , NeuDiagnosticManager * neDiagMgr ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; double xx [ 1 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) eqnEnableFlags ; ( void ) state ; ( void ) modeVector ; ( void ) input ; (
void ) inputDot ; ( void ) inputDdot ; ( void ) discreteState ; ( void )
neDiagMgr ; xx [ 0 ] = 1.0e-8 ; bounds [ 0 ] = xx [ 0 ] ; bounds [ 1 ] = xx [
0 ] ; bounds [ 2 ] = xx [ 0 ] ; bounds [ 3 ] = xx [ 0 ] ; bounds [ 4 ] = xx [
0 ] ; bounds [ 5 ] = xx [ 0 ] ; bounds [ 6 ] = xx [ 0 ] ; bounds [ 7 ] = xx [
0 ] ; bounds [ 8 ] = xx [ 0 ] ; bounds [ 9 ] = xx [ 0 ] ; bounds [ 10 ] = xx
[ 0 ] ; bounds [ 11 ] = xx [ 0 ] ; bounds [ 12 ] = xx [ 0 ] ; bounds [ 13 ] =
xx [ 0 ] ; bounds [ 14 ] = xx [ 0 ] ; bounds [ 15 ] = xx [ 0 ] ; bounds [ 16
] = xx [ 0 ] ; bounds [ 17 ] = xx [ 0 ] ; bounds [ 18 ] = xx [ 0 ] ; bounds [
19 ] = xx [ 0 ] ; bounds [ 20 ] = xx [ 0 ] ; bounds [ 21 ] = xx [ 0 ] ;
bounds [ 22 ] = xx [ 0 ] ; bounds [ 23 ] = xx [ 0 ] ; bounds [ 24 ] = xx [ 0
] ; bounds [ 25 ] = xx [ 0 ] ; bounds [ 26 ] = xx [ 0 ] ; bounds [ 27 ] = xx
[ 0 ] ; bounds [ 28 ] = xx [ 0 ] ; bounds [ 29 ] = xx [ 0 ] ; bounds [ 30 ] =
xx [ 0 ] ; bounds [ 31 ] = xx [ 0 ] ; bounds [ 32 ] = xx [ 0 ] ; bounds [ 33
] = xx [ 0 ] ; bounds [ 34 ] = xx [ 0 ] ; bounds [ 35 ] = xx [ 0 ] ; bounds [
36 ] = xx [ 0 ] ; bounds [ 37 ] = xx [ 0 ] ; bounds [ 38 ] = xx [ 0 ] ;
bounds [ 39 ] = xx [ 0 ] ; bounds [ 40 ] = xx [ 0 ] ; bounds [ 41 ] = xx [ 0
] ; bounds [ 42 ] = xx [ 0 ] ; bounds [ 43 ] = xx [ 0 ] ; bounds [ 44 ] = xx
[ 0 ] ; bounds [ 45 ] = xx [ 0 ] ; bounds [ 46 ] = xx [ 0 ] ; bounds [ 47 ] =
xx [ 0 ] ; bounds [ 48 ] = xx [ 0 ] ; bounds [ 49 ] = xx [ 0 ] ; bounds [ 50
] = xx [ 0 ] ; bounds [ 51 ] = xx [ 0 ] ; bounds [ 52 ] = xx [ 0 ] ; bounds [
53 ] = xx [ 0 ] ; bounds [ 54 ] = xx [ 0 ] ; bounds [ 55 ] = xx [ 0 ] ;
bounds [ 56 ] = xx [ 0 ] ; bounds [ 57 ] = xx [ 0 ] ; bounds [ 58 ] = xx [ 0
] ; bounds [ 59 ] = xx [ 0 ] ; bounds [ 60 ] = xx [ 0 ] ; bounds [ 61 ] = xx
[ 0 ] ; bounds [ 62 ] = xx [ 0 ] ; bounds [ 63 ] = xx [ 0 ] ; bounds [ 64 ] =
xx [ 0 ] ; bounds [ 65 ] = xx [ 0 ] ; bounds [ 66 ] = xx [ 0 ] ; bounds [ 67
] = xx [ 0 ] ; bounds [ 68 ] = xx [ 0 ] ; bounds [ 69 ] = xx [ 0 ] ; bounds [
70 ] = xx [ 0 ] ; bounds [ 71 ] = xx [ 0 ] ; errorResult [ 0 ] = 0.0 ; return
NULL ; } PmfMessageId triped_a151ee3d_1_numJacPerturbHiBounds ( const
RuntimeDerivedValuesBundle * rtdv , const int * eqnEnableFlags , const double
* state , const int * modeVector , const double * input , const double *
inputDot , const double * inputDdot , const double * discreteState , double *
bounds , double * errorResult , NeuDiagnosticManager * neDiagMgr ) { const
double * rtdvd = rtdv -> mDoubles . mValues ; const int * rtdvi = rtdv ->
mInts . mValues ; double xx [ 3 ] ; ( void ) rtdvd ; ( void ) rtdvi ; ( void
) eqnEnableFlags ; ( void ) state ; ( void ) modeVector ; ( void ) input ; (
void ) inputDot ; ( void ) inputDdot ; ( void ) discreteState ; ( void )
neDiagMgr ; xx [ 0 ] = 1.0 ; xx [ 1 ] = + pmf_get_inf ( ) ; xx [ 2 ] = 0.1 ;
bounds [ 0 ] = xx [ 0 ] ; bounds [ 1 ] = xx [ 0 ] ; bounds [ 2 ] = xx [ 0 ] ;
bounds [ 3 ] = xx [ 1 ] ; bounds [ 4 ] = xx [ 1 ] ; bounds [ 5 ] = xx [ 1 ] ;
bounds [ 6 ] = xx [ 0 ] ; bounds [ 7 ] = xx [ 1 ] ; bounds [ 8 ] = xx [ 2 ] ;
bounds [ 9 ] = xx [ 2 ] ; bounds [ 10 ] = xx [ 2 ] ; bounds [ 11 ] = xx [ 2 ]
; bounds [ 12 ] = xx [ 1 ] ; bounds [ 13 ] = xx [ 1 ] ; bounds [ 14 ] = xx [
1 ] ; bounds [ 15 ] = xx [ 2 ] ; bounds [ 16 ] = xx [ 2 ] ; bounds [ 17 ] =
xx [ 2 ] ; bounds [ 18 ] = xx [ 2 ] ; bounds [ 19 ] = xx [ 1 ] ; bounds [ 20
] = xx [ 1 ] ; bounds [ 21 ] = xx [ 1 ] ; bounds [ 22 ] = xx [ 0 ] ; bounds [
23 ] = xx [ 0 ] ; bounds [ 24 ] = xx [ 0 ] ; bounds [ 25 ] = xx [ 1 ] ;
bounds [ 26 ] = xx [ 1 ] ; bounds [ 27 ] = xx [ 1 ] ; bounds [ 28 ] = xx [ 0
] ; bounds [ 29 ] = xx [ 1 ] ; bounds [ 30 ] = xx [ 2 ] ; bounds [ 31 ] = xx
[ 2 ] ; bounds [ 32 ] = xx [ 2 ] ; bounds [ 33 ] = xx [ 2 ] ; bounds [ 34 ] =
xx [ 1 ] ; bounds [ 35 ] = xx [ 1 ] ; bounds [ 36 ] = xx [ 1 ] ; bounds [ 37
] = xx [ 2 ] ; bounds [ 38 ] = xx [ 2 ] ; bounds [ 39 ] = xx [ 2 ] ; bounds [
40 ] = xx [ 2 ] ; bounds [ 41 ] = xx [ 1 ] ; bounds [ 42 ] = xx [ 1 ] ;
bounds [ 43 ] = xx [ 1 ] ; bounds [ 44 ] = xx [ 0 ] ; bounds [ 45 ] = xx [ 0
] ; bounds [ 46 ] = xx [ 0 ] ; bounds [ 47 ] = xx [ 1 ] ; bounds [ 48 ] = xx
[ 1 ] ; bounds [ 49 ] = xx [ 1 ] ; bounds [ 50 ] = xx [ 0 ] ; bounds [ 51 ] =
xx [ 1 ] ; bounds [ 52 ] = xx [ 2 ] ; bounds [ 53 ] = xx [ 2 ] ; bounds [ 54
] = xx [ 2 ] ; bounds [ 55 ] = xx [ 2 ] ; bounds [ 56 ] = xx [ 1 ] ; bounds [
57 ] = xx [ 1 ] ; bounds [ 58 ] = xx [ 1 ] ; bounds [ 59 ] = xx [ 2 ] ;
bounds [ 60 ] = xx [ 2 ] ; bounds [ 61 ] = xx [ 2 ] ; bounds [ 62 ] = xx [ 2
] ; bounds [ 63 ] = xx [ 1 ] ; bounds [ 64 ] = xx [ 1 ] ; bounds [ 65 ] = xx
[ 1 ] ; bounds [ 66 ] = xx [ 0 ] ; bounds [ 67 ] = xx [ 1 ] ; bounds [ 68 ] =
xx [ 0 ] ; bounds [ 69 ] = xx [ 1 ] ; bounds [ 70 ] = xx [ 0 ] ; bounds [ 71
] = xx [ 1 ] ; errorResult [ 0 ] = 0.0 ; return NULL ; }
