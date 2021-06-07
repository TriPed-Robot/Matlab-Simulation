#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "triped_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "triped.h"
#include "triped_capi.h"
#include "triped_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"triped/TriPed/Add" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 1 , 0
, TARGET_STRING ( "triped/TriPed/Add1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 ,
0 , 0 } , { 2 , 0 , TARGET_STRING (
"triped/Solver Configuration/EVAL_KEY/INPUT_1_1_1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 1 , 0 , 0 } , { 3 , 0 , TARGET_STRING (
"triped/Solver Configuration/EVAL_KEY/INPUT_2_1_1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 1 , 0 , 0 } , { 4 , 0 , TARGET_STRING (
"triped/Solver Configuration/EVAL_KEY/INPUT_3_1_1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 1 , 0 , 0 } , { 5 , 0 , TARGET_STRING (
"triped/Solver Configuration/EVAL_KEY/INPUT_4_1_1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 1 , 0 , 0 } , { 6 , 0 , TARGET_STRING (
"triped/Solver Configuration/EVAL_KEY/INPUT_5_1_1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 1 , 0 , 0 } , { 7 , 0 , TARGET_STRING (
"triped/Solver Configuration/EVAL_KEY/INPUT_6_1_1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 1 , 0 , 0 } , { 8 , 0 , TARGET_STRING (
"triped/Solver Configuration/EVAL_KEY/INPUT_7_1_1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 1 , 0 , 0 } , { 9 , 0 , TARGET_STRING (
"triped/Solver Configuration/EVAL_KEY/INPUT_8_1_1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 1 , 0 , 0 } , { 10 , 0 , TARGET_STRING (
"triped/Solver Configuration/EVAL_KEY/INPUT_9_1_1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 1 , 0 , 0 } , { 11 , 0 , TARGET_STRING (
"triped/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ) , TARGET_STRING ( "" ) ,
0 , 0 , 2 , 0 , 0 } , { 12 , 0 , TARGET_STRING (
"triped/Solver Configuration/EVAL_KEY/STATE_1" ) , TARGET_STRING ( "" ) , 0 ,
0 , 3 , 0 , 0 } , { 13 , 0 , TARGET_STRING ( "triped/TriPed/Leg_0/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 14 , 0 , TARGET_STRING (
"triped/TriPed/Leg_0/Gain1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } ,
{ 15 , 0 , TARGET_STRING ( "triped/TriPed/Leg_1/Gain" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 1 } , { 16 , 0 , TARGET_STRING (
"triped/TriPed/Leg_1/Gain1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } ,
{ 17 , 0 , TARGET_STRING ( "triped/TriPed/Leg_2/Gain" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 1 } , { 18 , 0 , TARGET_STRING (
"triped/TriPed/Leg_2/Gain1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } ,
{ 19 , 1 , TARGET_STRING ( "triped/TriPed/Subsystem/inverse_kinematics" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 20 , 0 , TARGET_STRING (
"triped/TriPed/Subsystem/Constant" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
2 } , { 21 , 0 , TARGET_STRING ( "triped/TriPed/Subsystem/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 22 , 0 , TARGET_STRING (
"triped/TriPed/Subsystem/Gain1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0
} , { 23 , 2 , TARGET_STRING ( "triped/TriPed/Subsystem1/inverse_kinematics"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 } , { 24 , 2 , TARGET_STRING (
"triped/TriPed/Subsystem1/inverse_kinematics" ) , TARGET_STRING ( "" ) , 1 ,
0 , 0 , 0 , 1 } , { 25 , 2 , TARGET_STRING (
"triped/TriPed/Subsystem1/inverse_kinematics" ) , TARGET_STRING ( "" ) , 2 ,
0 , 0 , 0 , 1 } , { 26 , 3 , TARGET_STRING (
"triped/TriPed/Subsystem2/inverse_kinematics" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 1 } , { 27 , 3 , TARGET_STRING (
"triped/TriPed/Subsystem2/inverse_kinematics" ) , TARGET_STRING ( "" ) , 1 ,
0 , 0 , 0 , 1 } , { 28 , 3 , TARGET_STRING (
"triped/TriPed/Subsystem2/inverse_kinematics" ) , TARGET_STRING ( "" ) , 2 ,
0 , 0 , 0 , 1 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ;
static const rtwCAPI_BlockParameters rtBlockParameters [ ] = { { 29 ,
TARGET_STRING ( "triped/TriPed/Constant" ) , TARGET_STRING ( "Value" ) , 0 ,
0 , 0 } , { 30 , TARGET_STRING ( "triped/TriPed/Constant1" ) , TARGET_STRING
( "Value" ) , 0 , 0 , 0 } , { 31 , TARGET_STRING ( "triped/TriPed/Constant10"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 32 , TARGET_STRING (
"triped/TriPed/Constant11" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 33
, TARGET_STRING ( "triped/TriPed/Constant2" ) , TARGET_STRING ( "Value" ) , 0
, 0 , 0 } , { 34 , TARGET_STRING ( "triped/TriPed/Constant3" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 35 , TARGET_STRING (
"triped/TriPed/Constant4" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 36
, TARGET_STRING ( "triped/TriPed/Constant5" ) , TARGET_STRING ( "Value" ) , 0
, 0 , 0 } , { 37 , TARGET_STRING ( "triped/TriPed/Constant6" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 38 , TARGET_STRING (
"triped/TriPed/Constant7" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 39
, TARGET_STRING ( "triped/TriPed/Constant8" ) , TARGET_STRING ( "Value" ) , 0
, 0 , 0 } , { 40 , TARGET_STRING ( "triped/TriPed/Constant9" ) ,
TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 41 , TARGET_STRING (
"triped/TriPed/Sine Wave" ) , TARGET_STRING ( "Amplitude" ) , 0 , 0 , 0 } , {
42 , TARGET_STRING ( "triped/TriPed/Sine Wave" ) , TARGET_STRING ( "Bias" ) ,
0 , 0 , 0 } , { 43 , TARGET_STRING ( "triped/TriPed/Sine Wave" ) ,
TARGET_STRING ( "Frequency" ) , 0 , 0 , 0 } , { 44 , TARGET_STRING (
"triped/TriPed/Sine Wave" ) , TARGET_STRING ( "Phase" ) , 0 , 0 , 0 } , { 45
, TARGET_STRING ( "triped/TriPed/cos" ) , TARGET_STRING ( "Amplitude" ) , 0 ,
0 , 0 } , { 46 , TARGET_STRING ( "triped/TriPed/cos" ) , TARGET_STRING (
"Bias" ) , 0 , 0 , 0 } , { 47 , TARGET_STRING ( "triped/TriPed/cos" ) ,
TARGET_STRING ( "Frequency" ) , 0 , 0 , 0 } , { 48 , TARGET_STRING (
"triped/TriPed/cos" ) , TARGET_STRING ( "Phase" ) , 0 , 0 , 0 } , { 49 ,
TARGET_STRING ( "triped/TriPed/Leg_0/Gain" ) , TARGET_STRING ( "Gain" ) , 0 ,
0 , 0 } , { 50 , TARGET_STRING ( "triped/TriPed/Leg_0/Gain1" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 51 , TARGET_STRING (
"triped/TriPed/Leg_1/Gain" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 52
, TARGET_STRING ( "triped/TriPed/Leg_1/Gain1" ) , TARGET_STRING ( "Gain" ) ,
0 , 0 , 0 } , { 53 , TARGET_STRING ( "triped/TriPed/Leg_2/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 54 , TARGET_STRING (
"triped/TriPed/Leg_2/Gain1" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 55
, TARGET_STRING ( "triped/TriPed/Subsystem/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 56 , TARGET_STRING (
"triped/TriPed/Subsystem/Gain" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , {
57 , TARGET_STRING ( "triped/TriPed/Subsystem/Gain1" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 58 , TARGET_STRING (
"triped/TriPed/Subsystem1/Gain" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } ,
{ 59 , TARGET_STRING ( "triped/TriPed/Subsystem1/Gain1" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 60 , TARGET_STRING (
"triped/TriPed/Subsystem2/Gain" ) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } ,
{ 61 , TARGET_STRING ( "triped/TriPed/Subsystem2/Gain1" ) , TARGET_STRING (
"Gain" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 } } ; static
const rtwCAPI_ModelParameters rtModelParameters [ ] = { { 0 , ( NULL ) , 0 ,
0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . emix4wr52y , & rtB . kdnyrfmwwa ,
& rtB . ey5rpjheu5 [ 0 ] , & rtB . mjmtgjjzzj [ 0 ] , & rtB . d4pikybbay [ 0
] , & rtB . nk4fjtzt35 [ 0 ] , & rtB . jgqcqpxn4x [ 0 ] , & rtB . d3anamivak
[ 0 ] , & rtB . bvc43hgq3b [ 0 ] , & rtB . hmjbsyhvew [ 0 ] , & rtB .
mhtigldxbi [ 0 ] , & rtB . fvdszxdfmk [ 0 ] , & rtB . m2ws5ju1b4 [ 0 ] , &
rtB . p2qawryk4y , & rtB . o3caeg22xm , & rtB . cdjd2gowev , & rtB .
am4ocgktdw , & rtB . kcw4co0adz , & rtB . aa23nqqdmc , & rtB . efjglo0jpm , &
rtB . heotptkrgn , & rtB . iqgj4cowyc , & rtB . jbflhrvxr3 , & rtB .
lolmohwkmq . ovgwheqnqh , & rtB . lolmohwkmq . j0rc1se3o4 , & rtB .
lolmohwkmq . ntyw452pod , & rtB . iu53rp0sko . ovgwheqnqh , & rtB .
iu53rp0sko . j0rc1se3o4 , & rtB . iu53rp0sko . ntyw452pod , & rtP .
Constant_Value , & rtP . Constant1_Value , & rtP . Constant10_Value , & rtP .
Constant11_Value , & rtP . Constant2_Value , & rtP . Constant3_Value , & rtP
. Constant4_Value , & rtP . Constant5_Value , & rtP . Constant6_Value , & rtP
. Constant7_Value , & rtP . Constant8_Value , & rtP . Constant9_Value , & rtP
. SineWave_Amp , & rtP . SineWave_Bias , & rtP . SineWave_Freq , & rtP .
SineWave_Phase , & rtP . cos_Amp , & rtP . cos_Bias , & rtP . cos_Freq , &
rtP . cos_Phase , & rtP . Gain_Gain_lf1hkkhtnn , & rtP .
Gain1_Gain_n4cvaldzyx , & rtP . Gain_Gain_kvivx2t5tl , & rtP .
Gain1_Gain_k41kpwc3hi , & rtP . Gain_Gain_ehckjz1434 , & rtP .
Gain1_Gain_h3sey3zqp2 , & rtP . Constant_Value_pgin54o4vu , & rtP . Gain_Gain
, & rtP . Gain1_Gain , & rtP . Gain_Gain_krn1x3gc2r , & rtP .
Gain1_Gain_amreev2b1i , & rtP . Gain_Gain_mapktpvvuh , & rtP .
Gain1_Gain_itppknz00q , } ; static int32_T * rtVarDimsAddrMap [ ] = { ( NULL
) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } } ; static
const uint_T rtDimensionArray [ ] = { 1 , 1 , 4 , 1 , 117 , 1 , 75 , 1 } ;
static const real_T rtcapiStoredFloats [ ] = { 0.0 , 1.0 } ; static const
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 0 ] , 0 , 0 } , { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , 1 ,
0 } , { ( NULL ) , ( NULL ) , 2 , 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 29 , ( NULL )
, 0 , ( NULL ) , 0 } , { rtBlockParameters , 33 , rtModelParameters , 0 } , {
( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap , rtFixPtMap , rtElementMap
, rtSampleTimeMap , rtDimensionArray } , "float" , { 223868464U , 1825467118U
, 79481394U , 920024568U } , ( NULL ) , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * triped_GetCAPIStaticMap ( void ) { return &
mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void triped_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void triped_host_InitializeDataMapInfo ( triped_host_DataMapInfo_T * dataMap
, const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
