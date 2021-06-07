#ifndef RTW_HEADER_triped_h_
#define RTW_HEADER_triped_h_
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap.h"
#ifndef triped_COMMON_INCLUDES_
#define triped_COMMON_INCLUDES_
#include <stdlib.h>
#include <stdio.h>
#include "rtwtypes.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "sigstream_rtw.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging.h"
#include "dt_info.h"
#include "ext_work.h"
#include "nesl_rtw.h"
#include "triped_a151ee3d_1_gateway.h"
#endif
#include "triped_types.h"
#include "multiword_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include "rt_defines.h"
#define MODEL_NAME triped
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (29) 
#define NUM_ZC_EVENTS (3) 
#ifndef NCSTATES
#define NCSTATES (90)   
#elif NCSTATES != 90
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { ev3ltaqeco s ; guj4mpcfgf memspace ; bwxng4ee5f CholManager
; real_T b [ 729 ] ; real_T b_mbvzarwird [ 729 ] ; real_T workspace [ 729 ] ;
real_T c [ 729 ] ; nuprfhnilo WorkingSet ; nuprfhnilo b_WorkingSet ; real_T
ovgwheqnqh ; real_T j0rc1se3o4 ; real_T ntyw452pod ; } k0zpd1rkeh ; typedef
struct { ev3ltaqeco s ; guj4mpcfgf memspace ; bwxng4ee5f CholManager ; real_T
b [ 729 ] ; real_T b_mbvzarwird [ 729 ] ; real_T workspace [ 729 ] ; real_T c
[ 729 ] ; nuprfhnilo WorkingSet ; nuprfhnilo b_WorkingSet ; real_T emix4wr52y
; real_T kdnyrfmwwa ; real_T mjmtgjjzzj [ 4 ] ; real_T iqgj4cowyc ; real_T
p2qawryk4y ; real_T ey5rpjheu5 [ 4 ] ; real_T jbflhrvxr3 ; real_T o3caeg22xm
; real_T d4pikybbay [ 4 ] ; real_T jgqcqpxn4x [ 4 ] ; real_T cdjd2gowev ;
real_T nk4fjtzt35 [ 4 ] ; real_T am4ocgktdw ; real_T d3anamivak [ 4 ] ;
real_T hmjbsyhvew [ 4 ] ; real_T kcw4co0adz ; real_T bvc43hgq3b [ 4 ] ;
real_T aa23nqqdmc ; real_T mhtigldxbi [ 4 ] ; real_T m2ws5ju1b4 [ 75 ] ;
real_T fvdszxdfmk [ 117 ] ; real_T heotptkrgn ; real_T efjglo0jpm ;
k0zpd1rkeh iu53rp0sko ; k0zpd1rkeh lolmohwkmq ; } B ; typedef struct { real_T
jgjp1fusts ; real_T jopmtehazu ; real_T pdizpebcrn ; real_T fcytalkur3 ;
real_T huv3xhr2xb ; real_T mznnwa3jrm ; real_T fs1jne3mev ; real_T gja3qfiayv
; real_T mb1tkpm0oo ; real_T liafyk0sq0 ; real_T nlprusk0lb ; real_T
e3wlnzdn2r ; real_T imp34ktok4 ; real_T fegt1ehs0h ; real_T naplv55ipv ;
real_T p55ar3qyut ; real_T pbcfqgaa1q ; real_T dcf5utnyxc ; real_T fx5xo5lbmd
[ 3 ] ; real_T bj5e50514f ; void * gwpbgup500 ; void * luvxugyja4 ; void *
k00imi24sj ; void * j22zyci1aw ; void * gfhtaqqca1 ; void * kia1gcj0ok ; void
* psowfugydz ; void * bir0wi3sel ; void * n4k3ocl5yz ; void * io15cqjhbz ;
struct { void * LoggedData [ 3 ] ; } dyia41epsz ; int_T og2zcxhium ; int_T
cjwakeaooj ; boolean_T mdfbbrpo0b ; boolean_T etadvbosjv ; } DW ; typedef
struct { real_T ldodtqkp4s [ 2 ] ; real_T mxrhinqq03 [ 2 ] ; real_T
d2me05llor [ 2 ] ; real_T ke4pfrc4tx [ 2 ] ; real_T br3slk5vda [ 2 ] ; real_T
mpwv4qwqhx [ 2 ] ; real_T jbd5a5gzgp [ 2 ] ; real_T cq3qm13szg [ 2 ] ; real_T
dsxshkljpd [ 2 ] ; real_T pi3sslfh45 [ 72 ] ; } X ; typedef struct { real_T
ldodtqkp4s [ 2 ] ; real_T mxrhinqq03 [ 2 ] ; real_T d2me05llor [ 2 ] ; real_T
ke4pfrc4tx [ 2 ] ; real_T br3slk5vda [ 2 ] ; real_T mpwv4qwqhx [ 2 ] ; real_T
jbd5a5gzgp [ 2 ] ; real_T cq3qm13szg [ 2 ] ; real_T dsxshkljpd [ 2 ] ; real_T
pi3sslfh45 [ 72 ] ; } XDot ; typedef struct { boolean_T ldodtqkp4s [ 2 ] ;
boolean_T mxrhinqq03 [ 2 ] ; boolean_T d2me05llor [ 2 ] ; boolean_T
ke4pfrc4tx [ 2 ] ; boolean_T br3slk5vda [ 2 ] ; boolean_T mpwv4qwqhx [ 2 ] ;
boolean_T jbd5a5gzgp [ 2 ] ; boolean_T cq3qm13szg [ 2 ] ; boolean_T
dsxshkljpd [ 2 ] ; boolean_T pi3sslfh45 [ 72 ] ; } XDis ; typedef struct {
real_T ldodtqkp4s [ 2 ] ; real_T mxrhinqq03 [ 2 ] ; real_T d2me05llor [ 2 ] ;
real_T ke4pfrc4tx [ 2 ] ; real_T br3slk5vda [ 2 ] ; real_T mpwv4qwqhx [ 2 ] ;
real_T jbd5a5gzgp [ 2 ] ; real_T cq3qm13szg [ 2 ] ; real_T dsxshkljpd [ 2 ] ;
real_T pi3sslfh45 [ 72 ] ; } CStateAbsTol ; typedef struct { real_T
ldodtqkp4s [ 2 ] ; real_T mxrhinqq03 [ 2 ] ; real_T d2me05llor [ 2 ] ; real_T
ke4pfrc4tx [ 2 ] ; real_T br3slk5vda [ 2 ] ; real_T mpwv4qwqhx [ 2 ] ; real_T
jbd5a5gzgp [ 2 ] ; real_T cq3qm13szg [ 2 ] ; real_T dsxshkljpd [ 2 ] ; real_T
pi3sslfh45 [ 72 ] ; } CXPtMin ; typedef struct { real_T ldodtqkp4s [ 2 ] ;
real_T mxrhinqq03 [ 2 ] ; real_T d2me05llor [ 2 ] ; real_T ke4pfrc4tx [ 2 ] ;
real_T br3slk5vda [ 2 ] ; real_T mpwv4qwqhx [ 2 ] ; real_T jbd5a5gzgp [ 2 ] ;
real_T cq3qm13szg [ 2 ] ; real_T dsxshkljpd [ 2 ] ; real_T pi3sslfh45 [ 72 ]
; } CXPtMax ; typedef struct { real_T nacjhvmcs2 ; real_T c1oih0uwbu ; real_T
aepphpg1hl ; } ZCV ; typedef struct { ZCSigState bsdzg53aha ; ZCSigState
jysthfp50c ; ZCSigState afij42gx2g ; } PrevZCX ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T
SineWave_Amp ; real_T SineWave_Bias ; real_T SineWave_Freq ; real_T
SineWave_Phase ; real_T cos_Amp ; real_T cos_Bias ; real_T cos_Freq ; real_T
cos_Phase ; real_T Gain_Gain ; real_T Gain_Gain_lf1hkkhtnn ; real_T
Gain1_Gain ; real_T Gain1_Gain_n4cvaldzyx ; real_T Gain_Gain_krn1x3gc2r ;
real_T Gain_Gain_kvivx2t5tl ; real_T Gain1_Gain_amreev2b1i ; real_T
Gain1_Gain_k41kpwc3hi ; real_T Gain_Gain_mapktpvvuh ; real_T
Gain_Gain_ehckjz1434 ; real_T Gain1_Gain_itppknz00q ; real_T
Gain1_Gain_h3sey3zqp2 ; real_T Constant_Value ; real_T Constant3_Value ;
real_T Constant4_Value ; real_T Constant5_Value ; real_T
Constant_Value_pgin54o4vu ; real_T Constant1_Value ; real_T Constant6_Value ;
real_T Constant7_Value ; real_T Constant8_Value ; real_T Constant10_Value ;
real_T Constant11_Value ; real_T Constant2_Value ; real_T Constant9_Value ; }
; extern const char * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X
rtX ; extern DW rtDW ; extern PrevZCX rtPrevZCX ; extern P rtP ; extern const
rtwCAPI_ModelMappingStaticInfo * triped_GetCAPIStaticMap ( void ) ; extern
SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern const int_T
gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern rtInportTUtable
* gblInportTUtables ; extern const char * gblInportFileName ; extern const
int_T gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern
const int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern const int_T gblParameterTuningTid ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( void ) ;
#endif
