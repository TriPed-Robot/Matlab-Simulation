#include "rt_logging_mmi.h"
#include "triped_capi.h"
#include <math.h>
#include "triped.h"
#include "triped_private.h"
#include "triped_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; extern boolean_T
gblExtModeStartPktReceived ; void raccelForceExtModeShutdown ( ) { if ( !
gblExtModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 2 , & stopRequested ) ; }
rtExtModeShutdown ( 2 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 3 ; const char_T
* gbl_raccel_Version = "9.3 (R2020a) 18-Nov-2019" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const char * gblSlvrJacPatternFileName =
"slprj\\raccel\\triped\\triped_Jpattern.mat" ; const int_T
gblNumRootInportBlks = 0 ; const int_T gblNumModelInputs = 0 ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern void * gblAperiodicPartitionHitTimes ; const int_T
gblInportDataTypeIdx [ ] = { - 1 } ; const int_T gblInportDims [ ] = { - 1 }
; const int_T gblInportComplex [ ] = { - 1 } ; const int_T
gblInportInterpoFlag [ ] = { - 1 } ; const int_T gblInportContinuous [ ] = {
- 1 } ; int_T enableFcnCallFlag [ ] = { 1 , 1 , 1 } ; const char *
raccelLoadInputsAndAperiodicHitTimes ( const char * inportFileName , int *
matFileFormat ) { return rt_RapidReadInportsMatFile ( inportFileName ,
matFileFormat , 1 ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
B rtB ; X rtX ; DW rtDW ; PrevZCX rtPrevZCX ; static SimStruct model_S ;
SimStruct * const rtS = & model_S ; static void njbzpdidsi ( int32_T *
obj_nVar , int32_T * obj_mCineq , int32_T * obj_mCeq , boolean_T *
obj_NonFiniteSupport , boolean_T * obj_SpecifyObjectiveGradient , boolean_T *
obj_SpecifyConstraintGradient , boolean_T * obj_ScaleProblem ) ; static void
a5lwlpmpfx ( const real_T A [ 16 ] , real_T * a , real_T * b , real_T * c ,
real_T * d , real_T * x , real_T * y , real_T * z ) ; static void ibqyp0ury0
( const hskkdlcyjp * obj_objfun_tunableEnvironment , const real_T x [ 5 ] ,
real_T * fval , int32_T * status ) ; static int32_T pawujf5ux3 ( const real_T
x [ 5 ] , real_T * Ceq_workspace ) ; static void otclemyw5h ( const
hskkdlcyjp * obj_objfun_tunableEnvironment , const real_T x [ 5 ] , real_T *
Ceq_workspace , real_T * fval , int32_T * status ) ; static void dj2cbrorw3k
( const hskkdlcyjp * objfun_tunableEnvironment , hbctg4nwcl * obj ) ; static
boolean_T o4hbmaeodi ( const hskkdlcyjp * obj_objfun_tunableEnvironment ,
real_T * fplus , real_T * cEqPlus , int32_T dim , real_T delta , real_T xk [
5 ] ) ; static boolean_T ac5h1531rt ( hbctg4nwcl * obj , real_T fCurrent ,
real_T cEqCurrent , real_T xk [ 5 ] , real_T gradf [ 8 ] , real_T JacCeqTrans
[ 8 ] ) ; static void cdu0auzqs4 ( kdxyjsixti * WorkingSet , real_T cEq ) ;
static void i0turdqqtq ( kdxyjsixti * obj ) ; static void eusryzwbaa (
kdxyjsixti * obj , int32_T PROBLEM_TYPE ) ; static void cbwacn3e4r (
kdxyjsixti * obj ) ; static void dj2cbrorw3kd ( real_T fval , real_T
Ceq_workspace , kthfgfhdov * obj ) ; static void ek1cslbopi ( real_T
workspace [ 8 ] , int32_T nVar , const real_T grad [ 8 ] , const real_T
AeqTrans [ 8 ] , const int32_T finiteLB [ 8 ] , int32_T mLB , const real_T
lambda [ 4 ] ) ; static real_T ppqo1m21bl ( real_T cEq ) ; static void
cxrn1udwxm ( int32_T nVar , const real_T gradLag [ 8 ] , boolean_T * gradOK ,
real_T * val ) ; static int32_T mfrofh20mf ( int32_T n , const real_T x [ 8 ]
) ; static void ksrs0yrnvw ( kthfgfhdov * MeritFunction , const kdxyjsixti *
WorkingSet , fovverijux * TrialState , boolean_T * Flags_gradOK , boolean_T *
Flags_fevalOK , boolean_T * Flags_done , boolean_T * Flags_stepAccepted ,
boolean_T * Flags_failedLineSearch , int32_T * Flags_stepType ) ; static void
iexi1hxv0p ( fovverijux * obj , int32_T nVar , const real_T JacCeqTrans [ 8 ]
) ; static void eilmu4s5ow ( fovverijux * obj ) ; static void cdu0auzqs4j (
kdxyjsixti * WorkingSet , real_T cEq ) ; static void dpnt4bixcf ( fovverijux
* obj ) ; static void ek1cslbopik ( real_T workspace [ 64 ] , int32_T nVar ,
const real_T grad [ 8 ] , const real_T AeqTrans [ 8 ] , const int32_T
finiteLB [ 8 ] , int32_T mLB , const real_T lambda [ 4 ] ) ; static void
cxrn1udwxmw ( int32_T nVar , const real_T gradLag [ 64 ] , boolean_T * gradOK
, real_T * val ) ; static real_T i5uu0zdww5 ( int32_T n , const real_T x [ 64
] , int32_T ix0 ) ; static real_T d5s5vcjorz ( int32_T n , real_T * alpha1 ,
real_T x [ 64 ] , int32_T ix0 ) ; static void bzrp2oyzfa ( int32_T m ,
int32_T n , int32_T iv0 , real_T tau , real_T C [ 64 ] , int32_T ic0 , real_T
work [ 8 ] ) ; static void mrqydsx15c ( real_T A [ 64 ] , int32_T m , int32_T
n , int32_T nfxd , real_T tau [ 8 ] ) ; static void po4mz2muct ( real_T A [
64 ] , int32_T m , int32_T n , int32_T jpvt [ 8 ] , real_T tau [ 8 ] ) ;
static void bplndqf2vj ( dzrlw5sxs5 * obj , const real_T A [ 32 ] , int32_T
mrows , int32_T ncols ) ; static void n2v2qif1yv ( dzrlw5sxs5 * obj , int32_T
nrows ) ; static void km30jyym3b ( int32_T m , int32_T n , const real_T A [
64 ] , const real_T x [ 8 ] , real_T y [ 64 ] ) ; static void bvondj0iig (
int32_T n , const real_T A [ 64 ] , real_T x [ 64 ] ) ; static void
exp02lfvwa ( real_T lambda [ 4 ] , int32_T WorkingSet_nActiveConstr , const
int32_T WorkingSet_sizes [ 5 ] , const int32_T WorkingSet_isActiveIdx [ 6 ] ,
const int32_T WorkingSet_Wid [ 4 ] , const int32_T WorkingSet_Wlocalidx [ 4 ]
, real_T workspace [ 64 ] ) ; static void ksrs0yrnvw3 ( mf15oedits * Flags ,
ktaxowovvf * memspace , kthfgfhdov * MeritFunction , kdxyjsixti * WorkingSet
, fovverijux * TrialState , dzrlw5sxs5 * QRManager ) ; static void
ocj0pd5c5jy21 ( int32_T n , const real_T x [ 8 ] , real_T y [ 8 ] ) ; static
void ocj0pd5c5jy2 ( int32_T n , const real_T x [ 5 ] , real_T y [ 8 ] ) ;
static void ocj0pd5c5jy21aw ( int32_T n , const real_T x [ 5 ] , real_T y [ 5
] ) ; static void ocj0pd5c5j ( int32_T n , const real_T x [ 4 ] , real_T y [
4 ] ) ; static void b2smkg2r33 ( kdxyjsixti * WorkingSet , real_T
TrialState_cEq , const real_T TrialState_searchDir [ 8 ] ) ; static void
gmkk0qafbs ( fovverijux * solution , const real_T workingset_lb [ 8 ] , const
int32_T workingset_indexLB [ 8 ] , const int32_T workingset_sizes [ 5 ] ,
const boolean_T workingset_isActiveConstr [ 4 ] ) ; static void fdaj2f3sha (
int32_T x [ 8 ] , int32_T xLen , int32_T workspace [ 8 ] , int32_T xMin ,
int32_T xMax ) ; static void hc3wqesyj2 ( kdxyjsixti * obj , int32_T
idx_global ) ; static int32_T i3eyuko120 ( ktaxowovvf * memspace , kdxyjsixti
* workingset , dzrlw5sxs5 * qrmanager ) ; static void anjwrhuewg ( kdxyjsixti
* workingset , dzrlw5sxs5 * qrmanager , ktaxowovvf * memspace , real_T
tolfactor ) ; static void gptgkafsbe ( kdxyjsixti * obj ) ; static void
km30jyym3bu ( int32_T m , int32_T n , const real_T A [ 32 ] , const real_T x
[ 8 ] , real_T y [ 64 ] ) ; static void dtrv2kriti4 ( dzrlw5sxs5 * obj ,
const real_T A [ 32 ] , int32_T mrows , int32_T ncols ) ; static void
cxg22hx205o ( int32_T m , const real_T A [ 64 ] , real_T B_i [ 64 ] ) ;
static void dtrv2kriti ( dzrlw5sxs5 * obj , int32_T mrows , int32_T ncols ) ;
static void etqop2wnx13 ( int32_T m , int32_T k , const real_T A [ 64 ] ,
const real_T B_m [ 64 ] , real_T C [ 64 ] ) ; static void etqop2wnx1 (
int32_T m , int32_T k , const real_T A [ 64 ] , const real_T B_p [ 64 ] ,
real_T C [ 64 ] ) ; static void cxg22hx205 ( int32_T m , const real_T A [ 64
] , real_T B_e [ 64 ] ) ; static real_T btjgrinqe0 ( kdxyjsixti * obj , const
real_T x [ 64 ] ) ; static boolean_T fetubx0squ ( real_T workspace [ 64 ] ,
real_T xCurrent [ 8 ] , kdxyjsixti * workingset , dzrlw5sxs5 * qrmanager ) ;
static real_T btjgrinqe0p ( kdxyjsixti * obj , const real_T x [ 8 ] ) ;
static void g1pwp1vmyk ( fovverijux * solution , ktaxowovvf * memspace ,
kdxyjsixti * workingset , dzrlw5sxs5 * qrmanager ) ; static void keagmo2a3h (
k0ratk1n10 * obj , int32_T NumVars ) ; static void nxdwdyjjzv ( boolean_T
obj_hasLinear , int32_T obj_nvar , real_T workspace [ 64 ] , const real_T H [
25 ] , const real_T f [ 8 ] , const real_T x [ 8 ] ) ; static real_T
ftrayw10no ( const k0ratk1n10 * obj , real_T workspace [ 64 ] , const real_T
H [ 25 ] , const real_T f [ 8 ] , const real_T x [ 8 ] ) ; static void
km30jyym3bu3 ( int32_T m , int32_T n , const real_T A [ 25 ] , int32_T lda ,
const real_T x [ 8 ] , real_T y [ 7 ] ) ; static void oqrt5rwtlj ( k0ratk1n10
* obj , const real_T H [ 25 ] , const real_T f [ 8 ] , const real_T x [ 8 ] )
; static real_T neflgzisgi ( const k0ratk1n10 * obj , real_T workspace [ 64 ]
, const real_T f [ 8 ] , const real_T x [ 8 ] ) ; static void ocj0pd5c5jy (
int32_T n , real_T y [ 4 ] ) ; static void ocj0pd5c5jy21a ( int32_T n ,
real_T y [ 8 ] ) ; static void bmlfodpuvl ( real_T * a , real_T * b , real_T
* c , real_T * s ) ; static void lzz4urlwyc ( dzrlw5sxs5 * obj , const real_T
vec [ 32 ] , int32_T iv0 ) ; static void jbdwtzuxva ( dzrlw5sxs5 * obj ,
int32_T idx ) ; static int32_T dubp3qoihz ( int32_T n , real_T A [ 64 ] ) ;
static void epbifgh0rp ( csm4ifxwet * obj , const real_T A [ 25 ] , int32_T
ndims , int32_T ldA ) ; static void etqop2wnx13t ( int32_T m , int32_T n ,
int32_T k , const real_T A [ 25 ] , int32_T lda , const real_T B_i [ 64 ] ,
int32_T ib0 , real_T C [ 64 ] ) ; static void etqop2wnx13tt ( int32_T m ,
int32_T n , int32_T k , const real_T A [ 64 ] , int32_T ia0 , const real_T
B_e [ 64 ] , real_T C [ 64 ] ) ; static void gkc2xbh5rp ( real_T beta , const
real_T H [ 25 ] , int32_T nVarOrig , csm4ifxwet * cholmanager , const
dzrlw5sxs5 * qrmanager , ktaxowovvf * memspace ) ; static void b5okzx3i0u (
const real_T H [ 25 ] , csm4ifxwet * cholmanager , const dzrlw5sxs5 *
qrmanager , ktaxowovvf * memspace ) ; static void pdvqihnymv ( const
csm4ifxwet * obj , real_T rhs [ 8 ] ) ; static void dh11bh5mye ( int32_T n ,
real_T a , real_T x [ 8 ] , int32_T ix0 ) ; static void epbifgh0rpe (
csm4ifxwet * obj , int32_T ndims ) ; static void km30jyym3bu3p ( int32_T m ,
int32_T n , const real_T A [ 64 ] , int32_T ia0 , const real_T x [ 64 ] ,
real_T y [ 8 ] ) ; static void km30jyym3bu3pp ( int32_T m , int32_T n , const
real_T A [ 64 ] , int32_T ia0 , const real_T x [ 8 ] , real_T y [ 64 ] ) ;
static void pdvqihnymve ( const csm4ifxwet * obj , real_T rhs [ 64 ] ) ;
static void mf4pifqcej ( const real_T H [ 25 ] , fovverijux * solution ,
ktaxowovvf * memspace , const dzrlw5sxs5 * qrmanager , csm4ifxwet *
cholmanager , const k0ratk1n10 * objective ) ; static real_T i5uu0zdww5x (
int32_T n , const real_T x [ 8 ] ) ; static void c4iphnhfy4 ( const real_T
solution_xstar [ 8 ] , const real_T solution_searchDir [ 8 ] , int32_T
workingset_nVar , const real_T workingset_lb [ 8 ] , const int32_T
workingset_indexLB [ 8 ] , const int32_T workingset_sizes [ 5 ] , const
boolean_T workingset_isActiveConstr [ 4 ] , const int32_T workingset_nWConstr
[ 5 ] , boolean_T isPhaseOne , real_T * alpha , boolean_T * newBlocking ,
int32_T * constrType , int32_T * constrIdx ) ; static void ip4jnzjwt1 (
real_T workspace [ 64 ] , fovverijux * solution , const k0ratk1n10 *
objective , const dzrlw5sxs5 * qrmanager ) ; static void kghpdwcp3a (
fovverijux * solution , const k0ratk1n10 * objective ) ; static int32_T
g3uxyaaiyq ( const real_T solution_lambda [ 4 ] , int32_T
workingset_nActiveConstr , const int32_T workingset_nWConstr [ 5 ] ) ; static
void pvj1vfm0bg ( kdxyjsixti * obj , int32_T TYPE , int32_T idx_local ) ;
static void o0lbuz5j1t ( kdxyjsixti * obj , int32_T idx_local ) ; static void
h4s4ua3bej ( int32_T n , real_T a , const real_T x [ 8 ] , real_T y [ 8 ] ) ;
static int32_T p1n0fcaquz ( int32_T x ) ; static void pc5idulzra ( int32_T *
activeSetChangeID , const real_T f [ 8 ] , fovverijux * solution , ktaxowovvf
* memspace , const k0ratk1n10 * objective , kdxyjsixti * workingset ,
dzrlw5sxs5 * qrmanager , real_T options_ObjectiveLimit , int32_T
runTimeOptions_MaxIterations , boolean_T updateFval ) ; static void
h2zqqbaphd ( const real_T H [ 25 ] , const real_T f [ 8 ] , fovverijux *
solution , ktaxowovvf * memspace , kdxyjsixti * workingset , dzrlw5sxs5 *
qrmanager , csm4ifxwet * cholmanager , k0ratk1n10 * objective , real_T
options_StepTolerance , real_T options_ObjectiveLimit , int32_T
runTimeOptions_MaxIterations ) ; static void cya242k2pr ( k0ratk1n10 * obj )
; static void cw0wmlqckk ( const real_T H [ 25 ] , const real_T f [ 8 ] ,
fovverijux * solution , ktaxowovvf * memspace , kdxyjsixti * workingset ,
dzrlw5sxs5 * qrmanager , csm4ifxwet * cholmanager , k0ratk1n10 * objective ,
e2ucunpqcp * options , const e2ucunpqcp * runTimeOptions ) ; static void
g01zi3nkf0c ( const real_T H [ 25 ] , const real_T f [ 8 ] , fovverijux *
solution , ktaxowovvf * memspace , kdxyjsixti * workingset , dzrlw5sxs5 *
qrmanager , csm4ifxwet * cholmanager , k0ratk1n10 * objective , e2ucunpqcp *
options , e2ucunpqcp * runTimeOptions ) ; static void lbs2jnu1sz ( kdxyjsixti
* obj , int32_T idx_local ) ; static void g44a3wny4j ( kdxyjsixti *
WorkingSet , real_T TrialState_cEq ) ; static boolean_T h1skejptsj ( const
real_T Hessian [ 25 ] , const real_T grad [ 8 ] , fovverijux * TrialState ,
ktaxowovvf * memspace , kdxyjsixti * WorkingSet , dzrlw5sxs5 * QRManager ,
csm4ifxwet * CholManager , k0ratk1n10 * QPObjective , const e2ucunpqcp *
qpoptions ) ; static void he0bczuci1 ( kthfgfhdov * obj , real_T fval ,
real_T eq_workspace , int32_T sqpiter , real_T qpval ) ; static void
kqwfgy4qbs ( const real_T Hessian [ 25 ] , const real_T grad [ 8 ] ,
fovverijux * TrialState , kthfgfhdov * MeritFunction , ktaxowovvf * memspace
, kdxyjsixti * WorkingSet , dzrlw5sxs5 * QRManager , csm4ifxwet * CholManager
, k0ratk1n10 * QPObjective , const e2ucunpqcp * qpoptions ) ; static void
dabs5zh1br ( k0ratk1n10 * obj , int32_T numQuadVars , real_T beta , real_T
rho ) ; static void izkrqq3suf ( int32_T nVarOrig , kdxyjsixti * WorkingSet ,
fovverijux * TrialState , ktaxowovvf * memspace ) ; static int32_T fzdnhnbint
( ktaxowovvf * memspace , const int32_T WorkingSet_sizes [ 5 ] , const
boolean_T WorkingSet_isActiveConstr [ 4 ] ) ; static real_T ctccuctamv (
int32_T n , const real_T x [ 8 ] , int32_T ix0 ) ; static real_T h0kgdqgo40 (
int32_T n , const real_T x [ 8 ] , int32_T ix0 , const real_T y [ 8 ] ,
int32_T iy0 ) ; static void he0bczuci1b ( kthfgfhdov * obj , real_T fval ,
real_T eq_workspace , int32_T sqpiter , real_T qpval , const real_T x [ 8 ] ,
int32_T iReg0 , int32_T nRegularized ) ; static void b3d5knwcuv ( int32_T
nActiveLBArtificial , fovverijux * TrialState , kdxyjsixti * WorkingSet ) ;
static void i2rfqztpnd ( k0ratk1n10 * obj , int32_T NumVars ) ; static
int32_T mfrofh20mfq ( int32_T n , const real_T x [ 4 ] ) ; static void
ibyal3ep2i ( const real_T Hessian [ 25 ] , const real_T grad [ 8 ] ,
fovverijux * TrialState , kthfgfhdov * MeritFunction , ktaxowovvf * memspace
, kdxyjsixti * WorkingSet , dzrlw5sxs5 * QRManager , csm4ifxwet * CholManager
, k0ratk1n10 * QPObjective , e2ucunpqcp * qpoptions ) ; static void
moizl4aka3 ( real_T Hessian [ 25 ] , const real_T grad [ 8 ] , const real_T
searchDir [ 8 ] ) ; static boolean_T hfcepsnata ( int32_T * STEP_TYPE ,
real_T Hessian [ 25 ] , fovverijux * TrialState , kthfgfhdov * MeritFunction
, ktaxowovvf * memspace , kdxyjsixti * WorkingSet , dzrlw5sxs5 * QRManager ,
csm4ifxwet * CholManager , k0ratk1n10 * QPObjective , e2ucunpqcp * qpoptions
) ; static void iyr1rxfcqi ( int32_T nVar , real_T workspace [ 8 ] , const
real_T grad [ 8 ] , const real_T JacEqTrans [ 8 ] , const real_T grad_old [ 8
] , const real_T JacEqTrans_old [ 8 ] , const real_T lambda [ 4 ] ) ; static
boolean_T hdmoesrrjp ( int32_T nvar , real_T Bk [ 25 ] , const real_T sk [ 8
] , real_T yk [ 8 ] , real_T workspace [ 64 ] ) ; static void ibebbcogqe (
boolean_T * evalWellDefined , int32_T WorkingSet_nVar , fovverijux *
TrialState , real_T MeritFunction_penaltyParam , real_T MeritFunction_phi ,
real_T MeritFunction_phiPrimePlus , real_T MeritFunction_phiFullStep , const
hskkdlcyjp * FcnEvaluator_objfun_tunableEnvironment , boolean_T socTaken ,
real_T * alpha , int32_T * exitflag ) ; static void dkm24rsgfe ( const
hskkdlcyjp * obj_objfun_tunableEnvironment , const real_T x [ 5 ] , real_T *
Ceq_workspace , real_T * fval , int32_T * status ) ; static real_T asykd4r443
( real_T obj_penaltyParam , real_T fval , real_T Ceq_workspace , boolean_T
evalWellDefined ) ; static void g01zi3nkf0 ( fovverijux * TrialState ,
kthfgfhdov * MeritFunction , const cdseu45pm3 * FcnEvaluator , hbctg4nwcl *
FiniteDifferences , ktaxowovvf * memspace , kdxyjsixti * WorkingSet ,
dzrlw5sxs5 * QRManager , k0ratk1n10 * QPObjective , real_T Hessian [ 25 ] ,
csm4ifxwet * CholManager ) ; static void mes2kf0vif ( const hskkdlcyjp *
fun_tunableEnvironment , real_T x [ 5 ] , real_T * fval , real_T * exitflag )
; static void dj2cbrorw3kdl ( const real_T objfun_tunableEnvironment [ 4 ] ,
real_T obj_objfun_tunableEnvironment [ 4 ] , int32_T * obj_nVar , int32_T *
obj_mCineq , int32_T * obj_mCeq , boolean_T * obj_NonFiniteSupport ,
boolean_T * obj_SpecifyObjectiveGradient , boolean_T *
obj_SpecifyConstraintGradient , boolean_T * obj_ScaleProblem ) ; static void
ibqyp0ury0q ( const real_T obj_objfun_tunableEnvironment [ 4 ] , const real_T
x [ 18 ] , real_T * fval , int32_T * status ) ; static int32_T pawujf5ux31 (
const real_T x [ 18 ] , real_T Ceq_workspace [ 4 ] ) ; static void
otclemyw5hd ( const real_T obj_objfun_tunableEnvironment [ 4 ] , const real_T
x [ 18 ] , real_T Ceq_workspace [ 4 ] , real_T * fval , int32_T * status ) ;
static void dj2cbrorw3kdls ( const real_T objfun_tunableEnvironment [ 4 ] ,
dxs1et3yod * obj ) ; static boolean_T o4hbmaeodi3 ( const real_T
obj_objfun_tunableEnvironment [ 4 ] , real_T * fplus , real_T cEqPlus [ 4 ] ,
int32_T dim , real_T delta , real_T xk [ 18 ] ) ; static boolean_T
ac5h1531rt3 ( dxs1et3yod * obj , real_T fCurrent , const real_T cEqCurrent [
4 ] , real_T xk [ 18 ] , real_T gradf [ 27 ] , real_T JacCeqTrans [ 108 ] ) ;
static void cdu0auzqs4ja ( nuprfhnilo * WorkingSet , const real_T cEq [ 4 ] )
; static void i0turdqqtq0 ( nuprfhnilo * obj ) ; static void eusryzwbaaa (
nuprfhnilo * obj , int32_T PROBLEM_TYPE ) ; static void cbwacn3e4ri (
nuprfhnilo * obj ) ; static void dj2cbrorw3kdlsj ( real_T fval , const real_T
Ceq_workspace [ 4 ] , kthfgfhdov * obj ) ; static void ek1cslbopikf ( real_T
workspace [ 27 ] , int32_T nVar , const real_T grad [ 27 ] , const real_T
AeqTrans [ 108 ] , const int32_T finiteLB [ 27 ] , int32_T mLB , const real_T
lambda [ 13 ] ) ; static real_T ppqo1m21bl1 ( const real_T cEq [ 4 ] ) ;
static void cxrn1udwxmwa ( int32_T nVar , const real_T gradLag [ 27 ] ,
boolean_T * gradOK , real_T * val ) ; static int32_T mfrofh20mfqs ( int32_T n
, const real_T x [ 27 ] ) ; static void ksrs0yrnvw3u ( kthfgfhdov *
MeritFunction , const nuprfhnilo * WorkingSet , aaxpzhoxuz * TrialState ,
boolean_T * Flags_gradOK , boolean_T * Flags_fevalOK , boolean_T * Flags_done
, boolean_T * Flags_stepAccepted , boolean_T * Flags_failedLineSearch ,
int32_T * Flags_stepType ) ; static void iexi1hxv0po ( aaxpzhoxuz * obj ,
int32_T nVar , const real_T JacCeqTrans [ 108 ] ) ; static void eilmu4s5owu (
aaxpzhoxuz * obj ) ; static void cdu0auzqs4jar ( nuprfhnilo * WorkingSet ,
const real_T cEq [ 4 ] ) ; static void dpnt4bixcf4 ( aaxpzhoxuz * obj ) ;
static boolean_T hcy4pkatwq ( real_T x ) ; static void j0fmletkso ( int32_T n
, const real_T x [ 13 ] , real_T y [ 13 ] ) ; static void ek1cslbopikf3 (
real_T workspace [ 729 ] , int32_T nVar , const real_T grad [ 27 ] , const
real_T AeqTrans [ 108 ] , const int32_T finiteLB [ 27 ] , int32_T mLB , const
real_T lambda [ 13 ] ) ; static void cxrn1udwxmwar ( int32_T nVar , const
real_T gradLag [ 729 ] , boolean_T * gradOK , real_T * val ) ; static
boolean_T d0wq0olg2g ( const real_T xCurrent [ 18 ] , const real_T delta_x [
27 ] , int32_T nVar ) ; static void lv22laqqr3 ( int32_T n , const real_T x [
351 ] , int32_T ix0 , real_T y [ 729 ] , int32_T iy0 ) ; static real_T
i5uu0zdww5x0 ( int32_T n , const real_T x [ 729 ] , int32_T ix0 ) ; static
real_T d5s5vcjorzd ( int32_T n , real_T * alpha1 , real_T x [ 729 ] , int32_T
ix0 ) ; static void km30jyym3bu3ppb ( int32_T m , int32_T n , const real_T A
[ 729 ] , int32_T ia0 , const real_T x [ 729 ] , int32_T ix0 , real_T y [ 27
] ) ; static void ocfo040uqq ( int32_T m , int32_T n , real_T alpha1 ,
int32_T ix0 , const real_T y [ 27 ] , real_T A [ 729 ] , int32_T ia0 ) ;
static int32_T h5vi5f3i0z ( int32_T m , int32_T n , const real_T A [ 729 ] ,
int32_T ia0 ) ; static void bzrp2oyzfai ( int32_T m , int32_T n , int32_T iv0
, real_T tau , real_T C [ 729 ] , int32_T ic0 , real_T work [ 27 ] ) ; static
void mrqydsx15co ( real_T A [ 729 ] , int32_T m , int32_T n , int32_T nfxd ,
real_T tau [ 27 ] ) ; static void ici4xm22p4 ( int32_T n , real_T x [ 729 ] ,
int32_T ix0 , int32_T iy0 ) ; static int32_T mfrofh20mfqsg ( int32_T n ,
const real_T x [ 27 ] , int32_T ix0 ) ; static void h2apua34ax ( real_T A [
729 ] , int32_T m , int32_T n , int32_T nfxd , real_T tau [ 27 ] , int32_T
jpvt [ 27 ] ) ; static void po4mz2muctr ( real_T A [ 729 ] , int32_T m ,
int32_T n , int32_T jpvt [ 27 ] , real_T tau [ 27 ] ) ; static void
bplndqf2vju ( ev3ltaqeco * obj , const real_T A [ 351 ] , int32_T mrows ,
int32_T ncols , k0zpd1rkeh * localB ) ; static void de14mwsdes ( int32_T m ,
int32_T n , const real_T A [ 729 ] , int32_T ia0 , const real_T x [ 729 ] ,
int32_T ix0 , real_T y [ 27 ] ) ; static void ocfo040uqqw ( int32_T m ,
int32_T n , real_T alpha1 , int32_T ix0 , const real_T y [ 27 ] , real_T A [
729 ] , int32_T ia0 ) ; static void bzrp2oyzfaik ( int32_T m , int32_T n ,
int32_T iv0 , real_T tau , real_T C [ 729 ] , int32_T ic0 , real_T work [ 27
] ) ; static void dh11bh5myeo ( int32_T n , real_T a , real_T x [ 729 ] ,
int32_T ix0 ) ; static void ngm2hvbywt ( int32_T m , int32_T n , int32_T k ,
real_T A [ 729 ] , const real_T tau [ 27 ] ) ; static void n2v2qif1yvp (
ev3ltaqeco * obj , int32_T nrows ) ; static void ei532vpsif ( int32_T m ,
int32_T n , const real_T A [ 729 ] , const real_T x [ 27 ] , real_T y [ 729 ]
) ; static void bvondj0iigg ( int32_T n , const real_T A [ 729 ] , real_T x [
729 ] ) ; static void e3vkzzkhia ( int32_T nVar , int32_T mConstr ,
ev3ltaqeco * QRManager , const real_T ATwset [ 351 ] , const real_T grad [ 27
] , real_T lambdaLSQ [ 13 ] , real_T workspace [ 729 ] , k0zpd1rkeh * localB
) ; static void exp02lfvwax ( real_T lambda [ 13 ] , int32_T
WorkingSet_nActiveConstr , const int32_T WorkingSet_sizes [ 5 ] , const
int32_T WorkingSet_isActiveIdx [ 6 ] , const int32_T WorkingSet_Wid [ 13 ] ,
const int32_T WorkingSet_Wlocalidx [ 13 ] , real_T workspace [ 729 ] ) ;
static void ksrs0yrnvw3u0 ( mf15oedits * Flags , guj4mpcfgf * memspace ,
kthfgfhdov * MeritFunction , nuprfhnilo * WorkingSet , aaxpzhoxuz *
TrialState , ev3ltaqeco * QRManager , k0zpd1rkeh * localB ) ; static void
dya4t2wzfj ( int32_T n , const real_T x [ 27 ] , real_T y [ 27 ] ) ; static
void enbciu5tww ( int32_T n , const real_T x [ 18 ] , real_T y [ 27 ] ) ;
static void onjp02j2te ( int32_T n , const real_T x [ 18 ] , real_T y [ 18 ]
) ; static void b2smkg2r33v ( nuprfhnilo * WorkingSet , const real_T
TrialState_cEq [ 4 ] , const real_T TrialState_searchDir [ 27 ] ) ; static
void gmkk0qafbsm ( aaxpzhoxuz * solution , const real_T workingset_lb [ 27 ]
, const int32_T workingset_indexLB [ 27 ] , const int32_T workingset_sizes [
5 ] , const boolean_T workingset_isActiveConstr [ 13 ] ) ; static void
bplndqf2vjul ( ev3ltaqeco * obj , int32_T mrows , int32_T ncols , k0zpd1rkeh
* localB ) ; static int32_T b0lsfj2rph ( ev3ltaqeco * qrmanager , const
real_T beqf [ 13 ] , int32_T mConstr , int32_T nVar , k0zpd1rkeh * localB ) ;
static void eyvjfn2n3t ( int32_T depIdx [ 27 ] , int32_T mFixed , int32_T
nDep , ev3ltaqeco * qrmanager , const real_T AeqfPrime [ 351 ] , int32_T
mRows , int32_T nCols , k0zpd1rkeh * localB ) ; static void fdaj2f3shab (
int32_T x [ 27 ] , int32_T xLen , int32_T workspace [ 27 ] , int32_T xMin ,
int32_T xMax ) ; static void hc3wqesyj2i ( nuprfhnilo * obj , int32_T
idx_global ) ; static void h5r4em04uc ( nuprfhnilo * obj , int32_T idx_global
) ; static int32_T i3eyuko120g ( guj4mpcfgf * memspace , nuprfhnilo *
workingset , ev3ltaqeco * qrmanager , k0zpd1rkeh * localB ) ; static void
anjwrhuewgz ( nuprfhnilo * workingset , ev3ltaqeco * qrmanager , guj4mpcfgf *
memspace , real_T tolfactor , k0zpd1rkeh * localB ) ; static void gptgkafsbem
( nuprfhnilo * obj ) ; static void b12gqbcpcn ( int32_T m , int32_T n , const
real_T A [ 351 ] , const real_T x [ 27 ] , real_T y [ 729 ] ) ; static void
ni0psukixq ( real_T A [ 729 ] , int32_T m , int32_T n , real_T tau [ 27 ] ) ;
static void dtrv2kriti4dc ( ev3ltaqeco * obj , const real_T A [ 351 ] ,
int32_T mrows , int32_T ncols ) ; static void cxg22hx205ogm ( int32_T m ,
const real_T A [ 729 ] , real_T B_j [ 729 ] ) ; static void dtrv2kriti4d (
ev3ltaqeco * obj , int32_T mrows , int32_T ncols ) ; static void
etqop2wnx13ttcx ( int32_T m , int32_T k , const real_T A [ 729 ] , const
real_T B_f [ 729 ] , real_T C [ 729 ] ) ; static void etqop2wnx13ttc (
int32_T m , int32_T k , const real_T A [ 729 ] , const real_T B_g [ 729 ] ,
real_T C [ 729 ] ) ; static void cxg22hx205og ( int32_T m , const real_T A [
729 ] , real_T B_p [ 729 ] ) ; static void h4s4ua3beju ( int32_T n , const
real_T x [ 27 ] , real_T y [ 729 ] ) ; static real_T l5xxgc0lxj ( nuprfhnilo
* obj , const real_T x [ 729 ] ) ; static real_T k4kfmgds3z ( nuprfhnilo *
obj , const real_T x [ 729 ] ) ; static real_T btjgrinqe0pt ( nuprfhnilo *
obj , const real_T x [ 729 ] ) ; static real_T l5xxgc0lxj4 ( nuprfhnilo * obj
, const real_T x [ 729 ] ) ; static real_T k4kfmgds3zj ( nuprfhnilo * obj ,
const real_T x [ 729 ] ) ; static real_T btjgrinqe0ptp ( nuprfhnilo * obj ,
const real_T x [ 729 ] ) ; static void oro5v4bizl ( int32_T n , const real_T
x [ 729 ] , real_T y [ 27 ] ) ; static void lxnymgh43e ( int32_T n , const
real_T x [ 729 ] , real_T y [ 27 ] ) ; static boolean_T fetubx0squj ( real_T
workspace [ 729 ] , real_T xCurrent [ 27 ] , nuprfhnilo * workingset ,
ev3ltaqeco * qrmanager , k0zpd1rkeh * localB ) ; static real_T l5xxgc0lxj4y (
nuprfhnilo * obj , const real_T x [ 27 ] ) ; static real_T k4kfmgds3zj2 (
nuprfhnilo * obj , const real_T x [ 27 ] ) ; static real_T btjgrinqe0ptpf (
nuprfhnilo * obj , const real_T x [ 27 ] ) ; static void g1pwp1vmykx (
aaxpzhoxuz * solution , guj4mpcfgf * memspace , nuprfhnilo * workingset ,
ev3ltaqeco * qrmanager , k0zpd1rkeh * localB ) ; static void keagmo2a3hl (
ecn2fyspui * obj , int32_T NumVars ) ; static void nxdwdyjjzvs ( boolean_T
obj_hasLinear , int32_T obj_nvar , real_T workspace [ 729 ] , const real_T H
[ 324 ] , const real_T f [ 27 ] , const real_T x [ 27 ] ) ; static real_T
ftrayw10nos ( const ecn2fyspui * obj , real_T workspace [ 729 ] , const
real_T H [ 324 ] , const real_T f [ 27 ] , const real_T x [ 27 ] ) ; static
void cbgw2va3xd ( int32_T m , int32_T n , const real_T A [ 324 ] , int32_T
lda , const real_T x [ 27 ] , real_T y [ 26 ] ) ; static void oqrt5rwtljp (
ecn2fyspui * obj , const real_T H [ 324 ] , const real_T f [ 27 ] , const
real_T x [ 27 ] ) ; static real_T neflgzisgif ( const ecn2fyspui * obj ,
real_T workspace [ 729 ] , const real_T f [ 27 ] , const real_T x [ 27 ] ) ;
static void gii00qdwdf ( int32_T n , real_T y [ 13 ] ) ; static void
fedqp1cplx ( int32_T n , real_T y [ 27 ] ) ; static void gmoswboekt ( int32_T
n , real_T x [ 729 ] , int32_T ix0 , int32_T iy0 , real_T c , real_T s ) ;
static void lzz4urlwyck ( ev3ltaqeco * obj , const real_T vec [ 351 ] ,
int32_T iv0 ) ; static void gmoswboektq ( int32_T n , real_T x [ 729 ] ,
int32_T ix0 , int32_T iy0 , real_T c , real_T s ) ; static void jbdwtzuxva5 (
ev3ltaqeco * obj , int32_T idx ) ; static int32_T dubp3qoihzu ( int32_T n ,
real_T A [ 729 ] ) ; static void e2qqkztimz ( int32_T n , const real_T x [
324 ] , int32_T ix0 , real_T y [ 729 ] , int32_T iy0 ) ; static void
epbifgh0rpen ( bwxng4ee5f * obj , const real_T A [ 324 ] , int32_T ndims ,
int32_T ldA ) ; static void jli2jmu4kd ( int32_T m , int32_T n , int32_T k ,
const real_T A [ 324 ] , int32_T lda , const real_T B_m [ 729 ] , int32_T ib0
, real_T C [ 729 ] ) ; static void jbxsunh5tw ( int32_T m , int32_T n ,
int32_T k , const real_T A [ 729 ] , int32_T ia0 , const real_T B_c [ 729 ] ,
real_T C [ 729 ] ) ; static void gkc2xbh5rpx ( real_T beta , const real_T H [
324 ] , int32_T nVarOrig , bwxng4ee5f * cholmanager , const ev3ltaqeco *
qrmanager , guj4mpcfgf * memspace ) ; static void b5okzx3i0uv ( const real_T
H [ 324 ] , bwxng4ee5f * cholmanager , const ev3ltaqeco * qrmanager ,
guj4mpcfgf * memspace ) ; static void pdvqihnymvea ( const bwxng4ee5f * obj ,
real_T rhs [ 27 ] ) ; static void dh11bh5myeop ( int32_T n , real_T a ,
real_T x [ 27 ] , int32_T ix0 ) ; static void epbifgh0rpeni ( bwxng4ee5f *
obj , int32_T ndims ) ; static void oqovnyx4bp ( int32_T m , int32_T n ,
const real_T A [ 729 ] , int32_T ia0 , const real_T x [ 729 ] , real_T y [ 27
] ) ; static void iwlgfn3yin ( int32_T m , int32_T n , const real_T A [ 729 ]
, int32_T ia0 , const real_T x [ 27 ] , real_T y [ 729 ] ) ; static void
pdvqihnymveaz ( const bwxng4ee5f * obj , real_T rhs [ 729 ] ) ; static void
mf4pifqcejq ( const real_T H [ 324 ] , aaxpzhoxuz * solution , guj4mpcfgf *
memspace , const ev3ltaqeco * qrmanager , bwxng4ee5f * cholmanager , const
ecn2fyspui * objective , k0zpd1rkeh * localB ) ; static real_T i5uu0zdww5x01
( int32_T n , const real_T x [ 27 ] ) ; static void c4iphnhfy4g ( const
real_T solution_xstar [ 27 ] , const real_T solution_searchDir [ 27 ] ,
int32_T workingset_nVar , const real_T workingset_lb [ 27 ] , const int32_T
workingset_indexLB [ 27 ] , const int32_T workingset_sizes [ 5 ] , const
boolean_T workingset_isActiveConstr [ 13 ] , const int32_T
workingset_nWConstr [ 5 ] , boolean_T isPhaseOne , real_T * alpha , boolean_T
* newBlocking , int32_T * constrType , int32_T * constrIdx ) ; static void
ip4jnzjwt1c ( real_T workspace [ 729 ] , aaxpzhoxuz * solution , const
ecn2fyspui * objective , const ev3ltaqeco * qrmanager ) ; static void
kghpdwcp3am ( aaxpzhoxuz * solution , const ecn2fyspui * objective ) ; static
int32_T g3uxyaaiyqy ( const real_T solution_lambda [ 13 ] , int32_T
workingset_nActiveConstr , const int32_T workingset_nWConstr [ 5 ] ) ; static
void pvj1vfm0bgl ( nuprfhnilo * obj , int32_T TYPE , int32_T idx_local ) ;
static void o0lbuz5j1to ( nuprfhnilo * obj , int32_T idx_local ) ; static
void h4s4ua3bejuz ( int32_T n , real_T a , const real_T x [ 27 ] , real_T y [
27 ] ) ; static void pc5idulzrak ( int32_T * activeSetChangeID , const real_T
f [ 27 ] , aaxpzhoxuz * solution , guj4mpcfgf * memspace , const ecn2fyspui *
objective , nuprfhnilo * workingset , ev3ltaqeco * qrmanager , real_T
options_ObjectiveLimit , int32_T runTimeOptions_MaxIterations , boolean_T
updateFval , k0zpd1rkeh * localB ) ; static void h2zqqbaphdz ( const real_T H
[ 324 ] , const real_T f [ 27 ] , aaxpzhoxuz * solution , guj4mpcfgf *
memspace , nuprfhnilo * workingset , ev3ltaqeco * qrmanager , bwxng4ee5f *
cholmanager , ecn2fyspui * objective , real_T options_StepTolerance , real_T
options_ObjectiveLimit , int32_T runTimeOptions_MaxIterations , k0zpd1rkeh *
localB ) ; static void cya242k2prj ( ecn2fyspui * obj ) ; static void
cw0wmlqckke ( const real_T H [ 324 ] , const real_T f [ 27 ] , aaxpzhoxuz *
solution , guj4mpcfgf * memspace , nuprfhnilo * workingset , ev3ltaqeco *
qrmanager , bwxng4ee5f * cholmanager , ecn2fyspui * objective , e2ucunpqcp *
options , const e2ucunpqcp * runTimeOptions , k0zpd1rkeh * localB ) ; static
void g01zi3nkf0c0m ( const real_T H [ 324 ] , const real_T f [ 27 ] ,
aaxpzhoxuz * solution , guj4mpcfgf * memspace , nuprfhnilo * workingset ,
ev3ltaqeco * qrmanager , bwxng4ee5f * cholmanager , ecn2fyspui * objective ,
e2ucunpqcp * options , e2ucunpqcp * runTimeOptions , k0zpd1rkeh * localB ) ;
static void lbs2jnu1szw ( nuprfhnilo * obj , int32_T idx_local ) ; static
void g44a3wny4je ( nuprfhnilo * WorkingSet , const real_T TrialState_cEq [ 4
] ) ; static boolean_T h1skejptsj4 ( const real_T Hessian [ 324 ] , const
real_T grad [ 27 ] , aaxpzhoxuz * TrialState , guj4mpcfgf * memspace ,
nuprfhnilo * WorkingSet , ev3ltaqeco * QRManager , bwxng4ee5f * CholManager ,
ecn2fyspui * QPObjective , const e2ucunpqcp * qpoptions , k0zpd1rkeh * localB
) ; static void he0bczuci1bd ( kthfgfhdov * obj , real_T fval , const real_T
eq_workspace [ 4 ] , int32_T sqpiter , real_T qpval ) ; static void
kqwfgy4qbsm ( const real_T Hessian [ 324 ] , const real_T grad [ 27 ] ,
aaxpzhoxuz * TrialState , kthfgfhdov * MeritFunction , guj4mpcfgf * memspace
, nuprfhnilo * WorkingSet , ev3ltaqeco * QRManager , bwxng4ee5f * CholManager
, ecn2fyspui * QPObjective , const e2ucunpqcp * qpoptions , k0zpd1rkeh *
localB ) ; static void dabs5zh1brw ( ecn2fyspui * obj , int32_T numQuadVars ,
real_T beta , real_T rho ) ; static void izkrqq3sufo ( int32_T nVarOrig ,
nuprfhnilo * WorkingSet , aaxpzhoxuz * TrialState , guj4mpcfgf * memspace ) ;
static int32_T fzdnhnbint1 ( guj4mpcfgf * memspace , const int32_T
WorkingSet_sizes [ 5 ] , const boolean_T WorkingSet_isActiveConstr [ 13 ] ) ;
static real_T ctccuctamvs ( int32_T n , const real_T x [ 27 ] , int32_T ix0 )
; static real_T h0kgdqgo40o ( int32_T n , const real_T x [ 27 ] , int32_T ix0
, const real_T y [ 27 ] , int32_T iy0 ) ; static void he0bczuci1bdp (
kthfgfhdov * obj , real_T fval , const real_T eq_workspace [ 4 ] , int32_T
sqpiter , real_T qpval , const real_T x [ 27 ] , int32_T iReg0 , int32_T
nRegularized ) ; static void b3d5knwcuvr ( int32_T nActiveLBArtificial ,
aaxpzhoxuz * TrialState , nuprfhnilo * WorkingSet ) ; static void i2rfqztpndo
( ecn2fyspui * obj , int32_T NumVars ) ; static int32_T mfrofh20mfqsge (
int32_T n , const real_T x [ 13 ] ) ; static void ibyal3ep2ij ( const real_T
Hessian [ 324 ] , const real_T grad [ 27 ] , aaxpzhoxuz * TrialState ,
kthfgfhdov * MeritFunction , guj4mpcfgf * memspace , nuprfhnilo * WorkingSet
, ev3ltaqeco * QRManager , bwxng4ee5f * CholManager , ecn2fyspui *
QPObjective , e2ucunpqcp * qpoptions , k0zpd1rkeh * localB ) ; static void
moizl4aka3m ( real_T Hessian [ 324 ] , const real_T grad [ 27 ] , const
real_T searchDir [ 27 ] ) ; static boolean_T hfcepsnatap ( int32_T *
STEP_TYPE , real_T Hessian [ 324 ] , aaxpzhoxuz * TrialState , kthfgfhdov *
MeritFunction , guj4mpcfgf * memspace , nuprfhnilo * WorkingSet , ev3ltaqeco
* QRManager , bwxng4ee5f * CholManager , ecn2fyspui * QPObjective ,
e2ucunpqcp * qpoptions , k0zpd1rkeh * localB ) ; static void iyr1rxfcqi3 (
int32_T nVar , real_T workspace [ 27 ] , const real_T grad [ 27 ] , const
real_T JacEqTrans [ 108 ] , const real_T grad_old [ 27 ] , const real_T
JacEqTrans_old [ 108 ] , const real_T lambda [ 13 ] ) ; static boolean_T
hdmoesrrjpe ( int32_T nvar , real_T Bk [ 324 ] , const real_T sk [ 27 ] ,
real_T yk [ 27 ] , real_T workspace [ 729 ] ) ; static void ibebbcogqeg (
boolean_T * evalWellDefined , int32_T WorkingSet_nVar , aaxpzhoxuz *
TrialState , real_T MeritFunction_penaltyParam , real_T MeritFunction_phi ,
real_T MeritFunction_phiPrimePlus , real_T MeritFunction_phiFullStep , const
real_T FcnEvaluator_objfun_tunableEnvironment [ 4 ] , boolean_T socTaken ,
real_T * alpha , int32_T * exitflag ) ; static void dkm24rsgfeq ( const
real_T obj_objfun_tunableEnvironment [ 4 ] , const real_T x [ 18 ] , real_T
Ceq_workspace [ 4 ] , real_T * fval , int32_T * status ) ; static real_T
asykd4r443i ( real_T obj_penaltyParam , real_T fval , const real_T
Ceq_workspace [ 4 ] , boolean_T evalWellDefined ) ; static void g01zi3nkf0c0
( aaxpzhoxuz * TrialState , kthfgfhdov * MeritFunction , const dccng4x0j0 *
FcnEvaluator , dxs1et3yod * FiniteDifferences , guj4mpcfgf * memspace ,
nuprfhnilo * WorkingSet , ev3ltaqeco * QRManager , ecn2fyspui * QPObjective ,
real_T Hessian [ 324 ] , bwxng4ee5f * CholManager , k0zpd1rkeh * localB ) ;
static void mes2kf0vifn ( const real_T fun_tunableEnvironment [ 4 ] , real_T
x [ 18 ] , real_T * fval , real_T * exitflag , k0zpd1rkeh * localB ) ; static
void jt2ame0nt2 ( int32_T * obj_nVar , int32_T * obj_mCineq , int32_T *
obj_mCeq , boolean_T * obj_NonFiniteSupport , boolean_T *
obj_SpecifyObjectiveGradient , boolean_T * obj_SpecifyConstraintGradient ,
boolean_T * obj_ScaleProblem ) ; static void fxnkqpuvi4 ( const real_T A [ 16
] , real_T * a , real_T * b , real_T * c , real_T * d , real_T * x , real_T *
y , real_T * z ) ; static void cipokh2zzb ( const hskkdlcyjp *
obj_objfun_tunableEnvironment , const real_T x [ 5 ] , real_T * fval ,
int32_T * status ) ; static int32_T fgxc0qaihr ( const real_T x [ 5 ] ,
real_T * Ceq_workspace ) ; static void ih4gycxc1o ( const hskkdlcyjp *
obj_objfun_tunableEnvironment , const real_T x [ 5 ] , real_T * Ceq_workspace
, real_T * fval , int32_T * status ) ; static void p32d0btmmxz ( const
hskkdlcyjp * objfun_tunableEnvironment , hbctg4nwcl * obj ) ; static
boolean_T hl1l1m0sqe ( const hskkdlcyjp * obj_objfun_tunableEnvironment ,
real_T * fplus , real_T * cEqPlus , int32_T dim , real_T delta , real_T xk [
5 ] ) ; static boolean_T ap1uxguxor ( hbctg4nwcl * obj , real_T fCurrent ,
real_T cEqCurrent , real_T xk [ 5 ] , real_T gradf [ 8 ] , real_T JacCeqTrans
[ 8 ] ) ; static void jy0zmqim5j ( kdxyjsixti * WorkingSet , real_T cEq ) ;
static void iwnxlinhde ( kdxyjsixti * obj ) ; static void gzr1v3zdr1 (
kdxyjsixti * obj , int32_T PROBLEM_TYPE ) ; static void oml1j5lmqr (
kdxyjsixti * obj ) ; static void p32d0btmmxzp ( real_T fval , real_T
Ceq_workspace , kthfgfhdov * obj ) ; static void e5dhnhf4mf ( real_T
workspace [ 8 ] , int32_T nVar , const real_T grad [ 8 ] , const real_T
AeqTrans [ 8 ] , const int32_T finiteLB [ 8 ] , int32_T mLB , const real_T
lambda [ 4 ] ) ; static real_T i23ur3ytsf ( real_T cEq ) ; static void
g0gqo0cxgu ( int32_T nVar , const real_T gradLag [ 8 ] , boolean_T * gradOK ,
real_T * val ) ; static int32_T cdcikb5kmw ( int32_T n , const real_T x [ 8 ]
) ; static void mxnuuti0th ( kthfgfhdov * MeritFunction , const kdxyjsixti *
WorkingSet , fovverijux * TrialState , boolean_T * Flags_gradOK , boolean_T *
Flags_fevalOK , boolean_T * Flags_done , boolean_T * Flags_stepAccepted ,
boolean_T * Flags_failedLineSearch , int32_T * Flags_stepType ) ; static void
cct5ezbgkv ( fovverijux * obj , int32_T nVar , const real_T JacCeqTrans [ 8 ]
) ; static void oabtqrotmy ( fovverijux * obj ) ; static void k1vu0y3nbu (
fovverijux * obj ) ; static void e5dhnhf4mfm ( real_T workspace [ 64 ] ,
int32_T nVar , const real_T grad [ 8 ] , const real_T AeqTrans [ 8 ] , const
int32_T finiteLB [ 8 ] , int32_T mLB , const real_T lambda [ 4 ] ) ; static
void g0gqo0cxgut ( int32_T nVar , const real_T gradLag [ 64 ] , boolean_T *
gradOK , real_T * val ) ; static void jy0zmqim5jn ( kdxyjsixti * WorkingSet ,
real_T cEq ) ; static real_T hi3mqzewxv ( int32_T n , const real_T x [ 64 ] ,
int32_T ix0 ) ; static real_T kcluehrwfu ( int32_T n , real_T * alpha1 ,
real_T x [ 64 ] , int32_T ix0 ) ; static void ir3j1p5nly ( int32_T m ,
int32_T n , int32_T iv0 , real_T tau , real_T C [ 64 ] , int32_T ic0 , real_T
work [ 8 ] ) ; static void l0lnfjcq5z ( real_T A [ 64 ] , int32_T m , int32_T
n , int32_T nfxd , real_T tau [ 8 ] ) ; static void ixl3w5wjmi ( real_T A [
64 ] , int32_T m , int32_T n , int32_T jpvt [ 8 ] , real_T tau [ 8 ] ) ;
static void j443bj1hxc ( dzrlw5sxs5 * obj , const real_T A [ 32 ] , int32_T
mrows , int32_T ncols ) ; static void dj14ojmbav ( dzrlw5sxs5 * obj , int32_T
nrows ) ; static void kn3nzhqflf ( int32_T m , int32_T n , const real_T A [
64 ] , const real_T x [ 8 ] , real_T y [ 64 ] ) ; static void clax1tb0ex (
int32_T n , const real_T A [ 64 ] , real_T x [ 64 ] ) ; static void
cbymjegfox ( real_T lambda [ 4 ] , int32_T WorkingSet_nActiveConstr , const
int32_T WorkingSet_sizes [ 5 ] , const int32_T WorkingSet_isActiveIdx [ 6 ] ,
const int32_T WorkingSet_Wid [ 4 ] , const int32_T WorkingSet_Wlocalidx [ 4 ]
, real_T workspace [ 64 ] ) ; static void mxnuuti0thv ( mf15oedits * Flags ,
ktaxowovvf * memspace , kthfgfhdov * MeritFunction , kdxyjsixti * WorkingSet
, fovverijux * TrialState , dzrlw5sxs5 * QRManager ) ; static void ns205swajk
( int32_T nVar , real_T workspace [ 8 ] , const real_T grad [ 8 ] , const
real_T JacEqTrans [ 8 ] , const real_T grad_old [ 8 ] , const real_T
JacEqTrans_old [ 8 ] , const real_T lambda [ 4 ] ) ; static boolean_T
baiaczl2df ( int32_T nvar , real_T Bk [ 25 ] , const real_T sk [ 8 ] , real_T
yk [ 8 ] , real_T workspace [ 64 ] ) ; static void kuqjqcuopxe5s ( int32_T n
, const real_T x [ 8 ] , real_T y [ 8 ] ) ; static void kuqjqcuopxe5 (
int32_T n , const real_T x [ 5 ] , real_T y [ 8 ] ) ; static void
kuqjqcuopxe5sar ( int32_T n , const real_T x [ 5 ] , real_T y [ 5 ] ) ;
static void kuqjqcuopx ( int32_T n , const real_T x [ 4 ] , real_T y [ 4 ] )
; static void ozqnsknwek ( kdxyjsixti * WorkingSet , real_T TrialState_cEq ,
const real_T TrialState_searchDir [ 8 ] ) ; static void njpga5wb4z (
fovverijux * solution , const real_T workingset_lb [ 8 ] , const int32_T
workingset_indexLB [ 8 ] , const int32_T workingset_sizes [ 5 ] , const
boolean_T workingset_isActiveConstr [ 4 ] ) ; static void h1ikxoaf0x (
int32_T x [ 8 ] , int32_T xLen , int32_T workspace [ 8 ] , int32_T xMin ,
int32_T xMax ) ; static void pghmkcqdjs ( kdxyjsixti * obj , int32_T
idx_global ) ; static int32_T bt35m0mjfw ( ktaxowovvf * memspace , kdxyjsixti
* workingset , dzrlw5sxs5 * qrmanager ) ; static void hmiqzf5p5q ( kdxyjsixti
* obj ) ; static void gfhhinglrq ( kdxyjsixti * workingset , dzrlw5sxs5 *
qrmanager , ktaxowovvf * memspace , real_T tolfactor ) ; static void
kn3nzhqflfe ( int32_T m , int32_T n , const real_T A [ 32 ] , const real_T x
[ 8 ] , real_T y [ 64 ] ) ; static void h0ncymex4zm ( dzrlw5sxs5 * obj ,
const real_T A [ 32 ] , int32_T mrows , int32_T ncols ) ; static void
kfjmuob5wh5 ( int32_T m , const real_T A [ 64 ] , real_T B_b [ 64 ] ) ;
static void k24gkerz4mw ( int32_T m , int32_T k , const real_T A [ 64 ] ,
const real_T B_p [ 64 ] , real_T C [ 64 ] ) ; static void h0ncymex4z (
dzrlw5sxs5 * obj , int32_T mrows , int32_T ncols ) ; static void k24gkerz4m (
int32_T m , int32_T k , const real_T A [ 64 ] , const real_T B_k [ 64 ] ,
real_T C [ 64 ] ) ; static void kfjmuob5wh ( int32_T m , const real_T A [ 64
] , real_T B_c [ 64 ] ) ; static real_T gtxetnnm2k ( kdxyjsixti * obj , const
real_T x [ 64 ] ) ; static boolean_T g3dskjwjcw ( real_T workspace [ 64 ] ,
real_T xCurrent [ 8 ] , kdxyjsixti * workingset , dzrlw5sxs5 * qrmanager ) ;
static real_T gtxetnnm2kf ( kdxyjsixti * obj , const real_T x [ 8 ] ) ;
static void bw4msbp20m ( fovverijux * solution , ktaxowovvf * memspace ,
kdxyjsixti * workingset , dzrlw5sxs5 * qrmanager ) ; static void bbhkemzkfn (
k0ratk1n10 * obj , int32_T NumVars ) ; static void hrefiazefh ( boolean_T
obj_hasLinear , int32_T obj_nvar , real_T workspace [ 64 ] , const real_T H [
25 ] , const real_T f [ 8 ] , const real_T x [ 8 ] ) ; static real_T
aqnjqmfea4 ( const k0ratk1n10 * obj , real_T workspace [ 64 ] , const real_T
H [ 25 ] , const real_T f [ 8 ] , const real_T x [ 8 ] ) ; static void
kn3nzhqflfe0 ( int32_T m , int32_T n , const real_T A [ 25 ] , int32_T lda ,
const real_T x [ 8 ] , real_T y [ 7 ] ) ; static void h35xb0f5lh ( k0ratk1n10
* obj , const real_T H [ 25 ] , const real_T f [ 8 ] , const real_T x [ 8 ] )
; static real_T c2n2v1sbdi ( const k0ratk1n10 * obj , real_T workspace [ 64 ]
, const real_T f [ 8 ] , const real_T x [ 8 ] ) ; static void kuqjqcuopxe (
int32_T n , real_T y [ 4 ] ) ; static void kuqjqcuopxe5sa ( int32_T n ,
real_T y [ 8 ] ) ; static void jym3k4ksh1 ( real_T * a , real_T * b , real_T
* c , real_T * s ) ; static void oidsdg2ozf ( dzrlw5sxs5 * obj , const real_T
vec [ 32 ] , int32_T iv0 ) ; static void j1hgrtckni ( dzrlw5sxs5 * obj ,
int32_T idx ) ; static void k24gkerz4mwi ( int32_T m , int32_T n , int32_T k
, const real_T A [ 25 ] , int32_T lda , const real_T B_c [ 64 ] , int32_T ib0
, real_T C [ 64 ] ) ; static void k24gkerz4mwi3 ( int32_T m , int32_T n ,
int32_T k , const real_T A [ 64 ] , int32_T ia0 , const real_T B_f [ 64 ] ,
real_T C [ 64 ] ) ; static void nm5kzkxjjr ( real_T beta , const real_T H [
25 ] , int32_T nVarOrig , csm4ifxwet * cholmanager , const dzrlw5sxs5 *
qrmanager , ktaxowovvf * memspace ) ; static void ktr41uv2na ( const real_T H
[ 25 ] , csm4ifxwet * cholmanager , const dzrlw5sxs5 * qrmanager , ktaxowovvf
* memspace ) ; static int32_T aygsb3ylw4 ( int32_T n , real_T A [ 64 ] ) ;
static void b1nnfethkch ( csm4ifxwet * obj , int32_T ndims ) ; static void
kn3nzhqflfe0st ( int32_T m , int32_T n , const real_T A [ 64 ] , int32_T ia0
, const real_T x [ 8 ] , real_T y [ 64 ] ) ; static void av2g5h2imfm ( const
csm4ifxwet * obj , real_T rhs [ 64 ] ) ; static void kn3nzhqflfe0s ( int32_T
m , int32_T n , const real_T A [ 64 ] , int32_T ia0 , const real_T x [ 64 ] ,
real_T y [ 8 ] ) ; static void b1nnfethkc ( csm4ifxwet * obj , const real_T A
[ 25 ] , int32_T ndims , int32_T ldA ) ; static void av2g5h2imf ( const
csm4ifxwet * obj , real_T rhs [ 8 ] ) ; static void k0tzi03qhr ( int32_T n ,
real_T a , real_T x [ 8 ] , int32_T ix0 ) ; static void ikm0pinmtt ( const
real_T H [ 25 ] , fovverijux * solution , ktaxowovvf * memspace , const
dzrlw5sxs5 * qrmanager , csm4ifxwet * cholmanager , const k0ratk1n10 *
objective ) ; static real_T hi3mqzewxva ( int32_T n , const real_T x [ 8 ] )
; static void lk3yxeq3po ( const real_T solution_xstar [ 8 ] , const real_T
solution_searchDir [ 8 ] , int32_T workingset_nVar , const real_T
workingset_lb [ 8 ] , const int32_T workingset_indexLB [ 8 ] , const int32_T
workingset_sizes [ 5 ] , const boolean_T workingset_isActiveConstr [ 4 ] ,
const int32_T workingset_nWConstr [ 5 ] , boolean_T isPhaseOne , real_T *
alpha , boolean_T * newBlocking , int32_T * constrType , int32_T * constrIdx
) ; static void gohzdn0c14 ( fovverijux * solution , const k0ratk1n10 *
objective ) ; static void imaznvrexo ( kdxyjsixti * obj , int32_T TYPE ,
int32_T idx_local ) ; static void o2tvol2vac ( kdxyjsixti * obj , int32_T
idx_local ) ; static void kzdcud2kf2 ( int32_T n , real_T a , const real_T x
[ 8 ] , real_T y [ 8 ] ) ; static void eu5wfkvmpb ( real_T workspace [ 64 ] ,
fovverijux * solution , const k0ratk1n10 * objective , const dzrlw5sxs5 *
qrmanager ) ; static int32_T e2cygyw51b ( const real_T solution_lambda [ 4 ]
, int32_T workingset_nActiveConstr , const int32_T workingset_nWConstr [ 5 ]
) ; static int32_T lte02cae5i ( int32_T x ) ; static void ovt5tsljpx (
int32_T * activeSetChangeID , const real_T f [ 8 ] , fovverijux * solution ,
ktaxowovvf * memspace , const k0ratk1n10 * objective , kdxyjsixti *
workingset , dzrlw5sxs5 * qrmanager , real_T options_ObjectiveLimit , int32_T
runTimeOptions_MaxIterations , boolean_T updateFval ) ; static void
hdbhhxzsvv ( const real_T H [ 25 ] , const real_T f [ 8 ] , fovverijux *
solution , ktaxowovvf * memspace , kdxyjsixti * workingset , dzrlw5sxs5 *
qrmanager , csm4ifxwet * cholmanager , k0ratk1n10 * objective , real_T
options_StepTolerance , real_T options_ObjectiveLimit , int32_T
runTimeOptions_MaxIterations ) ; static void pixlhadu0l ( k0ratk1n10 * obj )
; static void bs5h4awdzd ( const real_T H [ 25 ] , const real_T f [ 8 ] ,
fovverijux * solution , ktaxowovvf * memspace , kdxyjsixti * workingset ,
dzrlw5sxs5 * qrmanager , csm4ifxwet * cholmanager , k0ratk1n10 * objective ,
e2ucunpqcp * options , const e2ucunpqcp * runTimeOptions ) ; static void
kju12naicn3 ( const real_T H [ 25 ] , const real_T f [ 8 ] , fovverijux *
solution , ktaxowovvf * memspace , kdxyjsixti * workingset , dzrlw5sxs5 *
qrmanager , csm4ifxwet * cholmanager , k0ratk1n10 * objective , e2ucunpqcp *
options , e2ucunpqcp * runTimeOptions ) ; static void mo24gowvup ( kdxyjsixti
* WorkingSet , real_T TrialState_cEq ) ; static void lewrggdamt ( kdxyjsixti
* obj , int32_T idx_local ) ; static boolean_T nbrvt40jay ( const real_T
Hessian [ 25 ] , const real_T grad [ 8 ] , fovverijux * TrialState ,
ktaxowovvf * memspace , kdxyjsixti * WorkingSet , dzrlw5sxs5 * QRManager ,
csm4ifxwet * CholManager , k0ratk1n10 * QPObjective , const e2ucunpqcp *
qpoptions ) ; static void epc3kbrspv ( kthfgfhdov * obj , real_T fval ,
real_T eq_workspace , int32_T sqpiter , real_T qpval ) ; static void
efh512zbx1 ( const real_T Hessian [ 25 ] , const real_T grad [ 8 ] ,
fovverijux * TrialState , kthfgfhdov * MeritFunction , ktaxowovvf * memspace
, kdxyjsixti * WorkingSet , dzrlw5sxs5 * QRManager , csm4ifxwet * CholManager
, k0ratk1n10 * QPObjective , const e2ucunpqcp * qpoptions ) ; static void
gkuyiknb3a ( k0ratk1n10 * obj , int32_T numQuadVars , real_T beta , real_T
rho ) ; static void oo03adww3i ( int32_T nVarOrig , kdxyjsixti * WorkingSet ,
fovverijux * TrialState , ktaxowovvf * memspace ) ; static int32_T pwtnp20vfj
( ktaxowovvf * memspace , const int32_T WorkingSet_sizes [ 5 ] , const
boolean_T WorkingSet_isActiveConstr [ 4 ] ) ; static real_T o3ddyegemw (
int32_T n , const real_T x [ 8 ] , int32_T ix0 ) ; static real_T ldebw4msx4 (
int32_T n , const real_T x [ 8 ] , int32_T ix0 , const real_T y [ 8 ] ,
int32_T iy0 ) ; static void epc3kbrspva ( kthfgfhdov * obj , real_T fval ,
real_T eq_workspace , int32_T sqpiter , real_T qpval , const real_T x [ 8 ] ,
int32_T iReg0 , int32_T nRegularized ) ; static void be4pi3sfci ( int32_T
nActiveLBArtificial , fovverijux * TrialState , kdxyjsixti * WorkingSet ) ;
static void dq1wo1infu ( k0ratk1n10 * obj , int32_T NumVars ) ; static
int32_T cdcikb5kmwa ( int32_T n , const real_T x [ 4 ] ) ; static void
b13hapjdzs ( const real_T Hessian [ 25 ] , const real_T grad [ 8 ] ,
fovverijux * TrialState , kthfgfhdov * MeritFunction , ktaxowovvf * memspace
, kdxyjsixti * WorkingSet , dzrlw5sxs5 * QRManager , csm4ifxwet * CholManager
, k0ratk1n10 * QPObjective , e2ucunpqcp * qpoptions ) ; static void
c0gqrqmidx ( real_T Hessian [ 25 ] , const real_T grad [ 8 ] , const real_T
searchDir [ 8 ] ) ; static boolean_T ebhvdjjpzt ( int32_T * STEP_TYPE ,
real_T Hessian [ 25 ] , fovverijux * TrialState , kthfgfhdov * MeritFunction
, ktaxowovvf * memspace , kdxyjsixti * WorkingSet , dzrlw5sxs5 * QRManager ,
csm4ifxwet * CholManager , k0ratk1n10 * QPObjective , e2ucunpqcp * qpoptions
) ; static void po4spm1njq ( const hskkdlcyjp * obj_objfun_tunableEnvironment
, const real_T x [ 5 ] , real_T * Ceq_workspace , real_T * fval , int32_T *
status ) ; static real_T h34bguel4f ( real_T obj_penaltyParam , real_T fval ,
real_T Ceq_workspace , boolean_T evalWellDefined ) ; static void fnhb0ecihg (
boolean_T * evalWellDefined , int32_T WorkingSet_nVar , fovverijux *
TrialState , real_T MeritFunction_penaltyParam , real_T MeritFunction_phi ,
real_T MeritFunction_phiPrimePlus , real_T MeritFunction_phiFullStep , const
hskkdlcyjp * FcnEvaluator_objfun_tunableEnvironment , boolean_T socTaken ,
real_T * alpha , int32_T * exitflag ) ; static void kju12naicn ( fovverijux *
TrialState , kthfgfhdov * MeritFunction , const cdseu45pm3 * FcnEvaluator ,
hbctg4nwcl * FiniteDifferences , ktaxowovvf * memspace , kdxyjsixti *
WorkingSet , dzrlw5sxs5 * QRManager , k0ratk1n10 * QPObjective , real_T
Hessian [ 25 ] , csm4ifxwet * CholManager ) ; static void hkdppg2m2g ( const
hskkdlcyjp * fun_tunableEnvironment , real_T x [ 5 ] , real_T * fval , real_T
* exitflag ) ; static void p32d0btmmxzpj ( const real_T
objfun_tunableEnvironment [ 4 ] , real_T obj_objfun_tunableEnvironment [ 4 ]
, int32_T * obj_nVar , int32_T * obj_mCineq , int32_T * obj_mCeq , boolean_T
* obj_NonFiniteSupport , boolean_T * obj_SpecifyObjectiveGradient , boolean_T
* obj_SpecifyConstraintGradient , boolean_T * obj_ScaleProblem ) ; static
void cipokh2zzbm ( const real_T obj_objfun_tunableEnvironment [ 4 ] , const
real_T x [ 18 ] , real_T * fval , int32_T * status ) ; static int32_T
fgxc0qaihrx ( const real_T x [ 18 ] , real_T Ceq_workspace [ 4 ] ) ; static
void ih4gycxc1of ( const real_T obj_objfun_tunableEnvironment [ 4 ] , const
real_T x [ 18 ] , real_T Ceq_workspace [ 4 ] , real_T * fval , int32_T *
status ) ; static void p32d0btmmxzpjg ( const real_T
objfun_tunableEnvironment [ 4 ] , dxs1et3yod * obj ) ; static boolean_T
hl1l1m0sqeh ( const real_T obj_objfun_tunableEnvironment [ 4 ] , real_T *
fplus , real_T cEqPlus [ 4 ] , int32_T dim , real_T delta , real_T xk [ 18 ]
) ; static boolean_T ap1uxguxorh ( dxs1et3yod * obj , real_T fCurrent , const
real_T cEqCurrent [ 4 ] , real_T xk [ 18 ] , real_T gradf [ 27 ] , real_T
JacCeqTrans [ 108 ] ) ; static void jy0zmqim5jnx ( nuprfhnilo * WorkingSet ,
const real_T cEq [ 4 ] ) ; static void iwnxlinhde5 ( nuprfhnilo * obj ) ;
static void gzr1v3zdr1h ( nuprfhnilo * obj , int32_T PROBLEM_TYPE ) ; static
void oml1j5lmqrv ( nuprfhnilo * obj ) ; static void p32d0btmmxzpjgg ( real_T
fval , const real_T Ceq_workspace [ 4 ] , kthfgfhdov * obj ) ; static void
e5dhnhf4mfm2 ( real_T workspace [ 27 ] , int32_T nVar , const real_T grad [
27 ] , const real_T AeqTrans [ 108 ] , const int32_T finiteLB [ 27 ] ,
int32_T mLB , const real_T lambda [ 13 ] ) ; static real_T i23ur3ytsfu (
const real_T cEq [ 4 ] ) ; static void g0gqo0cxgutr ( int32_T nVar , const
real_T gradLag [ 27 ] , boolean_T * gradOK , real_T * val ) ; static int32_T
cdcikb5kmwaj ( int32_T n , const real_T x [ 27 ] ) ; static void mxnuuti0thvg
( kthfgfhdov * MeritFunction , const nuprfhnilo * WorkingSet , aaxpzhoxuz *
TrialState , boolean_T * Flags_gradOK , boolean_T * Flags_fevalOK , boolean_T
* Flags_done , boolean_T * Flags_stepAccepted , boolean_T *
Flags_failedLineSearch , int32_T * Flags_stepType ) ; static void cct5ezbgkvp
( aaxpzhoxuz * obj , int32_T nVar , const real_T JacCeqTrans [ 108 ] ) ;
static void oabtqrotmyc ( aaxpzhoxuz * obj ) ; static void k1vu0y3nbuy (
aaxpzhoxuz * obj ) ; static boolean_T cm0pm04nxw ( real_T x ) ; static void
mzehz0b4kv ( int32_T n , const real_T x [ 13 ] , real_T y [ 13 ] ) ; static
void e5dhnhf4mfm21 ( real_T workspace [ 729 ] , int32_T nVar , const real_T
grad [ 27 ] , const real_T AeqTrans [ 108 ] , const int32_T finiteLB [ 27 ] ,
int32_T mLB , const real_T lambda [ 13 ] ) ; static void g0gqo0cxgutr1 (
int32_T nVar , const real_T gradLag [ 729 ] , boolean_T * gradOK , real_T *
val ) ; static boolean_T cyuk1go0vk ( const real_T xCurrent [ 18 ] , const
real_T delta_x [ 27 ] , int32_T nVar ) ; static void jy0zmqim5jnxr (
nuprfhnilo * WorkingSet , const real_T cEq [ 4 ] ) ; static real_T
hi3mqzewxva3 ( int32_T n , const real_T x [ 729 ] , int32_T ix0 ) ; static
real_T kcluehrwfuz ( int32_T n , real_T * alpha1 , real_T x [ 729 ] , int32_T
ix0 ) ; static int32_T nflot4iy53 ( int32_T m , int32_T n , const real_T A [
729 ] , int32_T ia0 ) ; static void kn3nzhqflfe0stu ( int32_T m , int32_T n ,
const real_T A [ 729 ] , int32_T ia0 , const real_T x [ 729 ] , int32_T ix0 ,
real_T y [ 27 ] ) ; static void bi0mgkjeh1 ( int32_T m , int32_T n , real_T
alpha1 , int32_T ix0 , const real_T y [ 27 ] , real_T A [ 729 ] , int32_T ia0
) ; static void ir3j1p5nlyw ( int32_T m , int32_T n , int32_T iv0 , real_T
tau , real_T C [ 729 ] , int32_T ic0 , real_T work [ 27 ] ) ; static void
l0lnfjcq5za ( real_T A [ 729 ] , int32_T m , int32_T n , int32_T nfxd ,
real_T tau [ 27 ] ) ; static int32_T cdcikb5kmwajm ( int32_T n , const real_T
x [ 27 ] , int32_T ix0 ) ; static void elpfciohbx ( int32_T n , real_T x [
729 ] , int32_T ix0 , int32_T iy0 ) ; static void bfeyw0p21q ( real_T A [ 729
] , int32_T m , int32_T n , int32_T nfxd , real_T tau [ 27 ] , int32_T jpvt [
27 ] ) ; static void ixl3w5wjmif ( real_T A [ 729 ] , int32_T m , int32_T n ,
int32_T jpvt [ 27 ] , real_T tau [ 27 ] ) ; static void pbgevwrabr ( int32_T
n , const real_T x [ 351 ] , int32_T ix0 , real_T y [ 729 ] , int32_T iy0 ) ;
static void j443bj1hxce ( ev3ltaqeco * obj , const real_T A [ 351 ] , int32_T
mrows , int32_T ncols ) ; static void ob5a4hvx1r ( int32_T m , int32_T n ,
const real_T A [ 729 ] , int32_T ia0 , const real_T x [ 729 ] , int32_T ix0 ,
real_T y [ 27 ] ) ; static void bi0mgkjeh1c ( int32_T m , int32_T n , real_T
alpha1 , int32_T ix0 , const real_T y [ 27 ] , real_T A [ 729 ] , int32_T ia0
) ; static void ir3j1p5nlywk ( int32_T m , int32_T n , int32_T iv0 , real_T
tau , real_T C [ 729 ] , int32_T ic0 , real_T work [ 27 ] ) ; static void
k0tzi03qhro ( int32_T n , real_T a , real_T x [ 729 ] , int32_T ix0 ) ;
static void o5wrh5a5ej ( int32_T m , int32_T n , int32_T k , real_T A [ 729 ]
, const real_T tau [ 27 ] ) ; static void dj14ojmbavj ( ev3ltaqeco * obj ,
int32_T nrows ) ; static void ap4unorwbo ( int32_T m , int32_T n , const
real_T A [ 729 ] , const real_T x [ 27 ] , real_T y [ 729 ] ) ; static void
clax1tb0ex3 ( int32_T n , const real_T A [ 729 ] , real_T x [ 729 ] ) ;
static void jga1ttlxde ( int32_T nVar , int32_T mConstr , ev3ltaqeco *
QRManager , const real_T ATwset [ 351 ] , const real_T grad [ 27 ] , real_T
lambdaLSQ [ 13 ] , real_T workspace [ 729 ] ) ; static void cbymjegfoxs (
real_T lambda [ 13 ] , int32_T WorkingSet_nActiveConstr , const int32_T
WorkingSet_sizes [ 5 ] , const int32_T WorkingSet_isActiveIdx [ 6 ] , const
int32_T WorkingSet_Wid [ 13 ] , const int32_T WorkingSet_Wlocalidx [ 13 ] ,
real_T workspace [ 729 ] ) ; static void mxnuuti0thvgd ( mf15oedits * Flags ,
guj4mpcfgf * memspace , kthfgfhdov * MeritFunction , nuprfhnilo * WorkingSet
, aaxpzhoxuz * TrialState , ev3ltaqeco * QRManager ) ; static void
ns205swajku ( int32_T nVar , real_T workspace [ 27 ] , const real_T grad [ 27
] , const real_T JacEqTrans [ 108 ] , const real_T grad_old [ 27 ] , const
real_T JacEqTrans_old [ 108 ] , const real_T lambda [ 13 ] ) ; static
boolean_T baiaczl2dfl ( int32_T nvar , real_T Bk [ 324 ] , const real_T sk [
27 ] , real_T yk [ 27 ] , real_T workspace [ 729 ] ) ; static void bt1s243f5e
( int32_T n , const real_T x [ 27 ] , real_T y [ 27 ] ) ; static void
dmpzqvndba ( int32_T n , const real_T x [ 18 ] , real_T y [ 27 ] ) ; static
void fmazrorwnc ( int32_T n , const real_T x [ 18 ] , real_T y [ 18 ] ) ;
static void ozqnsknwek4 ( nuprfhnilo * WorkingSet , const real_T
TrialState_cEq [ 4 ] , const real_T TrialState_searchDir [ 27 ] ) ; static
void njpga5wb4z1 ( aaxpzhoxuz * solution , const real_T workingset_lb [ 27 ]
, const int32_T workingset_indexLB [ 27 ] , const int32_T workingset_sizes [
5 ] , const boolean_T workingset_isActiveConstr [ 13 ] ) ; static void
j443bj1hxced ( ev3ltaqeco * obj , int32_T mrows , int32_T ncols ) ; static
int32_T mgd2kii20a ( ev3ltaqeco * qrmanager , const real_T beqf [ 13 ] ,
int32_T mConstr , int32_T nVar ) ; static void apakcbefy5 ( int32_T depIdx [
27 ] , int32_T mFixed , int32_T nDep , ev3ltaqeco * qrmanager , const real_T
AeqfPrime [ 351 ] , int32_T mRows , int32_T nCols ) ; static void h1ikxoaf0xd
( int32_T x [ 27 ] , int32_T xLen , int32_T workspace [ 27 ] , int32_T xMin ,
int32_T xMax ) ; static void pghmkcqdjs5 ( nuprfhnilo * obj , int32_T
idx_global ) ; static void egyda50nzu ( nuprfhnilo * obj , int32_T idx_global
) ; static int32_T bt35m0mjfwo ( guj4mpcfgf * memspace , nuprfhnilo *
workingset , ev3ltaqeco * qrmanager ) ; static void hmiqzf5p5qb ( nuprfhnilo
* obj ) ; static void gfhhinglrqw ( nuprfhnilo * workingset , ev3ltaqeco *
qrmanager , guj4mpcfgf * memspace , real_T tolfactor ) ; static void
ktvooewnrx ( int32_T m , int32_T n , const real_T A [ 351 ] , const real_T x
[ 27 ] , real_T y [ 729 ] ) ; static void e0svfow1h1 ( real_T A [ 729 ] ,
int32_T m , int32_T n , real_T tau [ 27 ] ) ; static void h0ncymex4zmtv (
ev3ltaqeco * obj , const real_T A [ 351 ] , int32_T mrows , int32_T ncols ) ;
static void kfjmuob5wh5tt ( int32_T m , const real_T A [ 729 ] , real_T B_m [
729 ] ) ; static void k24gkerz4mwi3bt ( int32_T m , int32_T k , const real_T
A [ 729 ] , const real_T B_n [ 729 ] , real_T C [ 729 ] ) ; static void
h0ncymex4zmt ( ev3ltaqeco * obj , int32_T mrows , int32_T ncols ) ; static
void k24gkerz4mwi3b ( int32_T m , int32_T k , const real_T A [ 729 ] , const
real_T B_g [ 729 ] , real_T C [ 729 ] ) ; static void kfjmuob5wh5t ( int32_T
m , const real_T A [ 729 ] , real_T B_g [ 729 ] ) ; static void kzdcud2kf2g (
int32_T n , const real_T x [ 27 ] , real_T y [ 729 ] ) ; static real_T
a0pa3vf4j5 ( nuprfhnilo * obj , const real_T x [ 729 ] ) ; static real_T
afl1fr4kxa ( nuprfhnilo * obj , const real_T x [ 729 ] ) ; static real_T
gtxetnnm2kf5 ( nuprfhnilo * obj , const real_T x [ 729 ] ) ; static real_T
a0pa3vf4j53 ( nuprfhnilo * obj , const real_T x [ 729 ] ) ; static real_T
afl1fr4kxac ( nuprfhnilo * obj , const real_T x [ 729 ] ) ; static real_T
gtxetnnm2kf5h ( nuprfhnilo * obj , const real_T x [ 729 ] ) ; static void
j3nlhgkchg ( int32_T n , const real_T x [ 729 ] , real_T y [ 27 ] ) ; static
void h3pi1xdwf1 ( int32_T n , const real_T x [ 729 ] , real_T y [ 27 ] ) ;
static boolean_T g3dskjwjcwp ( real_T workspace [ 729 ] , real_T xCurrent [
27 ] , nuprfhnilo * workingset , ev3ltaqeco * qrmanager ) ; static real_T
a0pa3vf4j53c ( nuprfhnilo * obj , const real_T x [ 27 ] ) ; static real_T
afl1fr4kxack ( nuprfhnilo * obj , const real_T x [ 27 ] ) ; static real_T
gtxetnnm2kf5h2 ( nuprfhnilo * obj , const real_T x [ 27 ] ) ; static void
bw4msbp20mk ( aaxpzhoxuz * solution , guj4mpcfgf * memspace , nuprfhnilo *
workingset , ev3ltaqeco * qrmanager ) ; static void bbhkemzkfna ( ecn2fyspui
* obj , int32_T NumVars ) ; static void hrefiazefh2 ( boolean_T obj_hasLinear
, int32_T obj_nvar , real_T workspace [ 729 ] , const real_T H [ 324 ] ,
const real_T f [ 27 ] , const real_T x [ 27 ] ) ; static real_T aqnjqmfea4l (
const ecn2fyspui * obj , real_T workspace [ 729 ] , const real_T H [ 324 ] ,
const real_T f [ 27 ] , const real_T x [ 27 ] ) ; static void emnad0v3tp (
int32_T m , int32_T n , const real_T A [ 324 ] , int32_T lda , const real_T x
[ 27 ] , real_T y [ 26 ] ) ; static void h35xb0f5lhr ( ecn2fyspui * obj ,
const real_T H [ 324 ] , const real_T f [ 27 ] , const real_T x [ 27 ] ) ;
static real_T c2n2v1sbdis ( const ecn2fyspui * obj , real_T workspace [ 729 ]
, const real_T f [ 27 ] , const real_T x [ 27 ] ) ; static void pgwb0irvmr (
int32_T n , real_T y [ 13 ] ) ; static void oklow4km22 ( int32_T n , real_T y
[ 27 ] ) ; static void hwy0ursta0 ( int32_T n , real_T x [ 729 ] , int32_T
ix0 , int32_T iy0 , real_T c , real_T s ) ; static void oidsdg2ozfj (
ev3ltaqeco * obj , const real_T vec [ 351 ] , int32_T iv0 ) ; static void
hwy0ursta00 ( int32_T n , real_T x [ 729 ] , int32_T ix0 , int32_T iy0 ,
real_T c , real_T s ) ; static void j1hgrtcknic ( ev3ltaqeco * obj , int32_T
idx ) ; static void gyu4d440gr ( int32_T m , int32_T n , int32_T k , const
real_T A [ 324 ] , int32_T lda , const real_T B_p [ 729 ] , int32_T ib0 ,
real_T C [ 729 ] ) ; static void lzabwiefrn ( int32_T m , int32_T n , int32_T
k , const real_T A [ 729 ] , int32_T ia0 , const real_T B_l [ 729 ] , real_T
C [ 729 ] ) ; static void nm5kzkxjjrx ( real_T beta , const real_T H [ 324 ]
, int32_T nVarOrig , bwxng4ee5f * cholmanager , const ev3ltaqeco * qrmanager
, guj4mpcfgf * memspace ) ; static void ktr41uv2nae ( const real_T H [ 324 ]
, bwxng4ee5f * cholmanager , const ev3ltaqeco * qrmanager , guj4mpcfgf *
memspace ) ; static int32_T aygsb3ylw43 ( int32_T n , real_T A [ 729 ] ) ;
static void b1nnfethkchne ( bwxng4ee5f * obj , int32_T ndims ) ; static void
kfjfbltgxr ( int32_T m , int32_T n , const real_T A [ 729 ] , int32_T ia0 ,
const real_T x [ 27 ] , real_T y [ 729 ] ) ; static void av2g5h2imfmz3 (
const bwxng4ee5f * obj , real_T rhs [ 729 ] ) ; static void gfjnudvuzd (
int32_T m , int32_T n , const real_T A [ 729 ] , int32_T ia0 , const real_T x
[ 729 ] , real_T y [ 27 ] ) ; static void dtjf2kakeb ( int32_T n , const
real_T x [ 324 ] , int32_T ix0 , real_T y [ 729 ] , int32_T iy0 ) ; static
void b1nnfethkchn ( bwxng4ee5f * obj , const real_T A [ 324 ] , int32_T ndims
, int32_T ldA ) ; static void av2g5h2imfmz ( const bwxng4ee5f * obj , real_T
rhs [ 27 ] ) ; static void k0tzi03qhroe ( int32_T n , real_T a , real_T x [
27 ] , int32_T ix0 ) ; static void ikm0pinmttl ( const real_T H [ 324 ] ,
aaxpzhoxuz * solution , guj4mpcfgf * memspace , const ev3ltaqeco * qrmanager
, bwxng4ee5f * cholmanager , const ecn2fyspui * objective ) ; static real_T
hi3mqzewxva3m ( int32_T n , const real_T x [ 27 ] ) ; static void lk3yxeq3pou
( const real_T solution_xstar [ 27 ] , const real_T solution_searchDir [ 27 ]
, int32_T workingset_nVar , const real_T workingset_lb [ 27 ] , const int32_T
workingset_indexLB [ 27 ] , const int32_T workingset_sizes [ 5 ] , const
boolean_T workingset_isActiveConstr [ 13 ] , const int32_T
workingset_nWConstr [ 5 ] , boolean_T isPhaseOne , real_T * alpha , boolean_T
* newBlocking , int32_T * constrType , int32_T * constrIdx ) ; static void
gohzdn0c145 ( aaxpzhoxuz * solution , const ecn2fyspui * objective ) ; static
void imaznvrexor ( nuprfhnilo * obj , int32_T TYPE , int32_T idx_local ) ;
static void o2tvol2vacn ( nuprfhnilo * obj , int32_T idx_local ) ; static
void kzdcud2kf2gk ( int32_T n , real_T a , const real_T x [ 27 ] , real_T y [
27 ] ) ; static void eu5wfkvmpbt ( real_T workspace [ 729 ] , aaxpzhoxuz *
solution , const ecn2fyspui * objective , const ev3ltaqeco * qrmanager ) ;
static int32_T e2cygyw51bl ( const real_T solution_lambda [ 13 ] , int32_T
workingset_nActiveConstr , const int32_T workingset_nWConstr [ 5 ] ) ; static
void ovt5tsljpxd ( int32_T * activeSetChangeID , const real_T f [ 27 ] ,
aaxpzhoxuz * solution , guj4mpcfgf * memspace , const ecn2fyspui * objective
, nuprfhnilo * workingset , ev3ltaqeco * qrmanager , real_T
options_ObjectiveLimit , int32_T runTimeOptions_MaxIterations , boolean_T
updateFval ) ; static void hdbhhxzsvvr ( const real_T H [ 324 ] , const
real_T f [ 27 ] , aaxpzhoxuz * solution , guj4mpcfgf * memspace , nuprfhnilo
* workingset , ev3ltaqeco * qrmanager , bwxng4ee5f * cholmanager , ecn2fyspui
* objective , real_T options_StepTolerance , real_T options_ObjectiveLimit ,
int32_T runTimeOptions_MaxIterations ) ; static void pixlhadu0l4 ( ecn2fyspui
* obj ) ; static void bs5h4awdzde ( const real_T H [ 324 ] , const real_T f [
27 ] , aaxpzhoxuz * solution , guj4mpcfgf * memspace , nuprfhnilo *
workingset , ev3ltaqeco * qrmanager , bwxng4ee5f * cholmanager , ecn2fyspui *
objective , e2ucunpqcp * options , const e2ucunpqcp * runTimeOptions ) ;
static void kju12naicn3sk ( const real_T H [ 324 ] , const real_T f [ 27 ] ,
aaxpzhoxuz * solution , guj4mpcfgf * memspace , nuprfhnilo * workingset ,
ev3ltaqeco * qrmanager , bwxng4ee5f * cholmanager , ecn2fyspui * objective ,
e2ucunpqcp * options , e2ucunpqcp * runTimeOptions ) ; static void
mo24gowvupk ( nuprfhnilo * WorkingSet , const real_T TrialState_cEq [ 4 ] ) ;
static void lewrggdamtv ( nuprfhnilo * obj , int32_T idx_local ) ; static
boolean_T nbrvt40jayo ( const real_T Hessian [ 324 ] , const real_T grad [ 27
] , aaxpzhoxuz * TrialState , guj4mpcfgf * memspace , nuprfhnilo * WorkingSet
, ev3ltaqeco * QRManager , bwxng4ee5f * CholManager , ecn2fyspui *
QPObjective , const e2ucunpqcp * qpoptions ) ; static void epc3kbrspvag (
kthfgfhdov * obj , real_T fval , const real_T eq_workspace [ 4 ] , int32_T
sqpiter , real_T qpval ) ; static void efh512zbx11 ( const real_T Hessian [
324 ] , const real_T grad [ 27 ] , aaxpzhoxuz * TrialState , kthfgfhdov *
MeritFunction , guj4mpcfgf * memspace , nuprfhnilo * WorkingSet , ev3ltaqeco
* QRManager , bwxng4ee5f * CholManager , ecn2fyspui * QPObjective , const
e2ucunpqcp * qpoptions ) ; static void gkuyiknb3ak ( ecn2fyspui * obj ,
int32_T numQuadVars , real_T beta , real_T rho ) ; static void oo03adww3io (
int32_T nVarOrig , nuprfhnilo * WorkingSet , aaxpzhoxuz * TrialState ,
guj4mpcfgf * memspace ) ; static int32_T pwtnp20vfjo ( guj4mpcfgf * memspace
, const int32_T WorkingSet_sizes [ 5 ] , const boolean_T
WorkingSet_isActiveConstr [ 13 ] ) ; static real_T o3ddyegemwh ( int32_T n ,
const real_T x [ 27 ] , int32_T ix0 ) ; static real_T ldebw4msx4g ( int32_T n
, const real_T x [ 27 ] , int32_T ix0 , const real_T y [ 27 ] , int32_T iy0 )
; static void epc3kbrspvagn ( kthfgfhdov * obj , real_T fval , const real_T
eq_workspace [ 4 ] , int32_T sqpiter , real_T qpval , const real_T x [ 27 ] ,
int32_T iReg0 , int32_T nRegularized ) ; static void be4pi3sfcin ( int32_T
nActiveLBArtificial , aaxpzhoxuz * TrialState , nuprfhnilo * WorkingSet ) ;
static void dq1wo1infuk ( ecn2fyspui * obj , int32_T NumVars ) ; static
int32_T cdcikb5kmwajms ( int32_T n , const real_T x [ 13 ] ) ; static void
b13hapjdzsn ( const real_T Hessian [ 324 ] , const real_T grad [ 27 ] ,
aaxpzhoxuz * TrialState , kthfgfhdov * MeritFunction , guj4mpcfgf * memspace
, nuprfhnilo * WorkingSet , ev3ltaqeco * QRManager , bwxng4ee5f * CholManager
, ecn2fyspui * QPObjective , e2ucunpqcp * qpoptions ) ; static void
c0gqrqmidxf ( real_T Hessian [ 324 ] , const real_T grad [ 27 ] , const
real_T searchDir [ 27 ] ) ; static boolean_T ebhvdjjpztr ( int32_T *
STEP_TYPE , real_T Hessian [ 324 ] , aaxpzhoxuz * TrialState , kthfgfhdov *
MeritFunction , guj4mpcfgf * memspace , nuprfhnilo * WorkingSet , ev3ltaqeco
* QRManager , bwxng4ee5f * CholManager , ecn2fyspui * QPObjective ,
e2ucunpqcp * qpoptions ) ; static void po4spm1njqc ( const real_T
obj_objfun_tunableEnvironment [ 4 ] , const real_T x [ 18 ] , real_T
Ceq_workspace [ 4 ] , real_T * fval , int32_T * status ) ; static real_T
h34bguel4f4 ( real_T obj_penaltyParam , real_T fval , const real_T
Ceq_workspace [ 4 ] , boolean_T evalWellDefined ) ; static void fnhb0ecihgt (
boolean_T * evalWellDefined , int32_T WorkingSet_nVar , aaxpzhoxuz *
TrialState , real_T MeritFunction_penaltyParam , real_T MeritFunction_phi ,
real_T MeritFunction_phiPrimePlus , real_T MeritFunction_phiFullStep , const
real_T FcnEvaluator_objfun_tunableEnvironment [ 4 ] , boolean_T socTaken ,
real_T * alpha , int32_T * exitflag ) ; static void kju12naicn3s ( aaxpzhoxuz
* TrialState , kthfgfhdov * MeritFunction , const dccng4x0j0 * FcnEvaluator ,
dxs1et3yod * FiniteDifferences , guj4mpcfgf * memspace , nuprfhnilo *
WorkingSet , ev3ltaqeco * QRManager , ecn2fyspui * QPObjective , real_T
Hessian [ 324 ] , bwxng4ee5f * CholManager ) ; static void hkdppg2m2gk (
const real_T fun_tunableEnvironment [ 4 ] , real_T x [ 18 ] , real_T * fval ,
real_T * exitflag ) ; static void njbzpdidsi ( int32_T * obj_nVar , int32_T *
obj_mCineq , int32_T * obj_mCeq , boolean_T * obj_NonFiniteSupport ,
boolean_T * obj_SpecifyObjectiveGradient , boolean_T *
obj_SpecifyConstraintGradient , boolean_T * obj_ScaleProblem ) { * obj_nVar =
5 ; * obj_mCineq = 0 ; * obj_mCeq = 1 ; * obj_NonFiniteSupport = true ; *
obj_SpecifyObjectiveGradient = false ; * obj_SpecifyConstraintGradient =
false ; * obj_ScaleProblem = false ; } static void a5lwlpmpfx ( const real_T
A [ 16 ] , real_T * a , real_T * b , real_T * c , real_T * d , real_T * x ,
real_T * y , real_T * z ) { real_T r ; real_T s ; * x = A [ 12 ] ; * y = A [
13 ] ; * z = A [ 14 ] ; r = muDoubleScalarSqrt ( ( ( A [ 0 ] + A [ 5 ] ) + A
[ 10 ] ) + 1.0 ) ; s = 1.0 / ( 2.0 * r ) ; * a = 0.5 * r ; * b = ( A [ 6 ] -
A [ 9 ] ) * s ; * c = ( A [ 8 ] - A [ 2 ] ) * s ; * d = ( A [ 1 ] - A [ 4 ] )
* s ; } static void ibqyp0ury0 ( const hskkdlcyjp *
obj_objfun_tunableEnvironment , const real_T x [ 5 ] , real_T * fval ,
int32_T * status ) { real_T unusedU6 ; real_T unusedU7 ; real_T unusedU8 ;
real_T unusedU9 ; real_T z ; real_T Ax ; real_T Ay ; real_T Az ; real_T
theta0 ; real_T c_x ; real_T res [ 16 ] ; real_T b_a [ 16 ] ; real_T b_a_p [
16 ] ; real_T b_a_e [ 16 ] ; int32_T i ; int32_T i_p ; static const real_T
b_a_i [ 16 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
1.0 , 0.0 , 0.265 , 0.0 , 0.014 , 1.0 } ; static const real_T b_b [ 16 ] = {
1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 1.64
, 0.0 , - 0.037 , 1.0 } ; static const real_T b [ 16 ] = { 1.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , - 1.5 , 0.0 , 0.0 , 1.0
} ; theta0 = - x [ 4 ] * 0.07 / 9.42477796076938 + - 0.26179938779914941 ;
c_x = muDoubleScalarCos ( theta0 / 2.0 ) ; theta0 = muDoubleScalarSin (
theta0 / 2.0 ) ; res [ 0 ] = 1.0 - ( x [ 2 ] * x [ 2 ] + x [ 3 ] * x [ 3 ] )
* 2.0 ; res [ 4 ] = ( x [ 1 ] * x [ 2 ] - x [ 3 ] * x [ 0 ] ) * 2.0 ; res [ 8
] = ( x [ 1 ] * x [ 3 ] + x [ 2 ] * x [ 0 ] ) * 2.0 ; res [ 12 ] = 0.0 ; res
[ 1 ] = ( x [ 1 ] * x [ 2 ] + x [ 3 ] * x [ 0 ] ) * 2.0 ; res [ 5 ] = 1.0 - (
x [ 1 ] * x [ 1 ] + x [ 3 ] * x [ 3 ] ) * 2.0 ; res [ 9 ] = ( x [ 2 ] * x [ 3
] - x [ 1 ] * x [ 0 ] ) * 2.0 ; res [ 13 ] = 0.0 ; res [ 2 ] = ( x [ 1 ] * x
[ 3 ] - x [ 2 ] * x [ 0 ] ) * 2.0 ; res [ 6 ] = ( x [ 2 ] * x [ 3 ] + x [ 1 ]
* x [ 0 ] ) * 2.0 ; res [ 10 ] = 1.0 - ( x [ 1 ] * x [ 1 ] + x [ 2 ] * x [ 2
] ) * 2.0 ; res [ 14 ] = 0.0 ; res [ 3 ] = 0.0 ; res [ 7 ] = 0.0 ; res [ 11 ]
= 0.0 ; res [ 15 ] = 1.0 ; for ( i = 0 ; i < 4 ; i ++ ) { for ( i_p = 0 ; i_p
< 4 ; i_p ++ ) { b_a [ i + ( i_p << 2 ) ] = 0.0 ; b_a [ i + ( i_p << 2 ) ] +=
res [ i_p << 2 ] * b_a_i [ i ] ; b_a [ i + ( i_p << 2 ) ] += res [ ( i_p << 2
) + 1 ] * b_a_i [ i + 4 ] ; b_a [ i + ( i_p << 2 ) ] += res [ ( i_p << 2 ) +
2 ] * b_a_i [ i + 8 ] ; b_a [ i + ( i_p << 2 ) ] += res [ ( i_p << 2 ) + 3 ]
* b_a_i [ i + 12 ] ; } for ( i_p = 0 ; i_p < 4 ; i_p ++ ) { b_a_p [ i + ( i_p
<< 2 ) ] = 0.0 ; b_a_p [ i + ( i_p << 2 ) ] += b_b [ i_p << 2 ] * b_a [ i ] ;
b_a_p [ i + ( i_p << 2 ) ] += b_b [ ( i_p << 2 ) + 1 ] * b_a [ i + 4 ] ;
b_a_p [ i + ( i_p << 2 ) ] += b_b [ ( i_p << 2 ) + 2 ] * b_a [ i + 8 ] ;
b_a_p [ i + ( i_p << 2 ) ] += b_b [ ( i_p << 2 ) + 3 ] * b_a [ i + 12 ] ; } }
res [ 0 ] = 1.0 - theta0 * theta0 * 2.0 ; res [ 4 ] = ( 0.0 * theta0 - 0.0 *
c_x ) * 2.0 ; res [ 8 ] = theta0 * c_x * 2.0 ; res [ 12 ] = 0.0 ; res [ 1 ] =
( 0.0 * theta0 + 0.0 * c_x ) * 2.0 ; res [ 5 ] = 1.0 ; res [ 9 ] = ( theta0 *
0.0 - 0.0 * c_x ) * 2.0 ; res [ 13 ] = 0.0 ; res [ 2 ] = ( 0.0 - theta0 * c_x
) * 2.0 ; res [ 6 ] = ( theta0 * 0.0 + 0.0 * c_x ) * 2.0 ; res [ 10 ] = 1.0 -
theta0 * theta0 * 2.0 ; res [ 14 ] = 0.0 ; res [ 3 ] = 0.0 ; res [ 7 ] = 0.0
; res [ 11 ] = 0.0 ; res [ 15 ] = 1.0 ; for ( i = 0 ; i < 4 ; i ++ ) { for (
i_p = 0 ; i_p < 4 ; i_p ++ ) { b_a [ i + ( i_p << 2 ) ] = 0.0 ; b_a [ i + (
i_p << 2 ) ] += res [ i_p << 2 ] * b_a_p [ i ] ; b_a [ i + ( i_p << 2 ) ] +=
res [ ( i_p << 2 ) + 1 ] * b_a_p [ i + 4 ] ; b_a [ i + ( i_p << 2 ) ] += res
[ ( i_p << 2 ) + 2 ] * b_a_p [ i + 8 ] ; b_a [ i + ( i_p << 2 ) ] += res [ (
i_p << 2 ) + 3 ] * b_a_p [ i + 12 ] ; } for ( i_p = 0 ; i_p < 4 ; i_p ++ ) {
b_a_e [ i + ( i_p << 2 ) ] = 0.0 ; b_a_e [ i + ( i_p << 2 ) ] += b [ i_p << 2
] * b_a [ i ] ; b_a_e [ i + ( i_p << 2 ) ] += b [ ( i_p << 2 ) + 1 ] * b_a [
i + 4 ] ; b_a_e [ i + ( i_p << 2 ) ] += b [ ( i_p << 2 ) + 2 ] * b_a [ i + 8
] ; b_a_e [ i + ( i_p << 2 ) ] += b [ ( i_p << 2 ) + 3 ] * b_a [ i + 12 ] ; }
} a5lwlpmpfx ( b_a_e , & unusedU6 , & unusedU7 , & unusedU8 , & unusedU9 , &
c_x , & theta0 , & z ) ; a5lwlpmpfx ( obj_objfun_tunableEnvironment -> f1 , &
unusedU6 , & unusedU7 , & unusedU8 , & unusedU9 , & Ax , & Ay , & Az ) ; c_x
-= Ax ; unusedU6 = c_x * c_x ; c_x = theta0 - Ay ; theta0 = c_x * c_x ; c_x =
z - Az ; * fval = ( unusedU6 + theta0 ) + c_x * c_x ; * status = 1 ; if (
muDoubleScalarIsInf ( * fval ) || muDoubleScalarIsNaN ( * fval ) ) { if (
muDoubleScalarIsNaN ( * fval ) ) { * status = - 6 ; } else if ( * fval < 0.0
) { * status = - 4 ; } else { * status = - 5 ; } } } static int32_T
pawujf5ux3 ( const real_T x [ 5 ] , real_T * Ceq_workspace ) { int32_T status
; real_T b ; b = ( ( ( x [ 0 ] * x [ 0 ] + x [ 1 ] * x [ 1 ] ) + x [ 2 ] * x
[ 2 ] ) + x [ 3 ] * x [ 3 ] ) - 1.0 ; * Ceq_workspace = b ; status = 1 ; if (
muDoubleScalarIsInf ( * Ceq_workspace ) || muDoubleScalarIsNaN ( *
Ceq_workspace ) ) { if ( muDoubleScalarIsNaN ( b ) ) { status = - 3 ; } else
if ( b < 0.0 ) { status = - 1 ; } else { status = - 2 ; } } return status ; }
static void otclemyw5h ( const hskkdlcyjp * obj_objfun_tunableEnvironment ,
const real_T x [ 5 ] , real_T * Ceq_workspace , real_T * fval , int32_T *
status ) { * Ceq_workspace = 0.0 ; ibqyp0ury0 ( obj_objfun_tunableEnvironment
, x , fval , status ) ; if ( * status == 1 ) { * Ceq_workspace = 0.0 ; *
status = pawujf5ux3 ( x , Ceq_workspace ) ; } } static void dj2cbrorw3k (
const hskkdlcyjp * objfun_tunableEnvironment , hbctg4nwcl * obj ) { int32_T
idx ; obj -> objfun . tunableEnvironment = * objfun_tunableEnvironment ; obj
-> f_1 = 0.0 ; obj -> f_2 = 0.0 ; obj -> nVar = 5 ; obj -> mIneq = 0 ; obj ->
mEq = 1 ; obj -> numEvals = 0 ; obj -> SpecifyObjectiveGradient = false ; obj
-> SpecifyConstraintGradient = false ; obj -> FiniteDifferenceType = 0 ; for
( idx = 0 ; idx < 5 ; idx ++ ) { obj -> hasLB [ idx ] = false ; obj -> hasUB
[ idx ] = false ; } obj -> hasBounds = false ; } static boolean_T o4hbmaeodi
( const hskkdlcyjp * obj_objfun_tunableEnvironment , real_T * fplus , real_T
* cEqPlus , int32_T dim , real_T delta , real_T xk [ 5 ] ) { boolean_T evalOK
; real_T temp ; real_T unusedU6 ; real_T unusedU7 ; real_T unusedU8 ; real_T
unusedU9 ; real_T z ; real_T Ax ; real_T Ay ; real_T Az ; real_T theta0 ;
real_T c_x ; real_T res [ 16 ] ; real_T b_a [ 16 ] ; real_T b_a_p [ 16 ] ;
real_T b_a_e [ 16 ] ; int32_T i ; int32_T i_p ; static const real_T b_a_i [
16 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 ,
0.0 , 0.265 , 0.0 , 0.014 , 1.0 } ; static const real_T b_b [ 16 ] = { 1.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 1.64 , 0.0
, - 0.037 , 1.0 } ; static const real_T b [ 16 ] = { 1.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , - 1.5 , 0.0 , 0.0 , 1.0 } ;
temp = xk [ dim - 1 ] ; xk [ dim - 1 ] += delta ; theta0 = - xk [ 4 ] * 0.07
/ 9.42477796076938 + - 0.26179938779914941 ; c_x = muDoubleScalarCos ( theta0
/ 2.0 ) ; theta0 = muDoubleScalarSin ( theta0 / 2.0 ) ; res [ 0 ] = 1.0 - (
xk [ 2 ] * xk [ 2 ] + xk [ 3 ] * xk [ 3 ] ) * 2.0 ; res [ 4 ] = ( xk [ 1 ] *
xk [ 2 ] - xk [ 3 ] * xk [ 0 ] ) * 2.0 ; res [ 8 ] = ( xk [ 1 ] * xk [ 3 ] +
xk [ 2 ] * xk [ 0 ] ) * 2.0 ; res [ 12 ] = 0.0 ; res [ 1 ] = ( xk [ 1 ] * xk
[ 2 ] + xk [ 3 ] * xk [ 0 ] ) * 2.0 ; res [ 5 ] = 1.0 - ( xk [ 1 ] * xk [ 1 ]
+ xk [ 3 ] * xk [ 3 ] ) * 2.0 ; res [ 9 ] = ( xk [ 2 ] * xk [ 3 ] - xk [ 1 ]
* xk [ 0 ] ) * 2.0 ; res [ 13 ] = 0.0 ; res [ 2 ] = ( xk [ 1 ] * xk [ 3 ] -
xk [ 2 ] * xk [ 0 ] ) * 2.0 ; res [ 6 ] = ( xk [ 2 ] * xk [ 3 ] + xk [ 1 ] *
xk [ 0 ] ) * 2.0 ; res [ 10 ] = 1.0 - ( xk [ 1 ] * xk [ 1 ] + xk [ 2 ] * xk [
2 ] ) * 2.0 ; res [ 14 ] = 0.0 ; res [ 3 ] = 0.0 ; res [ 7 ] = 0.0 ; res [ 11
] = 0.0 ; res [ 15 ] = 1.0 ; for ( i = 0 ; i < 4 ; i ++ ) { for ( i_p = 0 ;
i_p < 4 ; i_p ++ ) { b_a [ i + ( i_p << 2 ) ] = 0.0 ; b_a [ i + ( i_p << 2 )
] += res [ i_p << 2 ] * b_a_i [ i ] ; b_a [ i + ( i_p << 2 ) ] += res [ ( i_p
<< 2 ) + 1 ] * b_a_i [ i + 4 ] ; b_a [ i + ( i_p << 2 ) ] += res [ ( i_p << 2
) + 2 ] * b_a_i [ i + 8 ] ; b_a [ i + ( i_p << 2 ) ] += res [ ( i_p << 2 ) +
3 ] * b_a_i [ i + 12 ] ; } for ( i_p = 0 ; i_p < 4 ; i_p ++ ) { b_a_p [ i + (
i_p << 2 ) ] = 0.0 ; b_a_p [ i + ( i_p << 2 ) ] += b_b [ i_p << 2 ] * b_a [ i
] ; b_a_p [ i + ( i_p << 2 ) ] += b_b [ ( i_p << 2 ) + 1 ] * b_a [ i + 4 ] ;
b_a_p [ i + ( i_p << 2 ) ] += b_b [ ( i_p << 2 ) + 2 ] * b_a [ i + 8 ] ;
b_a_p [ i + ( i_p << 2 ) ] += b_b [ ( i_p << 2 ) + 3 ] * b_a [ i + 12 ] ; } }
res [ 0 ] = 1.0 - theta0 * theta0 * 2.0 ; res [ 4 ] = ( 0.0 * theta0 - 0.0 *
c_x ) * 2.0 ; res [ 8 ] = theta0 * c_x * 2.0 ; res [ 12 ] = 0.0 ; res [ 1 ] =
( 0.0 * theta0 + 0.0 * c_x ) * 2.0 ; res [ 5 ] = 1.0 ; res [ 9 ] = ( theta0 *
0.0 - 0.0 * c_x ) * 2.0 ; res [ 13 ] = 0.0 ; res [ 2 ] = ( 0.0 - theta0 * c_x
) * 2.0 ; res [ 6 ] = ( theta0 * 0.0 + 0.0 * c_x ) * 2.0 ; res [ 10 ] = 1.0 -
theta0 * theta0 * 2.0 ; res [ 14 ] = 0.0 ; res [ 3 ] = 0.0 ; res [ 7 ] = 0.0
; res [ 11 ] = 0.0 ; res [ 15 ] = 1.0 ; for ( i = 0 ; i < 4 ; i ++ ) { for (
i_p = 0 ; i_p < 4 ; i_p ++ ) { b_a [ i + ( i_p << 2 ) ] = 0.0 ; b_a [ i + (
i_p << 2 ) ] += res [ i_p << 2 ] * b_a_p [ i ] ; b_a [ i + ( i_p << 2 ) ] +=
res [ ( i_p << 2 ) + 1 ] * b_a_p [ i + 4 ] ; b_a [ i + ( i_p << 2 ) ] += res
[ ( i_p << 2 ) + 2 ] * b_a_p [ i + 8 ] ; b_a [ i + ( i_p << 2 ) ] += res [ (
i_p << 2 ) + 3 ] * b_a_p [ i + 12 ] ; } for ( i_p = 0 ; i_p < 4 ; i_p ++ ) {
b_a_e [ i + ( i_p << 2 ) ] = 0.0 ; b_a_e [ i + ( i_p << 2 ) ] += b [ i_p << 2
] * b_a [ i ] ; b_a_e [ i + ( i_p << 2 ) ] += b [ ( i_p << 2 ) + 1 ] * b_a [
i + 4 ] ; b_a_e [ i + ( i_p << 2 ) ] += b [ ( i_p << 2 ) + 2 ] * b_a [ i + 8
] ; b_a_e [ i + ( i_p << 2 ) ] += b [ ( i_p << 2 ) + 3 ] * b_a [ i + 12 ] ; }
} a5lwlpmpfx ( b_a_e , & unusedU6 , & unusedU7 , & unusedU8 , & unusedU9 , &
c_x , & theta0 , & z ) ; a5lwlpmpfx ( obj_objfun_tunableEnvironment -> f1 , &
unusedU6 , & unusedU7 , & unusedU8 , & unusedU9 , & Ax , & Ay , & Az ) ; c_x
-= Ax ; * fplus = c_x * c_x ; c_x = theta0 - Ay ; theta0 = c_x * c_x ; c_x =
z - Az ; * fplus += theta0 ; * fplus += c_x * c_x ; evalOK = ( ( !
muDoubleScalarIsInf ( * fplus ) ) && ( ! muDoubleScalarIsNaN ( * fplus ) ) )
; if ( evalOK ) { c_x = ( ( ( xk [ 0 ] * xk [ 0 ] + xk [ 1 ] * xk [ 1 ] ) +
xk [ 2 ] * xk [ 2 ] ) + xk [ 3 ] * xk [ 3 ] ) - 1.0 ; * cEqPlus = c_x ;
evalOK = ( ( ! muDoubleScalarIsInf ( c_x ) ) && ( ! muDoubleScalarIsNaN ( c_x
) ) ) ; xk [ dim - 1 ] = temp ; } return evalOK ; } static boolean_T
ac5h1531rt ( hbctg4nwcl * obj , real_T fCurrent , real_T cEqCurrent , real_T
xk [ 5 ] , real_T gradf [ 8 ] , real_T JacCeqTrans [ 8 ] ) { boolean_T evalOK
; real_T deltaX ; real_T b ; real_T d ; int32_T idx ; boolean_T exitg1 ;
boolean_T guard1 = false ; evalOK = true ; obj -> numEvals = 0 ; idx = 0 ;
exitg1 = false ; while ( ( ! exitg1 ) && ( idx < 5 ) ) { deltaX = ( 1.0 - (
real_T ) ( xk [ idx ] < 0.0 ) * 2.0 ) * 1.4901161193847656E-8 *
muDoubleScalarMax ( muDoubleScalarAbs ( xk [ idx ] ) , 1.0 ) ; b = obj -> f_1
; d = obj -> cEq_1 ; evalOK = o4hbmaeodi ( & obj -> objfun .
tunableEnvironment , & b , & d , idx + 1 , deltaX , xk ) ; obj -> f_1 = b ;
obj -> cEq_1 = d ; obj -> numEvals ++ ; guard1 = false ; if ( ! evalOK ) {
deltaX = - deltaX ; evalOK = o4hbmaeodi ( & obj -> objfun .
tunableEnvironment , & b , & d , idx + 1 , deltaX , xk ) ; obj -> f_1 = b ;
obj -> cEq_1 = d ; obj -> numEvals ++ ; if ( ! evalOK ) { exitg1 = true ; }
else { guard1 = true ; } } else { guard1 = true ; } if ( guard1 ) { gradf [
idx ] = ( obj -> f_1 - fCurrent ) / deltaX ; JacCeqTrans [ idx ] = ( obj ->
cEq_1 - cEqCurrent ) / deltaX ; idx ++ ; } } return evalOK ; } static void
cdu0auzqs4 ( kdxyjsixti * WorkingSet , real_T cEq ) { int32_T i ; WorkingSet
-> beq = - cEq ; WorkingSet -> bwset [ 0 ] = - cEq ; for ( i = 0 ; i < 5 ; i
++ ) { WorkingSet -> ATwset [ i ] = WorkingSet -> Aeq [ i ] ; } } static void
i0turdqqtq ( kdxyjsixti * obj ) { int32_T idx ; obj -> Aeq [ obj -> nVar - 1
] = 0.0 ; obj -> ATwset [ obj -> nVar - 1 ] = 0.0 ; obj -> indexLB [ obj ->
sizes [ 3 ] - 1 ] = obj -> nVar ; obj -> lb [ obj -> nVar - 1 ] = 1.0E-5 ;
for ( idx = 2 ; idx <= obj -> nActiveConstr ; idx ++ ) { obj -> ATwset [ (
obj -> nVar + ( ( idx - 1 ) << 3 ) ) - 1 ] = - 1.0 ; } } static void
eusryzwbaa ( kdxyjsixti * obj , int32_T PROBLEM_TYPE ) { int32_T idx_lb ;
int32_T idx ; switch ( PROBLEM_TYPE ) { case 3 : obj -> nVar = 5 ; obj ->
mConstr = 1 ; for ( idx = 0 ; idx < 5 ; idx ++ ) { obj -> sizes [ idx ] = obj
-> sizesNormal [ idx ] ; } for ( idx = 0 ; idx < 6 ; idx ++ ) { obj ->
isActiveIdx [ idx ] = obj -> isActiveIdxNormal [ idx ] ; } break ; case 1 :
obj -> nVar = 6 ; obj -> mConstr = 2 ; for ( idx = 0 ; idx < 5 ; idx ++ ) {
obj -> sizes [ idx ] = obj -> sizesPhaseOne [ idx ] ; } for ( idx = 0 ; idx <
6 ; idx ++ ) { obj -> isActiveIdx [ idx ] = obj -> isActiveIdxPhaseOne [ idx
] ; } i0turdqqtq ( obj ) ; break ; case 2 : obj -> nVar = 7 ; obj -> mConstr
= 3 ; for ( idx = 0 ; idx < 5 ; idx ++ ) { obj -> sizes [ idx ] = obj ->
sizesRegularized [ idx ] ; } for ( idx = 0 ; idx < 6 ; idx ++ ) { obj ->
isActiveIdx [ idx ] = obj -> isActiveIdxRegularized [ idx ] ; } if ( obj ->
probType != 4 ) { obj -> Aeq [ 5 ] = - 1.0 ; obj -> ATwset [ 5 ] = - 1.0 ;
obj -> Aeq [ 6 ] = 1.0 ; obj -> ATwset [ 6 ] = 1.0 ; obj -> indexLB [ 0 ] = 6
; obj -> lb [ 5 ] = 0.0 ; obj -> indexLB [ 1 ] = 7 ; obj -> lb [ 6 ] = 0.0 ;
for ( idx = 1 ; idx < obj -> nActiveConstr ; idx ++ ) { if ( obj -> Wid [ idx
] == 3 ) { for ( idx_lb = 6 ; idx_lb <= obj -> Wlocalidx [ idx ] + 4 ; idx_lb
++ ) { obj -> ATwset [ ( idx_lb + ( idx << 3 ) ) - 1 ] = 0.0 ; } obj ->
ATwset [ ( obj -> Wlocalidx [ idx ] + ( idx << 3 ) ) + 4 ] = - 1.0 ; for (
idx_lb = obj -> Wlocalidx [ idx ] + 5 ; idx_lb + 1 < 8 ; idx_lb ++ ) { obj ->
ATwset [ idx_lb + ( idx << 3 ) ] = 0.0 ; } } else { obj -> ATwset [ ( idx <<
3 ) + 5 ] = 0.0 ; obj -> ATwset [ ( idx << 3 ) + 6 ] = 0.0 ; } } } break ;
default : obj -> nVar = 8 ; obj -> mConstr = 4 ; for ( idx = 0 ; idx < 5 ;
idx ++ ) { obj -> sizes [ idx ] = obj -> sizesRegPhaseOne [ idx ] ; } for (
idx = 0 ; idx < 6 ; idx ++ ) { obj -> isActiveIdx [ idx ] = obj ->
isActiveIdxRegPhaseOne [ idx ] ; } i0turdqqtq ( obj ) ; break ; } obj ->
probType = PROBLEM_TYPE ; } static void cbwacn3e4r ( kdxyjsixti * obj ) {
int32_T idx ; eusryzwbaa ( obj , 3 ) ; obj -> isActiveConstr [ 1 ] = false ;
obj -> isActiveConstr [ 2 ] = false ; obj -> isActiveConstr [ 3 ] = false ;
obj -> nWConstr [ 0 ] = 0 ; obj -> nWConstr [ 1 ] = 1 ; obj -> nWConstr [ 2 ]
= 0 ; obj -> nWConstr [ 3 ] = 0 ; obj -> nWConstr [ 4 ] = 0 ; obj ->
nActiveConstr = 1 ; obj -> Wid [ 0 ] = 2 ; obj -> Wlocalidx [ 0 ] = 1 ; obj
-> isActiveConstr [ 0 ] = true ; for ( idx = 0 ; idx < obj -> nVar ; idx ++ )
{ obj -> ATwset [ idx ] = obj -> Aeq [ idx ] ; } obj -> bwset [ 0 ] = obj ->
beq ; } static void dj2cbrorw3kd ( real_T fval , real_T Ceq_workspace ,
kthfgfhdov * obj ) { obj -> penaltyParam = 1.0 ; obj -> threshold = 0.0001 ;
obj -> nPenaltyDecreases = 0 ; obj -> linearizedConstrViol = 0.0 ; obj ->
initFval = fval ; obj -> initConstrViolationEq = muDoubleScalarAbs (
Ceq_workspace ) ; obj -> initConstrViolationIneq = 0.0 ; obj -> phi = 0.0 ;
obj -> phiPrimePlus = 0.0 ; obj -> phiFullStep = 0.0 ; obj ->
feasRelativeFactor = 0.0 ; obj -> nlpPrimalFeasError = 0.0 ; obj ->
nlpDualFeasError = 0.0 ; obj -> nlpComplError = 0.0 ; obj -> firstOrderOpt =
0.0 ; obj -> hasObjective = true ; } static void ek1cslbopi ( real_T
workspace [ 8 ] , int32_T nVar , const real_T grad [ 8 ] , const real_T
AeqTrans [ 8 ] , const int32_T finiteLB [ 8 ] , int32_T mLB , const real_T
lambda [ 4 ] ) { int32_T iy ; int32_T ia ; for ( iy = 0 ; iy < nVar ; iy ++ )
{ workspace [ iy ] = grad [ iy ] ; } iy = 0 ; for ( ia = 1 ; ia <= nVar ; ia
++ ) { workspace [ iy ] += AeqTrans [ ia - 1 ] * lambda [ 0 ] ; iy ++ ; } iy
= 1 ; for ( ia = 0 ; ia < mLB ; ia ++ ) { workspace [ finiteLB [ ia ] - 1 ]
-= lambda [ iy ] ; iy ++ ; } } static real_T ppqo1m21bl ( real_T cEq ) {
return muDoubleScalarMax ( 0.0 , muDoubleScalarAbs ( cEq ) ) ; } static void
cxrn1udwxm ( int32_T nVar , const real_T gradLag [ 8 ] , boolean_T * gradOK ,
real_T * val ) { int32_T b_idx ; boolean_T exitg1 ; * gradOK = true ; * val =
0.0 ; b_idx = 0 ; exitg1 = false ; while ( ( ! exitg1 ) && ( b_idx <= nVar -
1 ) ) { * gradOK = ( ( ! muDoubleScalarIsInf ( gradLag [ b_idx ] ) ) && ( !
muDoubleScalarIsNaN ( gradLag [ b_idx ] ) ) ) ; if ( ! * gradOK ) { exitg1 =
true ; } else { * val = muDoubleScalarMax ( * val , muDoubleScalarAbs (
gradLag [ b_idx ] ) ) ; b_idx ++ ; } } } static int32_T mfrofh20mf ( int32_T
n , const real_T x [ 8 ] ) { int32_T idxmax ; int32_T ix ; real_T smax ;
int32_T k ; real_T y ; if ( n < 1 ) { idxmax = 0 ; } else { idxmax = 1 ; if (
n > 1 ) { ix = 0 ; smax = muDoubleScalarAbs ( x [ 0 ] ) ; for ( k = 2 ; k <=
n ; k ++ ) { ix ++ ; y = muDoubleScalarAbs ( x [ ix ] ) ; if ( y > smax ) {
idxmax = k ; smax = y ; } } } } return idxmax ; } static void ksrs0yrnvw (
kthfgfhdov * MeritFunction , const kdxyjsixti * WorkingSet , fovverijux *
TrialState , boolean_T * Flags_gradOK , boolean_T * Flags_fevalOK , boolean_T
* Flags_done , boolean_T * Flags_stepAccepted , boolean_T *
Flags_failedLineSearch , int32_T * Flags_stepType ) { real_T
optimRelativeFactor ; boolean_T isFeasible ; real_T c ; int32_T b_k ; *
Flags_fevalOK = true ; * Flags_stepAccepted = false ; *
Flags_failedLineSearch = false ; * Flags_stepType = 1 ; ek1cslbopi (
TrialState -> gradLag , WorkingSet -> nVar , TrialState -> grad , WorkingSet
-> Aeq , WorkingSet -> indexLB , WorkingSet -> sizes [ 3 ] , TrialState ->
lambdasqp ) ; optimRelativeFactor = muDoubleScalarMax ( 1.0 ,
muDoubleScalarAbs ( TrialState -> grad [ mfrofh20mf ( WorkingSet -> nVar ,
TrialState -> grad ) - 1 ] ) ) ; if ( muDoubleScalarIsInf (
optimRelativeFactor ) ) { optimRelativeFactor = 1.0 ; } MeritFunction ->
nlpPrimalFeasError = ppqo1m21bl ( TrialState -> cEq ) ; MeritFunction ->
feasRelativeFactor = 1.0 ; isFeasible = ( MeritFunction -> nlpPrimalFeasError
<= 1.0E-6 ) ; cxrn1udwxm ( WorkingSet -> nVar , TrialState -> gradLag ,
Flags_gradOK , & c ) ; MeritFunction -> nlpDualFeasError = c ; if ( ! *
Flags_gradOK ) { * Flags_done = true ; if ( isFeasible ) { TrialState ->
sqpExitFlag = 2 ; } else { TrialState -> sqpExitFlag = - 2 ; } } else {
MeritFunction -> nlpComplError = 0.0 ; MeritFunction -> firstOrderOpt =
muDoubleScalarMax ( c , 0.0 ) ; for ( b_k = 0 ; b_k <= WorkingSet -> sizes [
3 ] ; b_k ++ ) { TrialState -> lambdasqp_old [ b_k ] = TrialState ->
lambdasqp [ b_k ] ; } if ( isFeasible && ( c <= 1.0E-10 * optimRelativeFactor
) ) { * Flags_done = true ; TrialState -> sqpExitFlag = 1 ; } else { *
Flags_done = false ; if ( isFeasible && ( TrialState -> sqpFval < - 1.0E+20 )
) { * Flags_done = true ; TrialState -> sqpExitFlag = - 3 ; } else { if (
TrialState -> FunctionEvaluations >= 500 ) { * Flags_done = true ; TrialState
-> sqpExitFlag = 0 ; } } } } } static void iexi1hxv0p ( fovverijux * obj ,
int32_T nVar , const real_T JacCeqTrans [ 8 ] ) { int32_T b_k ; for ( b_k = 0
; b_k < nVar ; b_k ++ ) { obj -> JacCeqTrans_old [ b_k ] = JacCeqTrans [ b_k
] ; } } static void eilmu4s5ow ( fovverijux * obj ) { int32_T k ; obj ->
sqpFval_old = obj -> sqpFval ; for ( k = 0 ; k < 5 ; k ++ ) { obj ->
xstarsqp_old [ k ] = obj -> xstarsqp [ k ] ; obj -> grad_old [ k ] = obj ->
grad [ k ] ; } obj -> cEq_old = obj -> cEq ; } static void cdu0auzqs4j (
kdxyjsixti * WorkingSet , real_T cEq ) { int32_T i ; WorkingSet -> beq = -
cEq ; WorkingSet -> bwset [ 0 ] = - cEq ; for ( i = 0 ; i < WorkingSet ->
nVar ; i ++ ) { WorkingSet -> ATwset [ i ] = WorkingSet -> Aeq [ i ] ; } if (
WorkingSet -> nActiveConstr > 1 ) { for ( i = 1 ; i < WorkingSet ->
nActiveConstr ; i ++ ) { switch ( WorkingSet -> Wid [ i ] ) { case 4 :
WorkingSet -> bwset [ i ] = WorkingSet -> lb [ WorkingSet -> Wlocalidx [ i ]
- 1 ] ; break ; case 5 : WorkingSet -> bwset [ i ] = 0.0 ; break ; } } } }
static void dpnt4bixcf ( fovverijux * obj ) { int32_T k ; obj -> sqpFval =
obj -> sqpFval_old ; for ( k = 0 ; k < 5 ; k ++ ) { obj -> xstarsqp [ k ] =
obj -> xstarsqp_old [ k ] ; } obj -> cEq = obj -> cEq_old ; } static void
ek1cslbopik ( real_T workspace [ 64 ] , int32_T nVar , const real_T grad [ 8
] , const real_T AeqTrans [ 8 ] , const int32_T finiteLB [ 8 ] , int32_T mLB
, const real_T lambda [ 4 ] ) { int32_T iy ; int32_T ia ; for ( iy = 0 ; iy <
nVar ; iy ++ ) { workspace [ iy ] = grad [ iy ] ; } iy = 0 ; for ( ia = 1 ;
ia <= nVar ; ia ++ ) { workspace [ iy ] += AeqTrans [ ia - 1 ] * lambda [ 0 ]
; iy ++ ; } iy = 1 ; for ( ia = 0 ; ia < mLB ; ia ++ ) { workspace [ finiteLB
[ ia ] - 1 ] -= lambda [ iy ] ; iy ++ ; } } static void cxrn1udwxmw ( int32_T
nVar , const real_T gradLag [ 64 ] , boolean_T * gradOK , real_T * val ) {
int32_T b_idx ; boolean_T exitg1 ; * gradOK = true ; * val = 0.0 ; b_idx = 0
; exitg1 = false ; while ( ( ! exitg1 ) && ( b_idx <= nVar - 1 ) ) { * gradOK
= ( ( ! muDoubleScalarIsInf ( gradLag [ b_idx ] ) ) && ( !
muDoubleScalarIsNaN ( gradLag [ b_idx ] ) ) ) ; if ( ! * gradOK ) { exitg1 =
true ; } else { * val = muDoubleScalarMax ( * val , muDoubleScalarAbs (
gradLag [ b_idx ] ) ) ; b_idx ++ ; } } } static real_T i5uu0zdww5 ( int32_T n
, const real_T x [ 64 ] , int32_T ix0 ) { real_T y ; real_T scale ; int32_T
kend ; real_T absxk ; real_T t ; int32_T k ; y = 0.0 ; if ( n >= 1 ) { if ( n
== 1 ) { y = muDoubleScalarAbs ( x [ ix0 - 1 ] ) ; } else { scale =
3.3121686421112381E-170 ; kend = ( ix0 + n ) - 1 ; for ( k = ix0 ; k <= kend
; k ++ ) { absxk = muDoubleScalarAbs ( x [ k - 1 ] ) ; if ( absxk > scale ) {
t = scale / absxk ; y = y * t * t + 1.0 ; scale = absxk ; } else { t = absxk
/ scale ; y += t * t ; } } y = scale * muDoubleScalarSqrt ( y ) ; } } return
y ; } static real_T d5s5vcjorz ( int32_T n , real_T * alpha1 , real_T x [ 64
] , int32_T ix0 ) { real_T tau ; real_T xnorm ; int32_T knt ; int32_T b_k ;
int32_T c_k ; tau = 0.0 ; if ( n > 0 ) { xnorm = i5uu0zdww5 ( n - 1 , x , ix0
) ; if ( xnorm != 0.0 ) { xnorm = muDoubleScalarHypot ( * alpha1 , xnorm ) ;
if ( * alpha1 >= 0.0 ) { xnorm = - xnorm ; } if ( muDoubleScalarAbs ( xnorm )
< 1.0020841800044864E-292 ) { knt = - 1 ; b_k = ( ix0 + n ) - 2 ; do { knt ++
; for ( c_k = ix0 ; c_k <= b_k ; c_k ++ ) { x [ c_k - 1 ] *=
9.9792015476736E+291 ; } xnorm *= 9.9792015476736E+291 ; * alpha1 *=
9.9792015476736E+291 ; } while ( ! ( muDoubleScalarAbs ( xnorm ) >=
1.0020841800044864E-292 ) ) ; xnorm = muDoubleScalarHypot ( * alpha1 ,
i5uu0zdww5 ( n - 1 , x , ix0 ) ) ; if ( * alpha1 >= 0.0 ) { xnorm = - xnorm ;
} tau = ( xnorm - * alpha1 ) / xnorm ; * alpha1 = 1.0 / ( * alpha1 - xnorm )
; for ( c_k = ix0 ; c_k <= b_k ; c_k ++ ) { x [ c_k - 1 ] *= * alpha1 ; } for
( b_k = 0 ; b_k <= knt ; b_k ++ ) { xnorm *= 1.0020841800044864E-292 ; } *
alpha1 = xnorm ; } else { tau = ( xnorm - * alpha1 ) / xnorm ; * alpha1 = 1.0
/ ( * alpha1 - xnorm ) ; knt = ( ix0 + n ) - 2 ; for ( b_k = ix0 ; b_k <= knt
; b_k ++ ) { x [ b_k - 1 ] *= * alpha1 ; } * alpha1 = xnorm ; } } } return
tau ; } static void bzrp2oyzfa ( int32_T m , int32_T n , int32_T iv0 , real_T
tau , real_T C [ 64 ] , int32_T ic0 , real_T work [ 8 ] ) { int32_T lastv ;
int32_T lastc ; int32_T coltop ; int32_T ix ; real_T c ; int32_T iac ;
int32_T d ; int32_T b_ia ; int32_T jy ; int32_T exitg1 ; boolean_T exitg2 ;
if ( tau != 0.0 ) { lastv = m ; lastc = iv0 + m ; while ( ( lastv > 0 ) && (
C [ lastc - 2 ] == 0.0 ) ) { lastv -- ; lastc -- ; } lastc = n - 1 ; exitg2 =
false ; while ( ( ! exitg2 ) && ( lastc + 1 > 0 ) ) { coltop = ( lastc << 3 )
+ ic0 ; jy = coltop ; do { exitg1 = 0 ; if ( jy <= ( coltop + lastv ) - 1 ) {
if ( C [ jy - 1 ] != 0.0 ) { exitg1 = 1 ; } else { jy ++ ; } } else { lastc
-- ; exitg1 = 2 ; } } while ( exitg1 == 0 ) ; if ( exitg1 == 1 ) { exitg2 =
true ; } } } else { lastv = 0 ; lastc = - 1 ; } if ( lastv > 0 ) { if ( lastc
+ 1 != 0 ) { for ( coltop = 0 ; coltop <= lastc ; coltop ++ ) { work [ coltop
] = 0.0 ; } coltop = 0 ; jy = ( lastc << 3 ) + ic0 ; for ( iac = ic0 ; iac <=
jy ; iac += 8 ) { ix = iv0 ; c = 0.0 ; d = ( iac + lastv ) - 1 ; for ( b_ia =
iac ; b_ia <= d ; b_ia ++ ) { c += C [ b_ia - 1 ] * C [ ix - 1 ] ; ix ++ ; }
work [ coltop ] += c ; coltop ++ ; } } if ( ! ( - tau == 0.0 ) ) { coltop =
ic0 - 1 ; jy = 0 ; for ( iac = 0 ; iac <= lastc ; iac ++ ) { if ( work [ jy ]
!= 0.0 ) { c = work [ jy ] * - tau ; ix = iv0 ; d = lastv + coltop ; for (
b_ia = coltop ; b_ia < d ; b_ia ++ ) { C [ b_ia ] += C [ ix - 1 ] * c ; ix ++
; } } jy ++ ; coltop += 8 ; } } } } static void mrqydsx15c ( real_T A [ 64 ]
, int32_T m , int32_T n , int32_T nfxd , real_T tau [ 8 ] ) { real_T work [ 8
] ; int32_T ii ; int32_T mmi ; real_T b_atmp ; int32_T i ; memset ( & work [
0 ] , 0 , sizeof ( real_T ) << 3U ) ; for ( i = 0 ; i < nfxd ; i ++ ) { ii =
( i << 3 ) + i ; mmi = m - i ; if ( i + 1 < m ) { b_atmp = A [ ii ] ; tau [ i
] = d5s5vcjorz ( mmi , & b_atmp , A , ii + 2 ) ; A [ ii ] = b_atmp ; } else {
tau [ i ] = 0.0 ; } if ( i + 1 < n ) { b_atmp = A [ ii ] ; A [ ii ] = 1.0 ;
bzrp2oyzfa ( mmi , ( n - i ) - 1 , ii + 1 , tau [ i ] , A , ii + 9 , work ) ;
A [ ii ] = b_atmp ; } } } static void po4mz2muct ( real_T A [ 64 ] , int32_T
m , int32_T n , int32_T jpvt [ 8 ] , real_T tau [ 8 ] ) { int32_T minmn ;
int32_T nfxd ; real_T work [ 8 ] ; real_T vn1 [ 8 ] ; real_T vn2 [ 8 ] ;
int32_T ii ; int32_T nmi ; int32_T mmi ; int32_T pvt ; real_T temp2 ; int32_T
b_ix ; real_T smax ; int32_T b_iy ; int32_T c_k ; minmn =
muIntScalarMin_sint32 ( m , n ) ; memset ( & tau [ 0 ] , 0 , sizeof ( real_T
) << 3U ) ; if ( minmn < 1 ) { for ( nfxd = 0 ; nfxd < n ; nfxd ++ ) { jpvt [
nfxd ] = nfxd + 1 ; } } else { nfxd = - 1 ; for ( mmi = 0 ; mmi < n ; mmi ++
) { if ( jpvt [ mmi ] != 0 ) { nfxd ++ ; if ( mmi + 1 != nfxd + 1 ) { nmi =
mmi << 3 ; pvt = nfxd << 3 ; for ( b_ix = 0 ; b_ix < m ; b_ix ++ ) { smax = A
[ nmi ] ; A [ nmi ] = A [ pvt ] ; A [ pvt ] = smax ; nmi ++ ; pvt ++ ; } jpvt
[ mmi ] = jpvt [ nfxd ] ; jpvt [ nfxd ] = mmi + 1 ; } else { jpvt [ mmi ] =
mmi + 1 ; } } else { jpvt [ mmi ] = mmi + 1 ; } } nfxd ++ ; nfxd =
muIntScalarMin_sint32 ( nfxd , minmn ) ; mrqydsx15c ( A , m , n , nfxd , tau
) ; if ( nfxd < minmn ) { memset ( & work [ 0 ] , 0 , sizeof ( real_T ) << 3U
) ; memset ( & vn1 [ 0 ] , 0 , sizeof ( real_T ) << 3U ) ; memset ( & vn2 [ 0
] , 0 , sizeof ( real_T ) << 3U ) ; for ( mmi = nfxd ; mmi < n ; mmi ++ ) {
vn1 [ mmi ] = i5uu0zdww5 ( m - nfxd , A , ( ( mmi << 3 ) + nfxd ) + 1 ) ; vn2
[ mmi ] = vn1 [ mmi ] ; } while ( nfxd + 1 <= minmn ) { ii = ( nfxd << 3 ) +
nfxd ; nmi = n - nfxd ; mmi = m - nfxd ; if ( nmi < 1 ) { pvt = - 1 ; } else
{ pvt = 0 ; if ( nmi > 1 ) { b_ix = nfxd ; smax = muDoubleScalarAbs ( vn1 [
nfxd ] ) ; for ( b_iy = 2 ; b_iy <= nmi ; b_iy ++ ) { b_ix ++ ; temp2 =
muDoubleScalarAbs ( vn1 [ b_ix ] ) ; if ( temp2 > smax ) { pvt = b_iy - 1 ;
smax = temp2 ; } } } } pvt += nfxd ; if ( pvt + 1 != nfxd + 1 ) { b_ix = pvt
<< 3 ; b_iy = nfxd << 3 ; for ( c_k = 0 ; c_k < m ; c_k ++ ) { smax = A [
b_ix ] ; A [ b_ix ] = A [ b_iy ] ; A [ b_iy ] = smax ; b_ix ++ ; b_iy ++ ; }
b_ix = jpvt [ pvt ] ; jpvt [ pvt ] = jpvt [ nfxd ] ; jpvt [ nfxd ] = b_ix ;
vn1 [ pvt ] = vn1 [ nfxd ] ; vn2 [ pvt ] = vn2 [ nfxd ] ; } if ( nfxd + 1 < m
) { smax = A [ ii ] ; tau [ nfxd ] = d5s5vcjorz ( mmi , & smax , A , ii + 2 )
; A [ ii ] = smax ; } else { tau [ nfxd ] = 0.0 ; } if ( nfxd + 1 < n ) {
smax = A [ ii ] ; A [ ii ] = 1.0 ; bzrp2oyzfa ( mmi , nmi - 1 , ii + 1 , tau
[ nfxd ] , A , ii + 9 , work ) ; A [ ii ] = smax ; } for ( ii = nfxd + 1 ; ii
< n ; ii ++ ) { nmi = ( ii << 3 ) + nfxd ; if ( vn1 [ ii ] != 0.0 ) { smax =
muDoubleScalarAbs ( A [ nmi ] ) / vn1 [ ii ] ; smax = 1.0 - smax * smax ; if
( smax < 0.0 ) { smax = 0.0 ; } temp2 = vn1 [ ii ] / vn2 [ ii ] ; temp2 =
temp2 * temp2 * smax ; if ( temp2 <= 1.4901161193847656E-8 ) { if ( nfxd + 1
< m ) { vn1 [ ii ] = i5uu0zdww5 ( mmi - 1 , A , nmi + 2 ) ; vn2 [ ii ] = vn1
[ ii ] ; } else { vn1 [ ii ] = 0.0 ; vn2 [ ii ] = 0.0 ; } } else { vn1 [ ii ]
*= muDoubleScalarSqrt ( smax ) ; } } } nfxd ++ ; } } } } static void
bplndqf2vj ( dzrlw5sxs5 * obj , const real_T A [ 32 ] , int32_T mrows ,
int32_T ncols ) { int32_T iA0 ; int32_T iQR0 ; real_T b [ 64 ] ; real_T c [ 8
] ; int32_T d [ 8 ] ; int32_T k ; int32_T i ; boolean_T guard1 = false ;
guard1 = false ; if ( mrows * ncols > 0 ) { for ( i = 0 ; i < ncols ; i ++ )
{ iA0 = i << 3 ; iQR0 = i << 3 ; for ( k = 1 ; k - 1 < mrows ; k ++ ) { obj
-> QR [ ( iQR0 + k ) - 1 ] = A [ ( iA0 + k ) - 1 ] ; } } guard1 = true ; }
else if ( mrows * ncols == 0 ) { obj -> mrows = mrows ; obj -> ncols = ncols
; obj -> minRowCol = 0 ; } else { guard1 = true ; } if ( guard1 ) { obj ->
usedPivoting = true ; obj -> mrows = mrows ; obj -> ncols = ncols ; obj ->
minRowCol = muIntScalarMin_sint32 ( mrows , ncols ) ; memcpy ( & b [ 0 ] , &
obj -> QR [ 0 ] , sizeof ( real_T ) << 6U ) ; for ( i = 0 ; i < 8 ; i ++ ) {
d [ i ] = obj -> jpvt [ i ] ; } po4mz2muct ( b , mrows , ncols , d , c ) ;
memcpy ( & obj -> QR [ 0 ] , & b [ 0 ] , sizeof ( real_T ) << 6U ) ; memcpy (
& obj -> tau [ 0 ] , & c [ 0 ] , sizeof ( real_T ) << 3U ) ; for ( i = 0 ; i
< 8 ; i ++ ) { obj -> jpvt [ i ] = d [ i ] ; } } } static void n2v2qif1yv (
dzrlw5sxs5 * obj , int32_T nrows ) { int32_T idx ; int32_T i ; int32_T itau ;
real_T work [ 8 ] ; int32_T iaii ; real_T A [ 64 ] ; int32_T lastv ; int32_T
lastc ; int32_T coltop ; int32_T ix ; real_T c_c ; int32_T iac ; int32_T e ;
int32_T b_ia ; int32_T jy ; int32_T exitg1 ; boolean_T exitg2 ; for ( idx = 0
; idx < obj -> minRowCol ; idx ++ ) { itau = ( idx << 3 ) + idx ; i = obj ->
mrows - idx ; for ( iaii = 1 ; iaii - 1 <= i - 2 ; iaii ++ ) { obj -> Q [
itau + iaii ] = obj -> QR [ itau + iaii ] ; } } idx = obj -> mrows ; if (
nrows >= 1 ) { for ( itau = obj -> minRowCol ; itau < nrows ; itau ++ ) { i =
itau << 3 ; for ( iaii = 0 ; iaii < idx ; iaii ++ ) { obj -> Q [ i + iaii ] =
0.0 ; } obj -> Q [ i + itau ] = 1.0 ; } itau = obj -> minRowCol - 1 ; memset
( & work [ 0 ] , 0 , sizeof ( real_T ) << 3U ) ; for ( i = obj -> minRowCol ;
i >= 1 ; i -- ) { iaii = ( ( i - 1 ) << 3 ) + i ; if ( i < nrows ) { obj -> Q
[ iaii - 1 ] = 1.0 ; lastv = idx - i ; memcpy ( & A [ 0 ] , & obj -> Q [ 0 ]
, sizeof ( real_T ) << 6U ) ; if ( obj -> tau [ itau ] != 0.0 ) { lastc =
iaii + lastv ; while ( ( lastv + 1 > 0 ) && ( obj -> Q [ lastc - 1 ] == 0.0 )
) { lastv -- ; lastc -- ; } lastc = ( nrows - i ) - 1 ; exitg2 = false ;
while ( ( ! exitg2 ) && ( lastc + 1 > 0 ) ) { coltop = ( ( lastc << 3 ) +
iaii ) + 8 ; jy = coltop ; do { exitg1 = 0 ; if ( jy <= coltop + lastv ) { if
( obj -> Q [ jy - 1 ] != 0.0 ) { exitg1 = 1 ; } else { jy ++ ; } } else {
lastc -- ; exitg1 = 2 ; } } while ( exitg1 == 0 ) ; if ( exitg1 == 1 ) {
exitg2 = true ; } } } else { lastv = - 1 ; lastc = - 1 ; } if ( lastv + 1 > 0
) { if ( lastc + 1 != 0 ) { for ( coltop = 0 ; coltop <= lastc ; coltop ++ )
{ work [ coltop ] = 0.0 ; } coltop = 0 ; jy = ( ( lastc << 3 ) + iaii ) + 8 ;
for ( iac = iaii + 8 ; iac <= jy ; iac += 8 ) { ix = iaii ; c_c = 0.0 ; e =
iac + lastv ; for ( b_ia = iac ; b_ia <= e ; b_ia ++ ) { c_c += obj -> Q [
b_ia - 1 ] * obj -> Q [ ix - 1 ] ; ix ++ ; } work [ coltop ] += c_c ; coltop
++ ; } } if ( ! ( - obj -> tau [ itau ] == 0.0 ) ) { coltop = iaii + 7 ; jy =
0 ; for ( iac = 0 ; iac <= lastc ; iac ++ ) { if ( work [ jy ] != 0.0 ) { c_c
= work [ jy ] * - obj -> tau [ itau ] ; ix = iaii ; e = lastv + coltop ; for
( b_ia = coltop ; b_ia < e + 1 ; b_ia ++ ) { A [ b_ia ] += A [ ix - 1 ] * c_c
; ix ++ ; } } jy ++ ; coltop += 8 ; } } } memcpy ( & obj -> Q [ 0 ] , & A [ 0
] , sizeof ( real_T ) << 6U ) ; } if ( i < idx ) { lastv = ( iaii + idx ) - i
; for ( lastc = iaii ; lastc < lastv ; lastc ++ ) { obj -> Q [ lastc ] *= -
obj -> tau [ itau ] ; } } obj -> Q [ iaii - 1 ] = 1.0 - obj -> tau [ itau ] ;
for ( lastv = 0 ; lastv <= i - 2 ; lastv ++ ) { obj -> Q [ ( iaii - lastv ) -
2 ] = 0.0 ; } itau -- ; } } } static void km30jyym3b ( int32_T m , int32_T n
, const real_T A [ 64 ] , const real_T x [ 8 ] , real_T y [ 64 ] ) { int32_T
ix ; real_T c ; int32_T b_iy ; int32_T iac ; int32_T b ; int32_T ia ; int32_T
b_c ; if ( m != 0 ) { for ( b_iy = 0 ; b_iy < n ; b_iy ++ ) { y [ b_iy ] =
0.0 ; } b_iy = 0 ; b_c = ( n - 1 ) << 3 ; for ( iac = 1 ; iac <= b_c + 1 ;
iac += 8 ) { ix = 0 ; c = 0.0 ; b = ( iac + m ) - 1 ; for ( ia = iac ; ia <=
b ; ia ++ ) { c += A [ ia - 1 ] * x [ ix ] ; ix ++ ; } y [ b_iy ] += c ; b_iy
++ ; } } } static void bvondj0iig ( int32_T n , const real_T A [ 64 ] ,
real_T x [ 64 ] ) { int32_T jjA ; int32_T ix ; int32_T j ; int32_T i ; if ( n
!= 0 ) { for ( j = n - 1 ; j + 1 > 0 ; j -- ) { jjA = ( j << 3 ) + j ; x [ j
] /= A [ jjA ] ; for ( i = 1 ; i - 1 < j ; i ++ ) { ix = j - i ; x [ ix ] -=
A [ jjA - i ] * x [ j ] ; } } } } static void exp02lfvwa ( real_T lambda [ 4
] , int32_T WorkingSet_nActiveConstr , const int32_T WorkingSet_sizes [ 5 ] ,
const int32_T WorkingSet_isActiveIdx [ 6 ] , const int32_T WorkingSet_Wid [ 4
] , const int32_T WorkingSet_Wlocalidx [ 4 ] , real_T workspace [ 64 ] ) {
int32_T mLB ; int32_T idx ; int32_T idxOffset ; if ( WorkingSet_nActiveConstr
!= 0 ) { mLB = WorkingSet_sizes [ 3 ] ; for ( idx = 0 ; idx <= mLB ; idx ++ )
{ workspace [ idx ] = lambda [ idx ] ; } for ( idx = 0 ; idx <= mLB ; idx ++
) { lambda [ idx ] = 0.0 ; } mLB = 0 ; idx = 0 ; while ( ( idx + 1 <=
WorkingSet_nActiveConstr ) && ( WorkingSet_Wid [ idx ] <= 2 ) ) { lambda [
WorkingSet_Wlocalidx [ idx ] - 1 ] = workspace [ mLB ] ; mLB ++ ; idx ++ ; }
while ( idx + 1 <= WorkingSet_nActiveConstr ) { switch ( WorkingSet_Wid [ idx
] ) { case 3 : idxOffset = 2 ; break ; case 4 : idxOffset = 2 ; break ;
default : idxOffset = WorkingSet_isActiveIdx [ 4 ] ; break ; } lambda [ (
idxOffset + WorkingSet_Wlocalidx [ idx ] ) - 2 ] = workspace [ mLB ] ; mLB ++
; idx ++ ; } } } static void ksrs0yrnvw3 ( mf15oedits * Flags , ktaxowovvf *
memspace , kthfgfhdov * MeritFunction , kdxyjsixti * WorkingSet , fovverijux
* TrialState , dzrlw5sxs5 * QRManager ) { int32_T nVar ; int32_T mLB ; real_T
optimRelativeFactor ; boolean_T isFeasible ; boolean_T dxTooSmall ; int32_T
nActiveConstr ; real_T nlpDualFeasErrorTmp ; real_T d [ 4 ] ; real_T tol ;
int32_T fullRank_R ; int32_T rankR ; int32_T iQR_diag ; real_T e [ 64 ] ;
boolean_T guard1 = false ; boolean_T exitg1 ; nVar = WorkingSet -> nVar ; mLB
= WorkingSet -> sizes [ 3 ] ; ek1cslbopi ( TrialState -> gradLag , WorkingSet
-> nVar , TrialState -> grad , WorkingSet -> Aeq , WorkingSet -> indexLB ,
WorkingSet -> sizes [ 3 ] , TrialState -> lambdasqp ) ; optimRelativeFactor =
muDoubleScalarMax ( 1.0 , muDoubleScalarAbs ( TrialState -> grad [ mfrofh20mf
( WorkingSet -> nVar , TrialState -> grad ) - 1 ] ) ) ; if (
muDoubleScalarIsInf ( optimRelativeFactor ) ) { optimRelativeFactor = 1.0 ; }
MeritFunction -> nlpPrimalFeasError = ppqo1m21bl ( TrialState -> cEq ) ; if (
TrialState -> sqpIterations == 0 ) { MeritFunction -> feasRelativeFactor =
muDoubleScalarMax ( 1.0 , MeritFunction -> nlpPrimalFeasError ) ; }
isFeasible = ( MeritFunction -> nlpPrimalFeasError <= 1.0E-6 * MeritFunction
-> feasRelativeFactor ) ; cxrn1udwxm ( WorkingSet -> nVar , TrialState ->
gradLag , & dxTooSmall , & tol ) ; Flags -> gradOK = dxTooSmall ;
MeritFunction -> nlpDualFeasError = tol ; if ( ! dxTooSmall ) { Flags -> done
= true ; if ( isFeasible ) { TrialState -> sqpExitFlag = 2 ; } else {
TrialState -> sqpExitFlag = - 2 ; } } else { MeritFunction -> nlpComplError =
0.0 ; MeritFunction -> firstOrderOpt = muDoubleScalarMax ( tol , 0.0 ) ; if (
TrialState -> sqpIterations > 1 ) { ek1cslbopik ( memspace ->
workspace_double , WorkingSet -> nVar , TrialState -> grad , WorkingSet ->
Aeq , WorkingSet -> indexLB , WorkingSet -> sizes [ 3 ] , TrialState ->
lambdasqp_old ) ; cxrn1udwxmw ( WorkingSet -> nVar , memspace ->
workspace_double , & dxTooSmall , & nlpDualFeasErrorTmp ) ; if (
muDoubleScalarMax ( nlpDualFeasErrorTmp , 0.0 ) < muDoubleScalarMax ( tol ,
0.0 ) ) { MeritFunction -> nlpDualFeasError = nlpDualFeasErrorTmp ;
MeritFunction -> nlpComplError = 0.0 ; MeritFunction -> firstOrderOpt =
muDoubleScalarMax ( nlpDualFeasErrorTmp , 0.0 ) ; for ( nActiveConstr = 0 ;
nActiveConstr <= mLB ; nActiveConstr ++ ) { TrialState -> lambdasqp [
nActiveConstr ] = TrialState -> lambdasqp_old [ nActiveConstr ] ; } } else {
for ( nActiveConstr = 0 ; nActiveConstr <= mLB ; nActiveConstr ++ ) {
TrialState -> lambdasqp_old [ nActiveConstr ] = TrialState -> lambdasqp [
nActiveConstr ] ; } } } else { for ( nActiveConstr = 0 ; nActiveConstr <= mLB
; nActiveConstr ++ ) { TrialState -> lambdasqp_old [ nActiveConstr ] =
TrialState -> lambdasqp [ nActiveConstr ] ; } } if ( isFeasible && (
MeritFunction -> nlpDualFeasError <= 1.0E-10 * optimRelativeFactor ) ) {
Flags -> done = true ; TrialState -> sqpExitFlag = 1 ; } else { Flags -> done
= false ; if ( isFeasible && ( TrialState -> sqpFval < - 1.0E+20 ) ) { Flags
-> done = true ; TrialState -> sqpExitFlag = - 3 ; } else { guard1 = false ;
if ( TrialState -> sqpIterations > 0 ) { dxTooSmall = true ; nActiveConstr =
0 ; exitg1 = false ; while ( ( ! exitg1 ) && ( nActiveConstr <= nVar - 1 ) )
{ if ( 1.0E-10 * muDoubleScalarMax ( 1.0 , muDoubleScalarAbs ( TrialState ->
xstarsqp [ nActiveConstr ] ) ) <= muDoubleScalarAbs ( TrialState -> delta_x [
nActiveConstr ] ) ) { dxTooSmall = false ; exitg1 = true ; } else {
nActiveConstr ++ ; } } if ( dxTooSmall ) { if ( ! isFeasible ) { if ( Flags
-> stepType != 2 ) { Flags -> stepType = 2 ; Flags -> failedLineSearch =
false ; Flags -> stepAccepted = false ; guard1 = true ; } else { Flags ->
done = true ; TrialState -> sqpExitFlag = - 2 ; } } else { nActiveConstr =
WorkingSet -> nActiveConstr ; if ( WorkingSet -> nActiveConstr > 0 ) {
cdu0auzqs4j ( WorkingSet , TrialState -> cEq ) ; d [ 0 ] = TrialState ->
lambda [ 0 ] ; d [ 1 ] = TrialState -> lambda [ 1 ] ; d [ 2 ] = TrialState ->
lambda [ 2 ] ; d [ 3 ] = TrialState -> lambda [ 3 ] ; for ( fullRank_R = 0 ;
fullRank_R < nActiveConstr ; fullRank_R ++ ) { d [ fullRank_R ] = 0.0 ; }
bplndqf2vj ( QRManager , WorkingSet -> ATwset , nVar , nActiveConstr ) ;
n2v2qif1yv ( QRManager , QRManager -> mrows ) ; tol = muDoubleScalarMin (
1.4901161193847656E-8 , ( real_T ) muIntScalarMax_sint32 ( nVar ,
nActiveConstr ) * 2.2204460492503131E-16 ) * muDoubleScalarAbs ( QRManager ->
QR [ 0 ] ) ; fullRank_R = muIntScalarMin_sint32 ( nVar , nActiveConstr ) ;
rankR = 0 ; iQR_diag = 0 ; while ( ( rankR < fullRank_R ) && (
muDoubleScalarAbs ( QRManager -> QR [ iQR_diag ] ) > tol ) ) { rankR ++ ;
iQR_diag += 9 ; } memcpy ( & e [ 0 ] , & memspace -> workspace_double [ 0 ] ,
sizeof ( real_T ) << 6U ) ; km30jyym3b ( nVar , nVar , QRManager -> Q ,
TrialState -> grad , e ) ; bvondj0iig ( rankR , QRManager -> QR , e ) ;
nActiveConstr = muIntScalarMin_sint32 ( nActiveConstr , fullRank_R ) ; for (
fullRank_R = 0 ; fullRank_R < nActiveConstr ; fullRank_R ++ ) { d [ QRManager
-> jpvt [ fullRank_R ] - 1 ] = e [ fullRank_R ] ; } TrialState -> lambda [ 0
] = d [ 0 ] ; TrialState -> lambda [ 1 ] = d [ 1 ] ; TrialState -> lambda [ 2
] = d [ 2 ] ; TrialState -> lambda [ 3 ] = d [ 3 ] ; TrialState -> lambda [ 0
] = - TrialState -> lambda [ 0 ] ; d [ 0 ] = TrialState -> lambda [ 0 ] ; d [
1 ] = TrialState -> lambda [ 1 ] ; d [ 2 ] = TrialState -> lambda [ 2 ] ; d [
3 ] = TrialState -> lambda [ 3 ] ; exp02lfvwa ( d , WorkingSet ->
nActiveConstr , WorkingSet -> sizes , WorkingSet -> isActiveIdx , WorkingSet
-> Wid , WorkingSet -> Wlocalidx , e ) ; TrialState -> lambda [ 0 ] = d [ 0 ]
; TrialState -> lambda [ 1 ] = d [ 1 ] ; TrialState -> lambda [ 2 ] = d [ 2 ]
; TrialState -> lambda [ 3 ] = d [ 3 ] ; memcpy ( & memspace ->
workspace_double [ 0 ] , & e [ 0 ] , sizeof ( real_T ) << 6U ) ; ek1cslbopik
( memspace -> workspace_double , nVar , TrialState -> grad , WorkingSet ->
Aeq , WorkingSet -> indexLB , mLB , d ) ; cxrn1udwxmw ( nVar , memspace ->
workspace_double , & isFeasible , & tol ) ; if ( tol <= 1.0E-10 *
optimRelativeFactor ) { MeritFunction -> nlpDualFeasError = tol ;
MeritFunction -> nlpComplError = 0.0 ; MeritFunction -> firstOrderOpt =
muDoubleScalarMax ( tol , 0.0 ) ; for ( nVar = 0 ; nVar <= mLB ; nVar ++ ) {
TrialState -> lambdasqp [ nVar ] = d [ nVar ] ; } Flags -> done = true ;
TrialState -> sqpExitFlag = 1 ; } else { Flags -> done = true ; TrialState ->
sqpExitFlag = 2 ; } } else { Flags -> done = true ; TrialState -> sqpExitFlag
= 2 ; } } } else { guard1 = true ; } } else { guard1 = true ; } if ( guard1 )
{ if ( TrialState -> sqpIterations >= 400 ) { Flags -> done = true ;
TrialState -> sqpExitFlag = 0 ; } else { if ( TrialState ->
FunctionEvaluations >= 500 ) { Flags -> done = true ; TrialState ->
sqpExitFlag = 0 ; } } } } } } } static void ocj0pd5c5jy21 ( int32_T n , const
real_T x [ 8 ] , real_T y [ 8 ] ) { int32_T b_k ; for ( b_k = 0 ; b_k < n ;
b_k ++ ) { y [ b_k ] = x [ b_k ] ; } } static void ocj0pd5c5jy2 ( int32_T n ,
const real_T x [ 5 ] , real_T y [ 8 ] ) { int32_T b_k ; for ( b_k = 0 ; b_k <
n ; b_k ++ ) { y [ b_k ] = x [ b_k ] ; } } static void ocj0pd5c5jy21aw (
int32_T n , const real_T x [ 5 ] , real_T y [ 5 ] ) { int32_T b_k ; for ( b_k
= 0 ; b_k < n ; b_k ++ ) { y [ b_k ] = x [ b_k ] ; } } static void ocj0pd5c5j
( int32_T n , const real_T x [ 4 ] , real_T y [ 4 ] ) { int32_T b_k ; for (
b_k = 0 ; b_k < n ; b_k ++ ) { y [ b_k ] = x [ b_k ] ; } } static void
b2smkg2r33 ( kdxyjsixti * WorkingSet , real_T TrialState_cEq , const real_T
TrialState_searchDir [ 8 ] ) { int32_T ix ; real_T c ; int32_T ia ;
WorkingSet -> beq = - TrialState_cEq ; ix = 0 ; c = 0.0 ; for ( ia = 1 ; ia
<= WorkingSet -> nVar ; ia ++ ) { c += WorkingSet -> Aeq [ ia - 1 ] *
TrialState_searchDir [ ix ] ; ix ++ ; } c += WorkingSet -> beq ; WorkingSet
-> beq = c ; WorkingSet -> bwset [ 0 ] = c ; } static void gmkk0qafbs (
fovverijux * solution , const real_T workingset_lb [ 8 ] , const int32_T
workingset_indexLB [ 8 ] , const int32_T workingset_sizes [ 5 ] , const
boolean_T workingset_isActiveConstr [ 4 ] ) { int32_T b_idx ; for ( b_idx = 0
; b_idx < workingset_sizes [ 3 ] ; b_idx ++ ) { if (
workingset_isActiveConstr [ b_idx + 1 ] ) { solution -> xstar [
workingset_indexLB [ b_idx ] - 1 ] = - workingset_lb [ workingset_indexLB [
b_idx ] - 1 ] ; } } } static void fdaj2f3sha ( int32_T x [ 8 ] , int32_T xLen
, int32_T workspace [ 8 ] , int32_T xMin , int32_T xMax ) { int32_T maxOffset
; int32_T idxStart ; int32_T idxEnd ; int32_T b_idxW ; if ( ( xLen > 1 ) && (
xMax > xMin ) ) { maxOffset = xMax - xMin ; for ( idxStart = 0 ; idxStart <=
maxOffset ; idxStart ++ ) { workspace [ idxStart ] = 0 ; } maxOffset = xMax -
xMin ; for ( idxStart = 0 ; idxStart < xLen ; idxStart ++ ) { workspace [ x [
idxStart ] - xMin ] ++ ; } for ( idxStart = 1 ; idxStart < maxOffset + 1 ;
idxStart ++ ) { workspace [ idxStart ] += workspace [ idxStart - 1 ] ; }
idxStart = 0 ; idxEnd = workspace [ 0 ] ; for ( b_idxW = 0 ; b_idxW <
maxOffset ; b_idxW ++ ) { while ( idxStart + 1 <= idxEnd ) { x [ idxStart ] =
b_idxW + xMin ; idxStart ++ ; } idxStart = workspace [ b_idxW ] ; idxEnd =
workspace [ b_idxW + 1 ] ; } while ( idxStart + 1 <= idxEnd ) { x [ idxStart
] = xMax ; idxStart ++ ; } } } static void hc3wqesyj2 ( kdxyjsixti * obj ,
int32_T idx_global ) { int32_T TYPE ; int32_T idx_global_start ; int32_T
b_idx ; TYPE = obj -> Wid [ idx_global - 1 ] - 1 ; obj -> isActiveConstr [ (
obj -> isActiveIdx [ obj -> Wid [ idx_global - 1 ] - 1 ] + obj -> Wlocalidx [
idx_global - 1 ] ) - 2 ] = false ; idx_global_start = obj -> nActiveConstr -
1 ; obj -> Wid [ idx_global - 1 ] = obj -> Wid [ obj -> nActiveConstr - 1 ] ;
obj -> Wlocalidx [ idx_global - 1 ] = obj -> Wlocalidx [ idx_global_start ] ;
for ( b_idx = 0 ; b_idx < obj -> nVar ; b_idx ++ ) { obj -> ATwset [ b_idx +
( ( idx_global - 1 ) << 3 ) ] = obj -> ATwset [ ( idx_global_start << 3 ) +
b_idx ] ; } obj -> bwset [ idx_global - 1 ] = obj -> bwset [ idx_global_start
] ; obj -> nActiveConstr -- ; obj -> nWConstr [ TYPE ] -- ; } static int32_T
i3eyuko120 ( ktaxowovvf * memspace , kdxyjsixti * workingset , dzrlw5sxs5 *
qrmanager ) { int32_T nDepInd ; int32_T nVar ; int32_T mTotalWorkingEq ;
int32_T b [ 8 ] ; real_T tol ; real_T qtb ; real_T c [ 64 ] ; real_T d [ 8 ]
; int32_T e [ 8 ] ; int32_T ix ; int32_T iy ; int32_T k ; boolean_T exitg1 ;
nVar = workingset -> nVar - 1 ; mTotalWorkingEq = workingset -> nWConstr [ 1
] + workingset -> nWConstr [ 0 ] ; nDepInd = 0 ; if ( mTotalWorkingEq > 0 ) {
for ( ix = 0 ; ix < mTotalWorkingEq ; ix ++ ) { for ( iy = 0 ; iy <= nVar ;
iy ++ ) { qrmanager -> QR [ ix + ( iy << 3 ) ] = workingset -> ATwset [ ( ix
<< 3 ) + iy ] ; } } nDepInd = mTotalWorkingEq - workingset -> nVar ; nDepInd
= muIntScalarMax_sint32 ( 0 , nDepInd ) ; for ( ix = 0 ; ix <= nVar ; ix ++ )
{ qrmanager -> jpvt [ ix ] = 0 ; } qrmanager -> usedPivoting = true ;
qrmanager -> mrows = mTotalWorkingEq ; qrmanager -> ncols = workingset ->
nVar ; qrmanager -> minRowCol = muIntScalarMin_sint32 ( mTotalWorkingEq ,
workingset -> nVar ) ; memcpy ( & c [ 0 ] , & qrmanager -> QR [ 0 ] , sizeof
( real_T ) << 6U ) ; for ( nVar = 0 ; nVar < 8 ; nVar ++ ) { e [ nVar ] =
qrmanager -> jpvt [ nVar ] ; } po4mz2muct ( c , mTotalWorkingEq , workingset
-> nVar , e , d ) ; memcpy ( & qrmanager -> QR [ 0 ] , & c [ 0 ] , sizeof (
real_T ) << 6U ) ; memcpy ( & qrmanager -> tau [ 0 ] , & d [ 0 ] , sizeof (
real_T ) << 3U ) ; for ( nVar = 0 ; nVar < 8 ; nVar ++ ) { qrmanager -> jpvt
[ nVar ] = e [ nVar ] ; } tol = 100.0 * ( real_T ) workingset -> nVar *
2.2204460492503131E-16 ; nVar = muIntScalarMin_sint32 ( workingset -> nVar ,
mTotalWorkingEq ) ; while ( ( nVar > 0 ) && ( muDoubleScalarAbs ( c [ ( ( (
nVar - 1 ) << 3 ) + nVar ) - 1 ] ) < tol ) ) { nVar -- ; nDepInd ++ ; } if (
nDepInd > 0 ) { n2v2qif1yv ( qrmanager , qrmanager -> mrows ) ; nVar = 0 ;
exitg1 = false ; while ( ( ! exitg1 ) && ( nVar <= nDepInd - 1 ) ) { qtb =
0.0 ; ix = ( ( mTotalWorkingEq - nVar ) - 1 ) << 3 ; iy = 0 ; for ( k = 0 ; k
< mTotalWorkingEq ; k ++ ) { qtb += qrmanager -> Q [ ix ] * workingset ->
bwset [ iy ] ; ix ++ ; iy ++ ; } if ( muDoubleScalarAbs ( qtb ) >= tol ) {
nDepInd = - 1 ; exitg1 = true ; } else { nVar ++ ; } } } if ( nDepInd > 0 ) {
for ( nVar = 0 ; nVar < 8 ; nVar ++ ) { e [ nVar ] = memspace ->
workspace_int [ nVar ] ; } for ( nVar = 0 ; nVar < workingset -> nWConstr [ 0
] ; nVar ++ ) { qrmanager -> jpvt [ nVar ] = 1 ; } for ( nVar = workingset ->
nWConstr [ 0 ] ; nVar < mTotalWorkingEq ; nVar ++ ) { qrmanager -> jpvt [
nVar ] = 0 ; } bplndqf2vj ( qrmanager , workingset -> ATwset , workingset ->
nVar , mTotalWorkingEq ) ; for ( nVar = 0 ; nVar < nDepInd ; nVar ++ ) { e [
nVar ] = qrmanager -> jpvt [ ( mTotalWorkingEq - nDepInd ) + nVar ] ; } for (
nVar = 0 ; nVar < 8 ; nVar ++ ) { b [ nVar ] = memspace -> workspace_sort [
nVar ] ; } fdaj2f3sha ( e , nDepInd , b , 1 , mTotalWorkingEq ) ; for ( nVar
= 0 ; nVar < 8 ; nVar ++ ) { memspace -> workspace_int [ nVar ] = e [ nVar ]
; memspace -> workspace_sort [ nVar ] = b [ nVar ] ; } for ( mTotalWorkingEq
= nDepInd - 1 ; mTotalWorkingEq + 1 > 0 ; mTotalWorkingEq -- ) { nVar = (
workingset -> nWConstr [ 0 ] + workingset -> nWConstr [ 1 ] ) - 1 ; if ( (
nVar + 1 != 0 ) && ( e [ mTotalWorkingEq ] <= nVar + 1 ) ) { if ( ( nVar + 1
== workingset -> nActiveConstr ) || ( nVar + 1 == e [ mTotalWorkingEq ] ) ) {
workingset -> mEqRemoved ++ ; workingset -> indexEqRemoved = workingset ->
Wlocalidx [ e [ mTotalWorkingEq ] - 1 ] ; hc3wqesyj2 ( workingset , e [
mTotalWorkingEq ] ) ; } else { workingset -> mEqRemoved ++ ; ix = workingset
-> Wid [ e [ mTotalWorkingEq ] - 1 ] - 1 ; workingset -> indexEqRemoved =
workingset -> Wlocalidx [ e [ mTotalWorkingEq ] - 1 ] ; workingset ->
isActiveConstr [ ( workingset -> isActiveIdx [ workingset -> Wid [ e [
mTotalWorkingEq ] - 1 ] - 1 ] + workingset -> Wlocalidx [ e [ mTotalWorkingEq
] - 1 ] ) - 2 ] = false ; workingset -> Wid [ e [ mTotalWorkingEq ] - 1 ] =
workingset -> Wid [ nVar ] ; workingset -> Wlocalidx [ e [ mTotalWorkingEq ]
- 1 ] = workingset -> Wlocalidx [ nVar ] ; for ( iy = 0 ; iy < workingset ->
nVar ; iy ++ ) { workingset -> ATwset [ iy + ( ( e [ mTotalWorkingEq ] - 1 )
<< 3 ) ] = workingset -> ATwset [ ( nVar << 3 ) + iy ] ; } workingset ->
bwset [ e [ mTotalWorkingEq ] - 1 ] = workingset -> bwset [ nVar ] ; iy =
workingset -> nActiveConstr - 1 ; workingset -> Wid [ nVar ] = workingset ->
Wid [ workingset -> nActiveConstr - 1 ] ; workingset -> Wlocalidx [ nVar ] =
workingset -> Wlocalidx [ iy ] ; for ( k = 0 ; k < workingset -> nVar ; k ++
) { workingset -> ATwset [ k + ( nVar << 3 ) ] = workingset -> ATwset [ ( iy
<< 3 ) + k ] ; } workingset -> bwset [ nVar ] = workingset -> bwset [ iy ] ;
workingset -> nActiveConstr -- ; workingset -> nWConstr [ ix ] -- ; } } } } }
return nDepInd ; } static void anjwrhuewg ( kdxyjsixti * workingset ,
dzrlw5sxs5 * qrmanager , ktaxowovvf * memspace , real_T tolfactor ) { int32_T
nFixedConstr ; real_T tol ; int32_T nDepIneq ; int32_T b [ 8 ] ; int32_T c [
8 ] ; int32_T i ; nFixedConstr = workingset -> nWConstr [ 1 ] + workingset ->
nWConstr [ 0 ] ; if ( ( workingset -> nWConstr [ 2 ] + workingset -> nWConstr
[ 3 ] ) + workingset -> nWConstr [ 4 ] > 0 ) { tol = tolfactor * ( real_T )
workingset -> nVar * 2.2204460492503131E-16 ; for ( nDepIneq = 0 ; nDepIneq <
nFixedConstr ; nDepIneq ++ ) { qrmanager -> jpvt [ nDepIneq ] = 1 ; } for (
nDepIneq = nFixedConstr + 1 ; nDepIneq <= workingset -> nActiveConstr ;
nDepIneq ++ ) { qrmanager -> jpvt [ nDepIneq - 1 ] = 0 ; } bplndqf2vj (
qrmanager , workingset -> ATwset , workingset -> nVar , workingset ->
nActiveConstr ) ; nDepIneq = 0 ; for ( i = workingset -> nActiveConstr ; i >
workingset -> nVar ; i -- ) { nDepIneq ++ ; memspace -> workspace_int [
nDepIneq - 1 ] = qrmanager -> jpvt [ i - 1 ] ; } if ( i <= workingset -> nVar
) { while ( ( i > nFixedConstr ) && ( muDoubleScalarAbs ( qrmanager -> QR [ (
( ( i - 1 ) << 3 ) + i ) - 1 ] ) < tol ) ) { nDepIneq ++ ; memspace ->
workspace_int [ nDepIneq - 1 ] = qrmanager -> jpvt [ i - 1 ] ; i -- ; } } for
( i = 0 ; i < 8 ; i ++ ) { b [ i ] = memspace -> workspace_int [ i ] ; c [ i
] = memspace -> workspace_sort [ i ] ; } fdaj2f3sha ( b , nDepIneq , c ,
nFixedConstr + 1 , workingset -> nActiveConstr ) ; for ( i = 0 ; i < 8 ; i ++
) { memspace -> workspace_int [ i ] = b [ i ] ; memspace -> workspace_sort [
i ] = c [ i ] ; } for ( nFixedConstr = nDepIneq ; nFixedConstr > 0 ;
nFixedConstr -- ) { hc3wqesyj2 ( workingset , b [ nFixedConstr - 1 ] ) ; } }
} static void gptgkafsbe ( kdxyjsixti * obj ) { int32_T idx_global ; for (
idx_global = obj -> nWConstr [ 0 ] + obj -> nWConstr [ 1 ] ; idx_global < obj
-> nActiveConstr ; idx_global ++ ) { obj -> isActiveConstr [ ( obj ->
isActiveIdx [ obj -> Wid [ idx_global ] - 1 ] + obj -> Wlocalidx [ idx_global
] ) - 2 ] = false ; } obj -> nWConstr [ 2 ] = 0 ; obj -> nWConstr [ 3 ] = 0 ;
obj -> nWConstr [ 4 ] = 0 ; obj -> nActiveConstr = obj -> nWConstr [ 0 ] +
obj -> nWConstr [ 1 ] ; } static void km30jyym3bu ( int32_T m , int32_T n ,
const real_T A [ 32 ] , const real_T x [ 8 ] , real_T y [ 64 ] ) { int32_T ix
; real_T c ; int32_T iy ; int32_T iac ; int32_T b ; int32_T ia ; int32_T b_c
; if ( n != 0 ) { iy = 0 ; b_c = ( n - 1 ) << 3 ; for ( iac = 1 ; iac <= b_c
+ 1 ; iac += 8 ) { ix = 0 ; c = 0.0 ; b = ( iac + m ) - 1 ; for ( ia = iac ;
ia <= b ; ia ++ ) { c += A [ ia - 1 ] * x [ ix ] ; ix ++ ; } y [ iy ] += - c
; iy ++ ; } } } static void dtrv2kriti4 ( dzrlw5sxs5 * obj , const real_T A [
32 ] , int32_T mrows , int32_T ncols ) { int32_T iA0 ; int32_T iQR0 ; int32_T
k ; int32_T minmn ; real_T b_A [ 64 ] ; real_T tau [ 8 ] ; boolean_T guard1 =
false ; guard1 = false ; if ( mrows * ncols > 0 ) { for ( minmn = 0 ; minmn <
ncols ; minmn ++ ) { iA0 = minmn << 3 ; iQR0 = minmn << 3 ; for ( k = 1 ; k -
1 < mrows ; k ++ ) { obj -> QR [ ( iQR0 + k ) - 1 ] = A [ ( iA0 + k ) - 1 ] ;
} } guard1 = true ; } else if ( mrows * ncols == 0 ) { obj -> mrows = mrows ;
obj -> ncols = ncols ; obj -> minRowCol = 0 ; } else { guard1 = true ; } if (
guard1 ) { obj -> usedPivoting = false ; obj -> mrows = mrows ; obj -> ncols
= ncols ; for ( minmn = 0 ; minmn < ncols ; minmn ++ ) { obj -> jpvt [ minmn
] = minmn + 1 ; } obj -> minRowCol = muIntScalarMin_sint32 ( mrows , ncols )
; memcpy ( & b_A [ 0 ] , & obj -> QR [ 0 ] , sizeof ( real_T ) << 6U ) ;
minmn = muIntScalarMin_sint32 ( mrows , ncols ) ; memset ( & tau [ 0 ] , 0 ,
sizeof ( real_T ) << 3U ) ; if ( minmn >= 1 ) { mrqydsx15c ( b_A , mrows ,
ncols , minmn , tau ) ; } memcpy ( & obj -> QR [ 0 ] , & b_A [ 0 ] , sizeof (
real_T ) << 6U ) ; memcpy ( & obj -> tau [ 0 ] , & tau [ 0 ] , sizeof (
real_T ) << 3U ) ; } } static void cxg22hx205o ( int32_T m , const real_T A [
64 ] , real_T B_i [ 64 ] ) { real_T temp ; int32_T iAcol ; int32_T i ;
int32_T k ; for ( i = 1 ; i - 1 < m ; i ++ ) { iAcol = ( ( i - 1 ) << 3 ) - 1
; temp = B_i [ i + - 1 ] ; for ( k = 1 ; k - 1 <= i - 2 ; k ++ ) { temp -= A
[ k + iAcol ] * B_i [ k + - 1 ] ; } B_i [ i + - 1 ] = temp / A [ i + iAcol ]
; } for ( i = 1 ; i - 1 < m ; i ++ ) { iAcol = ( ( i - 1 ) << 3 ) - 1 ; temp
= B_i [ i + 7 ] ; for ( k = 1 ; k - 1 <= i - 2 ; k ++ ) { temp -= A [ k +
iAcol ] * B_i [ k + 7 ] ; } B_i [ i + 7 ] = temp / A [ i + iAcol ] ; } }
static void dtrv2kriti ( dzrlw5sxs5 * obj , int32_T mrows , int32_T ncols ) {
int32_T minmn ; real_T A [ 64 ] ; real_T tau [ 8 ] ; obj -> usedPivoting =
false ; obj -> mrows = mrows ; obj -> ncols = ncols ; for ( minmn = 0 ; minmn
< ncols ; minmn ++ ) { obj -> jpvt [ minmn ] = minmn + 1 ; } obj -> minRowCol
= muIntScalarMin_sint32 ( mrows , ncols ) ; memcpy ( & A [ 0 ] , & obj -> QR
[ 0 ] , sizeof ( real_T ) << 6U ) ; minmn = muIntScalarMin_sint32 ( mrows ,
ncols ) ; memset ( & tau [ 0 ] , 0 , sizeof ( real_T ) << 3U ) ; if ( minmn
>= 1 ) { mrqydsx15c ( A , mrows , ncols , minmn , tau ) ; } memcpy ( & obj ->
QR [ 0 ] , & A [ 0 ] , sizeof ( real_T ) << 6U ) ; memcpy ( & obj -> tau [ 0
] , & tau [ 0 ] , sizeof ( real_T ) << 3U ) ; } static void etqop2wnx13 (
int32_T m , int32_T k , const real_T A [ 64 ] , const real_T B_m [ 64 ] ,
real_T C [ 64 ] ) { int32_T br ; int32_T ar ; int32_T ia ; int32_T c ;
int32_T d ; int32_T b_ic ; for ( ar = 0 ; ar < m ; ar ++ ) { C [ ar ] = 0.0 ;
} br = m + 8 ; for ( ar = 8 ; ar < br ; ar ++ ) { C [ ar ] = 0.0 ; } ar = - 1
; for ( br = 1 ; br <= k ; br ++ ) { ia = ar ; for ( b_ic = 0 ; b_ic < m ;
b_ic ++ ) { ia ++ ; C [ b_ic ] += B_m [ br - 1 ] * A [ ia ] ; } ar += 8 ; }
ar = - 1 ; c = k + 8 ; for ( br = 9 ; br <= c ; br ++ ) { ia = ar ; d = m + 8
; for ( b_ic = 8 ; b_ic < d ; b_ic ++ ) { ia ++ ; C [ b_ic ] += B_m [ br - 1
] * A [ ia ] ; } ar += 8 ; } } static void etqop2wnx1 ( int32_T m , int32_T k
, const real_T A [ 64 ] , const real_T B_p [ 64 ] , real_T C [ 64 ] ) {
int32_T br ; int32_T ar ; real_T temp ; int32_T c ; int32_T w ; for ( ar = 0
; ar < m ; ar ++ ) { C [ ar ] = 0.0 ; } br = m + 8 ; for ( ar = 8 ; ar < br ;
ar ++ ) { C [ ar ] = 0.0 ; } ar = - 1 ; for ( br = 0 ; br < m ; br ++ ) {
temp = 0.0 ; for ( w = 1 ; w - 1 < k ; w ++ ) { temp += A [ w + ar ] * B_p [
w + - 1 ] ; } C [ br ] += temp ; ar += 8 ; } ar = - 1 ; c = m + 8 ; for ( br
= 8 ; br < c ; br ++ ) { temp = 0.0 ; for ( w = 1 ; w - 1 < k ; w ++ ) { temp
+= A [ w + ar ] * B_p [ w + 7 ] ; } C [ br ] += temp ; ar += 8 ; } } static
void cxg22hx205 ( int32_T m , const real_T A [ 64 ] , real_T B_e [ 64 ] ) {
int32_T kAcol ; int32_T k ; int32_T i ; for ( k = m ; k > 0 ; k -- ) { kAcol
= ( ( k - 1 ) << 3 ) - 1 ; if ( B_e [ k + - 1 ] != 0.0 ) { B_e [ k + - 1 ] /=
A [ k + kAcol ] ; for ( i = 1 ; i - 1 <= k - 2 ; i ++ ) { B_e [ i + - 1 ] -=
B_e [ k + - 1 ] * A [ i + kAcol ] ; } } } for ( k = m ; k > 0 ; k -- ) {
kAcol = ( ( k - 1 ) << 3 ) - 1 ; if ( B_e [ k + 7 ] != 0.0 ) { B_e [ k + 7 ]
/= A [ k + kAcol ] ; for ( i = 1 ; i - 1 <= k - 2 ; i ++ ) { B_e [ i + 7 ] -=
B_e [ k + 7 ] * A [ i + kAcol ] ; } } } } static real_T btjgrinqe0 (
kdxyjsixti * obj , const real_T x [ 64 ] ) { real_T v ; int32_T mLB ; int32_T
ix ; real_T c ; int32_T b_ix ; mLB = obj -> sizes [ 3 ] ; if ( obj ->
probType == 2 ) { obj -> maxConstrWorkspace [ 0 ] = obj -> beq ; obj ->
maxConstrWorkspace [ 0 ] = - obj -> maxConstrWorkspace [ 0 ] ; b_ix = 0 ; c =
0.0 ; for ( ix = 0 ; ix < 5 ; ix ++ ) { c += obj -> Aeq [ ix ] * x [ b_ix ] ;
b_ix ++ ; } obj -> maxConstrWorkspace [ 0 ] += c ; obj -> maxConstrWorkspace
[ 0 ] = ( obj -> maxConstrWorkspace [ 0 ] - x [ 5 ] ) + x [ 6 ] ; v =
muDoubleScalarMax ( 0.0 , muDoubleScalarAbs ( obj -> maxConstrWorkspace [ 0 ]
) ) ; } else { obj -> maxConstrWorkspace [ 0 ] = obj -> beq ; obj ->
maxConstrWorkspace [ 0 ] = - obj -> maxConstrWorkspace [ 0 ] ; ix = 0 ; c =
0.0 ; for ( b_ix = 1 ; b_ix <= obj -> nVar ; b_ix ++ ) { c += obj -> Aeq [
b_ix - 1 ] * x [ ix ] ; ix ++ ; } obj -> maxConstrWorkspace [ 0 ] += c ; v =
muDoubleScalarMax ( 0.0 , muDoubleScalarAbs ( obj -> maxConstrWorkspace [ 0 ]
) ) ; } if ( mLB > 0 ) { for ( ix = 0 ; ix < mLB ; ix ++ ) { v =
muDoubleScalarMax ( v , - x [ obj -> indexLB [ ix ] - 1 ] - obj -> lb [ obj
-> indexLB [ ix ] - 1 ] ) ; } } return v ; } static boolean_T fetubx0squ (
real_T workspace [ 64 ] , real_T xCurrent [ 8 ] , kdxyjsixti * workingset ,
dzrlw5sxs5 * qrmanager ) { boolean_T nonDegenerateWset ; int32_T mWConstr ;
int32_T nVar ; real_T constrViolation_minnormX ; int32_T b_idx_row ;
kdxyjsixti obj ; real_T c ; int32_T b_ix ; real_T workspace_p [ 64 ] ;
int32_T exitg1 ; mWConstr = workingset -> nActiveConstr - 1 ; nVar =
workingset -> nVar - 1 ; nonDegenerateWset = true ; if ( workingset ->
nActiveConstr != 0 ) { for ( b_ix = 0 ; b_ix <= mWConstr ; b_ix ++ ) {
workspace [ b_ix ] = workingset -> bwset [ b_ix ] ; workspace [ b_ix + 8 ] =
workingset -> bwset [ b_ix ] ; } km30jyym3bu ( workingset -> nVar ,
workingset -> nActiveConstr , workingset -> ATwset , xCurrent , workspace ) ;
if ( workingset -> nActiveConstr >= workingset -> nVar ) { for ( b_ix = 0 ;
b_ix <= nVar ; b_ix ++ ) { for ( b_idx_row = 0 ; b_idx_row <= mWConstr ;
b_idx_row ++ ) { qrmanager -> QR [ b_idx_row + ( b_ix << 3 ) ] = workingset
-> ATwset [ ( b_idx_row << 3 ) + b_ix ] ; } } dtrv2kriti ( qrmanager ,
workingset -> nActiveConstr , workingset -> nVar ) ; n2v2qif1yv ( qrmanager ,
qrmanager -> mrows ) ; memcpy ( & workspace_p [ 0 ] , & workspace [ 0 ] ,
sizeof ( real_T ) << 6 ) ; etqop2wnx1 ( workingset -> nVar , workingset ->
nActiveConstr , qrmanager -> Q , workspace_p , workspace ) ; cxg22hx205 (
workingset -> nVar , qrmanager -> QR , workspace ) ; } else { dtrv2kriti4 (
qrmanager , workingset -> ATwset , workingset -> nVar , workingset ->
nActiveConstr ) ; n2v2qif1yv ( qrmanager , qrmanager -> minRowCol ) ;
cxg22hx205o ( workingset -> nActiveConstr , qrmanager -> QR , workspace ) ;
memcpy ( & workspace_p [ 0 ] , & workspace [ 0 ] , sizeof ( real_T ) << 6 ) ;
etqop2wnx13 ( workingset -> nVar , workingset -> nActiveConstr , qrmanager ->
Q , workspace_p , workspace ) ; } mWConstr = 0 ; do { exitg1 = 0 ; if (
mWConstr <= nVar ) { if ( muDoubleScalarIsInf ( workspace [ mWConstr ] ) ||
muDoubleScalarIsNaN ( workspace [ mWConstr ] ) || ( muDoubleScalarIsInf (
workspace [ mWConstr + 8 ] ) || muDoubleScalarIsNaN ( workspace [ mWConstr +
8 ] ) ) ) { nonDegenerateWset = false ; exitg1 = 1 ; } else { mWConstr ++ ; }
} else { for ( mWConstr = 0 ; mWConstr <= nVar ; mWConstr ++ ) { workspace [
mWConstr ] += xCurrent [ mWConstr ] ; } constrViolation_minnormX = btjgrinqe0
( workingset , workspace ) ; if ( workingset -> probType == 2 ) { obj = *
workingset ; b_ix = 8 ; c = 0.0 ; for ( mWConstr = 0 ; mWConstr < 5 ;
mWConstr ++ ) { c += workingset -> Aeq [ mWConstr ] * workspace [ b_ix ] ;
b_ix ++ ; } obj . maxConstrWorkspace [ 0 ] = - workingset -> beq + c ; obj .
maxConstrWorkspace [ 0 ] = ( obj . maxConstrWorkspace [ 0 ] - workspace [ 13
] ) + workspace [ 14 ] ; c = muDoubleScalarMax ( 0.0 , muDoubleScalarAbs (
obj . maxConstrWorkspace [ 0 ] ) ) ; } else { obj = * workingset ; mWConstr =
8 ; c = 0.0 ; for ( b_ix = 1 ; b_ix <= workingset -> nVar ; b_ix ++ ) { c +=
workingset -> Aeq [ b_ix - 1 ] * workspace [ mWConstr ] ; mWConstr ++ ; } obj
. maxConstrWorkspace [ 0 ] = - workingset -> beq + c ; c = muDoubleScalarMax
( 0.0 , muDoubleScalarAbs ( obj . maxConstrWorkspace [ 0 ] ) ) ; } if (
workingset -> sizes [ 3 ] > 0 ) { for ( mWConstr = 0 ; mWConstr < workingset
-> sizes [ 3 ] ; mWConstr ++ ) { c = muDoubleScalarMax ( c , - workspace [
obj . indexLB [ mWConstr ] + 7 ] - obj . lb [ obj . indexLB [ mWConstr ] - 1
] ) ; } } * workingset = obj ; if ( ( constrViolation_minnormX <=
2.2204460492503131E-16 ) || ( constrViolation_minnormX < c ) ) { for (
mWConstr = 0 ; mWConstr <= nVar ; mWConstr ++ ) { xCurrent [ mWConstr ] =
workspace [ mWConstr ] ; } } else { for ( mWConstr = 0 ; mWConstr <= nVar ;
mWConstr ++ ) { xCurrent [ mWConstr ] = workspace [ mWConstr + 8 ] ; } }
exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } return nonDegenerateWset ; }
static real_T btjgrinqe0p ( kdxyjsixti * obj , const real_T x [ 8 ] ) {
real_T v ; int32_T mLB ; int32_T ix ; real_T c ; int32_T b_ix ; mLB = obj ->
sizes [ 3 ] ; if ( obj -> probType == 2 ) { obj -> maxConstrWorkspace [ 0 ] =
obj -> beq ; obj -> maxConstrWorkspace [ 0 ] = - obj -> maxConstrWorkspace [
0 ] ; b_ix = 0 ; c = 0.0 ; for ( ix = 0 ; ix < 5 ; ix ++ ) { c += obj -> Aeq
[ ix ] * x [ b_ix ] ; b_ix ++ ; } obj -> maxConstrWorkspace [ 0 ] += c ; obj
-> maxConstrWorkspace [ 0 ] = ( obj -> maxConstrWorkspace [ 0 ] - x [ 5 ] ) +
x [ 6 ] ; v = muDoubleScalarMax ( 0.0 , muDoubleScalarAbs ( obj ->
maxConstrWorkspace [ 0 ] ) ) ; } else { obj -> maxConstrWorkspace [ 0 ] = obj
-> beq ; obj -> maxConstrWorkspace [ 0 ] = - obj -> maxConstrWorkspace [ 0 ]
; ix = 0 ; c = 0.0 ; for ( b_ix = 1 ; b_ix <= obj -> nVar ; b_ix ++ ) { c +=
obj -> Aeq [ b_ix - 1 ] * x [ ix ] ; ix ++ ; } obj -> maxConstrWorkspace [ 0
] += c ; v = muDoubleScalarMax ( 0.0 , muDoubleScalarAbs ( obj ->
maxConstrWorkspace [ 0 ] ) ) ; } if ( mLB > 0 ) { for ( ix = 0 ; ix < mLB ;
ix ++ ) { v = muDoubleScalarMax ( v , - x [ obj -> indexLB [ ix ] - 1 ] - obj
-> lb [ obj -> indexLB [ ix ] - 1 ] ) ; } } return v ; } static void
g1pwp1vmyk ( fovverijux * solution , ktaxowovvf * memspace , kdxyjsixti *
workingset , dzrlw5sxs5 * qrmanager ) { int32_T b ; real_T c [ 8 ] ;
boolean_T okWorkingSet ; real_T constrViolation ; boolean_T guard1 = false ;
solution -> state = 82 ; b = i3eyuko120 ( memspace , workingset , qrmanager )
; if ( b != - 1 ) { anjwrhuewg ( workingset , qrmanager , memspace , 100.0 )
; memcpy ( & c [ 0 ] , & solution -> xstar [ 0 ] , sizeof ( real_T ) << 3U )
; okWorkingSet = fetubx0squ ( memspace -> workspace_double , c , workingset ,
qrmanager ) ; memcpy ( & solution -> xstar [ 0 ] , & c [ 0 ] , sizeof (
real_T ) << 3U ) ; guard1 = false ; if ( ! okWorkingSet ) { anjwrhuewg (
workingset , qrmanager , memspace , 1000.0 ) ; okWorkingSet = fetubx0squ (
memspace -> workspace_double , c , workingset , qrmanager ) ; memcpy ( &
solution -> xstar [ 0 ] , & c [ 0 ] , sizeof ( real_T ) << 3U ) ; if ( !
okWorkingSet ) { solution -> state = - 7 ; } else { guard1 = true ; } } else
{ guard1 = true ; } if ( guard1 ) { if ( workingset -> nWConstr [ 0 ] +
workingset -> nWConstr [ 1 ] == workingset -> nVar ) { constrViolation =
btjgrinqe0p ( workingset , solution -> xstar ) ; if ( constrViolation >
1.0E-6 ) { solution -> state = - 2 ; } } } } else { solution -> state = - 3 ;
gptgkafsbe ( workingset ) ; } } static void keagmo2a3h ( k0ratk1n10 * obj ,
int32_T NumVars ) { obj -> prev_objtype = obj -> objtype ; obj -> prev_nvar =
obj -> nvar ; obj -> prev_hasLinear = obj -> hasLinear ; obj -> objtype = 5 ;
obj -> nvar = NumVars ; obj -> gammaScalar = 1.0 ; obj -> hasLinear = true ;
} static void nxdwdyjjzv ( boolean_T obj_hasLinear , int32_T obj_nvar ,
real_T workspace [ 64 ] , const real_T H [ 25 ] , const real_T f [ 8 ] ,
const real_T x [ 8 ] ) { int32_T fMultiplier ; int32_T iy ; real_T c ;
int32_T iac ; int32_T b ; int32_T ia ; int32_T b_c ; fMultiplier = 0 ; if (
obj_hasLinear ) { while ( fMultiplier <= obj_nvar - 1 ) { workspace [
fMultiplier ] = f [ fMultiplier ] ; fMultiplier ++ ; } fMultiplier = 1 ; } if
( obj_nvar != 0 ) { if ( fMultiplier != 1 ) { while ( fMultiplier <= obj_nvar
- 1 ) { workspace [ fMultiplier ] = 0.0 ; fMultiplier ++ ; } } fMultiplier =
0 ; b_c = ( obj_nvar - 1 ) * obj_nvar + 1 ; iac = 1 ; while ( ( ( obj_nvar >
0 ) && ( iac <= b_c ) ) || ( ( obj_nvar < 0 ) && ( iac >= b_c ) ) ) { c = 0.5
* x [ fMultiplier ] ; iy = 0 ; b = ( iac + obj_nvar ) - 1 ; for ( ia = iac ;
ia <= b ; ia ++ ) { workspace [ iy ] += H [ ia - 1 ] * c ; iy ++ ; }
fMultiplier ++ ; iac += obj_nvar ; } } } static real_T ftrayw10no ( const
k0ratk1n10 * obj , real_T workspace [ 64 ] , const real_T H [ 25 ] , const
real_T f [ 8 ] , const real_T x [ 8 ] ) { real_T val ; int32_T b_k ; val =
0.0 ; switch ( obj -> objtype ) { case 5 : val = x [ obj -> nvar - 1 ] * obj
-> gammaScalar ; break ; case 3 : nxdwdyjjzv ( obj -> hasLinear , obj -> nvar
, workspace , H , f , x ) ; if ( obj -> nvar >= 1 ) { for ( b_k = 0 ; b_k <
obj -> nvar ; b_k ++ ) { val += x [ b_k ] * workspace [ b_k ] ; } } break ;
case 4 : nxdwdyjjzv ( obj -> hasLinear , obj -> nvar , workspace , H , f , x
) ; for ( b_k = obj -> nvar ; b_k + 1 < 8 ; b_k ++ ) { workspace [ b_k ] =
0.5 * obj -> beta * x [ b_k ] + obj -> rho ; } for ( b_k = 0 ; b_k < 7 ; b_k
++ ) { val += x [ b_k ] * workspace [ b_k ] ; } break ; } return val ; }
static void km30jyym3bu3 ( int32_T m , int32_T n , const real_T A [ 25 ] ,
int32_T lda , const real_T x [ 8 ] , real_T y [ 7 ] ) { int32_T iy ; int32_T
ix ; int32_T iac ; int32_T b ; int32_T ia ; int32_T c ; if ( ( m != 0 ) && (
n != 0 ) ) { for ( ix = 0 ; ix < m ; ix ++ ) { y [ ix ] = 0.0 ; } ix = 0 ; c
= ( n - 1 ) * lda + 1 ; iac = 1 ; while ( ( ( lda > 0 ) && ( iac <= c ) ) ||
( ( lda < 0 ) && ( iac >= c ) ) ) { iy = 0 ; b = ( iac + m ) - 1 ; for ( ia =
iac ; ia <= b ; ia ++ ) { y [ iy ] += A [ ia - 1 ] * x [ ix ] ; iy ++ ; } ix
++ ; iac += lda ; } } } static void oqrt5rwtlj ( k0ratk1n10 * obj , const
real_T H [ 25 ] , const real_T f [ 8 ] , const real_T x [ 8 ] ) { int32_T k ;
int32_T iy ; switch ( obj -> objtype ) { case 5 : for ( iy = 0 ; iy <= obj ->
nvar - 2 ; iy ++ ) { obj -> grad [ iy ] = 0.0 ; } obj -> grad [ obj -> nvar -
1 ] = obj -> gammaScalar ; break ; case 3 : km30jyym3bu3 ( obj -> nvar , obj
-> nvar , H , obj -> nvar , x , obj -> Hx ) ; for ( iy = 0 ; iy < obj -> nvar
; iy ++ ) { obj -> grad [ iy ] = obj -> Hx [ iy ] ; } if ( obj -> hasLinear
&& ( obj -> nvar >= 1 ) ) { iy = obj -> nvar - 1 ; for ( k = 0 ; k <= iy ; k
++ ) { obj -> grad [ k ] += f [ k ] ; } } break ; case 4 : km30jyym3bu3 ( obj
-> nvar , obj -> nvar , H , obj -> nvar , x , obj -> Hx ) ; for ( iy = obj ->
nvar ; iy + 1 < 8 ; iy ++ ) { obj -> Hx [ iy ] = obj -> beta * x [ iy ] ; }
for ( iy = 0 ; iy < 7 ; iy ++ ) { obj -> grad [ iy ] = obj -> Hx [ iy ] ; }
if ( obj -> hasLinear && ( obj -> nvar >= 1 ) ) { iy = obj -> nvar - 1 ; for
( k = 0 ; k <= iy ; k ++ ) { obj -> grad [ k ] += f [ k ] ; } } if ( 7 - obj
-> nvar >= 1 ) { iy = obj -> nvar ; for ( k = 0 ; k <= 6 - obj -> nvar ; k ++
) { obj -> grad [ iy ] += obj -> rho ; iy ++ ; } } break ; } } static real_T
neflgzisgi ( const k0ratk1n10 * obj , real_T workspace [ 64 ] , const real_T
f [ 8 ] , const real_T x [ 8 ] ) { real_T val ; int32_T b_k ; val = 0.0 ;
switch ( obj -> objtype ) { case 5 : val = x [ obj -> nvar - 1 ] * obj ->
gammaScalar ; break ; case 3 : if ( obj -> hasLinear ) { for ( b_k = 0 ; b_k
< obj -> nvar ; b_k ++ ) { workspace [ b_k ] = 0.5 * obj -> Hx [ b_k ] + f [
b_k ] ; } if ( obj -> nvar >= 1 ) { for ( b_k = 0 ; b_k < obj -> nvar ; b_k
++ ) { val += x [ b_k ] * workspace [ b_k ] ; } } } else { if ( obj -> nvar
>= 1 ) { for ( b_k = 0 ; b_k < obj -> nvar ; b_k ++ ) { val += x [ b_k ] *
obj -> Hx [ b_k ] ; } } val *= 0.5 ; } break ; case 4 : if ( obj -> hasLinear
) { for ( b_k = 0 ; b_k < obj -> nvar ; b_k ++ ) { workspace [ b_k ] = f [
b_k ] ; } for ( b_k = 0 ; b_k <= 6 - obj -> nvar ; b_k ++ ) { workspace [ obj
-> nvar + b_k ] = obj -> rho ; } for ( b_k = 0 ; b_k < 7 ; b_k ++ ) {
workspace [ b_k ] += 0.5 * obj -> Hx [ b_k ] ; val += x [ b_k ] * workspace [
b_k ] ; } } else { for ( b_k = 0 ; b_k < 7 ; b_k ++ ) { val += x [ b_k ] *
obj -> Hx [ b_k ] ; } val *= 0.5 ; for ( b_k = obj -> nvar ; b_k + 1 < 8 ;
b_k ++ ) { val += x [ b_k ] * obj -> rho ; } } break ; } return val ; }
static void ocj0pd5c5jy ( int32_T n , real_T y [ 4 ] ) { int32_T k ; for ( k
= 0 ; k < n ; k ++ ) { y [ k ] = 0.0 ; } } static void ocj0pd5c5jy21a (
int32_T n , real_T y [ 8 ] ) { int32_T k ; for ( k = 0 ; k < n ; k ++ ) { y [
k ] = 0.0 ; } } static void bmlfodpuvl ( real_T * a , real_T * b , real_T * c
, real_T * s ) { real_T roe ; real_T absa ; real_T absb ; real_T scale ;
real_T ads ; real_T bds ; roe = * b ; absa = muDoubleScalarAbs ( * a ) ; absb
= muDoubleScalarAbs ( * b ) ; if ( absa > absb ) { roe = * a ; } scale = absa
+ absb ; if ( scale == 0.0 ) { * s = 0.0 ; * c = 1.0 ; * b = 0.0 ; } else {
ads = absa / scale ; bds = absb / scale ; scale *= muDoubleScalarSqrt ( ads *
ads + bds * bds ) ; if ( roe < 0.0 ) { scale = - scale ; } * c = * a / scale
; * s = * b / scale ; if ( absa > absb ) { * b = * s ; } else if ( * c != 0.0
) { * b = 1.0 / * c ; } else { * b = 1.0 ; } } * a = scale ; } static void
lzz4urlwyc ( dzrlw5sxs5 * obj , const real_T vec [ 32 ] , int32_T iv0 ) {
int32_T iQR0 ; real_T c ; real_T s ; real_T x [ 64 ] ; int32_T iyend ;
int32_T ix ; real_T c_c ; int32_T d ; int32_T ia ; int32_T c_iy ; real_T temp
; iQR0 = obj -> ncols + 1 ; obj -> minRowCol = muIntScalarMin_sint32 ( obj ->
mrows , iQR0 ) ; iQR0 = obj -> ncols << 3 ; if ( obj -> mrows != 0 ) { iyend
= iQR0 + obj -> mrows ; for ( c_iy = iQR0 ; c_iy < iyend ; c_iy ++ ) { obj ->
QR [ c_iy ] = 0.0 ; } iyend = ( obj -> mrows - 1 ) << 3 ; for ( c_iy = 1 ;
c_iy <= iyend + 1 ; c_iy += 8 ) { ix = iv0 ; c_c = 0.0 ; d = ( c_iy + obj ->
mrows ) - 1 ; for ( ia = c_iy ; ia <= d ; ia ++ ) { c_c += obj -> Q [ ia - 1
] * vec [ ix - 1 ] ; ix ++ ; } obj -> QR [ iQR0 ] += c_c ; iQR0 ++ ; } } obj
-> ncols ++ ; obj -> jpvt [ obj -> ncols - 1 ] = obj -> ncols ; for ( iQR0 =
obj -> mrows - 2 ; iQR0 + 2 > obj -> ncols ; iQR0 -- ) { temp = obj -> QR [ (
( obj -> ncols - 1 ) << 3 ) + iQR0 ] ; c = obj -> QR [ ( ( ( obj -> ncols - 1
) << 3 ) + iQR0 ) + 1 ] ; bmlfodpuvl ( & temp , & c , & c_c , & s ) ; obj ->
QR [ iQR0 + ( ( obj -> ncols - 1 ) << 3 ) ] = temp ; obj -> QR [ ( iQR0 + ( (
obj -> ncols - 1 ) << 3 ) ) + 1 ] = c ; iyend = iQR0 << 3 ; memcpy ( & x [ 0
] , & obj -> Q [ 0 ] , sizeof ( real_T ) << 6U ) ; if ( obj -> mrows >= 1 ) {
c_iy = iyend + 8 ; for ( ix = 0 ; ix < obj -> mrows ; ix ++ ) { temp = c_c *
x [ iyend ] + s * x [ c_iy ] ; x [ c_iy ] = c_c * x [ c_iy ] - s * x [ iyend
] ; x [ iyend ] = temp ; c_iy ++ ; iyend ++ ; } } memcpy ( & obj -> Q [ 0 ] ,
& x [ 0 ] , sizeof ( real_T ) << 6U ) ; } } static void jbdwtzuxva (
dzrlw5sxs5 * obj , int32_T idx ) { int32_T i ; int32_T k ; int32_T QRk0 ;
real_T e ; real_T c_c ; real_T b_s ; real_T x [ 64 ] ; int32_T b_ix ; real_T
b_temp ; int32_T e_k ; int32_T d_iy ; if ( obj -> usedPivoting ) { i = 1 ;
while ( ( i <= obj -> ncols ) && ( obj -> jpvt [ i - 1 ] != idx ) ) { i ++ ;
} idx = i ; } if ( idx >= obj -> ncols ) { obj -> ncols -- ; } else { obj ->
jpvt [ idx - 1 ] = obj -> jpvt [ obj -> ncols - 1 ] ; for ( i = 0 ; i < obj
-> minRowCol ; i ++ ) { obj -> QR [ i + ( ( idx - 1 ) << 3 ) ] = obj -> QR [
( ( obj -> ncols - 1 ) << 3 ) + i ] ; } obj -> ncols -- ; obj -> minRowCol =
muIntScalarMin_sint32 ( obj -> mrows , obj -> ncols ) ; if ( idx < obj ->
mrows ) { d_iy = obj -> mrows - 1 ; i = muIntScalarMin_sint32 ( d_iy , obj ->
ncols ) ; for ( k = i ; k >= idx ; k -- ) { b_temp = obj -> QR [ ( ( ( idx -
1 ) << 3 ) + k ) - 1 ] ; e = obj -> QR [ ( ( idx - 1 ) << 3 ) + k ] ;
bmlfodpuvl ( & b_temp , & e , & c_c , & b_s ) ; obj -> QR [ ( k + ( ( idx - 1
) << 3 ) ) - 1 ] = b_temp ; obj -> QR [ k + ( ( idx - 1 ) << 3 ) ] = e ; obj
-> QR [ k + ( ( k - 1 ) << 3 ) ] = 0.0 ; QRk0 = ( idx << 3 ) + k ; d_iy = obj
-> ncols - idx ; memcpy ( & x [ 0 ] , & obj -> QR [ 0 ] , sizeof ( real_T )
<< 6U ) ; if ( d_iy >= 1 ) { b_ix = QRk0 - 1 ; for ( e_k = 0 ; e_k < d_iy ;
e_k ++ ) { b_temp = c_c * x [ b_ix ] + b_s * x [ QRk0 ] ; x [ QRk0 ] = c_c *
x [ QRk0 ] - b_s * x [ b_ix ] ; x [ b_ix ] = b_temp ; QRk0 += 8 ; b_ix += 8 ;
} } QRk0 = ( k - 1 ) << 3 ; for ( d_iy = 0 ; d_iy < 64 ; d_iy ++ ) { obj ->
QR [ d_iy ] = x [ d_iy ] ; x [ d_iy ] = obj -> Q [ d_iy ] ; } if ( obj ->
mrows >= 1 ) { d_iy = QRk0 + 8 ; for ( b_ix = 0 ; b_ix < obj -> mrows ; b_ix
++ ) { b_temp = c_c * x [ QRk0 ] + b_s * x [ d_iy ] ; x [ d_iy ] = c_c * x [
d_iy ] - b_s * x [ QRk0 ] ; x [ QRk0 ] = b_temp ; d_iy ++ ; QRk0 ++ ; } }
memcpy ( & obj -> Q [ 0 ] , & x [ 0 ] , sizeof ( real_T ) << 6U ) ; } for ( k
= idx ; k < i ; k ++ ) { b_temp = obj -> QR [ ( k << 3 ) + k ] ; e = obj ->
QR [ ( ( k << 3 ) + k ) + 1 ] ; bmlfodpuvl ( & b_temp , & e , & c_c , & b_s )
; obj -> QR [ k + ( k << 3 ) ] = b_temp ; obj -> QR [ ( k + ( k << 3 ) ) + 1
] = e ; QRk0 = ( k + 1 ) * 9 ; d_iy = ( obj -> ncols - k ) - 2 ; memcpy ( & x
[ 0 ] , & obj -> QR [ 0 ] , sizeof ( real_T ) << 6U ) ; if ( d_iy + 1 >= 1 )
{ b_ix = QRk0 - 1 ; for ( e_k = 0 ; e_k <= d_iy ; e_k ++ ) { b_temp = c_c * x
[ b_ix ] + b_s * x [ QRk0 ] ; x [ QRk0 ] = c_c * x [ QRk0 ] - b_s * x [ b_ix
] ; x [ b_ix ] = b_temp ; QRk0 += 8 ; b_ix += 8 ; } } QRk0 = k << 3 ; for (
d_iy = 0 ; d_iy < 64 ; d_iy ++ ) { obj -> QR [ d_iy ] = x [ d_iy ] ; x [ d_iy
] = obj -> Q [ d_iy ] ; } if ( obj -> mrows >= 1 ) { d_iy = QRk0 + 8 ; for (
b_ix = 0 ; b_ix < obj -> mrows ; b_ix ++ ) { b_temp = c_c * x [ QRk0 ] + b_s
* x [ d_iy ] ; x [ d_iy ] = c_c * x [ d_iy ] - b_s * x [ QRk0 ] ; x [ QRk0 ]
= b_temp ; d_iy ++ ; QRk0 ++ ; } } memcpy ( & obj -> Q [ 0 ] , & x [ 0 ] ,
sizeof ( real_T ) << 6U ) ; } } } } static int32_T dubp3qoihz ( int32_T n ,
real_T A [ 64 ] ) { int32_T info ; int32_T idxA1j ; int32_T idxAjj ; real_T
ssq ; int32_T b_j ; int32_T ix ; real_T c ; int32_T iac ; int32_T d ; int32_T
ia ; int32_T b_ix ; int32_T b_iy ; int32_T b_k ; boolean_T exitg1 ; info = 0
; b_j = 0 ; exitg1 = false ; while ( ( ! exitg1 ) && ( b_j <= n - 1 ) ) {
idxA1j = b_j << 3 ; idxAjj = idxA1j + b_j ; ssq = 0.0 ; if ( b_j >= 1 ) {
b_ix = idxA1j ; b_iy = idxA1j ; for ( b_k = 0 ; b_k < b_j ; b_k ++ ) { ssq +=
A [ b_ix ] * A [ b_iy ] ; b_ix ++ ; b_iy ++ ; } } ssq = A [ idxAjj ] - ssq ;
if ( ssq > 0.0 ) { ssq = muDoubleScalarSqrt ( ssq ) ; A [ idxAjj ] = ssq ; if
( b_j + 1 < n ) { b_ix = ( n - b_j ) - 2 ; if ( ( b_j != 0 ) && ( b_ix + 1 !=
0 ) ) { b_iy = idxAjj + 8 ; b_k = ( ( b_ix << 3 ) + idxA1j ) + 9 ; for ( iac
= idxA1j + 9 ; iac <= b_k ; iac += 8 ) { ix = idxA1j ; c = 0.0 ; d = ( iac +
b_j ) - 1 ; for ( ia = iac ; ia <= d ; ia ++ ) { c += A [ ia - 1 ] * A [ ix ]
; ix ++ ; } A [ b_iy ] += - c ; b_iy += 8 ; } } ssq = 1.0 / ssq ; idxA1j = (
( b_ix << 3 ) + idxAjj ) + 9 ; for ( idxAjj += 8 ; idxAjj + 1 <= idxA1j ;
idxAjj += 8 ) { A [ idxAjj ] *= ssq ; } } b_j ++ ; } else { A [ idxAjj ] =
ssq ; info = b_j + 1 ; exitg1 = true ; } } return info ; } static void
epbifgh0rp ( csm4ifxwet * obj , const real_T A [ 25 ] , int32_T ndims ,
int32_T ldA ) { int32_T iA0 ; int32_T iUU0 ; int32_T b_idx ; int32_T k ; obj
-> ndims = ndims ; for ( b_idx = 0 ; b_idx < ndims ; b_idx ++ ) { iA0 = ldA *
b_idx ; iUU0 = b_idx << 3 ; for ( k = 1 ; k - 1 < ndims ; k ++ ) { obj ->
FMat [ ( iUU0 + k ) - 1 ] = A [ ( iA0 + k ) - 1 ] ; } } obj -> info =
dubp3qoihz ( ndims , obj -> FMat ) ; } static void etqop2wnx13t ( int32_T m ,
int32_T n , int32_T k , const real_T A [ 25 ] , int32_T lda , const real_T
B_i [ 64 ] , int32_T ib0 , real_T C [ 64 ] ) { int32_T br ; int32_T ar ;
int32_T ia ; int32_T b_cr ; int32_T c ; int32_T ib ; int32_T d ; int32_T b_ic
; int32_T b_c ; if ( ( m != 0 ) && ( n != 0 ) ) { b_c = ( n - 1 ) << 3 ; for
( br = 0 ; br <= b_c ; br += 8 ) { b_cr = br + m ; for ( ar = br ; ar < b_cr
; ar ++ ) { C [ ar ] = 0.0 ; } } br = ib0 ; for ( b_cr = 0 ; b_cr <= b_c ;
b_cr += 8 ) { ar = - 1 ; c = br + k ; for ( ib = br ; ib < c ; ib ++ ) { ia =
ar ; d = b_cr + m ; for ( b_ic = b_cr ; b_ic < d ; b_ic ++ ) { ia ++ ; C [
b_ic ] += B_i [ ib - 1 ] * A [ ia ] ; } ar += lda ; } br += 8 ; } } } static
void etqop2wnx13tt ( int32_T m , int32_T n , int32_T k , const real_T A [ 64
] , int32_T ia0 , const real_T B_e [ 64 ] , real_T C [ 64 ] ) { int32_T br ;
int32_T ar ; real_T temp ; int32_T b_cr ; int32_T c ; int32_T b_ic ; int32_T
w ; int32_T b_c ; if ( ( m != 0 ) && ( n != 0 ) ) { b_c = ( n - 1 ) << 3 ;
for ( br = 0 ; br <= b_c ; br += 8 ) { b_cr = br + m ; for ( ar = br ; ar <
b_cr ; ar ++ ) { C [ ar ] = 0.0 ; } } br = - 1 ; for ( b_cr = 0 ; b_cr <= b_c
; b_cr += 8 ) { ar = ia0 ; c = b_cr + m ; for ( b_ic = b_cr ; b_ic < c ; b_ic
++ ) { temp = 0.0 ; for ( w = 1 ; w - 1 < k ; w ++ ) { temp += A [ ( w + ar )
- 2 ] * B_e [ w + br ] ; } C [ b_ic ] += temp ; ar += 8 ; } br += 8 ; } } }
static void gkc2xbh5rp ( real_T beta , const real_T H [ 25 ] , int32_T
nVarOrig , csm4ifxwet * cholmanager , const dzrlw5sxs5 * qrmanager ,
ktaxowovvf * memspace ) { int32_T mNull ; int32_T nullStart ; int32_T
b_idx_col ; int32_T idx_row ; mNull = qrmanager -> mrows - qrmanager -> ncols
; nullStart = ( qrmanager -> ncols << 3 ) + 1 ; etqop2wnx13t ( nVarOrig ,
mNull , nVarOrig , H , nVarOrig , qrmanager -> Q , nullStart , memspace ->
workspace_double ) ; for ( b_idx_col = 0 ; b_idx_col < mNull ; b_idx_col ++ )
{ for ( idx_row = nVarOrig ; idx_row < qrmanager -> mrows ; idx_row ++ ) {
memspace -> workspace_double [ idx_row + ( b_idx_col << 3 ) ] = qrmanager ->
Q [ ( ( b_idx_col + qrmanager -> ncols ) << 3 ) + idx_row ] * beta ; } }
etqop2wnx13tt ( mNull , mNull , qrmanager -> mrows , qrmanager -> Q ,
nullStart , memspace -> workspace_double , cholmanager -> FMat ) ; } static
void b5okzx3i0u ( const real_T H [ 25 ] , csm4ifxwet * cholmanager , const
dzrlw5sxs5 * qrmanager , ktaxowovvf * memspace ) { int32_T mNull ; int32_T
nullStart ; mNull = qrmanager -> mrows - qrmanager -> ncols ; nullStart = (
qrmanager -> ncols << 3 ) + 1 ; etqop2wnx13t ( qrmanager -> mrows , mNull ,
qrmanager -> mrows , H , qrmanager -> mrows , qrmanager -> Q , nullStart ,
memspace -> workspace_double ) ; etqop2wnx13tt ( mNull , mNull , qrmanager ->
mrows , qrmanager -> Q , nullStart , memspace -> workspace_double ,
cholmanager -> FMat ) ; } static void pdvqihnymv ( const csm4ifxwet * obj ,
real_T rhs [ 8 ] ) { real_T temp ; int32_T b_j ; int32_T jjA ; int32_T ix ;
int32_T c ; if ( obj -> ndims != 0 ) { for ( b_j = 0 ; b_j < obj -> ndims ;
b_j ++ ) { c = b_j << 3 ; temp = rhs [ b_j ] ; for ( ix = 0 ; ix < b_j ; ix
++ ) { temp -= obj -> FMat [ c + ix ] * rhs [ ix ] ; } rhs [ b_j ] = temp /
obj -> FMat [ c + b_j ] ; } for ( b_j = obj -> ndims - 1 ; b_j + 1 > 0 ; b_j
-- ) { jjA = ( b_j << 3 ) + b_j ; rhs [ b_j ] /= obj -> FMat [ jjA ] ; for (
c = 1 ; c - 1 < b_j ; c ++ ) { ix = b_j - c ; rhs [ ix ] -= obj -> FMat [ jjA
- c ] * rhs [ b_j ] ; } } } } static void dh11bh5mye ( int32_T n , real_T a ,
real_T x [ 8 ] , int32_T ix0 ) { int32_T b ; int32_T k ; b = ( ix0 + n ) - 1
; for ( k = ix0 ; k <= b ; k ++ ) { x [ k - 1 ] *= a ; } } static void
epbifgh0rpe ( csm4ifxwet * obj , int32_T ndims ) { obj -> ndims = ndims ; obj
-> info = dubp3qoihz ( ndims , obj -> FMat ) ; } static void km30jyym3bu3p (
int32_T m , int32_T n , const real_T A [ 64 ] , int32_T ia0 , const real_T x
[ 64 ] , real_T y [ 8 ] ) { int32_T iy ; int32_T ix ; int32_T b ; int32_T iac
; int32_T c ; int32_T ia ; if ( m != 0 ) { for ( ix = 0 ; ix < m ; ix ++ ) {
y [ ix ] = 0.0 ; } ix = 0 ; b = ( ( n - 1 ) << 3 ) + ia0 ; for ( iac = ia0 ;
iac <= b ; iac += 8 ) { iy = 0 ; c = ( iac + m ) - 1 ; for ( ia = iac ; ia <=
c ; ia ++ ) { y [ iy ] += A [ ia - 1 ] * x [ ix ] ; iy ++ ; } ix ++ ; } } }
static void km30jyym3bu3pp ( int32_T m , int32_T n , const real_T A [ 64 ] ,
int32_T ia0 , const real_T x [ 8 ] , real_T y [ 64 ] ) { int32_T ix ; real_T
c ; int32_T b_iy ; int32_T b ; int32_T iac ; int32_T d ; int32_T ia ; if ( m
!= 0 ) { for ( b_iy = 0 ; b_iy < n ; b_iy ++ ) { y [ b_iy ] = 0.0 ; } b_iy =
0 ; b = ( ( n - 1 ) << 3 ) + ia0 ; for ( iac = ia0 ; iac <= b ; iac += 8 ) {
ix = 0 ; c = 0.0 ; d = ( iac + m ) - 1 ; for ( ia = iac ; ia <= d ; ia ++ ) {
c += A [ ia - 1 ] * x [ ix ] ; ix ++ ; } y [ b_iy ] += - c ; b_iy ++ ; } } }
static void pdvqihnymve ( const csm4ifxwet * obj , real_T rhs [ 64 ] ) {
real_T temp ; int32_T b_j ; int32_T b_i ; int32_T c ; for ( b_j = 0 ; b_j <
obj -> ndims ; b_j ++ ) { c = b_j << 3 ; temp = rhs [ b_j ] ; for ( b_i = 0 ;
b_i < b_j ; b_i ++ ) { temp -= obj -> FMat [ c + b_i ] * rhs [ b_i ] ; } rhs
[ b_j ] = temp / obj -> FMat [ c + b_j ] ; } bvondj0iig ( obj -> ndims , obj
-> FMat , rhs ) ; } static void mf4pifqcej ( const real_T H [ 25 ] ,
fovverijux * solution , ktaxowovvf * memspace , const dzrlw5sxs5 * qrmanager
, csm4ifxwet * cholmanager , const k0ratk1n10 * objective ) { int32_T nVar ;
int32_T mNull ; int32_T nullStartIdx ; real_T c [ 64 ] ; int32_T d_idx ; nVar
= qrmanager -> mrows - 1 ; mNull = qrmanager -> mrows - qrmanager -> ncols ;
if ( mNull <= 0 ) { for ( mNull = 0 ; mNull <= nVar ; mNull ++ ) { solution
-> searchDir [ mNull ] = 0.0 ; } } else { for ( nullStartIdx = 0 ;
nullStartIdx <= nVar ; nullStartIdx ++ ) { solution -> searchDir [
nullStartIdx ] = - objective -> grad [ nullStartIdx ] ; } if ( qrmanager ->
ncols <= 0 ) { switch ( objective -> objtype ) { case 5 : break ; case 3 :
epbifgh0rp ( cholmanager , H , qrmanager -> mrows , qrmanager -> mrows ) ; if
( cholmanager -> info != 0 ) { solution -> state = - 6 ; } else { pdvqihnymv
( cholmanager , solution -> searchDir ) ; } break ; case 4 : epbifgh0rp (
cholmanager , H , objective -> nvar , objective -> nvar ) ; if ( cholmanager
-> info != 0 ) { solution -> state = - 6 ; } else { pdvqihnymv ( cholmanager
, solution -> searchDir ) ; dh11bh5mye ( qrmanager -> mrows - objective ->
nvar , 1.0 / objective -> beta , solution -> searchDir , objective -> nvar +
1 ) ; } break ; } } else { nullStartIdx = ( qrmanager -> ncols << 3 ) + 1 ;
if ( objective -> objtype == 5 ) { for ( d_idx = 0 ; d_idx < mNull ; d_idx ++
) { memspace -> workspace_double [ d_idx ] = - qrmanager -> Q [ ( ( qrmanager
-> ncols + d_idx ) << 3 ) + nVar ] ; } km30jyym3bu3p ( qrmanager -> mrows ,
mNull , qrmanager -> Q , nullStartIdx , memspace -> workspace_double ,
solution -> searchDir ) ; } else { if ( objective -> objtype == 3 ) {
b5okzx3i0u ( H , cholmanager , qrmanager , memspace ) ; } else { gkc2xbh5rp (
objective -> beta , H , objective -> nvar , cholmanager , qrmanager ,
memspace ) ; } epbifgh0rpe ( cholmanager , mNull ) ; if ( cholmanager -> info
!= 0 ) { solution -> state = - 6 ; } else { km30jyym3bu3pp ( qrmanager ->
mrows , mNull , qrmanager -> Q , nullStartIdx , objective -> grad , memspace
-> workspace_double ) ; memcpy ( & c [ 0 ] , & memspace -> workspace_double [
0 ] , sizeof ( real_T ) << 6U ) ; pdvqihnymve ( cholmanager , c ) ; memcpy (
& memspace -> workspace_double [ 0 ] , & c [ 0 ] , sizeof ( real_T ) << 6U )
; km30jyym3bu3p ( qrmanager -> mrows , mNull , qrmanager -> Q , nullStartIdx
, c , solution -> searchDir ) ; } } } } } static real_T i5uu0zdww5x ( int32_T
n , const real_T x [ 8 ] ) { real_T y ; real_T scale ; real_T absxk ; real_T
t ; int32_T k ; y = 0.0 ; if ( n >= 1 ) { if ( n == 1 ) { y =
muDoubleScalarAbs ( x [ 0 ] ) ; } else { scale = 3.3121686421112381E-170 ;
for ( k = 0 ; k < n ; k ++ ) { absxk = muDoubleScalarAbs ( x [ k ] ) ; if (
absxk > scale ) { t = scale / absxk ; y = y * t * t + 1.0 ; scale = absxk ; }
else { t = absxk / scale ; y += t * t ; } } y = scale * muDoubleScalarSqrt (
y ) ; } } return y ; } static void c4iphnhfy4 ( const real_T solution_xstar [
8 ] , const real_T solution_searchDir [ 8 ] , int32_T workingset_nVar , const
real_T workingset_lb [ 8 ] , const int32_T workingset_indexLB [ 8 ] , const
int32_T workingset_sizes [ 5 ] , const boolean_T workingset_isActiveConstr [
4 ] , const int32_T workingset_nWConstr [ 5 ] , boolean_T isPhaseOne , real_T
* alpha , boolean_T * newBlocking , int32_T * constrType , int32_T *
constrIdx ) { real_T denomTol ; real_T phaseOneCorrectionX ; real_T
phaseOneCorrectionP ; real_T pk_corrected ; real_T ratio ; int32_T b_idx ; *
alpha = 1.0E+30 ; * newBlocking = false ; * constrType = 0 ; * constrIdx = 0
; denomTol = 2.2204460492503131E-13 * i5uu0zdww5x ( workingset_nVar ,
solution_searchDir ) ; if ( workingset_nWConstr [ 3 ] < workingset_sizes [ 3
] ) { phaseOneCorrectionX = solution_xstar [ workingset_nVar - 1 ] * ( real_T
) isPhaseOne ; phaseOneCorrectionP = solution_searchDir [ workingset_nVar - 1
] * ( real_T ) isPhaseOne ; for ( b_idx = 0 ; b_idx <= workingset_sizes [ 3 ]
- 2 ; b_idx ++ ) { pk_corrected = - solution_searchDir [ workingset_indexLB [
b_idx ] - 1 ] - phaseOneCorrectionP ; if ( ( pk_corrected > denomTol ) && ( !
workingset_isActiveConstr [ b_idx + 1 ] ) ) { ratio = ( - solution_xstar [
workingset_indexLB [ b_idx ] - 1 ] - workingset_lb [ workingset_indexLB [
b_idx ] - 1 ] ) - phaseOneCorrectionX ; ratio = muDoubleScalarMin (
muDoubleScalarAbs ( ratio ) , 1.0E-6 - ratio ) / pk_corrected ; if ( ratio <
* alpha ) { * alpha = ratio ; * constrType = 4 ; * constrIdx = b_idx + 1 ; *
newBlocking = true ; } } } if ( ( - solution_searchDir [ workingset_indexLB [
workingset_sizes [ 3 ] - 1 ] - 1 ] > denomTol ) && ( !
workingset_isActiveConstr [ workingset_sizes [ 3 ] ] ) ) { ratio = -
solution_xstar [ workingset_indexLB [ workingset_sizes [ 3 ] - 1 ] - 1 ] -
workingset_lb [ workingset_indexLB [ workingset_sizes [ 3 ] - 1 ] - 1 ] ;
ratio = muDoubleScalarMin ( muDoubleScalarAbs ( ratio ) , 1.0E-6 - ratio ) /
- solution_searchDir [ workingset_indexLB [ workingset_sizes [ 3 ] - 1 ] - 1
] ; if ( ratio < * alpha ) { * alpha = ratio ; * constrType = 4 ; * constrIdx
= workingset_sizes [ 3 ] ; * newBlocking = true ; } } } if ( ! isPhaseOne ) {
* newBlocking = ( ( ( ! * newBlocking ) || ( ! ( * alpha > 1.0 ) ) ) && ( *
newBlocking ) ) ; * alpha = muDoubleScalarMin ( * alpha , 1.0 ) ; } } static
void ip4jnzjwt1 ( real_T workspace [ 64 ] , fovverijux * solution , const
k0ratk1n10 * objective , const dzrlw5sxs5 * qrmanager ) { real_T tol ;
boolean_T nonDegenerate ; int32_T c_idx ; boolean_T guard1 = false ; if (
qrmanager -> ncols > 0 ) { tol = 100.0 * ( real_T ) qrmanager -> mrows *
2.2204460492503131E-16 ; nonDegenerate = ( ( qrmanager -> mrows > 0 ) && (
qrmanager -> ncols > 0 ) ) ; if ( nonDegenerate ) { c_idx = qrmanager ->
ncols ; guard1 = false ; if ( qrmanager -> mrows < qrmanager -> ncols ) {
while ( ( c_idx > qrmanager -> mrows ) && ( muDoubleScalarAbs ( qrmanager ->
QR [ ( ( ( c_idx - 1 ) << 3 ) + qrmanager -> mrows ) - 1 ] ) >= tol ) ) {
c_idx -- ; } nonDegenerate = ( c_idx == qrmanager -> mrows ) ; if ( !
nonDegenerate ) { } else { guard1 = true ; } } else { guard1 = true ; } if (
guard1 ) { while ( ( c_idx >= 1 ) && ( muDoubleScalarAbs ( qrmanager -> QR [
( ( ( c_idx - 1 ) << 3 ) + c_idx ) - 1 ] ) >= tol ) ) { c_idx -- ; }
nonDegenerate = ( c_idx == 0 ) ; } } if ( ! nonDegenerate ) { solution ->
state = - 7 ; } else { km30jyym3b ( qrmanager -> mrows , qrmanager -> ncols ,
qrmanager -> Q , objective -> grad , workspace ) ; bvondj0iig ( qrmanager ->
ncols , qrmanager -> QR , workspace ) ; for ( c_idx = 0 ; c_idx < qrmanager
-> ncols ; c_idx ++ ) { solution -> lambda [ c_idx ] = - workspace [ c_idx ]
; } } } } static void kghpdwcp3a ( fovverijux * solution , const k0ratk1n10 *
objective ) { if ( objective -> objtype == 5 ) { if ( i5uu0zdww5x ( objective
-> nvar , solution -> searchDir ) > 100.0 * ( real_T ) objective -> nvar *
1.4901161193847656E-8 ) { solution -> state = 3 ; } else { solution -> state
= 4 ; } } } static int32_T g3uxyaaiyq ( const real_T solution_lambda [ 4 ] ,
int32_T workingset_nActiveConstr , const int32_T workingset_nWConstr [ 5 ] )
{ int32_T idxMinLambda ; real_T minLambda ; int32_T idx ; idxMinLambda = 0 ;
minLambda = 0.0 ; for ( idx = workingset_nWConstr [ 0 ] + workingset_nWConstr
[ 1 ] ; idx < workingset_nActiveConstr ; idx ++ ) { if ( solution_lambda [
idx ] < minLambda ) { minLambda = solution_lambda [ idx ] ; idxMinLambda =
idx + 1 ; } } return idxMinLambda ; } static void pvj1vfm0bg ( kdxyjsixti *
obj , int32_T TYPE , int32_T idx_local ) { int32_T idx_global ; int32_T
idx_bnd_local ; int32_T idx ; obj -> nWConstr [ TYPE - 1 ] ++ ; obj ->
isActiveConstr [ ( obj -> isActiveIdx [ TYPE - 1 ] + idx_local ) - 2 ] = true
; obj -> nActiveConstr ++ ; obj -> Wid [ obj -> nActiveConstr - 1 ] = TYPE ;
obj -> Wlocalidx [ obj -> nActiveConstr - 1 ] = idx_local ; idx_global = obj
-> nActiveConstr - 1 ; if ( TYPE == 5 ) { idx_bnd_local = 0 ; obj -> bwset [
obj -> nActiveConstr - 1 ] = obj -> ub [ - 1 ] ; } else { idx_bnd_local = obj
-> indexLB [ idx_local - 1 ] ; obj -> bwset [ obj -> nActiveConstr - 1 ] =
obj -> lb [ obj -> indexLB [ idx_local - 1 ] - 1 ] ; } for ( idx = 0 ; idx <=
idx_bnd_local - 2 ; idx ++ ) { obj -> ATwset [ idx + ( idx_global << 3 ) ] =
0.0 ; } obj -> ATwset [ ( idx_bnd_local + ( ( obj -> nActiveConstr - 1 ) << 3
) ) - 1 ] = ( real_T ) ( TYPE == 5 ) * 2.0 - 1.0 ; while ( idx_bnd_local + 1
<= obj -> nVar ) { obj -> ATwset [ idx_bnd_local + ( idx_global << 3 ) ] =
0.0 ; idx_bnd_local ++ ; } switch ( obj -> probType ) { case 3 : case 2 :
break ; default : obj -> ATwset [ ( obj -> nVar + ( ( obj -> nActiveConstr -
1 ) << 3 ) ) - 1 ] = - 1.0 ; break ; } } static void o0lbuz5j1t ( kdxyjsixti
* obj , int32_T idx_local ) { obj -> nWConstr [ 2 ] ++ ; obj ->
isActiveConstr [ ( obj -> isActiveIdx [ 2 ] + idx_local ) - 2 ] = true ; obj
-> nActiveConstr ++ ; obj -> Wid [ obj -> nActiveConstr - 1 ] = 3 ; obj ->
Wlocalidx [ obj -> nActiveConstr - 1 ] = idx_local ; } static void h4s4ua3bej
( int32_T n , real_T a , const real_T x [ 8 ] , real_T y [ 8 ] ) { int32_T k
; if ( ( n >= 1 ) && ( ! ( a == 0.0 ) ) ) { for ( k = 0 ; k < n ; k ++ ) { y
[ k ] += a * x [ k ] ; } } } static int32_T p1n0fcaquz ( int32_T x ) { return
x - x / 50 * 50 ; } static void pc5idulzra ( int32_T * activeSetChangeID ,
const real_T f [ 8 ] , fovverijux * solution , ktaxowovvf * memspace , const
k0ratk1n10 * objective , kdxyjsixti * workingset , dzrlw5sxs5 * qrmanager ,
real_T options_ObjectiveLimit , int32_T runTimeOptions_MaxIterations ,
boolean_T updateFval ) { real_T b ; real_T d [ 8 ] ; boolean_T
nonDegenerateWset ; real_T constrViolation_new ; int32_T b_idx ; solution ->
iterations ++ ; if ( ( solution -> iterations >= runTimeOptions_MaxIterations
) && ( ( solution -> state != 1 ) || ( objective -> objtype == 5 ) ) ) {
solution -> state = 0 ; } if ( p1n0fcaquz ( solution -> iterations ) == 0 ) {
b = btjgrinqe0p ( workingset , solution -> xstar ) ; solution -> maxConstr =
b ; if ( b > 1.0E-6 ) { ocj0pd5c5jy21 ( objective -> nvar , solution -> xstar
, solution -> searchDir ) ; memcpy ( & d [ 0 ] , & solution -> searchDir [ 0
] , sizeof ( real_T ) << 3U ) ; nonDegenerateWset = fetubx0squ ( memspace ->
workspace_double , d , workingset , qrmanager ) ; memcpy ( & solution ->
searchDir [ 0 ] , & d [ 0 ] , sizeof ( real_T ) << 3U ) ; if ( ( !
nonDegenerateWset ) && ( solution -> state != 0 ) ) { solution -> state = - 2
; } * activeSetChangeID = 0 ; constrViolation_new = btjgrinqe0p ( workingset
, d ) ; if ( constrViolation_new < b ) { for ( b_idx = 0 ; b_idx < objective
-> nvar ; b_idx ++ ) { solution -> xstar [ b_idx ] = d [ b_idx ] ; } solution
-> maxConstr = constrViolation_new ; } } } if ( ( options_ObjectiveLimit > (
rtMinusInf ) ) && updateFval ) { b = neflgzisgi ( objective , memspace ->
workspace_double , f , solution -> xstar ) ; solution -> fstar = b ; if ( ( b
< options_ObjectiveLimit ) && ( ( solution -> state != 0 ) || ( objective ->
objtype != 5 ) ) ) { solution -> state = 2 ; } } } static void h2zqqbaphd (
const real_T H [ 25 ] , const real_T f [ 8 ] , fovverijux * solution ,
ktaxowovvf * memspace , kdxyjsixti * workingset , dzrlw5sxs5 * qrmanager ,
csm4ifxwet * cholmanager , k0ratk1n10 * objective , real_T
options_StepTolerance , real_T options_ObjectiveLimit , int32_T
runTimeOptions_MaxIterations ) { boolean_T subProblemChanged ; boolean_T
updateFval ; int32_T activeSetChangeID ; int32_T nVar ; int32_T
globalActiveConstrIdx ; real_T normDelta ; int32_T idxMinLambda ; int32_T
TYPE ; int32_T idx_local ; int32_T exitg1 ; boolean_T guard1 = false ;
subProblemChanged = true ; updateFval = true ; activeSetChangeID = 0 ; TYPE =
objective -> objtype ; nVar = workingset -> nVar ; globalActiveConstrIdx = 0
; oqrt5rwtlj ( objective , H , f , solution -> xstar ) ; solution -> fstar =
neflgzisgi ( objective , memspace -> workspace_double , f , solution -> xstar
) ; if ( solution -> iterations < runTimeOptions_MaxIterations ) { solution
-> state = - 5 ; } else { solution -> state = 0 ; } ocj0pd5c5jy ( 4 ,
solution -> lambda ) ; do { exitg1 = 0 ; if ( solution -> state == - 5 ) {
guard1 = false ; if ( subProblemChanged ) { switch ( activeSetChangeID ) {
case 1 : lzz4urlwyc ( qrmanager , workingset -> ATwset , ( ( workingset ->
nActiveConstr - 1 ) << 3 ) + 1 ) ; break ; case - 1 : jbdwtzuxva ( qrmanager
, globalActiveConstrIdx ) ; break ; default : dtrv2kriti4 ( qrmanager ,
workingset -> ATwset , nVar , workingset -> nActiveConstr ) ; n2v2qif1yv (
qrmanager , qrmanager -> mrows ) ; break ; } mf4pifqcej ( H , solution ,
memspace , qrmanager , cholmanager , objective ) ; if ( solution -> state !=
- 5 ) { exitg1 = 1 ; } else { normDelta = i5uu0zdww5x ( nVar , solution ->
searchDir ) ; guard1 = true ; } } else { ocj0pd5c5jy21a ( nVar , solution ->
searchDir ) ; normDelta = 0.0 ; guard1 = true ; } if ( guard1 ) { if ( ( !
subProblemChanged ) || ( normDelta < options_StepTolerance ) || ( workingset
-> nActiveConstr >= nVar ) ) { ip4jnzjwt1 ( memspace -> workspace_double ,
solution , objective , qrmanager ) ; if ( solution -> state != - 7 ) {
idxMinLambda = g3uxyaaiyq ( solution -> lambda , workingset -> nActiveConstr
, workingset -> nWConstr ) ; if ( idxMinLambda == 0 ) { solution -> state = 1
; } else { activeSetChangeID = - 1 ; globalActiveConstrIdx = idxMinLambda ;
subProblemChanged = true ; hc3wqesyj2 ( workingset , idxMinLambda ) ;
solution -> lambda [ idxMinLambda - 1 ] = 0.0 ; } } else { idxMinLambda =
workingset -> nActiveConstr ; activeSetChangeID = 0 ; globalActiveConstrIdx =
workingset -> nActiveConstr ; subProblemChanged = true ; hc3wqesyj2 (
workingset , workingset -> nActiveConstr ) ; solution -> lambda [
idxMinLambda - 1 ] = 0.0 ; } updateFval = false ; } else { c4iphnhfy4 (
solution -> xstar , solution -> searchDir , workingset -> nVar , workingset
-> lb , workingset -> indexLB , workingset -> sizes , workingset ->
isActiveConstr , workingset -> nWConstr , TYPE == 5 , & normDelta , &
updateFval , & idxMinLambda , & idx_local ) ; if ( updateFval ) { switch (
idxMinLambda ) { case 3 : o0lbuz5j1t ( workingset , idx_local ) ; break ;
case 4 : pvj1vfm0bg ( workingset , 4 , idx_local ) ; break ; default :
pvj1vfm0bg ( workingset , 5 , idx_local ) ; break ; } activeSetChangeID = 1 ;
} else { kghpdwcp3a ( solution , objective ) ; subProblemChanged = false ; if
( workingset -> nActiveConstr == 0 ) { solution -> state = 1 ; } } h4s4ua3bej
( nVar , normDelta , solution -> searchDir , solution -> xstar ) ; oqrt5rwtlj
( objective , H , f , solution -> xstar ) ; updateFval = true ; } pc5idulzra
( & activeSetChangeID , f , solution , memspace , objective , workingset ,
qrmanager , options_ObjectiveLimit , runTimeOptions_MaxIterations ,
updateFval ) ; } } else { if ( ! updateFval ) { solution -> fstar =
neflgzisgi ( objective , memspace -> workspace_double , f , solution -> xstar
) ; } exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } static void cya242k2pr (
k0ratk1n10 * obj ) { obj -> objtype = obj -> prev_objtype ; obj -> nvar = obj
-> prev_nvar ; obj -> hasLinear = obj -> prev_hasLinear ; } static void
cw0wmlqckk ( const real_T H [ 25 ] , const real_T f [ 8 ] , fovverijux *
solution , ktaxowovvf * memspace , kdxyjsixti * workingset , dzrlw5sxs5 *
qrmanager , csm4ifxwet * cholmanager , k0ratk1n10 * objective , e2ucunpqcp *
options , const e2ucunpqcp * runTimeOptions ) { int32_T PROBTYPE_ORIG ;
int32_T nVar ; int32_T nVarP1 ; int32_T PHASEONE ; boolean_T exitg1 ;
PROBTYPE_ORIG = workingset -> probType ; nVar = workingset -> nVar ; nVarP1 =
workingset -> nVar ; solution -> xstar [ workingset -> nVar ] = solution ->
maxConstr + 1.0 ; if ( workingset -> probType == 3 ) { PHASEONE = 1 ; } else
{ PHASEONE = 4 ; } gptgkafsbe ( workingset ) ; eusryzwbaa ( workingset ,
PHASEONE ) ; keagmo2a3h ( objective , nVarP1 + 1 ) ; options ->
ObjectiveLimit = 1.0E-6 ; options -> StepTolerance = 1.4901161193847657E-10 ;
solution -> fstar = ftrayw10no ( objective , memspace -> workspace_double , H
, f , solution -> xstar ) ; solution -> state = 5 ; h2zqqbaphd ( H , f ,
solution , memspace , workingset , qrmanager , cholmanager , objective ,
options -> StepTolerance , options -> ObjectiveLimit , runTimeOptions ->
MaxIterations ) ; if ( workingset -> isActiveConstr [ workingset -> sizes [ 3
] ] ) { PHASEONE = 2 ; exitg1 = false ; while ( ( ! exitg1 ) && ( PHASEONE <=
workingset -> nActiveConstr ) ) { if ( ( workingset -> Wid [ PHASEONE - 1 ]
== 4 ) && ( workingset -> Wlocalidx [ PHASEONE - 1 ] == workingset -> sizes [
3 ] ) ) { hc3wqesyj2 ( workingset , PHASEONE ) ; exitg1 = true ; } else {
PHASEONE ++ ; } } } PHASEONE = workingset -> nActiveConstr ; while ( (
PHASEONE > 1 ) && ( PHASEONE > nVar ) ) { hc3wqesyj2 ( workingset , PHASEONE
) ; PHASEONE -- ; } solution -> maxConstr = solution -> xstar [ nVarP1 ] ;
eusryzwbaa ( workingset , PROBTYPE_ORIG ) ; cya242k2pr ( objective ) ;
options -> ObjectiveLimit = - 1.0E+20 ; options -> StepTolerance = 1.0E-6 ; }
static void g01zi3nkf0c ( const real_T H [ 25 ] , const real_T f [ 8 ] ,
fovverijux * solution , ktaxowovvf * memspace , kdxyjsixti * workingset ,
dzrlw5sxs5 * qrmanager , csm4ifxwet * cholmanager , k0ratk1n10 * objective ,
e2ucunpqcp * options , e2ucunpqcp * runTimeOptions ) { int32_T nVar ; real_T
b ; fovverijux b_solution ; solution -> iterations = 0 ; runTimeOptions ->
RemainFeasible = true ; nVar = workingset -> nVar ; gmkk0qafbs ( solution ,
workingset -> lb , workingset -> indexLB , workingset -> sizes , workingset
-> isActiveConstr ) ; g1pwp1vmyk ( solution , memspace , workingset ,
qrmanager ) ; if ( solution -> state >= 0 ) { solution -> iterations = 0 ; b
= btjgrinqe0p ( workingset , solution -> xstar ) ; solution -> maxConstr = b
; if ( b > 1.0E-6 ) { cw0wmlqckk ( H , f , solution , memspace , workingset ,
qrmanager , cholmanager , objective , options , runTimeOptions ) ; if (
solution -> state == 0 ) { } else { b = btjgrinqe0p ( workingset , solution
-> xstar ) ; solution -> maxConstr = b ; if ( b > 1.0E-6 ) { ocj0pd5c5jy ( 4
, solution -> lambda ) ; solution -> fstar = ftrayw10no ( objective ,
memspace -> workspace_double , H , f , solution -> xstar ) ; solution ->
state = - 2 ; } else { if ( b > 0.0 ) { ocj0pd5c5jy21 ( nVar , solution ->
xstar , solution -> searchDir ) ; b_solution = * solution ; g1pwp1vmyk ( &
b_solution , memspace , workingset , qrmanager ) ; * solution = b_solution ;
b = btjgrinqe0p ( workingset , b_solution . xstar ) ; if ( b >= b_solution .
maxConstr ) { solution -> maxConstr = b ; memcpy ( & solution -> xstar [ 0 ]
, & b_solution . xstar [ 0 ] , sizeof ( real_T ) << 3U ) ; ocj0pd5c5jy21 (
nVar , b_solution . searchDir , solution -> xstar ) ; } } h2zqqbaphd ( H , f
, solution , memspace , workingset , qrmanager , cholmanager , objective ,
options -> StepTolerance , options -> ObjectiveLimit , runTimeOptions ->
MaxIterations ) ; } } } else { h2zqqbaphd ( H , f , solution , memspace ,
workingset , qrmanager , cholmanager , objective , options -> StepTolerance ,
options -> ObjectiveLimit , runTimeOptions -> MaxIterations ) ; } } } static
void lbs2jnu1sz ( kdxyjsixti * obj , int32_T idx_local ) { int32_T totalEq ;
int32_T iAeq0 ; int32_T iAw0 ; int32_T b_idx ; totalEq = obj -> nWConstr [ 0
] + obj -> nWConstr [ 1 ] ; if ( ( obj -> nActiveConstr == totalEq ) && (
idx_local > obj -> nWConstr [ 1 ] ) ) { obj -> nWConstr [ 1 ] ++ ; obj ->
isActiveConstr [ ( obj -> isActiveIdx [ 1 ] + idx_local ) - 2 ] = true ; obj
-> nActiveConstr ++ ; obj -> Wid [ obj -> nActiveConstr - 1 ] = 2 ; obj ->
Wlocalidx [ obj -> nActiveConstr - 1 ] = idx_local ; iAeq0 = ( idx_local - 1
) << 3 ; iAw0 = ( obj -> nActiveConstr - 1 ) << 3 ; for ( totalEq = 1 ;
totalEq - 1 < obj -> nVar ; totalEq ++ ) { obj -> ATwset [ ( iAw0 + totalEq )
- 1 ] = obj -> Aeq [ ( iAeq0 + totalEq ) - 1 ] ; } obj -> bwset [ obj ->
nActiveConstr - 1 ] = obj -> beq ; } else { obj -> nActiveConstr ++ ; iAeq0 =
obj -> nActiveConstr - 1 ; obj -> Wid [ obj -> nActiveConstr - 1 ] = obj ->
Wid [ totalEq ] ; obj -> Wlocalidx [ iAeq0 ] = obj -> Wlocalidx [ totalEq ] ;
for ( iAw0 = 0 ; iAw0 < obj -> nVar ; iAw0 ++ ) { obj -> ATwset [ iAw0 + (
iAeq0 << 3 ) ] = obj -> ATwset [ ( totalEq << 3 ) + iAw0 ] ; } obj -> bwset [
iAeq0 ] = obj -> bwset [ totalEq ] ; obj -> nWConstr [ 1 ] ++ ; obj ->
isActiveConstr [ idx_local - 1 ] = true ; obj -> Wid [ totalEq ] = 2 ; obj ->
Wlocalidx [ totalEq ] = idx_local ; iAeq0 = ( idx_local - 1 ) << 3 ; iAw0 =
totalEq << 3 ; for ( b_idx = 1 ; b_idx - 1 < obj -> nVar ; b_idx ++ ) { obj
-> ATwset [ ( iAw0 + b_idx ) - 1 ] = obj -> Aeq [ ( iAeq0 + b_idx ) - 1 ] ; }
obj -> bwset [ totalEq ] = obj -> beq ; } } static void g44a3wny4j (
kdxyjsixti * WorkingSet , real_T TrialState_cEq ) { WorkingSet -> beq = -
TrialState_cEq ; WorkingSet -> bwset [ 0 ] = WorkingSet -> beq ; } static
boolean_T h1skejptsj ( const real_T Hessian [ 25 ] , const real_T grad [ 8 ]
, fovverijux * TrialState , ktaxowovvf * memspace , kdxyjsixti * WorkingSet ,
dzrlw5sxs5 * QRManager , csm4ifxwet * CholManager , k0ratk1n10 * QPObjective
, const e2ucunpqcp * qpoptions ) { boolean_T success ; int32_T nVar ; real_T
oldDirIdx ; kdxyjsixti b_WorkingSet ; int32_T b_i ; e2ucunpqcp qpoptions_p ;
e2ucunpqcp qpoptions_e ; nVar = WorkingSet -> nVar ; ocj0pd5c5jy21aw (
WorkingSet -> nVar , TrialState -> xstarsqp_old , TrialState -> xstarsqp ) ;
for ( b_i = 0 ; b_i < nVar ; b_i ++ ) { TrialState -> socDirection [ b_i ] =
TrialState -> xstar [ b_i ] ; } ocj0pd5c5j ( 4 , TrialState -> lambda ,
TrialState -> lambda_old ) ; b_WorkingSet = * WorkingSet ; b2smkg2r33 ( &
b_WorkingSet , TrialState -> cEq , TrialState -> searchDir ) ; ocj0pd5c5jy2 (
WorkingSet -> nVar , TrialState -> xstarsqp , TrialState -> xstar ) ;
qpoptions_p = * qpoptions ; qpoptions_e = * qpoptions ; g01zi3nkf0c ( Hessian
, grad , TrialState , memspace , & b_WorkingSet , QRManager , CholManager ,
QPObjective , & qpoptions_p , & qpoptions_e ) ; * WorkingSet = b_WorkingSet ;
while ( ( WorkingSet -> mEqRemoved > 0 ) && ( WorkingSet -> indexEqRemoved >=
1 ) ) { lbs2jnu1sz ( WorkingSet , WorkingSet -> indexEqRemoved ) ; WorkingSet
-> mEqRemoved -- ; } for ( b_i = 0 ; b_i < nVar ; b_i ++ ) { oldDirIdx =
TrialState -> socDirection [ b_i ] ; TrialState -> socDirection [ b_i ] =
TrialState -> xstar [ b_i ] - TrialState -> socDirection [ b_i ] ; TrialState
-> xstar [ b_i ] = oldDirIdx ; } success = ( i5uu0zdww5x ( nVar , TrialState
-> socDirection ) <= 2.0 * i5uu0zdww5x ( nVar , TrialState -> xstar ) ) ;
g44a3wny4j ( WorkingSet , TrialState -> cEq ) ; if ( ! success ) { ocj0pd5c5j
( 4 , TrialState -> lambda_old , TrialState -> lambda ) ; } else { exp02lfvwa
( TrialState -> lambda , WorkingSet -> nActiveConstr , WorkingSet -> sizes ,
WorkingSet -> isActiveIdx , WorkingSet -> Wid , WorkingSet -> Wlocalidx ,
memspace -> workspace_double ) ; } return success ; } static void he0bczuci1
( kthfgfhdov * obj , real_T fval , real_T eq_workspace , int32_T sqpiter ,
real_T qpval ) { real_T penaltyParamTrial ; real_T constrViolationEq ; real_T
linearizedConstrViolPrev ; penaltyParamTrial = obj -> penaltyParam ;
constrViolationEq = muDoubleScalarAbs ( eq_workspace ) ;
linearizedConstrViolPrev = obj -> linearizedConstrViol ; obj ->
linearizedConstrViol = 0.0 ; linearizedConstrViolPrev += constrViolationEq ;
if ( ( linearizedConstrViolPrev > 2.2204460492503131E-16 ) && ( qpval > 0.0 )
) { if ( fval == 0.0 ) { penaltyParamTrial = 1.0 ; } else { penaltyParamTrial
= 1.5 ; } penaltyParamTrial = penaltyParamTrial * qpval /
linearizedConstrViolPrev ; } if ( penaltyParamTrial < obj -> penaltyParam ) {
obj -> phi = penaltyParamTrial * constrViolationEq + fval ; if ( (
penaltyParamTrial * obj -> initConstrViolationEq + obj -> initFval ) - obj ->
phi > ( real_T ) obj -> nPenaltyDecreases * obj -> threshold ) { obj ->
nPenaltyDecreases ++ ; if ( ( obj -> nPenaltyDecreases << 1 ) > sqpiter ) {
obj -> threshold *= 10.0 ; } obj -> penaltyParam = muDoubleScalarMax (
penaltyParamTrial , 1.0E-10 ) ; } else { obj -> phi = obj -> penaltyParam *
constrViolationEq + fval ; } } else { obj -> penaltyParam = muDoubleScalarMax
( penaltyParamTrial , 1.0E-10 ) ; obj -> phi = muDoubleScalarMax (
penaltyParamTrial , 1.0E-10 ) * constrViolationEq + fval ; } obj ->
phiPrimePlus = muDoubleScalarMin ( qpval - obj -> penaltyParam *
constrViolationEq , 0.0 ) ; } static void kqwfgy4qbs ( const real_T Hessian [
25 ] , const real_T grad [ 8 ] , fovverijux * TrialState , kthfgfhdov *
MeritFunction , ktaxowovvf * memspace , kdxyjsixti * WorkingSet , dzrlw5sxs5
* QRManager , csm4ifxwet * CholManager , k0ratk1n10 * QPObjective , const
e2ucunpqcp * qpoptions ) { boolean_T nonlinEqRemoved ; e2ucunpqcp qpoptions_p
; e2ucunpqcp qpoptions_e ; qpoptions_p = * qpoptions ; qpoptions_e = *
qpoptions ; g01zi3nkf0c ( Hessian , grad , TrialState , memspace , WorkingSet
, QRManager , CholManager , QPObjective , & qpoptions_p , & qpoptions_e ) ;
if ( TrialState -> state > 0 ) { he0bczuci1 ( MeritFunction , TrialState ->
sqpFval , TrialState -> cEq , TrialState -> sqpIterations , TrialState ->
fstar ) ; } exp02lfvwa ( TrialState -> lambda , WorkingSet -> nActiveConstr ,
WorkingSet -> sizes , WorkingSet -> isActiveIdx , WorkingSet -> Wid ,
WorkingSet -> Wlocalidx , memspace -> workspace_double ) ; nonlinEqRemoved =
( WorkingSet -> mEqRemoved > 0 ) ; while ( ( WorkingSet -> mEqRemoved > 0 )
&& ( WorkingSet -> indexEqRemoved >= 1 ) ) { lbs2jnu1sz ( WorkingSet ,
WorkingSet -> indexEqRemoved ) ; WorkingSet -> mEqRemoved -- ; } if (
nonlinEqRemoved ) { WorkingSet -> Wlocalidx [ 0 ] = 1 ; } } static void
dabs5zh1br ( k0ratk1n10 * obj , int32_T numQuadVars , real_T beta , real_T
rho ) { obj -> hasLinear = true ; obj -> nvar = numQuadVars ; obj -> objtype
= 4 ; obj -> beta = beta ; obj -> rho = rho ; } static void izkrqq3suf (
int32_T nVarOrig , kdxyjsixti * WorkingSet , fovverijux * TrialState ,
ktaxowovvf * memspace ) { int32_T mLBOrig ; int32_T ix ; real_T c ; int32_T
ia ; mLBOrig = WorkingSet -> sizes [ 3 ] ; memspace -> workspace_double [ 0 ]
= WorkingSet -> beq ; memspace -> workspace_double [ 0 ] = - memspace ->
workspace_double [ 0 ] ; ix = 0 ; c = 0.0 ; for ( ia = 1 ; ia <= nVarOrig ;
ia ++ ) { c += WorkingSet -> Aeq [ ia - 1 ] * TrialState -> xstar [ ix ] ; ix
++ ; } memspace -> workspace_double [ 0 ] += c ; if ( memspace ->
workspace_double [ 0 ] <= 0.0 ) { TrialState -> xstar [ nVarOrig ] = 0.0 ;
TrialState -> xstar [ nVarOrig + 1 ] = - memspace -> workspace_double [ 0 ] ;
pvj1vfm0bg ( WorkingSet , 4 , WorkingSet -> sizes [ 3 ] - 1 ) ; if ( memspace
-> workspace_double [ 0 ] >= - 1.0E-6 ) { pvj1vfm0bg ( WorkingSet , 4 ,
mLBOrig ) ; } } else { TrialState -> xstar [ nVarOrig ] = memspace ->
workspace_double [ 0 ] ; TrialState -> xstar [ nVarOrig + 1 ] = 0.0 ;
pvj1vfm0bg ( WorkingSet , 4 , WorkingSet -> sizes [ 3 ] ) ; if ( memspace ->
workspace_double [ 0 ] <= 1.0E-6 ) { pvj1vfm0bg ( WorkingSet , 4 , mLBOrig -
1 ) ; } } } static int32_T fzdnhnbint ( ktaxowovvf * memspace , const int32_T
WorkingSet_sizes [ 5 ] , const boolean_T WorkingSet_isActiveConstr [ 4 ] ) {
memspace -> workspace_int [ 0 ] = WorkingSet_isActiveConstr [
WorkingSet_sizes [ 3 ] - 1 ] ; memspace -> workspace_int [ 1 ] =
WorkingSet_isActiveConstr [ WorkingSet_sizes [ 3 ] ] ; return
WorkingSet_isActiveConstr [ WorkingSet_sizes [ 3 ] - 1 ] +
WorkingSet_isActiveConstr [ WorkingSet_sizes [ 3 ] ] ; } static real_T
ctccuctamv ( int32_T n , const real_T x [ 8 ] , int32_T ix0 ) { real_T y ;
int32_T kend ; int32_T k ; y = 0.0 ; if ( n >= 1 ) { kend = ( ix0 + n ) - 1 ;
for ( k = ix0 ; k <= kend ; k ++ ) { y += muDoubleScalarAbs ( x [ k - 1 ] ) ;
} } return y ; } static real_T h0kgdqgo40 ( int32_T n , const real_T x [ 8 ]
, int32_T ix0 , const real_T y [ 8 ] , int32_T iy0 ) { real_T d ; int32_T ix
; int32_T iy ; int32_T k ; d = 0.0 ; if ( n >= 1 ) { ix = ix0 ; iy = iy0 ;
for ( k = 0 ; k < n ; k ++ ) { d += x [ ix - 1 ] * y [ iy - 1 ] ; ix ++ ; iy
++ ; } } return d ; } static void he0bczuci1b ( kthfgfhdov * obj , real_T
fval , real_T eq_workspace , int32_T sqpiter , real_T qpval , const real_T x
[ 8 ] , int32_T iReg0 , int32_T nRegularized ) { real_T penaltyParamTrial ;
real_T constrViolationEq ; real_T linearizedConstrViolPrev ; real_T y ;
int32_T kend ; int32_T k ; penaltyParamTrial = obj -> penaltyParam ;
constrViolationEq = muDoubleScalarAbs ( eq_workspace ) ;
linearizedConstrViolPrev = obj -> linearizedConstrViol ; y = 0.0 ; if (
nRegularized >= 1 ) { kend = ( iReg0 + nRegularized ) - 1 ; for ( k = iReg0 ;
k <= kend ; k ++ ) { y += muDoubleScalarAbs ( x [ k - 1 ] ) ; } } obj ->
linearizedConstrViol = y ; linearizedConstrViolPrev = ( constrViolationEq +
linearizedConstrViolPrev ) - y ; if ( ( linearizedConstrViolPrev >
2.2204460492503131E-16 ) && ( qpval > 0.0 ) ) { if ( fval == 0.0 ) {
penaltyParamTrial = 1.0 ; } else { penaltyParamTrial = 1.5 ; }
penaltyParamTrial = penaltyParamTrial * qpval / linearizedConstrViolPrev ; }
if ( penaltyParamTrial < obj -> penaltyParam ) { obj -> phi =
penaltyParamTrial * constrViolationEq + fval ; if ( ( penaltyParamTrial * obj
-> initConstrViolationEq + obj -> initFval ) - obj -> phi > ( real_T ) obj ->
nPenaltyDecreases * obj -> threshold ) { obj -> nPenaltyDecreases ++ ; if ( (
obj -> nPenaltyDecreases << 1 ) > sqpiter ) { obj -> threshold *= 10.0 ; }
obj -> penaltyParam = muDoubleScalarMax ( penaltyParamTrial , 1.0E-10 ) ; }
else { obj -> phi = obj -> penaltyParam * constrViolationEq + fval ; } } else
{ obj -> penaltyParam = muDoubleScalarMax ( penaltyParamTrial , 1.0E-10 ) ;
obj -> phi = muDoubleScalarMax ( penaltyParamTrial , 1.0E-10 ) *
constrViolationEq + fval ; } obj -> phiPrimePlus = muDoubleScalarMin ( qpval
- obj -> penaltyParam * constrViolationEq , 0.0 ) ; } static void b3d5knwcuv
( int32_T nActiveLBArtificial , fovverijux * TrialState , kdxyjsixti *
WorkingSet ) { int32_T mFiniteLBOrig ; int32_T idx ; real_T tmp ;
mFiniteLBOrig = WorkingSet -> sizes [ 3 ] - 2 ; idx = WorkingSet ->
nActiveConstr ; while ( ( idx > 1 ) && ( nActiveLBArtificial > 0 ) ) { if ( (
WorkingSet -> Wid [ idx - 1 ] == 4 ) && ( WorkingSet -> Wlocalidx [ idx - 1 ]
> mFiniteLBOrig ) ) { tmp = TrialState -> lambda [ WorkingSet ->
nActiveConstr - 1 ] ; TrialState -> lambda [ WorkingSet -> nActiveConstr - 1
] = 0.0 ; TrialState -> lambda [ idx - 1 ] = tmp ; hc3wqesyj2 ( WorkingSet ,
idx ) ; nActiveLBArtificial -- ; } idx -- ; } } static void i2rfqztpnd (
k0ratk1n10 * obj , int32_T NumVars ) { obj -> hasLinear = true ; obj -> nvar
= NumVars ; obj -> objtype = 3 ; } static int32_T mfrofh20mfq ( int32_T n ,
const real_T x [ 4 ] ) { int32_T idxmax ; int32_T ix ; real_T smax ; int32_T
k ; real_T y ; idxmax = 1 ; if ( n > 1 ) { ix = 0 ; smax = muDoubleScalarAbs
( x [ 0 ] ) ; for ( k = 2 ; k <= n ; k ++ ) { ix ++ ; y = muDoubleScalarAbs (
x [ ix ] ) ; if ( y > smax ) { idxmax = k ; smax = y ; } } } return idxmax ;
} static void ibyal3ep2i ( const real_T Hessian [ 25 ] , const real_T grad [
8 ] , fovverijux * TrialState , kthfgfhdov * MeritFunction , ktaxowovvf *
memspace , kdxyjsixti * WorkingSet , dzrlw5sxs5 * QRManager , csm4ifxwet *
CholManager , k0ratk1n10 * QPObjective , e2ucunpqcp * qpoptions ) { int32_T
nVarOrig ; real_T beta ; real_T rho ; int32_T temp ; boolean_T isAeqActive ;
int32_T c_idx ; e2ucunpqcp qpoptions_p ; e2ucunpqcp qpoptions_e ; nVarOrig =
WorkingSet -> nVar ; beta = 0.0 ; for ( temp = 0 ; temp < nVarOrig ; temp ++
) { beta += Hessian [ 5 * temp + temp ] ; } beta /= ( real_T ) WorkingSet ->
nVar ; if ( TrialState -> sqpIterations <= 1 ) { rho = muDoubleScalarMax (
1.0 , muDoubleScalarAbs ( grad [ mfrofh20mf ( QPObjective -> nvar , grad ) -
1 ] ) ) * 100.0 ; } else { rho = muDoubleScalarAbs ( TrialState -> lambdasqp
[ mfrofh20mfq ( WorkingSet -> mConstr , TrialState -> lambdasqp ) - 1 ] ) ; }
dabs5zh1br ( QPObjective , WorkingSet -> nVar , beta , rho ) ; eusryzwbaa (
WorkingSet , 2 ) ; izkrqq3suf ( nVarOrig , WorkingSet , TrialState , memspace
) ; temp = qpoptions -> MaxIterations ; qpoptions -> MaxIterations = (
qpoptions -> MaxIterations + WorkingSet -> nVar ) - nVarOrig ; qpoptions_p =
* qpoptions ; qpoptions_e = * qpoptions ; g01zi3nkf0c ( Hessian , grad ,
TrialState , memspace , WorkingSet , QRManager , CholManager , QPObjective ,
& qpoptions_p , & qpoptions_e ) ; qpoptions -> MaxIterations = temp ; temp =
fzdnhnbint ( memspace , WorkingSet -> sizes , WorkingSet -> isActiveConstr )
; if ( TrialState -> state != - 6 ) { he0bczuci1b ( MeritFunction ,
TrialState -> sqpFval , TrialState -> cEq , TrialState -> sqpIterations , (
TrialState -> fstar - rho * ctccuctamv ( 7 - nVarOrig , TrialState -> xstar ,
nVarOrig + 1 ) ) - beta / 2.0 * h0kgdqgo40 ( 7 - nVarOrig , TrialState ->
xstar , nVarOrig + 1 , TrialState -> xstar , nVarOrig + 1 ) , TrialState ->
xstar , nVarOrig + 1 , 7 - nVarOrig ) ; if ( ( memspace -> workspace_int [ 0
] != 0 ) && ( memspace -> workspace_int [ 1 ] != 0 ) ) { isAeqActive = true ;
} else { isAeqActive = false ; } TrialState -> lambda [ 0 ] *= ( real_T )
isAeqActive ; for ( c_idx = 1 ; c_idx < WorkingSet -> nActiveConstr ; c_idx
++ ) { if ( WorkingSet -> Wid [ c_idx ] == 3 ) { TrialState -> lambda [ c_idx
] *= ( real_T ) memspace -> workspace_int [ WorkingSet -> Wlocalidx [ c_idx ]
+ 1 ] ; } } } b3d5knwcuv ( temp , TrialState , WorkingSet ) ; i2rfqztpnd (
QPObjective , nVarOrig ) ; eusryzwbaa ( WorkingSet , 3 ) ; exp02lfvwa (
TrialState -> lambda , WorkingSet -> nActiveConstr , WorkingSet -> sizes ,
WorkingSet -> isActiveIdx , WorkingSet -> Wid , WorkingSet -> Wlocalidx ,
memspace -> workspace_double ) ; } static void moizl4aka3 ( real_T Hessian [
25 ] , const real_T grad [ 8 ] , const real_T searchDir [ 8 ] ) { real_T
nrmGradInf ; real_T nrmDirInf ; int32_T iH0 ; int32_T idx ; int32_T k ;
nrmGradInf = 0.0 ; nrmDirInf = 1.0 ; for ( idx = 0 ; idx < 5 ; idx ++ ) {
nrmGradInf = muDoubleScalarMax ( nrmGradInf , muDoubleScalarAbs ( grad [ idx
] ) ) ; nrmDirInf = muDoubleScalarMax ( nrmDirInf , muDoubleScalarAbs (
searchDir [ idx ] ) ) ; } nrmGradInf = muDoubleScalarMax (
2.2204460492503131E-16 , nrmGradInf / nrmDirInf ) ; for ( idx = 0 ; idx < 5 ;
idx ++ ) { iH0 = 5 * idx ; for ( k = 0 ; k < idx ; k ++ ) { Hessian [ iH0 + k
] = 0.0 ; } Hessian [ idx + 5 * idx ] = nrmGradInf ; iH0 += idx ; for ( k = 0
; k <= 3 - idx ; k ++ ) { Hessian [ ( iH0 + k ) + 1 ] = 0.0 ; } } } static
boolean_T hfcepsnata ( int32_T * STEP_TYPE , real_T Hessian [ 25 ] ,
fovverijux * TrialState , kthfgfhdov * MeritFunction , ktaxowovvf * memspace
, kdxyjsixti * WorkingSet , dzrlw5sxs5 * QRManager , csm4ifxwet * CholManager
, k0ratk1n10 * QPObjective , e2ucunpqcp * qpoptions ) { boolean_T stepSuccess
; int32_T nVar ; fovverijux b_TrialState ; int32_T b_idx ; int32_T exitg1 ;
boolean_T guard1 = false ; stepSuccess = true ; nVar = WorkingSet -> nVar ;
if ( * STEP_TYPE != 3 ) { ocj0pd5c5jy2 ( WorkingSet -> nVar , TrialState ->
xstarsqp , TrialState -> xstar ) ; } else { ocj0pd5c5jy21 ( WorkingSet ->
nVar , TrialState -> xstar , TrialState -> searchDir ) ; } do { exitg1 = 0 ;
guard1 = false ; switch ( * STEP_TYPE ) { case 1 : b_TrialState = *
TrialState ; kqwfgy4qbs ( Hessian , TrialState -> grad , & b_TrialState ,
MeritFunction , memspace , WorkingSet , QRManager , CholManager , QPObjective
, qpoptions ) ; * TrialState = b_TrialState ; if ( ( b_TrialState . state <=
0 ) && ( b_TrialState . state != - 6 ) ) { * STEP_TYPE = 2 ; } else { memcpy
( & TrialState -> delta_x [ 0 ] , & b_TrialState . delta_x [ 0 ] , sizeof (
real_T ) << 3U ) ; ocj0pd5c5jy21 ( nVar , b_TrialState . xstar , TrialState
-> delta_x ) ; guard1 = true ; } break ; case 2 : b_TrialState = * TrialState
; ibyal3ep2i ( Hessian , TrialState -> grad , & b_TrialState , MeritFunction
, memspace , WorkingSet , QRManager , CholManager , QPObjective , qpoptions )
; * TrialState = b_TrialState ; memcpy ( & TrialState -> delta_x [ 0 ] , &
b_TrialState . delta_x [ 0 ] , sizeof ( real_T ) << 3U ) ; ocj0pd5c5jy21 (
nVar , b_TrialState . xstar , TrialState -> delta_x ) ; guard1 = true ; break
; default : b_TrialState = * TrialState ; stepSuccess = h1skejptsj ( Hessian
, TrialState -> grad , & b_TrialState , memspace , WorkingSet , QRManager ,
CholManager , QPObjective , qpoptions ) ; * TrialState = b_TrialState ; if (
stepSuccess && ( TrialState -> state != - 6 ) ) { for ( b_idx = 0 ; b_idx <
nVar ; b_idx ++ ) { TrialState -> delta_x [ b_idx ] = TrialState -> xstar [
b_idx ] + TrialState -> socDirection [ b_idx ] ; } } guard1 = true ; break ;
} if ( guard1 ) { if ( TrialState -> state != - 6 ) { exitg1 = 1 ; } else {
moizl4aka3 ( Hessian , TrialState -> grad , TrialState -> xstar ) ; } } }
while ( exitg1 == 0 ) ; return stepSuccess ; } static void iyr1rxfcqi (
int32_T nVar , real_T workspace [ 8 ] , const real_T grad [ 8 ] , const
real_T JacEqTrans [ 8 ] , const real_T grad_old [ 8 ] , const real_T
JacEqTrans_old [ 8 ] , const real_T lambda [ 4 ] ) { int32_T iy ; int32_T ia
; for ( iy = 0 ; iy < nVar ; iy ++ ) { workspace [ iy ] = grad [ iy ] ; } if
( nVar >= 1 ) { for ( iy = 0 ; iy < nVar ; iy ++ ) { workspace [ iy ] += -
grad_old [ iy ] ; } } iy = 0 ; for ( ia = 1 ; ia <= nVar ; ia ++ ) {
workspace [ iy ] += JacEqTrans [ ia - 1 ] * lambda [ 0 ] ; iy ++ ; } iy = 0 ;
for ( ia = 1 ; ia <= nVar ; ia ++ ) { workspace [ iy ] += JacEqTrans_old [ ia
- 1 ] * - lambda [ 0 ] ; iy ++ ; } } static boolean_T hdmoesrrjp ( int32_T
nvar , real_T Bk [ 25 ] , const real_T sk [ 8 ] , real_T yk [ 8 ] , real_T
workspace [ 64 ] ) { boolean_T success ; real_T dotSY ; real_T curvatureS ;
int32_T ix ; int32_T iac ; int32_T jy ; real_T temp ; int32_T b_ix ; int32_T
d ; int32_T ijA ; dotSY = 0.0 ; for ( ix = 0 ; ix < nvar ; ix ++ ) { dotSY +=
sk [ ix ] * yk [ ix ] ; } for ( ix = 0 ; ix < nvar ; ix ++ ) { workspace [ ix
] = 0.0 ; } ix = 0 ; jy = ( nvar - 1 ) * 5 ; for ( iac = 1 ; iac <= jy + 1 ;
iac += 5 ) { b_ix = 0 ; d = ( iac + nvar ) - 1 ; for ( ijA = iac ; ijA <= d ;
ijA ++ ) { workspace [ b_ix ] += Bk [ ijA - 1 ] * sk [ ix ] ; b_ix ++ ; } ix
++ ; } curvatureS = 0.0 ; if ( nvar >= 1 ) { for ( ix = 0 ; ix < nvar ; ix ++
) { curvatureS += sk [ ix ] * workspace [ ix ] ; } } if ( dotSY < 0.2 *
curvatureS ) { dotSY = 0.8 * curvatureS / ( curvatureS - dotSY ) ; for ( ix =
0 ; ix < nvar ; ix ++ ) { yk [ ix ] *= dotSY ; } dotSY = 1.0 - dotSY ; if ( !
( dotSY == 0.0 ) ) { for ( ix = 0 ; ix < nvar ; ix ++ ) { yk [ ix ] += dotSY
* workspace [ ix ] ; } } dotSY = 0.0 ; for ( ix = 0 ; ix < nvar ; ix ++ ) {
dotSY += sk [ ix ] * yk [ ix ] ; } } success = ( ( curvatureS >
2.2204460492503131E-16 ) && ( dotSY > 2.2204460492503131E-16 ) ) ; if (
success ) { curvatureS = - 1.0 / curvatureS ; if ( ! ( curvatureS == 0.0 ) )
{ ix = 0 ; jy = 0 ; for ( iac = 0 ; iac < nvar ; iac ++ ) { if ( workspace [
jy ] != 0.0 ) { temp = workspace [ jy ] * curvatureS ; b_ix = 0 ; d = nvar +
ix ; for ( ijA = ix ; ijA < d ; ijA ++ ) { Bk [ ijA ] += workspace [ b_ix ] *
temp ; b_ix ++ ; } } jy ++ ; ix += 5 ; } } curvatureS = 1.0 / dotSY ; if ( !
( curvatureS == 0.0 ) ) { ix = 0 ; jy = 0 ; for ( iac = 0 ; iac < nvar ; iac
++ ) { if ( yk [ jy ] != 0.0 ) { dotSY = yk [ jy ] * curvatureS ; b_ix = 0 ;
d = nvar + ix ; for ( ijA = ix ; ijA < d ; ijA ++ ) { Bk [ ijA ] += yk [ b_ix
] * dotSY ; b_ix ++ ; } } jy ++ ; ix += 5 ; } } } return success ; } static
void ibebbcogqe ( boolean_T * evalWellDefined , int32_T WorkingSet_nVar ,
fovverijux * TrialState , real_T MeritFunction_penaltyParam , real_T
MeritFunction_phi , real_T MeritFunction_phiPrimePlus , real_T
MeritFunction_phiFullStep , const hskkdlcyjp *
FcnEvaluator_objfun_tunableEnvironment , boolean_T socTaken , real_T * alpha
, int32_T * exitflag ) { real_T phi_alpha ; boolean_T tooSmallX ; int32_T b_k
; real_T fval ; int32_T exitg1 ; boolean_T exitg2 ; * alpha = 1.0 ; *
exitflag = 1 ; phi_alpha = MeritFunction_phiFullStep ; for ( b_k = 0 ; b_k <
WorkingSet_nVar ; b_k ++ ) { TrialState -> searchDir [ b_k ] = TrialState ->
delta_x [ b_k ] ; } do { exitg1 = 0 ; if ( TrialState -> FunctionEvaluations
< 500 ) { if ( ( * evalWellDefined ) && ( phi_alpha <= * alpha * 0.0001 *
MeritFunction_phiPrimePlus + MeritFunction_phi ) ) { exitg1 = 1 ; } else { *
alpha *= 0.7 ; for ( b_k = 0 ; b_k < WorkingSet_nVar ; b_k ++ ) { TrialState
-> delta_x [ b_k ] = * alpha * TrialState -> searchDir [ b_k ] ; } if (
socTaken ) { phi_alpha = * alpha * * alpha ; if ( ( WorkingSet_nVar >= 1 ) &&
( ! ( phi_alpha == 0.0 ) ) ) { for ( b_k = 0 ; b_k < WorkingSet_nVar ; b_k ++
) { TrialState -> delta_x [ b_k ] += phi_alpha * TrialState -> socDirection [
b_k ] ; } } } tooSmallX = true ; b_k = 0 ; exitg2 = false ; while ( ( !
exitg2 ) && ( b_k <= WorkingSet_nVar - 1 ) ) { if ( 1.0E-10 *
muDoubleScalarMax ( 1.0 , muDoubleScalarAbs ( TrialState -> xstarsqp [ b_k ]
) ) <= muDoubleScalarAbs ( TrialState -> delta_x [ b_k ] ) ) { tooSmallX =
false ; exitg2 = true ; } else { b_k ++ ; } } if ( tooSmallX ) { * exitflag =
- 2 ; exitg1 = 1 ; } else { for ( b_k = 0 ; b_k < WorkingSet_nVar ; b_k ++ )
{ TrialState -> xstarsqp [ b_k ] = TrialState -> xstarsqp_old [ b_k ] +
TrialState -> delta_x [ b_k ] ; } phi_alpha = TrialState -> cEq ; ibqyp0ury0
( FcnEvaluator_objfun_tunableEnvironment , TrialState -> xstarsqp , & fval ,
& b_k ) ; if ( b_k == 1 ) { b_k = pawujf5ux3 ( TrialState -> xstarsqp , &
phi_alpha ) ; } TrialState -> sqpFval = fval ; TrialState -> cEq = phi_alpha
; TrialState -> FunctionEvaluations ++ ; * evalWellDefined = ( b_k == 1 ) ;
if ( * evalWellDefined ) { phi_alpha = MeritFunction_penaltyParam *
muDoubleScalarAbs ( phi_alpha ) + fval ; } else { phi_alpha = ( rtInf ) ; } }
} } else { * exitflag = 0 ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } static
void dkm24rsgfe ( const hskkdlcyjp * obj_objfun_tunableEnvironment , const
real_T x [ 5 ] , real_T * Ceq_workspace , real_T * fval , int32_T * status )
{ ibqyp0ury0 ( obj_objfun_tunableEnvironment , x , fval , status ) ; if ( *
status == 1 ) { * status = pawujf5ux3 ( x , Ceq_workspace ) ; } } static
real_T asykd4r443 ( real_T obj_penaltyParam , real_T fval , real_T
Ceq_workspace , boolean_T evalWellDefined ) { real_T val ; if (
evalWellDefined ) { val = obj_penaltyParam * muDoubleScalarAbs (
Ceq_workspace ) + fval ; } else { val = ( rtInf ) ; } return val ; } static
void g01zi3nkf0 ( fovverijux * TrialState , kthfgfhdov * MeritFunction ,
const cdseu45pm3 * FcnEvaluator , hbctg4nwcl * FiniteDifferences , ktaxowovvf
* memspace , kdxyjsixti * WorkingSet , dzrlw5sxs5 * QRManager , k0ratk1n10 *
QPObjective , real_T Hessian [ 25 ] , csm4ifxwet * CholManager ) { int32_T
nVar ; int32_T mLB ; int32_T qpoptions_MaxIterations ; mf15oedits Flags ;
int32_T idx ; boolean_T b ; real_T e [ 8 ] ; real_T g [ 8 ] ; real_T h [ 5 ]
; real_T j ; real_T k ; int32_T b_idx ; e2ucunpqcp expl_temp ; static const
int8_T p [ 25 ] = { 1 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0
, 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 1 } ; static const char_T q [ 7 ] = {
'f' , 'm' , 'i' , 'n' , 'c' , 'o' , 'n' } ; e2ucunpqcp expl_temp_p ; memset (
& CholManager -> FMat [ 0 ] , 0 , sizeof ( real_T ) << 6U ) ; CholManager ->
ldm = 8 ; CholManager -> ndims = 0 ; CholManager -> info = 0 ; for ( b_idx =
0 ; b_idx < 25 ; b_idx ++ ) { Hessian [ b_idx ] = p [ b_idx ] ; } nVar =
WorkingSet -> nVar ; mLB = WorkingSet -> sizes [ 3 ] ;
qpoptions_MaxIterations = 10 * muIntScalarMax_sint32 ( WorkingSet -> nVar ,
WorkingSet -> sizes [ 3 ] ) ; TrialState -> steplength = 1.0 ; ksrs0yrnvw (
MeritFunction , WorkingSet , TrialState , & Flags . gradOK , & Flags .
fevalOK , & Flags . done , & Flags . stepAccepted , & Flags .
failedLineSearch , & Flags . stepType ) ; iexi1hxv0p ( TrialState ,
WorkingSet -> nVar , WorkingSet -> Aeq ) ; eilmu4s5ow ( TrialState ) ; if ( !
Flags . done ) { TrialState -> sqpIterations = 1 ; } while ( ! Flags . done )
{ if ( ( ! Flags . stepAccepted ) && ( ! Flags . failedLineSearch ) ) {
expl_temp . IterDisplayQP = false ; expl_temp . RemainFeasible = false ;
expl_temp . ProbRelTolFactor = 1.0 ; expl_temp . ConstrRelTolFactor = 1.0 ;
expl_temp . PricingTolerance = 0.0 ; expl_temp . ObjectiveLimit = - 1.0E+20 ;
expl_temp . ConstraintTolerance = 1.0E-6 ; expl_temp . OptimalityTolerance =
2.2204460492503131E-14 ; expl_temp . StepTolerance = 1.0E-6 ; expl_temp .
MaxIterations = qpoptions_MaxIterations ; for ( b_idx = 0 ; b_idx < 7 ; b_idx
++ ) { expl_temp . SolverName [ b_idx ] = q [ b_idx ] ; } } while ( ( ! Flags
. stepAccepted ) && ( ! Flags . failedLineSearch ) ) { cdu0auzqs4j (
WorkingSet , TrialState -> cEq ) ; idx = Flags . stepType ; expl_temp_p =
expl_temp ; b = hfcepsnata ( & idx , Hessian , TrialState , MeritFunction ,
memspace , WorkingSet , QRManager , CholManager , QPObjective , & expl_temp_p
) ; Flags . stepAccepted = b ; Flags . stepType = idx ; if ( b ) { for (
b_idx = 0 ; b_idx < nVar ; b_idx ++ ) { TrialState -> xstarsqp [ b_idx ] +=
TrialState -> delta_x [ b_idx ] ; } k = TrialState -> cEq ; dkm24rsgfe ( &
FcnEvaluator -> objfun . tunableEnvironment , TrialState -> xstarsqp , & k ,
& j , & b_idx ) ; TrialState -> sqpFval = j ; Flags . fevalOK = ( b_idx == 1
) ; TrialState -> FunctionEvaluations ++ ; TrialState -> cEq = k ;
MeritFunction -> phiFullStep = asykd4r443 ( MeritFunction -> penaltyParam , j
, k , Flags . fevalOK ) ; } if ( ( idx == 1 ) && b && Flags . fevalOK && (
MeritFunction -> phi < MeritFunction -> phiFullStep ) && ( TrialState ->
sqpFval < TrialState -> sqpFval_old ) ) { Flags . stepType = 3 ; Flags .
stepAccepted = false ; } else { ibebbcogqe ( & Flags . fevalOK , WorkingSet
-> nVar , TrialState , MeritFunction -> penaltyParam , MeritFunction -> phi ,
MeritFunction -> phiPrimePlus , MeritFunction -> phiFullStep , & FcnEvaluator
-> objfun . tunableEnvironment , ( idx == 3 ) && b , & k , & b_idx ) ;
TrialState -> steplength = k ; if ( b_idx > 0 ) { Flags . stepAccepted = true
; } else { Flags . failedLineSearch = true ; } } } if ( Flags . stepAccepted
&& ( ! Flags . failedLineSearch ) ) { for ( b_idx = 0 ; b_idx < nVar ; b_idx
++ ) { TrialState -> xstarsqp [ b_idx ] = TrialState -> xstarsqp_old [ b_idx
] + TrialState -> delta_x [ b_idx ] ; } for ( b_idx = 0 ; b_idx <= mLB ;
b_idx ++ ) { TrialState -> lambdasqp [ b_idx ] += ( TrialState -> lambda [
b_idx ] - TrialState -> lambdasqp [ b_idx ] ) * TrialState -> steplength ; }
eilmu4s5ow ( TrialState ) ; memcpy ( & e [ 0 ] , & TrialState -> grad [ 0 ] ,
sizeof ( real_T ) << 3U ) ; memcpy ( & g [ 0 ] , & WorkingSet -> Aeq [ 0 ] ,
sizeof ( real_T ) << 3U ) ; for ( b_idx = 0 ; b_idx < 5 ; b_idx ++ ) { h [
b_idx ] = TrialState -> xstarsqp [ b_idx ] ; } Flags . gradOK = ac5h1531rt (
FiniteDifferences , TrialState -> sqpFval , TrialState -> cEq , h , e , g ) ;
memcpy ( & TrialState -> grad [ 0 ] , & e [ 0 ] , sizeof ( real_T ) << 3U ) ;
memcpy ( & WorkingSet -> Aeq [ 0 ] , & g [ 0 ] , sizeof ( real_T ) << 3U ) ;
for ( b_idx = 0 ; b_idx < 5 ; b_idx ++ ) { TrialState -> xstarsqp [ b_idx ] =
h [ b_idx ] ; } TrialState -> FunctionEvaluations += FiniteDifferences ->
numEvals ; } else { dpnt4bixcf ( TrialState ) ; } ksrs0yrnvw3 ( & Flags ,
memspace , MeritFunction , WorkingSet , TrialState , QRManager ) ; if ( ( !
Flags . done ) && Flags . stepAccepted ) { Flags . stepAccepted = false ;
Flags . stepType = 1 ; Flags . failedLineSearch = false ; iyr1rxfcqi ( nVar ,
TrialState -> delta_gradLag , TrialState -> grad , WorkingSet -> Aeq ,
TrialState -> grad_old , TrialState -> JacCeqTrans_old , TrialState ->
lambdasqp ) ; iexi1hxv0p ( TrialState , nVar , WorkingSet -> Aeq ) ;
hdmoesrrjp ( nVar , Hessian , TrialState -> delta_x , TrialState ->
delta_gradLag , memspace -> workspace_double ) ; TrialState -> sqpIterations
++ ; } } } static void mes2kf0vif ( const hskkdlcyjp * fun_tunableEnvironment
, real_T x [ 5 ] , real_T * fval , real_T * exitflag ) { fovverijux
TrialState ; cdseu45pm3 FcnEvaluator ; ktaxowovvf memspace ; kdxyjsixti
WorkingSet ; real_T b ; real_T e ; hbctg4nwcl FiniteDifferences ; real_T
Hessian [ 25 ] ; kthfgfhdov MeritFunction ; dzrlw5sxs5 QRManager ; k0ratk1n10
QPObjective ; csm4ifxwet CholManager ; int32_T i ; static const int8_T
j_sizes [ 5 ] = { 0 , 1 , 0 , 0 , 0 } ; static const int8_T j_isActiveIdx [ 6
] = { 1 , 1 , 2 , 2 , 2 , 2 } ; static const int8_T j_sizesPhaseOne [ 5 ] = {
0 , 1 , 0 , 1 , 0 } ; static const int8_T j_sizesRegularized [ 5 ] = { 0 , 1
, 0 , 2 , 0 } ; static const int8_T j_isActiveIdxPhaseOne [ 6 ] = { 1 , 1 , 2
, 2 , 3 , 3 } ; static const int8_T j_sizesRegPhaseOne [ 5 ] = { 0 , 1 , 0 ,
3 , 0 } ; static const int8_T j_isActiveIdxRegularized [ 6 ] = { 1 , 1 , 2 ,
2 , 4 , 4 } ; static const int8_T j_isActiveIdxRegPhaseOne [ 6 ] = { 1 , 1 ,
2 , 2 , 5 , 5 } ; static const real_T k [ 5 ] = { 0.9961 , - 0.0 , - 0.0893 ,
0.0 , 0.0 } ; FcnEvaluator . objfun . tunableEnvironment = *
fun_tunableEnvironment ; njbzpdidsi ( & FcnEvaluator . nVar , & FcnEvaluator
. mCineq , & FcnEvaluator . mCeq , & FcnEvaluator . NonFiniteSupport , &
FcnEvaluator . SpecifyObjectiveGradient , & FcnEvaluator .
SpecifyConstraintGradient , & FcnEvaluator . ScaleProblem ) ; TrialState .
nVarMax = 8 ; TrialState . mNonlinIneq = 0 ; TrialState . mNonlinEq = 1 ;
TrialState . mIneq = 0 ; TrialState . mEq = 1 ; TrialState . iNonIneq0 = 1 ;
TrialState . iNonEq0 = 1 ; TrialState . sqpFval_old = 0.0 ; for ( i = 0 ; i <
5 ; i ++ ) { TrialState . xstarsqp_old [ i ] = 0.0 ; } TrialState . cEq_old =
0.0 ; TrialState . sqpIterations = 0 ; TrialState . sqpExitFlag = 0 ;
TrialState . lambdasqp [ 0 ] = 0.0 ; TrialState . lambdasqp_old [ 0 ] = 0.0 ;
TrialState . lambdasqp [ 1 ] = 0.0 ; TrialState . lambdasqp_old [ 1 ] = 0.0 ;
TrialState . lambdasqp [ 2 ] = 0.0 ; TrialState . lambdasqp_old [ 2 ] = 0.0 ;
TrialState . lambdasqp [ 3 ] = 0.0 ; TrialState . lambdasqp_old [ 3 ] = 0.0 ;
TrialState . steplength = 1.0 ; TrialState . lambda_old [ 0 ] = 0.0 ;
TrialState . workingset_old [ 0 ] = 0 ; TrialState . lambda_old [ 1 ] = 0.0 ;
TrialState . workingset_old [ 1 ] = 0 ; TrialState . lambda_old [ 2 ] = 0.0 ;
TrialState . workingset_old [ 2 ] = 0 ; TrialState . lambda_old [ 3 ] = 0.0 ;
TrialState . workingset_old [ 3 ] = 0 ; TrialState . fstar = 0.0 ; TrialState
. firstorderopt = 0.0 ; TrialState . lambda [ 0 ] = 0.0 ; TrialState . lambda
[ 1 ] = 0.0 ; TrialState . lambda [ 2 ] = 0.0 ; TrialState . lambda [ 3 ] =
0.0 ; TrialState . state = 0 ; TrialState . maxConstr = 0.0 ; TrialState .
iterations = 0 ; WorkingSet . mConstr = 1 ; WorkingSet . mConstrOrig = 1 ;
WorkingSet . mConstrMax = 4 ; WorkingSet . nVar = 5 ; WorkingSet . nVarOrig =
5 ; WorkingSet . nVarMax = 8 ; WorkingSet . ldA = 8 ; WorkingSet . beq = 0.0
; memset ( & TrialState . grad_old [ 0 ] , 0 , sizeof ( real_T ) << 3U ) ;
memset ( & TrialState . delta_x [ 0 ] , 0 , sizeof ( real_T ) << 3U ) ;
memset ( & TrialState . socDirection [ 0 ] , 0 , sizeof ( real_T ) << 3U ) ;
memset ( & TrialState . JacCeqTrans_old [ 0 ] , 0 , sizeof ( real_T ) << 3U )
; memset ( & TrialState . gradLag [ 0 ] , 0 , sizeof ( real_T ) << 3U ) ;
memset ( & TrialState . delta_gradLag [ 0 ] , 0 , sizeof ( real_T ) << 3U ) ;
memset ( & TrialState . xstar [ 0 ] , 0 , sizeof ( real_T ) << 3U ) ; memset
( & TrialState . searchDir [ 0 ] , 0 , sizeof ( real_T ) << 3U ) ; memset ( &
WorkingSet . lb [ 0 ] , 0 , sizeof ( real_T ) << 3U ) ; memset ( & WorkingSet
. ub [ 0 ] , 0 , sizeof ( real_T ) << 3U ) ; for ( i = 0 ; i < 8 ; i ++ ) {
WorkingSet . indexLB [ i ] = 0 ; WorkingSet . indexUB [ i ] = 0 ; WorkingSet
. indexFixed [ i ] = 0 ; } WorkingSet . mEqRemoved = 0 ; WorkingSet .
indexEqRemoved = 0 ; memset ( & WorkingSet . ATwset [ 0 ] , 0 , sizeof (
real_T ) << 5U ) ; WorkingSet . nActiveConstr = 0 ; WorkingSet . bwset [ 0 ]
= 0.0 ; WorkingSet . maxConstrWorkspace [ 0 ] = 0.0 ; WorkingSet . bwset [ 1
] = 0.0 ; WorkingSet . maxConstrWorkspace [ 1 ] = 0.0 ; WorkingSet . bwset [
2 ] = 0.0 ; WorkingSet . maxConstrWorkspace [ 2 ] = 0.0 ; WorkingSet . bwset
[ 3 ] = 0.0 ; WorkingSet . maxConstrWorkspace [ 3 ] = 0.0 ; for ( i = 0 ; i <
5 ; i ++ ) { WorkingSet . sizes [ i ] = j_sizes [ i ] ; WorkingSet .
sizesNormal [ i ] = j_sizes [ i ] ; WorkingSet . sizesPhaseOne [ i ] =
j_sizesPhaseOne [ i ] ; WorkingSet . sizesRegularized [ i ] =
j_sizesRegularized [ i ] ; WorkingSet . sizesRegPhaseOne [ i ] =
j_sizesRegPhaseOne [ i ] ; } for ( i = 0 ; i < 6 ; i ++ ) { WorkingSet .
isActiveIdx [ i ] = j_isActiveIdx [ i ] ; WorkingSet . isActiveIdxNormal [ i
] = j_isActiveIdx [ i ] ; WorkingSet . isActiveIdxPhaseOne [ i ] =
j_isActiveIdxPhaseOne [ i ] ; WorkingSet . isActiveIdxRegularized [ i ] =
j_isActiveIdxRegularized [ i ] ; WorkingSet . isActiveIdxRegPhaseOne [ i ] =
j_isActiveIdxRegPhaseOne [ i ] ; } WorkingSet . isActiveConstr [ 0 ] = false
; WorkingSet . Wid [ 0 ] = 0 ; WorkingSet . Wlocalidx [ 0 ] = 0 ; WorkingSet
. isActiveConstr [ 1 ] = false ; WorkingSet . Wid [ 1 ] = 0 ; WorkingSet .
Wlocalidx [ 1 ] = 0 ; WorkingSet . isActiveConstr [ 2 ] = false ; WorkingSet
. Wid [ 2 ] = 0 ; WorkingSet . Wlocalidx [ 2 ] = 0 ; WorkingSet .
isActiveConstr [ 3 ] = false ; WorkingSet . Wid [ 3 ] = 0 ; WorkingSet .
Wlocalidx [ 3 ] = 0 ; for ( i = 0 ; i < 5 ; i ++ ) { WorkingSet . nWConstr [
i ] = 0 ; } WorkingSet . probType = 3 ; WorkingSet . SLACK0 = 1.0E-5 ; e =
0.0 ; memset ( & TrialState . grad [ 0 ] , 0 , sizeof ( real_T ) << 3U ) ;
memset ( & WorkingSet . Aeq [ 0 ] , 0 , sizeof ( real_T ) << 3U ) ;
otclemyw5h ( & FcnEvaluator . objfun . tunableEnvironment , k , & e , & b , &
i ) ; TrialState . sqpFval = b ; dj2cbrorw3k ( fun_tunableEnvironment , &
FiniteDifferences ) ; for ( i = 0 ; i < 5 ; i ++ ) { TrialState . xstarsqp [
i ] = k [ i ] ; } ac5h1531rt ( & FiniteDifferences , b , e , TrialState .
xstarsqp , TrialState . grad , WorkingSet . Aeq ) ; TrialState .
FunctionEvaluations = FiniteDifferences . numEvals + 1 ; TrialState . cEq = e
; cdu0auzqs4 ( & WorkingSet , e ) ; cbwacn3e4r ( & WorkingSet ) ;
dj2cbrorw3kd ( b , e , & MeritFunction ) ; QRManager . ldq = 8 ; memset ( &
QRManager . QR [ 0 ] , 0 , sizeof ( real_T ) << 6U ) ; memset ( & QRManager .
Q [ 0 ] , 0 , sizeof ( real_T ) << 6U ) ; QRManager . mrows = 0 ; QRManager .
ncols = 0 ; QRManager . minRowCol = 0 ; QRManager . usedPivoting = false ;
memset ( & QRManager . tau [ 0 ] , 0 , sizeof ( real_T ) << 3U ) ; memset ( &
QPObjective . grad [ 0 ] , 0 , sizeof ( real_T ) << 3U ) ; for ( i = 0 ; i <
8 ; i ++ ) { QRManager . jpvt [ i ] = 0 ; } for ( i = 0 ; i < 7 ; i ++ ) {
QPObjective . Hx [ i ] = 0.0 ; } QPObjective . hasLinear = true ; QPObjective
. nvar = 5 ; QPObjective . maxVar = 8 ; QPObjective . beta = 0.0 ;
QPObjective . rho = 0.0 ; QPObjective . objtype = 3 ; QPObjective .
prev_objtype = 3 ; QPObjective . prev_nvar = 0 ; QPObjective . prev_hasLinear
= false ; QPObjective . gammaScalar = 0.0 ; g01zi3nkf0 ( & TrialState , &
MeritFunction , & FcnEvaluator , & FiniteDifferences , & memspace , &
WorkingSet , & QRManager , & QPObjective , Hessian , & CholManager ) ; for (
i = 0 ; i < 5 ; i ++ ) { x [ i ] = TrialState . xstarsqp [ i ] ; } * fval =
TrialState . sqpFval ; * exitflag = TrialState . sqpExitFlag ; } static void
dj2cbrorw3kdl ( const real_T objfun_tunableEnvironment [ 4 ] , real_T
obj_objfun_tunableEnvironment [ 4 ] , int32_T * obj_nVar , int32_T *
obj_mCineq , int32_T * obj_mCeq , boolean_T * obj_NonFiniteSupport ,
boolean_T * obj_SpecifyObjectiveGradient , boolean_T *
obj_SpecifyConstraintGradient , boolean_T * obj_ScaleProblem ) {
obj_objfun_tunableEnvironment [ 0 ] = objfun_tunableEnvironment [ 0 ] ;
obj_objfun_tunableEnvironment [ 1 ] = objfun_tunableEnvironment [ 1 ] ;
obj_objfun_tunableEnvironment [ 2 ] = objfun_tunableEnvironment [ 2 ] ;
obj_objfun_tunableEnvironment [ 3 ] = objfun_tunableEnvironment [ 3 ] ; *
obj_nVar = 18 ; * obj_mCineq = 0 ; * obj_mCeq = 4 ; * obj_NonFiniteSupport =
true ; * obj_SpecifyObjectiveGradient = false ; *
obj_SpecifyConstraintGradient = false ; * obj_ScaleProblem = false ; } static
void ibqyp0ury0q ( const real_T obj_objfun_tunableEnvironment [ 4 ] , const
real_T x [ 18 ] , real_T * fval , int32_T * status ) { real_T Avals [ 7 ] ;
real_T Bvals [ 7 ] ; real_T Cvals [ 7 ] ; real_T error [ 21 ] ; real_T b_x ;
real_T c_x ; real_T z1 [ 21 ] ; int32_T k ; real_T res [ 16 ] ; real_T a [ 16
] ; real_T b_res [ 16 ] ; real_T c_res [ 16 ] ; real_T e_res [ 16 ] ; int32_T
i ; static const real_T a_p [ 16 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.265 , 0.0 , 0.014 , 1.0 } ; static
const real_T b_a [ 16 ] = { 0.93058059048379183 , 0.36608709976566678 , 0.0 ,
0.0 , - 0.36608709976566678 , 0.93058059048379183 , 0.0 , 0.0 , 0.0 , 0.0 ,
1.0 , 0.0 , 0.139807669447128 , 0.0549998406976098 , - 0.051 , 1.0 } ; static
const real_T e_b [ 16 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 1.0 , 0.0 , 0.085 , 0.0 , - 0.0245 , 1.0 } ; static const real_T
d_b [ 16 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
1.0 , 0.0 , 0.11 , 0.0 , 0.0 , 1.0 } ; static const real_T b [ 16 ] = { 1.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , - 0.015 , -
0.029 , 0.0965 , 1.0 } ; static const real_T c_a [ 16 ] = {
0.93058059048379183 , - 0.366087099765667 , 0.0 , 0.0 , 0.366087099765667 ,
0.93058059048379183 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.139807669447128 ,
- 0.0549998406976098 , - 0.051 , 1.0 } ; static const real_T b_b [ 16 ] = {
1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , -
0.015 , 0.029 , 0.0965 , 1.0 } ; b_x = muDoubleScalarCos ( x [ 0 ] / 2.0 ) ;
c_x = muDoubleScalarSin ( x [ 0 ] / 2.0 ) ; b_res [ 0 ] = 1.0 - c_x * c_x *
2.0 ; b_res [ 4 ] = ( 0.0 - c_x * b_x ) * 2.0 ; b_res [ 8 ] = ( 0.0 * c_x +
0.0 * b_x ) * 2.0 ; b_res [ 1 ] = c_x * b_x * 2.0 ; b_res [ 5 ] = 1.0 - c_x *
c_x * 2.0 ; b_res [ 9 ] = ( 0.0 * c_x - 0.0 * b_x ) * 2.0 ; b_res [ 2 ] = (
0.0 * c_x - 0.0 * b_x ) * 2.0 ; b_res [ 6 ] = ( 0.0 * c_x + 0.0 * b_x ) * 2.0
; b_x = muDoubleScalarCos ( x [ 9 ] / 2.0 ) ; c_x = muDoubleScalarSin ( x [ 9
] / 2.0 ) ; e_res [ 0 ] = 1.0 - c_x * c_x * 2.0 ; e_res [ 4 ] = ( 0.0 - c_x *
b_x ) * 2.0 ; e_res [ 8 ] = ( 0.0 * c_x + 0.0 * b_x ) * 2.0 ; e_res [ 1 ] =
c_x * b_x * 2.0 ; e_res [ 5 ] = 1.0 - c_x * c_x * 2.0 ; e_res [ 9 ] = ( 0.0 *
c_x - 0.0 * b_x ) * 2.0 ; e_res [ 2 ] = ( 0.0 * c_x - 0.0 * b_x ) * 2.0 ;
e_res [ 6 ] = ( 0.0 * c_x + 0.0 * b_x ) * 2.0 ; res [ 0 ] = 1.0 - (
obj_objfun_tunableEnvironment [ 2 ] * obj_objfun_tunableEnvironment [ 2 ] +
obj_objfun_tunableEnvironment [ 3 ] * obj_objfun_tunableEnvironment [ 3 ] ) *
2.0 ; res [ 4 ] = ( obj_objfun_tunableEnvironment [ 1 ] *
obj_objfun_tunableEnvironment [ 2 ] - obj_objfun_tunableEnvironment [ 3 ] *
obj_objfun_tunableEnvironment [ 0 ] ) * 2.0 ; res [ 8 ] = (
obj_objfun_tunableEnvironment [ 1 ] * obj_objfun_tunableEnvironment [ 3 ] +
obj_objfun_tunableEnvironment [ 2 ] * obj_objfun_tunableEnvironment [ 0 ] ) *
2.0 ; res [ 12 ] = 0.0 ; res [ 1 ] = ( obj_objfun_tunableEnvironment [ 1 ] *
obj_objfun_tunableEnvironment [ 2 ] + obj_objfun_tunableEnvironment [ 3 ] *
obj_objfun_tunableEnvironment [ 0 ] ) * 2.0 ; res [ 5 ] = 1.0 - (
obj_objfun_tunableEnvironment [ 1 ] * obj_objfun_tunableEnvironment [ 1 ] +
obj_objfun_tunableEnvironment [ 3 ] * obj_objfun_tunableEnvironment [ 3 ] ) *
2.0 ; res [ 9 ] = ( obj_objfun_tunableEnvironment [ 2 ] *
obj_objfun_tunableEnvironment [ 3 ] - obj_objfun_tunableEnvironment [ 1 ] *
obj_objfun_tunableEnvironment [ 0 ] ) * 2.0 ; res [ 13 ] = 0.0 ; res [ 2 ] =
( obj_objfun_tunableEnvironment [ 1 ] * obj_objfun_tunableEnvironment [ 3 ] -
obj_objfun_tunableEnvironment [ 2 ] * obj_objfun_tunableEnvironment [ 0 ] ) *
2.0 ; res [ 6 ] = ( obj_objfun_tunableEnvironment [ 2 ] *
obj_objfun_tunableEnvironment [ 3 ] + obj_objfun_tunableEnvironment [ 1 ] *
obj_objfun_tunableEnvironment [ 0 ] ) * 2.0 ; res [ 10 ] = 1.0 - (
obj_objfun_tunableEnvironment [ 1 ] * obj_objfun_tunableEnvironment [ 1 ] +
obj_objfun_tunableEnvironment [ 2 ] * obj_objfun_tunableEnvironment [ 2 ] ) *
2.0 ; res [ 14 ] = 0.0 ; res [ 3 ] = 0.0 ; res [ 7 ] = 0.0 ; res [ 11 ] = 0.0
; res [ 15 ] = 1.0 ; for ( k = 0 ; k < 4 ; k ++ ) { for ( i = 0 ; i < 4 ; i
++ ) { a [ i + ( k << 2 ) ] = 0.0 ; a [ i + ( k << 2 ) ] += res [ k << 2 ] *
a_p [ i ] ; a [ i + ( k << 2 ) ] += res [ ( k << 2 ) + 1 ] * a_p [ i + 4 ] ;
a [ i + ( k << 2 ) ] += res [ ( k << 2 ) + 2 ] * a_p [ i + 8 ] ; a [ i + ( k
<< 2 ) ] += res [ ( k << 2 ) + 3 ] * a_p [ i + 12 ] ; } } a5lwlpmpfx ( a , &
Avals [ 0 ] , & Avals [ 1 ] , & Avals [ 2 ] , & Avals [ 3 ] , & Avals [ 4 ] ,
& Avals [ 5 ] , & Avals [ 6 ] ) ; b_res [ 12 ] = 0.0 ; b_res [ 13 ] = 0.0 ;
b_res [ 10 ] = 1.0 ; b_res [ 14 ] = 0.0 ; b_res [ 3 ] = 0.0 ; b_res [ 7 ] =
0.0 ; b_res [ 11 ] = 0.0 ; b_res [ 15 ] = 1.0 ; for ( k = 0 ; k < 4 ; k ++ )
{ for ( i = 0 ; i < 4 ; i ++ ) { res [ k + ( i << 2 ) ] = 0.0 ; res [ k + ( i
<< 2 ) ] += b_res [ i << 2 ] * b_a [ k ] ; res [ k + ( i << 2 ) ] += b_res [
( i << 2 ) + 1 ] * b_a [ k + 4 ] ; res [ k + ( i << 2 ) ] += b_res [ ( i << 2
) + 2 ] * b_a [ k + 8 ] ; res [ k + ( i << 2 ) ] += b_res [ ( i << 2 ) + 3 ]
* b_a [ k + 12 ] ; } for ( i = 0 ; i < 4 ; i ++ ) { a [ k + ( i << 2 ) ] =
0.0 ; a [ k + ( i << 2 ) ] += e_b [ i << 2 ] * res [ k ] ; a [ k + ( i << 2 )
] += e_b [ ( i << 2 ) + 1 ] * res [ k + 4 ] ; a [ k + ( i << 2 ) ] += e_b [ (
i << 2 ) + 2 ] * res [ k + 8 ] ; a [ k + ( i << 2 ) ] += e_b [ ( i << 2 ) + 3
] * res [ k + 12 ] ; } } c_res [ 0 ] = 1.0 - ( x [ 3 ] * x [ 3 ] + x [ 4 ] *
x [ 4 ] ) * 2.0 ; c_res [ 4 ] = ( x [ 2 ] * x [ 3 ] - x [ 4 ] * x [ 1 ] ) *
2.0 ; c_res [ 8 ] = ( x [ 2 ] * x [ 4 ] + x [ 3 ] * x [ 1 ] ) * 2.0 ; c_res [
12 ] = 0.0 ; c_res [ 1 ] = ( x [ 2 ] * x [ 3 ] + x [ 4 ] * x [ 1 ] ) * 2.0 ;
c_res [ 5 ] = 1.0 - ( x [ 2 ] * x [ 2 ] + x [ 4 ] * x [ 4 ] ) * 2.0 ; c_res [
9 ] = ( x [ 3 ] * x [ 4 ] - x [ 2 ] * x [ 1 ] ) * 2.0 ; c_res [ 13 ] = 0.0 ;
c_res [ 2 ] = ( x [ 2 ] * x [ 4 ] - x [ 3 ] * x [ 1 ] ) * 2.0 ; c_res [ 6 ] =
( x [ 3 ] * x [ 4 ] + x [ 2 ] * x [ 1 ] ) * 2.0 ; c_res [ 10 ] = 1.0 - ( x [
2 ] * x [ 2 ] + x [ 3 ] * x [ 3 ] ) * 2.0 ; c_res [ 14 ] = 0.0 ; c_res [ 3 ]
= 0.0 ; c_res [ 7 ] = 0.0 ; c_res [ 11 ] = 0.0 ; c_res [ 15 ] = 1.0 ; for ( k
= 0 ; k < 4 ; k ++ ) { for ( i = 0 ; i < 4 ; i ++ ) { res [ k + ( i << 2 ) ]
= 0.0 ; res [ k + ( i << 2 ) ] += c_res [ i << 2 ] * a [ k ] ; res [ k + ( i
<< 2 ) ] += c_res [ ( i << 2 ) + 1 ] * a [ k + 4 ] ; res [ k + ( i << 2 ) ]
+= c_res [ ( i << 2 ) + 2 ] * a [ k + 8 ] ; res [ k + ( i << 2 ) ] += c_res [
( i << 2 ) + 3 ] * a [ k + 12 ] ; } for ( i = 0 ; i < 4 ; i ++ ) { b_res [ k
+ ( i << 2 ) ] = 0.0 ; b_res [ k + ( i << 2 ) ] += d_b [ i << 2 ] * res [ k ]
; b_res [ k + ( i << 2 ) ] += d_b [ ( i << 2 ) + 1 ] * res [ k + 4 ] ; b_res
[ k + ( i << 2 ) ] += d_b [ ( i << 2 ) + 2 ] * res [ k + 8 ] ; b_res [ k + (
i << 2 ) ] += d_b [ ( i << 2 ) + 3 ] * res [ k + 12 ] ; } } c_res [ 0 ] = 1.0
- ( x [ 7 ] * x [ 7 ] + x [ 8 ] * x [ 8 ] ) * 2.0 ; c_res [ 4 ] = ( x [ 6 ] *
x [ 7 ] - x [ 8 ] * x [ 5 ] ) * 2.0 ; c_res [ 8 ] = ( x [ 6 ] * x [ 8 ] + x [
7 ] * x [ 5 ] ) * 2.0 ; c_res [ 12 ] = 0.0 ; c_res [ 1 ] = ( x [ 6 ] * x [ 7
] + x [ 8 ] * x [ 5 ] ) * 2.0 ; c_res [ 5 ] = 1.0 - ( x [ 6 ] * x [ 6 ] + x [
8 ] * x [ 8 ] ) * 2.0 ; c_res [ 9 ] = ( x [ 7 ] * x [ 8 ] - x [ 6 ] * x [ 5 ]
) * 2.0 ; c_res [ 13 ] = 0.0 ; c_res [ 2 ] = ( x [ 6 ] * x [ 8 ] - x [ 7 ] *
x [ 5 ] ) * 2.0 ; c_res [ 6 ] = ( x [ 7 ] * x [ 8 ] + x [ 6 ] * x [ 5 ] ) *
2.0 ; c_res [ 10 ] = 1.0 - ( x [ 6 ] * x [ 6 ] + x [ 7 ] * x [ 7 ] ) * 2.0 ;
c_res [ 14 ] = 0.0 ; c_res [ 3 ] = 0.0 ; c_res [ 7 ] = 0.0 ; c_res [ 11 ] =
0.0 ; c_res [ 15 ] = 1.0 ; for ( k = 0 ; k < 4 ; k ++ ) { for ( i = 0 ; i < 4
; i ++ ) { res [ k + ( i << 2 ) ] = 0.0 ; res [ k + ( i << 2 ) ] += c_res [ i
<< 2 ] * b_res [ k ] ; res [ k + ( i << 2 ) ] += c_res [ ( i << 2 ) + 1 ] *
b_res [ k + 4 ] ; res [ k + ( i << 2 ) ] += c_res [ ( i << 2 ) + 2 ] * b_res
[ k + 8 ] ; res [ k + ( i << 2 ) ] += c_res [ ( i << 2 ) + 3 ] * b_res [ k +
12 ] ; } for ( i = 0 ; i < 4 ; i ++ ) { a [ k + ( i << 2 ) ] = 0.0 ; a [ k +
( i << 2 ) ] += b [ i << 2 ] * res [ k ] ; a [ k + ( i << 2 ) ] += b [ ( i <<
2 ) + 1 ] * res [ k + 4 ] ; a [ k + ( i << 2 ) ] += b [ ( i << 2 ) + 2 ] *
res [ k + 8 ] ; a [ k + ( i << 2 ) ] += b [ ( i << 2 ) + 3 ] * res [ k + 12 ]
; } } a5lwlpmpfx ( a , & Bvals [ 0 ] , & Bvals [ 1 ] , & Bvals [ 2 ] , &
Bvals [ 3 ] , & Bvals [ 4 ] , & Bvals [ 5 ] , & Bvals [ 6 ] ) ; e_res [ 12 ]
= 0.0 ; e_res [ 13 ] = 0.0 ; e_res [ 10 ] = 1.0 ; e_res [ 14 ] = 0.0 ; e_res
[ 3 ] = 0.0 ; e_res [ 7 ] = 0.0 ; e_res [ 11 ] = 0.0 ; e_res [ 15 ] = 1.0 ;
for ( k = 0 ; k < 4 ; k ++ ) { for ( i = 0 ; i < 4 ; i ++ ) { res [ k + ( i
<< 2 ) ] = 0.0 ; res [ k + ( i << 2 ) ] += e_res [ i << 2 ] * c_a [ k ] ; res
[ k + ( i << 2 ) ] += e_res [ ( i << 2 ) + 1 ] * c_a [ k + 4 ] ; res [ k + (
i << 2 ) ] += e_res [ ( i << 2 ) + 2 ] * c_a [ k + 8 ] ; res [ k + ( i << 2 )
] += e_res [ ( i << 2 ) + 3 ] * c_a [ k + 12 ] ; } for ( i = 0 ; i < 4 ; i ++
) { a [ k + ( i << 2 ) ] = 0.0 ; a [ k + ( i << 2 ) ] += e_b [ i << 2 ] * res
[ k ] ; a [ k + ( i << 2 ) ] += e_b [ ( i << 2 ) + 1 ] * res [ k + 4 ] ; a [
k + ( i << 2 ) ] += e_b [ ( i << 2 ) + 2 ] * res [ k + 8 ] ; a [ k + ( i << 2
) ] += e_b [ ( i << 2 ) + 3 ] * res [ k + 12 ] ; } } b_res [ 0 ] = 1.0 - ( x
[ 12 ] * x [ 12 ] + x [ 13 ] * x [ 13 ] ) * 2.0 ; b_res [ 4 ] = ( x [ 11 ] *
x [ 12 ] - x [ 13 ] * x [ 10 ] ) * 2.0 ; b_res [ 8 ] = ( x [ 11 ] * x [ 13 ]
+ x [ 12 ] * x [ 10 ] ) * 2.0 ; b_res [ 12 ] = 0.0 ; b_res [ 1 ] = ( x [ 11 ]
* x [ 12 ] + x [ 13 ] * x [ 10 ] ) * 2.0 ; b_res [ 5 ] = 1.0 - ( x [ 11 ] * x
[ 11 ] + x [ 13 ] * x [ 13 ] ) * 2.0 ; b_res [ 9 ] = ( x [ 12 ] * x [ 13 ] -
x [ 11 ] * x [ 10 ] ) * 2.0 ; b_res [ 13 ] = 0.0 ; b_res [ 2 ] = ( x [ 11 ] *
x [ 13 ] - x [ 12 ] * x [ 10 ] ) * 2.0 ; b_res [ 6 ] = ( x [ 12 ] * x [ 13 ]
+ x [ 11 ] * x [ 10 ] ) * 2.0 ; b_res [ 10 ] = 1.0 - ( x [ 11 ] * x [ 11 ] +
x [ 12 ] * x [ 12 ] ) * 2.0 ; b_res [ 14 ] = 0.0 ; b_res [ 3 ] = 0.0 ; b_res
[ 7 ] = 0.0 ; b_res [ 11 ] = 0.0 ; b_res [ 15 ] = 1.0 ; for ( k = 0 ; k < 4 ;
k ++ ) { for ( i = 0 ; i < 4 ; i ++ ) { res [ k + ( i << 2 ) ] = 0.0 ; res [
k + ( i << 2 ) ] += b_res [ i << 2 ] * a [ k ] ; res [ k + ( i << 2 ) ] +=
b_res [ ( i << 2 ) + 1 ] * a [ k + 4 ] ; res [ k + ( i << 2 ) ] += b_res [ (
i << 2 ) + 2 ] * a [ k + 8 ] ; res [ k + ( i << 2 ) ] += b_res [ ( i << 2 ) +
3 ] * a [ k + 12 ] ; } for ( i = 0 ; i < 4 ; i ++ ) { e_res [ k + ( i << 2 )
] = 0.0 ; e_res [ k + ( i << 2 ) ] += d_b [ i << 2 ] * res [ k ] ; e_res [ k
+ ( i << 2 ) ] += d_b [ ( i << 2 ) + 1 ] * res [ k + 4 ] ; e_res [ k + ( i <<
2 ) ] += d_b [ ( i << 2 ) + 2 ] * res [ k + 8 ] ; e_res [ k + ( i << 2 ) ] +=
d_b [ ( i << 2 ) + 3 ] * res [ k + 12 ] ; } } b_res [ 0 ] = 1.0 - ( x [ 16 ]
* x [ 16 ] + x [ 17 ] * x [ 17 ] ) * 2.0 ; b_res [ 4 ] = ( x [ 15 ] * x [ 16
] - x [ 17 ] * x [ 14 ] ) * 2.0 ; b_res [ 8 ] = ( x [ 15 ] * x [ 17 ] + x [
16 ] * x [ 14 ] ) * 2.0 ; b_res [ 12 ] = 0.0 ; b_res [ 1 ] = ( x [ 15 ] * x [
16 ] + x [ 17 ] * x [ 14 ] ) * 2.0 ; b_res [ 5 ] = 1.0 - ( x [ 15 ] * x [ 15
] + x [ 17 ] * x [ 17 ] ) * 2.0 ; b_res [ 9 ] = ( x [ 16 ] * x [ 17 ] - x [
15 ] * x [ 14 ] ) * 2.0 ; b_res [ 13 ] = 0.0 ; b_res [ 2 ] = ( x [ 15 ] * x [
17 ] - x [ 16 ] * x [ 14 ] ) * 2.0 ; b_res [ 6 ] = ( x [ 16 ] * x [ 17 ] + x
[ 15 ] * x [ 14 ] ) * 2.0 ; b_res [ 10 ] = 1.0 - ( x [ 15 ] * x [ 15 ] + x [
16 ] * x [ 16 ] ) * 2.0 ; b_res [ 14 ] = 0.0 ; b_res [ 3 ] = 0.0 ; b_res [ 7
] = 0.0 ; b_res [ 11 ] = 0.0 ; b_res [ 15 ] = 1.0 ; for ( k = 0 ; k < 4 ; k
++ ) { for ( i = 0 ; i < 4 ; i ++ ) { res [ k + ( i << 2 ) ] = 0.0 ; res [ k
+ ( i << 2 ) ] += b_res [ i << 2 ] * e_res [ k ] ; res [ k + ( i << 2 ) ] +=
b_res [ ( i << 2 ) + 1 ] * e_res [ k + 4 ] ; res [ k + ( i << 2 ) ] += b_res
[ ( i << 2 ) + 2 ] * e_res [ k + 8 ] ; res [ k + ( i << 2 ) ] += b_res [ ( i
<< 2 ) + 3 ] * e_res [ k + 12 ] ; } for ( i = 0 ; i < 4 ; i ++ ) { a [ k + (
i << 2 ) ] = 0.0 ; a [ k + ( i << 2 ) ] += b_b [ i << 2 ] * res [ k ] ; a [ k
+ ( i << 2 ) ] += b_b [ ( i << 2 ) + 1 ] * res [ k + 4 ] ; a [ k + ( i << 2 )
] += b_b [ ( i << 2 ) + 2 ] * res [ k + 8 ] ; a [ k + ( i << 2 ) ] += b_b [ (
i << 2 ) + 3 ] * res [ k + 12 ] ; } } a5lwlpmpfx ( a , & Cvals [ 0 ] , &
Cvals [ 1 ] , & Cvals [ 2 ] , & Cvals [ 3 ] , & Cvals [ 4 ] , & Cvals [ 5 ] ,
& Cvals [ 6 ] ) ; for ( k = 0 ; k < 7 ; k ++ ) { error [ k ] = Avals [ k ] -
Bvals [ k ] ; error [ k + 7 ] = Bvals [ k ] - Cvals [ k ] ; error [ k + 14 ]
= Cvals [ k ] - Avals [ k ] ; } for ( k = 0 ; k < 21 ; k ++ ) { z1 [ k ] =
error [ k ] * error [ k ] ; } * fval = z1 [ 0 ] ; for ( k = 0 ; k < 20 ; k ++
) { * fval += z1 [ k + 1 ] ; } * status = 1 ; if ( muDoubleScalarIsInf ( *
fval ) || muDoubleScalarIsNaN ( * fval ) ) { if ( muDoubleScalarIsNaN ( *
fval ) ) { * status = - 6 ; } else if ( * fval < 0.0 ) { * status = - 4 ; }
else { * status = - 5 ; } } } static int32_T pawujf5ux31 ( const real_T x [
18 ] , real_T Ceq_workspace [ 4 ] ) { int32_T status ; boolean_T allFinite ;
int32_T idx_current ; Ceq_workspace [ 0 ] = ( ( ( x [ 1 ] * x [ 1 ] + x [ 2 ]
* x [ 2 ] ) + x [ 3 ] * x [ 3 ] ) + x [ 4 ] * x [ 4 ] ) - 1.0 ; Ceq_workspace
[ 1 ] = ( ( ( x [ 5 ] * x [ 5 ] + x [ 6 ] * x [ 6 ] ) + x [ 7 ] * x [ 7 ] ) +
x [ 8 ] * x [ 8 ] ) - 1.0 ; Ceq_workspace [ 2 ] = ( ( ( x [ 10 ] * x [ 10 ] +
x [ 11 ] * x [ 11 ] ) + x [ 12 ] * x [ 12 ] ) + x [ 13 ] * x [ 13 ] ) - 1.0 ;
Ceq_workspace [ 3 ] = ( ( ( x [ 14 ] * x [ 14 ] + x [ 15 ] * x [ 15 ] ) + x [
16 ] * x [ 16 ] ) + x [ 17 ] * x [ 17 ] ) - 1.0 ; status = 1 ; allFinite =
true ; idx_current = 0 ; while ( allFinite && ( idx_current + 1 <= 4 ) ) {
allFinite = ( ( ! muDoubleScalarIsInf ( Ceq_workspace [ idx_current ] ) ) &&
( ! muDoubleScalarIsNaN ( Ceq_workspace [ idx_current ] ) ) ) ; idx_current
++ ; } if ( ! allFinite ) { idx_current -- ; if ( muDoubleScalarIsNaN (
Ceq_workspace [ idx_current ] ) ) { status = - 3 ; } else if ( Ceq_workspace
[ idx_current ] < 0.0 ) { status = - 1 ; } else { status = - 2 ; } } return
status ; } static void otclemyw5hd ( const real_T
obj_objfun_tunableEnvironment [ 4 ] , const real_T x [ 18 ] , real_T
Ceq_workspace [ 4 ] , real_T * fval , int32_T * status ) { ibqyp0ury0q (
obj_objfun_tunableEnvironment , x , fval , status ) ; if ( * status == 1 ) {
* status = pawujf5ux31 ( x , Ceq_workspace ) ; } } static void dj2cbrorw3kdls
( const real_T objfun_tunableEnvironment [ 4 ] , dxs1et3yod * obj ) { int32_T
idx ; obj -> objfun . tunableEnvironment [ 0 ] = objfun_tunableEnvironment [
0 ] ; obj -> objfun . tunableEnvironment [ 1 ] = objfun_tunableEnvironment [
1 ] ; obj -> objfun . tunableEnvironment [ 2 ] = objfun_tunableEnvironment [
2 ] ; obj -> objfun . tunableEnvironment [ 3 ] = objfun_tunableEnvironment [
3 ] ; obj -> f_1 = 0.0 ; obj -> f_2 = 0.0 ; obj -> nVar = 18 ; obj -> mIneq =
0 ; obj -> mEq = 4 ; obj -> numEvals = 0 ; obj -> SpecifyObjectiveGradient =
false ; obj -> SpecifyConstraintGradient = false ; obj ->
FiniteDifferenceType = 0 ; for ( idx = 0 ; idx < 18 ; idx ++ ) { obj -> hasLB
[ idx ] = false ; obj -> hasUB [ idx ] = false ; } obj -> hasBounds = false ;
} static boolean_T o4hbmaeodi3 ( const real_T obj_objfun_tunableEnvironment [
4 ] , real_T * fplus , real_T cEqPlus [ 4 ] , int32_T dim , real_T delta ,
real_T xk [ 18 ] ) { boolean_T evalOK ; real_T temp ; int32_T idx ; real_T
Avals [ 7 ] ; real_T Bvals [ 7 ] ; real_T Cvals [ 7 ] ; real_T error [ 21 ] ;
real_T x ; real_T b_x ; real_T z1 [ 21 ] ; real_T res [ 16 ] ; real_T a [ 16
] ; real_T b_res [ 16 ] ; real_T c_res [ 16 ] ; real_T e_res [ 16 ] ; int32_T
i ; static const real_T a_p [ 16 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.265 , 0.0 , 0.014 , 1.0 } ; static
const real_T b_a [ 16 ] = { 0.93058059048379183 , 0.36608709976566678 , 0.0 ,
0.0 , - 0.36608709976566678 , 0.93058059048379183 , 0.0 , 0.0 , 0.0 , 0.0 ,
1.0 , 0.0 , 0.139807669447128 , 0.0549998406976098 , - 0.051 , 1.0 } ; static
const real_T e_b [ 16 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 1.0 , 0.0 , 0.085 , 0.0 , - 0.0245 , 1.0 } ; static const real_T
d_b [ 16 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
1.0 , 0.0 , 0.11 , 0.0 , 0.0 , 1.0 } ; static const real_T b [ 16 ] = { 1.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , - 0.015 , -
0.029 , 0.0965 , 1.0 } ; static const real_T c_a [ 16 ] = {
0.93058059048379183 , - 0.366087099765667 , 0.0 , 0.0 , 0.366087099765667 ,
0.93058059048379183 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.139807669447128 ,
- 0.0549998406976098 , - 0.051 , 1.0 } ; static const real_T b_b [ 16 ] = {
1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , -
0.015 , 0.029 , 0.0965 , 1.0 } ; temp = xk [ dim - 1 ] ; xk [ dim - 1 ] +=
delta ; x = muDoubleScalarCos ( xk [ 0 ] / 2.0 ) ; b_x = muDoubleScalarSin (
xk [ 0 ] / 2.0 ) ; b_res [ 0 ] = 1.0 - b_x * b_x * 2.0 ; b_res [ 4 ] = ( 0.0
- b_x * x ) * 2.0 ; b_res [ 8 ] = ( 0.0 * b_x + 0.0 * x ) * 2.0 ; b_res [ 1 ]
= b_x * x * 2.0 ; b_res [ 5 ] = 1.0 - b_x * b_x * 2.0 ; b_res [ 9 ] = ( 0.0 *
b_x - 0.0 * x ) * 2.0 ; b_res [ 2 ] = ( 0.0 * b_x - 0.0 * x ) * 2.0 ; b_res [
6 ] = ( 0.0 * b_x + 0.0 * x ) * 2.0 ; x = muDoubleScalarCos ( xk [ 9 ] / 2.0
) ; b_x = muDoubleScalarSin ( xk [ 9 ] / 2.0 ) ; e_res [ 0 ] = 1.0 - b_x *
b_x * 2.0 ; e_res [ 4 ] = ( 0.0 - b_x * x ) * 2.0 ; e_res [ 8 ] = ( 0.0 * b_x
+ 0.0 * x ) * 2.0 ; e_res [ 1 ] = b_x * x * 2.0 ; e_res [ 5 ] = 1.0 - b_x *
b_x * 2.0 ; e_res [ 9 ] = ( 0.0 * b_x - 0.0 * x ) * 2.0 ; e_res [ 2 ] = ( 0.0
* b_x - 0.0 * x ) * 2.0 ; e_res [ 6 ] = ( 0.0 * b_x + 0.0 * x ) * 2.0 ; res [
0 ] = 1.0 - ( obj_objfun_tunableEnvironment [ 2 ] *
obj_objfun_tunableEnvironment [ 2 ] + obj_objfun_tunableEnvironment [ 3 ] *
obj_objfun_tunableEnvironment [ 3 ] ) * 2.0 ; res [ 4 ] = (
obj_objfun_tunableEnvironment [ 1 ] * obj_objfun_tunableEnvironment [ 2 ] -
obj_objfun_tunableEnvironment [ 3 ] * obj_objfun_tunableEnvironment [ 0 ] ) *
2.0 ; res [ 8 ] = ( obj_objfun_tunableEnvironment [ 1 ] *
obj_objfun_tunableEnvironment [ 3 ] + obj_objfun_tunableEnvironment [ 2 ] *
obj_objfun_tunableEnvironment [ 0 ] ) * 2.0 ; res [ 12 ] = 0.0 ; res [ 1 ] =
( obj_objfun_tunableEnvironment [ 1 ] * obj_objfun_tunableEnvironment [ 2 ] +
obj_objfun_tunableEnvironment [ 3 ] * obj_objfun_tunableEnvironment [ 0 ] ) *
2.0 ; res [ 5 ] = 1.0 - ( obj_objfun_tunableEnvironment [ 1 ] *
obj_objfun_tunableEnvironment [ 1 ] + obj_objfun_tunableEnvironment [ 3 ] *
obj_objfun_tunableEnvironment [ 3 ] ) * 2.0 ; res [ 9 ] = (
obj_objfun_tunableEnvironment [ 2 ] * obj_objfun_tunableEnvironment [ 3 ] -
obj_objfun_tunableEnvironment [ 1 ] * obj_objfun_tunableEnvironment [ 0 ] ) *
2.0 ; res [ 13 ] = 0.0 ; res [ 2 ] = ( obj_objfun_tunableEnvironment [ 1 ] *
obj_objfun_tunableEnvironment [ 3 ] - obj_objfun_tunableEnvironment [ 2 ] *
obj_objfun_tunableEnvironment [ 0 ] ) * 2.0 ; res [ 6 ] = (
obj_objfun_tunableEnvironment [ 2 ] * obj_objfun_tunableEnvironment [ 3 ] +
obj_objfun_tunableEnvironment [ 1 ] * obj_objfun_tunableEnvironment [ 0 ] ) *
2.0 ; res [ 10 ] = 1.0 - ( obj_objfun_tunableEnvironment [ 1 ] *
obj_objfun_tunableEnvironment [ 1 ] + obj_objfun_tunableEnvironment [ 2 ] *
obj_objfun_tunableEnvironment [ 2 ] ) * 2.0 ; res [ 14 ] = 0.0 ; res [ 3 ] =
0.0 ; res [ 7 ] = 0.0 ; res [ 11 ] = 0.0 ; res [ 15 ] = 1.0 ; for ( idx = 0 ;
idx < 4 ; idx ++ ) { for ( i = 0 ; i < 4 ; i ++ ) { a [ i + ( idx << 2 ) ] =
0.0 ; a [ i + ( idx << 2 ) ] += res [ idx << 2 ] * a_p [ i ] ; a [ i + ( idx
<< 2 ) ] += res [ ( idx << 2 ) + 1 ] * a_p [ i + 4 ] ; a [ i + ( idx << 2 ) ]
+= res [ ( idx << 2 ) + 2 ] * a_p [ i + 8 ] ; a [ i + ( idx << 2 ) ] += res [
( idx << 2 ) + 3 ] * a_p [ i + 12 ] ; } } a5lwlpmpfx ( a , & Avals [ 0 ] , &
Avals [ 1 ] , & Avals [ 2 ] , & Avals [ 3 ] , & Avals [ 4 ] , & Avals [ 5 ] ,
& Avals [ 6 ] ) ; b_res [ 12 ] = 0.0 ; b_res [ 13 ] = 0.0 ; b_res [ 10 ] =
1.0 ; b_res [ 14 ] = 0.0 ; b_res [ 3 ] = 0.0 ; b_res [ 7 ] = 0.0 ; b_res [ 11
] = 0.0 ; b_res [ 15 ] = 1.0 ; for ( idx = 0 ; idx < 4 ; idx ++ ) { for ( i =
0 ; i < 4 ; i ++ ) { res [ idx + ( i << 2 ) ] = 0.0 ; res [ idx + ( i << 2 )
] += b_res [ i << 2 ] * b_a [ idx ] ; res [ idx + ( i << 2 ) ] += b_res [ ( i
<< 2 ) + 1 ] * b_a [ idx + 4 ] ; res [ idx + ( i << 2 ) ] += b_res [ ( i << 2
) + 2 ] * b_a [ idx + 8 ] ; res [ idx + ( i << 2 ) ] += b_res [ ( i << 2 ) +
3 ] * b_a [ idx + 12 ] ; } for ( i = 0 ; i < 4 ; i ++ ) { a [ idx + ( i << 2
) ] = 0.0 ; a [ idx + ( i << 2 ) ] += e_b [ i << 2 ] * res [ idx ] ; a [ idx
+ ( i << 2 ) ] += e_b [ ( i << 2 ) + 1 ] * res [ idx + 4 ] ; a [ idx + ( i <<
2 ) ] += e_b [ ( i << 2 ) + 2 ] * res [ idx + 8 ] ; a [ idx + ( i << 2 ) ] +=
e_b [ ( i << 2 ) + 3 ] * res [ idx + 12 ] ; } } c_res [ 0 ] = 1.0 - ( xk [ 3
] * xk [ 3 ] + xk [ 4 ] * xk [ 4 ] ) * 2.0 ; c_res [ 4 ] = ( xk [ 2 ] * xk [
3 ] - xk [ 4 ] * xk [ 1 ] ) * 2.0 ; c_res [ 8 ] = ( xk [ 2 ] * xk [ 4 ] + xk
[ 3 ] * xk [ 1 ] ) * 2.0 ; c_res [ 12 ] = 0.0 ; c_res [ 1 ] = ( xk [ 2 ] * xk
[ 3 ] + xk [ 4 ] * xk [ 1 ] ) * 2.0 ; c_res [ 5 ] = 1.0 - ( xk [ 2 ] * xk [ 2
] + xk [ 4 ] * xk [ 4 ] ) * 2.0 ; c_res [ 9 ] = ( xk [ 3 ] * xk [ 4 ] - xk [
2 ] * xk [ 1 ] ) * 2.0 ; c_res [ 13 ] = 0.0 ; c_res [ 2 ] = ( xk [ 2 ] * xk [
4 ] - xk [ 3 ] * xk [ 1 ] ) * 2.0 ; c_res [ 6 ] = ( xk [ 3 ] * xk [ 4 ] + xk
[ 2 ] * xk [ 1 ] ) * 2.0 ; c_res [ 10 ] = 1.0 - ( xk [ 2 ] * xk [ 2 ] + xk [
3 ] * xk [ 3 ] ) * 2.0 ; c_res [ 14 ] = 0.0 ; c_res [ 3 ] = 0.0 ; c_res [ 7 ]
= 0.0 ; c_res [ 11 ] = 0.0 ; c_res [ 15 ] = 1.0 ; for ( idx = 0 ; idx < 4 ;
idx ++ ) { for ( i = 0 ; i < 4 ; i ++ ) { res [ idx + ( i << 2 ) ] = 0.0 ;
res [ idx + ( i << 2 ) ] += c_res [ i << 2 ] * a [ idx ] ; res [ idx + ( i <<
2 ) ] += c_res [ ( i << 2 ) + 1 ] * a [ idx + 4 ] ; res [ idx + ( i << 2 ) ]
+= c_res [ ( i << 2 ) + 2 ] * a [ idx + 8 ] ; res [ idx + ( i << 2 ) ] +=
c_res [ ( i << 2 ) + 3 ] * a [ idx + 12 ] ; } for ( i = 0 ; i < 4 ; i ++ ) {
b_res [ idx + ( i << 2 ) ] = 0.0 ; b_res [ idx + ( i << 2 ) ] += d_b [ i << 2
] * res [ idx ] ; b_res [ idx + ( i << 2 ) ] += d_b [ ( i << 2 ) + 1 ] * res
[ idx + 4 ] ; b_res [ idx + ( i << 2 ) ] += d_b [ ( i << 2 ) + 2 ] * res [
idx + 8 ] ; b_res [ idx + ( i << 2 ) ] += d_b [ ( i << 2 ) + 3 ] * res [ idx
+ 12 ] ; } } c_res [ 0 ] = 1.0 - ( xk [ 7 ] * xk [ 7 ] + xk [ 8 ] * xk [ 8 ]
) * 2.0 ; c_res [ 4 ] = ( xk [ 6 ] * xk [ 7 ] - xk [ 8 ] * xk [ 5 ] ) * 2.0 ;
c_res [ 8 ] = ( xk [ 6 ] * xk [ 8 ] + xk [ 7 ] * xk [ 5 ] ) * 2.0 ; c_res [
12 ] = 0.0 ; c_res [ 1 ] = ( xk [ 6 ] * xk [ 7 ] + xk [ 8 ] * xk [ 5 ] ) *
2.0 ; c_res [ 5 ] = 1.0 - ( xk [ 6 ] * xk [ 6 ] + xk [ 8 ] * xk [ 8 ] ) * 2.0
; c_res [ 9 ] = ( xk [ 7 ] * xk [ 8 ] - xk [ 6 ] * xk [ 5 ] ) * 2.0 ; c_res [
13 ] = 0.0 ; c_res [ 2 ] = ( xk [ 6 ] * xk [ 8 ] - xk [ 7 ] * xk [ 5 ] ) *
2.0 ; c_res [ 6 ] = ( xk [ 7 ] * xk [ 8 ] + xk [ 6 ] * xk [ 5 ] ) * 2.0 ;
c_res [ 10 ] = 1.0 - ( xk [ 6 ] * xk [ 6 ] + xk [ 7 ] * xk [ 7 ] ) * 2.0 ;
c_res [ 14 ] = 0.0 ; c_res [ 3 ] = 0.0 ; c_res [ 7 ] = 0.0 ; c_res [ 11 ] =
0.0 ; c_res [ 15 ] = 1.0 ; for ( idx = 0 ; idx < 4 ; idx ++ ) { for ( i = 0 ;
i < 4 ; i ++ ) { res [ idx + ( i << 2 ) ] = 0.0 ; res [ idx + ( i << 2 ) ] +=
c_res [ i << 2 ] * b_res [ idx ] ; res [ idx + ( i << 2 ) ] += c_res [ ( i <<
2 ) + 1 ] * b_res [ idx + 4 ] ; res [ idx + ( i << 2 ) ] += c_res [ ( i << 2
) + 2 ] * b_res [ idx + 8 ] ; res [ idx + ( i << 2 ) ] += c_res [ ( i << 2 )
+ 3 ] * b_res [ idx + 12 ] ; } for ( i = 0 ; i < 4 ; i ++ ) { a [ idx + ( i
<< 2 ) ] = 0.0 ; a [ idx + ( i << 2 ) ] += b [ i << 2 ] * res [ idx ] ; a [
idx + ( i << 2 ) ] += b [ ( i << 2 ) + 1 ] * res [ idx + 4 ] ; a [ idx + ( i
<< 2 ) ] += b [ ( i << 2 ) + 2 ] * res [ idx + 8 ] ; a [ idx + ( i << 2 ) ]
+= b [ ( i << 2 ) + 3 ] * res [ idx + 12 ] ; } } a5lwlpmpfx ( a , & Bvals [ 0
] , & Bvals [ 1 ] , & Bvals [ 2 ] , & Bvals [ 3 ] , & Bvals [ 4 ] , & Bvals [
5 ] , & Bvals [ 6 ] ) ; e_res [ 12 ] = 0.0 ; e_res [ 13 ] = 0.0 ; e_res [ 10
] = 1.0 ; e_res [ 14 ] = 0.0 ; e_res [ 3 ] = 0.0 ; e_res [ 7 ] = 0.0 ; e_res
[ 11 ] = 0.0 ; e_res [ 15 ] = 1.0 ; for ( idx = 0 ; idx < 4 ; idx ++ ) { for
( i = 0 ; i < 4 ; i ++ ) { res [ idx + ( i << 2 ) ] = 0.0 ; res [ idx + ( i
<< 2 ) ] += e_res [ i << 2 ] * c_a [ idx ] ; res [ idx + ( i << 2 ) ] +=
e_res [ ( i << 2 ) + 1 ] * c_a [ idx + 4 ] ; res [ idx + ( i << 2 ) ] +=
e_res [ ( i << 2 ) + 2 ] * c_a [ idx + 8 ] ; res [ idx + ( i << 2 ) ] +=
e_res [ ( i << 2 ) + 3 ] * c_a [ idx + 12 ] ; } for ( i = 0 ; i < 4 ; i ++ )
{ a [ idx + ( i << 2 ) ] = 0.0 ; a [ idx + ( i << 2 ) ] += e_b [ i << 2 ] *
res [ idx ] ; a [ idx + ( i << 2 ) ] += e_b [ ( i << 2 ) + 1 ] * res [ idx +
4 ] ; a [ idx + ( i << 2 ) ] += e_b [ ( i << 2 ) + 2 ] * res [ idx + 8 ] ; a
[ idx + ( i << 2 ) ] += e_b [ ( i << 2 ) + 3 ] * res [ idx + 12 ] ; } } b_res
[ 0 ] = 1.0 - ( xk [ 12 ] * xk [ 12 ] + xk [ 13 ] * xk [ 13 ] ) * 2.0 ; b_res
[ 4 ] = ( xk [ 11 ] * xk [ 12 ] - xk [ 13 ] * xk [ 10 ] ) * 2.0 ; b_res [ 8 ]
= ( xk [ 11 ] * xk [ 13 ] + xk [ 12 ] * xk [ 10 ] ) * 2.0 ; b_res [ 12 ] =
0.0 ; b_res [ 1 ] = ( xk [ 11 ] * xk [ 12 ] + xk [ 13 ] * xk [ 10 ] ) * 2.0 ;
b_res [ 5 ] = 1.0 - ( xk [ 11 ] * xk [ 11 ] + xk [ 13 ] * xk [ 13 ] ) * 2.0 ;
b_res [ 9 ] = ( xk [ 12 ] * xk [ 13 ] - xk [ 11 ] * xk [ 10 ] ) * 2.0 ; b_res
[ 13 ] = 0.0 ; b_res [ 2 ] = ( xk [ 11 ] * xk [ 13 ] - xk [ 12 ] * xk [ 10 ]
) * 2.0 ; b_res [ 6 ] = ( xk [ 12 ] * xk [ 13 ] + xk [ 11 ] * xk [ 10 ] ) *
2.0 ; b_res [ 10 ] = 1.0 - ( xk [ 11 ] * xk [ 11 ] + xk [ 12 ] * xk [ 12 ] )
* 2.0 ; b_res [ 14 ] = 0.0 ; b_res [ 3 ] = 0.0 ; b_res [ 7 ] = 0.0 ; b_res [
11 ] = 0.0 ; b_res [ 15 ] = 1.0 ; for ( idx = 0 ; idx < 4 ; idx ++ ) { for (
i = 0 ; i < 4 ; i ++ ) { res [ idx + ( i << 2 ) ] = 0.0 ; res [ idx + ( i <<
2 ) ] += b_res [ i << 2 ] * a [ idx ] ; res [ idx + ( i << 2 ) ] += b_res [ (
i << 2 ) + 1 ] * a [ idx + 4 ] ; res [ idx + ( i << 2 ) ] += b_res [ ( i << 2
) + 2 ] * a [ idx + 8 ] ; res [ idx + ( i << 2 ) ] += b_res [ ( i << 2 ) + 3
] * a [ idx + 12 ] ; } for ( i = 0 ; i < 4 ; i ++ ) { e_res [ idx + ( i << 2
) ] = 0.0 ; e_res [ idx + ( i << 2 ) ] += d_b [ i << 2 ] * res [ idx ] ;
e_res [ idx + ( i << 2 ) ] += d_b [ ( i << 2 ) + 1 ] * res [ idx + 4 ] ;
e_res [ idx + ( i << 2 ) ] += d_b [ ( i << 2 ) + 2 ] * res [ idx + 8 ] ;
e_res [ idx + ( i << 2 ) ] += d_b [ ( i << 2 ) + 3 ] * res [ idx + 12 ] ; } }
b_res [ 0 ] = 1.0 - ( xk [ 16 ] * xk [ 16 ] + xk [ 17 ] * xk [ 17 ] ) * 2.0 ;
b_res [ 4 ] = ( xk [ 15 ] * xk [ 16 ] - xk [ 17 ] * xk [ 14 ] ) * 2.0 ; b_res
[ 8 ] = ( xk [ 15 ] * xk [ 17 ] + xk [ 16 ] * xk [ 14 ] ) * 2.0 ; b_res [ 12
] = 0.0 ; b_res [ 1 ] = ( xk [ 15 ] * xk [ 16 ] + xk [ 17 ] * xk [ 14 ] ) *
2.0 ; b_res [ 5 ] = 1.0 - ( xk [ 15 ] * xk [ 15 ] + xk [ 17 ] * xk [ 17 ] ) *
2.0 ; b_res [ 9 ] = ( xk [ 16 ] * xk [ 17 ] - xk [ 15 ] * xk [ 14 ] ) * 2.0 ;
b_res [ 13 ] = 0.0 ; b_res [ 2 ] = ( xk [ 15 ] * xk [ 17 ] - xk [ 16 ] * xk [
14 ] ) * 2.0 ; b_res [ 6 ] = ( xk [ 16 ] * xk [ 17 ] + xk [ 15 ] * xk [ 14 ]
) * 2.0 ; b_res [ 10 ] = 1.0 - ( xk [ 15 ] * xk [ 15 ] + xk [ 16 ] * xk [ 16
] ) * 2.0 ; b_res [ 14 ] = 0.0 ; b_res [ 3 ] = 0.0 ; b_res [ 7 ] = 0.0 ;
b_res [ 11 ] = 0.0 ; b_res [ 15 ] = 1.0 ; for ( idx = 0 ; idx < 4 ; idx ++ )
{ for ( i = 0 ; i < 4 ; i ++ ) { res [ idx + ( i << 2 ) ] = 0.0 ; res [ idx +
( i << 2 ) ] += b_res [ i << 2 ] * e_res [ idx ] ; res [ idx + ( i << 2 ) ]
+= b_res [ ( i << 2 ) + 1 ] * e_res [ idx + 4 ] ; res [ idx + ( i << 2 ) ] +=
b_res [ ( i << 2 ) + 2 ] * e_res [ idx + 8 ] ; res [ idx + ( i << 2 ) ] +=
b_res [ ( i << 2 ) + 3 ] * e_res [ idx + 12 ] ; } for ( i = 0 ; i < 4 ; i ++
) { a [ idx + ( i << 2 ) ] = 0.0 ; a [ idx + ( i << 2 ) ] += b_b [ i << 2 ] *
res [ idx ] ; a [ idx + ( i << 2 ) ] += b_b [ ( i << 2 ) + 1 ] * res [ idx +
4 ] ; a [ idx + ( i << 2 ) ] += b_b [ ( i << 2 ) + 2 ] * res [ idx + 8 ] ; a
[ idx + ( i << 2 ) ] += b_b [ ( i << 2 ) + 3 ] * res [ idx + 12 ] ; } }
a5lwlpmpfx ( a , & Cvals [ 0 ] , & Cvals [ 1 ] , & Cvals [ 2 ] , & Cvals [ 3
] , & Cvals [ 4 ] , & Cvals [ 5 ] , & Cvals [ 6 ] ) ; for ( idx = 0 ; idx < 7
; idx ++ ) { error [ idx ] = Avals [ idx ] - Bvals [ idx ] ; error [ idx + 7
] = Bvals [ idx ] - Cvals [ idx ] ; error [ idx + 14 ] = Cvals [ idx ] -
Avals [ idx ] ; } for ( idx = 0 ; idx < 21 ; idx ++ ) { z1 [ idx ] = error [
idx ] * error [ idx ] ; } * fplus = z1 [ 0 ] ; for ( idx = 0 ; idx < 20 ; idx
++ ) { * fplus += z1 [ idx + 1 ] ; } evalOK = ( ( ! muDoubleScalarIsInf ( *
fplus ) ) && ( ! muDoubleScalarIsNaN ( * fplus ) ) ) ; if ( evalOK ) {
cEqPlus [ 0 ] = ( ( ( xk [ 1 ] * xk [ 1 ] + xk [ 2 ] * xk [ 2 ] ) + xk [ 3 ]
* xk [ 3 ] ) + xk [ 4 ] * xk [ 4 ] ) - 1.0 ; cEqPlus [ 1 ] = ( ( ( xk [ 5 ] *
xk [ 5 ] + xk [ 6 ] * xk [ 6 ] ) + xk [ 7 ] * xk [ 7 ] ) + xk [ 8 ] * xk [ 8
] ) - 1.0 ; cEqPlus [ 2 ] = ( ( ( xk [ 10 ] * xk [ 10 ] + xk [ 11 ] * xk [ 11
] ) + xk [ 12 ] * xk [ 12 ] ) + xk [ 13 ] * xk [ 13 ] ) - 1.0 ; cEqPlus [ 3 ]
= ( ( ( xk [ 14 ] * xk [ 14 ] + xk [ 15 ] * xk [ 15 ] ) + xk [ 16 ] * xk [ 16
] ) + xk [ 17 ] * xk [ 17 ] ) - 1.0 ; idx = 0 ; while ( evalOK && ( idx + 1
<= 4 ) ) { evalOK = ( ( ! muDoubleScalarIsInf ( cEqPlus [ idx ] ) ) && ( !
muDoubleScalarIsNaN ( cEqPlus [ idx ] ) ) ) ; idx ++ ; } xk [ dim - 1 ] =
temp ; } return evalOK ; } static boolean_T ac5h1531rt3 ( dxs1et3yod * obj ,
real_T fCurrent , const real_T cEqCurrent [ 4 ] , real_T xk [ 18 ] , real_T
gradf [ 27 ] , real_T JacCeqTrans [ 108 ] ) { boolean_T evalOK ; real_T
deltaX ; real_T b ; real_T d [ 4 ] ; int32_T idx ; boolean_T exitg1 ;
boolean_T guard1 = false ; evalOK = true ; obj -> numEvals = 0 ; idx = 0 ;
exitg1 = false ; while ( ( ! exitg1 ) && ( idx < 18 ) ) { deltaX = ( 1.0 - (
real_T ) ( xk [ idx ] < 0.0 ) * 2.0 ) * 1.4901161193847656E-8 *
muDoubleScalarMax ( muDoubleScalarAbs ( xk [ idx ] ) , 1.0 ) ; b = obj -> f_1
; d [ 0 ] = obj -> cEq_1 [ 0 ] ; d [ 1 ] = obj -> cEq_1 [ 1 ] ; d [ 2 ] = obj
-> cEq_1 [ 2 ] ; d [ 3 ] = obj -> cEq_1 [ 3 ] ; evalOK = o4hbmaeodi3 ( obj ->
objfun . tunableEnvironment , & b , d , idx + 1 , deltaX , xk ) ; obj -> f_1
= b ; obj -> cEq_1 [ 0 ] = d [ 0 ] ; obj -> cEq_1 [ 1 ] = d [ 1 ] ; obj ->
cEq_1 [ 2 ] = d [ 2 ] ; obj -> cEq_1 [ 3 ] = d [ 3 ] ; obj -> numEvals ++ ;
guard1 = false ; if ( ! evalOK ) { deltaX = - deltaX ; evalOK = o4hbmaeodi3 (
obj -> objfun . tunableEnvironment , & b , d , idx + 1 , deltaX , xk ) ; obj
-> f_1 = b ; obj -> cEq_1 [ 0 ] = d [ 0 ] ; obj -> cEq_1 [ 1 ] = d [ 1 ] ;
obj -> cEq_1 [ 2 ] = d [ 2 ] ; obj -> cEq_1 [ 3 ] = d [ 3 ] ; obj -> numEvals
++ ; if ( ! evalOK ) { exitg1 = true ; } else { guard1 = true ; } } else {
guard1 = true ; } if ( guard1 ) { gradf [ idx ] = ( obj -> f_1 - fCurrent ) /
deltaX ; JacCeqTrans [ idx ] = ( obj -> cEq_1 [ 0 ] - cEqCurrent [ 0 ] ) /
deltaX ; JacCeqTrans [ idx + 27 ] = ( obj -> cEq_1 [ 1 ] - cEqCurrent [ 1 ] )
/ deltaX ; JacCeqTrans [ idx + 54 ] = ( obj -> cEq_1 [ 2 ] - cEqCurrent [ 2 ]
) / deltaX ; JacCeqTrans [ idx + 81 ] = ( obj -> cEq_1 [ 3 ] - cEqCurrent [ 3
] ) / deltaX ; idx ++ ; } } return evalOK ; } static void cdu0auzqs4ja (
nuprfhnilo * WorkingSet , const real_T cEq [ 4 ] ) { int32_T iw0 ; int32_T
iEq0 ; int32_T idx ; iw0 = 0 ; iEq0 = 0 ; for ( idx = 0 ; idx < 4 ; idx ++ )
{ WorkingSet -> beq [ idx ] = - cEq [ idx ] ; WorkingSet -> bwset [ idx ] =
WorkingSet -> beq [ idx ] ; memcpy ( & WorkingSet -> ATwset [ iw0 ] , &
WorkingSet -> Aeq [ iEq0 ] , 18U * sizeof ( real_T ) ) ; iw0 += 27 ; iEq0 +=
27 ; } } static void i0turdqqtq0 ( nuprfhnilo * obj ) { int32_T idx ; obj ->
Aeq [ obj -> nVar - 1 ] = 0.0 ; obj -> ATwset [ obj -> nVar - 1 ] = 0.0 ; obj
-> Aeq [ obj -> nVar + 26 ] = 0.0 ; obj -> ATwset [ obj -> nVar + 26 ] = 0.0
; obj -> Aeq [ obj -> nVar + 53 ] = 0.0 ; obj -> ATwset [ obj -> nVar + 53 ]
= 0.0 ; obj -> Aeq [ obj -> nVar + 80 ] = 0.0 ; obj -> ATwset [ obj -> nVar +
80 ] = 0.0 ; obj -> indexLB [ obj -> sizes [ 3 ] - 1 ] = obj -> nVar ; obj ->
lb [ obj -> nVar - 1 ] = 1.0E-5 ; for ( idx = 5 ; idx <= obj -> nActiveConstr
; idx ++ ) { obj -> ATwset [ ( obj -> nVar + 27 * ( idx - 1 ) ) - 1 ] = - 1.0
; } } static void eusryzwbaaa ( nuprfhnilo * obj , int32_T PROBLEM_TYPE ) {
int32_T idx_lb ; int32_T idx_col ; switch ( PROBLEM_TYPE ) { case 3 : obj ->
nVar = 18 ; obj -> mConstr = 4 ; for ( idx_col = 0 ; idx_col < 5 ; idx_col ++
) { obj -> sizes [ idx_col ] = obj -> sizesNormal [ idx_col ] ; } for (
idx_col = 0 ; idx_col < 6 ; idx_col ++ ) { obj -> isActiveIdx [ idx_col ] =
obj -> isActiveIdxNormal [ idx_col ] ; } break ; case 1 : obj -> nVar = 19 ;
obj -> mConstr = 5 ; for ( idx_col = 0 ; idx_col < 5 ; idx_col ++ ) { obj ->
sizes [ idx_col ] = obj -> sizesPhaseOne [ idx_col ] ; } for ( idx_col = 0 ;
idx_col < 6 ; idx_col ++ ) { obj -> isActiveIdx [ idx_col ] = obj ->
isActiveIdxPhaseOne [ idx_col ] ; } i0turdqqtq0 ( obj ) ; break ; case 2 :
obj -> nVar = 26 ; obj -> mConstr = 12 ; for ( idx_col = 0 ; idx_col < 5 ;
idx_col ++ ) { obj -> sizes [ idx_col ] = obj -> sizesRegularized [ idx_col ]
; } for ( idx_col = 0 ; idx_col < 6 ; idx_col ++ ) { obj -> isActiveIdx [
idx_col ] = obj -> isActiveIdxRegularized [ idx_col ] ; } if ( obj ->
probType != 4 ) { obj -> Aeq [ 18 ] = - 1.0 ; obj -> ATwset [ 18 ] = - 1.0 ;
for ( idx_lb = 19 ; idx_lb + 1 < 23 ; idx_lb ++ ) { obj -> Aeq [ idx_lb ] =
0.0 ; obj -> ATwset [ idx_lb ] = 0.0 ; } obj -> Aeq [ 22 ] = 1.0 ; obj ->
ATwset [ 22 ] = 1.0 ; for ( idx_lb = 23 ; idx_lb + 1 < 27 ; idx_lb ++ ) { obj
-> Aeq [ idx_lb ] = 0.0 ; obj -> ATwset [ idx_lb ] = 0.0 ; } for ( idx_lb =
18 ; idx_lb < 19 ; idx_lb ++ ) { obj -> Aeq [ idx_lb + 27 ] = 0.0 ; obj ->
ATwset [ idx_lb + 27 ] = 0.0 ; } obj -> Aeq [ 46 ] = - 1.0 ; obj -> ATwset [
46 ] = - 1.0 ; for ( idx_lb = 20 ; idx_lb + 1 < 23 ; idx_lb ++ ) { obj -> Aeq
[ idx_lb + 27 ] = 0.0 ; obj -> ATwset [ idx_lb + 27 ] = 0.0 ; } for ( idx_lb
= 22 ; idx_lb < 23 ; idx_lb ++ ) { obj -> Aeq [ idx_lb + 27 ] = 0.0 ; obj ->
ATwset [ idx_lb + 27 ] = 0.0 ; } obj -> Aeq [ 50 ] = 1.0 ; obj -> ATwset [ 50
] = 1.0 ; for ( idx_lb = 24 ; idx_lb + 1 < 27 ; idx_lb ++ ) { obj -> Aeq [
idx_lb + 27 ] = 0.0 ; obj -> ATwset [ idx_lb + 27 ] = 0.0 ; } for ( idx_lb =
18 ; idx_lb < 20 ; idx_lb ++ ) { obj -> Aeq [ idx_lb + 54 ] = 0.0 ; obj ->
ATwset [ idx_lb + 54 ] = 0.0 ; } obj -> Aeq [ 74 ] = - 1.0 ; obj -> ATwset [
74 ] = - 1.0 ; for ( idx_lb = 21 ; idx_lb + 1 < 23 ; idx_lb ++ ) { obj -> Aeq
[ idx_lb + 54 ] = 0.0 ; obj -> ATwset [ idx_lb + 54 ] = 0.0 ; } for ( idx_lb
= 22 ; idx_lb < 24 ; idx_lb ++ ) { obj -> Aeq [ idx_lb + 54 ] = 0.0 ; obj ->
ATwset [ idx_lb + 54 ] = 0.0 ; } obj -> Aeq [ 78 ] = 1.0 ; obj -> ATwset [ 78
] = 1.0 ; for ( idx_lb = 25 ; idx_lb + 1 < 27 ; idx_lb ++ ) { obj -> Aeq [
idx_lb + 54 ] = 0.0 ; obj -> ATwset [ idx_lb + 54 ] = 0.0 ; } for ( idx_lb =
18 ; idx_lb < 21 ; idx_lb ++ ) { obj -> Aeq [ idx_lb + 81 ] = 0.0 ; obj ->
ATwset [ idx_lb + 81 ] = 0.0 ; } obj -> Aeq [ 102 ] = - 1.0 ; obj -> ATwset [
102 ] = - 1.0 ; for ( idx_lb = 22 ; idx_lb < 25 ; idx_lb ++ ) { obj -> Aeq [
idx_lb + 81 ] = 0.0 ; obj -> ATwset [ idx_lb + 81 ] = 0.0 ; } obj -> Aeq [
106 ] = 1.0 ; obj -> ATwset [ 106 ] = 1.0 ; idx_lb = 18 ; for ( idx_col = 0 ;
idx_col < 8 ; idx_col ++ ) { idx_lb ++ ; obj -> indexLB [ idx_col ] = idx_lb
; obj -> lb [ idx_col + 18 ] = 0.0 ; } for ( idx_col = 4 ; idx_col < obj ->
nActiveConstr ; idx_col ++ ) { if ( obj -> Wid [ idx_col ] == 3 ) { for (
idx_lb = 19 ; idx_lb <= obj -> Wlocalidx [ idx_col ] + 17 ; idx_lb ++ ) { obj
-> ATwset [ ( idx_lb + 27 * idx_col ) - 1 ] = 0.0 ; } obj -> ATwset [ ( obj
-> Wlocalidx [ idx_col ] + 27 * idx_col ) + 17 ] = - 1.0 ; for ( idx_lb = obj
-> Wlocalidx [ idx_col ] + 18 ; idx_lb + 1 < 27 ; idx_lb ++ ) { obj -> ATwset
[ idx_lb + 27 * idx_col ] = 0.0 ; } } else { memset ( & obj -> ATwset [
idx_col * 27 + 18 ] , 0 , sizeof ( real_T ) << 3U ) ; } } } break ; default :
obj -> nVar = 27 ; obj -> mConstr = 13 ; for ( idx_col = 0 ; idx_col < 5 ;
idx_col ++ ) { obj -> sizes [ idx_col ] = obj -> sizesRegPhaseOne [ idx_col ]
; } for ( idx_col = 0 ; idx_col < 6 ; idx_col ++ ) { obj -> isActiveIdx [
idx_col ] = obj -> isActiveIdxRegPhaseOne [ idx_col ] ; } i0turdqqtq0 ( obj )
; break ; } obj -> probType = PROBLEM_TYPE ; } static void cbwacn3e4ri (
nuprfhnilo * obj ) { int32_T idx ; eusryzwbaaa ( obj , 3 ) ; for ( idx = 0 ;
idx < 9 ; idx ++ ) { obj -> isActiveConstr [ idx + 4 ] = false ; } obj ->
nWConstr [ 0 ] = 0 ; obj -> nWConstr [ 1 ] = 4 ; obj -> nWConstr [ 2 ] = 0 ;
obj -> nWConstr [ 3 ] = 0 ; obj -> nWConstr [ 4 ] = 0 ; obj -> nActiveConstr
= 4 ; obj -> Wid [ 0 ] = 2 ; obj -> Wlocalidx [ 0 ] = 1 ; obj ->
isActiveConstr [ 0 ] = true ; for ( idx = 0 ; idx < obj -> nVar ; idx ++ ) {
obj -> ATwset [ idx ] = obj -> Aeq [ idx ] ; } obj -> bwset [ 0 ] = obj ->
beq [ 0 ] ; obj -> Wid [ 1 ] = 2 ; obj -> Wlocalidx [ 1 ] = 2 ; obj ->
isActiveConstr [ 1 ] = true ; for ( idx = 0 ; idx < obj -> nVar ; idx ++ ) {
obj -> ATwset [ idx + 27 ] = obj -> Aeq [ idx + 27 ] ; } obj -> bwset [ 1 ] =
obj -> beq [ 1 ] ; obj -> Wid [ 2 ] = 2 ; obj -> Wlocalidx [ 2 ] = 3 ; obj ->
isActiveConstr [ 2 ] = true ; for ( idx = 0 ; idx < obj -> nVar ; idx ++ ) {
obj -> ATwset [ idx + 54 ] = obj -> Aeq [ idx + 54 ] ; } obj -> bwset [ 2 ] =
obj -> beq [ 2 ] ; obj -> Wid [ 3 ] = 2 ; obj -> Wlocalidx [ 3 ] = 4 ; obj ->
isActiveConstr [ 3 ] = true ; for ( idx = 0 ; idx < obj -> nVar ; idx ++ ) {
obj -> ATwset [ idx + 81 ] = obj -> Aeq [ idx + 81 ] ; } obj -> bwset [ 3 ] =
obj -> beq [ 3 ] ; } static void dj2cbrorw3kdlsj ( real_T fval , const real_T
Ceq_workspace [ 4 ] , kthfgfhdov * obj ) { obj -> penaltyParam = 1.0 ; obj ->
threshold = 0.0001 ; obj -> nPenaltyDecreases = 0 ; obj ->
linearizedConstrViol = 0.0 ; obj -> initFval = fval ; obj ->
initConstrViolationEq = ( ( muDoubleScalarAbs ( Ceq_workspace [ 0 ] ) +
muDoubleScalarAbs ( Ceq_workspace [ 1 ] ) ) + muDoubleScalarAbs (
Ceq_workspace [ 2 ] ) ) + muDoubleScalarAbs ( Ceq_workspace [ 3 ] ) ; obj ->
initConstrViolationIneq = 0.0 ; obj -> phi = 0.0 ; obj -> phiPrimePlus = 0.0
; obj -> phiFullStep = 0.0 ; obj -> feasRelativeFactor = 0.0 ; obj ->
nlpPrimalFeasError = 0.0 ; obj -> nlpDualFeasError = 0.0 ; obj ->
nlpComplError = 0.0 ; obj -> firstOrderOpt = 0.0 ; obj -> hasObjective = true
; } static void ek1cslbopikf ( real_T workspace [ 27 ] , int32_T nVar , const
real_T grad [ 27 ] , const real_T AeqTrans [ 108 ] , const int32_T finiteLB [
27 ] , int32_T mLB , const real_T lambda [ 13 ] ) { int32_T iL0 ; int32_T ix
; int32_T b ; for ( iL0 = 0 ; iL0 < nVar ; iL0 ++ ) { workspace [ iL0 ] =
grad [ iL0 ] ; } iL0 = 0 ; for ( ix = 0 ; ix < nVar ; ix ++ ) { workspace [
iL0 ] += AeqTrans [ ix ] * lambda [ 0 ] ; iL0 ++ ; } iL0 = 0 ; b = nVar + 27
; for ( ix = 27 ; ix < b ; ix ++ ) { workspace [ iL0 ] += AeqTrans [ ix ] *
lambda [ 1 ] ; iL0 ++ ; } iL0 = 0 ; b = nVar + 54 ; for ( ix = 54 ; ix < b ;
ix ++ ) { workspace [ iL0 ] += AeqTrans [ ix ] * lambda [ 2 ] ; iL0 ++ ; }
iL0 = 0 ; b = nVar + 81 ; for ( ix = 81 ; ix < b ; ix ++ ) { workspace [ iL0
] += AeqTrans [ ix ] * lambda [ 3 ] ; iL0 ++ ; } iL0 = 4 ; for ( ix = 0 ; ix
< mLB ; ix ++ ) { workspace [ finiteLB [ ix ] - 1 ] -= lambda [ iL0 ] ; iL0
++ ; } } static real_T ppqo1m21bl1 ( const real_T cEq [ 4 ] ) { return
muDoubleScalarMax ( muDoubleScalarMax ( muDoubleScalarMax ( muDoubleScalarMax
( 0.0 , muDoubleScalarAbs ( cEq [ 0 ] ) ) , muDoubleScalarAbs ( cEq [ 1 ] ) )
, muDoubleScalarAbs ( cEq [ 2 ] ) ) , muDoubleScalarAbs ( cEq [ 3 ] ) ) ; }
static void cxrn1udwxmwa ( int32_T nVar , const real_T gradLag [ 27 ] ,
boolean_T * gradOK , real_T * val ) { int32_T b_idx ; boolean_T exitg1 ; *
gradOK = true ; * val = 0.0 ; b_idx = 0 ; exitg1 = false ; while ( ( ! exitg1
) && ( b_idx <= nVar - 1 ) ) { * gradOK = ( ( ! muDoubleScalarIsInf ( gradLag
[ b_idx ] ) ) && ( ! muDoubleScalarIsNaN ( gradLag [ b_idx ] ) ) ) ; if ( ! *
gradOK ) { exitg1 = true ; } else { * val = muDoubleScalarMax ( * val ,
muDoubleScalarAbs ( gradLag [ b_idx ] ) ) ; b_idx ++ ; } } } static int32_T
mfrofh20mfqs ( int32_T n , const real_T x [ 27 ] ) { int32_T idxmax ; int32_T
ix ; real_T smax ; int32_T k ; real_T y ; if ( n < 1 ) { idxmax = 0 ; } else
{ idxmax = 1 ; if ( n > 1 ) { ix = 0 ; smax = muDoubleScalarAbs ( x [ 0 ] ) ;
for ( k = 2 ; k <= n ; k ++ ) { ix ++ ; y = muDoubleScalarAbs ( x [ ix ] ) ;
if ( y > smax ) { idxmax = k ; smax = y ; } } } } return idxmax ; } static
void ksrs0yrnvw3u ( kthfgfhdov * MeritFunction , const nuprfhnilo *
WorkingSet , aaxpzhoxuz * TrialState , boolean_T * Flags_gradOK , boolean_T *
Flags_fevalOK , boolean_T * Flags_done , boolean_T * Flags_stepAccepted ,
boolean_T * Flags_failedLineSearch , int32_T * Flags_stepType ) { real_T
optimRelativeFactor ; boolean_T isFeasible ; real_T c ; int32_T b_k ; *
Flags_fevalOK = true ; * Flags_stepAccepted = false ; *
Flags_failedLineSearch = false ; * Flags_stepType = 1 ; ek1cslbopikf (
TrialState -> gradLag , WorkingSet -> nVar , TrialState -> grad , WorkingSet
-> Aeq , WorkingSet -> indexLB , WorkingSet -> sizes [ 3 ] , TrialState ->
lambdasqp ) ; optimRelativeFactor = muDoubleScalarMax ( 1.0 ,
muDoubleScalarAbs ( TrialState -> grad [ mfrofh20mfqs ( WorkingSet -> nVar ,
TrialState -> grad ) - 1 ] ) ) ; if ( muDoubleScalarIsInf (
optimRelativeFactor ) ) { optimRelativeFactor = 1.0 ; } MeritFunction ->
nlpPrimalFeasError = ppqo1m21bl1 ( TrialState -> cEq ) ; MeritFunction ->
feasRelativeFactor = muDoubleScalarMax ( 1.0 , MeritFunction ->
nlpPrimalFeasError ) ; isFeasible = ( MeritFunction -> nlpPrimalFeasError <=
1.0E-6 * muDoubleScalarMax ( 1.0 , MeritFunction -> nlpPrimalFeasError ) ) ;
cxrn1udwxmwa ( WorkingSet -> nVar , TrialState -> gradLag , Flags_gradOK , &
c ) ; MeritFunction -> nlpDualFeasError = c ; if ( ! * Flags_gradOK ) { *
Flags_done = true ; if ( isFeasible ) { TrialState -> sqpExitFlag = 2 ; }
else { TrialState -> sqpExitFlag = - 2 ; } } else { MeritFunction ->
nlpComplError = 0.0 ; MeritFunction -> firstOrderOpt = muDoubleScalarMax ( c
, 0.0 ) ; for ( b_k = 0 ; b_k <= WorkingSet -> sizes [ 3 ] + 3 ; b_k ++ ) {
TrialState -> lambdasqp_old [ b_k ] = TrialState -> lambdasqp [ b_k ] ; } if
( isFeasible && ( c <= 1.0E-10 * optimRelativeFactor ) ) { * Flags_done =
true ; TrialState -> sqpExitFlag = 1 ; } else { * Flags_done = false ; if (
isFeasible && ( TrialState -> sqpFval < - 1.0E+20 ) ) { * Flags_done = true ;
TrialState -> sqpExitFlag = - 3 ; } else { if ( TrialState ->
FunctionEvaluations >= 1800 ) { * Flags_done = true ; TrialState ->
sqpExitFlag = 0 ; } } } } } static void iexi1hxv0po ( aaxpzhoxuz * obj ,
int32_T nVar , const real_T JacCeqTrans [ 108 ] ) { int32_T k ; for ( k = 1 ;
k - 1 < nVar ; k ++ ) { obj -> JacCeqTrans_old [ k + - 1 ] = JacCeqTrans [ k
+ - 1 ] ; } for ( k = 1 ; k - 1 < nVar ; k ++ ) { obj -> JacCeqTrans_old [ k
+ 26 ] = JacCeqTrans [ k + 26 ] ; } for ( k = 1 ; k - 1 < nVar ; k ++ ) { obj
-> JacCeqTrans_old [ k + 53 ] = JacCeqTrans [ k + 53 ] ; } for ( k = 1 ; k -
1 < nVar ; k ++ ) { obj -> JacCeqTrans_old [ k + 80 ] = JacCeqTrans [ k + 80
] ; } } static void eilmu4s5owu ( aaxpzhoxuz * obj ) { int32_T b_k ; obj ->
sqpFval_old = obj -> sqpFval ; for ( b_k = 0 ; b_k < 18 ; b_k ++ ) { obj ->
xstarsqp_old [ b_k ] = obj -> xstarsqp [ b_k ] ; obj -> grad_old [ b_k ] =
obj -> grad [ b_k ] ; } obj -> cEq_old [ 0 ] = obj -> cEq [ 0 ] ; obj ->
cEq_old [ 1 ] = obj -> cEq [ 1 ] ; obj -> cEq_old [ 2 ] = obj -> cEq [ 2 ] ;
obj -> cEq_old [ 3 ] = obj -> cEq [ 3 ] ; } static void cdu0auzqs4jar (
nuprfhnilo * WorkingSet , const real_T cEq [ 4 ] ) { int32_T i ; WorkingSet
-> beq [ 0 ] = - cEq [ 0 ] ; WorkingSet -> bwset [ 0 ] = WorkingSet -> beq [
0 ] ; for ( i = 0 ; i < WorkingSet -> nVar ; i ++ ) { WorkingSet -> ATwset [
i ] = WorkingSet -> Aeq [ i ] ; } WorkingSet -> beq [ 1 ] = - cEq [ 1 ] ;
WorkingSet -> bwset [ 1 ] = WorkingSet -> beq [ 1 ] ; for ( i = 0 ; i <
WorkingSet -> nVar ; i ++ ) { WorkingSet -> ATwset [ i + 27 ] = WorkingSet ->
Aeq [ i + 27 ] ; } WorkingSet -> beq [ 2 ] = - cEq [ 2 ] ; WorkingSet ->
bwset [ 2 ] = WorkingSet -> beq [ 2 ] ; for ( i = 0 ; i < WorkingSet -> nVar
; i ++ ) { WorkingSet -> ATwset [ i + 54 ] = WorkingSet -> Aeq [ i + 54 ] ; }
WorkingSet -> beq [ 3 ] = - cEq [ 3 ] ; WorkingSet -> bwset [ 3 ] =
WorkingSet -> beq [ 3 ] ; for ( i = 0 ; i < WorkingSet -> nVar ; i ++ ) {
WorkingSet -> ATwset [ i + 81 ] = WorkingSet -> Aeq [ i + 81 ] ; } i = 4 ; if
( WorkingSet -> nActiveConstr > 4 ) { while ( i + 1 <= WorkingSet ->
nActiveConstr ) { switch ( WorkingSet -> Wid [ i ] ) { case 4 : WorkingSet ->
bwset [ i ] = WorkingSet -> lb [ WorkingSet -> Wlocalidx [ i ] - 1 ] ; break
; case 5 : WorkingSet -> bwset [ i ] = 0.0 ; break ; } i ++ ; } } } static
void dpnt4bixcf4 ( aaxpzhoxuz * obj ) { obj -> sqpFval = obj -> sqpFval_old ;
memcpy ( & obj -> xstarsqp [ 0 ] , & obj -> xstarsqp_old [ 0 ] , 18U * sizeof
( real_T ) ) ; obj -> cEq [ 0 ] = obj -> cEq_old [ 0 ] ; obj -> cEq [ 1 ] =
obj -> cEq_old [ 1 ] ; obj -> cEq [ 2 ] = obj -> cEq_old [ 2 ] ; obj -> cEq [
3 ] = obj -> cEq_old [ 3 ] ; } static boolean_T hcy4pkatwq ( real_T x ) {
return ( ! muDoubleScalarIsInf ( x ) ) && ( ! muDoubleScalarIsNaN ( x ) ) ; }
static void j0fmletkso ( int32_T n , const real_T x [ 13 ] , real_T y [ 13 ]
) { int32_T b_k ; for ( b_k = 0 ; b_k < n ; b_k ++ ) { y [ b_k ] = x [ b_k ]
; } } static void ek1cslbopikf3 ( real_T workspace [ 729 ] , int32_T nVar ,
const real_T grad [ 27 ] , const real_T AeqTrans [ 108 ] , const int32_T
finiteLB [ 27 ] , int32_T mLB , const real_T lambda [ 13 ] ) { int32_T iL0 ;
int32_T ix ; int32_T b ; for ( iL0 = 0 ; iL0 < nVar ; iL0 ++ ) { workspace [
iL0 ] = grad [ iL0 ] ; } iL0 = 0 ; for ( ix = 0 ; ix < nVar ; ix ++ ) {
workspace [ iL0 ] += AeqTrans [ ix ] * lambda [ 0 ] ; iL0 ++ ; } iL0 = 0 ; b
= nVar + 27 ; for ( ix = 27 ; ix < b ; ix ++ ) { workspace [ iL0 ] +=
AeqTrans [ ix ] * lambda [ 1 ] ; iL0 ++ ; } iL0 = 0 ; b = nVar + 54 ; for (
ix = 54 ; ix < b ; ix ++ ) { workspace [ iL0 ] += AeqTrans [ ix ] * lambda [
2 ] ; iL0 ++ ; } iL0 = 0 ; b = nVar + 81 ; for ( ix = 81 ; ix < b ; ix ++ ) {
workspace [ iL0 ] += AeqTrans [ ix ] * lambda [ 3 ] ; iL0 ++ ; } iL0 = 4 ;
for ( ix = 0 ; ix < mLB ; ix ++ ) { workspace [ finiteLB [ ix ] - 1 ] -=
lambda [ iL0 ] ; iL0 ++ ; } } static void cxrn1udwxmwar ( int32_T nVar ,
const real_T gradLag [ 729 ] , boolean_T * gradOK , real_T * val ) { int32_T
b_idx ; boolean_T exitg1 ; * gradOK = true ; * val = 0.0 ; b_idx = 0 ; exitg1
= false ; while ( ( ! exitg1 ) && ( b_idx <= nVar - 1 ) ) { * gradOK = ( ( !
muDoubleScalarIsInf ( gradLag [ b_idx ] ) ) && ( ! muDoubleScalarIsNaN (
gradLag [ b_idx ] ) ) ) ; if ( ! * gradOK ) { exitg1 = true ; } else { * val
= muDoubleScalarMax ( * val , muDoubleScalarAbs ( gradLag [ b_idx ] ) ) ;
b_idx ++ ; } } } static boolean_T d0wq0olg2g ( const real_T xCurrent [ 18 ] ,
const real_T delta_x [ 27 ] , int32_T nVar ) { boolean_T tf ; int32_T b_idx ;
boolean_T exitg1 ; tf = true ; b_idx = 0 ; exitg1 = false ; while ( ( !
exitg1 ) && ( b_idx <= nVar - 1 ) ) { if ( 1.0E-10 * muDoubleScalarMax ( 1.0
, muDoubleScalarAbs ( xCurrent [ b_idx ] ) ) <= muDoubleScalarAbs ( delta_x [
b_idx ] ) ) { tf = false ; exitg1 = true ; } else { b_idx ++ ; } } return tf
; } static void lv22laqqr3 ( int32_T n , const real_T x [ 351 ] , int32_T ix0
, real_T y [ 729 ] , int32_T iy0 ) { int32_T b_k ; for ( b_k = - 1 ; b_k < n
- 1 ; b_k ++ ) { y [ iy0 + b_k ] = x [ ix0 + b_k ] ; } } static real_T
i5uu0zdww5x0 ( int32_T n , const real_T x [ 729 ] , int32_T ix0 ) { real_T y
; real_T scale ; int32_T kend ; real_T absxk ; real_T t ; int32_T k ; y = 0.0
; if ( n >= 1 ) { if ( n == 1 ) { y = muDoubleScalarAbs ( x [ ix0 - 1 ] ) ; }
else { scale = 3.3121686421112381E-170 ; kend = ( ix0 + n ) - 1 ; for ( k =
ix0 ; k <= kend ; k ++ ) { absxk = muDoubleScalarAbs ( x [ k - 1 ] ) ; if (
absxk > scale ) { t = scale / absxk ; y = y * t * t + 1.0 ; scale = absxk ; }
else { t = absxk / scale ; y += t * t ; } } y = scale * muDoubleScalarSqrt (
y ) ; } } return y ; } static real_T d5s5vcjorzd ( int32_T n , real_T *
alpha1 , real_T x [ 729 ] , int32_T ix0 ) { real_T tau ; real_T xnorm ;
int32_T knt ; int32_T b_k ; int32_T c_k ; tau = 0.0 ; if ( n > 0 ) { xnorm =
i5uu0zdww5x0 ( n - 1 , x , ix0 ) ; if ( xnorm != 0.0 ) { xnorm =
muDoubleScalarHypot ( * alpha1 , xnorm ) ; if ( * alpha1 >= 0.0 ) { xnorm = -
xnorm ; } if ( muDoubleScalarAbs ( xnorm ) < 1.0020841800044864E-292 ) { knt
= - 1 ; b_k = ( ix0 + n ) - 2 ; do { knt ++ ; for ( c_k = ix0 ; c_k <= b_k ;
c_k ++ ) { x [ c_k - 1 ] *= 9.9792015476736E+291 ; } xnorm *=
9.9792015476736E+291 ; * alpha1 *= 9.9792015476736E+291 ; } while ( ! (
muDoubleScalarAbs ( xnorm ) >= 1.0020841800044864E-292 ) ) ; xnorm =
muDoubleScalarHypot ( * alpha1 , i5uu0zdww5x0 ( n - 1 , x , ix0 ) ) ; if ( *
alpha1 >= 0.0 ) { xnorm = - xnorm ; } tau = ( xnorm - * alpha1 ) / xnorm ; *
alpha1 = 1.0 / ( * alpha1 - xnorm ) ; for ( c_k = ix0 ; c_k <= b_k ; c_k ++ )
{ x [ c_k - 1 ] *= * alpha1 ; } for ( b_k = 0 ; b_k <= knt ; b_k ++ ) { xnorm
*= 1.0020841800044864E-292 ; } * alpha1 = xnorm ; } else { tau = ( xnorm - *
alpha1 ) / xnorm ; * alpha1 = 1.0 / ( * alpha1 - xnorm ) ; knt = ( ix0 + n )
- 2 ; for ( b_k = ix0 ; b_k <= knt ; b_k ++ ) { x [ b_k - 1 ] *= * alpha1 ; }
* alpha1 = xnorm ; } } } return tau ; } static void km30jyym3bu3ppb ( int32_T
m , int32_T n , const real_T A [ 729 ] , int32_T ia0 , const real_T x [ 729 ]
, int32_T ix0 , real_T y [ 27 ] ) { int32_T ix ; real_T c ; int32_T b_iy ;
int32_T b ; int32_T iac ; int32_T d ; int32_T ia ; if ( n != 0 ) { for ( b_iy
= 0 ; b_iy < n ; b_iy ++ ) { y [ b_iy ] = 0.0 ; } b_iy = 0 ; b = ( n - 1 ) *
27 + ia0 ; for ( iac = ia0 ; iac <= b ; iac += 27 ) { ix = ix0 ; c = 0.0 ; d
= ( iac + m ) - 1 ; for ( ia = iac ; ia <= d ; ia ++ ) { c += A [ ia - 1 ] *
x [ ix - 1 ] ; ix ++ ; } y [ b_iy ] += c ; b_iy ++ ; } } } static void
ocfo040uqq ( int32_T m , int32_T n , real_T alpha1 , int32_T ix0 , const
real_T y [ 27 ] , real_T A [ 729 ] , int32_T ia0 ) { int32_T jA ; int32_T jy
; real_T temp ; int32_T ix ; int32_T j ; int32_T b ; int32_T ijA ; if ( ! (
alpha1 == 0.0 ) ) { jA = ia0 - 1 ; jy = 0 ; for ( j = 0 ; j < n ; j ++ ) { if
( y [ jy ] != 0.0 ) { temp = y [ jy ] * alpha1 ; ix = ix0 ; b = m + jA ; for
( ijA = jA ; ijA < b ; ijA ++ ) { A [ ijA ] += A [ ix - 1 ] * temp ; ix ++ ;
} } jy ++ ; jA += 27 ; } } } static int32_T h5vi5f3i0z ( int32_T m , int32_T
n , const real_T A [ 729 ] , int32_T ia0 ) { int32_T j ; int32_T coltop ;
int32_T ia ; int32_T exitg1 ; boolean_T exitg2 ; j = n ; exitg2 = false ;
while ( ( ! exitg2 ) && ( j > 0 ) ) { coltop = ( j - 1 ) * 27 + ia0 ; ia =
coltop ; do { exitg1 = 0 ; if ( ia <= ( coltop + m ) - 1 ) { if ( A [ ia - 1
] != 0.0 ) { exitg1 = 1 ; } else { ia ++ ; } } else { j -- ; exitg1 = 2 ; } }
while ( exitg1 == 0 ) ; if ( exitg1 == 1 ) { exitg2 = true ; } } return j ; }
static void bzrp2oyzfai ( int32_T m , int32_T n , int32_T iv0 , real_T tau ,
real_T C [ 729 ] , int32_T ic0 , real_T work [ 27 ] ) { int32_T lastv ;
int32_T lastc ; if ( tau != 0.0 ) { lastv = m ; lastc = iv0 + m ; while ( (
lastv > 0 ) && ( C [ lastc - 2 ] == 0.0 ) ) { lastv -- ; lastc -- ; } lastc =
h5vi5f3i0z ( lastv , n , C , ic0 ) ; } else { lastv = 0 ; lastc = 0 ; } if (
lastv > 0 ) { km30jyym3bu3ppb ( lastv , lastc , C , ic0 , C , iv0 , work ) ;
ocfo040uqq ( lastv , lastc , - tau , iv0 , work , C , ic0 ) ; } } static void
mrqydsx15co ( real_T A [ 729 ] , int32_T m , int32_T n , int32_T nfxd ,
real_T tau [ 27 ] ) { real_T work [ 27 ] ; int32_T ii ; int32_T mmi ; real_T
b_atmp ; int32_T i ; memset ( & work [ 0 ] , 0 , 27U * sizeof ( real_T ) ) ;
for ( i = 0 ; i < nfxd ; i ++ ) { ii = i * 27 + i ; mmi = m - i ; if ( i + 1
< m ) { b_atmp = A [ ii ] ; tau [ i ] = d5s5vcjorzd ( mmi , & b_atmp , A , ii
+ 2 ) ; A [ ii ] = b_atmp ; } else { tau [ i ] = 0.0 ; } if ( i + 1 < n ) {
b_atmp = A [ ii ] ; A [ ii ] = 1.0 ; bzrp2oyzfai ( mmi , ( n - i ) - 1 , ii +
1 , tau [ i ] , A , ii + 28 , work ) ; A [ ii ] = b_atmp ; } } } static void
ici4xm22p4 ( int32_T n , real_T x [ 729 ] , int32_T ix0 , int32_T iy0 ) {
int32_T ix ; int32_T iy ; real_T temp ; int32_T k ; ix = ix0 - 1 ; iy = iy0 -
1 ; for ( k = 0 ; k < n ; k ++ ) { temp = x [ ix ] ; x [ ix ] = x [ iy ] ; x
[ iy ] = temp ; ix ++ ; iy ++ ; } } static int32_T mfrofh20mfqsg ( int32_T n
, const real_T x [ 27 ] , int32_T ix0 ) { int32_T idxmax ; int32_T ix ;
real_T smax ; int32_T k ; real_T y ; if ( n < 1 ) { idxmax = 0 ; } else {
idxmax = 1 ; if ( n > 1 ) { ix = ix0 ; smax = muDoubleScalarAbs ( x [ ix0 - 1
] ) ; for ( k = 2 ; k <= n ; k ++ ) { ix ++ ; y = muDoubleScalarAbs ( x [ ix
- 1 ] ) ; if ( y > smax ) { idxmax = k ; smax = y ; } } } } return idxmax ; }
static void h2apua34ax ( real_T A [ 729 ] , int32_T m , int32_T n , int32_T
nfxd , real_T tau [ 27 ] , int32_T jpvt [ 27 ] ) { int32_T minmn ; real_T
work [ 27 ] ; real_T vn1 [ 27 ] ; real_T vn2 [ 27 ] ; int32_T ii ; int32_T
nmi ; int32_T mmi ; int32_T pvt ; int32_T itemp ; real_T temp2 ; real_T
b_atmp ; int32_T j ; minmn = muIntScalarMin_sint32 ( m , n ) ; memset ( &
work [ 0 ] , 0 , 27U * sizeof ( real_T ) ) ; memset ( & vn1 [ 0 ] , 0 , 27U *
sizeof ( real_T ) ) ; memset ( & vn2 [ 0 ] , 0 , 27U * sizeof ( real_T ) ) ;
for ( j = nfxd ; j < n ; j ++ ) { vn1 [ j ] = i5uu0zdww5x0 ( m - nfxd , A , (
j * 27 + nfxd ) + 1 ) ; vn2 [ j ] = vn1 [ j ] ; } for ( j = nfxd ; j < minmn
; j ++ ) { ii = j * 27 + j ; nmi = n - j ; mmi = m - j ; pvt = (
mfrofh20mfqsg ( nmi , vn1 , j + 1 ) + j ) - 1 ; if ( pvt + 1 != j + 1 ) {
ici4xm22p4 ( m , A , pvt * 27 + 1 , j * 27 + 1 ) ; itemp = jpvt [ pvt ] ;
jpvt [ pvt ] = jpvt [ j ] ; jpvt [ j ] = itemp ; vn1 [ pvt ] = vn1 [ j ] ;
vn2 [ pvt ] = vn2 [ j ] ; } if ( j + 1 < m ) { b_atmp = A [ ii ] ; tau [ j ]
= d5s5vcjorzd ( mmi , & b_atmp , A , ii + 2 ) ; A [ ii ] = b_atmp ; } else {
tau [ j ] = 0.0 ; } if ( j + 1 < n ) { b_atmp = A [ ii ] ; A [ ii ] = 1.0 ;
bzrp2oyzfai ( mmi , nmi - 1 , ii + 1 , tau [ j ] , A , ii + 28 , work ) ; A [
ii ] = b_atmp ; } for ( ii = j + 1 ; ii < n ; ii ++ ) { nmi = ii * 27 + j ;
if ( vn1 [ ii ] != 0.0 ) { b_atmp = muDoubleScalarAbs ( A [ nmi ] ) / vn1 [
ii ] ; b_atmp = 1.0 - b_atmp * b_atmp ; if ( b_atmp < 0.0 ) { b_atmp = 0.0 ;
} temp2 = vn1 [ ii ] / vn2 [ ii ] ; temp2 = temp2 * temp2 * b_atmp ; if (
temp2 <= 1.4901161193847656E-8 ) { if ( j + 1 < m ) { vn1 [ ii ] =
i5uu0zdww5x0 ( mmi - 1 , A , nmi + 2 ) ; vn2 [ ii ] = vn1 [ ii ] ; } else {
vn1 [ ii ] = 0.0 ; vn2 [ ii ] = 0.0 ; } } else { vn1 [ ii ] *=
muDoubleScalarSqrt ( b_atmp ) ; } } } } } static void po4mz2muctr ( real_T A
[ 729 ] , int32_T m , int32_T n , int32_T jpvt [ 27 ] , real_T tau [ 27 ] ) {
int32_T minmn ; int32_T nfxd ; int32_T c_j ; minmn = muIntScalarMin_sint32 (
m , n ) ; memset ( & tau [ 0 ] , 0 , 27U * sizeof ( real_T ) ) ; if ( minmn <
1 ) { for ( minmn = 0 ; minmn < n ; minmn ++ ) { jpvt [ minmn ] = minmn + 1 ;
} } else { nfxd = - 1 ; for ( c_j = 0 ; c_j < n ; c_j ++ ) { if ( jpvt [ c_j
] != 0 ) { nfxd ++ ; if ( c_j + 1 != nfxd + 1 ) { ici4xm22p4 ( m , A , c_j *
27 + 1 , nfxd * 27 + 1 ) ; jpvt [ c_j ] = jpvt [ nfxd ] ; jpvt [ nfxd ] = c_j
+ 1 ; } else { jpvt [ c_j ] = c_j + 1 ; } } else { jpvt [ c_j ] = c_j + 1 ; }
} nfxd ++ ; nfxd = muIntScalarMin_sint32 ( nfxd , minmn ) ; mrqydsx15co ( A ,
m , n , nfxd , tau ) ; if ( nfxd < minmn ) { h2apua34ax ( A , m , n , nfxd ,
tau , jpvt ) ; } } } static void bplndqf2vju ( ev3ltaqeco * obj , const
real_T A [ 351 ] , int32_T mrows , int32_T ncols , k0zpd1rkeh * localB ) {
real_T c [ 27 ] ; int32_T d [ 27 ] ; int32_T b_idx ; boolean_T guard1 = false
; guard1 = false ; if ( mrows * ncols > 0 ) { for ( b_idx = 0 ; b_idx < ncols
; b_idx ++ ) { lv22laqqr3 ( mrows , A , 27 * b_idx + 1 , obj -> QR , 27 *
b_idx + 1 ) ; } guard1 = true ; } else if ( mrows * ncols == 0 ) { obj ->
mrows = mrows ; obj -> ncols = ncols ; obj -> minRowCol = 0 ; } else { guard1
= true ; } if ( guard1 ) { obj -> usedPivoting = true ; obj -> mrows = mrows
; obj -> ncols = ncols ; obj -> minRowCol = muIntScalarMin_sint32 ( mrows ,
ncols ) ; memcpy ( & localB -> b [ 0 ] , & obj -> QR [ 0 ] , 729U * sizeof (
real_T ) ) ; memcpy ( & d [ 0 ] , & obj -> jpvt [ 0 ] , 27U * sizeof (
int32_T ) ) ; po4mz2muctr ( localB -> b , mrows , ncols , d , c ) ; memcpy (
& obj -> QR [ 0 ] , & localB -> b [ 0 ] , 729U * sizeof ( real_T ) ) ; memcpy
( & obj -> tau [ 0 ] , & c [ 0 ] , 27U * sizeof ( real_T ) ) ; memcpy ( & obj
-> jpvt [ 0 ] , & d [ 0 ] , 27U * sizeof ( int32_T ) ) ; } } static void
de14mwsdes ( int32_T m , int32_T n , const real_T A [ 729 ] , int32_T ia0 ,
const real_T x [ 729 ] , int32_T ix0 , real_T y [ 27 ] ) { int32_T ix ;
real_T c ; int32_T b_iy ; int32_T b ; int32_T iac ; int32_T d ; int32_T ia ;
if ( n != 0 ) { for ( b_iy = 0 ; b_iy < n ; b_iy ++ ) { y [ b_iy ] = 0.0 ; }
b_iy = 0 ; b = ( n - 1 ) * 27 + ia0 ; for ( iac = ia0 ; iac <= b ; iac += 27
) { ix = ix0 ; c = 0.0 ; d = ( iac + m ) - 1 ; for ( ia = iac ; ia <= d ; ia
++ ) { c += A [ ia - 1 ] * x [ ix - 1 ] ; ix ++ ; } y [ b_iy ] += c ; b_iy ++
; } } } static void ocfo040uqqw ( int32_T m , int32_T n , real_T alpha1 ,
int32_T ix0 , const real_T y [ 27 ] , real_T A [ 729 ] , int32_T ia0 ) {
int32_T jA ; int32_T jy ; real_T temp ; int32_T ix ; int32_T j ; int32_T b ;
int32_T ijA ; if ( ! ( alpha1 == 0.0 ) ) { jA = ia0 - 1 ; jy = 0 ; for ( j =
0 ; j < n ; j ++ ) { if ( y [ jy ] != 0.0 ) { temp = y [ jy ] * alpha1 ; ix =
ix0 ; b = m + jA ; for ( ijA = jA ; ijA < b ; ijA ++ ) { A [ ijA ] += A [ ix
- 1 ] * temp ; ix ++ ; } } jy ++ ; jA += 27 ; } } } static void bzrp2oyzfaik
( int32_T m , int32_T n , int32_T iv0 , real_T tau , real_T C [ 729 ] ,
int32_T ic0 , real_T work [ 27 ] ) { int32_T lastv ; int32_T lastc ; if ( tau
!= 0.0 ) { lastv = m ; lastc = iv0 + m ; while ( ( lastv > 0 ) && ( C [ lastc
- 2 ] == 0.0 ) ) { lastv -- ; lastc -- ; } lastc = h5vi5f3i0z ( lastv , n , C
, ic0 ) ; } else { lastv = 0 ; lastc = 0 ; } if ( lastv > 0 ) { de14mwsdes (
lastv , lastc , C , ic0 , C , iv0 , work ) ; ocfo040uqqw ( lastv , lastc , -
tau , iv0 , work , C , ic0 ) ; } } static void dh11bh5myeo ( int32_T n ,
real_T a , real_T x [ 729 ] , int32_T ix0 ) { int32_T b ; int32_T k ; b = (
ix0 + n ) - 1 ; for ( k = ix0 ; k <= b ; k ++ ) { x [ k - 1 ] *= a ; } }
static void ngm2hvbywt ( int32_T m , int32_T n , int32_T k , real_T A [ 729 ]
, const real_T tau [ 27 ] ) { int32_T i ; int32_T itau ; real_T work [ 27 ] ;
int32_T iaii ; int32_T b_j ; if ( n >= 1 ) { for ( itau = k ; itau < n ; itau
++ ) { i = itau * 27 ; for ( iaii = 0 ; iaii < m ; iaii ++ ) { A [ i + iaii ]
= 0.0 ; } A [ i + itau ] = 1.0 ; } itau = k - 1 ; memset ( & work [ 0 ] , 0 ,
27U * sizeof ( real_T ) ) ; for ( i = k ; i >= 1 ; i -- ) { iaii = ( ( i - 1
) * 27 + i ) - 1 ; if ( i < n ) { A [ iaii ] = 1.0 ; bzrp2oyzfaik ( ( m - i )
+ 1 , n - i , iaii + 1 , tau [ itau ] , A , iaii + 28 , work ) ; } if ( i < m
) { dh11bh5myeo ( m - i , - tau [ itau ] , A , iaii + 2 ) ; } A [ iaii ] =
1.0 - tau [ itau ] ; for ( b_j = 0 ; b_j <= i - 2 ; b_j ++ ) { A [ ( iaii -
b_j ) - 1 ] = 0.0 ; } itau -- ; } } } static void n2v2qif1yvp ( ev3ltaqeco *
obj , int32_T nrows ) { int32_T iQR0 ; int32_T idx ; int32_T n ; int32_T k ;
for ( idx = 0 ; idx < obj -> minRowCol ; idx ++ ) { iQR0 = 27 * idx + idx ; n
= obj -> mrows - idx ; for ( k = 1 ; k - 1 <= n - 2 ; k ++ ) { obj -> Q [
iQR0 + k ] = obj -> QR [ iQR0 + k ] ; } } ngm2hvbywt ( obj -> mrows , nrows ,
obj -> minRowCol , obj -> Q , obj -> tau ) ; } static void ei532vpsif (
int32_T m , int32_T n , const real_T A [ 729 ] , const real_T x [ 27 ] ,
real_T y [ 729 ] ) { int32_T ix ; real_T c ; int32_T b_iy ; int32_T iac ;
int32_T b ; int32_T ia ; int32_T b_c ; if ( m != 0 ) { for ( b_iy = 0 ; b_iy
< n ; b_iy ++ ) { y [ b_iy ] = 0.0 ; } b_iy = 0 ; b_c = ( n - 1 ) * 27 ; for
( iac = 1 ; iac <= b_c + 1 ; iac += 27 ) { ix = 0 ; c = 0.0 ; b = ( iac + m )
- 1 ; for ( ia = iac ; ia <= b ; ia ++ ) { c += A [ ia - 1 ] * x [ ix ] ; ix
++ ; } y [ b_iy ] += c ; b_iy ++ ; } } } static void bvondj0iigg ( int32_T n
, const real_T A [ 729 ] , real_T x [ 729 ] ) { int32_T jjA ; int32_T ix ;
int32_T j ; int32_T i ; if ( n != 0 ) { for ( j = n - 1 ; j + 1 > 0 ; j -- )
{ jjA = j * 27 + j ; x [ j ] /= A [ jjA ] ; for ( i = 1 ; i - 1 < j ; i ++ )
{ ix = j - i ; x [ ix ] -= A [ jjA - i ] * x [ j ] ; } } } } static void
e3vkzzkhia ( int32_T nVar , int32_T mConstr , ev3ltaqeco * QRManager , const
real_T ATwset [ 351 ] , const real_T grad [ 27 ] , real_T lambdaLSQ [ 13 ] ,
real_T workspace [ 729 ] , k0zpd1rkeh * localB ) { real_T tol ; int32_T
fullRank_R ; int32_T rankR ; int32_T iQR_diag ; for ( fullRank_R = 0 ;
fullRank_R < mConstr ; fullRank_R ++ ) { lambdaLSQ [ fullRank_R ] = 0.0 ; }
bplndqf2vju ( QRManager , ATwset , nVar , mConstr , localB ) ; n2v2qif1yvp (
QRManager , QRManager -> mrows ) ; ei532vpsif ( nVar , nVar , QRManager -> Q
, grad , workspace ) ; tol = muDoubleScalarMin ( 1.4901161193847656E-8 , (
real_T ) muIntScalarMax_sint32 ( nVar , mConstr ) * 2.2204460492503131E-16 )
* muDoubleScalarAbs ( QRManager -> QR [ 0 ] ) ; fullRank_R =
muIntScalarMin_sint32 ( nVar , mConstr ) ; rankR = 0 ; iQR_diag = 0 ; while (
( rankR < fullRank_R ) && ( muDoubleScalarAbs ( QRManager -> QR [ iQR_diag ]
) > tol ) ) { rankR ++ ; iQR_diag += 28 ; } bvondj0iigg ( rankR , QRManager
-> QR , workspace ) ; fullRank_R = muIntScalarMin_sint32 ( mConstr ,
fullRank_R ) ; for ( rankR = 0 ; rankR < fullRank_R ; rankR ++ ) { lambdaLSQ
[ QRManager -> jpvt [ rankR ] - 1 ] = workspace [ rankR ] ; } } static void
exp02lfvwax ( real_T lambda [ 13 ] , int32_T WorkingSet_nActiveConstr , const
int32_T WorkingSet_sizes [ 5 ] , const int32_T WorkingSet_isActiveIdx [ 6 ] ,
const int32_T WorkingSet_Wid [ 13 ] , const int32_T WorkingSet_Wlocalidx [ 13
] , real_T workspace [ 729 ] ) { int32_T mLB ; int32_T idx ; int32_T
idxOffset ; if ( WorkingSet_nActiveConstr != 0 ) { mLB = WorkingSet_sizes [ 3
] + 3 ; for ( idx = 0 ; idx <= mLB ; idx ++ ) { workspace [ idx ] = lambda [
idx ] ; } for ( idx = 0 ; idx <= mLB ; idx ++ ) { lambda [ idx ] = 0.0 ; }
mLB = 0 ; idx = 0 ; while ( ( idx + 1 <= WorkingSet_nActiveConstr ) && (
WorkingSet_Wid [ idx ] <= 2 ) ) { lambda [ WorkingSet_Wlocalidx [ idx ] - 1 ]
= workspace [ mLB ] ; mLB ++ ; idx ++ ; } while ( idx + 1 <=
WorkingSet_nActiveConstr ) { switch ( WorkingSet_Wid [ idx ] ) { case 3 :
idxOffset = 5 ; break ; case 4 : idxOffset = 5 ; break ; default : idxOffset
= WorkingSet_isActiveIdx [ 4 ] ; break ; } lambda [ ( idxOffset +
WorkingSet_Wlocalidx [ idx ] ) - 2 ] = workspace [ mLB ] ; mLB ++ ; idx ++ ;
} } } static void ksrs0yrnvw3u0 ( mf15oedits * Flags , guj4mpcfgf * memspace
, kthfgfhdov * MeritFunction , nuprfhnilo * WorkingSet , aaxpzhoxuz *
TrialState , ev3ltaqeco * QRManager , k0zpd1rkeh * localB ) { int32_T nVar ;
int32_T mLB ; real_T optimRelativeFactor ; boolean_T isFeasible ; int32_T
nActiveConstr ; boolean_T b ; real_T c ; real_T nlpDualFeasErrorTmp ; real_T
d [ 13 ] ; boolean_T guard1 = false ; nVar = WorkingSet -> nVar ; mLB =
WorkingSet -> sizes [ 3 ] ; ek1cslbopikf ( TrialState -> gradLag , WorkingSet
-> nVar , TrialState -> grad , WorkingSet -> Aeq , WorkingSet -> indexLB ,
WorkingSet -> sizes [ 3 ] , TrialState -> lambdasqp ) ; optimRelativeFactor =
muDoubleScalarMax ( 1.0 , muDoubleScalarAbs ( TrialState -> grad [
mfrofh20mfqs ( WorkingSet -> nVar , TrialState -> grad ) - 1 ] ) ) ; if ( !
hcy4pkatwq ( optimRelativeFactor ) ) { optimRelativeFactor = 1.0 ; }
MeritFunction -> nlpPrimalFeasError = ppqo1m21bl1 ( TrialState -> cEq ) ; if
( TrialState -> sqpIterations == 0 ) { MeritFunction -> feasRelativeFactor =
muDoubleScalarMax ( 1.0 , MeritFunction -> nlpPrimalFeasError ) ; }
isFeasible = ( MeritFunction -> nlpPrimalFeasError <= 1.0E-6 * MeritFunction
-> feasRelativeFactor ) ; cxrn1udwxmwa ( WorkingSet -> nVar , TrialState ->
gradLag , & b , & c ) ; Flags -> gradOK = b ; MeritFunction ->
nlpDualFeasError = c ; if ( ! b ) { Flags -> done = true ; if ( isFeasible )
{ TrialState -> sqpExitFlag = 2 ; } else { TrialState -> sqpExitFlag = - 2 ;
} } else { MeritFunction -> nlpComplError = 0.0 ; MeritFunction ->
firstOrderOpt = muDoubleScalarMax ( c , 0.0 ) ; if ( TrialState ->
sqpIterations > 1 ) { ek1cslbopikf3 ( memspace -> workspace_double ,
WorkingSet -> nVar , TrialState -> grad , WorkingSet -> Aeq , WorkingSet ->
indexLB , WorkingSet -> sizes [ 3 ] , TrialState -> lambdasqp_old ) ;
cxrn1udwxmwar ( WorkingSet -> nVar , memspace -> workspace_double , & b , &
nlpDualFeasErrorTmp ) ; if ( muDoubleScalarMax ( nlpDualFeasErrorTmp , 0.0 )
< muDoubleScalarMax ( c , 0.0 ) ) { MeritFunction -> nlpDualFeasError =
nlpDualFeasErrorTmp ; MeritFunction -> nlpComplError = 0.0 ; MeritFunction ->
firstOrderOpt = muDoubleScalarMax ( nlpDualFeasErrorTmp , 0.0 ) ; j0fmletkso
( WorkingSet -> sizes [ 3 ] + 4 , TrialState -> lambdasqp_old , TrialState ->
lambdasqp ) ; } else { j0fmletkso ( WorkingSet -> sizes [ 3 ] + 4 ,
TrialState -> lambdasqp , TrialState -> lambdasqp_old ) ; } } else {
j0fmletkso ( WorkingSet -> sizes [ 3 ] + 4 , TrialState -> lambdasqp ,
TrialState -> lambdasqp_old ) ; } if ( isFeasible && ( MeritFunction ->
nlpDualFeasError <= 1.0E-10 * optimRelativeFactor ) ) { Flags -> done = true
; TrialState -> sqpExitFlag = 1 ; } else { Flags -> done = false ; if (
isFeasible && ( TrialState -> sqpFval < - 1.0E+20 ) ) { Flags -> done = true
; TrialState -> sqpExitFlag = - 3 ; } else { guard1 = false ; if ( (
TrialState -> sqpIterations > 0 ) && d0wq0olg2g ( TrialState -> xstarsqp ,
TrialState -> delta_x , WorkingSet -> nVar ) ) { if ( ! isFeasible ) { if (
Flags -> stepType != 2 ) { Flags -> stepType = 2 ; Flags -> failedLineSearch
= false ; Flags -> stepAccepted = false ; guard1 = true ; } else { Flags ->
done = true ; TrialState -> sqpExitFlag = - 2 ; } } else { nActiveConstr =
WorkingSet -> nActiveConstr ; if ( WorkingSet -> nActiveConstr > 0 ) {
cdu0auzqs4jar ( WorkingSet , TrialState -> cEq ) ; e3vkzzkhia ( nVar ,
nActiveConstr , QRManager , WorkingSet -> ATwset , TrialState -> grad ,
TrialState -> lambda , memspace -> workspace_double , localB ) ; TrialState
-> lambda [ 0 ] = - TrialState -> lambda [ 0 ] ; TrialState -> lambda [ 1 ] =
- TrialState -> lambda [ 1 ] ; TrialState -> lambda [ 2 ] = - TrialState ->
lambda [ 2 ] ; TrialState -> lambda [ 3 ] = - TrialState -> lambda [ 3 ] ;
memcpy ( & d [ 0 ] , & TrialState -> lambda [ 0 ] , 13U * sizeof ( real_T ) )
; exp02lfvwax ( d , WorkingSet -> nActiveConstr , WorkingSet -> sizes ,
WorkingSet -> isActiveIdx , WorkingSet -> Wid , WorkingSet -> Wlocalidx ,
memspace -> workspace_double ) ; memcpy ( & TrialState -> lambda [ 0 ] , & d
[ 0 ] , 13U * sizeof ( real_T ) ) ; ek1cslbopikf3 ( memspace ->
workspace_double , nVar , TrialState -> grad , WorkingSet -> Aeq , WorkingSet
-> indexLB , mLB , d ) ; cxrn1udwxmwar ( nVar , memspace -> workspace_double
, & isFeasible , & c ) ; if ( c <= 1.0E-10 * optimRelativeFactor ) {
MeritFunction -> nlpDualFeasError = c ; MeritFunction -> nlpComplError = 0.0
; MeritFunction -> firstOrderOpt = muDoubleScalarMax ( c , 0.0 ) ; j0fmletkso
( mLB + 4 , d , TrialState -> lambdasqp ) ; Flags -> done = true ; TrialState
-> sqpExitFlag = 1 ; } else { Flags -> done = true ; TrialState ->
sqpExitFlag = 2 ; } } else { Flags -> done = true ; TrialState -> sqpExitFlag
= 2 ; } } } else { guard1 = true ; } if ( guard1 ) { if ( TrialState ->
sqpIterations >= 400 ) { Flags -> done = true ; TrialState -> sqpExitFlag = 0
; } else { if ( TrialState -> FunctionEvaluations >= 1800 ) { Flags -> done =
true ; TrialState -> sqpExitFlag = 0 ; } } } } } } } static void dya4t2wzfj (
int32_T n , const real_T x [ 27 ] , real_T y [ 27 ] ) { int32_T b_k ; for (
b_k = 0 ; b_k < n ; b_k ++ ) { y [ b_k ] = x [ b_k ] ; } } static void
enbciu5tww ( int32_T n , const real_T x [ 18 ] , real_T y [ 27 ] ) { int32_T
b_k ; for ( b_k = 0 ; b_k < n ; b_k ++ ) { y [ b_k ] = x [ b_k ] ; } } static
void onjp02j2te ( int32_T n , const real_T x [ 18 ] , real_T y [ 18 ] ) {
int32_T b_k ; for ( b_k = 0 ; b_k < n ; b_k ++ ) { y [ b_k ] = x [ b_k ] ; }
} static void b2smkg2r33v ( nuprfhnilo * WorkingSet , const real_T
TrialState_cEq [ 4 ] , const real_T TrialState_searchDir [ 27 ] ) { int32_T
ix ; real_T c ; int32_T b ; int32_T ia ; WorkingSet -> beq [ 0 ] = -
TrialState_cEq [ 0 ] ; WorkingSet -> beq [ 1 ] = - TrialState_cEq [ 1 ] ;
WorkingSet -> beq [ 2 ] = - TrialState_cEq [ 2 ] ; WorkingSet -> beq [ 3 ] =
- TrialState_cEq [ 3 ] ; ix = 0 ; c = 0.0 ; for ( ia = 0 ; ia < WorkingSet ->
nVar ; ia ++ ) { c += WorkingSet -> Aeq [ ia ] * TrialState_searchDir [ ix ]
; ix ++ ; } WorkingSet -> beq [ 0 ] += c ; ix = 0 ; c = 0.0 ; b = WorkingSet
-> nVar + 27 ; for ( ia = 27 ; ia < b ; ia ++ ) { c += WorkingSet -> Aeq [ ia
] * TrialState_searchDir [ ix ] ; ix ++ ; } WorkingSet -> beq [ 1 ] += c ; ix
= 0 ; c = 0.0 ; b = WorkingSet -> nVar + 54 ; for ( ia = 54 ; ia < b ; ia ++
) { c += WorkingSet -> Aeq [ ia ] * TrialState_searchDir [ ix ] ; ix ++ ; }
WorkingSet -> beq [ 2 ] += c ; ix = 0 ; c = 0.0 ; b = WorkingSet -> nVar + 81
; for ( ia = 81 ; ia < b ; ia ++ ) { c += WorkingSet -> Aeq [ ia ] *
TrialState_searchDir [ ix ] ; ix ++ ; } WorkingSet -> beq [ 3 ] += c ;
WorkingSet -> bwset [ 0 ] = WorkingSet -> beq [ 0 ] ; WorkingSet -> bwset [ 1
] = WorkingSet -> beq [ 1 ] ; WorkingSet -> bwset [ 2 ] = WorkingSet -> beq [
2 ] ; WorkingSet -> bwset [ 3 ] = WorkingSet -> beq [ 3 ] ; } static void
gmkk0qafbsm ( aaxpzhoxuz * solution , const real_T workingset_lb [ 27 ] ,
const int32_T workingset_indexLB [ 27 ] , const int32_T workingset_sizes [ 5
] , const boolean_T workingset_isActiveConstr [ 13 ] ) { int32_T b_idx ; for
( b_idx = 0 ; b_idx < workingset_sizes [ 3 ] ; b_idx ++ ) { if (
workingset_isActiveConstr [ b_idx + 4 ] ) { solution -> xstar [
workingset_indexLB [ b_idx ] - 1 ] = - workingset_lb [ workingset_indexLB [
b_idx ] - 1 ] ; } } } static void bplndqf2vjul ( ev3ltaqeco * obj , int32_T
mrows , int32_T ncols , k0zpd1rkeh * localB ) { real_T c [ 27 ] ; int32_T d [
27 ] ; obj -> usedPivoting = true ; obj -> mrows = mrows ; obj -> ncols =
ncols ; obj -> minRowCol = muIntScalarMin_sint32 ( mrows , ncols ) ; memcpy (
& localB -> b_mbvzarwird [ 0 ] , & obj -> QR [ 0 ] , 729U * sizeof ( real_T )
) ; memcpy ( & d [ 0 ] , & obj -> jpvt [ 0 ] , 27U * sizeof ( int32_T ) ) ;
po4mz2muctr ( localB -> b_mbvzarwird , mrows , ncols , d , c ) ; memcpy ( &
obj -> QR [ 0 ] , & localB -> b_mbvzarwird [ 0 ] , 729U * sizeof ( real_T ) )
; memcpy ( & obj -> tau [ 0 ] , & c [ 0 ] , 27U * sizeof ( real_T ) ) ;
memcpy ( & obj -> jpvt [ 0 ] , & d [ 0 ] , 27U * sizeof ( int32_T ) ) ; }
static int32_T b0lsfj2rph ( ev3ltaqeco * qrmanager , const real_T beqf [ 13 ]
, int32_T mConstr , int32_T nVar , k0zpd1rkeh * localB ) { int32_T
numDependent ; real_T tol ; real_T qtb ; int32_T b_idx ; int32_T ix ; int32_T
iy ; int32_T k ; boolean_T exitg1 ; numDependent = mConstr - nVar ;
numDependent = muIntScalarMax_sint32 ( 0 , numDependent ) ; for ( b_idx = 0 ;
b_idx < nVar ; b_idx ++ ) { qrmanager -> jpvt [ b_idx ] = 0 ; } bplndqf2vjul
( qrmanager , mConstr , nVar , localB ) ; tol = 100.0 * ( real_T ) nVar *
2.2204460492503131E-16 ; b_idx = muIntScalarMin_sint32 ( nVar , mConstr ) ;
while ( ( b_idx > 0 ) && ( muDoubleScalarAbs ( qrmanager -> QR [ ( ( b_idx -
1 ) * 27 + b_idx ) - 1 ] ) < tol ) ) { b_idx -- ; numDependent ++ ; } if (
numDependent > 0 ) { n2v2qif1yvp ( qrmanager , qrmanager -> mrows ) ; b_idx =
0 ; exitg1 = false ; while ( ( ! exitg1 ) && ( b_idx <= numDependent - 1 ) )
{ qtb = 0.0 ; ix = ( ( mConstr - b_idx ) - 1 ) * 27 ; iy = 0 ; for ( k = 0 ;
k < mConstr ; k ++ ) { qtb += qrmanager -> Q [ ix ] * beqf [ iy ] ; ix ++ ;
iy ++ ; } if ( muDoubleScalarAbs ( qtb ) >= tol ) { numDependent = - 1 ;
exitg1 = true ; } else { b_idx ++ ; } } } return numDependent ; } static void
eyvjfn2n3t ( int32_T depIdx [ 27 ] , int32_T mFixed , int32_T nDep ,
ev3ltaqeco * qrmanager , const real_T AeqfPrime [ 351 ] , int32_T mRows ,
int32_T nCols , k0zpd1rkeh * localB ) { int32_T b_idx ; for ( b_idx = 0 ;
b_idx < mFixed ; b_idx ++ ) { qrmanager -> jpvt [ b_idx ] = 1 ; } for ( b_idx
= mFixed ; b_idx < nCols ; b_idx ++ ) { qrmanager -> jpvt [ b_idx ] = 0 ; }
bplndqf2vju ( qrmanager , AeqfPrime , mRows , nCols , localB ) ; for ( b_idx
= 0 ; b_idx < nDep ; b_idx ++ ) { depIdx [ b_idx ] = qrmanager -> jpvt [ (
nCols - nDep ) + b_idx ] ; } } static void fdaj2f3shab ( int32_T x [ 27 ] ,
int32_T xLen , int32_T workspace [ 27 ] , int32_T xMin , int32_T xMax ) {
int32_T maxOffset ; int32_T idxStart ; int32_T idxEnd ; int32_T b_idxW ; if (
( xLen > 1 ) && ( xMax > xMin ) ) { maxOffset = xMax - xMin ; for ( idxStart
= 0 ; idxStart <= maxOffset ; idxStart ++ ) { workspace [ idxStart ] = 0 ; }
maxOffset = xMax - xMin ; for ( idxStart = 0 ; idxStart < xLen ; idxStart ++
) { workspace [ x [ idxStart ] - xMin ] ++ ; } for ( idxStart = 1 ; idxStart
< maxOffset + 1 ; idxStart ++ ) { workspace [ idxStart ] += workspace [
idxStart - 1 ] ; } idxStart = 0 ; idxEnd = workspace [ 0 ] ; for ( b_idxW = 0
; b_idxW < maxOffset ; b_idxW ++ ) { while ( idxStart + 1 <= idxEnd ) { x [
idxStart ] = b_idxW + xMin ; idxStart ++ ; } idxStart = workspace [ b_idxW ]
; idxEnd = workspace [ b_idxW + 1 ] ; } while ( idxStart + 1 <= idxEnd ) { x
[ idxStart ] = xMax ; idxStart ++ ; } } } static void hc3wqesyj2i (
nuprfhnilo * obj , int32_T idx_global ) { int32_T TYPE ; int32_T
idx_global_start ; int32_T b_idx ; TYPE = obj -> Wid [ idx_global - 1 ] - 1 ;
obj -> isActiveConstr [ ( obj -> isActiveIdx [ obj -> Wid [ idx_global - 1 ]
- 1 ] + obj -> Wlocalidx [ idx_global - 1 ] ) - 2 ] = false ;
idx_global_start = obj -> nActiveConstr - 1 ; obj -> Wid [ idx_global - 1 ] =
obj -> Wid [ obj -> nActiveConstr - 1 ] ; obj -> Wlocalidx [ idx_global - 1 ]
= obj -> Wlocalidx [ idx_global_start ] ; for ( b_idx = 0 ; b_idx < obj ->
nVar ; b_idx ++ ) { obj -> ATwset [ b_idx + 27 * ( idx_global - 1 ) ] = obj
-> ATwset [ 27 * idx_global_start + b_idx ] ; } obj -> bwset [ idx_global - 1
] = obj -> bwset [ idx_global_start ] ; obj -> nActiveConstr -- ; obj ->
nWConstr [ TYPE ] -- ; } static void h5r4em04uc ( nuprfhnilo * obj , int32_T
idx_global ) { int32_T totalEq ; int32_T TYPE ; int32_T b_idx ; int32_T d_idx
; totalEq = ( obj -> nWConstr [ 0 ] + obj -> nWConstr [ 1 ] ) - 1 ; if ( (
totalEq + 1 != 0 ) && ( idx_global <= totalEq + 1 ) ) { if ( ( totalEq + 1 ==
obj -> nActiveConstr ) || ( totalEq + 1 == idx_global ) ) { obj -> mEqRemoved
++ ; obj -> indexEqRemoved [ obj -> mEqRemoved - 1 ] = obj -> Wlocalidx [
idx_global - 1 ] ; hc3wqesyj2i ( obj , idx_global ) ; } else { obj ->
mEqRemoved ++ ; TYPE = obj -> Wid [ idx_global - 1 ] - 1 ; obj ->
indexEqRemoved [ obj -> mEqRemoved - 1 ] = obj -> Wlocalidx [ idx_global - 1
] ; obj -> isActiveConstr [ ( obj -> isActiveIdx [ obj -> Wid [ idx_global -
1 ] - 1 ] + obj -> Wlocalidx [ idx_global - 1 ] ) - 2 ] = false ; obj -> Wid
[ idx_global - 1 ] = obj -> Wid [ totalEq ] ; obj -> Wlocalidx [ idx_global -
1 ] = obj -> Wlocalidx [ totalEq ] ; for ( b_idx = 0 ; b_idx < obj -> nVar ;
b_idx ++ ) { obj -> ATwset [ b_idx + 27 * ( idx_global - 1 ) ] = obj ->
ATwset [ 27 * totalEq + b_idx ] ; } obj -> bwset [ idx_global - 1 ] = obj ->
bwset [ totalEq ] ; b_idx = obj -> nActiveConstr - 1 ; obj -> Wid [ totalEq ]
= obj -> Wid [ obj -> nActiveConstr - 1 ] ; obj -> Wlocalidx [ totalEq ] =
obj -> Wlocalidx [ b_idx ] ; for ( d_idx = 0 ; d_idx < obj -> nVar ; d_idx ++
) { obj -> ATwset [ d_idx + 27 * totalEq ] = obj -> ATwset [ 27 * b_idx +
d_idx ] ; } obj -> bwset [ totalEq ] = obj -> bwset [ b_idx ] ; obj ->
nActiveConstr -- ; obj -> nWConstr [ TYPE ] -- ; } } } static int32_T
i3eyuko120g ( guj4mpcfgf * memspace , nuprfhnilo * workingset , ev3ltaqeco *
qrmanager , k0zpd1rkeh * localB ) { int32_T nDepInd ; int32_T mTotalWorkingEq
; int32_T b [ 27 ] ; int32_T c [ 27 ] ; int32_T idx_row ; int32_T b_idx_col ;
mTotalWorkingEq = workingset -> nWConstr [ 1 ] + workingset -> nWConstr [ 0 ]
; nDepInd = 0 ; if ( mTotalWorkingEq > 0 ) { for ( idx_row = 0 ; idx_row <
mTotalWorkingEq ; idx_row ++ ) { for ( b_idx_col = 0 ; b_idx_col < workingset
-> nVar ; b_idx_col ++ ) { qrmanager -> QR [ idx_row + 27 * b_idx_col ] =
workingset -> ATwset [ 27 * idx_row + b_idx_col ] ; } } nDepInd = b0lsfj2rph
( qrmanager , workingset -> bwset , mTotalWorkingEq , workingset -> nVar ,
localB ) ; if ( nDepInd > 0 ) { memcpy ( & b [ 0 ] , & memspace ->
workspace_int [ 0 ] , 27U * sizeof ( int32_T ) ) ; eyvjfn2n3t ( b ,
workingset -> nWConstr [ 0 ] , nDepInd , qrmanager , workingset -> ATwset ,
workingset -> nVar , mTotalWorkingEq , localB ) ; memcpy ( & c [ 0 ] , &
memspace -> workspace_sort [ 0 ] , 27U * sizeof ( int32_T ) ) ; fdaj2f3shab (
b , nDepInd , c , 1 , mTotalWorkingEq ) ; memcpy ( & memspace ->
workspace_int [ 0 ] , & b [ 0 ] , 27U * sizeof ( int32_T ) ) ; memcpy ( &
memspace -> workspace_sort [ 0 ] , & c [ 0 ] , 27U * sizeof ( int32_T ) ) ;
for ( mTotalWorkingEq = nDepInd ; mTotalWorkingEq > 0 ; mTotalWorkingEq -- )
{ h5r4em04uc ( workingset , b [ mTotalWorkingEq - 1 ] ) ; } } } return
nDepInd ; } static void anjwrhuewgz ( nuprfhnilo * workingset , ev3ltaqeco *
qrmanager , guj4mpcfgf * memspace , real_T tolfactor , k0zpd1rkeh * localB )
{ int32_T nFixedConstr ; real_T tol ; int32_T idx ; int32_T nDepIneq ;
int32_T b [ 27 ] ; int32_T c [ 27 ] ; nFixedConstr = workingset -> nWConstr [
1 ] + workingset -> nWConstr [ 0 ] ; if ( ( workingset -> nWConstr [ 2 ] +
workingset -> nWConstr [ 3 ] ) + workingset -> nWConstr [ 4 ] > 0 ) { tol =
tolfactor * ( real_T ) workingset -> nVar * 2.2204460492503131E-16 ; for (
nDepIneq = 0 ; nDepIneq < nFixedConstr ; nDepIneq ++ ) { qrmanager -> jpvt [
nDepIneq ] = 1 ; } for ( nDepIneq = nFixedConstr + 1 ; nDepIneq <= workingset
-> nActiveConstr ; nDepIneq ++ ) { qrmanager -> jpvt [ nDepIneq - 1 ] = 0 ; }
bplndqf2vju ( qrmanager , workingset -> ATwset , workingset -> nVar ,
workingset -> nActiveConstr , localB ) ; nDepIneq = 0 ; for ( idx =
workingset -> nActiveConstr ; idx > workingset -> nVar ; idx -- ) { nDepIneq
++ ; memspace -> workspace_int [ nDepIneq - 1 ] = qrmanager -> jpvt [ idx - 1
] ; } if ( idx <= workingset -> nVar ) { while ( ( idx > nFixedConstr ) && (
muDoubleScalarAbs ( qrmanager -> QR [ ( ( idx - 1 ) * 27 + idx ) - 1 ] ) <
tol ) ) { nDepIneq ++ ; memspace -> workspace_int [ nDepIneq - 1 ] =
qrmanager -> jpvt [ idx - 1 ] ; idx -- ; } } memcpy ( & b [ 0 ] , & memspace
-> workspace_int [ 0 ] , 27U * sizeof ( int32_T ) ) ; memcpy ( & c [ 0 ] , &
memspace -> workspace_sort [ 0 ] , 27U * sizeof ( int32_T ) ) ; fdaj2f3shab (
b , nDepIneq , c , nFixedConstr + 1 , workingset -> nActiveConstr ) ; memcpy
( & memspace -> workspace_int [ 0 ] , & b [ 0 ] , 27U * sizeof ( int32_T ) )
; memcpy ( & memspace -> workspace_sort [ 0 ] , & c [ 0 ] , 27U * sizeof (
int32_T ) ) ; for ( nFixedConstr = nDepIneq ; nFixedConstr > 0 ; nFixedConstr
-- ) { hc3wqesyj2i ( workingset , b [ nFixedConstr - 1 ] ) ; } } } static
void gptgkafsbem ( nuprfhnilo * obj ) { int32_T idx_global ; for ( idx_global
= obj -> nWConstr [ 0 ] + obj -> nWConstr [ 1 ] ; idx_global < obj ->
nActiveConstr ; idx_global ++ ) { obj -> isActiveConstr [ ( obj ->
isActiveIdx [ obj -> Wid [ idx_global ] - 1 ] + obj -> Wlocalidx [ idx_global
] ) - 2 ] = false ; } obj -> nWConstr [ 2 ] = 0 ; obj -> nWConstr [ 3 ] = 0 ;
obj -> nWConstr [ 4 ] = 0 ; obj -> nActiveConstr = obj -> nWConstr [ 0 ] +
obj -> nWConstr [ 1 ] ; } static void b12gqbcpcn ( int32_T m , int32_T n ,
const real_T A [ 351 ] , const real_T x [ 27 ] , real_T y [ 729 ] ) { int32_T
ix ; real_T c ; int32_T iy ; int32_T iac ; int32_T b ; int32_T ia ; int32_T
b_c ; if ( n != 0 ) { iy = 0 ; b_c = ( n - 1 ) * 27 ; for ( iac = 1 ; iac <=
b_c + 1 ; iac += 27 ) { ix = 0 ; c = 0.0 ; b = ( iac + m ) - 1 ; for ( ia =
iac ; ia <= b ; ia ++ ) { c += A [ ia - 1 ] * x [ ix ] ; ix ++ ; } y [ iy ]
+= - c ; iy ++ ; } } } static void ni0psukixq ( real_T A [ 729 ] , int32_T m
, int32_T n , real_T tau [ 27 ] ) { int32_T minmn ; minmn =
muIntScalarMin_sint32 ( m , n ) ; memset ( & tau [ 0 ] , 0 , 27U * sizeof (
real_T ) ) ; if ( minmn >= 1 ) { mrqydsx15co ( A , m , n , minmn , tau ) ; }
} static void dtrv2kriti4dc ( ev3ltaqeco * obj , const real_T A [ 351 ] ,
int32_T mrows , int32_T ncols ) { int32_T b_idx ; boolean_T guard1 = false ;
guard1 = false ; if ( mrows * ncols > 0 ) { for ( b_idx = 0 ; b_idx < ncols ;
b_idx ++ ) { lv22laqqr3 ( mrows , A , 27 * b_idx + 1 , obj -> QR , 27 * b_idx
+ 1 ) ; } guard1 = true ; } else if ( mrows * ncols == 0 ) { obj -> mrows =
mrows ; obj -> ncols = ncols ; obj -> minRowCol = 0 ; } else { guard1 = true
; } if ( guard1 ) { obj -> usedPivoting = false ; obj -> mrows = mrows ; obj
-> ncols = ncols ; for ( b_idx = 0 ; b_idx < ncols ; b_idx ++ ) { obj -> jpvt
[ b_idx ] = b_idx + 1 ; } obj -> minRowCol = muIntScalarMin_sint32 ( mrows ,
ncols ) ; ni0psukixq ( obj -> QR , mrows , ncols , obj -> tau ) ; } } static
void cxg22hx205ogm ( int32_T m , const real_T A [ 729 ] , real_T B_j [ 729 ]
) { real_T temp ; int32_T iAcol ; int32_T i ; int32_T k ; for ( i = 1 ; i - 1
< m ; i ++ ) { iAcol = ( i - 1 ) * 27 - 1 ; temp = B_j [ i + - 1 ] ; for ( k
= 1 ; k - 1 <= i - 2 ; k ++ ) { temp -= A [ k + iAcol ] * B_j [ k + - 1 ] ; }
B_j [ i + - 1 ] = temp / A [ i + iAcol ] ; } for ( i = 1 ; i - 1 < m ; i ++ )
{ iAcol = ( i - 1 ) * 27 - 1 ; temp = B_j [ i + 26 ] ; for ( k = 1 ; k - 1 <=
i - 2 ; k ++ ) { temp -= A [ k + iAcol ] * B_j [ k + 26 ] ; } B_j [ i + 26 ]
= temp / A [ i + iAcol ] ; } } static void dtrv2kriti4d ( ev3ltaqeco * obj ,
int32_T mrows , int32_T ncols ) { int32_T idx ; obj -> usedPivoting = false ;
obj -> mrows = mrows ; obj -> ncols = ncols ; for ( idx = 0 ; idx < ncols ;
idx ++ ) { obj -> jpvt [ idx ] = idx + 1 ; } obj -> minRowCol =
muIntScalarMin_sint32 ( mrows , ncols ) ; ni0psukixq ( obj -> QR , mrows ,
ncols , obj -> tau ) ; } static void etqop2wnx13ttcx ( int32_T m , int32_T k
, const real_T A [ 729 ] , const real_T B_f [ 729 ] , real_T C [ 729 ] ) {
int32_T br ; int32_T ar ; int32_T ia ; int32_T c ; int32_T d ; int32_T b_ic ;
for ( ar = 0 ; ar < m ; ar ++ ) { C [ ar ] = 0.0 ; } br = m + 27 ; for ( ar =
27 ; ar < br ; ar ++ ) { C [ ar ] = 0.0 ; } ar = - 1 ; for ( br = 1 ; br <= k
; br ++ ) { ia = ar ; for ( b_ic = 0 ; b_ic < m ; b_ic ++ ) { ia ++ ; C [
b_ic ] += B_f [ br - 1 ] * A [ ia ] ; } ar += 27 ; } ar = - 1 ; c = k + 27 ;
for ( br = 28 ; br <= c ; br ++ ) { ia = ar ; d = m + 27 ; for ( b_ic = 27 ;
b_ic < d ; b_ic ++ ) { ia ++ ; C [ b_ic ] += B_f [ br - 1 ] * A [ ia ] ; } ar
+= 27 ; } } static void etqop2wnx13ttc ( int32_T m , int32_T k , const real_T
A [ 729 ] , const real_T B_g [ 729 ] , real_T C [ 729 ] ) { int32_T br ;
int32_T ar ; real_T temp ; int32_T c ; int32_T w ; for ( ar = 0 ; ar < m ; ar
++ ) { C [ ar ] = 0.0 ; } br = m + 27 ; for ( ar = 27 ; ar < br ; ar ++ ) { C
[ ar ] = 0.0 ; } ar = - 1 ; for ( br = 0 ; br < m ; br ++ ) { temp = 0.0 ;
for ( w = 1 ; w - 1 < k ; w ++ ) { temp += A [ w + ar ] * B_g [ w + - 1 ] ; }
C [ br ] += temp ; ar += 27 ; } ar = - 1 ; c = m + 27 ; for ( br = 27 ; br <
c ; br ++ ) { temp = 0.0 ; for ( w = 1 ; w - 1 < k ; w ++ ) { temp += A [ w +
ar ] * B_g [ w + 26 ] ; } C [ br ] += temp ; ar += 27 ; } } static void
cxg22hx205og ( int32_T m , const real_T A [ 729 ] , real_T B_p [ 729 ] ) {
int32_T kAcol ; int32_T k ; int32_T i ; for ( k = m ; k > 0 ; k -- ) { kAcol
= ( k - 1 ) * 27 - 1 ; if ( B_p [ k + - 1 ] != 0.0 ) { B_p [ k + - 1 ] /= A [
k + kAcol ] ; for ( i = 1 ; i - 1 <= k - 2 ; i ++ ) { B_p [ i + - 1 ] -= B_p
[ k + - 1 ] * A [ i + kAcol ] ; } } } for ( k = m ; k > 0 ; k -- ) { kAcol =
( k - 1 ) * 27 - 1 ; if ( B_p [ k + 26 ] != 0.0 ) { B_p [ k + 26 ] /= A [ k +
kAcol ] ; for ( i = 1 ; i - 1 <= k - 2 ; i ++ ) { B_p [ i + 26 ] -= B_p [ k +
26 ] * A [ i + kAcol ] ; } } } } static void h4s4ua3beju ( int32_T n , const
real_T x [ 27 ] , real_T y [ 729 ] ) { int32_T k ; for ( k = 0 ; k < n ; k ++
) { y [ k ] += x [ k ] ; } } static real_T l5xxgc0lxj ( nuprfhnilo * obj ,
const real_T x [ 729 ] ) { int32_T ix ; real_T c ; int32_T b ; int32_T ia ;
obj -> maxConstrWorkspace [ 0 ] = obj -> beq [ 0 ] ; obj ->
maxConstrWorkspace [ 0 ] = - obj -> maxConstrWorkspace [ 0 ] ; obj ->
maxConstrWorkspace [ 1 ] = obj -> beq [ 1 ] ; obj -> maxConstrWorkspace [ 1 ]
= - obj -> maxConstrWorkspace [ 1 ] ; obj -> maxConstrWorkspace [ 2 ] = obj
-> beq [ 2 ] ; obj -> maxConstrWorkspace [ 2 ] = - obj -> maxConstrWorkspace
[ 2 ] ; obj -> maxConstrWorkspace [ 3 ] = obj -> beq [ 3 ] ; obj ->
maxConstrWorkspace [ 3 ] = - obj -> maxConstrWorkspace [ 3 ] ; ix = 0 ; c =
0.0 ; for ( ia = 0 ; ia < obj -> nVar ; ia ++ ) { c += obj -> Aeq [ ia ] * x
[ ix ] ; ix ++ ; } obj -> maxConstrWorkspace [ 0 ] += c ; ix = 0 ; c = 0.0 ;
b = obj -> nVar + 27 ; for ( ia = 27 ; ia < b ; ia ++ ) { c += obj -> Aeq [
ia ] * x [ ix ] ; ix ++ ; } obj -> maxConstrWorkspace [ 1 ] += c ; ix = 0 ; c
= 0.0 ; b = obj -> nVar + 54 ; for ( ia = 54 ; ia < b ; ia ++ ) { c += obj ->
Aeq [ ia ] * x [ ix ] ; ix ++ ; } obj -> maxConstrWorkspace [ 2 ] += c ; ix =
0 ; c = 0.0 ; b = obj -> nVar + 81 ; for ( ia = 81 ; ia < b ; ia ++ ) { c +=
obj -> Aeq [ ia ] * x [ ix ] ; ix ++ ; } obj -> maxConstrWorkspace [ 3 ] += c
; return muDoubleScalarMax ( muDoubleScalarMax ( muDoubleScalarMax (
muDoubleScalarMax ( 0.0 , muDoubleScalarAbs ( obj -> maxConstrWorkspace [ 0 ]
) ) , muDoubleScalarAbs ( obj -> maxConstrWorkspace [ 1 ] ) ) ,
muDoubleScalarAbs ( obj -> maxConstrWorkspace [ 2 ] ) ) , muDoubleScalarAbs (
obj -> maxConstrWorkspace [ 3 ] ) ) ; } static real_T k4kfmgds3z ( nuprfhnilo
* obj , const real_T x [ 729 ] ) { real_T v ; int32_T ix ; real_T c ; int32_T
ia ; obj -> maxConstrWorkspace [ 0 ] = obj -> beq [ 0 ] ; obj ->
maxConstrWorkspace [ 0 ] = - obj -> maxConstrWorkspace [ 0 ] ; obj ->
maxConstrWorkspace [ 1 ] = obj -> beq [ 1 ] ; obj -> maxConstrWorkspace [ 1 ]
= - obj -> maxConstrWorkspace [ 1 ] ; obj -> maxConstrWorkspace [ 2 ] = obj
-> beq [ 2 ] ; obj -> maxConstrWorkspace [ 2 ] = - obj -> maxConstrWorkspace
[ 2 ] ; obj -> maxConstrWorkspace [ 3 ] = obj -> beq [ 3 ] ; obj ->
maxConstrWorkspace [ 3 ] = - obj -> maxConstrWorkspace [ 3 ] ; ix = 0 ; c =
0.0 ; for ( ia = 0 ; ia < 18 ; ia ++ ) { c += obj -> Aeq [ ia ] * x [ ix ] ;
ix ++ ; } obj -> maxConstrWorkspace [ 0 ] += c ; ix = 0 ; c = 0.0 ; for ( ia
= 27 ; ia < 45 ; ia ++ ) { c += obj -> Aeq [ ia ] * x [ ix ] ; ix ++ ; } obj
-> maxConstrWorkspace [ 1 ] += c ; ix = 0 ; c = 0.0 ; for ( ia = 54 ; ia < 72
; ia ++ ) { c += obj -> Aeq [ ia ] * x [ ix ] ; ix ++ ; } obj ->
maxConstrWorkspace [ 2 ] += c ; ix = 0 ; c = 0.0 ; for ( ia = 81 ; ia < 99 ;
ia ++ ) { c += obj -> Aeq [ ia ] * x [ ix ] ; ix ++ ; } obj ->
maxConstrWorkspace [ 3 ] += c ; obj -> maxConstrWorkspace [ 0 ] = ( obj ->
maxConstrWorkspace [ 0 ] - x [ 18 ] ) + x [ 22 ] ; v = muDoubleScalarMax (
0.0 , muDoubleScalarAbs ( obj -> maxConstrWorkspace [ 0 ] ) ) ; obj ->
maxConstrWorkspace [ 1 ] = ( obj -> maxConstrWorkspace [ 1 ] - x [ 19 ] ) + x
[ 23 ] ; v = muDoubleScalarMax ( v , muDoubleScalarAbs ( obj ->
maxConstrWorkspace [ 1 ] ) ) ; obj -> maxConstrWorkspace [ 2 ] = ( obj ->
maxConstrWorkspace [ 2 ] - x [ 20 ] ) + x [ 24 ] ; v = muDoubleScalarMax ( v
, muDoubleScalarAbs ( obj -> maxConstrWorkspace [ 2 ] ) ) ; obj ->
maxConstrWorkspace [ 3 ] = ( obj -> maxConstrWorkspace [ 3 ] - x [ 21 ] ) + x
[ 25 ] ; return muDoubleScalarMax ( v , muDoubleScalarAbs ( obj ->
maxConstrWorkspace [ 3 ] ) ) ; } static real_T btjgrinqe0pt ( nuprfhnilo *
obj , const real_T x [ 729 ] ) { real_T v ; int32_T mLB ; int32_T idx ; mLB =
obj -> sizes [ 3 ] ; if ( obj -> probType == 2 ) { v = k4kfmgds3z ( obj , x )
; } else { v = l5xxgc0lxj ( obj , x ) ; } if ( mLB > 0 ) { for ( idx = 0 ;
idx < mLB ; idx ++ ) { v = muDoubleScalarMax ( v , - x [ obj -> indexLB [ idx
] - 1 ] - obj -> lb [ obj -> indexLB [ idx ] - 1 ] ) ; } } return v ; }
static real_T l5xxgc0lxj4 ( nuprfhnilo * obj , const real_T x [ 729 ] ) {
int32_T ix ; real_T c ; int32_T b ; int32_T ia ; obj -> maxConstrWorkspace [
0 ] = obj -> beq [ 0 ] ; obj -> maxConstrWorkspace [ 0 ] = - obj ->
maxConstrWorkspace [ 0 ] ; obj -> maxConstrWorkspace [ 1 ] = obj -> beq [ 1 ]
; obj -> maxConstrWorkspace [ 1 ] = - obj -> maxConstrWorkspace [ 1 ] ; obj
-> maxConstrWorkspace [ 2 ] = obj -> beq [ 2 ] ; obj -> maxConstrWorkspace [
2 ] = - obj -> maxConstrWorkspace [ 2 ] ; obj -> maxConstrWorkspace [ 3 ] =
obj -> beq [ 3 ] ; obj -> maxConstrWorkspace [ 3 ] = - obj ->
maxConstrWorkspace [ 3 ] ; ix = 27 ; c = 0.0 ; for ( ia = 0 ; ia < obj ->
nVar ; ia ++ ) { c += obj -> Aeq [ ia ] * x [ ix ] ; ix ++ ; } obj ->
maxConstrWorkspace [ 0 ] += c ; ix = 27 ; c = 0.0 ; b = obj -> nVar + 27 ;
for ( ia = 27 ; ia < b ; ia ++ ) { c += obj -> Aeq [ ia ] * x [ ix ] ; ix ++
; } obj -> maxConstrWorkspace [ 1 ] += c ; ix = 27 ; c = 0.0 ; b = obj ->
nVar + 54 ; for ( ia = 54 ; ia < b ; ia ++ ) { c += obj -> Aeq [ ia ] * x [
ix ] ; ix ++ ; } obj -> maxConstrWorkspace [ 2 ] += c ; ix = 27 ; c = 0.0 ; b
= obj -> nVar + 81 ; for ( ia = 81 ; ia < b ; ia ++ ) { c += obj -> Aeq [ ia
] * x [ ix ] ; ix ++ ; } obj -> maxConstrWorkspace [ 3 ] += c ; return
muDoubleScalarMax ( muDoubleScalarMax ( muDoubleScalarMax ( muDoubleScalarMax
( 0.0 , muDoubleScalarAbs ( obj -> maxConstrWorkspace [ 0 ] ) ) ,
muDoubleScalarAbs ( obj -> maxConstrWorkspace [ 1 ] ) ) , muDoubleScalarAbs (
obj -> maxConstrWorkspace [ 2 ] ) ) , muDoubleScalarAbs ( obj ->
maxConstrWorkspace [ 3 ] ) ) ; } static real_T k4kfmgds3zj ( nuprfhnilo * obj
, const real_T x [ 729 ] ) { real_T v ; int32_T ix ; real_T c ; int32_T ia ;
obj -> maxConstrWorkspace [ 0 ] = obj -> beq [ 0 ] ; obj ->
maxConstrWorkspace [ 0 ] = - obj -> maxConstrWorkspace [ 0 ] ; obj ->
maxConstrWorkspace [ 1 ] = obj -> beq [ 1 ] ; obj -> maxConstrWorkspace [ 1 ]
= - obj -> maxConstrWorkspace [ 1 ] ; obj -> maxConstrWorkspace [ 2 ] = obj
-> beq [ 2 ] ; obj -> maxConstrWorkspace [ 2 ] = - obj -> maxConstrWorkspace
[ 2 ] ; obj -> maxConstrWorkspace [ 3 ] = obj -> beq [ 3 ] ; obj ->
maxConstrWorkspace [ 3 ] = - obj -> maxConstrWorkspace [ 3 ] ; ix = 27 ; c =
0.0 ; for ( ia = 0 ; ia < 18 ; ia ++ ) { c += obj -> Aeq [ ia ] * x [ ix ] ;
ix ++ ; } obj -> maxConstrWorkspace [ 0 ] += c ; ix = 27 ; c = 0.0 ; for ( ia
= 27 ; ia < 45 ; ia ++ ) { c += obj -> Aeq [ ia ] * x [ ix ] ; ix ++ ; } obj
-> maxConstrWorkspace [ 1 ] += c ; ix = 27 ; c = 0.0 ; for ( ia = 54 ; ia <
72 ; ia ++ ) { c += obj -> Aeq [ ia ] * x [ ix ] ; ix ++ ; } obj ->
maxConstrWorkspace [ 2 ] += c ; ix = 27 ; c = 0.0 ; for ( ia = 81 ; ia < 99 ;
ia ++ ) { c += obj -> Aeq [ ia ] * x [ ix ] ; ix ++ ; } obj ->
maxConstrWorkspace [ 3 ] += c ; obj -> maxConstrWorkspace [ 0 ] = ( obj ->
maxConstrWorkspace [ 0 ] - x [ 45 ] ) + x [ 49 ] ; v = muDoubleScalarMax (
0.0 , muDoubleScalarAbs ( obj -> maxConstrWorkspace [ 0 ] ) ) ; obj ->
maxConstrWorkspace [ 1 ] = ( obj -> maxConstrWorkspace [ 1 ] - x [ 46 ] ) + x
[ 50 ] ; v = muDoubleScalarMax ( v , muDoubleScalarAbs ( obj ->
maxConstrWorkspace [ 1 ] ) ) ; obj -> maxConstrWorkspace [ 2 ] = ( obj ->
maxConstrWorkspace [ 2 ] - x [ 47 ] ) + x [ 51 ] ; v = muDoubleScalarMax ( v
, muDoubleScalarAbs ( obj -> maxConstrWorkspace [ 2 ] ) ) ; obj ->
maxConstrWorkspace [ 3 ] = ( obj -> maxConstrWorkspace [ 3 ] - x [ 48 ] ) + x
[ 52 ] ; return muDoubleScalarMax ( v , muDoubleScalarAbs ( obj ->
maxConstrWorkspace [ 3 ] ) ) ; } static real_T btjgrinqe0ptp ( nuprfhnilo *
obj , const real_T x [ 729 ] ) { real_T v ; int32_T mLB ; int32_T idx ; mLB =
obj -> sizes [ 3 ] ; if ( obj -> probType == 2 ) { v = k4kfmgds3zj ( obj , x
) ; } else { v = l5xxgc0lxj4 ( obj , x ) ; } if ( mLB > 0 ) { for ( idx = 0 ;
idx < mLB ; idx ++ ) { v = muDoubleScalarMax ( v , - x [ obj -> indexLB [ idx
] + 26 ] - obj -> lb [ obj -> indexLB [ idx ] - 1 ] ) ; } } return v ; }
static void oro5v4bizl ( int32_T n , const real_T x [ 729 ] , real_T y [ 27 ]
) { int32_T b_k ; for ( b_k = 0 ; b_k < n ; b_k ++ ) { y [ b_k ] = x [ b_k +
27 ] ; } } static void lxnymgh43e ( int32_T n , const real_T x [ 729 ] ,
real_T y [ 27 ] ) { int32_T b_k ; for ( b_k = 0 ; b_k < n ; b_k ++ ) { y [
b_k ] = x [ b_k ] ; } } static boolean_T fetubx0squj ( real_T workspace [ 729
] , real_T xCurrent [ 27 ] , nuprfhnilo * workingset , ev3ltaqeco * qrmanager
, k0zpd1rkeh * localB ) { boolean_T nonDegenerateWset ; int32_T mWConstr ;
int32_T nVar ; real_T constrViolation_minnormX ; real_T
constrViolation_basicX ; int32_T b_idx ; int32_T b_idx_row ; int32_T exitg1 ;
mWConstr = workingset -> nActiveConstr - 1 ; nVar = workingset -> nVar ;
nonDegenerateWset = true ; if ( workingset -> nActiveConstr != 0 ) { for (
b_idx = 0 ; b_idx <= mWConstr ; b_idx ++ ) { workspace [ b_idx ] = workingset
-> bwset [ b_idx ] ; workspace [ b_idx + 27 ] = workingset -> bwset [ b_idx ]
; } b12gqbcpcn ( workingset -> nVar , workingset -> nActiveConstr ,
workingset -> ATwset , xCurrent , workspace ) ; if ( workingset ->
nActiveConstr >= workingset -> nVar ) { for ( b_idx = 0 ; b_idx < nVar ;
b_idx ++ ) { for ( b_idx_row = 0 ; b_idx_row <= mWConstr ; b_idx_row ++ ) {
qrmanager -> QR [ b_idx_row + 27 * b_idx ] = workingset -> ATwset [ 27 *
b_idx_row + b_idx ] ; } } dtrv2kriti4d ( qrmanager , workingset ->
nActiveConstr , workingset -> nVar ) ; n2v2qif1yvp ( qrmanager , qrmanager ->
mrows ) ; memcpy ( & localB -> workspace [ 0 ] , & workspace [ 0 ] , 729U *
sizeof ( real_T ) ) ; etqop2wnx13ttc ( workingset -> nVar , workingset ->
nActiveConstr , qrmanager -> Q , localB -> workspace , workspace ) ;
cxg22hx205og ( workingset -> nVar , qrmanager -> QR , workspace ) ; } else {
dtrv2kriti4dc ( qrmanager , workingset -> ATwset , workingset -> nVar ,
workingset -> nActiveConstr ) ; n2v2qif1yvp ( qrmanager , qrmanager ->
minRowCol ) ; cxg22hx205ogm ( workingset -> nActiveConstr , qrmanager -> QR ,
workspace ) ; memcpy ( & localB -> workspace [ 0 ] , & workspace [ 0 ] , 729U
* sizeof ( real_T ) ) ; etqop2wnx13ttcx ( workingset -> nVar , workingset ->
nActiveConstr , qrmanager -> Q , localB -> workspace , workspace ) ; }
mWConstr = 0 ; do { exitg1 = 0 ; if ( mWConstr <= nVar - 1 ) { if ( ( !
hcy4pkatwq ( workspace [ mWConstr ] ) ) || ( ! hcy4pkatwq ( workspace [
mWConstr + 27 ] ) ) ) { nonDegenerateWset = false ; exitg1 = 1 ; } else {
mWConstr ++ ; } } else { h4s4ua3beju ( nVar , xCurrent , workspace ) ;
constrViolation_minnormX = btjgrinqe0pt ( workingset , workspace ) ;
constrViolation_basicX = btjgrinqe0ptp ( workingset , workspace ) ; if ( (
constrViolation_minnormX <= 2.2204460492503131E-16 ) || (
constrViolation_minnormX < constrViolation_basicX ) ) { lxnymgh43e ( nVar ,
workspace , xCurrent ) ; } else { oro5v4bizl ( nVar , workspace , xCurrent )
; } exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } return nonDegenerateWset ; }
static real_T l5xxgc0lxj4y ( nuprfhnilo * obj , const real_T x [ 27 ] ) {
int32_T ix ; real_T c ; int32_T b ; int32_T ia ; obj -> maxConstrWorkspace [
0 ] = obj -> beq [ 0 ] ; obj -> maxConstrWorkspace [ 0 ] = - obj ->
maxConstrWorkspace [ 0 ] ; obj -> maxConstrWorkspace [ 1 ] = obj -> beq [ 1 ]
; obj -> maxConstrWorkspace [ 1 ] = - obj -> maxConstrWorkspace [ 1 ] ; obj
-> maxConstrWorkspace [ 2 ] = obj -> beq [ 2 ] ; obj -> maxConstrWorkspace [
2 ] = - obj -> maxConstrWorkspace [ 2 ] ; obj -> maxConstrWorkspace [ 3 ] =
obj -> beq [ 3 ] ; obj -> maxConstrWorkspace [ 3 ] = - obj ->
maxConstrWorkspace [ 3 ] ; ix = 0 ; c = 0.0 ; for ( ia = 0 ; ia < obj -> nVar
; ia ++ ) { c += obj -> Aeq [ ia ] * x [ ix ] ; ix ++ ; } obj ->
maxConstrWorkspace [ 0 ] += c ; ix = 0 ; c = 0.0 ; b = obj -> nVar + 27 ; for
( ia = 27 ; ia < b ; ia ++ ) { c += obj -> Aeq [ ia ] * x [ ix ] ; ix ++ ; }
obj -> maxConstrWorkspace [ 1 ] += c ; ix = 0 ; c = 0.0 ; b = obj -> nVar +
54 ; for ( ia = 54 ; ia < b ; ia ++ ) { c += obj -> Aeq [ ia ] * x [ ix ] ;
ix ++ ; } obj -> maxConstrWorkspace [ 2 ] += c ; ix = 0 ; c = 0.0 ; b = obj
-> nVar + 81 ; for ( ia = 81 ; ia < b ; ia ++ ) { c += obj -> Aeq [ ia ] * x
[ ix ] ; ix ++ ; } obj -> maxConstrWorkspace [ 3 ] += c ; return
muDoubleScalarMax ( muDoubleScalarMax ( muDoubleScalarMax ( muDoubleScalarMax
( 0.0 , muDoubleScalarAbs ( obj -> maxConstrWorkspace [ 0 ] ) ) ,
muDoubleScalarAbs ( obj -> maxConstrWorkspace [ 1 ] ) ) , muDoubleScalarAbs (
obj -> maxConstrWorkspace [ 2 ] ) ) , muDoubleScalarAbs ( obj ->
maxConstrWorkspace [ 3 ] ) ) ; } static real_T k4kfmgds3zj2 ( nuprfhnilo *
obj , const real_T x [ 27 ] ) { real_T v ; int32_T ix ; real_T c ; int32_T ia
; obj -> maxConstrWorkspace [ 0 ] = obj -> beq [ 0 ] ; obj ->
maxConstrWorkspace [ 0 ] = - obj -> maxConstrWorkspace [ 0 ] ; obj ->
maxConstrWorkspace [ 1 ] = obj -> beq [ 1 ] ; obj -> maxConstrWorkspace [ 1 ]
= - obj -> maxConstrWorkspace [ 1 ] ; obj -> maxConstrWorkspace [ 2 ] = obj
-> beq [ 2 ] ; obj -> maxConstrWorkspace [ 2 ] = - obj -> maxConstrWorkspace
[ 2 ] ; obj -> maxConstrWorkspace [ 3 ] = obj -> beq [ 3 ] ; obj ->
maxConstrWorkspace [ 3 ] = - obj -> maxConstrWorkspace [ 3 ] ; ix = 0 ; c =
0.0 ; for ( ia = 0 ; ia < 18 ; ia ++ ) { c += obj -> Aeq [ ia ] * x [ ix ] ;
ix ++ ; } obj -> maxConstrWorkspace [ 0 ] += c ; ix = 0 ; c = 0.0 ; for ( ia
= 27 ; ia < 45 ; ia ++ ) { c += obj -> Aeq [ ia ] * x [ ix ] ; ix ++ ; } obj
-> maxConstrWorkspace [ 1 ] += c ; ix = 0 ; c = 0.0 ; for ( ia = 54 ; ia < 72
; ia ++ ) { c += obj -> Aeq [ ia ] * x [ ix ] ; ix ++ ; } obj ->
maxConstrWorkspace [ 2 ] += c ; ix = 0 ; c = 0.0 ; for ( ia = 81 ; ia < 99 ;
ia ++ ) { c += obj -> Aeq [ ia ] * x [ ix ] ; ix ++ ; } obj ->
maxConstrWorkspace [ 3 ] += c ; obj -> maxConstrWorkspace [ 0 ] = ( obj ->
maxConstrWorkspace [ 0 ] - x [ 18 ] ) + x [ 22 ] ; v = muDoubleScalarMax (
0.0 , muDoubleScalarAbs ( obj -> maxConstrWorkspace [ 0 ] ) ) ; obj ->
maxConstrWorkspace [ 1 ] = ( obj -> maxConstrWorkspace [ 1 ] - x [ 19 ] ) + x
[ 23 ] ; v = muDoubleScalarMax ( v , muDoubleScalarAbs ( obj ->
maxConstrWorkspace [ 1 ] ) ) ; obj -> maxConstrWorkspace [ 2 ] = ( obj ->
maxConstrWorkspace [ 2 ] - x [ 20 ] ) + x [ 24 ] ; v = muDoubleScalarMax ( v
, muDoubleScalarAbs ( obj -> maxConstrWorkspace [ 2 ] ) ) ; obj ->
maxConstrWorkspace [ 3 ] = ( obj -> maxConstrWorkspace [ 3 ] - x [ 21 ] ) + x
[ 25 ] ; return muDoubleScalarMax ( v , muDoubleScalarAbs ( obj ->
maxConstrWorkspace [ 3 ] ) ) ; } static real_T btjgrinqe0ptpf ( nuprfhnilo *
obj , const real_T x [ 27 ] ) { real_T v ; int32_T mLB ; int32_T idx ; mLB =
obj -> sizes [ 3 ] ; if ( obj -> probType == 2 ) { v = k4kfmgds3zj2 ( obj , x
) ; } else { v = l5xxgc0lxj4y ( obj , x ) ; } if ( mLB > 0 ) { for ( idx = 0
; idx < mLB ; idx ++ ) { v = muDoubleScalarMax ( v , - x [ obj -> indexLB [
idx ] - 1 ] - obj -> lb [ obj -> indexLB [ idx ] - 1 ] ) ; } } return v ; }
static void g1pwp1vmykx ( aaxpzhoxuz * solution , guj4mpcfgf * memspace ,
nuprfhnilo * workingset , ev3ltaqeco * qrmanager , k0zpd1rkeh * localB ) {
int32_T b ; real_T c [ 27 ] ; boolean_T okWorkingSet ; real_T constrViolation
; boolean_T guard1 = false ; solution -> state = 82 ; b = i3eyuko120g (
memspace , workingset , qrmanager , localB ) ; if ( b != - 1 ) { anjwrhuewgz
( workingset , qrmanager , memspace , 100.0 , localB ) ; memcpy ( & c [ 0 ] ,
& solution -> xstar [ 0 ] , 27U * sizeof ( real_T ) ) ; okWorkingSet =
fetubx0squj ( memspace -> workspace_double , c , workingset , qrmanager ,
localB ) ; memcpy ( & solution -> xstar [ 0 ] , & c [ 0 ] , 27U * sizeof (
real_T ) ) ; guard1 = false ; if ( ! okWorkingSet ) { anjwrhuewgz (
workingset , qrmanager , memspace , 1000.0 , localB ) ; okWorkingSet =
fetubx0squj ( memspace -> workspace_double , c , workingset , qrmanager ,
localB ) ; memcpy ( & solution -> xstar [ 0 ] , & c [ 0 ] , 27U * sizeof (
real_T ) ) ; if ( ! okWorkingSet ) { solution -> state = - 7 ; } else {
guard1 = true ; } } else { guard1 = true ; } if ( guard1 ) { if ( workingset
-> nWConstr [ 0 ] + workingset -> nWConstr [ 1 ] == workingset -> nVar ) {
constrViolation = btjgrinqe0ptpf ( workingset , solution -> xstar ) ; if (
constrViolation > 1.0E-6 ) { solution -> state = - 2 ; } } } } else {
solution -> state = - 3 ; gptgkafsbem ( workingset ) ; } } static void
keagmo2a3hl ( ecn2fyspui * obj , int32_T NumVars ) { obj -> prev_objtype =
obj -> objtype ; obj -> prev_nvar = obj -> nvar ; obj -> prev_hasLinear = obj
-> hasLinear ; obj -> objtype = 5 ; obj -> nvar = NumVars ; obj ->
gammaScalar = 1.0 ; obj -> hasLinear = true ; } static void nxdwdyjjzvs (
boolean_T obj_hasLinear , int32_T obj_nvar , real_T workspace [ 729 ] , const
real_T H [ 324 ] , const real_T f [ 27 ] , const real_T x [ 27 ] ) { int32_T
fMultiplier ; int32_T iy ; real_T c ; int32_T iac ; int32_T b ; int32_T ia ;
int32_T b_c ; fMultiplier = 0 ; if ( obj_hasLinear ) { while ( fMultiplier <=
obj_nvar - 1 ) { workspace [ fMultiplier ] = f [ fMultiplier ] ; fMultiplier
++ ; } fMultiplier = 1 ; } if ( obj_nvar != 0 ) { if ( fMultiplier != 1 ) {
while ( fMultiplier <= obj_nvar - 1 ) { workspace [ fMultiplier ] = 0.0 ;
fMultiplier ++ ; } } fMultiplier = 0 ; b_c = ( obj_nvar - 1 ) * obj_nvar + 1
; iac = 1 ; while ( ( ( obj_nvar > 0 ) && ( iac <= b_c ) ) || ( ( obj_nvar <
0 ) && ( iac >= b_c ) ) ) { c = 0.5 * x [ fMultiplier ] ; iy = 0 ; b = ( iac
+ obj_nvar ) - 1 ; for ( ia = iac ; ia <= b ; ia ++ ) { workspace [ iy ] += H
[ ia - 1 ] * c ; iy ++ ; } fMultiplier ++ ; iac += obj_nvar ; } } } static
real_T ftrayw10nos ( const ecn2fyspui * obj , real_T workspace [ 729 ] ,
const real_T H [ 324 ] , const real_T f [ 27 ] , const real_T x [ 27 ] ) {
real_T val ; int32_T b_k ; val = 0.0 ; switch ( obj -> objtype ) { case 5 :
val = x [ obj -> nvar - 1 ] * obj -> gammaScalar ; break ; case 3 :
nxdwdyjjzvs ( obj -> hasLinear , obj -> nvar , workspace , H , f , x ) ; if (
obj -> nvar >= 1 ) { for ( b_k = 0 ; b_k < obj -> nvar ; b_k ++ ) { val += x
[ b_k ] * workspace [ b_k ] ; } } break ; case 4 : nxdwdyjjzvs ( obj ->
hasLinear , obj -> nvar , workspace , H , f , x ) ; for ( b_k = obj -> nvar ;
b_k + 1 < 27 ; b_k ++ ) { workspace [ b_k ] = 0.5 * obj -> beta * x [ b_k ] +
obj -> rho ; } for ( b_k = 0 ; b_k < 26 ; b_k ++ ) { val += x [ b_k ] *
workspace [ b_k ] ; } break ; } return val ; } static void cbgw2va3xd (
int32_T m , int32_T n , const real_T A [ 324 ] , int32_T lda , const real_T x
[ 27 ] , real_T y [ 26 ] ) { int32_T iy ; int32_T ix ; int32_T iac ; int32_T
b ; int32_T ia ; int32_T c ; if ( ( m != 0 ) && ( n != 0 ) ) { for ( ix = 0 ;
ix < m ; ix ++ ) { y [ ix ] = 0.0 ; } ix = 0 ; c = ( n - 1 ) * lda + 1 ; iac
= 1 ; while ( ( ( lda > 0 ) && ( iac <= c ) ) || ( ( lda < 0 ) && ( iac >= c
) ) ) { iy = 0 ; b = ( iac + m ) - 1 ; for ( ia = iac ; ia <= b ; ia ++ ) { y
[ iy ] += A [ ia - 1 ] * x [ ix ] ; iy ++ ; } ix ++ ; iac += lda ; } } }
static void oqrt5rwtljp ( ecn2fyspui * obj , const real_T H [ 324 ] , const
real_T f [ 27 ] , const real_T x [ 27 ] ) { int32_T k ; int32_T iy ; switch (
obj -> objtype ) { case 5 : for ( iy = 0 ; iy <= obj -> nvar - 2 ; iy ++ ) {
obj -> grad [ iy ] = 0.0 ; } obj -> grad [ obj -> nvar - 1 ] = obj ->
gammaScalar ; break ; case 3 : cbgw2va3xd ( obj -> nvar , obj -> nvar , H ,
obj -> nvar , x , obj -> Hx ) ; for ( iy = 0 ; iy < obj -> nvar ; iy ++ ) {
obj -> grad [ iy ] = obj -> Hx [ iy ] ; } if ( obj -> hasLinear && ( obj ->
nvar >= 1 ) ) { iy = obj -> nvar - 1 ; for ( k = 0 ; k <= iy ; k ++ ) { obj
-> grad [ k ] += f [ k ] ; } } break ; case 4 : cbgw2va3xd ( obj -> nvar ,
obj -> nvar , H , obj -> nvar , x , obj -> Hx ) ; for ( iy = obj -> nvar ; iy
+ 1 < 27 ; iy ++ ) { obj -> Hx [ iy ] = obj -> beta * x [ iy ] ; } memcpy ( &
obj -> grad [ 0 ] , & obj -> Hx [ 0 ] , 26U * sizeof ( real_T ) ) ; if ( obj
-> hasLinear && ( obj -> nvar >= 1 ) ) { iy = obj -> nvar - 1 ; for ( k = 0 ;
k <= iy ; k ++ ) { obj -> grad [ k ] += f [ k ] ; } } if ( 26 - obj -> nvar
>= 1 ) { iy = obj -> nvar ; for ( k = 0 ; k <= 25 - obj -> nvar ; k ++ ) {
obj -> grad [ iy ] += obj -> rho ; iy ++ ; } } break ; } } static real_T
neflgzisgif ( const ecn2fyspui * obj , real_T workspace [ 729 ] , const
real_T f [ 27 ] , const real_T x [ 27 ] ) { real_T val ; int32_T b_k ; val =
0.0 ; switch ( obj -> objtype ) { case 5 : val = x [ obj -> nvar - 1 ] * obj
-> gammaScalar ; break ; case 3 : if ( obj -> hasLinear ) { for ( b_k = 0 ;
b_k < obj -> nvar ; b_k ++ ) { workspace [ b_k ] = 0.5 * obj -> Hx [ b_k ] +
f [ b_k ] ; } if ( obj -> nvar >= 1 ) { for ( b_k = 0 ; b_k < obj -> nvar ;
b_k ++ ) { val += x [ b_k ] * workspace [ b_k ] ; } } } else { if ( obj ->
nvar >= 1 ) { for ( b_k = 0 ; b_k < obj -> nvar ; b_k ++ ) { val += x [ b_k ]
* obj -> Hx [ b_k ] ; } } val *= 0.5 ; } break ; case 4 : if ( obj ->
hasLinear ) { for ( b_k = 0 ; b_k < obj -> nvar ; b_k ++ ) { workspace [ b_k
] = f [ b_k ] ; } for ( b_k = 0 ; b_k <= 25 - obj -> nvar ; b_k ++ ) {
workspace [ obj -> nvar + b_k ] = obj -> rho ; } for ( b_k = 0 ; b_k < 26 ;
b_k ++ ) { workspace [ b_k ] += 0.5 * obj -> Hx [ b_k ] ; val += x [ b_k ] *
workspace [ b_k ] ; } } else { for ( b_k = 0 ; b_k < 26 ; b_k ++ ) { val += x
[ b_k ] * obj -> Hx [ b_k ] ; } val *= 0.5 ; for ( b_k = obj -> nvar ; b_k +
1 < 27 ; b_k ++ ) { val += x [ b_k ] * obj -> rho ; } } break ; } return val
; } static void gii00qdwdf ( int32_T n , real_T y [ 13 ] ) { int32_T k ; for
( k = 0 ; k < n ; k ++ ) { y [ k ] = 0.0 ; } } static void fedqp1cplx (
int32_T n , real_T y [ 27 ] ) { int32_T k ; for ( k = 0 ; k < n ; k ++ ) { y
[ k ] = 0.0 ; } } static void gmoswboekt ( int32_T n , real_T x [ 729 ] ,
int32_T ix0 , int32_T iy0 , real_T c , real_T s ) { int32_T ix ; int32_T iy ;
real_T temp ; int32_T k ; if ( n >= 1 ) { ix = ix0 - 1 ; iy = iy0 - 1 ; for (
k = 0 ; k < n ; k ++ ) { temp = c * x [ ix ] + s * x [ iy ] ; x [ iy ] = c *
x [ iy ] - s * x [ ix ] ; x [ ix ] = temp ; iy ++ ; ix ++ ; } } } static void
lzz4urlwyck ( ev3ltaqeco * obj , const real_T vec [ 351 ] , int32_T iv0 ) {
int32_T iQR0 ; real_T c ; real_T b_c ; real_T s ; int32_T iyend ; int32_T ix
; real_T c_c ; int32_T b_iy ; int32_T d ; int32_T ia ; iQR0 = obj -> ncols +
1 ; obj -> minRowCol = muIntScalarMin_sint32 ( obj -> mrows , iQR0 ) ; iQR0 =
27 * obj -> ncols ; if ( obj -> mrows != 0 ) { iyend = iQR0 + obj -> mrows ;
for ( b_iy = iQR0 ; b_iy < iyend ; b_iy ++ ) { obj -> QR [ b_iy ] = 0.0 ; }
iyend = ( obj -> mrows - 1 ) * 27 ; for ( b_iy = 1 ; b_iy <= iyend + 1 ; b_iy
+= 27 ) { ix = iv0 ; c_c = 0.0 ; d = ( b_iy + obj -> mrows ) - 1 ; for ( ia =
b_iy ; ia <= d ; ia ++ ) { c_c += obj -> Q [ ia - 1 ] * vec [ ix - 1 ] ; ix
++ ; } obj -> QR [ iQR0 ] += c_c ; iQR0 ++ ; } } obj -> ncols ++ ; obj ->
jpvt [ obj -> ncols - 1 ] = obj -> ncols ; for ( iQR0 = obj -> mrows - 2 ;
iQR0 + 2 > obj -> ncols ; iQR0 -- ) { c_c = obj -> QR [ ( obj -> ncols - 1 )
* 27 + iQR0 ] ; c = obj -> QR [ ( ( obj -> ncols - 1 ) * 27 + iQR0 ) + 1 ] ;
bmlfodpuvl ( & c_c , & c , & b_c , & s ) ; obj -> QR [ iQR0 + 27 * ( obj ->
ncols - 1 ) ] = c_c ; obj -> QR [ ( iQR0 + 27 * ( obj -> ncols - 1 ) ) + 1 ]
= c ; iyend = 27 * iQR0 + 1 ; gmoswboekt ( obj -> mrows , obj -> Q , iyend ,
iyend + 27 , b_c , s ) ; } } static void gmoswboektq ( int32_T n , real_T x [
729 ] , int32_T ix0 , int32_T iy0 , real_T c , real_T s ) { int32_T ix ;
int32_T iy ; real_T temp ; int32_T k ; if ( n >= 1 ) { ix = ix0 - 1 ; iy =
iy0 - 1 ; for ( k = 0 ; k < n ; k ++ ) { temp = c * x [ ix ] + s * x [ iy ] ;
x [ iy ] = c * x [ iy ] - s * x [ ix ] ; x [ ix ] = temp ; iy += 27 ; ix +=
27 ; } } } static void jbdwtzuxva5 ( ev3ltaqeco * obj , int32_T idx ) {
int32_T i ; int32_T k ; int32_T QRk0 ; real_T d ; real_T e ; real_T c_c ;
real_T b_s ; if ( obj -> usedPivoting ) { i = 1 ; while ( ( i <= obj -> ncols
) && ( obj -> jpvt [ i - 1 ] != idx ) ) { i ++ ; } idx = i ; } if ( idx >=
obj -> ncols ) { obj -> ncols -- ; } else { obj -> jpvt [ idx - 1 ] = obj ->
jpvt [ obj -> ncols - 1 ] ; for ( i = 0 ; i < obj -> minRowCol ; i ++ ) { obj
-> QR [ i + 27 * ( idx - 1 ) ] = obj -> QR [ ( obj -> ncols - 1 ) * 27 + i ]
; } obj -> ncols -- ; obj -> minRowCol = muIntScalarMin_sint32 ( obj -> mrows
, obj -> ncols ) ; if ( idx < obj -> mrows ) { i = obj -> mrows - 1 ; i =
muIntScalarMin_sint32 ( i , obj -> ncols ) ; for ( k = i ; k >= idx ; k -- )
{ d = obj -> QR [ ( ( idx - 1 ) * 27 + k ) - 1 ] ; e = obj -> QR [ ( idx - 1
) * 27 + k ] ; bmlfodpuvl ( & d , & e , & c_c , & b_s ) ; obj -> QR [ ( k +
27 * ( idx - 1 ) ) - 1 ] = d ; obj -> QR [ k + 27 * ( idx - 1 ) ] = e ; obj
-> QR [ k + 27 * ( k - 1 ) ] = 0.0 ; QRk0 = 27 * idx + k ; gmoswboektq ( obj
-> ncols - idx , obj -> QR , QRk0 , QRk0 + 1 , c_c , b_s ) ; QRk0 = ( k - 1 )
* 27 + 1 ; gmoswboekt ( obj -> mrows , obj -> Q , QRk0 , QRk0 + 27 , c_c ,
b_s ) ; } for ( k = idx ; k < i ; k ++ ) { d = obj -> QR [ 27 * k + k ] ; e =
obj -> QR [ ( 27 * k + k ) + 1 ] ; bmlfodpuvl ( & d , & e , & c_c , & b_s ) ;
obj -> QR [ k + 27 * k ] = d ; obj -> QR [ ( k + 27 * k ) + 1 ] = e ; QRk0 =
( k + 1 ) * 28 ; gmoswboektq ( ( obj -> ncols - k ) - 1 , obj -> QR , QRk0 ,
QRk0 + 1 , c_c , b_s ) ; QRk0 = 27 * k + 1 ; gmoswboekt ( obj -> mrows , obj
-> Q , QRk0 , QRk0 + 27 , c_c , b_s ) ; } } } } static int32_T dubp3qoihzu (
int32_T n , real_T A [ 729 ] ) { int32_T info ; int32_T idxA1j ; int32_T
idxAjj ; real_T ssq ; int32_T b_j ; int32_T ix ; real_T c ; int32_T iac ;
int32_T d ; int32_T ia ; int32_T b_ix ; int32_T b_iy ; int32_T b_k ;
boolean_T exitg1 ; info = 0 ; b_j = 0 ; exitg1 = false ; while ( ( ! exitg1 )
&& ( b_j <= n - 1 ) ) { idxA1j = b_j * 27 ; idxAjj = idxA1j + b_j ; ssq = 0.0
; if ( b_j >= 1 ) { b_ix = idxA1j ; b_iy = idxA1j ; for ( b_k = 0 ; b_k < b_j
; b_k ++ ) { ssq += A [ b_ix ] * A [ b_iy ] ; b_ix ++ ; b_iy ++ ; } } ssq = A
[ idxAjj ] - ssq ; if ( ssq > 0.0 ) { ssq = muDoubleScalarSqrt ( ssq ) ; A [
idxAjj ] = ssq ; if ( b_j + 1 < n ) { b_ix = ( n - b_j ) - 2 ; if ( ( b_j !=
0 ) && ( b_ix + 1 != 0 ) ) { b_iy = idxAjj + 27 ; b_k = ( 27 * b_ix + idxA1j
) + 28 ; for ( iac = idxA1j + 28 ; iac <= b_k ; iac += 27 ) { ix = idxA1j ; c
= 0.0 ; d = ( iac + b_j ) - 1 ; for ( ia = iac ; ia <= d ; ia ++ ) { c += A [
ia - 1 ] * A [ ix ] ; ix ++ ; } A [ b_iy ] += - c ; b_iy += 27 ; } } ssq =
1.0 / ssq ; idxA1j = ( 27 * b_ix + idxAjj ) + 28 ; for ( idxAjj += 27 ;
idxAjj + 1 <= idxA1j ; idxAjj += 27 ) { A [ idxAjj ] *= ssq ; } } b_j ++ ; }
else { A [ idxAjj ] = ssq ; info = b_j + 1 ; exitg1 = true ; } } return info
; } static void e2qqkztimz ( int32_T n , const real_T x [ 324 ] , int32_T ix0
, real_T y [ 729 ] , int32_T iy0 ) { int32_T b_k ; for ( b_k = - 1 ; b_k < n
- 1 ; b_k ++ ) { y [ iy0 + b_k ] = x [ ix0 + b_k ] ; } } static void
epbifgh0rpen ( bwxng4ee5f * obj , const real_T A [ 324 ] , int32_T ndims ,
int32_T ldA ) { int32_T b_idx ; obj -> ndims = ndims ; for ( b_idx = 0 ;
b_idx < ndims ; b_idx ++ ) { e2qqkztimz ( ndims , A , ldA * b_idx + 1 , obj
-> FMat , 27 * b_idx + 1 ) ; } obj -> info = dubp3qoihzu ( ndims , obj ->
FMat ) ; } static void jli2jmu4kd ( int32_T m , int32_T n , int32_T k , const
real_T A [ 324 ] , int32_T lda , const real_T B_m [ 729 ] , int32_T ib0 ,
real_T C [ 729 ] ) { int32_T br ; int32_T ar ; int32_T ia ; int32_T b_cr ;
int32_T c ; int32_T ib ; int32_T d ; int32_T b_ic ; int32_T b_c ; if ( ( m !=
0 ) && ( n != 0 ) ) { b_c = ( n - 1 ) * 27 ; for ( br = 0 ; br <= b_c ; br +=
27 ) { b_cr = br + m ; for ( ar = br ; ar < b_cr ; ar ++ ) { C [ ar ] = 0.0 ;
} } br = ib0 ; for ( b_cr = 0 ; b_cr <= b_c ; b_cr += 27 ) { ar = - 1 ; c =
br + k ; for ( ib = br ; ib < c ; ib ++ ) { ia = ar ; d = b_cr + m ; for (
b_ic = b_cr ; b_ic < d ; b_ic ++ ) { ia ++ ; C [ b_ic ] += B_m [ ib - 1 ] * A
[ ia ] ; } ar += lda ; } br += 27 ; } } } static void jbxsunh5tw ( int32_T m
, int32_T n , int32_T k , const real_T A [ 729 ] , int32_T ia0 , const real_T
B_c [ 729 ] , real_T C [ 729 ] ) { int32_T br ; int32_T ar ; real_T temp ;
int32_T b_cr ; int32_T c ; int32_T b_ic ; int32_T w ; int32_T b_c ; if ( ( m
!= 0 ) && ( n != 0 ) ) { b_c = ( n - 1 ) * 27 ; for ( br = 0 ; br <= b_c ; br
+= 27 ) { b_cr = br + m ; for ( ar = br ; ar < b_cr ; ar ++ ) { C [ ar ] =
0.0 ; } } br = - 1 ; for ( b_cr = 0 ; b_cr <= b_c ; b_cr += 27 ) { ar = ia0 ;
c = b_cr + m ; for ( b_ic = b_cr ; b_ic < c ; b_ic ++ ) { temp = 0.0 ; for (
w = 1 ; w - 1 < k ; w ++ ) { temp += A [ ( w + ar ) - 2 ] * B_c [ w + br ] ;
} C [ b_ic ] += temp ; ar += 27 ; } br += 27 ; } } } static void gkc2xbh5rpx
( real_T beta , const real_T H [ 324 ] , int32_T nVarOrig , bwxng4ee5f *
cholmanager , const ev3ltaqeco * qrmanager , guj4mpcfgf * memspace ) {
int32_T mNull ; int32_T nullStart ; int32_T b_idx_col ; int32_T idx_row ;
mNull = qrmanager -> mrows - qrmanager -> ncols ; nullStart = 27 * qrmanager
-> ncols + 1 ; jli2jmu4kd ( nVarOrig , mNull , nVarOrig , H , nVarOrig ,
qrmanager -> Q , nullStart , memspace -> workspace_double ) ; for ( b_idx_col
= 0 ; b_idx_col < mNull ; b_idx_col ++ ) { for ( idx_row = nVarOrig ; idx_row
< qrmanager -> mrows ; idx_row ++ ) { memspace -> workspace_double [ idx_row
+ 27 * b_idx_col ] = qrmanager -> Q [ ( b_idx_col + qrmanager -> ncols ) * 27
+ idx_row ] * beta ; } } jbxsunh5tw ( mNull , mNull , qrmanager -> mrows ,
qrmanager -> Q , nullStart , memspace -> workspace_double , cholmanager ->
FMat ) ; } static void b5okzx3i0uv ( const real_T H [ 324 ] , bwxng4ee5f *
cholmanager , const ev3ltaqeco * qrmanager , guj4mpcfgf * memspace ) {
int32_T mNull ; int32_T nullStart ; mNull = qrmanager -> mrows - qrmanager ->
ncols ; nullStart = 27 * qrmanager -> ncols + 1 ; jli2jmu4kd ( qrmanager ->
mrows , mNull , qrmanager -> mrows , H , qrmanager -> mrows , qrmanager -> Q
, nullStart , memspace -> workspace_double ) ; jbxsunh5tw ( mNull , mNull ,
qrmanager -> mrows , qrmanager -> Q , nullStart , memspace ->
workspace_double , cholmanager -> FMat ) ; } static void pdvqihnymvea ( const
bwxng4ee5f * obj , real_T rhs [ 27 ] ) { real_T temp ; int32_T b_j ; int32_T
jjA ; int32_T ix ; int32_T c ; if ( obj -> ndims != 0 ) { for ( b_j = 0 ; b_j
< obj -> ndims ; b_j ++ ) { c = b_j * 27 ; temp = rhs [ b_j ] ; for ( ix = 0
; ix < b_j ; ix ++ ) { temp -= obj -> FMat [ c + ix ] * rhs [ ix ] ; } rhs [
b_j ] = temp / obj -> FMat [ c + b_j ] ; } for ( b_j = obj -> ndims - 1 ; b_j
+ 1 > 0 ; b_j -- ) { jjA = b_j * 27 + b_j ; rhs [ b_j ] /= obj -> FMat [ jjA
] ; for ( c = 1 ; c - 1 < b_j ; c ++ ) { ix = b_j - c ; rhs [ ix ] -= obj ->
FMat [ jjA - c ] * rhs [ b_j ] ; } } } } static void dh11bh5myeop ( int32_T n
, real_T a , real_T x [ 27 ] , int32_T ix0 ) { int32_T b ; int32_T k ; b = (
ix0 + n ) - 1 ; for ( k = ix0 ; k <= b ; k ++ ) { x [ k - 1 ] *= a ; } }
static void epbifgh0rpeni ( bwxng4ee5f * obj , int32_T ndims ) { obj -> ndims
= ndims ; obj -> info = dubp3qoihzu ( ndims , obj -> FMat ) ; } static void
oqovnyx4bp ( int32_T m , int32_T n , const real_T A [ 729 ] , int32_T ia0 ,
const real_T x [ 729 ] , real_T y [ 27 ] ) { int32_T iy ; int32_T ix ;
int32_T b ; int32_T iac ; int32_T c ; int32_T ia ; if ( m != 0 ) { for ( ix =
0 ; ix < m ; ix ++ ) { y [ ix ] = 0.0 ; } ix = 0 ; b = ( n - 1 ) * 27 + ia0 ;
for ( iac = ia0 ; iac <= b ; iac += 27 ) { iy = 0 ; c = ( iac + m ) - 1 ; for
( ia = iac ; ia <= c ; ia ++ ) { y [ iy ] += A [ ia - 1 ] * x [ ix ] ; iy ++
; } ix ++ ; } } } static void iwlgfn3yin ( int32_T m , int32_T n , const
real_T A [ 729 ] , int32_T ia0 , const real_T x [ 27 ] , real_T y [ 729 ] ) {
int32_T ix ; real_T c ; int32_T b_iy ; int32_T b ; int32_T iac ; int32_T d ;
int32_T ia ; if ( m != 0 ) { for ( b_iy = 0 ; b_iy < n ; b_iy ++ ) { y [ b_iy
] = 0.0 ; } b_iy = 0 ; b = ( n - 1 ) * 27 + ia0 ; for ( iac = ia0 ; iac <= b
; iac += 27 ) { ix = 0 ; c = 0.0 ; d = ( iac + m ) - 1 ; for ( ia = iac ; ia
<= d ; ia ++ ) { c += A [ ia - 1 ] * x [ ix ] ; ix ++ ; } y [ b_iy ] += - c ;
b_iy ++ ; } } } static void pdvqihnymveaz ( const bwxng4ee5f * obj , real_T
rhs [ 729 ] ) { real_T temp ; int32_T b_j ; int32_T b_i ; int32_T c ; for (
b_j = 0 ; b_j < obj -> ndims ; b_j ++ ) { c = b_j * 27 ; temp = rhs [ b_j ] ;
for ( b_i = 0 ; b_i < b_j ; b_i ++ ) { temp -= obj -> FMat [ c + b_i ] * rhs
[ b_i ] ; } rhs [ b_j ] = temp / obj -> FMat [ c + b_j ] ; } bvondj0iigg (
obj -> ndims , obj -> FMat , rhs ) ; } static void mf4pifqcejq ( const real_T
H [ 324 ] , aaxpzhoxuz * solution , guj4mpcfgf * memspace , const ev3ltaqeco
* qrmanager , bwxng4ee5f * cholmanager , const ecn2fyspui * objective ,
k0zpd1rkeh * localB ) { int32_T nVar ; int32_T mNull ; int32_T nullStartIdx ;
int32_T d_idx ; nVar = qrmanager -> mrows - 1 ; mNull = qrmanager -> mrows -
qrmanager -> ncols ; if ( mNull <= 0 ) { for ( mNull = 0 ; mNull <= nVar ;
mNull ++ ) { solution -> searchDir [ mNull ] = 0.0 ; } } else { for (
nullStartIdx = 0 ; nullStartIdx <= nVar ; nullStartIdx ++ ) { solution ->
searchDir [ nullStartIdx ] = - objective -> grad [ nullStartIdx ] ; } if (
qrmanager -> ncols <= 0 ) { switch ( objective -> objtype ) { case 5 : break
; case 3 : epbifgh0rpen ( cholmanager , H , qrmanager -> mrows , qrmanager ->
mrows ) ; if ( cholmanager -> info != 0 ) { solution -> state = - 6 ; } else
{ pdvqihnymvea ( cholmanager , solution -> searchDir ) ; } break ; case 4 :
epbifgh0rpen ( cholmanager , H , objective -> nvar , objective -> nvar ) ; if
( cholmanager -> info != 0 ) { solution -> state = - 6 ; } else {
pdvqihnymvea ( cholmanager , solution -> searchDir ) ; dh11bh5myeop (
qrmanager -> mrows - objective -> nvar , 1.0 / objective -> beta , solution
-> searchDir , objective -> nvar + 1 ) ; } break ; } } else { nullStartIdx =
27 * qrmanager -> ncols + 1 ; if ( objective -> objtype == 5 ) { for ( d_idx
= 0 ; d_idx < mNull ; d_idx ++ ) { memspace -> workspace_double [ d_idx ] = -
qrmanager -> Q [ ( qrmanager -> ncols + d_idx ) * 27 + nVar ] ; } oqovnyx4bp
( qrmanager -> mrows , mNull , qrmanager -> Q , nullStartIdx , memspace ->
workspace_double , solution -> searchDir ) ; } else { if ( objective ->
objtype == 3 ) { b5okzx3i0uv ( H , cholmanager , qrmanager , memspace ) ; }
else { gkc2xbh5rpx ( objective -> beta , H , objective -> nvar , cholmanager
, qrmanager , memspace ) ; } epbifgh0rpeni ( cholmanager , mNull ) ; if (
cholmanager -> info != 0 ) { solution -> state = - 6 ; } else { iwlgfn3yin (
qrmanager -> mrows , mNull , qrmanager -> Q , nullStartIdx , objective ->
grad , memspace -> workspace_double ) ; memcpy ( & localB -> c [ 0 ] , &
memspace -> workspace_double [ 0 ] , 729U * sizeof ( real_T ) ) ;
pdvqihnymveaz ( cholmanager , localB -> c ) ; memcpy ( & memspace ->
workspace_double [ 0 ] , & localB -> c [ 0 ] , 729U * sizeof ( real_T ) ) ;
oqovnyx4bp ( qrmanager -> mrows , mNull , qrmanager -> Q , nullStartIdx ,
localB -> c , solution -> searchDir ) ; } } } } } static real_T i5uu0zdww5x01
( int32_T n , const real_T x [ 27 ] ) { real_T y ; real_T scale ; real_T
absxk ; real_T t ; int32_T k ; y = 0.0 ; if ( n >= 1 ) { if ( n == 1 ) { y =
muDoubleScalarAbs ( x [ 0 ] ) ; } else { scale = 3.3121686421112381E-170 ;
for ( k = 0 ; k < n ; k ++ ) { absxk = muDoubleScalarAbs ( x [ k ] ) ; if (
absxk > scale ) { t = scale / absxk ; y = y * t * t + 1.0 ; scale = absxk ; }
else { t = absxk / scale ; y += t * t ; } } y = scale * muDoubleScalarSqrt (
y ) ; } } return y ; } static void c4iphnhfy4g ( const real_T solution_xstar
[ 27 ] , const real_T solution_searchDir [ 27 ] , int32_T workingset_nVar ,
const real_T workingset_lb [ 27 ] , const int32_T workingset_indexLB [ 27 ] ,
const int32_T workingset_sizes [ 5 ] , const boolean_T
workingset_isActiveConstr [ 13 ] , const int32_T workingset_nWConstr [ 5 ] ,
boolean_T isPhaseOne , real_T * alpha , boolean_T * newBlocking , int32_T *
constrType , int32_T * constrIdx ) { real_T denomTol ; real_T
phaseOneCorrectionX ; real_T phaseOneCorrectionP ; real_T pk_corrected ;
real_T ratio ; int32_T b_idx ; * alpha = 1.0E+30 ; * newBlocking = false ; *
constrType = 0 ; * constrIdx = 0 ; denomTol = 2.2204460492503131E-13 *
i5uu0zdww5x01 ( workingset_nVar , solution_searchDir ) ; if (
workingset_nWConstr [ 3 ] < workingset_sizes [ 3 ] ) { phaseOneCorrectionX =
solution_xstar [ workingset_nVar - 1 ] * ( real_T ) isPhaseOne ;
phaseOneCorrectionP = solution_searchDir [ workingset_nVar - 1 ] * ( real_T )
isPhaseOne ; for ( b_idx = 0 ; b_idx <= workingset_sizes [ 3 ] - 2 ; b_idx ++
) { pk_corrected = - solution_searchDir [ workingset_indexLB [ b_idx ] - 1 ]
- phaseOneCorrectionP ; if ( ( pk_corrected > denomTol ) && ( !
workingset_isActiveConstr [ b_idx + 4 ] ) ) { ratio = ( - solution_xstar [
workingset_indexLB [ b_idx ] - 1 ] - workingset_lb [ workingset_indexLB [
b_idx ] - 1 ] ) - phaseOneCorrectionX ; ratio = muDoubleScalarMin (
muDoubleScalarAbs ( ratio ) , 1.0E-6 - ratio ) / pk_corrected ; if ( ratio <
* alpha ) { * alpha = ratio ; * constrType = 4 ; * constrIdx = b_idx + 1 ; *
newBlocking = true ; } } } if ( ( - solution_searchDir [ workingset_indexLB [
workingset_sizes [ 3 ] - 1 ] - 1 ] > denomTol ) && ( !
workingset_isActiveConstr [ workingset_sizes [ 3 ] + 3 ] ) ) { ratio = -
solution_xstar [ workingset_indexLB [ workingset_sizes [ 3 ] - 1 ] - 1 ] -
workingset_lb [ workingset_indexLB [ workingset_sizes [ 3 ] - 1 ] - 1 ] ;
ratio = muDoubleScalarMin ( muDoubleScalarAbs ( ratio ) , 1.0E-6 - ratio ) /
- solution_searchDir [ workingset_indexLB [ workingset_sizes [ 3 ] - 1 ] - 1
] ; if ( ratio < * alpha ) { * alpha = ratio ; * constrType = 4 ; * constrIdx
= workingset_sizes [ 3 ] ; * newBlocking = true ; } } } if ( ! isPhaseOne ) {
* newBlocking = ( ( ( ! * newBlocking ) || ( ! ( * alpha > 1.0 ) ) ) && ( *
newBlocking ) ) ; * alpha = muDoubleScalarMin ( * alpha , 1.0 ) ; } } static
void ip4jnzjwt1c ( real_T workspace [ 729 ] , aaxpzhoxuz * solution , const
ecn2fyspui * objective , const ev3ltaqeco * qrmanager ) { real_T tol ;
boolean_T nonDegenerate ; int32_T c_idx ; boolean_T guard1 = false ; if (
qrmanager -> ncols > 0 ) { tol = 100.0 * ( real_T ) qrmanager -> mrows *
2.2204460492503131E-16 ; nonDegenerate = ( ( qrmanager -> mrows > 0 ) && (
qrmanager -> ncols > 0 ) ) ; if ( nonDegenerate ) { c_idx = qrmanager ->
ncols ; guard1 = false ; if ( qrmanager -> mrows < qrmanager -> ncols ) {
while ( ( c_idx > qrmanager -> mrows ) && ( muDoubleScalarAbs ( qrmanager ->
QR [ ( ( c_idx - 1 ) * 27 + qrmanager -> mrows ) - 1 ] ) >= tol ) ) { c_idx
-- ; } nonDegenerate = ( c_idx == qrmanager -> mrows ) ; if ( ! nonDegenerate
) { } else { guard1 = true ; } } else { guard1 = true ; } if ( guard1 ) {
while ( ( c_idx >= 1 ) && ( muDoubleScalarAbs ( qrmanager -> QR [ ( ( c_idx -
1 ) * 27 + c_idx ) - 1 ] ) >= tol ) ) { c_idx -- ; } nonDegenerate = ( c_idx
== 0 ) ; } } if ( ! nonDegenerate ) { solution -> state = - 7 ; } else {
ei532vpsif ( qrmanager -> mrows , qrmanager -> ncols , qrmanager -> Q ,
objective -> grad , workspace ) ; bvondj0iigg ( qrmanager -> ncols ,
qrmanager -> QR , workspace ) ; for ( c_idx = 0 ; c_idx < qrmanager -> ncols
; c_idx ++ ) { solution -> lambda [ c_idx ] = - workspace [ c_idx ] ; } } } }
static void kghpdwcp3am ( aaxpzhoxuz * solution , const ecn2fyspui *
objective ) { if ( objective -> objtype == 5 ) { if ( i5uu0zdww5x01 (
objective -> nvar , solution -> searchDir ) > 100.0 * ( real_T ) objective ->
nvar * 1.4901161193847656E-8 ) { solution -> state = 3 ; } else { solution ->
state = 4 ; } } } static int32_T g3uxyaaiyqy ( const real_T solution_lambda [
13 ] , int32_T workingset_nActiveConstr , const int32_T workingset_nWConstr [
5 ] ) { int32_T idxMinLambda ; real_T minLambda ; int32_T idx ; idxMinLambda
= 0 ; minLambda = 0.0 ; for ( idx = workingset_nWConstr [ 0 ] +
workingset_nWConstr [ 1 ] ; idx < workingset_nActiveConstr ; idx ++ ) { if (
solution_lambda [ idx ] < minLambda ) { minLambda = solution_lambda [ idx ] ;
idxMinLambda = idx + 1 ; } } return idxMinLambda ; } static void pvj1vfm0bgl
( nuprfhnilo * obj , int32_T TYPE , int32_T idx_local ) { int32_T idx_global
; int32_T idx_bnd_local ; int32_T idx ; obj -> nWConstr [ TYPE - 1 ] ++ ; obj
-> isActiveConstr [ ( obj -> isActiveIdx [ TYPE - 1 ] + idx_local ) - 2 ] =
true ; obj -> nActiveConstr ++ ; obj -> Wid [ obj -> nActiveConstr - 1 ] =
TYPE ; obj -> Wlocalidx [ obj -> nActiveConstr - 1 ] = idx_local ; idx_global
= obj -> nActiveConstr - 1 ; if ( TYPE == 5 ) { idx_bnd_local = 0 ; obj ->
bwset [ obj -> nActiveConstr - 1 ] = obj -> ub [ - 1 ] ; } else {
idx_bnd_local = obj -> indexLB [ idx_local - 1 ] ; obj -> bwset [ obj ->
nActiveConstr - 1 ] = obj -> lb [ obj -> indexLB [ idx_local - 1 ] - 1 ] ; }
for ( idx = 0 ; idx <= idx_bnd_local - 2 ; idx ++ ) { obj -> ATwset [ idx +
27 * idx_global ] = 0.0 ; } obj -> ATwset [ ( idx_bnd_local + 27 * ( obj ->
nActiveConstr - 1 ) ) - 1 ] = ( real_T ) ( TYPE == 5 ) * 2.0 - 1.0 ; while (
idx_bnd_local + 1 <= obj -> nVar ) { obj -> ATwset [ idx_bnd_local + 27 *
idx_global ] = 0.0 ; idx_bnd_local ++ ; } switch ( obj -> probType ) { case 3
: case 2 : break ; default : obj -> ATwset [ ( obj -> nVar + 27 * ( obj ->
nActiveConstr - 1 ) ) - 1 ] = - 1.0 ; break ; } } static void o0lbuz5j1to (
nuprfhnilo * obj , int32_T idx_local ) { obj -> nWConstr [ 2 ] ++ ; obj ->
isActiveConstr [ ( obj -> isActiveIdx [ 2 ] + idx_local ) - 2 ] = true ; obj
-> nActiveConstr ++ ; obj -> Wid [ obj -> nActiveConstr - 1 ] = 3 ; obj ->
Wlocalidx [ obj -> nActiveConstr - 1 ] = idx_local ; } static void
h4s4ua3bejuz ( int32_T n , real_T a , const real_T x [ 27 ] , real_T y [ 27 ]
) { int32_T k ; if ( ( n >= 1 ) && ( ! ( a == 0.0 ) ) ) { for ( k = 0 ; k < n
; k ++ ) { y [ k ] += a * x [ k ] ; } } } static void pc5idulzrak ( int32_T *
activeSetChangeID , const real_T f [ 27 ] , aaxpzhoxuz * solution ,
guj4mpcfgf * memspace , const ecn2fyspui * objective , nuprfhnilo *
workingset , ev3ltaqeco * qrmanager , real_T options_ObjectiveLimit , int32_T
runTimeOptions_MaxIterations , boolean_T updateFval , k0zpd1rkeh * localB ) {
real_T b ; real_T d [ 27 ] ; boolean_T nonDegenerateWset ; real_T
constrViolation_new ; int32_T b_idx ; solution -> iterations ++ ; if ( (
solution -> iterations >= runTimeOptions_MaxIterations ) && ( ( solution ->
state != 1 ) || ( objective -> objtype == 5 ) ) ) { solution -> state = 0 ; }
if ( p1n0fcaquz ( solution -> iterations ) == 0 ) { b = btjgrinqe0ptpf (
workingset , solution -> xstar ) ; solution -> maxConstr = b ; if ( b >
1.0E-6 ) { dya4t2wzfj ( objective -> nvar , solution -> xstar , solution ->
searchDir ) ; memcpy ( & d [ 0 ] , & solution -> searchDir [ 0 ] , 27U *
sizeof ( real_T ) ) ; nonDegenerateWset = fetubx0squj ( memspace ->
workspace_double , d , workingset , qrmanager , localB ) ; memcpy ( &
solution -> searchDir [ 0 ] , & d [ 0 ] , 27U * sizeof ( real_T ) ) ; if ( (
! nonDegenerateWset ) && ( solution -> state != 0 ) ) { solution -> state = -
2 ; } * activeSetChangeID = 0 ; constrViolation_new = btjgrinqe0ptpf (
workingset , d ) ; if ( constrViolation_new < b ) { for ( b_idx = 0 ; b_idx <
objective -> nvar ; b_idx ++ ) { solution -> xstar [ b_idx ] = d [ b_idx ] ;
} solution -> maxConstr = constrViolation_new ; } } } if ( (
options_ObjectiveLimit > ( rtMinusInf ) ) && updateFval ) { b = neflgzisgif (
objective , memspace -> workspace_double , f , solution -> xstar ) ; solution
-> fstar = b ; if ( ( b < options_ObjectiveLimit ) && ( ( solution -> state
!= 0 ) || ( objective -> objtype != 5 ) ) ) { solution -> state = 2 ; } } }
static void h2zqqbaphdz ( const real_T H [ 324 ] , const real_T f [ 27 ] ,
aaxpzhoxuz * solution , guj4mpcfgf * memspace , nuprfhnilo * workingset ,
ev3ltaqeco * qrmanager , bwxng4ee5f * cholmanager , ecn2fyspui * objective ,
real_T options_StepTolerance , real_T options_ObjectiveLimit , int32_T
runTimeOptions_MaxIterations , k0zpd1rkeh * localB ) { boolean_T
subProblemChanged ; boolean_T updateFval ; int32_T activeSetChangeID ;
int32_T nVar ; int32_T globalActiveConstrIdx ; real_T normDelta ; int32_T
idxMinLambda ; int32_T TYPE ; int32_T idx_local ; int32_T exitg1 ; boolean_T
guard1 = false ; subProblemChanged = true ; updateFval = true ;
activeSetChangeID = 0 ; TYPE = objective -> objtype ; nVar = workingset ->
nVar ; globalActiveConstrIdx = 0 ; oqrt5rwtljp ( objective , H , f , solution
-> xstar ) ; solution -> fstar = neflgzisgif ( objective , memspace ->
workspace_double , f , solution -> xstar ) ; if ( solution -> iterations <
runTimeOptions_MaxIterations ) { solution -> state = - 5 ; } else { solution
-> state = 0 ; } gii00qdwdf ( 13 , solution -> lambda ) ; do { exitg1 = 0 ;
if ( solution -> state == - 5 ) { guard1 = false ; if ( subProblemChanged ) {
switch ( activeSetChangeID ) { case 1 : lzz4urlwyck ( qrmanager , workingset
-> ATwset , 27 * ( workingset -> nActiveConstr - 1 ) + 1 ) ; break ; case - 1
: jbdwtzuxva5 ( qrmanager , globalActiveConstrIdx ) ; break ; default :
dtrv2kriti4dc ( qrmanager , workingset -> ATwset , nVar , workingset ->
nActiveConstr ) ; n2v2qif1yvp ( qrmanager , qrmanager -> mrows ) ; break ; }
mf4pifqcejq ( H , solution , memspace , qrmanager , cholmanager , objective ,
localB ) ; if ( solution -> state != - 5 ) { exitg1 = 1 ; } else { normDelta
= i5uu0zdww5x01 ( nVar , solution -> searchDir ) ; guard1 = true ; } } else {
fedqp1cplx ( nVar , solution -> searchDir ) ; normDelta = 0.0 ; guard1 = true
; } if ( guard1 ) { if ( ( ! subProblemChanged ) || ( normDelta <
options_StepTolerance ) || ( workingset -> nActiveConstr >= nVar ) ) {
ip4jnzjwt1c ( memspace -> workspace_double , solution , objective , qrmanager
) ; if ( solution -> state != - 7 ) { idxMinLambda = g3uxyaaiyqy ( solution
-> lambda , workingset -> nActiveConstr , workingset -> nWConstr ) ; if (
idxMinLambda == 0 ) { solution -> state = 1 ; } else { activeSetChangeID = -
1 ; globalActiveConstrIdx = idxMinLambda ; subProblemChanged = true ;
hc3wqesyj2i ( workingset , idxMinLambda ) ; solution -> lambda [ idxMinLambda
- 1 ] = 0.0 ; } } else { idxMinLambda = workingset -> nActiveConstr ;
activeSetChangeID = 0 ; globalActiveConstrIdx = workingset -> nActiveConstr ;
subProblemChanged = true ; hc3wqesyj2i ( workingset , workingset ->
nActiveConstr ) ; solution -> lambda [ idxMinLambda - 1 ] = 0.0 ; }
updateFval = false ; } else { c4iphnhfy4g ( solution -> xstar , solution ->
searchDir , workingset -> nVar , workingset -> lb , workingset -> indexLB ,
workingset -> sizes , workingset -> isActiveConstr , workingset -> nWConstr ,
TYPE == 5 , & normDelta , & updateFval , & idxMinLambda , & idx_local ) ; if
( updateFval ) { switch ( idxMinLambda ) { case 3 : o0lbuz5j1to ( workingset
, idx_local ) ; break ; case 4 : pvj1vfm0bgl ( workingset , 4 , idx_local ) ;
break ; default : pvj1vfm0bgl ( workingset , 5 , idx_local ) ; break ; }
activeSetChangeID = 1 ; } else { kghpdwcp3am ( solution , objective ) ;
subProblemChanged = false ; if ( workingset -> nActiveConstr == 0 ) {
solution -> state = 1 ; } } h4s4ua3bejuz ( nVar , normDelta , solution ->
searchDir , solution -> xstar ) ; oqrt5rwtljp ( objective , H , f , solution
-> xstar ) ; updateFval = true ; } pc5idulzrak ( & activeSetChangeID , f ,
solution , memspace , objective , workingset , qrmanager ,
options_ObjectiveLimit , runTimeOptions_MaxIterations , updateFval , localB )
; } } else { if ( ! updateFval ) { solution -> fstar = neflgzisgif (
objective , memspace -> workspace_double , f , solution -> xstar ) ; } exitg1
= 1 ; } } while ( exitg1 == 0 ) ; } static void cya242k2prj ( ecn2fyspui *
obj ) { obj -> objtype = obj -> prev_objtype ; obj -> nvar = obj -> prev_nvar
; obj -> hasLinear = obj -> prev_hasLinear ; } static void cw0wmlqckke (
const real_T H [ 324 ] , const real_T f [ 27 ] , aaxpzhoxuz * solution ,
guj4mpcfgf * memspace , nuprfhnilo * workingset , ev3ltaqeco * qrmanager ,
bwxng4ee5f * cholmanager , ecn2fyspui * objective , e2ucunpqcp * options ,
const e2ucunpqcp * runTimeOptions , k0zpd1rkeh * localB ) { int32_T
PROBTYPE_ORIG ; int32_T nVar ; int32_T nVarP1 ; int32_T PHASEONE ; boolean_T
exitg1 ; PROBTYPE_ORIG = workingset -> probType ; nVar = workingset -> nVar ;
nVarP1 = workingset -> nVar ; solution -> xstar [ workingset -> nVar ] =
solution -> maxConstr + 1.0 ; if ( workingset -> probType == 3 ) { PHASEONE =
1 ; } else { PHASEONE = 4 ; } gptgkafsbem ( workingset ) ; eusryzwbaaa (
workingset , PHASEONE ) ; keagmo2a3hl ( objective , nVarP1 + 1 ) ; options ->
ObjectiveLimit = 1.0E-6 ; options -> StepTolerance = 1.4901161193847657E-10 ;
solution -> fstar = ftrayw10nos ( objective , memspace -> workspace_double ,
H , f , solution -> xstar ) ; solution -> state = 5 ; h2zqqbaphdz ( H , f ,
solution , memspace , workingset , qrmanager , cholmanager , objective ,
options -> StepTolerance , options -> ObjectiveLimit , runTimeOptions ->
MaxIterations , localB ) ; if ( workingset -> isActiveConstr [ workingset ->
sizes [ 3 ] + 3 ] ) { PHASEONE = 5 ; exitg1 = false ; while ( ( ! exitg1 ) &&
( PHASEONE <= workingset -> nActiveConstr ) ) { if ( ( workingset -> Wid [
PHASEONE - 1 ] == 4 ) && ( workingset -> Wlocalidx [ PHASEONE - 1 ] ==
workingset -> sizes [ 3 ] ) ) { hc3wqesyj2i ( workingset , PHASEONE ) ;
exitg1 = true ; } else { PHASEONE ++ ; } } } PHASEONE = workingset ->
nActiveConstr ; while ( ( PHASEONE > 4 ) && ( PHASEONE > nVar ) ) {
hc3wqesyj2i ( workingset , PHASEONE ) ; PHASEONE -- ; } solution -> maxConstr
= solution -> xstar [ nVarP1 ] ; eusryzwbaaa ( workingset , PROBTYPE_ORIG ) ;
cya242k2prj ( objective ) ; options -> ObjectiveLimit = - 1.0E+20 ; options
-> StepTolerance = 1.0E-6 ; } static void g01zi3nkf0c0m ( const real_T H [
324 ] , const real_T f [ 27 ] , aaxpzhoxuz * solution , guj4mpcfgf * memspace
, nuprfhnilo * workingset , ev3ltaqeco * qrmanager , bwxng4ee5f * cholmanager
, ecn2fyspui * objective , e2ucunpqcp * options , e2ucunpqcp * runTimeOptions
, k0zpd1rkeh * localB ) { int32_T nVar ; real_T b ; aaxpzhoxuz b_solution ;
solution -> iterations = 0 ; runTimeOptions -> RemainFeasible = true ; nVar =
workingset -> nVar ; gmkk0qafbsm ( solution , workingset -> lb , workingset
-> indexLB , workingset -> sizes , workingset -> isActiveConstr ) ;
g1pwp1vmykx ( solution , memspace , workingset , qrmanager , localB ) ; if (
solution -> state >= 0 ) { solution -> iterations = 0 ; b = btjgrinqe0ptpf (
workingset , solution -> xstar ) ; solution -> maxConstr = b ; if ( b >
1.0E-6 ) { cw0wmlqckke ( H , f , solution , memspace , workingset , qrmanager
, cholmanager , objective , options , runTimeOptions , localB ) ; if (
solution -> state == 0 ) { } else { b = btjgrinqe0ptpf ( workingset ,
solution -> xstar ) ; solution -> maxConstr = b ; if ( b > 1.0E-6 ) {
gii00qdwdf ( 13 , solution -> lambda ) ; solution -> fstar = ftrayw10nos (
objective , memspace -> workspace_double , H , f , solution -> xstar ) ;
solution -> state = - 2 ; } else { if ( b > 0.0 ) { dya4t2wzfj ( nVar ,
solution -> xstar , solution -> searchDir ) ; b_solution = * solution ;
g1pwp1vmykx ( & b_solution , memspace , workingset , qrmanager , localB ) ; *
solution = b_solution ; b = btjgrinqe0ptpf ( workingset , b_solution . xstar
) ; if ( b >= b_solution . maxConstr ) { solution -> maxConstr = b ; memcpy (
& solution -> xstar [ 0 ] , & b_solution . xstar [ 0 ] , 27U * sizeof (
real_T ) ) ; dya4t2wzfj ( nVar , b_solution . searchDir , solution -> xstar )
; } } h2zqqbaphdz ( H , f , solution , memspace , workingset , qrmanager ,
cholmanager , objective , options -> StepTolerance , options ->
ObjectiveLimit , runTimeOptions -> MaxIterations , localB ) ; } } } else {
h2zqqbaphdz ( H , f , solution , memspace , workingset , qrmanager ,
cholmanager , objective , options -> StepTolerance , options ->
ObjectiveLimit , runTimeOptions -> MaxIterations , localB ) ; } } } static
void lbs2jnu1szw ( nuprfhnilo * obj , int32_T idx_local ) { int32_T totalEq ;
int32_T iAeq0 ; int32_T iAw0 ; int32_T b_idx ; totalEq = obj -> nWConstr [ 0
] + obj -> nWConstr [ 1 ] ; if ( ( obj -> nActiveConstr == totalEq ) && (
idx_local > obj -> nWConstr [ 1 ] ) ) { obj -> nWConstr [ 1 ] ++ ; obj ->
isActiveConstr [ ( obj -> isActiveIdx [ 1 ] + idx_local ) - 2 ] = true ; obj
-> nActiveConstr ++ ; obj -> Wid [ obj -> nActiveConstr - 1 ] = 2 ; obj ->
Wlocalidx [ obj -> nActiveConstr - 1 ] = idx_local ; iAeq0 = ( idx_local - 1
) * 27 ; iAw0 = ( obj -> nActiveConstr - 1 ) * 27 ; for ( totalEq = 1 ;
totalEq - 1 < obj -> nVar ; totalEq ++ ) { obj -> ATwset [ ( iAw0 + totalEq )
- 1 ] = obj -> Aeq [ ( iAeq0 + totalEq ) - 1 ] ; } obj -> bwset [ obj ->
nActiveConstr - 1 ] = obj -> beq [ idx_local - 1 ] ; } else { obj ->
nActiveConstr ++ ; iAeq0 = obj -> nActiveConstr - 1 ; obj -> Wid [ obj ->
nActiveConstr - 1 ] = obj -> Wid [ totalEq ] ; obj -> Wlocalidx [ iAeq0 ] =
obj -> Wlocalidx [ totalEq ] ; for ( iAw0 = 0 ; iAw0 < obj -> nVar ; iAw0 ++
) { obj -> ATwset [ iAw0 + 27 * iAeq0 ] = obj -> ATwset [ 27 * totalEq + iAw0
] ; } obj -> bwset [ iAeq0 ] = obj -> bwset [ totalEq ] ; obj -> nWConstr [ 1
] ++ ; obj -> isActiveConstr [ idx_local - 1 ] = true ; obj -> Wid [ totalEq
] = 2 ; obj -> Wlocalidx [ totalEq ] = idx_local ; iAeq0 = ( idx_local - 1 )
* 27 ; iAw0 = 27 * totalEq ; for ( b_idx = 1 ; b_idx - 1 < obj -> nVar ;
b_idx ++ ) { obj -> ATwset [ ( iAw0 + b_idx ) - 1 ] = obj -> Aeq [ ( iAeq0 +
b_idx ) - 1 ] ; } obj -> bwset [ totalEq ] = obj -> beq [ idx_local - 1 ] ; }
} static void g44a3wny4je ( nuprfhnilo * WorkingSet , const real_T
TrialState_cEq [ 4 ] ) { WorkingSet -> beq [ 0 ] = - TrialState_cEq [ 0 ] ;
WorkingSet -> bwset [ 0 ] = WorkingSet -> beq [ 0 ] ; WorkingSet -> beq [ 1 ]
= - TrialState_cEq [ 1 ] ; WorkingSet -> bwset [ 1 ] = WorkingSet -> beq [ 1
] ; WorkingSet -> beq [ 2 ] = - TrialState_cEq [ 2 ] ; WorkingSet -> bwset [
2 ] = WorkingSet -> beq [ 2 ] ; WorkingSet -> beq [ 3 ] = - TrialState_cEq [
3 ] ; WorkingSet -> bwset [ 3 ] = WorkingSet -> beq [ 3 ] ; } static
boolean_T h1skejptsj4 ( const real_T Hessian [ 324 ] , const real_T grad [ 27
] , aaxpzhoxuz * TrialState , guj4mpcfgf * memspace , nuprfhnilo * WorkingSet
, ev3ltaqeco * QRManager , bwxng4ee5f * CholManager , ecn2fyspui *
QPObjective , const e2ucunpqcp * qpoptions , k0zpd1rkeh * localB ) {
boolean_T success ; int32_T nVar ; real_T oldDirIdx ; int32_T b_i ;
e2ucunpqcp qpoptions_p ; e2ucunpqcp qpoptions_e ; nVar = WorkingSet -> nVar ;
onjp02j2te ( WorkingSet -> nVar , TrialState -> xstarsqp_old , TrialState ->
xstarsqp ) ; for ( b_i = 0 ; b_i < nVar ; b_i ++ ) { TrialState ->
socDirection [ b_i ] = TrialState -> xstar [ b_i ] ; } j0fmletkso ( 13 ,
TrialState -> lambda , TrialState -> lambda_old ) ; localB -> b_WorkingSet =
* WorkingSet ; b2smkg2r33v ( & localB -> b_WorkingSet , TrialState -> cEq ,
TrialState -> searchDir ) ; enbciu5tww ( WorkingSet -> nVar , TrialState ->
xstarsqp , TrialState -> xstar ) ; qpoptions_p = * qpoptions ; qpoptions_e =
* qpoptions ; g01zi3nkf0c0m ( Hessian , grad , TrialState , memspace , &
localB -> b_WorkingSet , QRManager , CholManager , QPObjective , &
qpoptions_p , & qpoptions_e , localB ) ; * WorkingSet = localB ->
b_WorkingSet ; while ( ( WorkingSet -> mEqRemoved > 0 ) && ( WorkingSet ->
indexEqRemoved [ WorkingSet -> mEqRemoved - 1 ] >= 1 ) ) { lbs2jnu1szw (
WorkingSet , WorkingSet -> indexEqRemoved [ WorkingSet -> mEqRemoved - 1 ] )
; WorkingSet -> mEqRemoved -- ; } for ( b_i = 0 ; b_i < nVar ; b_i ++ ) {
oldDirIdx = TrialState -> socDirection [ b_i ] ; TrialState -> socDirection [
b_i ] = TrialState -> xstar [ b_i ] - TrialState -> socDirection [ b_i ] ;
TrialState -> xstar [ b_i ] = oldDirIdx ; } success = ( i5uu0zdww5x01 ( nVar
, TrialState -> socDirection ) <= 2.0 * i5uu0zdww5x01 ( nVar , TrialState ->
xstar ) ) ; g44a3wny4je ( WorkingSet , TrialState -> cEq ) ; if ( ! success )
{ j0fmletkso ( 13 , TrialState -> lambda_old , TrialState -> lambda ) ; }
else { exp02lfvwax ( TrialState -> lambda , WorkingSet -> nActiveConstr ,
WorkingSet -> sizes , WorkingSet -> isActiveIdx , WorkingSet -> Wid ,
WorkingSet -> Wlocalidx , memspace -> workspace_double ) ; } return success ;
} static void he0bczuci1bd ( kthfgfhdov * obj , real_T fval , const real_T
eq_workspace [ 4 ] , int32_T sqpiter , real_T qpval ) { real_T
penaltyParamTrial ; real_T constrViolationEq ; real_T
linearizedConstrViolPrev ; penaltyParamTrial = obj -> penaltyParam ;
constrViolationEq = ( ( muDoubleScalarAbs ( eq_workspace [ 0 ] ) +
muDoubleScalarAbs ( eq_workspace [ 1 ] ) ) + muDoubleScalarAbs ( eq_workspace
[ 2 ] ) ) + muDoubleScalarAbs ( eq_workspace [ 3 ] ) ;
linearizedConstrViolPrev = obj -> linearizedConstrViol ; obj ->
linearizedConstrViol = 0.0 ; linearizedConstrViolPrev += constrViolationEq ;
if ( ( linearizedConstrViolPrev > 2.2204460492503131E-16 ) && ( qpval > 0.0 )
) { if ( fval == 0.0 ) { penaltyParamTrial = 1.0 ; } else { penaltyParamTrial
= 1.5 ; } penaltyParamTrial = penaltyParamTrial * qpval /
linearizedConstrViolPrev ; } if ( penaltyParamTrial < obj -> penaltyParam ) {
obj -> phi = penaltyParamTrial * constrViolationEq + fval ; if ( (
penaltyParamTrial * obj -> initConstrViolationEq + obj -> initFval ) - obj ->
phi > ( real_T ) obj -> nPenaltyDecreases * obj -> threshold ) { obj ->
nPenaltyDecreases ++ ; if ( ( obj -> nPenaltyDecreases << 1 ) > sqpiter ) {
obj -> threshold *= 10.0 ; } obj -> penaltyParam = muDoubleScalarMax (
penaltyParamTrial , 1.0E-10 ) ; } else { obj -> phi = obj -> penaltyParam *
constrViolationEq + fval ; } } else { obj -> penaltyParam = muDoubleScalarMax
( penaltyParamTrial , 1.0E-10 ) ; obj -> phi = muDoubleScalarMax (
penaltyParamTrial , 1.0E-10 ) * constrViolationEq + fval ; } obj ->
phiPrimePlus = muDoubleScalarMin ( qpval - obj -> penaltyParam *
constrViolationEq , 0.0 ) ; } static void kqwfgy4qbsm ( const real_T Hessian
[ 324 ] , const real_T grad [ 27 ] , aaxpzhoxuz * TrialState , kthfgfhdov *
MeritFunction , guj4mpcfgf * memspace , nuprfhnilo * WorkingSet , ev3ltaqeco
* QRManager , bwxng4ee5f * CholManager , ecn2fyspui * QPObjective , const
e2ucunpqcp * qpoptions , k0zpd1rkeh * localB ) { boolean_T nonlinEqRemoved ;
e2ucunpqcp qpoptions_p ; e2ucunpqcp qpoptions_e ; qpoptions_p = * qpoptions ;
qpoptions_e = * qpoptions ; g01zi3nkf0c0m ( Hessian , grad , TrialState ,
memspace , WorkingSet , QRManager , CholManager , QPObjective , & qpoptions_p
, & qpoptions_e , localB ) ; if ( TrialState -> state > 0 ) { he0bczuci1bd (
MeritFunction , TrialState -> sqpFval , TrialState -> cEq , TrialState ->
sqpIterations , TrialState -> fstar ) ; } exp02lfvwax ( TrialState -> lambda
, WorkingSet -> nActiveConstr , WorkingSet -> sizes , WorkingSet ->
isActiveIdx , WorkingSet -> Wid , WorkingSet -> Wlocalidx , memspace ->
workspace_double ) ; nonlinEqRemoved = ( WorkingSet -> mEqRemoved > 0 ) ;
while ( ( WorkingSet -> mEqRemoved > 0 ) && ( WorkingSet -> indexEqRemoved [
WorkingSet -> mEqRemoved - 1 ] >= 1 ) ) { lbs2jnu1szw ( WorkingSet ,
WorkingSet -> indexEqRemoved [ WorkingSet -> mEqRemoved - 1 ] ) ; WorkingSet
-> mEqRemoved -- ; } if ( nonlinEqRemoved ) { WorkingSet -> Wlocalidx [ 0 ] =
1 ; WorkingSet -> Wlocalidx [ 1 ] = 2 ; WorkingSet -> Wlocalidx [ 2 ] = 3 ;
WorkingSet -> Wlocalidx [ 3 ] = 4 ; } } static void dabs5zh1brw ( ecn2fyspui
* obj , int32_T numQuadVars , real_T beta , real_T rho ) { obj -> hasLinear =
true ; obj -> nvar = numQuadVars ; obj -> objtype = 4 ; obj -> beta = beta ;
obj -> rho = rho ; } static void izkrqq3sufo ( int32_T nVarOrig , nuprfhnilo
* WorkingSet , aaxpzhoxuz * TrialState , guj4mpcfgf * memspace ) { int32_T
mLBOrig ; int32_T ix ; real_T c ; int32_T b ; int32_T ia ; mLBOrig =
WorkingSet -> sizes [ 3 ] - 7 ; memspace -> workspace_double [ 0 ] =
WorkingSet -> beq [ 0 ] ; memspace -> workspace_double [ 1 ] = WorkingSet ->
beq [ 1 ] ; memspace -> workspace_double [ 2 ] = WorkingSet -> beq [ 2 ] ;
memspace -> workspace_double [ 3 ] = WorkingSet -> beq [ 3 ] ; memspace ->
workspace_double [ 0 ] = - memspace -> workspace_double [ 0 ] ; memspace ->
workspace_double [ 1 ] = - memspace -> workspace_double [ 1 ] ; memspace ->
workspace_double [ 2 ] = - memspace -> workspace_double [ 2 ] ; memspace ->
workspace_double [ 3 ] = - memspace -> workspace_double [ 3 ] ; ix = 0 ; c =
0.0 ; for ( ia = 0 ; ia < nVarOrig ; ia ++ ) { c += WorkingSet -> Aeq [ ia ]
* TrialState -> xstar [ ix ] ; ix ++ ; } memspace -> workspace_double [ 0 ]
+= c ; ix = 0 ; c = 0.0 ; b = nVarOrig + 27 ; for ( ia = 27 ; ia < b ; ia ++
) { c += WorkingSet -> Aeq [ ia ] * TrialState -> xstar [ ix ] ; ix ++ ; }
memspace -> workspace_double [ 1 ] += c ; ix = 0 ; c = 0.0 ; b = nVarOrig +
54 ; for ( ia = 54 ; ia < b ; ia ++ ) { c += WorkingSet -> Aeq [ ia ] *
TrialState -> xstar [ ix ] ; ix ++ ; } memspace -> workspace_double [ 2 ] +=
c ; ix = 0 ; c = 0.0 ; b = nVarOrig + 81 ; for ( ia = 81 ; ia < b ; ia ++ ) {
c += WorkingSet -> Aeq [ ia ] * TrialState -> xstar [ ix ] ; ix ++ ; }
memspace -> workspace_double [ 3 ] += c ; if ( memspace -> workspace_double [
0 ] <= 0.0 ) { TrialState -> xstar [ nVarOrig ] = 0.0 ; TrialState -> xstar [
nVarOrig + 4 ] = - memspace -> workspace_double [ 0 ] ; pvj1vfm0bgl (
WorkingSet , 4 , mLBOrig ) ; if ( memspace -> workspace_double [ 0 ] >= -
1.0E-6 ) { pvj1vfm0bgl ( WorkingSet , 4 , mLBOrig + 4 ) ; } } else {
TrialState -> xstar [ nVarOrig ] = memspace -> workspace_double [ 0 ] ;
TrialState -> xstar [ nVarOrig + 4 ] = 0.0 ; pvj1vfm0bgl ( WorkingSet , 4 ,
mLBOrig + 4 ) ; if ( memspace -> workspace_double [ 0 ] <= 1.0E-6 ) {
pvj1vfm0bgl ( WorkingSet , 4 , mLBOrig ) ; } } if ( memspace ->
workspace_double [ 1 ] <= 0.0 ) { TrialState -> xstar [ nVarOrig + 1 ] = 0.0
; TrialState -> xstar [ nVarOrig + 5 ] = - memspace -> workspace_double [ 1 ]
; pvj1vfm0bgl ( WorkingSet , 4 , mLBOrig + 1 ) ; if ( memspace ->
workspace_double [ 1 ] >= - 1.0E-6 ) { pvj1vfm0bgl ( WorkingSet , 4 , mLBOrig
+ 5 ) ; } } else { TrialState -> xstar [ nVarOrig + 1 ] = memspace ->
workspace_double [ 1 ] ; TrialState -> xstar [ nVarOrig + 5 ] = 0.0 ;
pvj1vfm0bgl ( WorkingSet , 4 , mLBOrig + 5 ) ; if ( memspace ->
workspace_double [ 1 ] <= 1.0E-6 ) { pvj1vfm0bgl ( WorkingSet , 4 , mLBOrig +
1 ) ; } } if ( memspace -> workspace_double [ 2 ] <= 0.0 ) { TrialState ->
xstar [ nVarOrig + 2 ] = 0.0 ; TrialState -> xstar [ nVarOrig + 6 ] = -
memspace -> workspace_double [ 2 ] ; pvj1vfm0bgl ( WorkingSet , 4 , mLBOrig +
2 ) ; if ( memspace -> workspace_double [ 2 ] >= - 1.0E-6 ) { pvj1vfm0bgl (
WorkingSet , 4 , mLBOrig + 6 ) ; } } else { TrialState -> xstar [ nVarOrig +
2 ] = memspace -> workspace_double [ 2 ] ; TrialState -> xstar [ nVarOrig + 6
] = 0.0 ; pvj1vfm0bgl ( WorkingSet , 4 , mLBOrig + 6 ) ; if ( memspace ->
workspace_double [ 2 ] <= 1.0E-6 ) { pvj1vfm0bgl ( WorkingSet , 4 , mLBOrig +
2 ) ; } } if ( memspace -> workspace_double [ 3 ] <= 0.0 ) { TrialState ->
xstar [ nVarOrig + 3 ] = 0.0 ; TrialState -> xstar [ nVarOrig + 7 ] = -
memspace -> workspace_double [ 3 ] ; pvj1vfm0bgl ( WorkingSet , 4 , mLBOrig +
3 ) ; if ( memspace -> workspace_double [ 3 ] >= - 1.0E-6 ) { pvj1vfm0bgl (
WorkingSet , 4 , mLBOrig + 7 ) ; } } else { TrialState -> xstar [ nVarOrig +
3 ] = memspace -> workspace_double [ 3 ] ; TrialState -> xstar [ nVarOrig + 7
] = 0.0 ; pvj1vfm0bgl ( WorkingSet , 4 , mLBOrig + 7 ) ; if ( memspace ->
workspace_double [ 3 ] <= 1.0E-6 ) { pvj1vfm0bgl ( WorkingSet , 4 , mLBOrig +
3 ) ; } } } static int32_T fzdnhnbint1 ( guj4mpcfgf * memspace , const
int32_T WorkingSet_sizes [ 5 ] , const boolean_T WorkingSet_isActiveConstr [
13 ] ) { int32_T nActiveLBArtificial ; int32_T idx_local ; int32_T
b_idx_local ; idx_local = WorkingSet_sizes [ 3 ] - 4 ; memspace ->
workspace_int [ 0 ] = WorkingSet_isActiveConstr [ idx_local ] ; memspace ->
workspace_int [ 4 ] = WorkingSet_isActiveConstr [ WorkingSet_sizes [ 3 ] ] ;
nActiveLBArtificial = WorkingSet_isActiveConstr [ idx_local ] +
WorkingSet_isActiveConstr [ WorkingSet_sizes [ 3 ] ] ; idx_local =
WorkingSet_sizes [ 3 ] - 3 ; b_idx_local = WorkingSet_sizes [ 3 ] + 1 ;
memspace -> workspace_int [ 1 ] = WorkingSet_isActiveConstr [ idx_local ] ;
memspace -> workspace_int [ 5 ] = WorkingSet_isActiveConstr [ b_idx_local ] ;
nActiveLBArtificial = ( nActiveLBArtificial + WorkingSet_isActiveConstr [
idx_local ] ) + WorkingSet_isActiveConstr [ b_idx_local ] ; idx_local =
WorkingSet_sizes [ 3 ] - 2 ; b_idx_local = WorkingSet_sizes [ 3 ] + 2 ;
memspace -> workspace_int [ 2 ] = WorkingSet_isActiveConstr [ idx_local ] ;
memspace -> workspace_int [ 6 ] = WorkingSet_isActiveConstr [ b_idx_local ] ;
nActiveLBArtificial = ( nActiveLBArtificial + WorkingSet_isActiveConstr [
idx_local ] ) + WorkingSet_isActiveConstr [ b_idx_local ] ; idx_local =
WorkingSet_sizes [ 3 ] - 1 ; b_idx_local = WorkingSet_sizes [ 3 ] + 3 ;
memspace -> workspace_int [ 3 ] = WorkingSet_isActiveConstr [ idx_local ] ;
memspace -> workspace_int [ 7 ] = WorkingSet_isActiveConstr [ b_idx_local ] ;
return ( nActiveLBArtificial + WorkingSet_isActiveConstr [ idx_local ] ) +
WorkingSet_isActiveConstr [ b_idx_local ] ; } static real_T ctccuctamvs (
int32_T n , const real_T x [ 27 ] , int32_T ix0 ) { real_T y ; int32_T kend ;
int32_T k ; y = 0.0 ; if ( n >= 1 ) { kend = ( ix0 + n ) - 1 ; for ( k = ix0
; k <= kend ; k ++ ) { y += muDoubleScalarAbs ( x [ k - 1 ] ) ; } } return y
; } static real_T h0kgdqgo40o ( int32_T n , const real_T x [ 27 ] , int32_T
ix0 , const real_T y [ 27 ] , int32_T iy0 ) { real_T d ; int32_T ix ; int32_T
iy ; int32_T k ; d = 0.0 ; if ( n >= 1 ) { ix = ix0 ; iy = iy0 ; for ( k = 0
; k < n ; k ++ ) { d += x [ ix - 1 ] * y [ iy - 1 ] ; ix ++ ; iy ++ ; } }
return d ; } static void he0bczuci1bdp ( kthfgfhdov * obj , real_T fval ,
const real_T eq_workspace [ 4 ] , int32_T sqpiter , real_T qpval , const
real_T x [ 27 ] , int32_T iReg0 , int32_T nRegularized ) { real_T
penaltyParamTrial ; real_T constrViolationEq ; real_T
linearizedConstrViolPrev ; real_T y ; int32_T kend ; int32_T k ;
penaltyParamTrial = obj -> penaltyParam ; constrViolationEq = ( (
muDoubleScalarAbs ( eq_workspace [ 0 ] ) + muDoubleScalarAbs ( eq_workspace [
1 ] ) ) + muDoubleScalarAbs ( eq_workspace [ 2 ] ) ) + muDoubleScalarAbs (
eq_workspace [ 3 ] ) ; linearizedConstrViolPrev = obj -> linearizedConstrViol
; y = 0.0 ; if ( nRegularized >= 1 ) { kend = ( iReg0 + nRegularized ) - 1 ;
for ( k = iReg0 ; k <= kend ; k ++ ) { y += muDoubleScalarAbs ( x [ k - 1 ] )
; } } obj -> linearizedConstrViol = y ; linearizedConstrViolPrev = (
constrViolationEq + linearizedConstrViolPrev ) - y ; if ( (
linearizedConstrViolPrev > 2.2204460492503131E-16 ) && ( qpval > 0.0 ) ) { if
( fval == 0.0 ) { penaltyParamTrial = 1.0 ; } else { penaltyParamTrial = 1.5
; } penaltyParamTrial = penaltyParamTrial * qpval / linearizedConstrViolPrev
; } if ( penaltyParamTrial < obj -> penaltyParam ) { obj -> phi =
penaltyParamTrial * constrViolationEq + fval ; if ( ( penaltyParamTrial * obj
-> initConstrViolationEq + obj -> initFval ) - obj -> phi > ( real_T ) obj ->
nPenaltyDecreases * obj -> threshold ) { obj -> nPenaltyDecreases ++ ; if ( (
obj -> nPenaltyDecreases << 1 ) > sqpiter ) { obj -> threshold *= 10.0 ; }
obj -> penaltyParam = muDoubleScalarMax ( penaltyParamTrial , 1.0E-10 ) ; }
else { obj -> phi = obj -> penaltyParam * constrViolationEq + fval ; } } else
{ obj -> penaltyParam = muDoubleScalarMax ( penaltyParamTrial , 1.0E-10 ) ;
obj -> phi = muDoubleScalarMax ( penaltyParamTrial , 1.0E-10 ) *
constrViolationEq + fval ; } obj -> phiPrimePlus = muDoubleScalarMin ( qpval
- obj -> penaltyParam * constrViolationEq , 0.0 ) ; } static void b3d5knwcuvr
( int32_T nActiveLBArtificial , aaxpzhoxuz * TrialState , nuprfhnilo *
WorkingSet ) { int32_T mFiniteLBOrig ; int32_T idx ; real_T tmp ;
mFiniteLBOrig = WorkingSet -> sizes [ 3 ] - 8 ; idx = WorkingSet ->
nActiveConstr ; while ( ( idx > 4 ) && ( nActiveLBArtificial > 0 ) ) { if ( (
WorkingSet -> Wid [ idx - 1 ] == 4 ) && ( WorkingSet -> Wlocalidx [ idx - 1 ]
> mFiniteLBOrig ) ) { tmp = TrialState -> lambda [ WorkingSet ->
nActiveConstr - 1 ] ; TrialState -> lambda [ WorkingSet -> nActiveConstr - 1
] = 0.0 ; TrialState -> lambda [ idx - 1 ] = tmp ; hc3wqesyj2i ( WorkingSet ,
idx ) ; nActiveLBArtificial -- ; } idx -- ; } } static void i2rfqztpndo (
ecn2fyspui * obj , int32_T NumVars ) { obj -> hasLinear = true ; obj -> nvar
= NumVars ; obj -> objtype = 3 ; } static int32_T mfrofh20mfqsge ( int32_T n
, const real_T x [ 13 ] ) { int32_T idxmax ; int32_T ix ; real_T smax ;
int32_T k ; real_T y ; idxmax = 1 ; ix = 0 ; smax = muDoubleScalarAbs ( x [ 0
] ) ; for ( k = 2 ; k <= n ; k ++ ) { ix ++ ; y = muDoubleScalarAbs ( x [ ix
] ) ; if ( y > smax ) { idxmax = k ; smax = y ; } } return idxmax ; } static
void ibyal3ep2ij ( const real_T Hessian [ 324 ] , const real_T grad [ 27 ] ,
aaxpzhoxuz * TrialState , kthfgfhdov * MeritFunction , guj4mpcfgf * memspace
, nuprfhnilo * WorkingSet , ev3ltaqeco * QRManager , bwxng4ee5f * CholManager
, ecn2fyspui * QPObjective , e2ucunpqcp * qpoptions , k0zpd1rkeh * localB ) {
int32_T nVarOrig ; real_T beta ; real_T rho ; int32_T temp ; int32_T
nActiveLBArtificial ; boolean_T isAeqActive ; e2ucunpqcp qpoptions_p ;
e2ucunpqcp qpoptions_e ; nVarOrig = WorkingSet -> nVar ; beta = 0.0 ; for (
temp = 0 ; temp < nVarOrig ; temp ++ ) { beta += Hessian [ 18 * temp + temp ]
; } beta /= ( real_T ) WorkingSet -> nVar ; if ( TrialState -> sqpIterations
<= 1 ) { rho = muDoubleScalarMax ( 1.0 , muDoubleScalarAbs ( grad [
mfrofh20mfqs ( QPObjective -> nvar , grad ) - 1 ] ) ) * 100.0 ; } else { rho
= muDoubleScalarAbs ( TrialState -> lambdasqp [ mfrofh20mfqsge ( WorkingSet
-> mConstr , TrialState -> lambdasqp ) - 1 ] ) ; } dabs5zh1brw ( QPObjective
, WorkingSet -> nVar , beta , rho ) ; eusryzwbaaa ( WorkingSet , 2 ) ;
izkrqq3sufo ( nVarOrig , WorkingSet , TrialState , memspace ) ; temp =
qpoptions -> MaxIterations ; qpoptions -> MaxIterations = ( qpoptions ->
MaxIterations + WorkingSet -> nVar ) - nVarOrig ; qpoptions_p = * qpoptions ;
qpoptions_e = * qpoptions ; g01zi3nkf0c0m ( Hessian , grad , TrialState ,
memspace , WorkingSet , QRManager , CholManager , QPObjective , & qpoptions_p
, & qpoptions_e , localB ) ; qpoptions -> MaxIterations = temp ;
nActiveLBArtificial = fzdnhnbint1 ( memspace , WorkingSet -> sizes ,
WorkingSet -> isActiveConstr ) ; if ( TrialState -> state != - 6 ) {
he0bczuci1bdp ( MeritFunction , TrialState -> sqpFval , TrialState -> cEq ,
TrialState -> sqpIterations , ( TrialState -> fstar - rho * ctccuctamvs ( 26
- nVarOrig , TrialState -> xstar , nVarOrig + 1 ) ) - beta / 2.0 *
h0kgdqgo40o ( 26 - nVarOrig , TrialState -> xstar , nVarOrig + 1 , TrialState
-> xstar , nVarOrig + 1 ) , TrialState -> xstar , nVarOrig + 1 , 26 -
nVarOrig ) ; if ( ( memspace -> workspace_int [ 0 ] != 0 ) && ( memspace ->
workspace_int [ 4 ] != 0 ) ) { isAeqActive = true ; } else { isAeqActive =
false ; } TrialState -> lambda [ 0 ] *= ( real_T ) isAeqActive ; if ( (
memspace -> workspace_int [ 1 ] != 0 ) && ( memspace -> workspace_int [ 5 ]
!= 0 ) ) { isAeqActive = true ; } else { isAeqActive = false ; } TrialState
-> lambda [ 1 ] *= ( real_T ) isAeqActive ; if ( ( memspace -> workspace_int
[ 2 ] != 0 ) && ( memspace -> workspace_int [ 6 ] != 0 ) ) { isAeqActive =
true ; } else { isAeqActive = false ; } TrialState -> lambda [ 2 ] *= (
real_T ) isAeqActive ; if ( ( memspace -> workspace_int [ 3 ] != 0 ) && (
memspace -> workspace_int [ 7 ] != 0 ) ) { isAeqActive = true ; } else {
isAeqActive = false ; } TrialState -> lambda [ 3 ] *= ( real_T ) isAeqActive
; for ( temp = 4 ; temp < WorkingSet -> nActiveConstr ; temp ++ ) { if (
WorkingSet -> Wid [ temp ] == 3 ) { TrialState -> lambda [ temp ] *= ( real_T
) memspace -> workspace_int [ WorkingSet -> Wlocalidx [ temp ] + 7 ] ; } } }
b3d5knwcuvr ( nActiveLBArtificial , TrialState , WorkingSet ) ; i2rfqztpndo (
QPObjective , nVarOrig ) ; eusryzwbaaa ( WorkingSet , 3 ) ; exp02lfvwax (
TrialState -> lambda , WorkingSet -> nActiveConstr , WorkingSet -> sizes ,
WorkingSet -> isActiveIdx , WorkingSet -> Wid , WorkingSet -> Wlocalidx ,
memspace -> workspace_double ) ; } static void moizl4aka3m ( real_T Hessian [
324 ] , const real_T grad [ 27 ] , const real_T searchDir [ 27 ] ) { real_T
nrmGradInf ; real_T nrmDirInf ; int32_T iH0 ; int32_T idx ; int32_T k ;
nrmGradInf = 0.0 ; nrmDirInf = 1.0 ; for ( idx = 0 ; idx < 18 ; idx ++ ) {
nrmGradInf = muDoubleScalarMax ( nrmGradInf , muDoubleScalarAbs ( grad [ idx
] ) ) ; nrmDirInf = muDoubleScalarMax ( nrmDirInf , muDoubleScalarAbs (
searchDir [ idx ] ) ) ; } nrmGradInf = muDoubleScalarMax (
2.2204460492503131E-16 , nrmGradInf / nrmDirInf ) ; for ( idx = 0 ; idx < 18
; idx ++ ) { iH0 = 18 * idx ; for ( k = 0 ; k < idx ; k ++ ) { Hessian [ iH0
+ k ] = 0.0 ; } Hessian [ idx + 18 * idx ] = nrmGradInf ; iH0 += idx ; for (
k = 0 ; k <= 16 - idx ; k ++ ) { Hessian [ ( iH0 + k ) + 1 ] = 0.0 ; } } }
static boolean_T hfcepsnatap ( int32_T * STEP_TYPE , real_T Hessian [ 324 ] ,
aaxpzhoxuz * TrialState , kthfgfhdov * MeritFunction , guj4mpcfgf * memspace
, nuprfhnilo * WorkingSet , ev3ltaqeco * QRManager , bwxng4ee5f * CholManager
, ecn2fyspui * QPObjective , e2ucunpqcp * qpoptions , k0zpd1rkeh * localB ) {
boolean_T stepSuccess ; int32_T nVar ; aaxpzhoxuz b_TrialState ; int32_T
b_idx ; int32_T exitg1 ; boolean_T guard1 = false ; stepSuccess = true ; nVar
= WorkingSet -> nVar ; if ( * STEP_TYPE != 3 ) { enbciu5tww ( WorkingSet ->
nVar , TrialState -> xstarsqp , TrialState -> xstar ) ; } else { dya4t2wzfj (
WorkingSet -> nVar , TrialState -> xstar , TrialState -> searchDir ) ; } do {
exitg1 = 0 ; guard1 = false ; switch ( * STEP_TYPE ) { case 1 : b_TrialState
= * TrialState ; kqwfgy4qbsm ( Hessian , TrialState -> grad , & b_TrialState
, MeritFunction , memspace , WorkingSet , QRManager , CholManager ,
QPObjective , qpoptions , localB ) ; * TrialState = b_TrialState ; if ( (
b_TrialState . state <= 0 ) && ( b_TrialState . state != - 6 ) ) { *
STEP_TYPE = 2 ; } else { memcpy ( & TrialState -> delta_x [ 0 ] , &
b_TrialState . delta_x [ 0 ] , 27U * sizeof ( real_T ) ) ; dya4t2wzfj ( nVar
, b_TrialState . xstar , TrialState -> delta_x ) ; guard1 = true ; } break ;
case 2 : b_TrialState = * TrialState ; ibyal3ep2ij ( Hessian , TrialState ->
grad , & b_TrialState , MeritFunction , memspace , WorkingSet , QRManager ,
CholManager , QPObjective , qpoptions , localB ) ; * TrialState =
b_TrialState ; memcpy ( & TrialState -> delta_x [ 0 ] , & b_TrialState .
delta_x [ 0 ] , 27U * sizeof ( real_T ) ) ; dya4t2wzfj ( nVar , b_TrialState
. xstar , TrialState -> delta_x ) ; guard1 = true ; break ; default :
b_TrialState = * TrialState ; stepSuccess = h1skejptsj4 ( Hessian ,
TrialState -> grad , & b_TrialState , memspace , WorkingSet , QRManager ,
CholManager , QPObjective , qpoptions , localB ) ; * TrialState =
b_TrialState ; if ( stepSuccess && ( TrialState -> state != - 6 ) ) { for (
b_idx = 0 ; b_idx < nVar ; b_idx ++ ) { TrialState -> delta_x [ b_idx ] =
TrialState -> xstar [ b_idx ] + TrialState -> socDirection [ b_idx ] ; } }
guard1 = true ; break ; } if ( guard1 ) { if ( TrialState -> state != - 6 ) {
exitg1 = 1 ; } else { moizl4aka3m ( Hessian , TrialState -> grad , TrialState
-> xstar ) ; } } } while ( exitg1 == 0 ) ; return stepSuccess ; } static void
iyr1rxfcqi3 ( int32_T nVar , real_T workspace [ 27 ] , const real_T grad [ 27
] , const real_T JacEqTrans [ 108 ] , const real_T grad_old [ 27 ] , const
real_T JacEqTrans_old [ 108 ] , const real_T lambda [ 13 ] ) { int32_T iy ;
int32_T b ; int32_T ia ; for ( iy = 0 ; iy < nVar ; iy ++ ) { workspace [ iy
] = grad [ iy ] ; } if ( nVar >= 1 ) { for ( iy = 0 ; iy < nVar ; iy ++ ) {
workspace [ iy ] += - grad_old [ iy ] ; } } iy = 0 ; for ( ia = 0 ; ia < nVar
; ia ++ ) { workspace [ iy ] += JacEqTrans [ ia ] * lambda [ 0 ] ; iy ++ ; }
iy = 0 ; b = nVar + 27 ; for ( ia = 27 ; ia < b ; ia ++ ) { workspace [ iy ]
+= JacEqTrans [ ia ] * lambda [ 1 ] ; iy ++ ; } iy = 0 ; b = nVar + 54 ; for
( ia = 54 ; ia < b ; ia ++ ) { workspace [ iy ] += JacEqTrans [ ia ] * lambda
[ 2 ] ; iy ++ ; } iy = 0 ; b = nVar + 81 ; for ( ia = 81 ; ia < b ; ia ++ ) {
workspace [ iy ] += JacEqTrans [ ia ] * lambda [ 3 ] ; iy ++ ; } iy = 0 ; for
( ia = 0 ; ia < nVar ; ia ++ ) { workspace [ iy ] += JacEqTrans_old [ ia ] *
- lambda [ 0 ] ; iy ++ ; } iy = 0 ; b = nVar + 27 ; for ( ia = 27 ; ia < b ;
ia ++ ) { workspace [ iy ] += JacEqTrans_old [ ia ] * - lambda [ 1 ] ; iy ++
; } iy = 0 ; b = nVar + 54 ; for ( ia = 54 ; ia < b ; ia ++ ) { workspace [
iy ] += JacEqTrans_old [ ia ] * - lambda [ 2 ] ; iy ++ ; } iy = 0 ; b = nVar
+ 81 ; for ( ia = 81 ; ia < b ; ia ++ ) { workspace [ iy ] += JacEqTrans_old
[ ia ] * - lambda [ 3 ] ; iy ++ ; } } static boolean_T hdmoesrrjpe ( int32_T
nvar , real_T Bk [ 324 ] , const real_T sk [ 27 ] , real_T yk [ 27 ] , real_T
workspace [ 729 ] ) { boolean_T success ; real_T dotSY ; real_T curvatureS ;
int32_T ix ; int32_T iac ; int32_T jy ; real_T temp ; int32_T b_ix ; int32_T
d ; int32_T ijA ; dotSY = 0.0 ; for ( ix = 0 ; ix < nvar ; ix ++ ) { dotSY +=
sk [ ix ] * yk [ ix ] ; } for ( ix = 0 ; ix < nvar ; ix ++ ) { workspace [ ix
] = 0.0 ; } ix = 0 ; jy = ( nvar - 1 ) * 18 ; for ( iac = 1 ; iac <= jy + 1 ;
iac += 18 ) { b_ix = 0 ; d = ( iac + nvar ) - 1 ; for ( ijA = iac ; ijA <= d
; ijA ++ ) { workspace [ b_ix ] += Bk [ ijA - 1 ] * sk [ ix ] ; b_ix ++ ; }
ix ++ ; } curvatureS = 0.0 ; if ( nvar >= 1 ) { for ( ix = 0 ; ix < nvar ; ix
++ ) { curvatureS += sk [ ix ] * workspace [ ix ] ; } } if ( dotSY < 0.2 *
curvatureS ) { dotSY = 0.8 * curvatureS / ( curvatureS - dotSY ) ; for ( ix =
0 ; ix < nvar ; ix ++ ) { yk [ ix ] *= dotSY ; } dotSY = 1.0 - dotSY ; if ( !
( dotSY == 0.0 ) ) { for ( ix = 0 ; ix < nvar ; ix ++ ) { yk [ ix ] += dotSY
* workspace [ ix ] ; } } dotSY = 0.0 ; for ( ix = 0 ; ix < nvar ; ix ++ ) {
dotSY += sk [ ix ] * yk [ ix ] ; } } success = ( ( curvatureS >
2.2204460492503131E-16 ) && ( dotSY > 2.2204460492503131E-16 ) ) ; if (
success ) { curvatureS = - 1.0 / curvatureS ; if ( ! ( curvatureS == 0.0 ) )
{ ix = 0 ; jy = 0 ; for ( iac = 0 ; iac < nvar ; iac ++ ) { if ( workspace [
jy ] != 0.0 ) { temp = workspace [ jy ] * curvatureS ; b_ix = 0 ; d = nvar +
ix ; for ( ijA = ix ; ijA < d ; ijA ++ ) { Bk [ ijA ] += workspace [ b_ix ] *
temp ; b_ix ++ ; } } jy ++ ; ix += 18 ; } } curvatureS = 1.0 / dotSY ; if ( !
( curvatureS == 0.0 ) ) { ix = 0 ; jy = 0 ; for ( iac = 0 ; iac < nvar ; iac
++ ) { if ( yk [ jy ] != 0.0 ) { dotSY = yk [ jy ] * curvatureS ; b_ix = 0 ;
d = nvar + ix ; for ( ijA = ix ; ijA < d ; ijA ++ ) { Bk [ ijA ] += yk [ b_ix
] * dotSY ; b_ix ++ ; } } jy ++ ; ix += 18 ; } } } return success ; } static
void ibebbcogqeg ( boolean_T * evalWellDefined , int32_T WorkingSet_nVar ,
aaxpzhoxuz * TrialState , real_T MeritFunction_penaltyParam , real_T
MeritFunction_phi , real_T MeritFunction_phiPrimePlus , real_T
MeritFunction_phiFullStep , const real_T
FcnEvaluator_objfun_tunableEnvironment [ 4 ] , boolean_T socTaken , real_T *
alpha , int32_T * exitflag ) { real_T phi_alpha ; boolean_T tooSmallX ;
int32_T b_k ; real_T Ceq_workspace [ 4 ] ; int32_T exitg1 ; boolean_T exitg2
; * alpha = 1.0 ; * exitflag = 1 ; phi_alpha = MeritFunction_phiFullStep ;
for ( b_k = 0 ; b_k < WorkingSet_nVar ; b_k ++ ) { TrialState -> searchDir [
b_k ] = TrialState -> delta_x [ b_k ] ; } do { exitg1 = 0 ; if ( TrialState
-> FunctionEvaluations < 1800 ) { if ( ( * evalWellDefined ) && ( phi_alpha
<= * alpha * 0.0001 * MeritFunction_phiPrimePlus + MeritFunction_phi ) ) {
exitg1 = 1 ; } else { * alpha *= 0.7 ; for ( b_k = 0 ; b_k < WorkingSet_nVar
; b_k ++ ) { TrialState -> delta_x [ b_k ] = * alpha * TrialState ->
searchDir [ b_k ] ; } if ( socTaken ) { phi_alpha = * alpha * * alpha ; if (
( WorkingSet_nVar >= 1 ) && ( ! ( phi_alpha == 0.0 ) ) ) { for ( b_k = 0 ;
b_k < WorkingSet_nVar ; b_k ++ ) { TrialState -> delta_x [ b_k ] += phi_alpha
* TrialState -> socDirection [ b_k ] ; } } } tooSmallX = true ; b_k = 0 ;
exitg2 = false ; while ( ( ! exitg2 ) && ( b_k <= WorkingSet_nVar - 1 ) ) {
if ( 1.0E-10 * muDoubleScalarMax ( 1.0 , muDoubleScalarAbs ( TrialState ->
xstarsqp [ b_k ] ) ) <= muDoubleScalarAbs ( TrialState -> delta_x [ b_k ] ) )
{ tooSmallX = false ; exitg2 = true ; } else { b_k ++ ; } } if ( tooSmallX )
{ * exitflag = - 2 ; exitg1 = 1 ; } else { for ( b_k = 0 ; b_k <
WorkingSet_nVar ; b_k ++ ) { TrialState -> xstarsqp [ b_k ] = TrialState ->
xstarsqp_old [ b_k ] + TrialState -> delta_x [ b_k ] ; } Ceq_workspace [ 0 ]
= TrialState -> cEq [ 0 ] ; Ceq_workspace [ 1 ] = TrialState -> cEq [ 1 ] ;
Ceq_workspace [ 2 ] = TrialState -> cEq [ 2 ] ; Ceq_workspace [ 3 ] =
TrialState -> cEq [ 3 ] ; ibqyp0ury0q (
FcnEvaluator_objfun_tunableEnvironment , TrialState -> xstarsqp , & phi_alpha
, & b_k ) ; if ( b_k == 1 ) { b_k = pawujf5ux31 ( TrialState -> xstarsqp ,
Ceq_workspace ) ; } TrialState -> sqpFval = phi_alpha ; TrialState -> cEq [ 0
] = Ceq_workspace [ 0 ] ; TrialState -> cEq [ 1 ] = Ceq_workspace [ 1 ] ;
TrialState -> cEq [ 2 ] = Ceq_workspace [ 2 ] ; TrialState -> cEq [ 3 ] =
Ceq_workspace [ 3 ] ; TrialState -> FunctionEvaluations ++ ; *
evalWellDefined = ( b_k == 1 ) ; if ( * evalWellDefined ) { phi_alpha += ( (
( muDoubleScalarAbs ( Ceq_workspace [ 0 ] ) + muDoubleScalarAbs (
Ceq_workspace [ 1 ] ) ) + muDoubleScalarAbs ( Ceq_workspace [ 2 ] ) ) +
muDoubleScalarAbs ( Ceq_workspace [ 3 ] ) ) * MeritFunction_penaltyParam ; }
else { phi_alpha = ( rtInf ) ; } } } } else { * exitflag = 0 ; exitg1 = 1 ; }
} while ( exitg1 == 0 ) ; } static void dkm24rsgfeq ( const real_T
obj_objfun_tunableEnvironment [ 4 ] , const real_T x [ 18 ] , real_T
Ceq_workspace [ 4 ] , real_T * fval , int32_T * status ) { ibqyp0ury0q (
obj_objfun_tunableEnvironment , x , fval , status ) ; if ( * status == 1 ) {
* status = pawujf5ux31 ( x , Ceq_workspace ) ; } } static real_T asykd4r443i
( real_T obj_penaltyParam , real_T fval , const real_T Ceq_workspace [ 4 ] ,
boolean_T evalWellDefined ) { real_T val ; if ( evalWellDefined ) { val = ( (
( muDoubleScalarAbs ( Ceq_workspace [ 0 ] ) + muDoubleScalarAbs (
Ceq_workspace [ 1 ] ) ) + muDoubleScalarAbs ( Ceq_workspace [ 2 ] ) ) +
muDoubleScalarAbs ( Ceq_workspace [ 3 ] ) ) * obj_penaltyParam + fval ; }
else { val = ( rtInf ) ; } return val ; } static void g01zi3nkf0c0 (
aaxpzhoxuz * TrialState , kthfgfhdov * MeritFunction , const dccng4x0j0 *
FcnEvaluator , dxs1et3yod * FiniteDifferences , guj4mpcfgf * memspace ,
nuprfhnilo * WorkingSet , ev3ltaqeco * QRManager , ecn2fyspui * QPObjective ,
real_T Hessian [ 324 ] , bwxng4ee5f * CholManager , k0zpd1rkeh * localB ) {
int32_T nVar ; int32_T mLB ; int32_T qpoptions_MaxIterations ; mf15oedits
Flags ; int32_T idx ; boolean_T b ; real_T e [ 27 ] ; real_T g [ 108 ] ;
real_T h [ 18 ] ; real_T j ; real_T k [ 4 ] ; int32_T b_idx ; e2ucunpqcp
expl_temp ; static const int8_T o [ 324 ] = { 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 1 } ; static const char_T p [ 7 ] = { 'f' , 'm' , 'i' , 'n' , 'c'
, 'o' , 'n' } ; e2ucunpqcp expl_temp_p ; memset ( & CholManager -> FMat [ 0 ]
, 0 , 729U * sizeof ( real_T ) ) ; CholManager -> ldm = 27 ; CholManager ->
ndims = 0 ; CholManager -> info = 0 ; for ( b_idx = 0 ; b_idx < 324 ; b_idx
++ ) { Hessian [ b_idx ] = o [ b_idx ] ; } nVar = WorkingSet -> nVar ; mLB =
WorkingSet -> sizes [ 3 ] ; qpoptions_MaxIterations = 10 *
muIntScalarMax_sint32 ( WorkingSet -> nVar , WorkingSet -> sizes [ 3 ] ) ;
TrialState -> steplength = 1.0 ; ksrs0yrnvw3u ( MeritFunction , WorkingSet ,
TrialState , & Flags . gradOK , & Flags . fevalOK , & Flags . done , & Flags
. stepAccepted , & Flags . failedLineSearch , & Flags . stepType ) ;
iexi1hxv0po ( TrialState , WorkingSet -> nVar , WorkingSet -> Aeq ) ;
eilmu4s5owu ( TrialState ) ; if ( ! Flags . done ) { TrialState ->
sqpIterations = 1 ; } while ( ! Flags . done ) { if ( ( ! Flags .
stepAccepted ) && ( ! Flags . failedLineSearch ) ) { expl_temp .
IterDisplayQP = false ; expl_temp . RemainFeasible = false ; expl_temp .
ProbRelTolFactor = 1.0 ; expl_temp . ConstrRelTolFactor = 1.0 ; expl_temp .
PricingTolerance = 0.0 ; expl_temp . ObjectiveLimit = - 1.0E+20 ; expl_temp .
ConstraintTolerance = 1.0E-6 ; expl_temp . OptimalityTolerance =
2.2204460492503131E-14 ; expl_temp . StepTolerance = 1.0E-6 ; expl_temp .
MaxIterations = qpoptions_MaxIterations ; for ( b_idx = 0 ; b_idx < 7 ; b_idx
++ ) { expl_temp . SolverName [ b_idx ] = p [ b_idx ] ; } } while ( ( ! Flags
. stepAccepted ) && ( ! Flags . failedLineSearch ) ) { cdu0auzqs4jar (
WorkingSet , TrialState -> cEq ) ; idx = Flags . stepType ; expl_temp_p =
expl_temp ; b = hfcepsnatap ( & idx , Hessian , TrialState , MeritFunction ,
memspace , WorkingSet , QRManager , CholManager , QPObjective , & expl_temp_p
, localB ) ; Flags . stepAccepted = b ; Flags . stepType = idx ; if ( b ) {
for ( b_idx = 0 ; b_idx < nVar ; b_idx ++ ) { TrialState -> xstarsqp [ b_idx
] += TrialState -> delta_x [ b_idx ] ; } k [ 0 ] = TrialState -> cEq [ 0 ] ;
k [ 1 ] = TrialState -> cEq [ 1 ] ; k [ 2 ] = TrialState -> cEq [ 2 ] ; k [ 3
] = TrialState -> cEq [ 3 ] ; dkm24rsgfeq ( FcnEvaluator -> objfun .
tunableEnvironment , TrialState -> xstarsqp , k , & j , & b_idx ) ;
TrialState -> sqpFval = j ; Flags . fevalOK = ( b_idx == 1 ) ; TrialState ->
FunctionEvaluations ++ ; TrialState -> cEq [ 0 ] = k [ 0 ] ; TrialState ->
cEq [ 1 ] = k [ 1 ] ; TrialState -> cEq [ 2 ] = k [ 2 ] ; TrialState -> cEq [
3 ] = k [ 3 ] ; MeritFunction -> phiFullStep = asykd4r443i ( MeritFunction ->
penaltyParam , j , k , Flags . fevalOK ) ; } if ( ( idx == 1 ) && b && Flags
. fevalOK && ( MeritFunction -> phi < MeritFunction -> phiFullStep ) && (
TrialState -> sqpFval < TrialState -> sqpFval_old ) ) { Flags . stepType = 3
; Flags . stepAccepted = false ; } else { ibebbcogqeg ( & Flags . fevalOK ,
WorkingSet -> nVar , TrialState , MeritFunction -> penaltyParam ,
MeritFunction -> phi , MeritFunction -> phiPrimePlus , MeritFunction ->
phiFullStep , FcnEvaluator -> objfun . tunableEnvironment , ( idx == 3 ) && b
, & j , & b_idx ) ; TrialState -> steplength = j ; if ( b_idx > 0 ) { Flags .
stepAccepted = true ; } else { Flags . failedLineSearch = true ; } } } if (
Flags . stepAccepted && ( ! Flags . failedLineSearch ) ) { for ( b_idx = 0 ;
b_idx < nVar ; b_idx ++ ) { TrialState -> xstarsqp [ b_idx ] = TrialState ->
xstarsqp_old [ b_idx ] + TrialState -> delta_x [ b_idx ] ; } for ( b_idx = 0
; b_idx <= mLB + 3 ; b_idx ++ ) { TrialState -> lambdasqp [ b_idx ] += (
TrialState -> lambda [ b_idx ] - TrialState -> lambdasqp [ b_idx ] ) *
TrialState -> steplength ; } eilmu4s5owu ( TrialState ) ; memcpy ( & e [ 0 ]
, & TrialState -> grad [ 0 ] , 27U * sizeof ( real_T ) ) ; memcpy ( & g [ 0 ]
, & WorkingSet -> Aeq [ 0 ] , 108U * sizeof ( real_T ) ) ; memcpy ( & h [ 0 ]
, & TrialState -> xstarsqp [ 0 ] , 18U * sizeof ( real_T ) ) ; Flags . gradOK
= ac5h1531rt3 ( FiniteDifferences , TrialState -> sqpFval , TrialState -> cEq
, h , e , g ) ; memcpy ( & TrialState -> grad [ 0 ] , & e [ 0 ] , 27U *
sizeof ( real_T ) ) ; memcpy ( & WorkingSet -> Aeq [ 0 ] , & g [ 0 ] , 108U *
sizeof ( real_T ) ) ; memcpy ( & TrialState -> xstarsqp [ 0 ] , & h [ 0 ] ,
18U * sizeof ( real_T ) ) ; TrialState -> FunctionEvaluations +=
FiniteDifferences -> numEvals ; } else { dpnt4bixcf4 ( TrialState ) ; }
ksrs0yrnvw3u0 ( & Flags , memspace , MeritFunction , WorkingSet , TrialState
, QRManager , localB ) ; if ( ( ! Flags . done ) && Flags . stepAccepted ) {
Flags . stepAccepted = false ; Flags . stepType = 1 ; Flags .
failedLineSearch = false ; iyr1rxfcqi3 ( nVar , TrialState -> delta_gradLag ,
TrialState -> grad , WorkingSet -> Aeq , TrialState -> grad_old , TrialState
-> JacCeqTrans_old , TrialState -> lambdasqp ) ; iexi1hxv0po ( TrialState ,
nVar , WorkingSet -> Aeq ) ; hdmoesrrjpe ( nVar , Hessian , TrialState ->
delta_x , TrialState -> delta_gradLag , memspace -> workspace_double ) ;
TrialState -> sqpIterations ++ ; } } } static void mes2kf0vifn ( const real_T
fun_tunableEnvironment [ 4 ] , real_T x [ 18 ] , real_T * fval , real_T *
exitflag , k0zpd1rkeh * localB ) { aaxpzhoxuz TrialState ; dccng4x0j0
FcnEvaluator ; real_T b ; real_T e [ 4 ] ; dxs1et3yod FiniteDifferences ;
real_T Hessian [ 324 ] ; kthfgfhdov MeritFunction ; ecn2fyspui QPObjective ;
static const real_T i [ 18 ] = { 0.17453292519943295 , 0.8135 , 0.0244 , -
0.0019 , - 0.5821 , 0.9338 , 0.0064 , - 0.0889 , 0.3413 , -
0.17453292519943295 , 0.8135 , - 0.0245 , - 0.0019 , 0.5821 , - 0.9338 ,
0.0064 , 0.0889 , 0.3413 } ; int32_T i_p ; static const int8_T m [ 5 ] = { 0
, 4 , 0 , 0 , 0 } ; static const int8_T q [ 6 ] = { 1 , 1 , 5 , 5 , 5 , 5 } ;
static const int8_T n [ 5 ] = { 0 , 4 , 0 , 1 , 0 } ; static const int8_T o [
5 ] = { 0 , 4 , 0 , 8 , 0 } ; static const int8_T r [ 6 ] = { 1 , 1 , 5 , 5 ,
6 , 6 } ; static const int8_T p [ 5 ] = { 0 , 4 , 0 , 9 , 0 } ; static const
int8_T t [ 6 ] = { 1 , 1 , 5 , 5 , 13 , 13 } ; static const int8_T u [ 6 ] =
{ 1 , 1 , 5 , 5 , 14 , 14 } ; static const real_T i_e [ 18 ] = {
0.17453292519943295 , 0.8135 , 0.0244 , - 0.0019 , - 0.5821 , 0.9338 , 0.0064
, - 0.0889 , 0.3413 , - 0.17453292519943295 , 0.8135 , - 0.0245 , - 0.0019 ,
0.5821 , - 0.9338 , 0.0064 , 0.0889 , 0.3413 } ; dj2cbrorw3kdl (
fun_tunableEnvironment , FcnEvaluator . objfun . tunableEnvironment , &
FcnEvaluator . nVar , & FcnEvaluator . mCineq , & FcnEvaluator . mCeq , &
FcnEvaluator . NonFiniteSupport , & FcnEvaluator . SpecifyObjectiveGradient ,
& FcnEvaluator . SpecifyConstraintGradient , & FcnEvaluator . ScaleProblem )
; TrialState . nVarMax = 27 ; TrialState . mNonlinIneq = 0 ; TrialState .
mNonlinEq = 4 ; TrialState . mIneq = 0 ; TrialState . mEq = 4 ; TrialState .
iNonIneq0 = 1 ; TrialState . iNonEq0 = 1 ; TrialState . sqpFval_old = 0.0 ;
memset ( & TrialState . xstarsqp_old [ 0 ] , 0 , 18U * sizeof ( real_T ) ) ;
TrialState . cEq_old [ 0 ] = 0.0 ; TrialState . cEq_old [ 1 ] = 0.0 ;
TrialState . cEq_old [ 2 ] = 0.0 ; TrialState . cEq_old [ 3 ] = 0.0 ; memset
( & TrialState . grad_old [ 0 ] , 0 , 27U * sizeof ( real_T ) ) ; TrialState
. sqpIterations = 0 ; TrialState . sqpExitFlag = 0 ; memset ( & TrialState .
lambdasqp [ 0 ] , 0 , 13U * sizeof ( real_T ) ) ; memset ( & TrialState .
lambdasqp_old [ 0 ] , 0 , 13U * sizeof ( real_T ) ) ; TrialState . steplength
= 1.0 ; memset ( & TrialState . delta_x [ 0 ] , 0 , 27U * sizeof ( real_T ) )
; memset ( & TrialState . socDirection [ 0 ] , 0 , 27U * sizeof ( real_T ) )
; memset ( & TrialState . lambda_old [ 0 ] , 0 , 13U * sizeof ( real_T ) ) ;
for ( i_p = 0 ; i_p < 13 ; i_p ++ ) { TrialState . workingset_old [ i_p ] = 0
; } memset ( & TrialState . JacCeqTrans_old [ 0 ] , 0 , 108U * sizeof (
real_T ) ) ; memset ( & TrialState . gradLag [ 0 ] , 0 , 27U * sizeof (
real_T ) ) ; memset ( & TrialState . delta_gradLag [ 0 ] , 0 , 27U * sizeof (
real_T ) ) ; memset ( & TrialState . xstar [ 0 ] , 0 , 27U * sizeof ( real_T
) ) ; TrialState . fstar = 0.0 ; TrialState . firstorderopt = 0.0 ; memset (
& TrialState . lambda [ 0 ] , 0 , 13U * sizeof ( real_T ) ) ; TrialState .
state = 0 ; TrialState . maxConstr = 0.0 ; TrialState . iterations = 0 ;
localB -> WorkingSet . mConstr = 4 ; localB -> WorkingSet . mConstrOrig = 4 ;
localB -> WorkingSet . mConstrMax = 13 ; localB -> WorkingSet . nVar = 18 ;
localB -> WorkingSet . nVarOrig = 18 ; localB -> WorkingSet . nVarMax = 27 ;
localB -> WorkingSet . ldA = 27 ; localB -> WorkingSet . beq [ 0 ] = 0.0 ;
localB -> WorkingSet . beq [ 1 ] = 0.0 ; localB -> WorkingSet . beq [ 2 ] =
0.0 ; localB -> WorkingSet . beq [ 3 ] = 0.0 ; memset ( & TrialState .
searchDir [ 0 ] , 0 , 27U * sizeof ( real_T ) ) ; memset ( & localB ->
WorkingSet . lb [ 0 ] , 0 , 27U * sizeof ( real_T ) ) ; memset ( & localB ->
WorkingSet . ub [ 0 ] , 0 , 27U * sizeof ( real_T ) ) ; memset ( & localB ->
WorkingSet . indexLB [ 0 ] , 0 , 27U * sizeof ( int32_T ) ) ; memset ( &
localB -> WorkingSet . indexUB [ 0 ] , 0 , 27U * sizeof ( int32_T ) ) ;
memset ( & localB -> WorkingSet . indexFixed [ 0 ] , 0 , 27U * sizeof (
int32_T ) ) ; localB -> WorkingSet . mEqRemoved = 0 ; localB -> WorkingSet .
indexEqRemoved [ 0 ] = 0 ; localB -> WorkingSet . indexEqRemoved [ 1 ] = 0 ;
localB -> WorkingSet . indexEqRemoved [ 2 ] = 0 ; localB -> WorkingSet .
indexEqRemoved [ 3 ] = 0 ; memset ( & localB -> WorkingSet . ATwset [ 0 ] , 0
, 351U * sizeof ( real_T ) ) ; localB -> WorkingSet . nActiveConstr = 0 ;
memset ( & localB -> WorkingSet . bwset [ 0 ] , 0 , 13U * sizeof ( real_T ) )
; memset ( & localB -> WorkingSet . maxConstrWorkspace [ 0 ] , 0 , 13U *
sizeof ( real_T ) ) ; for ( i_p = 0 ; i_p < 5 ; i_p ++ ) { localB ->
WorkingSet . sizes [ i_p ] = m [ i_p ] ; localB -> WorkingSet . sizesNormal [
i_p ] = m [ i_p ] ; localB -> WorkingSet . sizesPhaseOne [ i_p ] = n [ i_p ]
; localB -> WorkingSet . sizesRegularized [ i_p ] = o [ i_p ] ; localB ->
WorkingSet . sizesRegPhaseOne [ i_p ] = p [ i_p ] ; } for ( i_p = 0 ; i_p < 6
; i_p ++ ) { localB -> WorkingSet . isActiveIdx [ i_p ] = q [ i_p ] ; localB
-> WorkingSet . isActiveIdxNormal [ i_p ] = q [ i_p ] ; localB -> WorkingSet
. isActiveIdxPhaseOne [ i_p ] = r [ i_p ] ; localB -> WorkingSet .
isActiveIdxRegularized [ i_p ] = t [ i_p ] ; localB -> WorkingSet .
isActiveIdxRegPhaseOne [ i_p ] = u [ i_p ] ; } for ( i_p = 0 ; i_p < 13 ; i_p
++ ) { localB -> WorkingSet . isActiveConstr [ i_p ] = false ; localB ->
WorkingSet . Wid [ i_p ] = 0 ; localB -> WorkingSet . Wlocalidx [ i_p ] = 0 ;
} for ( i_p = 0 ; i_p < 5 ; i_p ++ ) { localB -> WorkingSet . nWConstr [ i_p
] = 0 ; } localB -> WorkingSet . probType = 3 ; localB -> WorkingSet . SLACK0
= 1.0E-5 ; memset ( & TrialState . grad [ 0 ] , 0 , 27U * sizeof ( real_T ) )
; e [ 0 ] = 0.0 ; e [ 1 ] = 0.0 ; e [ 2 ] = 0.0 ; e [ 3 ] = 0.0 ; memset ( &
localB -> WorkingSet . Aeq [ 0 ] , 0 , 108U * sizeof ( real_T ) ) ;
otclemyw5hd ( FcnEvaluator . objfun . tunableEnvironment , i_e , e , & b , &
i_p ) ; TrialState . sqpFval = b ; dj2cbrorw3kdls ( fun_tunableEnvironment ,
& FiniteDifferences ) ; memcpy ( & TrialState . xstarsqp [ 0 ] , & i [ 0 ] ,
18U * sizeof ( real_T ) ) ; ac5h1531rt3 ( & FiniteDifferences , b , e ,
TrialState . xstarsqp , TrialState . grad , localB -> WorkingSet . Aeq ) ;
TrialState . FunctionEvaluations = FiniteDifferences . numEvals + 1 ;
TrialState . cEq [ 0 ] = e [ 0 ] ; TrialState . cEq [ 1 ] = e [ 1 ] ;
TrialState . cEq [ 2 ] = e [ 2 ] ; TrialState . cEq [ 3 ] = e [ 3 ] ;
cdu0auzqs4ja ( & localB -> WorkingSet , e ) ; cbwacn3e4ri ( & localB ->
WorkingSet ) ; localB -> s . ldq = 27 ; memset ( & localB -> s . QR [ 0 ] , 0
, 729U * sizeof ( real_T ) ) ; memset ( & localB -> s . Q [ 0 ] , 0 , 729U *
sizeof ( real_T ) ) ; localB -> s . mrows = 0 ; localB -> s . ncols = 0 ;
localB -> s . minRowCol = 0 ; localB -> s . usedPivoting = false ;
dj2cbrorw3kdlsj ( b , e , & MeritFunction ) ; memset ( & localB -> s . jpvt [
0 ] , 0 , 27U * sizeof ( int32_T ) ) ; memset ( & localB -> s . tau [ 0 ] , 0
, 27U * sizeof ( real_T ) ) ; memset ( & QPObjective . grad [ 0 ] , 0 , 27U *
sizeof ( real_T ) ) ; memset ( & QPObjective . Hx [ 0 ] , 0 , 26U * sizeof (
real_T ) ) ; QPObjective . hasLinear = true ; QPObjective . nvar = 18 ;
QPObjective . maxVar = 27 ; QPObjective . beta = 0.0 ; QPObjective . rho =
0.0 ; QPObjective . objtype = 3 ; QPObjective . prev_objtype = 3 ;
QPObjective . prev_nvar = 0 ; QPObjective . prev_hasLinear = false ;
QPObjective . gammaScalar = 0.0 ; g01zi3nkf0c0 ( & TrialState , &
MeritFunction , & FcnEvaluator , & FiniteDifferences , & localB -> memspace ,
& localB -> WorkingSet , & localB -> s , & QPObjective , Hessian , & localB
-> CholManager , localB ) ; memcpy ( & x [ 0 ] , & TrialState . xstarsqp [ 0
] , 18U * sizeof ( real_T ) ) ; * fval = TrialState . sqpFval ; * exitflag =
TrialState . sqpExitFlag ; } void e0p5cszha5 ( real_T pbx55uroo2 , real_T
ey510ticxk , real_T aqc0pbgxkp , real_T m4drzkk0l5 , k0zpd1rkeh * localB ) {
real_T angle ; real_T newCoord [ 4 ] ; real_T unusedU1 ; real_T OptVals [ 5 ]
; real_T b_OptVals [ 18 ] ; hskkdlcyjp tunableEnvironment ; real_T
b_tunableEnvironment [ 4 ] ; real_T tmp [ 16 ] ; int32_T i ; static const
int8_T c [ 4 ] = { 0 , 0 , 0 , 1 } ; angle = m4drzkk0l5 * - 120.0 *
3.1415926535897931 / 180.0 ; tmp [ 0 ] = muDoubleScalarCos ( angle ) ; tmp [
4 ] = - muDoubleScalarSin ( angle ) ; tmp [ 8 ] = 0.0 ; tmp [ 12 ] = 0.0 ;
tmp [ 1 ] = muDoubleScalarSin ( angle ) ; tmp [ 5 ] = muDoubleScalarCos (
angle ) ; tmp [ 9 ] = 0.0 ; tmp [ 13 ] = 0.0 ; tmp [ 2 ] = 0.0 ; tmp [ 3 ] =
0.0 ; tmp [ 6 ] = 0.0 ; tmp [ 7 ] = 0.0 ; tmp [ 10 ] = 1.0 ; tmp [ 11 ] = 0.0
; tmp [ 14 ] = 0.0 ; tmp [ 15 ] = 1.0 ; tunableEnvironment . f1 [ 0 ] = 1.0 ;
tunableEnvironment . f1 [ 4 ] = 0.0 ; tunableEnvironment . f1 [ 8 ] = 0.0 ;
tunableEnvironment . f1 [ 1 ] = 0.0 ; tunableEnvironment . f1 [ 5 ] = 1.0 ;
tunableEnvironment . f1 [ 9 ] = 0.0 ; tunableEnvironment . f1 [ 2 ] = 0.0 ;
tunableEnvironment . f1 [ 6 ] = 0.0 ; tunableEnvironment . f1 [ 10 ] = 1.0 ;
for ( i = 0 ; i < 4 ; i ++ ) { angle = tmp [ i + 12 ] + ( tmp [ i + 8 ] *
aqc0pbgxkp + ( tmp [ i + 4 ] * ey510ticxk + tmp [ i ] * pbx55uroo2 ) ) ;
tunableEnvironment . f1 [ ( i << 2 ) + 3 ] = c [ i ] ; newCoord [ i ] = angle
; } tunableEnvironment . f1 [ 12 ] = newCoord [ 0 ] ; tunableEnvironment . f1
[ 13 ] = newCoord [ 1 ] ; tunableEnvironment . f1 [ 14 ] = newCoord [ 2 ] ;
mes2kf0vif ( & tunableEnvironment , OptVals , & angle , & unusedU1 ) ;
b_tunableEnvironment [ 0 ] = OptVals [ 0 ] ; b_tunableEnvironment [ 1 ] =
OptVals [ 1 ] ; b_tunableEnvironment [ 2 ] = OptVals [ 2 ] ;
b_tunableEnvironment [ 3 ] = OptVals [ 3 ] ; mes2kf0vifn (
b_tunableEnvironment , b_OptVals , & angle , & unusedU1 , localB ) ; localB
-> ovgwheqnqh = OptVals [ 4 ] ; localB -> j0rc1se3o4 = b_OptVals [ 0 ] ;
localB -> ntyw452pod = b_OptVals [ 9 ] ; } static void jt2ame0nt2 ( int32_T *
obj_nVar , int32_T * obj_mCineq , int32_T * obj_mCeq , boolean_T *
obj_NonFiniteSupport , boolean_T * obj_SpecifyObjectiveGradient , boolean_T *
obj_SpecifyConstraintGradient , boolean_T * obj_ScaleProblem ) { * obj_nVar =
5 ; * obj_mCineq = 0 ; * obj_mCeq = 1 ; * obj_NonFiniteSupport = true ; *
obj_SpecifyObjectiveGradient = false ; * obj_SpecifyConstraintGradient =
false ; * obj_ScaleProblem = false ; } static void fxnkqpuvi4 ( const real_T
A [ 16 ] , real_T * a , real_T * b , real_T * c , real_T * d , real_T * x ,
real_T * y , real_T * z ) { real_T r ; real_T s ; * x = A [ 12 ] ; * y = A [
13 ] ; * z = A [ 14 ] ; r = muDoubleScalarSqrt ( ( ( A [ 0 ] + A [ 5 ] ) + A
[ 10 ] ) + 1.0 ) ; s = 1.0 / ( 2.0 * r ) ; * a = 0.5 * r ; * b = ( A [ 6 ] -
A [ 9 ] ) * s ; * c = ( A [ 8 ] - A [ 2 ] ) * s ; * d = ( A [ 1 ] - A [ 4 ] )
* s ; } static void cipokh2zzb ( const hskkdlcyjp *
obj_objfun_tunableEnvironment , const real_T x [ 5 ] , real_T * fval ,
int32_T * status ) { real_T unusedU6 ; real_T unusedU7 ; real_T unusedU8 ;
real_T unusedU9 ; real_T z ; real_T Ax ; real_T Ay ; real_T Az ; real_T
theta0 ; real_T c_x ; real_T res [ 16 ] ; real_T b_a [ 16 ] ; real_T b_a_p [
16 ] ; real_T b_a_e [ 16 ] ; int32_T i ; int32_T i_p ; static const real_T
b_a_i [ 16 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
1.0 , 0.0 , 0.265 , 0.0 , 0.014 , 1.0 } ; static const real_T b_b [ 16 ] = {
1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 1.64
, 0.0 , - 0.037 , 1.0 } ; static const real_T b [ 16 ] = { 1.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , - 1.5 , 0.0 , 0.0 , 1.0
} ; theta0 = - x [ 4 ] * 0.07 / 9.42477796076938 + - 0.26179938779914941 ;
c_x = muDoubleScalarCos ( theta0 / 2.0 ) ; theta0 = muDoubleScalarSin (
theta0 / 2.0 ) ; res [ 0 ] = 1.0 - ( x [ 2 ] * x [ 2 ] + x [ 3 ] * x [ 3 ] )
* 2.0 ; res [ 4 ] = ( x [ 1 ] * x [ 2 ] - x [ 3 ] * x [ 0 ] ) * 2.0 ; res [ 8
] = ( x [ 1 ] * x [ 3 ] + x [ 2 ] * x [ 0 ] ) * 2.0 ; res [ 12 ] = 0.0 ; res
[ 1 ] = ( x [ 1 ] * x [ 2 ] + x [ 3 ] * x [ 0 ] ) * 2.0 ; res [ 5 ] = 1.0 - (
x [ 1 ] * x [ 1 ] + x [ 3 ] * x [ 3 ] ) * 2.0 ; res [ 9 ] = ( x [ 2 ] * x [ 3
] - x [ 1 ] * x [ 0 ] ) * 2.0 ; res [ 13 ] = 0.0 ; res [ 2 ] = ( x [ 1 ] * x
[ 3 ] - x [ 2 ] * x [ 0 ] ) * 2.0 ; res [ 6 ] = ( x [ 2 ] * x [ 3 ] + x [ 1 ]
* x [ 0 ] ) * 2.0 ; res [ 10 ] = 1.0 - ( x [ 1 ] * x [ 1 ] + x [ 2 ] * x [ 2
] ) * 2.0 ; res [ 14 ] = 0.0 ; res [ 3 ] = 0.0 ; res [ 7 ] = 0.0 ; res [ 11 ]
= 0.0 ; res [ 15 ] = 1.0 ; for ( i = 0 ; i < 4 ; i ++ ) { for ( i_p = 0 ; i_p
< 4 ; i_p ++ ) { b_a [ i + ( i_p << 2 ) ] = 0.0 ; b_a [ i + ( i_p << 2 ) ] +=
res [ i_p << 2 ] * b_a_i [ i ] ; b_a [ i + ( i_p << 2 ) ] += res [ ( i_p << 2
) + 1 ] * b_a_i [ i + 4 ] ; b_a [ i + ( i_p << 2 ) ] += res [ ( i_p << 2 ) +
2 ] * b_a_i [ i + 8 ] ; b_a [ i + ( i_p << 2 ) ] += res [ ( i_p << 2 ) + 3 ]
* b_a_i [ i + 12 ] ; } for ( i_p = 0 ; i_p < 4 ; i_p ++ ) { b_a_p [ i + ( i_p
<< 2 ) ] = 0.0 ; b_a_p [ i + ( i_p << 2 ) ] += b_b [ i_p << 2 ] * b_a [ i ] ;
b_a_p [ i + ( i_p << 2 ) ] += b_b [ ( i_p << 2 ) + 1 ] * b_a [ i + 4 ] ;
b_a_p [ i + ( i_p << 2 ) ] += b_b [ ( i_p << 2 ) + 2 ] * b_a [ i + 8 ] ;
b_a_p [ i + ( i_p << 2 ) ] += b_b [ ( i_p << 2 ) + 3 ] * b_a [ i + 12 ] ; } }
res [ 0 ] = 1.0 - theta0 * theta0 * 2.0 ; res [ 4 ] = ( 0.0 * theta0 - 0.0 *
c_x ) * 2.0 ; res [ 8 ] = theta0 * c_x * 2.0 ; res [ 12 ] = 0.0 ; res [ 1 ] =
( 0.0 * theta0 + 0.0 * c_x ) * 2.0 ; res [ 5 ] = 1.0 ; res [ 9 ] = ( theta0 *
0.0 - 0.0 * c_x ) * 2.0 ; res [ 13 ] = 0.0 ; res [ 2 ] = ( 0.0 - theta0 * c_x
) * 2.0 ; res [ 6 ] = ( theta0 * 0.0 + 0.0 * c_x ) * 2.0 ; res [ 10 ] = 1.0 -
theta0 * theta0 * 2.0 ; res [ 14 ] = 0.0 ; res [ 3 ] = 0.0 ; res [ 7 ] = 0.0
; res [ 11 ] = 0.0 ; res [ 15 ] = 1.0 ; for ( i = 0 ; i < 4 ; i ++ ) { for (
i_p = 0 ; i_p < 4 ; i_p ++ ) { b_a [ i + ( i_p << 2 ) ] = 0.0 ; b_a [ i + (
i_p << 2 ) ] += res [ i_p << 2 ] * b_a_p [ i ] ; b_a [ i + ( i_p << 2 ) ] +=
res [ ( i_p << 2 ) + 1 ] * b_a_p [ i + 4 ] ; b_a [ i + ( i_p << 2 ) ] += res
[ ( i_p << 2 ) + 2 ] * b_a_p [ i + 8 ] ; b_a [ i + ( i_p << 2 ) ] += res [ (
i_p << 2 ) + 3 ] * b_a_p [ i + 12 ] ; } for ( i_p = 0 ; i_p < 4 ; i_p ++ ) {
b_a_e [ i + ( i_p << 2 ) ] = 0.0 ; b_a_e [ i + ( i_p << 2 ) ] += b [ i_p << 2
] * b_a [ i ] ; b_a_e [ i + ( i_p << 2 ) ] += b [ ( i_p << 2 ) + 1 ] * b_a [
i + 4 ] ; b_a_e [ i + ( i_p << 2 ) ] += b [ ( i_p << 2 ) + 2 ] * b_a [ i + 8
] ; b_a_e [ i + ( i_p << 2 ) ] += b [ ( i_p << 2 ) + 3 ] * b_a [ i + 12 ] ; }
} fxnkqpuvi4 ( b_a_e , & unusedU6 , & unusedU7 , & unusedU8 , & unusedU9 , &
c_x , & theta0 , & z ) ; fxnkqpuvi4 ( obj_objfun_tunableEnvironment -> f1 , &
unusedU6 , & unusedU7 , & unusedU8 , & unusedU9 , & Ax , & Ay , & Az ) ; c_x
-= Ax ; unusedU6 = c_x * c_x ; c_x = theta0 - Ay ; theta0 = c_x * c_x ; c_x =
z - Az ; * fval = ( unusedU6 + theta0 ) + c_x * c_x ; * status = 1 ; if (
muDoubleScalarIsInf ( * fval ) || muDoubleScalarIsNaN ( * fval ) ) { if (
muDoubleScalarIsNaN ( * fval ) ) { * status = - 6 ; } else if ( * fval < 0.0
) { * status = - 4 ; } else { * status = - 5 ; } } } static int32_T
fgxc0qaihr ( const real_T x [ 5 ] , real_T * Ceq_workspace ) { int32_T status
; real_T b ; b = ( ( ( x [ 0 ] * x [ 0 ] + x [ 1 ] * x [ 1 ] ) + x [ 2 ] * x
[ 2 ] ) + x [ 3 ] * x [ 3 ] ) - 1.0 ; * Ceq_workspace = b ; status = 1 ; if (
muDoubleScalarIsInf ( * Ceq_workspace ) || muDoubleScalarIsNaN ( *
Ceq_workspace ) ) { if ( muDoubleScalarIsNaN ( b ) ) { status = - 3 ; } else
if ( b < 0.0 ) { status = - 1 ; } else { status = - 2 ; } } return status ; }
static void ih4gycxc1o ( const hskkdlcyjp * obj_objfun_tunableEnvironment ,
const real_T x [ 5 ] , real_T * Ceq_workspace , real_T * fval , int32_T *
status ) { * Ceq_workspace = 0.0 ; cipokh2zzb ( obj_objfun_tunableEnvironment
, x , fval , status ) ; if ( * status == 1 ) { * Ceq_workspace = 0.0 ; *
status = fgxc0qaihr ( x , Ceq_workspace ) ; } } static void p32d0btmmxz (
const hskkdlcyjp * objfun_tunableEnvironment , hbctg4nwcl * obj ) { int32_T
idx ; obj -> objfun . tunableEnvironment = * objfun_tunableEnvironment ; obj
-> f_1 = 0.0 ; obj -> f_2 = 0.0 ; obj -> nVar = 5 ; obj -> mIneq = 0 ; obj ->
mEq = 1 ; obj -> numEvals = 0 ; obj -> SpecifyObjectiveGradient = false ; obj
-> SpecifyConstraintGradient = false ; obj -> FiniteDifferenceType = 0 ; for
( idx = 0 ; idx < 5 ; idx ++ ) { obj -> hasLB [ idx ] = false ; obj -> hasUB
[ idx ] = false ; } obj -> hasBounds = false ; } static boolean_T hl1l1m0sqe
( const hskkdlcyjp * obj_objfun_tunableEnvironment , real_T * fplus , real_T
* cEqPlus , int32_T dim , real_T delta , real_T xk [ 5 ] ) { boolean_T evalOK
; real_T temp ; real_T unusedU6 ; real_T unusedU7 ; real_T unusedU8 ; real_T
unusedU9 ; real_T z ; real_T Ax ; real_T Ay ; real_T Az ; real_T theta0 ;
real_T c_x ; real_T res [ 16 ] ; real_T b_a [ 16 ] ; real_T b_a_p [ 16 ] ;
real_T b_a_e [ 16 ] ; int32_T i ; int32_T i_p ; static const real_T b_a_i [
16 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 ,
0.0 , 0.265 , 0.0 , 0.014 , 1.0 } ; static const real_T b_b [ 16 ] = { 1.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 1.64 , 0.0
, - 0.037 , 1.0 } ; static const real_T b [ 16 ] = { 1.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , - 1.5 , 0.0 , 0.0 , 1.0 } ;
temp = xk [ dim - 1 ] ; xk [ dim - 1 ] += delta ; theta0 = - xk [ 4 ] * 0.07
/ 9.42477796076938 + - 0.26179938779914941 ; c_x = muDoubleScalarCos ( theta0
/ 2.0 ) ; theta0 = muDoubleScalarSin ( theta0 / 2.0 ) ; res [ 0 ] = 1.0 - (
xk [ 2 ] * xk [ 2 ] + xk [ 3 ] * xk [ 3 ] ) * 2.0 ; res [ 4 ] = ( xk [ 1 ] *
xk [ 2 ] - xk [ 3 ] * xk [ 0 ] ) * 2.0 ; res [ 8 ] = ( xk [ 1 ] * xk [ 3 ] +
xk [ 2 ] * xk [ 0 ] ) * 2.0 ; res [ 12 ] = 0.0 ; res [ 1 ] = ( xk [ 1 ] * xk
[ 2 ] + xk [ 3 ] * xk [ 0 ] ) * 2.0 ; res [ 5 ] = 1.0 - ( xk [ 1 ] * xk [ 1 ]
+ xk [ 3 ] * xk [ 3 ] ) * 2.0 ; res [ 9 ] = ( xk [ 2 ] * xk [ 3 ] - xk [ 1 ]
* xk [ 0 ] ) * 2.0 ; res [ 13 ] = 0.0 ; res [ 2 ] = ( xk [ 1 ] * xk [ 3 ] -
xk [ 2 ] * xk [ 0 ] ) * 2.0 ; res [ 6 ] = ( xk [ 2 ] * xk [ 3 ] + xk [ 1 ] *
xk [ 0 ] ) * 2.0 ; res [ 10 ] = 1.0 - ( xk [ 1 ] * xk [ 1 ] + xk [ 2 ] * xk [
2 ] ) * 2.0 ; res [ 14 ] = 0.0 ; res [ 3 ] = 0.0 ; res [ 7 ] = 0.0 ; res [ 11
] = 0.0 ; res [ 15 ] = 1.0 ; for ( i = 0 ; i < 4 ; i ++ ) { for ( i_p = 0 ;
i_p < 4 ; i_p ++ ) { b_a [ i + ( i_p << 2 ) ] = 0.0 ; b_a [ i + ( i_p << 2 )
] += res [ i_p << 2 ] * b_a_i [ i ] ; b_a [ i + ( i_p << 2 ) ] += res [ ( i_p
<< 2 ) + 1 ] * b_a_i [ i + 4 ] ; b_a [ i + ( i_p << 2 ) ] += res [ ( i_p << 2
) + 2 ] * b_a_i [ i + 8 ] ; b_a [ i + ( i_p << 2 ) ] += res [ ( i_p << 2 ) +
3 ] * b_a_i [ i + 12 ] ; } for ( i_p = 0 ; i_p < 4 ; i_p ++ ) { b_a_p [ i + (
i_p << 2 ) ] = 0.0 ; b_a_p [ i + ( i_p << 2 ) ] += b_b [ i_p << 2 ] * b_a [ i
] ; b_a_p [ i + ( i_p << 2 ) ] += b_b [ ( i_p << 2 ) + 1 ] * b_a [ i + 4 ] ;
b_a_p [ i + ( i_p << 2 ) ] += b_b [ ( i_p << 2 ) + 2 ] * b_a [ i + 8 ] ;
b_a_p [ i + ( i_p << 2 ) ] += b_b [ ( i_p << 2 ) + 3 ] * b_a [ i + 12 ] ; } }
res [ 0 ] = 1.0 - theta0 * theta0 * 2.0 ; res [ 4 ] = ( 0.0 * theta0 - 0.0 *
c_x ) * 2.0 ; res [ 8 ] = theta0 * c_x * 2.0 ; res [ 12 ] = 0.0 ; res [ 1 ] =
( 0.0 * theta0 + 0.0 * c_x ) * 2.0 ; res [ 5 ] = 1.0 ; res [ 9 ] = ( theta0 *
0.0 - 0.0 * c_x ) * 2.0 ; res [ 13 ] = 0.0 ; res [ 2 ] = ( 0.0 - theta0 * c_x
) * 2.0 ; res [ 6 ] = ( theta0 * 0.0 + 0.0 * c_x ) * 2.0 ; res [ 10 ] = 1.0 -
theta0 * theta0 * 2.0 ; res [ 14 ] = 0.0 ; res [ 3 ] = 0.0 ; res [ 7 ] = 0.0
; res [ 11 ] = 0.0 ; res [ 15 ] = 1.0 ; for ( i = 0 ; i < 4 ; i ++ ) { for (
i_p = 0 ; i_p < 4 ; i_p ++ ) { b_a [ i + ( i_p << 2 ) ] = 0.0 ; b_a [ i + (
i_p << 2 ) ] += res [ i_p << 2 ] * b_a_p [ i ] ; b_a [ i + ( i_p << 2 ) ] +=
res [ ( i_p << 2 ) + 1 ] * b_a_p [ i + 4 ] ; b_a [ i + ( i_p << 2 ) ] += res
[ ( i_p << 2 ) + 2 ] * b_a_p [ i + 8 ] ; b_a [ i + ( i_p << 2 ) ] += res [ (
i_p << 2 ) + 3 ] * b_a_p [ i + 12 ] ; } for ( i_p = 0 ; i_p < 4 ; i_p ++ ) {
b_a_e [ i + ( i_p << 2 ) ] = 0.0 ; b_a_e [ i + ( i_p << 2 ) ] += b [ i_p << 2
] * b_a [ i ] ; b_a_e [ i + ( i_p << 2 ) ] += b [ ( i_p << 2 ) + 1 ] * b_a [
i + 4 ] ; b_a_e [ i + ( i_p << 2 ) ] += b [ ( i_p << 2 ) + 2 ] * b_a [ i + 8
] ; b_a_e [ i + ( i_p << 2 ) ] += b [ ( i_p << 2 ) + 3 ] * b_a [ i + 12 ] ; }
} fxnkqpuvi4 ( b_a_e , & unusedU6 , & unusedU7 , & unusedU8 , & unusedU9 , &
c_x , & theta0 , & z ) ; fxnkqpuvi4 ( obj_objfun_tunableEnvironment -> f1 , &
unusedU6 , & unusedU7 , & unusedU8 , & unusedU9 , & Ax , & Ay , & Az ) ; c_x
-= Ax ; * fplus = c_x * c_x ; c_x = theta0 - Ay ; theta0 = c_x * c_x ; c_x =
z - Az ; * fplus += theta0 ; * fplus += c_x * c_x ; evalOK = ( ( !
muDoubleScalarIsInf ( * fplus ) ) && ( ! muDoubleScalarIsNaN ( * fplus ) ) )
; if ( evalOK ) { c_x = ( ( ( xk [ 0 ] * xk [ 0 ] + xk [ 1 ] * xk [ 1 ] ) +
xk [ 2 ] * xk [ 2 ] ) + xk [ 3 ] * xk [ 3 ] ) - 1.0 ; * cEqPlus = c_x ;
evalOK = ( ( ! muDoubleScalarIsInf ( c_x ) ) && ( ! muDoubleScalarIsNaN ( c_x
) ) ) ; xk [ dim - 1 ] = temp ; } return evalOK ; } static boolean_T
ap1uxguxor ( hbctg4nwcl * obj , real_T fCurrent , real_T cEqCurrent , real_T
xk [ 5 ] , real_T gradf [ 8 ] , real_T JacCeqTrans [ 8 ] ) { boolean_T evalOK
; real_T deltaX ; real_T b ; real_T d ; int32_T idx ; boolean_T exitg1 ;
boolean_T guard1 = false ; evalOK = true ; obj -> numEvals = 0 ; idx = 0 ;
exitg1 = false ; while ( ( ! exitg1 ) && ( idx < 5 ) ) { deltaX = ( 1.0 - (
real_T ) ( xk [ idx ] < 0.0 ) * 2.0 ) * 1.4901161193847656E-8 *
muDoubleScalarMax ( muDoubleScalarAbs ( xk [ idx ] ) , 1.0 ) ; b = obj -> f_1
; d = obj -> cEq_1 ; evalOK = hl1l1m0sqe ( & obj -> objfun .
tunableEnvironment , & b , & d , idx + 1 , deltaX , xk ) ; obj -> f_1 = b ;
obj -> cEq_1 = d ; obj -> numEvals ++ ; guard1 = false ; if ( ! evalOK ) {
deltaX = - deltaX ; evalOK = hl1l1m0sqe ( & obj -> objfun .
tunableEnvironment , & b , & d , idx + 1 , deltaX , xk ) ; obj -> f_1 = b ;
obj -> cEq_1 = d ; obj -> numEvals ++ ; if ( ! evalOK ) { exitg1 = true ; }
else { guard1 = true ; } } else { guard1 = true ; } if ( guard1 ) { gradf [
idx ] = ( obj -> f_1 - fCurrent ) / deltaX ; JacCeqTrans [ idx ] = ( obj ->
cEq_1 - cEqCurrent ) / deltaX ; idx ++ ; } } return evalOK ; } static void
jy0zmqim5j ( kdxyjsixti * WorkingSet , real_T cEq ) { int32_T i ; WorkingSet
-> beq = - cEq ; WorkingSet -> bwset [ 0 ] = - cEq ; for ( i = 0 ; i < 5 ; i
++ ) { WorkingSet -> ATwset [ i ] = WorkingSet -> Aeq [ i ] ; } } static void
iwnxlinhde ( kdxyjsixti * obj ) { int32_T idx ; obj -> Aeq [ obj -> nVar - 1
] = 0.0 ; obj -> ATwset [ obj -> nVar - 1 ] = 0.0 ; obj -> indexLB [ obj ->
sizes [ 3 ] - 1 ] = obj -> nVar ; obj -> lb [ obj -> nVar - 1 ] = 1.0E-5 ;
for ( idx = 2 ; idx <= obj -> nActiveConstr ; idx ++ ) { obj -> ATwset [ (
obj -> nVar + ( ( idx - 1 ) << 3 ) ) - 1 ] = - 1.0 ; } } static void
gzr1v3zdr1 ( kdxyjsixti * obj , int32_T PROBLEM_TYPE ) { int32_T idx_lb ;
int32_T idx ; switch ( PROBLEM_TYPE ) { case 3 : obj -> nVar = 5 ; obj ->
mConstr = 1 ; for ( idx = 0 ; idx < 5 ; idx ++ ) { obj -> sizes [ idx ] = obj
-> sizesNormal [ idx ] ; } for ( idx = 0 ; idx < 6 ; idx ++ ) { obj ->
isActiveIdx [ idx ] = obj -> isActiveIdxNormal [ idx ] ; } break ; case 1 :
obj -> nVar = 6 ; obj -> mConstr = 2 ; for ( idx = 0 ; idx < 5 ; idx ++ ) {
obj -> sizes [ idx ] = obj -> sizesPhaseOne [ idx ] ; } for ( idx = 0 ; idx <
6 ; idx ++ ) { obj -> isActiveIdx [ idx ] = obj -> isActiveIdxPhaseOne [ idx
] ; } iwnxlinhde ( obj ) ; break ; case 2 : obj -> nVar = 7 ; obj -> mConstr
= 3 ; for ( idx = 0 ; idx < 5 ; idx ++ ) { obj -> sizes [ idx ] = obj ->
sizesRegularized [ idx ] ; } for ( idx = 0 ; idx < 6 ; idx ++ ) { obj ->
isActiveIdx [ idx ] = obj -> isActiveIdxRegularized [ idx ] ; } if ( obj ->
probType != 4 ) { obj -> Aeq [ 5 ] = - 1.0 ; obj -> ATwset [ 5 ] = - 1.0 ;
obj -> Aeq [ 6 ] = 1.0 ; obj -> ATwset [ 6 ] = 1.0 ; obj -> indexLB [ 0 ] = 6
; obj -> lb [ 5 ] = 0.0 ; obj -> indexLB [ 1 ] = 7 ; obj -> lb [ 6 ] = 0.0 ;
for ( idx = 1 ; idx < obj -> nActiveConstr ; idx ++ ) { if ( obj -> Wid [ idx
] == 3 ) { for ( idx_lb = 6 ; idx_lb <= obj -> Wlocalidx [ idx ] + 4 ; idx_lb
++ ) { obj -> ATwset [ ( idx_lb + ( idx << 3 ) ) - 1 ] = 0.0 ; } obj ->
ATwset [ ( obj -> Wlocalidx [ idx ] + ( idx << 3 ) ) + 4 ] = - 1.0 ; for (
idx_lb = obj -> Wlocalidx [ idx ] + 5 ; idx_lb + 1 < 8 ; idx_lb ++ ) { obj ->
ATwset [ idx_lb + ( idx << 3 ) ] = 0.0 ; } } else { obj -> ATwset [ ( idx <<
3 ) + 5 ] = 0.0 ; obj -> ATwset [ ( idx << 3 ) + 6 ] = 0.0 ; } } } break ;
default : obj -> nVar = 8 ; obj -> mConstr = 4 ; for ( idx = 0 ; idx < 5 ;
idx ++ ) { obj -> sizes [ idx ] = obj -> sizesRegPhaseOne [ idx ] ; } for (
idx = 0 ; idx < 6 ; idx ++ ) { obj -> isActiveIdx [ idx ] = obj ->
isActiveIdxRegPhaseOne [ idx ] ; } iwnxlinhde ( obj ) ; break ; } obj ->
probType = PROBLEM_TYPE ; } static void oml1j5lmqr ( kdxyjsixti * obj ) {
int32_T idx ; gzr1v3zdr1 ( obj , 3 ) ; obj -> isActiveConstr [ 1 ] = false ;
obj -> isActiveConstr [ 2 ] = false ; obj -> isActiveConstr [ 3 ] = false ;
obj -> nWConstr [ 0 ] = 0 ; obj -> nWConstr [ 1 ] = 1 ; obj -> nWConstr [ 2 ]
= 0 ; obj -> nWConstr [ 3 ] = 0 ; obj -> nWConstr [ 4 ] = 0 ; obj ->
nActiveConstr = 1 ; obj -> Wid [ 0 ] = 2 ; obj -> Wlocalidx [ 0 ] = 1 ; obj
-> isActiveConstr [ 0 ] = true ; for ( idx = 0 ; idx < obj -> nVar ; idx ++ )
{ obj -> ATwset [ idx ] = obj -> Aeq [ idx ] ; } obj -> bwset [ 0 ] = obj ->
beq ; } static void p32d0btmmxzp ( real_T fval , real_T Ceq_workspace ,
kthfgfhdov * obj ) { obj -> penaltyParam = 1.0 ; obj -> threshold = 0.0001 ;
obj -> nPenaltyDecreases = 0 ; obj -> linearizedConstrViol = 0.0 ; obj ->
initFval = fval ; obj -> initConstrViolationEq = muDoubleScalarAbs (
Ceq_workspace ) ; obj -> initConstrViolationIneq = 0.0 ; obj -> phi = 0.0 ;
obj -> phiPrimePlus = 0.0 ; obj -> phiFullStep = 0.0 ; obj ->
feasRelativeFactor = 0.0 ; obj -> nlpPrimalFeasError = 0.0 ; obj ->
nlpDualFeasError = 0.0 ; obj -> nlpComplError = 0.0 ; obj -> firstOrderOpt =
0.0 ; obj -> hasObjective = true ; } static void e5dhnhf4mf ( real_T
workspace [ 8 ] , int32_T nVar , const real_T grad [ 8 ] , const real_T
AeqTrans [ 8 ] , const int32_T finiteLB [ 8 ] , int32_T mLB , const real_T
lambda [ 4 ] ) { int32_T iy ; int32_T ia ; for ( iy = 0 ; iy < nVar ; iy ++ )
{ workspace [ iy ] = grad [ iy ] ; } iy = 0 ; for ( ia = 1 ; ia <= nVar ; ia
++ ) { workspace [ iy ] += AeqTrans [ ia - 1 ] * lambda [ 0 ] ; iy ++ ; } iy
= 1 ; for ( ia = 0 ; ia < mLB ; ia ++ ) { workspace [ finiteLB [ ia ] - 1 ]
-= lambda [ iy ] ; iy ++ ; } } static real_T i23ur3ytsf ( real_T cEq ) {
return muDoubleScalarMax ( 0.0 , muDoubleScalarAbs ( cEq ) ) ; } static void
g0gqo0cxgu ( int32_T nVar , const real_T gradLag [ 8 ] , boolean_T * gradOK ,
real_T * val ) { int32_T b_idx ; boolean_T exitg1 ; * gradOK = true ; * val =
0.0 ; b_idx = 0 ; exitg1 = false ; while ( ( ! exitg1 ) && ( b_idx <= nVar -
1 ) ) { * gradOK = ( ( ! muDoubleScalarIsInf ( gradLag [ b_idx ] ) ) && ( !
muDoubleScalarIsNaN ( gradLag [ b_idx ] ) ) ) ; if ( ! * gradOK ) { exitg1 =
true ; } else { * val = muDoubleScalarMax ( * val , muDoubleScalarAbs (
gradLag [ b_idx ] ) ) ; b_idx ++ ; } } } static int32_T cdcikb5kmw ( int32_T
n , const real_T x [ 8 ] ) { int32_T idxmax ; int32_T ix ; real_T smax ;
int32_T k ; real_T y ; if ( n < 1 ) { idxmax = 0 ; } else { idxmax = 1 ; if (
n > 1 ) { ix = 0 ; smax = muDoubleScalarAbs ( x [ 0 ] ) ; for ( k = 2 ; k <=
n ; k ++ ) { ix ++ ; y = muDoubleScalarAbs ( x [ ix ] ) ; if ( y > smax ) {
idxmax = k ; smax = y ; } } } } return idxmax ; } static void mxnuuti0th (
kthfgfhdov * MeritFunction , const kdxyjsixti * WorkingSet , fovverijux *
TrialState , boolean_T * Flags_gradOK , boolean_T * Flags_fevalOK , boolean_T
* Flags_done , boolean_T * Flags_stepAccepted , boolean_T *
Flags_failedLineSearch , int32_T * Flags_stepType ) { real_T
optimRelativeFactor ; boolean_T isFeasible ; real_T c ; int32_T b_k ; *
Flags_fevalOK = true ; * Flags_stepAccepted = false ; *
Flags_failedLineSearch = false ; * Flags_stepType = 1 ; e5dhnhf4mf (
TrialState -> gradLag , WorkingSet -> nVar , TrialState -> grad , WorkingSet
-> Aeq , WorkingSet -> indexLB , WorkingSet -> sizes [ 3 ] , TrialState ->
lambdasqp ) ; optimRelativeFactor = muDoubleScalarMax ( 1.0 ,
muDoubleScalarAbs ( TrialState -> grad [ cdcikb5kmw ( WorkingSet -> nVar ,
TrialState -> grad ) - 1 ] ) ) ; if ( muDoubleScalarIsInf (
optimRelativeFactor ) ) { optimRelativeFactor = 1.0 ; } MeritFunction ->
nlpPrimalFeasError = i23ur3ytsf ( TrialState -> cEq ) ; MeritFunction ->
feasRelativeFactor = 1.0 ; isFeasible = ( MeritFunction -> nlpPrimalFeasError
<= 1.0E-6 ) ; g0gqo0cxgu ( WorkingSet -> nVar , TrialState -> gradLag ,
Flags_gradOK , & c ) ; MeritFunction -> nlpDualFeasError = c ; if ( ! *
Flags_gradOK ) { * Flags_done = true ; if ( isFeasible ) { TrialState ->
sqpExitFlag = 2 ; } else { TrialState -> sqpExitFlag = - 2 ; } } else {
MeritFunction -> nlpComplError = 0.0 ; MeritFunction -> firstOrderOpt =
muDoubleScalarMax ( c , 0.0 ) ; for ( b_k = 0 ; b_k <= WorkingSet -> sizes [
3 ] ; b_k ++ ) { TrialState -> lambdasqp_old [ b_k ] = TrialState ->
lambdasqp [ b_k ] ; } if ( isFeasible && ( c <= 1.0E-10 * optimRelativeFactor
) ) { * Flags_done = true ; TrialState -> sqpExitFlag = 1 ; } else { *
Flags_done = false ; if ( isFeasible && ( TrialState -> sqpFval < - 1.0E+20 )
) { * Flags_done = true ; TrialState -> sqpExitFlag = - 3 ; } else { if (
TrialState -> FunctionEvaluations >= 500 ) { * Flags_done = true ; TrialState
-> sqpExitFlag = 0 ; } } } } } static void cct5ezbgkv ( fovverijux * obj ,
int32_T nVar , const real_T JacCeqTrans [ 8 ] ) { int32_T b_k ; for ( b_k = 0
; b_k < nVar ; b_k ++ ) { obj -> JacCeqTrans_old [ b_k ] = JacCeqTrans [ b_k
] ; } } static void oabtqrotmy ( fovverijux * obj ) { int32_T k ; obj ->
sqpFval_old = obj -> sqpFval ; for ( k = 0 ; k < 5 ; k ++ ) { obj ->
xstarsqp_old [ k ] = obj -> xstarsqp [ k ] ; obj -> grad_old [ k ] = obj ->
grad [ k ] ; } obj -> cEq_old = obj -> cEq ; } static void k1vu0y3nbu (
fovverijux * obj ) { int32_T k ; obj -> sqpFval = obj -> sqpFval_old ; for (
k = 0 ; k < 5 ; k ++ ) { obj -> xstarsqp [ k ] = obj -> xstarsqp_old [ k ] ;
} obj -> cEq = obj -> cEq_old ; } static void e5dhnhf4mfm ( real_T workspace
[ 64 ] , int32_T nVar , const real_T grad [ 8 ] , const real_T AeqTrans [ 8 ]
, const int32_T finiteLB [ 8 ] , int32_T mLB , const real_T lambda [ 4 ] ) {
int32_T iy ; int32_T ia ; for ( iy = 0 ; iy < nVar ; iy ++ ) { workspace [ iy
] = grad [ iy ] ; } iy = 0 ; for ( ia = 1 ; ia <= nVar ; ia ++ ) { workspace
[ iy ] += AeqTrans [ ia - 1 ] * lambda [ 0 ] ; iy ++ ; } iy = 1 ; for ( ia =
0 ; ia < mLB ; ia ++ ) { workspace [ finiteLB [ ia ] - 1 ] -= lambda [ iy ] ;
iy ++ ; } } static void g0gqo0cxgut ( int32_T nVar , const real_T gradLag [
64 ] , boolean_T * gradOK , real_T * val ) { int32_T b_idx ; boolean_T exitg1
; * gradOK = true ; * val = 0.0 ; b_idx = 0 ; exitg1 = false ; while ( ( !
exitg1 ) && ( b_idx <= nVar - 1 ) ) { * gradOK = ( ( ! muDoubleScalarIsInf (
gradLag [ b_idx ] ) ) && ( ! muDoubleScalarIsNaN ( gradLag [ b_idx ] ) ) ) ;
if ( ! * gradOK ) { exitg1 = true ; } else { * val = muDoubleScalarMax ( *
val , muDoubleScalarAbs ( gradLag [ b_idx ] ) ) ; b_idx ++ ; } } } static
void jy0zmqim5jn ( kdxyjsixti * WorkingSet , real_T cEq ) { int32_T i ;
WorkingSet -> beq = - cEq ; WorkingSet -> bwset [ 0 ] = - cEq ; for ( i = 0 ;
i < WorkingSet -> nVar ; i ++ ) { WorkingSet -> ATwset [ i ] = WorkingSet ->
Aeq [ i ] ; } if ( WorkingSet -> nActiveConstr > 1 ) { for ( i = 1 ; i <
WorkingSet -> nActiveConstr ; i ++ ) { switch ( WorkingSet -> Wid [ i ] ) {
case 4 : WorkingSet -> bwset [ i ] = WorkingSet -> lb [ WorkingSet ->
Wlocalidx [ i ] - 1 ] ; break ; case 5 : WorkingSet -> bwset [ i ] = 0.0 ;
break ; } } } } static real_T hi3mqzewxv ( int32_T n , const real_T x [ 64 ]
, int32_T ix0 ) { real_T y ; real_T scale ; int32_T kend ; real_T absxk ;
real_T t ; int32_T k ; y = 0.0 ; if ( n >= 1 ) { if ( n == 1 ) { y =
muDoubleScalarAbs ( x [ ix0 - 1 ] ) ; } else { scale =
3.3121686421112381E-170 ; kend = ( ix0 + n ) - 1 ; for ( k = ix0 ; k <= kend
; k ++ ) { absxk = muDoubleScalarAbs ( x [ k - 1 ] ) ; if ( absxk > scale ) {
t = scale / absxk ; y = y * t * t + 1.0 ; scale = absxk ; } else { t = absxk
/ scale ; y += t * t ; } } y = scale * muDoubleScalarSqrt ( y ) ; } } return
y ; } static real_T kcluehrwfu ( int32_T n , real_T * alpha1 , real_T x [ 64
] , int32_T ix0 ) { real_T tau ; real_T xnorm ; int32_T knt ; int32_T b_k ;
int32_T c_k ; tau = 0.0 ; if ( n > 0 ) { xnorm = hi3mqzewxv ( n - 1 , x , ix0
) ; if ( xnorm != 0.0 ) { xnorm = muDoubleScalarHypot ( * alpha1 , xnorm ) ;
if ( * alpha1 >= 0.0 ) { xnorm = - xnorm ; } if ( muDoubleScalarAbs ( xnorm )
< 1.0020841800044864E-292 ) { knt = - 1 ; b_k = ( ix0 + n ) - 2 ; do { knt ++
; for ( c_k = ix0 ; c_k <= b_k ; c_k ++ ) { x [ c_k - 1 ] *=
9.9792015476736E+291 ; } xnorm *= 9.9792015476736E+291 ; * alpha1 *=
9.9792015476736E+291 ; } while ( ! ( muDoubleScalarAbs ( xnorm ) >=
1.0020841800044864E-292 ) ) ; xnorm = muDoubleScalarHypot ( * alpha1 ,
hi3mqzewxv ( n - 1 , x , ix0 ) ) ; if ( * alpha1 >= 0.0 ) { xnorm = - xnorm ;
} tau = ( xnorm - * alpha1 ) / xnorm ; * alpha1 = 1.0 / ( * alpha1 - xnorm )
; for ( c_k = ix0 ; c_k <= b_k ; c_k ++ ) { x [ c_k - 1 ] *= * alpha1 ; } for
( b_k = 0 ; b_k <= knt ; b_k ++ ) { xnorm *= 1.0020841800044864E-292 ; } *
alpha1 = xnorm ; } else { tau = ( xnorm - * alpha1 ) / xnorm ; * alpha1 = 1.0
/ ( * alpha1 - xnorm ) ; knt = ( ix0 + n ) - 2 ; for ( b_k = ix0 ; b_k <= knt
; b_k ++ ) { x [ b_k - 1 ] *= * alpha1 ; } * alpha1 = xnorm ; } } } return
tau ; } static void ir3j1p5nly ( int32_T m , int32_T n , int32_T iv0 , real_T
tau , real_T C [ 64 ] , int32_T ic0 , real_T work [ 8 ] ) { int32_T lastv ;
int32_T lastc ; int32_T coltop ; int32_T ix ; real_T c ; int32_T iac ;
int32_T d ; int32_T b_ia ; int32_T jy ; int32_T exitg1 ; boolean_T exitg2 ;
if ( tau != 0.0 ) { lastv = m ; lastc = iv0 + m ; while ( ( lastv > 0 ) && (
C [ lastc - 2 ] == 0.0 ) ) { lastv -- ; lastc -- ; } lastc = n - 1 ; exitg2 =
false ; while ( ( ! exitg2 ) && ( lastc + 1 > 0 ) ) { coltop = ( lastc << 3 )
+ ic0 ; jy = coltop ; do { exitg1 = 0 ; if ( jy <= ( coltop + lastv ) - 1 ) {
if ( C [ jy - 1 ] != 0.0 ) { exitg1 = 1 ; } else { jy ++ ; } } else { lastc
-- ; exitg1 = 2 ; } } while ( exitg1 == 0 ) ; if ( exitg1 == 1 ) { exitg2 =
true ; } } } else { lastv = 0 ; lastc = - 1 ; } if ( lastv > 0 ) { if ( lastc
+ 1 != 0 ) { for ( coltop = 0 ; coltop <= lastc ; coltop ++ ) { work [ coltop
] = 0.0 ; } coltop = 0 ; jy = ( lastc << 3 ) + ic0 ; for ( iac = ic0 ; iac <=
jy ; iac += 8 ) { ix = iv0 ; c = 0.0 ; d = ( iac + lastv ) - 1 ; for ( b_ia =
iac ; b_ia <= d ; b_ia ++ ) { c += C [ b_ia - 1 ] * C [ ix - 1 ] ; ix ++ ; }
work [ coltop ] += c ; coltop ++ ; } } if ( ! ( - tau == 0.0 ) ) { coltop =
ic0 - 1 ; jy = 0 ; for ( iac = 0 ; iac <= lastc ; iac ++ ) { if ( work [ jy ]
!= 0.0 ) { c = work [ jy ] * - tau ; ix = iv0 ; d = lastv + coltop ; for (
b_ia = coltop ; b_ia < d ; b_ia ++ ) { C [ b_ia ] += C [ ix - 1 ] * c ; ix ++
; } } jy ++ ; coltop += 8 ; } } } } static void l0lnfjcq5z ( real_T A [ 64 ]
, int32_T m , int32_T n , int32_T nfxd , real_T tau [ 8 ] ) { real_T work [ 8
] ; int32_T ii ; int32_T mmi ; real_T b_atmp ; int32_T i ; memset ( & work [
0 ] , 0 , sizeof ( real_T ) << 3U ) ; for ( i = 0 ; i < nfxd ; i ++ ) { ii =
( i << 3 ) + i ; mmi = m - i ; if ( i + 1 < m ) { b_atmp = A [ ii ] ; tau [ i
] = kcluehrwfu ( mmi , & b_atmp , A , ii + 2 ) ; A [ ii ] = b_atmp ; } else {
tau [ i ] = 0.0 ; } if ( i + 1 < n ) { b_atmp = A [ ii ] ; A [ ii ] = 1.0 ;
ir3j1p5nly ( mmi , ( n - i ) - 1 , ii + 1 , tau [ i ] , A , ii + 9 , work ) ;
A [ ii ] = b_atmp ; } } } static void ixl3w5wjmi ( real_T A [ 64 ] , int32_T
m , int32_T n , int32_T jpvt [ 8 ] , real_T tau [ 8 ] ) { int32_T minmn ;
int32_T nfxd ; real_T work [ 8 ] ; real_T vn1 [ 8 ] ; real_T vn2 [ 8 ] ;
int32_T ii ; int32_T nmi ; int32_T mmi ; int32_T pvt ; real_T temp2 ; int32_T
b_ix ; real_T smax ; int32_T b_iy ; int32_T c_k ; minmn =
muIntScalarMin_sint32 ( m , n ) ; memset ( & tau [ 0 ] , 0 , sizeof ( real_T
) << 3U ) ; if ( minmn < 1 ) { for ( nfxd = 0 ; nfxd < n ; nfxd ++ ) { jpvt [
nfxd ] = nfxd + 1 ; } } else { nfxd = - 1 ; for ( mmi = 0 ; mmi < n ; mmi ++
) { if ( jpvt [ mmi ] != 0 ) { nfxd ++ ; if ( mmi + 1 != nfxd + 1 ) { nmi =
mmi << 3 ; pvt = nfxd << 3 ; for ( b_ix = 0 ; b_ix < m ; b_ix ++ ) { smax = A
[ nmi ] ; A [ nmi ] = A [ pvt ] ; A [ pvt ] = smax ; nmi ++ ; pvt ++ ; } jpvt
[ mmi ] = jpvt [ nfxd ] ; jpvt [ nfxd ] = mmi + 1 ; } else { jpvt [ mmi ] =
mmi + 1 ; } } else { jpvt [ mmi ] = mmi + 1 ; } } nfxd ++ ; nfxd =
muIntScalarMin_sint32 ( nfxd , minmn ) ; l0lnfjcq5z ( A , m , n , nfxd , tau
) ; if ( nfxd < minmn ) { memset ( & work [ 0 ] , 0 , sizeof ( real_T ) << 3U
) ; memset ( & vn1 [ 0 ] , 0 , sizeof ( real_T ) << 3U ) ; memset ( & vn2 [ 0
] , 0 , sizeof ( real_T ) << 3U ) ; for ( mmi = nfxd ; mmi < n ; mmi ++ ) {
vn1 [ mmi ] = hi3mqzewxv ( m - nfxd , A , ( ( mmi << 3 ) + nfxd ) + 1 ) ; vn2
[ mmi ] = vn1 [ mmi ] ; } while ( nfxd + 1 <= minmn ) { ii = ( nfxd << 3 ) +
nfxd ; nmi = n - nfxd ; mmi = m - nfxd ; if ( nmi < 1 ) { pvt = - 1 ; } else
{ pvt = 0 ; if ( nmi > 1 ) { b_ix = nfxd ; smax = muDoubleScalarAbs ( vn1 [
nfxd ] ) ; for ( b_iy = 2 ; b_iy <= nmi ; b_iy ++ ) { b_ix ++ ; temp2 =
muDoubleScalarAbs ( vn1 [ b_ix ] ) ; if ( temp2 > smax ) { pvt = b_iy - 1 ;
smax = temp2 ; } } } } pvt += nfxd ; if ( pvt + 1 != nfxd + 1 ) { b_ix = pvt
<< 3 ; b_iy = nfxd << 3 ; for ( c_k = 0 ; c_k < m ; c_k ++ ) { smax = A [
b_ix ] ; A [ b_ix ] = A [ b_iy ] ; A [ b_iy ] = smax ; b_ix ++ ; b_iy ++ ; }
b_ix = jpvt [ pvt ] ; jpvt [ pvt ] = jpvt [ nfxd ] ; jpvt [ nfxd ] = b_ix ;
vn1 [ pvt ] = vn1 [ nfxd ] ; vn2 [ pvt ] = vn2 [ nfxd ] ; } if ( nfxd + 1 < m
) { smax = A [ ii ] ; tau [ nfxd ] = kcluehrwfu ( mmi , & smax , A , ii + 2 )
; A [ ii ] = smax ; } else { tau [ nfxd ] = 0.0 ; } if ( nfxd + 1 < n ) {
smax = A [ ii ] ; A [ ii ] = 1.0 ; ir3j1p5nly ( mmi , nmi - 1 , ii + 1 , tau
[ nfxd ] , A , ii + 9 , work ) ; A [ ii ] = smax ; } for ( ii = nfxd + 1 ; ii
< n ; ii ++ ) { nmi = ( ii << 3 ) + nfxd ; if ( vn1 [ ii ] != 0.0 ) { smax =
muDoubleScalarAbs ( A [ nmi ] ) / vn1 [ ii ] ; smax = 1.0 - smax * smax ; if
( smax < 0.0 ) { smax = 0.0 ; } temp2 = vn1 [ ii ] / vn2 [ ii ] ; temp2 =
temp2 * temp2 * smax ; if ( temp2 <= 1.4901161193847656E-8 ) { if ( nfxd + 1
< m ) { vn1 [ ii ] = hi3mqzewxv ( mmi - 1 , A , nmi + 2 ) ; vn2 [ ii ] = vn1
[ ii ] ; } else { vn1 [ ii ] = 0.0 ; vn2 [ ii ] = 0.0 ; } } else { vn1 [ ii ]
*= muDoubleScalarSqrt ( smax ) ; } } } nfxd ++ ; } } } } static void
j443bj1hxc ( dzrlw5sxs5 * obj , const real_T A [ 32 ] , int32_T mrows ,
int32_T ncols ) { int32_T iA0 ; int32_T iQR0 ; real_T b [ 64 ] ; real_T c [ 8
] ; int32_T d [ 8 ] ; int32_T k ; int32_T i ; boolean_T guard1 = false ;
guard1 = false ; if ( mrows * ncols > 0 ) { for ( i = 0 ; i < ncols ; i ++ )
{ iA0 = i << 3 ; iQR0 = i << 3 ; for ( k = 1 ; k - 1 < mrows ; k ++ ) { obj
-> QR [ ( iQR0 + k ) - 1 ] = A [ ( iA0 + k ) - 1 ] ; } } guard1 = true ; }
else if ( mrows * ncols == 0 ) { obj -> mrows = mrows ; obj -> ncols = ncols
; obj -> minRowCol = 0 ; } else { guard1 = true ; } if ( guard1 ) { obj ->
usedPivoting = true ; obj -> mrows = mrows ; obj -> ncols = ncols ; obj ->
minRowCol = muIntScalarMin_sint32 ( mrows , ncols ) ; memcpy ( & b [ 0 ] , &
obj -> QR [ 0 ] , sizeof ( real_T ) << 6U ) ; for ( i = 0 ; i < 8 ; i ++ ) {
d [ i ] = obj -> jpvt [ i ] ; } ixl3w5wjmi ( b , mrows , ncols , d , c ) ;
memcpy ( & obj -> QR [ 0 ] , & b [ 0 ] , sizeof ( real_T ) << 6U ) ; memcpy (
& obj -> tau [ 0 ] , & c [ 0 ] , sizeof ( real_T ) << 3U ) ; for ( i = 0 ; i
< 8 ; i ++ ) { obj -> jpvt [ i ] = d [ i ] ; } } } static void dj14ojmbav (
dzrlw5sxs5 * obj , int32_T nrows ) { int32_T idx ; int32_T i ; int32_T itau ;
real_T work [ 8 ] ; int32_T iaii ; real_T A [ 64 ] ; int32_T lastv ; int32_T
lastc ; int32_T coltop ; int32_T ix ; real_T c_c ; int32_T iac ; int32_T e ;
int32_T b_ia ; int32_T jy ; int32_T exitg1 ; boolean_T exitg2 ; for ( idx = 0
; idx < obj -> minRowCol ; idx ++ ) { itau = ( idx << 3 ) + idx ; i = obj ->
mrows - idx ; for ( iaii = 1 ; iaii - 1 <= i - 2 ; iaii ++ ) { obj -> Q [
itau + iaii ] = obj -> QR [ itau + iaii ] ; } } idx = obj -> mrows ; if (
nrows >= 1 ) { for ( itau = obj -> minRowCol ; itau < nrows ; itau ++ ) { i =
itau << 3 ; for ( iaii = 0 ; iaii < idx ; iaii ++ ) { obj -> Q [ i + iaii ] =
0.0 ; } obj -> Q [ i + itau ] = 1.0 ; } itau = obj -> minRowCol - 1 ; memset
( & work [ 0 ] , 0 , sizeof ( real_T ) << 3U ) ; for ( i = obj -> minRowCol ;
i >= 1 ; i -- ) { iaii = ( ( i - 1 ) << 3 ) + i ; if ( i < nrows ) { obj -> Q
[ iaii - 1 ] = 1.0 ; lastv = idx - i ; memcpy ( & A [ 0 ] , & obj -> Q [ 0 ]
, sizeof ( real_T ) << 6U ) ; if ( obj -> tau [ itau ] != 0.0 ) { lastc =
iaii + lastv ; while ( ( lastv + 1 > 0 ) && ( obj -> Q [ lastc - 1 ] == 0.0 )
) { lastv -- ; lastc -- ; } lastc = ( nrows - i ) - 1 ; exitg2 = false ;
while ( ( ! exitg2 ) && ( lastc + 1 > 0 ) ) { coltop = ( ( lastc << 3 ) +
iaii ) + 8 ; jy = coltop ; do { exitg1 = 0 ; if ( jy <= coltop + lastv ) { if
( obj -> Q [ jy - 1 ] != 0.0 ) { exitg1 = 1 ; } else { jy ++ ; } } else {
lastc -- ; exitg1 = 2 ; } } while ( exitg1 == 0 ) ; if ( exitg1 == 1 ) {
exitg2 = true ; } } } else { lastv = - 1 ; lastc = - 1 ; } if ( lastv + 1 > 0
) { if ( lastc + 1 != 0 ) { for ( coltop = 0 ; coltop <= lastc ; coltop ++ )
{ work [ coltop ] = 0.0 ; } coltop = 0 ; jy = ( ( lastc << 3 ) + iaii ) + 8 ;
for ( iac = iaii + 8 ; iac <= jy ; iac += 8 ) { ix = iaii ; c_c = 0.0 ; e =
iac + lastv ; for ( b_ia = iac ; b_ia <= e ; b_ia ++ ) { c_c += obj -> Q [
b_ia - 1 ] * obj -> Q [ ix - 1 ] ; ix ++ ; } work [ coltop ] += c_c ; coltop
++ ; } } if ( ! ( - obj -> tau [ itau ] == 0.0 ) ) { coltop = iaii + 7 ; jy =
0 ; for ( iac = 0 ; iac <= lastc ; iac ++ ) { if ( work [ jy ] != 0.0 ) { c_c
= work [ jy ] * - obj -> tau [ itau ] ; ix = iaii ; e = lastv + coltop ; for
( b_ia = coltop ; b_ia < e + 1 ; b_ia ++ ) { A [ b_ia ] += A [ ix - 1 ] * c_c
; ix ++ ; } } jy ++ ; coltop += 8 ; } } } memcpy ( & obj -> Q [ 0 ] , & A [ 0
] , sizeof ( real_T ) << 6U ) ; } if ( i < idx ) { lastv = ( iaii + idx ) - i
; for ( lastc = iaii ; lastc < lastv ; lastc ++ ) { obj -> Q [ lastc ] *= -
obj -> tau [ itau ] ; } } obj -> Q [ iaii - 1 ] = 1.0 - obj -> tau [ itau ] ;
for ( lastv = 0 ; lastv <= i - 2 ; lastv ++ ) { obj -> Q [ ( iaii - lastv ) -
2 ] = 0.0 ; } itau -- ; } } } static void kn3nzhqflf ( int32_T m , int32_T n
, const real_T A [ 64 ] , const real_T x [ 8 ] , real_T y [ 64 ] ) { int32_T
ix ; real_T c ; int32_T b_iy ; int32_T iac ; int32_T b ; int32_T ia ; int32_T
b_c ; if ( m != 0 ) { for ( b_iy = 0 ; b_iy < n ; b_iy ++ ) { y [ b_iy ] =
0.0 ; } b_iy = 0 ; b_c = ( n - 1 ) << 3 ; for ( iac = 1 ; iac <= b_c + 1 ;
iac += 8 ) { ix = 0 ; c = 0.0 ; b = ( iac + m ) - 1 ; for ( ia = iac ; ia <=
b ; ia ++ ) { c += A [ ia - 1 ] * x [ ix ] ; ix ++ ; } y [ b_iy ] += c ; b_iy
++ ; } } } static void clax1tb0ex ( int32_T n , const real_T A [ 64 ] ,
real_T x [ 64 ] ) { int32_T jjA ; int32_T ix ; int32_T j ; int32_T i ; if ( n
!= 0 ) { for ( j = n - 1 ; j + 1 > 0 ; j -- ) { jjA = ( j << 3 ) + j ; x [ j
] /= A [ jjA ] ; for ( i = 1 ; i - 1 < j ; i ++ ) { ix = j - i ; x [ ix ] -=
A [ jjA - i ] * x [ j ] ; } } } } static void cbymjegfox ( real_T lambda [ 4
] , int32_T WorkingSet_nActiveConstr , const int32_T WorkingSet_sizes [ 5 ] ,
const int32_T WorkingSet_isActiveIdx [ 6 ] , const int32_T WorkingSet_Wid [ 4
] , const int32_T WorkingSet_Wlocalidx [ 4 ] , real_T workspace [ 64 ] ) {
int32_T mLB ; int32_T idx ; int32_T idxOffset ; if ( WorkingSet_nActiveConstr
!= 0 ) { mLB = WorkingSet_sizes [ 3 ] ; for ( idx = 0 ; idx <= mLB ; idx ++ )
{ workspace [ idx ] = lambda [ idx ] ; } for ( idx = 0 ; idx <= mLB ; idx ++
) { lambda [ idx ] = 0.0 ; } mLB = 0 ; idx = 0 ; while ( ( idx + 1 <=
WorkingSet_nActiveConstr ) && ( WorkingSet_Wid [ idx ] <= 2 ) ) { lambda [
WorkingSet_Wlocalidx [ idx ] - 1 ] = workspace [ mLB ] ; mLB ++ ; idx ++ ; }
while ( idx + 1 <= WorkingSet_nActiveConstr ) { switch ( WorkingSet_Wid [ idx
] ) { case 3 : idxOffset = 2 ; break ; case 4 : idxOffset = 2 ; break ;
default : idxOffset = WorkingSet_isActiveIdx [ 4 ] ; break ; } lambda [ (
idxOffset + WorkingSet_Wlocalidx [ idx ] ) - 2 ] = workspace [ mLB ] ; mLB ++
; idx ++ ; } } } static void mxnuuti0thv ( mf15oedits * Flags , ktaxowovvf *
memspace , kthfgfhdov * MeritFunction , kdxyjsixti * WorkingSet , fovverijux
* TrialState , dzrlw5sxs5 * QRManager ) { int32_T nVar ; int32_T mLB ; real_T
optimRelativeFactor ; boolean_T isFeasible ; boolean_T dxTooSmall ; int32_T
nActiveConstr ; real_T nlpDualFeasErrorTmp ; real_T d [ 4 ] ; real_T tol ;
int32_T fullRank_R ; int32_T rankR ; int32_T iQR_diag ; real_T e [ 64 ] ;
boolean_T guard1 = false ; boolean_T exitg1 ; nVar = WorkingSet -> nVar ; mLB
= WorkingSet -> sizes [ 3 ] ; e5dhnhf4mf ( TrialState -> gradLag , WorkingSet
-> nVar , TrialState -> grad , WorkingSet -> Aeq , WorkingSet -> indexLB ,
WorkingSet -> sizes [ 3 ] , TrialState -> lambdasqp ) ; optimRelativeFactor =
muDoubleScalarMax ( 1.0 , muDoubleScalarAbs ( TrialState -> grad [ cdcikb5kmw
( WorkingSet -> nVar , TrialState -> grad ) - 1 ] ) ) ; if (
muDoubleScalarIsInf ( optimRelativeFactor ) ) { optimRelativeFactor = 1.0 ; }
MeritFunction -> nlpPrimalFeasError = i23ur3ytsf ( TrialState -> cEq ) ; if (
TrialState -> sqpIterations == 0 ) { MeritFunction -> feasRelativeFactor =
muDoubleScalarMax ( 1.0 , MeritFunction -> nlpPrimalFeasError ) ; }
isFeasible = ( MeritFunction -> nlpPrimalFeasError <= 1.0E-6 * MeritFunction
-> feasRelativeFactor ) ; g0gqo0cxgu ( WorkingSet -> nVar , TrialState ->
gradLag , & dxTooSmall , & tol ) ; Flags -> gradOK = dxTooSmall ;
MeritFunction -> nlpDualFeasError = tol ; if ( ! dxTooSmall ) { Flags -> done
= true ; if ( isFeasible ) { TrialState -> sqpExitFlag = 2 ; } else {
TrialState -> sqpExitFlag = - 2 ; } } else { MeritFunction -> nlpComplError =
0.0 ; MeritFunction -> firstOrderOpt = muDoubleScalarMax ( tol , 0.0 ) ; if (
TrialState -> sqpIterations > 1 ) { e5dhnhf4mfm ( memspace ->
workspace_double , WorkingSet -> nVar , TrialState -> grad , WorkingSet ->
Aeq , WorkingSet -> indexLB , WorkingSet -> sizes [ 3 ] , TrialState ->
lambdasqp_old ) ; g0gqo0cxgut ( WorkingSet -> nVar , memspace ->
workspace_double , & dxTooSmall , & nlpDualFeasErrorTmp ) ; if (
muDoubleScalarMax ( nlpDualFeasErrorTmp , 0.0 ) < muDoubleScalarMax ( tol ,
0.0 ) ) { MeritFunction -> nlpDualFeasError = nlpDualFeasErrorTmp ;
MeritFunction -> nlpComplError = 0.0 ; MeritFunction -> firstOrderOpt =
muDoubleScalarMax ( nlpDualFeasErrorTmp , 0.0 ) ; for ( nActiveConstr = 0 ;
nActiveConstr <= mLB ; nActiveConstr ++ ) { TrialState -> lambdasqp [
nActiveConstr ] = TrialState -> lambdasqp_old [ nActiveConstr ] ; } } else {
for ( nActiveConstr = 0 ; nActiveConstr <= mLB ; nActiveConstr ++ ) {
TrialState -> lambdasqp_old [ nActiveConstr ] = TrialState -> lambdasqp [
nActiveConstr ] ; } } } else { for ( nActiveConstr = 0 ; nActiveConstr <= mLB
; nActiveConstr ++ ) { TrialState -> lambdasqp_old [ nActiveConstr ] =
TrialState -> lambdasqp [ nActiveConstr ] ; } } if ( isFeasible && (
MeritFunction -> nlpDualFeasError <= 1.0E-10 * optimRelativeFactor ) ) {
Flags -> done = true ; TrialState -> sqpExitFlag = 1 ; } else { Flags -> done
= false ; if ( isFeasible && ( TrialState -> sqpFval < - 1.0E+20 ) ) { Flags
-> done = true ; TrialState -> sqpExitFlag = - 3 ; } else { guard1 = false ;
if ( TrialState -> sqpIterations > 0 ) { dxTooSmall = true ; nActiveConstr =
0 ; exitg1 = false ; while ( ( ! exitg1 ) && ( nActiveConstr <= nVar - 1 ) )
{ if ( 1.0E-10 * muDoubleScalarMax ( 1.0 , muDoubleScalarAbs ( TrialState ->
xstarsqp [ nActiveConstr ] ) ) <= muDoubleScalarAbs ( TrialState -> delta_x [
nActiveConstr ] ) ) { dxTooSmall = false ; exitg1 = true ; } else {
nActiveConstr ++ ; } } if ( dxTooSmall ) { if ( ! isFeasible ) { if ( Flags
-> stepType != 2 ) { Flags -> stepType = 2 ; Flags -> failedLineSearch =
false ; Flags -> stepAccepted = false ; guard1 = true ; } else { Flags ->
done = true ; TrialState -> sqpExitFlag = - 2 ; } } else { nActiveConstr =
WorkingSet -> nActiveConstr ; if ( WorkingSet -> nActiveConstr > 0 ) {
jy0zmqim5jn ( WorkingSet , TrialState -> cEq ) ; d [ 0 ] = TrialState ->
lambda [ 0 ] ; d [ 1 ] = TrialState -> lambda [ 1 ] ; d [ 2 ] = TrialState ->
lambda [ 2 ] ; d [ 3 ] = TrialState -> lambda [ 3 ] ; for ( fullRank_R = 0 ;
fullRank_R < nActiveConstr ; fullRank_R ++ ) { d [ fullRank_R ] = 0.0 ; }
j443bj1hxc ( QRManager , WorkingSet -> ATwset , nVar , nActiveConstr ) ;
dj14ojmbav ( QRManager , QRManager -> mrows ) ; tol = muDoubleScalarMin (
1.4901161193847656E-8 , ( real_T ) muIntScalarMax_sint32 ( nVar ,
nActiveConstr ) * 2.2204460492503131E-16 ) * muDoubleScalarAbs ( QRManager ->
QR [ 0 ] ) ; fullRank_R = muIntScalarMin_sint32 ( nVar , nActiveConstr ) ;
rankR = 0 ; iQR_diag = 0 ; while ( ( rankR < fullRank_R ) && (
muDoubleScalarAbs ( QRManager -> QR [ iQR_diag ] ) > tol ) ) { rankR ++ ;
iQR_diag += 9 ; } memcpy ( & e [ 0 ] , & memspace -> workspace_double [ 0 ] ,
sizeof ( real_T ) << 6U ) ; kn3nzhqflf ( nVar , nVar , QRManager -> Q ,
TrialState -> grad , e ) ; clax1tb0ex ( rankR , QRManager -> QR , e ) ;
nActiveConstr = muIntScalarMin_sint32 ( nActiveConstr , fullRank_R ) ; for (
fullRank_R = 0 ; fullRank_R < nActiveConstr ; fullRank_R ++ ) { d [ QRManager
-> jpvt [ fullRank_R ] - 1 ] = e [ fullRank_R ] ; } TrialState -> lambda [ 0
] = d [ 0 ] ; TrialState -> lambda [ 1 ] = d [ 1 ] ; TrialState -> lambda [ 2
] = d [ 2 ] ; TrialState -> lambda [ 3 ] = d [ 3 ] ; TrialState -> lambda [ 0
] = - TrialState -> lambda [ 0 ] ; d [ 0 ] = TrialState -> lambda [ 0 ] ; d [
1 ] = TrialState -> lambda [ 1 ] ; d [ 2 ] = TrialState -> lambda [ 2 ] ; d [
3 ] = TrialState -> lambda [ 3 ] ; cbymjegfox ( d , WorkingSet ->
nActiveConstr , WorkingSet -> sizes , WorkingSet -> isActiveIdx , WorkingSet
-> Wid , WorkingSet -> Wlocalidx , e ) ; TrialState -> lambda [ 0 ] = d [ 0 ]
; TrialState -> lambda [ 1 ] = d [ 1 ] ; TrialState -> lambda [ 2 ] = d [ 2 ]
; TrialState -> lambda [ 3 ] = d [ 3 ] ; memcpy ( & memspace ->
workspace_double [ 0 ] , & e [ 0 ] , sizeof ( real_T ) << 6U ) ; e5dhnhf4mfm
( memspace -> workspace_double , nVar , TrialState -> grad , WorkingSet ->
Aeq , WorkingSet -> indexLB , mLB , d ) ; g0gqo0cxgut ( nVar , memspace ->
workspace_double , & isFeasible , & tol ) ; if ( tol <= 1.0E-10 *
optimRelativeFactor ) { MeritFunction -> nlpDualFeasError = tol ;
MeritFunction -> nlpComplError = 0.0 ; MeritFunction -> firstOrderOpt =
muDoubleScalarMax ( tol , 0.0 ) ; for ( nVar = 0 ; nVar <= mLB ; nVar ++ ) {
TrialState -> lambdasqp [ nVar ] = d [ nVar ] ; } Flags -> done = true ;
TrialState -> sqpExitFlag = 1 ; } else { Flags -> done = true ; TrialState ->
sqpExitFlag = 2 ; } } else { Flags -> done = true ; TrialState -> sqpExitFlag
= 2 ; } } } else { guard1 = true ; } } else { guard1 = true ; } if ( guard1 )
{ if ( TrialState -> sqpIterations >= 400 ) { Flags -> done = true ;
TrialState -> sqpExitFlag = 0 ; } else { if ( TrialState ->
FunctionEvaluations >= 500 ) { Flags -> done = true ; TrialState ->
sqpExitFlag = 0 ; } } } } } } } static void ns205swajk ( int32_T nVar ,
real_T workspace [ 8 ] , const real_T grad [ 8 ] , const real_T JacEqTrans [
8 ] , const real_T grad_old [ 8 ] , const real_T JacEqTrans_old [ 8 ] , const
real_T lambda [ 4 ] ) { int32_T iy ; int32_T ia ; for ( iy = 0 ; iy < nVar ;
iy ++ ) { workspace [ iy ] = grad [ iy ] ; } if ( nVar >= 1 ) { for ( iy = 0
; iy < nVar ; iy ++ ) { workspace [ iy ] += - grad_old [ iy ] ; } } iy = 0 ;
for ( ia = 1 ; ia <= nVar ; ia ++ ) { workspace [ iy ] += JacEqTrans [ ia - 1
] * lambda [ 0 ] ; iy ++ ; } iy = 0 ; for ( ia = 1 ; ia <= nVar ; ia ++ ) {
workspace [ iy ] += JacEqTrans_old [ ia - 1 ] * - lambda [ 0 ] ; iy ++ ; } }
static boolean_T baiaczl2df ( int32_T nvar , real_T Bk [ 25 ] , const real_T
sk [ 8 ] , real_T yk [ 8 ] , real_T workspace [ 64 ] ) { boolean_T success ;
real_T dotSY ; real_T curvatureS ; int32_T ix ; int32_T iac ; int32_T jy ;
real_T temp ; int32_T b_ix ; int32_T d ; int32_T ijA ; dotSY = 0.0 ; for ( ix
= 0 ; ix < nvar ; ix ++ ) { dotSY += sk [ ix ] * yk [ ix ] ; } for ( ix = 0 ;
ix < nvar ; ix ++ ) { workspace [ ix ] = 0.0 ; } ix = 0 ; jy = ( nvar - 1 ) *
5 ; for ( iac = 1 ; iac <= jy + 1 ; iac += 5 ) { b_ix = 0 ; d = ( iac + nvar
) - 1 ; for ( ijA = iac ; ijA <= d ; ijA ++ ) { workspace [ b_ix ] += Bk [
ijA - 1 ] * sk [ ix ] ; b_ix ++ ; } ix ++ ; } curvatureS = 0.0 ; if ( nvar >=
1 ) { for ( ix = 0 ; ix < nvar ; ix ++ ) { curvatureS += sk [ ix ] *
workspace [ ix ] ; } } if ( dotSY < 0.2 * curvatureS ) { dotSY = 0.8 *
curvatureS / ( curvatureS - dotSY ) ; for ( ix = 0 ; ix < nvar ; ix ++ ) { yk
[ ix ] *= dotSY ; } dotSY = 1.0 - dotSY ; if ( ! ( dotSY == 0.0 ) ) { for (
ix = 0 ; ix < nvar ; ix ++ ) { yk [ ix ] += dotSY * workspace [ ix ] ; } }
dotSY = 0.0 ; for ( ix = 0 ; ix < nvar ; ix ++ ) { dotSY += sk [ ix ] * yk [
ix ] ; } } success = ( ( curvatureS > 2.2204460492503131E-16 ) && ( dotSY >
2.2204460492503131E-16 ) ) ; if ( success ) { curvatureS = - 1.0 / curvatureS
; if ( ! ( curvatureS == 0.0 ) ) { ix = 0 ; jy = 0 ; for ( iac = 0 ; iac <
nvar ; iac ++ ) { if ( workspace [ jy ] != 0.0 ) { temp = workspace [ jy ] *
curvatureS ; b_ix = 0 ; d = nvar + ix ; for ( ijA = ix ; ijA < d ; ijA ++ ) {
Bk [ ijA ] += workspace [ b_ix ] * temp ; b_ix ++ ; } } jy ++ ; ix += 5 ; } }
curvatureS = 1.0 / dotSY ; if ( ! ( curvatureS == 0.0 ) ) { ix = 0 ; jy = 0 ;
for ( iac = 0 ; iac < nvar ; iac ++ ) { if ( yk [ jy ] != 0.0 ) { dotSY = yk
[ jy ] * curvatureS ; b_ix = 0 ; d = nvar + ix ; for ( ijA = ix ; ijA < d ;
ijA ++ ) { Bk [ ijA ] += yk [ b_ix ] * dotSY ; b_ix ++ ; } } jy ++ ; ix += 5
; } } } return success ; } static void kuqjqcuopxe5s ( int32_T n , const
real_T x [ 8 ] , real_T y [ 8 ] ) { int32_T b_k ; for ( b_k = 0 ; b_k < n ;
b_k ++ ) { y [ b_k ] = x [ b_k ] ; } } static void kuqjqcuopxe5 ( int32_T n ,
const real_T x [ 5 ] , real_T y [ 8 ] ) { int32_T b_k ; for ( b_k = 0 ; b_k <
n ; b_k ++ ) { y [ b_k ] = x [ b_k ] ; } } static void kuqjqcuopxe5sar (
int32_T n , const real_T x [ 5 ] , real_T y [ 5 ] ) { int32_T b_k ; for ( b_k
= 0 ; b_k < n ; b_k ++ ) { y [ b_k ] = x [ b_k ] ; } } static void kuqjqcuopx
( int32_T n , const real_T x [ 4 ] , real_T y [ 4 ] ) { int32_T b_k ; for (
b_k = 0 ; b_k < n ; b_k ++ ) { y [ b_k ] = x [ b_k ] ; } } static void
ozqnsknwek ( kdxyjsixti * WorkingSet , real_T TrialState_cEq , const real_T
TrialState_searchDir [ 8 ] ) { int32_T ix ; real_T c ; int32_T ia ;
WorkingSet -> beq = - TrialState_cEq ; ix = 0 ; c = 0.0 ; for ( ia = 1 ; ia
<= WorkingSet -> nVar ; ia ++ ) { c += WorkingSet -> Aeq [ ia - 1 ] *
TrialState_searchDir [ ix ] ; ix ++ ; } c += WorkingSet -> beq ; WorkingSet
-> beq = c ; WorkingSet -> bwset [ 0 ] = c ; } static void njpga5wb4z (
fovverijux * solution , const real_T workingset_lb [ 8 ] , const int32_T
workingset_indexLB [ 8 ] , const int32_T workingset_sizes [ 5 ] , const
boolean_T workingset_isActiveConstr [ 4 ] ) { int32_T b_idx ; for ( b_idx = 0
; b_idx < workingset_sizes [ 3 ] ; b_idx ++ ) { if (
workingset_isActiveConstr [ b_idx + 1 ] ) { solution -> xstar [
workingset_indexLB [ b_idx ] - 1 ] = - workingset_lb [ workingset_indexLB [
b_idx ] - 1 ] ; } } } static void h1ikxoaf0x ( int32_T x [ 8 ] , int32_T xLen
, int32_T workspace [ 8 ] , int32_T xMin , int32_T xMax ) { int32_T maxOffset
; int32_T idxStart ; int32_T idxEnd ; int32_T b_idxW ; if ( ( xLen > 1 ) && (
xMax > xMin ) ) { maxOffset = xMax - xMin ; for ( idxStart = 0 ; idxStart <=
maxOffset ; idxStart ++ ) { workspace [ idxStart ] = 0 ; } maxOffset = xMax -
xMin ; for ( idxStart = 0 ; idxStart < xLen ; idxStart ++ ) { workspace [ x [
idxStart ] - xMin ] ++ ; } for ( idxStart = 1 ; idxStart < maxOffset + 1 ;
idxStart ++ ) { workspace [ idxStart ] += workspace [ idxStart - 1 ] ; }
idxStart = 0 ; idxEnd = workspace [ 0 ] ; for ( b_idxW = 0 ; b_idxW <
maxOffset ; b_idxW ++ ) { while ( idxStart + 1 <= idxEnd ) { x [ idxStart ] =
b_idxW + xMin ; idxStart ++ ; } idxStart = workspace [ b_idxW ] ; idxEnd =
workspace [ b_idxW + 1 ] ; } while ( idxStart + 1 <= idxEnd ) { x [ idxStart
] = xMax ; idxStart ++ ; } } } static void pghmkcqdjs ( kdxyjsixti * obj ,
int32_T idx_global ) { int32_T TYPE ; int32_T idx_global_start ; int32_T
b_idx ; TYPE = obj -> Wid [ idx_global - 1 ] - 1 ; obj -> isActiveConstr [ (
obj -> isActiveIdx [ obj -> Wid [ idx_global - 1 ] - 1 ] + obj -> Wlocalidx [
idx_global - 1 ] ) - 2 ] = false ; idx_global_start = obj -> nActiveConstr -
1 ; obj -> Wid [ idx_global - 1 ] = obj -> Wid [ obj -> nActiveConstr - 1 ] ;
obj -> Wlocalidx [ idx_global - 1 ] = obj -> Wlocalidx [ idx_global_start ] ;
for ( b_idx = 0 ; b_idx < obj -> nVar ; b_idx ++ ) { obj -> ATwset [ b_idx +
( ( idx_global - 1 ) << 3 ) ] = obj -> ATwset [ ( idx_global_start << 3 ) +
b_idx ] ; } obj -> bwset [ idx_global - 1 ] = obj -> bwset [ idx_global_start
] ; obj -> nActiveConstr -- ; obj -> nWConstr [ TYPE ] -- ; } static int32_T
bt35m0mjfw ( ktaxowovvf * memspace , kdxyjsixti * workingset , dzrlw5sxs5 *
qrmanager ) { int32_T nDepInd ; int32_T nVar ; int32_T mTotalWorkingEq ;
int32_T b [ 8 ] ; real_T tol ; real_T qtb ; real_T c [ 64 ] ; real_T d [ 8 ]
; int32_T e [ 8 ] ; int32_T ix ; int32_T iy ; int32_T k ; boolean_T exitg1 ;
nVar = workingset -> nVar - 1 ; mTotalWorkingEq = workingset -> nWConstr [ 1
] + workingset -> nWConstr [ 0 ] ; nDepInd = 0 ; if ( mTotalWorkingEq > 0 ) {
for ( ix = 0 ; ix < mTotalWorkingEq ; ix ++ ) { for ( iy = 0 ; iy <= nVar ;
iy ++ ) { qrmanager -> QR [ ix + ( iy << 3 ) ] = workingset -> ATwset [ ( ix
<< 3 ) + iy ] ; } } nDepInd = mTotalWorkingEq - workingset -> nVar ; nDepInd
= muIntScalarMax_sint32 ( 0 , nDepInd ) ; for ( ix = 0 ; ix <= nVar ; ix ++ )
{ qrmanager -> jpvt [ ix ] = 0 ; } qrmanager -> usedPivoting = true ;
qrmanager -> mrows = mTotalWorkingEq ; qrmanager -> ncols = workingset ->
nVar ; qrmanager -> minRowCol = muIntScalarMin_sint32 ( mTotalWorkingEq ,
workingset -> nVar ) ; memcpy ( & c [ 0 ] , & qrmanager -> QR [ 0 ] , sizeof
( real_T ) << 6U ) ; for ( nVar = 0 ; nVar < 8 ; nVar ++ ) { e [ nVar ] =
qrmanager -> jpvt [ nVar ] ; } ixl3w5wjmi ( c , mTotalWorkingEq , workingset
-> nVar , e , d ) ; memcpy ( & qrmanager -> QR [ 0 ] , & c [ 0 ] , sizeof (
real_T ) << 6U ) ; memcpy ( & qrmanager -> tau [ 0 ] , & d [ 0 ] , sizeof (
real_T ) << 3U ) ; for ( nVar = 0 ; nVar < 8 ; nVar ++ ) { qrmanager -> jpvt
[ nVar ] = e [ nVar ] ; } tol = 100.0 * ( real_T ) workingset -> nVar *
2.2204460492503131E-16 ; nVar = muIntScalarMin_sint32 ( workingset -> nVar ,
mTotalWorkingEq ) ; while ( ( nVar > 0 ) && ( muDoubleScalarAbs ( c [ ( ( (
nVar - 1 ) << 3 ) + nVar ) - 1 ] ) < tol ) ) { nVar -- ; nDepInd ++ ; } if (
nDepInd > 0 ) { dj14ojmbav ( qrmanager , qrmanager -> mrows ) ; nVar = 0 ;
exitg1 = false ; while ( ( ! exitg1 ) && ( nVar <= nDepInd - 1 ) ) { qtb =
0.0 ; ix = ( ( mTotalWorkingEq - nVar ) - 1 ) << 3 ; iy = 0 ; for ( k = 0 ; k
< mTotalWorkingEq ; k ++ ) { qtb += qrmanager -> Q [ ix ] * workingset ->
bwset [ iy ] ; ix ++ ; iy ++ ; } if ( muDoubleScalarAbs ( qtb ) >= tol ) {
nDepInd = - 1 ; exitg1 = true ; } else { nVar ++ ; } } } if ( nDepInd > 0 ) {
for ( nVar = 0 ; nVar < 8 ; nVar ++ ) { e [ nVar ] = memspace ->
workspace_int [ nVar ] ; } for ( nVar = 0 ; nVar < workingset -> nWConstr [ 0
] ; nVar ++ ) { qrmanager -> jpvt [ nVar ] = 1 ; } for ( nVar = workingset ->
nWConstr [ 0 ] ; nVar < mTotalWorkingEq ; nVar ++ ) { qrmanager -> jpvt [
nVar ] = 0 ; } j443bj1hxc ( qrmanager , workingset -> ATwset , workingset ->
nVar , mTotalWorkingEq ) ; for ( nVar = 0 ; nVar < nDepInd ; nVar ++ ) { e [
nVar ] = qrmanager -> jpvt [ ( mTotalWorkingEq - nDepInd ) + nVar ] ; } for (
nVar = 0 ; nVar < 8 ; nVar ++ ) { b [ nVar ] = memspace -> workspace_sort [
nVar ] ; } h1ikxoaf0x ( e , nDepInd , b , 1 , mTotalWorkingEq ) ; for ( nVar
= 0 ; nVar < 8 ; nVar ++ ) { memspace -> workspace_int [ nVar ] = e [ nVar ]
; memspace -> workspace_sort [ nVar ] = b [ nVar ] ; } for ( mTotalWorkingEq
= nDepInd - 1 ; mTotalWorkingEq + 1 > 0 ; mTotalWorkingEq -- ) { nVar = (
workingset -> nWConstr [ 0 ] + workingset -> nWConstr [ 1 ] ) - 1 ; if ( (
nVar + 1 != 0 ) && ( e [ mTotalWorkingEq ] <= nVar + 1 ) ) { if ( ( nVar + 1
== workingset -> nActiveConstr ) || ( nVar + 1 == e [ mTotalWorkingEq ] ) ) {
workingset -> mEqRemoved ++ ; workingset -> indexEqRemoved = workingset ->
Wlocalidx [ e [ mTotalWorkingEq ] - 1 ] ; pghmkcqdjs ( workingset , e [
mTotalWorkingEq ] ) ; } else { workingset -> mEqRemoved ++ ; ix = workingset
-> Wid [ e [ mTotalWorkingEq ] - 1 ] - 1 ; workingset -> indexEqRemoved =
workingset -> Wlocalidx [ e [ mTotalWorkingEq ] - 1 ] ; workingset ->
isActiveConstr [ ( workingset -> isActiveIdx [ workingset -> Wid [ e [
mTotalWorkingEq ] - 1 ] - 1 ] + workingset -> Wlocalidx [ e [ mTotalWorkingEq
] - 1 ] ) - 2 ] = false ; workingset -> Wid [ e [ mTotalWorkingEq ] - 1 ] =
workingset -> Wid [ nVar ] ; workingset -> Wlocalidx [ e [ mTotalWorkingEq ]
- 1 ] = workingset -> Wlocalidx [ nVar ] ; for ( iy = 0 ; iy < workingset ->
nVar ; iy ++ ) { workingset -> ATwset [ iy + ( ( e [ mTotalWorkingEq ] - 1 )
<< 3 ) ] = workingset -> ATwset [ ( nVar << 3 ) + iy ] ; } workingset ->
bwset [ e [ mTotalWorkingEq ] - 1 ] = workingset -> bwset [ nVar ] ; iy =
workingset -> nActiveConstr - 1 ; workingset -> Wid [ nVar ] = workingset ->
Wid [ workingset -> nActiveConstr - 1 ] ; workingset -> Wlocalidx [ nVar ] =
workingset -> Wlocalidx [ iy ] ; for ( k = 0 ; k < workingset -> nVar ; k ++
) { workingset -> ATwset [ k + ( nVar << 3 ) ] = workingset -> ATwset [ ( iy
<< 3 ) + k ] ; } workingset -> bwset [ nVar ] = workingset -> bwset [ iy ] ;
workingset -> nActiveConstr -- ; workingset -> nWConstr [ ix ] -- ; } } } } }
return nDepInd ; } static void hmiqzf5p5q ( kdxyjsixti * obj ) { int32_T
idx_global ; for ( idx_global = obj -> nWConstr [ 0 ] + obj -> nWConstr [ 1 ]
; idx_global < obj -> nActiveConstr ; idx_global ++ ) { obj -> isActiveConstr
[ ( obj -> isActiveIdx [ obj -> Wid [ idx_global ] - 1 ] + obj -> Wlocalidx [
idx_global ] ) - 2 ] = false ; } obj -> nWConstr [ 2 ] = 0 ; obj -> nWConstr
[ 3 ] = 0 ; obj -> nWConstr [ 4 ] = 0 ; obj -> nActiveConstr = obj ->
nWConstr [ 0 ] + obj -> nWConstr [ 1 ] ; } static void gfhhinglrq (
kdxyjsixti * workingset , dzrlw5sxs5 * qrmanager , ktaxowovvf * memspace ,
real_T tolfactor ) { int32_T nFixedConstr ; real_T tol ; int32_T nDepIneq ;
int32_T b [ 8 ] ; int32_T c [ 8 ] ; int32_T i ; nFixedConstr = workingset ->
nWConstr [ 1 ] + workingset -> nWConstr [ 0 ] ; if ( ( workingset -> nWConstr
[ 2 ] + workingset -> nWConstr [ 3 ] ) + workingset -> nWConstr [ 4 ] > 0 ) {
tol = tolfactor * ( real_T ) workingset -> nVar * 2.2204460492503131E-16 ;
for ( nDepIneq = 0 ; nDepIneq < nFixedConstr ; nDepIneq ++ ) { qrmanager ->
jpvt [ nDepIneq ] = 1 ; } for ( nDepIneq = nFixedConstr + 1 ; nDepIneq <=
workingset -> nActiveConstr ; nDepIneq ++ ) { qrmanager -> jpvt [ nDepIneq -
1 ] = 0 ; } j443bj1hxc ( qrmanager , workingset -> ATwset , workingset ->
nVar , workingset -> nActiveConstr ) ; nDepIneq = 0 ; for ( i = workingset ->
nActiveConstr ; i > workingset -> nVar ; i -- ) { nDepIneq ++ ; memspace ->
workspace_int [ nDepIneq - 1 ] = qrmanager -> jpvt [ i - 1 ] ; } if ( i <=
workingset -> nVar ) { while ( ( i > nFixedConstr ) && ( muDoubleScalarAbs (
qrmanager -> QR [ ( ( ( i - 1 ) << 3 ) + i ) - 1 ] ) < tol ) ) { nDepIneq ++
; memspace -> workspace_int [ nDepIneq - 1 ] = qrmanager -> jpvt [ i - 1 ] ;
i -- ; } } for ( i = 0 ; i < 8 ; i ++ ) { b [ i ] = memspace -> workspace_int
[ i ] ; c [ i ] = memspace -> workspace_sort [ i ] ; } h1ikxoaf0x ( b ,
nDepIneq , c , nFixedConstr + 1 , workingset -> nActiveConstr ) ; for ( i = 0
; i < 8 ; i ++ ) { memspace -> workspace_int [ i ] = b [ i ] ; memspace ->
workspace_sort [ i ] = c [ i ] ; } for ( nFixedConstr = nDepIneq ;
nFixedConstr > 0 ; nFixedConstr -- ) { pghmkcqdjs ( workingset , b [
nFixedConstr - 1 ] ) ; } } } static void kn3nzhqflfe ( int32_T m , int32_T n
, const real_T A [ 32 ] , const real_T x [ 8 ] , real_T y [ 64 ] ) { int32_T
ix ; real_T c ; int32_T iy ; int32_T iac ; int32_T b ; int32_T ia ; int32_T
b_c ; if ( n != 0 ) { iy = 0 ; b_c = ( n - 1 ) << 3 ; for ( iac = 1 ; iac <=
b_c + 1 ; iac += 8 ) { ix = 0 ; c = 0.0 ; b = ( iac + m ) - 1 ; for ( ia =
iac ; ia <= b ; ia ++ ) { c += A [ ia - 1 ] * x [ ix ] ; ix ++ ; } y [ iy ]
+= - c ; iy ++ ; } } } static void h0ncymex4zm ( dzrlw5sxs5 * obj , const
real_T A [ 32 ] , int32_T mrows , int32_T ncols ) { int32_T iA0 ; int32_T
iQR0 ; int32_T k ; int32_T minmn ; real_T b_A [ 64 ] ; real_T tau [ 8 ] ;
boolean_T guard1 = false ; guard1 = false ; if ( mrows * ncols > 0 ) { for (
minmn = 0 ; minmn < ncols ; minmn ++ ) { iA0 = minmn << 3 ; iQR0 = minmn << 3
; for ( k = 1 ; k - 1 < mrows ; k ++ ) { obj -> QR [ ( iQR0 + k ) - 1 ] = A [
( iA0 + k ) - 1 ] ; } } guard1 = true ; } else if ( mrows * ncols == 0 ) {
obj -> mrows = mrows ; obj -> ncols = ncols ; obj -> minRowCol = 0 ; } else {
guard1 = true ; } if ( guard1 ) { obj -> usedPivoting = false ; obj -> mrows
= mrows ; obj -> ncols = ncols ; for ( minmn = 0 ; minmn < ncols ; minmn ++ )
{ obj -> jpvt [ minmn ] = minmn + 1 ; } obj -> minRowCol =
muIntScalarMin_sint32 ( mrows , ncols ) ; memcpy ( & b_A [ 0 ] , & obj -> QR
[ 0 ] , sizeof ( real_T ) << 6U ) ; minmn = muIntScalarMin_sint32 ( mrows ,
ncols ) ; memset ( & tau [ 0 ] , 0 , sizeof ( real_T ) << 3U ) ; if ( minmn
>= 1 ) { l0lnfjcq5z ( b_A , mrows , ncols , minmn , tau ) ; } memcpy ( & obj
-> QR [ 0 ] , & b_A [ 0 ] , sizeof ( real_T ) << 6U ) ; memcpy ( & obj -> tau
[ 0 ] , & tau [ 0 ] , sizeof ( real_T ) << 3U ) ; } } static void kfjmuob5wh5
( int32_T m , const real_T A [ 64 ] , real_T B_b [ 64 ] ) { real_T temp ;
int32_T iAcol ; int32_T i ; int32_T k ; for ( i = 1 ; i - 1 < m ; i ++ ) {
iAcol = ( ( i - 1 ) << 3 ) - 1 ; temp = B_b [ i + - 1 ] ; for ( k = 1 ; k - 1
<= i - 2 ; k ++ ) { temp -= A [ k + iAcol ] * B_b [ k + - 1 ] ; } B_b [ i + -
1 ] = temp / A [ i + iAcol ] ; } for ( i = 1 ; i - 1 < m ; i ++ ) { iAcol = (
( i - 1 ) << 3 ) - 1 ; temp = B_b [ i + 7 ] ; for ( k = 1 ; k - 1 <= i - 2 ;
k ++ ) { temp -= A [ k + iAcol ] * B_b [ k + 7 ] ; } B_b [ i + 7 ] = temp / A
[ i + iAcol ] ; } } static void k24gkerz4mw ( int32_T m , int32_T k , const
real_T A [ 64 ] , const real_T B_p [ 64 ] , real_T C [ 64 ] ) { int32_T br ;
int32_T ar ; int32_T ia ; int32_T c ; int32_T d ; int32_T b_ic ; for ( ar = 0
; ar < m ; ar ++ ) { C [ ar ] = 0.0 ; } br = m + 8 ; for ( ar = 8 ; ar < br ;
ar ++ ) { C [ ar ] = 0.0 ; } ar = - 1 ; for ( br = 1 ; br <= k ; br ++ ) { ia
= ar ; for ( b_ic = 0 ; b_ic < m ; b_ic ++ ) { ia ++ ; C [ b_ic ] += B_p [ br
- 1 ] * A [ ia ] ; } ar += 8 ; } ar = - 1 ; c = k + 8 ; for ( br = 9 ; br <=
c ; br ++ ) { ia = ar ; d = m + 8 ; for ( b_ic = 8 ; b_ic < d ; b_ic ++ ) {
ia ++ ; C [ b_ic ] += B_p [ br - 1 ] * A [ ia ] ; } ar += 8 ; } } static void
h0ncymex4z ( dzrlw5sxs5 * obj , int32_T mrows , int32_T ncols ) { int32_T
minmn ; real_T A [ 64 ] ; real_T tau [ 8 ] ; obj -> usedPivoting = false ;
obj -> mrows = mrows ; obj -> ncols = ncols ; for ( minmn = 0 ; minmn < ncols
; minmn ++ ) { obj -> jpvt [ minmn ] = minmn + 1 ; } obj -> minRowCol =
muIntScalarMin_sint32 ( mrows , ncols ) ; memcpy ( & A [ 0 ] , & obj -> QR [
0 ] , sizeof ( real_T ) << 6U ) ; minmn = muIntScalarMin_sint32 ( mrows ,
ncols ) ; memset ( & tau [ 0 ] , 0 , sizeof ( real_T ) << 3U ) ; if ( minmn
>= 1 ) { l0lnfjcq5z ( A , mrows , ncols , minmn , tau ) ; } memcpy ( & obj ->
QR [ 0 ] , & A [ 0 ] , sizeof ( real_T ) << 6U ) ; memcpy ( & obj -> tau [ 0
] , & tau [ 0 ] , sizeof ( real_T ) << 3U ) ; } static void k24gkerz4m (
int32_T m , int32_T k , const real_T A [ 64 ] , const real_T B_k [ 64 ] ,
real_T C [ 64 ] ) { int32_T br ; int32_T ar ; real_T temp ; int32_T c ;
int32_T w ; for ( ar = 0 ; ar < m ; ar ++ ) { C [ ar ] = 0.0 ; } br = m + 8 ;
for ( ar = 8 ; ar < br ; ar ++ ) { C [ ar ] = 0.0 ; } ar = - 1 ; for ( br = 0
; br < m ; br ++ ) { temp = 0.0 ; for ( w = 1 ; w - 1 < k ; w ++ ) { temp +=
A [ w + ar ] * B_k [ w + - 1 ] ; } C [ br ] += temp ; ar += 8 ; } ar = - 1 ;
c = m + 8 ; for ( br = 8 ; br < c ; br ++ ) { temp = 0.0 ; for ( w = 1 ; w -
1 < k ; w ++ ) { temp += A [ w + ar ] * B_k [ w + 7 ] ; } C [ br ] += temp ;
ar += 8 ; } } static void kfjmuob5wh ( int32_T m , const real_T A [ 64 ] ,
real_T B_c [ 64 ] ) { int32_T kAcol ; int32_T k ; int32_T i ; for ( k = m ; k
> 0 ; k -- ) { kAcol = ( ( k - 1 ) << 3 ) - 1 ; if ( B_c [ k + - 1 ] != 0.0 )
{ B_c [ k + - 1 ] /= A [ k + kAcol ] ; for ( i = 1 ; i - 1 <= k - 2 ; i ++ )
{ B_c [ i + - 1 ] -= B_c [ k + - 1 ] * A [ i + kAcol ] ; } } } for ( k = m ;
k > 0 ; k -- ) { kAcol = ( ( k - 1 ) << 3 ) - 1 ; if ( B_c [ k + 7 ] != 0.0 )
{ B_c [ k + 7 ] /= A [ k + kAcol ] ; for ( i = 1 ; i - 1 <= k - 2 ; i ++ ) {
B_c [ i + 7 ] -= B_c [ k + 7 ] * A [ i + kAcol ] ; } } } } static real_T
gtxetnnm2k ( kdxyjsixti * obj , const real_T x [ 64 ] ) { real_T v ; int32_T
mLB ; int32_T ix ; real_T c ; int32_T b_ix ; mLB = obj -> sizes [ 3 ] ; if (
obj -> probType == 2 ) { obj -> maxConstrWorkspace [ 0 ] = obj -> beq ; obj
-> maxConstrWorkspace [ 0 ] = - obj -> maxConstrWorkspace [ 0 ] ; b_ix = 0 ;
c = 0.0 ; for ( ix = 0 ; ix < 5 ; ix ++ ) { c += obj -> Aeq [ ix ] * x [ b_ix
] ; b_ix ++ ; } obj -> maxConstrWorkspace [ 0 ] += c ; obj ->
maxConstrWorkspace [ 0 ] = ( obj -> maxConstrWorkspace [ 0 ] - x [ 5 ] ) + x
[ 6 ] ; v = muDoubleScalarMax ( 0.0 , muDoubleScalarAbs ( obj ->
maxConstrWorkspace [ 0 ] ) ) ; } else { obj -> maxConstrWorkspace [ 0 ] = obj
-> beq ; obj -> maxConstrWorkspace [ 0 ] = - obj -> maxConstrWorkspace [ 0 ]
; ix = 0 ; c = 0.0 ; for ( b_ix = 1 ; b_ix <= obj -> nVar ; b_ix ++ ) { c +=
obj -> Aeq [ b_ix - 1 ] * x [ ix ] ; ix ++ ; } obj -> maxConstrWorkspace [ 0
] += c ; v = muDoubleScalarMax ( 0.0 , muDoubleScalarAbs ( obj ->
maxConstrWorkspace [ 0 ] ) ) ; } if ( mLB > 0 ) { for ( ix = 0 ; ix < mLB ;
ix ++ ) { v = muDoubleScalarMax ( v , - x [ obj -> indexLB [ ix ] - 1 ] - obj
-> lb [ obj -> indexLB [ ix ] - 1 ] ) ; } } return v ; } static boolean_T
g3dskjwjcw ( real_T workspace [ 64 ] , real_T xCurrent [ 8 ] , kdxyjsixti *
workingset , dzrlw5sxs5 * qrmanager ) { boolean_T nonDegenerateWset ; int32_T
mWConstr ; int32_T nVar ; real_T constrViolation_minnormX ; int32_T b_idx_row
; kdxyjsixti obj ; real_T c ; int32_T b_ix ; real_T workspace_p [ 64 ] ;
int32_T exitg1 ; mWConstr = workingset -> nActiveConstr - 1 ; nVar =
workingset -> nVar - 1 ; nonDegenerateWset = true ; if ( workingset ->
nActiveConstr != 0 ) { for ( b_ix = 0 ; b_ix <= mWConstr ; b_ix ++ ) {
workspace [ b_ix ] = workingset -> bwset [ b_ix ] ; workspace [ b_ix + 8 ] =
workingset -> bwset [ b_ix ] ; } kn3nzhqflfe ( workingset -> nVar ,
workingset -> nActiveConstr , workingset -> ATwset , xCurrent , workspace ) ;
if ( workingset -> nActiveConstr >= workingset -> nVar ) { for ( b_ix = 0 ;
b_ix <= nVar ; b_ix ++ ) { for ( b_idx_row = 0 ; b_idx_row <= mWConstr ;
b_idx_row ++ ) { qrmanager -> QR [ b_idx_row + ( b_ix << 3 ) ] = workingset
-> ATwset [ ( b_idx_row << 3 ) + b_ix ] ; } } h0ncymex4z ( qrmanager ,
workingset -> nActiveConstr , workingset -> nVar ) ; dj14ojmbav ( qrmanager ,
qrmanager -> mrows ) ; memcpy ( & workspace_p [ 0 ] , & workspace [ 0 ] ,
sizeof ( real_T ) << 6 ) ; k24gkerz4m ( workingset -> nVar , workingset ->
nActiveConstr , qrmanager -> Q , workspace_p , workspace ) ; kfjmuob5wh (
workingset -> nVar , qrmanager -> QR , workspace ) ; } else { h0ncymex4zm (
qrmanager , workingset -> ATwset , workingset -> nVar , workingset ->
nActiveConstr ) ; dj14ojmbav ( qrmanager , qrmanager -> minRowCol ) ;
kfjmuob5wh5 ( workingset -> nActiveConstr , qrmanager -> QR , workspace ) ;
memcpy ( & workspace_p [ 0 ] , & workspace [ 0 ] , sizeof ( real_T ) << 6 ) ;
k24gkerz4mw ( workingset -> nVar , workingset -> nActiveConstr , qrmanager ->
Q , workspace_p , workspace ) ; } mWConstr = 0 ; do { exitg1 = 0 ; if (
mWConstr <= nVar ) { if ( muDoubleScalarIsInf ( workspace [ mWConstr ] ) ||
muDoubleScalarIsNaN ( workspace [ mWConstr ] ) || ( muDoubleScalarIsInf (
workspace [ mWConstr + 8 ] ) || muDoubleScalarIsNaN ( workspace [ mWConstr +
8 ] ) ) ) { nonDegenerateWset = false ; exitg1 = 1 ; } else { mWConstr ++ ; }
} else { for ( mWConstr = 0 ; mWConstr <= nVar ; mWConstr ++ ) { workspace [
mWConstr ] += xCurrent [ mWConstr ] ; } constrViolation_minnormX = gtxetnnm2k
( workingset , workspace ) ; if ( workingset -> probType == 2 ) { obj = *
workingset ; b_ix = 8 ; c = 0.0 ; for ( mWConstr = 0 ; mWConstr < 5 ;
mWConstr ++ ) { c += workingset -> Aeq [ mWConstr ] * workspace [ b_ix ] ;
b_ix ++ ; } obj . maxConstrWorkspace [ 0 ] = - workingset -> beq + c ; obj .
maxConstrWorkspace [ 0 ] = ( obj . maxConstrWorkspace [ 0 ] - workspace [ 13
] ) + workspace [ 14 ] ; c = muDoubleScalarMax ( 0.0 , muDoubleScalarAbs (
obj . maxConstrWorkspace [ 0 ] ) ) ; } else { obj = * workingset ; mWConstr =
8 ; c = 0.0 ; for ( b_ix = 1 ; b_ix <= workingset -> nVar ; b_ix ++ ) { c +=
workingset -> Aeq [ b_ix - 1 ] * workspace [ mWConstr ] ; mWConstr ++ ; } obj
. maxConstrWorkspace [ 0 ] = - workingset -> beq + c ; c = muDoubleScalarMax
( 0.0 , muDoubleScalarAbs ( obj . maxConstrWorkspace [ 0 ] ) ) ; } if (
workingset -> sizes [ 3 ] > 0 ) { for ( mWConstr = 0 ; mWConstr < workingset
-> sizes [ 3 ] ; mWConstr ++ ) { c = muDoubleScalarMax ( c , - workspace [
obj . indexLB [ mWConstr ] + 7 ] - obj . lb [ obj . indexLB [ mWConstr ] - 1
] ) ; } } * workingset = obj ; if ( ( constrViolation_minnormX <=
2.2204460492503131E-16 ) || ( constrViolation_minnormX < c ) ) { for (
mWConstr = 0 ; mWConstr <= nVar ; mWConstr ++ ) { xCurrent [ mWConstr ] =
workspace [ mWConstr ] ; } } else { for ( mWConstr = 0 ; mWConstr <= nVar ;
mWConstr ++ ) { xCurrent [ mWConstr ] = workspace [ mWConstr + 8 ] ; } }
exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } return nonDegenerateWset ; }
static real_T gtxetnnm2kf ( kdxyjsixti * obj , const real_T x [ 8 ] ) {
real_T v ; int32_T mLB ; int32_T ix ; real_T c ; int32_T b_ix ; mLB = obj ->
sizes [ 3 ] ; if ( obj -> probType == 2 ) { obj -> maxConstrWorkspace [ 0 ] =
obj -> beq ; obj -> maxConstrWorkspace [ 0 ] = - obj -> maxConstrWorkspace [
0 ] ; b_ix = 0 ; c = 0.0 ; for ( ix = 0 ; ix < 5 ; ix ++ ) { c += obj -> Aeq
[ ix ] * x [ b_ix ] ; b_ix ++ ; } obj -> maxConstrWorkspace [ 0 ] += c ; obj
-> maxConstrWorkspace [ 0 ] = ( obj -> maxConstrWorkspace [ 0 ] - x [ 5 ] ) +
x [ 6 ] ; v = muDoubleScalarMax ( 0.0 , muDoubleScalarAbs ( obj ->
maxConstrWorkspace [ 0 ] ) ) ; } else { obj -> maxConstrWorkspace [ 0 ] = obj
-> beq ; obj -> maxConstrWorkspace [ 0 ] = - obj -> maxConstrWorkspace [ 0 ]
; ix = 0 ; c = 0.0 ; for ( b_ix = 1 ; b_ix <= obj -> nVar ; b_ix ++ ) { c +=
obj -> Aeq [ b_ix - 1 ] * x [ ix ] ; ix ++ ; } obj -> maxConstrWorkspace [ 0
] += c ; v = muDoubleScalarMax ( 0.0 , muDoubleScalarAbs ( obj ->
maxConstrWorkspace [ 0 ] ) ) ; } if ( mLB > 0 ) { for ( ix = 0 ; ix < mLB ;
ix ++ ) { v = muDoubleScalarMax ( v , - x [ obj -> indexLB [ ix ] - 1 ] - obj
-> lb [ obj -> indexLB [ ix ] - 1 ] ) ; } } return v ; } static void
bw4msbp20m ( fovverijux * solution , ktaxowovvf * memspace , kdxyjsixti *
workingset , dzrlw5sxs5 * qrmanager ) { int32_T b ; real_T c [ 8 ] ;
boolean_T okWorkingSet ; real_T constrViolation ; boolean_T guard1 = false ;
solution -> state = 82 ; b = bt35m0mjfw ( memspace , workingset , qrmanager )
; if ( b != - 1 ) { gfhhinglrq ( workingset , qrmanager , memspace , 100.0 )
; memcpy ( & c [ 0 ] , & solution -> xstar [ 0 ] , sizeof ( real_T ) << 3U )
; okWorkingSet = g3dskjwjcw ( memspace -> workspace_double , c , workingset ,
qrmanager ) ; memcpy ( & solution -> xstar [ 0 ] , & c [ 0 ] , sizeof (
real_T ) << 3U ) ; guard1 = false ; if ( ! okWorkingSet ) { gfhhinglrq (
workingset , qrmanager , memspace , 1000.0 ) ; okWorkingSet = g3dskjwjcw (
memspace -> workspace_double , c , workingset , qrmanager ) ; memcpy ( &
solution -> xstar [ 0 ] , & c [ 0 ] , sizeof ( real_T ) << 3U ) ; if ( !
okWorkingSet ) { solution -> state = - 7 ; } else { guard1 = true ; } } else
{ guard1 = true ; } if ( guard1 ) { if ( workingset -> nWConstr [ 0 ] +
workingset -> nWConstr [ 1 ] == workingset -> nVar ) { constrViolation =
gtxetnnm2kf ( workingset , solution -> xstar ) ; if ( constrViolation >
1.0E-6 ) { solution -> state = - 2 ; } } } } else { solution -> state = - 3 ;
hmiqzf5p5q ( workingset ) ; } } static void bbhkemzkfn ( k0ratk1n10 * obj ,
int32_T NumVars ) { obj -> prev_objtype = obj -> objtype ; obj -> prev_nvar =
obj -> nvar ; obj -> prev_hasLinear = obj -> hasLinear ; obj -> objtype = 5 ;
obj -> nvar = NumVars ; obj -> gammaScalar = 1.0 ; obj -> hasLinear = true ;
} static void hrefiazefh ( boolean_T obj_hasLinear , int32_T obj_nvar ,
real_T workspace [ 64 ] , const real_T H [ 25 ] , const real_T f [ 8 ] ,
const real_T x [ 8 ] ) { int32_T fMultiplier ; int32_T iy ; real_T c ;
int32_T iac ; int32_T b ; int32_T ia ; int32_T b_c ; fMultiplier = 0 ; if (
obj_hasLinear ) { while ( fMultiplier <= obj_nvar - 1 ) { workspace [
fMultiplier ] = f [ fMultiplier ] ; fMultiplier ++ ; } fMultiplier = 1 ; } if
( obj_nvar != 0 ) { if ( fMultiplier != 1 ) { while ( fMultiplier <= obj_nvar
- 1 ) { workspace [ fMultiplier ] = 0.0 ; fMultiplier ++ ; } } fMultiplier =
0 ; b_c = ( obj_nvar - 1 ) * obj_nvar + 1 ; iac = 1 ; while ( ( ( obj_nvar >
0 ) && ( iac <= b_c ) ) || ( ( obj_nvar < 0 ) && ( iac >= b_c ) ) ) { c = 0.5
* x [ fMultiplier ] ; iy = 0 ; b = ( iac + obj_nvar ) - 1 ; for ( ia = iac ;
ia <= b ; ia ++ ) { workspace [ iy ] += H [ ia - 1 ] * c ; iy ++ ; }
fMultiplier ++ ; iac += obj_nvar ; } } } static real_T aqnjqmfea4 ( const
k0ratk1n10 * obj , real_T workspace [ 64 ] , const real_T H [ 25 ] , const
real_T f [ 8 ] , const real_T x [ 8 ] ) { real_T val ; int32_T b_k ; val =
0.0 ; switch ( obj -> objtype ) { case 5 : val = x [ obj -> nvar - 1 ] * obj
-> gammaScalar ; break ; case 3 : hrefiazefh ( obj -> hasLinear , obj -> nvar
, workspace , H , f , x ) ; if ( obj -> nvar >= 1 ) { for ( b_k = 0 ; b_k <
obj -> nvar ; b_k ++ ) { val += x [ b_k ] * workspace [ b_k ] ; } } break ;
case 4 : hrefiazefh ( obj -> hasLinear , obj -> nvar , workspace , H , f , x
) ; for ( b_k = obj -> nvar ; b_k + 1 < 8 ; b_k ++ ) { workspace [ b_k ] =
0.5 * obj -> beta * x [ b_k ] + obj -> rho ; } for ( b_k = 0 ; b_k < 7 ; b_k
++ ) { val += x [ b_k ] * workspace [ b_k ] ; } break ; } return val ; }
static void kn3nzhqflfe0 ( int32_T m , int32_T n , const real_T A [ 25 ] ,
int32_T lda , const real_T x [ 8 ] , real_T y [ 7 ] ) { int32_T iy ; int32_T
ix ; int32_T iac ; int32_T b ; int32_T ia ; int32_T c ; if ( ( m != 0 ) && (
n != 0 ) ) { for ( ix = 0 ; ix < m ; ix ++ ) { y [ ix ] = 0.0 ; } ix = 0 ; c
= ( n - 1 ) * lda + 1 ; iac = 1 ; while ( ( ( lda > 0 ) && ( iac <= c ) ) ||
( ( lda < 0 ) && ( iac >= c ) ) ) { iy = 0 ; b = ( iac + m ) - 1 ; for ( ia =
iac ; ia <= b ; ia ++ ) { y [ iy ] += A [ ia - 1 ] * x [ ix ] ; iy ++ ; } ix
++ ; iac += lda ; } } } static void h35xb0f5lh ( k0ratk1n10 * obj , const
real_T H [ 25 ] , const real_T f [ 8 ] , const real_T x [ 8 ] ) { int32_T k ;
int32_T iy ; switch ( obj -> objtype ) { case 5 : for ( iy = 0 ; iy <= obj ->
nvar - 2 ; iy ++ ) { obj -> grad [ iy ] = 0.0 ; } obj -> grad [ obj -> nvar -
1 ] = obj -> gammaScalar ; break ; case 3 : kn3nzhqflfe0 ( obj -> nvar , obj
-> nvar , H , obj -> nvar , x , obj -> Hx ) ; for ( iy = 0 ; iy < obj -> nvar
; iy ++ ) { obj -> grad [ iy ] = obj -> Hx [ iy ] ; } if ( obj -> hasLinear
&& ( obj -> nvar >= 1 ) ) { iy = obj -> nvar - 1 ; for ( k = 0 ; k <= iy ; k
++ ) { obj -> grad [ k ] += f [ k ] ; } } break ; case 4 : kn3nzhqflfe0 ( obj
-> nvar , obj -> nvar , H , obj -> nvar , x , obj -> Hx ) ; for ( iy = obj ->
nvar ; iy + 1 < 8 ; iy ++ ) { obj -> Hx [ iy ] = obj -> beta * x [ iy ] ; }
for ( iy = 0 ; iy < 7 ; iy ++ ) { obj -> grad [ iy ] = obj -> Hx [ iy ] ; }
if ( obj -> hasLinear && ( obj -> nvar >= 1 ) ) { iy = obj -> nvar - 1 ; for
( k = 0 ; k <= iy ; k ++ ) { obj -> grad [ k ] += f [ k ] ; } } if ( 7 - obj
-> nvar >= 1 ) { iy = obj -> nvar ; for ( k = 0 ; k <= 6 - obj -> nvar ; k ++
) { obj -> grad [ iy ] += obj -> rho ; iy ++ ; } } break ; } } static real_T
c2n2v1sbdi ( const k0ratk1n10 * obj , real_T workspace [ 64 ] , const real_T
f [ 8 ] , const real_T x [ 8 ] ) { real_T val ; int32_T b_k ; val = 0.0 ;
switch ( obj -> objtype ) { case 5 : val = x [ obj -> nvar - 1 ] * obj ->
gammaScalar ; break ; case 3 : if ( obj -> hasLinear ) { for ( b_k = 0 ; b_k
< obj -> nvar ; b_k ++ ) { workspace [ b_k ] = 0.5 * obj -> Hx [ b_k ] + f [
b_k ] ; } if ( obj -> nvar >= 1 ) { for ( b_k = 0 ; b_k < obj -> nvar ; b_k
++ ) { val += x [ b_k ] * workspace [ b_k ] ; } } } else { if ( obj -> nvar
>= 1 ) { for ( b_k = 0 ; b_k < obj -> nvar ; b_k ++ ) { val += x [ b_k ] *
obj -> Hx [ b_k ] ; } } val *= 0.5 ; } break ; case 4 : if ( obj -> hasLinear
) { for ( b_k = 0 ; b_k < obj -> nvar ; b_k ++ ) { workspace [ b_k ] = f [
b_k ] ; } for ( b_k = 0 ; b_k <= 6 - obj -> nvar ; b_k ++ ) { workspace [ obj
-> nvar + b_k ] = obj -> rho ; } for ( b_k = 0 ; b_k < 7 ; b_k ++ ) {
workspace [ b_k ] += 0.5 * obj -> Hx [ b_k ] ; val += x [ b_k ] * workspace [
b_k ] ; } } else { for ( b_k = 0 ; b_k < 7 ; b_k ++ ) { val += x [ b_k ] *
obj -> Hx [ b_k ] ; } val *= 0.5 ; for ( b_k = obj -> nvar ; b_k + 1 < 8 ;
b_k ++ ) { val += x [ b_k ] * obj -> rho ; } } break ; } return val ; }
static void kuqjqcuopxe ( int32_T n , real_T y [ 4 ] ) { int32_T k ; for ( k
= 0 ; k < n ; k ++ ) { y [ k ] = 0.0 ; } } static void kuqjqcuopxe5sa (
int32_T n , real_T y [ 8 ] ) { int32_T k ; for ( k = 0 ; k < n ; k ++ ) { y [
k ] = 0.0 ; } } static void jym3k4ksh1 ( real_T * a , real_T * b , real_T * c
, real_T * s ) { real_T roe ; real_T absa ; real_T absb ; real_T scale ;
real_T ads ; real_T bds ; roe = * b ; absa = muDoubleScalarAbs ( * a ) ; absb
= muDoubleScalarAbs ( * b ) ; if ( absa > absb ) { roe = * a ; } scale = absa
+ absb ; if ( scale == 0.0 ) { * s = 0.0 ; * c = 1.0 ; * b = 0.0 ; } else {
ads = absa / scale ; bds = absb / scale ; scale *= muDoubleScalarSqrt ( ads *
ads + bds * bds ) ; if ( roe < 0.0 ) { scale = - scale ; } * c = * a / scale
; * s = * b / scale ; if ( absa > absb ) { * b = * s ; } else if ( * c != 0.0
) { * b = 1.0 / * c ; } else { * b = 1.0 ; } } * a = scale ; } static void
oidsdg2ozf ( dzrlw5sxs5 * obj , const real_T vec [ 32 ] , int32_T iv0 ) {
int32_T iQR0 ; real_T c ; real_T s ; real_T x [ 64 ] ; int32_T iyend ;
int32_T ix ; real_T c_c ; int32_T d ; int32_T ia ; int32_T c_iy ; real_T temp
; iQR0 = obj -> ncols + 1 ; obj -> minRowCol = muIntScalarMin_sint32 ( obj ->
mrows , iQR0 ) ; iQR0 = obj -> ncols << 3 ; if ( obj -> mrows != 0 ) { iyend
= iQR0 + obj -> mrows ; for ( c_iy = iQR0 ; c_iy < iyend ; c_iy ++ ) { obj ->
QR [ c_iy ] = 0.0 ; } iyend = ( obj -> mrows - 1 ) << 3 ; for ( c_iy = 1 ;
c_iy <= iyend + 1 ; c_iy += 8 ) { ix = iv0 ; c_c = 0.0 ; d = ( c_iy + obj ->
mrows ) - 1 ; for ( ia = c_iy ; ia <= d ; ia ++ ) { c_c += obj -> Q [ ia - 1
] * vec [ ix - 1 ] ; ix ++ ; } obj -> QR [ iQR0 ] += c_c ; iQR0 ++ ; } } obj
-> ncols ++ ; obj -> jpvt [ obj -> ncols - 1 ] = obj -> ncols ; for ( iQR0 =
obj -> mrows - 2 ; iQR0 + 2 > obj -> ncols ; iQR0 -- ) { temp = obj -> QR [ (
( obj -> ncols - 1 ) << 3 ) + iQR0 ] ; c = obj -> QR [ ( ( ( obj -> ncols - 1
) << 3 ) + iQR0 ) + 1 ] ; jym3k4ksh1 ( & temp , & c , & c_c , & s ) ; obj ->
QR [ iQR0 + ( ( obj -> ncols - 1 ) << 3 ) ] = temp ; obj -> QR [ ( iQR0 + ( (
obj -> ncols - 1 ) << 3 ) ) + 1 ] = c ; iyend = iQR0 << 3 ; memcpy ( & x [ 0
] , & obj -> Q [ 0 ] , sizeof ( real_T ) << 6U ) ; if ( obj -> mrows >= 1 ) {
c_iy = iyend + 8 ; for ( ix = 0 ; ix < obj -> mrows ; ix ++ ) { temp = c_c *
x [ iyend ] + s * x [ c_iy ] ; x [ c_iy ] = c_c * x [ c_iy ] - s * x [ iyend
] ; x [ iyend ] = temp ; c_iy ++ ; iyend ++ ; } } memcpy ( & obj -> Q [ 0 ] ,
& x [ 0 ] , sizeof ( real_T ) << 6U ) ; } } static void j1hgrtckni (
dzrlw5sxs5 * obj , int32_T idx ) { int32_T i ; int32_T k ; int32_T QRk0 ;
real_T e ; real_T c_c ; real_T b_s ; real_T x [ 64 ] ; int32_T b_ix ; real_T
b_temp ; int32_T e_k ; int32_T d_iy ; if ( obj -> usedPivoting ) { i = 1 ;
while ( ( i <= obj -> ncols ) && ( obj -> jpvt [ i - 1 ] != idx ) ) { i ++ ;
} idx = i ; } if ( idx >= obj -> ncols ) { obj -> ncols -- ; } else { obj ->
jpvt [ idx - 1 ] = obj -> jpvt [ obj -> ncols - 1 ] ; for ( i = 0 ; i < obj
-> minRowCol ; i ++ ) { obj -> QR [ i + ( ( idx - 1 ) << 3 ) ] = obj -> QR [
( ( obj -> ncols - 1 ) << 3 ) + i ] ; } obj -> ncols -- ; obj -> minRowCol =
muIntScalarMin_sint32 ( obj -> mrows , obj -> ncols ) ; if ( idx < obj ->
mrows ) { d_iy = obj -> mrows - 1 ; i = muIntScalarMin_sint32 ( d_iy , obj ->
ncols ) ; for ( k = i ; k >= idx ; k -- ) { b_temp = obj -> QR [ ( ( ( idx -
1 ) << 3 ) + k ) - 1 ] ; e = obj -> QR [ ( ( idx - 1 ) << 3 ) + k ] ;
jym3k4ksh1 ( & b_temp , & e , & c_c , & b_s ) ; obj -> QR [ ( k + ( ( idx - 1
) << 3 ) ) - 1 ] = b_temp ; obj -> QR [ k + ( ( idx - 1 ) << 3 ) ] = e ; obj
-> QR [ k + ( ( k - 1 ) << 3 ) ] = 0.0 ; QRk0 = ( idx << 3 ) + k ; d_iy = obj
-> ncols - idx ; memcpy ( & x [ 0 ] , & obj -> QR [ 0 ] , sizeof ( real_T )
<< 6U ) ; if ( d_iy >= 1 ) { b_ix = QRk0 - 1 ; for ( e_k = 0 ; e_k < d_iy ;
e_k ++ ) { b_temp = c_c * x [ b_ix ] + b_s * x [ QRk0 ] ; x [ QRk0 ] = c_c *
x [ QRk0 ] - b_s * x [ b_ix ] ; x [ b_ix ] = b_temp ; QRk0 += 8 ; b_ix += 8 ;
} } QRk0 = ( k - 1 ) << 3 ; for ( d_iy = 0 ; d_iy < 64 ; d_iy ++ ) { obj ->
QR [ d_iy ] = x [ d_iy ] ; x [ d_iy ] = obj -> Q [ d_iy ] ; } if ( obj ->
mrows >= 1 ) { d_iy = QRk0 + 8 ; for ( b_ix = 0 ; b_ix < obj -> mrows ; b_ix
++ ) { b_temp = c_c * x [ QRk0 ] + b_s * x [ d_iy ] ; x [ d_iy ] = c_c * x [
d_iy ] - b_s * x [ QRk0 ] ; x [ QRk0 ] = b_temp ; d_iy ++ ; QRk0 ++ ; } }
memcpy ( & obj -> Q [ 0 ] , & x [ 0 ] , sizeof ( real_T ) << 6U ) ; } for ( k
= idx ; k < i ; k ++ ) { b_temp = obj -> QR [ ( k << 3 ) + k ] ; e = obj ->
QR [ ( ( k << 3 ) + k ) + 1 ] ; jym3k4ksh1 ( & b_temp , & e , & c_c , & b_s )
; obj -> QR [ k + ( k << 3 ) ] = b_temp ; obj -> QR [ ( k + ( k << 3 ) ) + 1
] = e ; QRk0 = ( k + 1 ) * 9 ; d_iy = ( obj -> ncols - k ) - 2 ; memcpy ( & x
[ 0 ] , & obj -> QR [ 0 ] , sizeof ( real_T ) << 6U ) ; if ( d_iy + 1 >= 1 )
{ b_ix = QRk0 - 1 ; for ( e_k = 0 ; e_k <= d_iy ; e_k ++ ) { b_temp = c_c * x
[ b_ix ] + b_s * x [ QRk0 ] ; x [ QRk0 ] = c_c * x [ QRk0 ] - b_s * x [ b_ix
] ; x [ b_ix ] = b_temp ; QRk0 += 8 ; b_ix += 8 ; } } QRk0 = k << 3 ; for (
d_iy = 0 ; d_iy < 64 ; d_iy ++ ) { obj -> QR [ d_iy ] = x [ d_iy ] ; x [ d_iy
] = obj -> Q [ d_iy ] ; } if ( obj -> mrows >= 1 ) { d_iy = QRk0 + 8 ; for (
b_ix = 0 ; b_ix < obj -> mrows ; b_ix ++ ) { b_temp = c_c * x [ QRk0 ] + b_s
* x [ d_iy ] ; x [ d_iy ] = c_c * x [ d_iy ] - b_s * x [ QRk0 ] ; x [ QRk0 ]
= b_temp ; d_iy ++ ; QRk0 ++ ; } } memcpy ( & obj -> Q [ 0 ] , & x [ 0 ] ,
sizeof ( real_T ) << 6U ) ; } } } } static void k24gkerz4mwi ( int32_T m ,
int32_T n , int32_T k , const real_T A [ 25 ] , int32_T lda , const real_T
B_c [ 64 ] , int32_T ib0 , real_T C [ 64 ] ) { int32_T br ; int32_T ar ;
int32_T ia ; int32_T b_cr ; int32_T c ; int32_T ib ; int32_T d ; int32_T b_ic
; int32_T b_c ; if ( ( m != 0 ) && ( n != 0 ) ) { b_c = ( n - 1 ) << 3 ; for
( br = 0 ; br <= b_c ; br += 8 ) { b_cr = br + m ; for ( ar = br ; ar < b_cr
; ar ++ ) { C [ ar ] = 0.0 ; } } br = ib0 ; for ( b_cr = 0 ; b_cr <= b_c ;
b_cr += 8 ) { ar = - 1 ; c = br + k ; for ( ib = br ; ib < c ; ib ++ ) { ia =
ar ; d = b_cr + m ; for ( b_ic = b_cr ; b_ic < d ; b_ic ++ ) { ia ++ ; C [
b_ic ] += B_c [ ib - 1 ] * A [ ia ] ; } ar += lda ; } br += 8 ; } } } static
void k24gkerz4mwi3 ( int32_T m , int32_T n , int32_T k , const real_T A [ 64
] , int32_T ia0 , const real_T B_f [ 64 ] , real_T C [ 64 ] ) { int32_T br ;
int32_T ar ; real_T temp ; int32_T b_cr ; int32_T c ; int32_T b_ic ; int32_T
w ; int32_T b_c ; if ( ( m != 0 ) && ( n != 0 ) ) { b_c = ( n - 1 ) << 3 ;
for ( br = 0 ; br <= b_c ; br += 8 ) { b_cr = br + m ; for ( ar = br ; ar <
b_cr ; ar ++ ) { C [ ar ] = 0.0 ; } } br = - 1 ; for ( b_cr = 0 ; b_cr <= b_c
; b_cr += 8 ) { ar = ia0 ; c = b_cr + m ; for ( b_ic = b_cr ; b_ic < c ; b_ic
++ ) { temp = 0.0 ; for ( w = 1 ; w - 1 < k ; w ++ ) { temp += A [ ( w + ar )
- 2 ] * B_f [ w + br ] ; } C [ b_ic ] += temp ; ar += 8 ; } br += 8 ; } } }
static void nm5kzkxjjr ( real_T beta , const real_T H [ 25 ] , int32_T
nVarOrig , csm4ifxwet * cholmanager , const dzrlw5sxs5 * qrmanager ,
ktaxowovvf * memspace ) { int32_T mNull ; int32_T nullStart ; int32_T
b_idx_col ; int32_T idx_row ; mNull = qrmanager -> mrows - qrmanager -> ncols
; nullStart = ( qrmanager -> ncols << 3 ) + 1 ; k24gkerz4mwi ( nVarOrig ,
mNull , nVarOrig , H , nVarOrig , qrmanager -> Q , nullStart , memspace ->
workspace_double ) ; for ( b_idx_col = 0 ; b_idx_col < mNull ; b_idx_col ++ )
{ for ( idx_row = nVarOrig ; idx_row < qrmanager -> mrows ; idx_row ++ ) {
memspace -> workspace_double [ idx_row + ( b_idx_col << 3 ) ] = qrmanager ->
Q [ ( ( b_idx_col + qrmanager -> ncols ) << 3 ) + idx_row ] * beta ; } }
k24gkerz4mwi3 ( mNull , mNull , qrmanager -> mrows , qrmanager -> Q ,
nullStart , memspace -> workspace_double , cholmanager -> FMat ) ; } static
void ktr41uv2na ( const real_T H [ 25 ] , csm4ifxwet * cholmanager , const
dzrlw5sxs5 * qrmanager , ktaxowovvf * memspace ) { int32_T mNull ; int32_T
nullStart ; mNull = qrmanager -> mrows - qrmanager -> ncols ; nullStart = (
qrmanager -> ncols << 3 ) + 1 ; k24gkerz4mwi ( qrmanager -> mrows , mNull ,
qrmanager -> mrows , H , qrmanager -> mrows , qrmanager -> Q , nullStart ,
memspace -> workspace_double ) ; k24gkerz4mwi3 ( mNull , mNull , qrmanager ->
mrows , qrmanager -> Q , nullStart , memspace -> workspace_double ,
cholmanager -> FMat ) ; } static int32_T aygsb3ylw4 ( int32_T n , real_T A [
64 ] ) { int32_T info ; int32_T idxA1j ; int32_T idxAjj ; real_T ssq ;
int32_T b_j ; int32_T ix ; real_T c ; int32_T iac ; int32_T d ; int32_T ia ;
int32_T b_ix ; int32_T b_iy ; int32_T b_k ; boolean_T exitg1 ; info = 0 ; b_j
= 0 ; exitg1 = false ; while ( ( ! exitg1 ) && ( b_j <= n - 1 ) ) { idxA1j =
b_j << 3 ; idxAjj = idxA1j + b_j ; ssq = 0.0 ; if ( b_j >= 1 ) { b_ix =
idxA1j ; b_iy = idxA1j ; for ( b_k = 0 ; b_k < b_j ; b_k ++ ) { ssq += A [
b_ix ] * A [ b_iy ] ; b_ix ++ ; b_iy ++ ; } } ssq = A [ idxAjj ] - ssq ; if (
ssq > 0.0 ) { ssq = muDoubleScalarSqrt ( ssq ) ; A [ idxAjj ] = ssq ; if (
b_j + 1 < n ) { b_ix = ( n - b_j ) - 2 ; if ( ( b_j != 0 ) && ( b_ix + 1 != 0
) ) { b_iy = idxAjj + 8 ; b_k = ( ( b_ix << 3 ) + idxA1j ) + 9 ; for ( iac =
idxA1j + 9 ; iac <= b_k ; iac += 8 ) { ix = idxA1j ; c = 0.0 ; d = ( iac +
b_j ) - 1 ; for ( ia = iac ; ia <= d ; ia ++ ) { c += A [ ia - 1 ] * A [ ix ]
; ix ++ ; } A [ b_iy ] += - c ; b_iy += 8 ; } } ssq = 1.0 / ssq ; idxA1j = (
( b_ix << 3 ) + idxAjj ) + 9 ; for ( idxAjj += 8 ; idxAjj + 1 <= idxA1j ;
idxAjj += 8 ) { A [ idxAjj ] *= ssq ; } } b_j ++ ; } else { A [ idxAjj ] =
ssq ; info = b_j + 1 ; exitg1 = true ; } } return info ; } static void
b1nnfethkch ( csm4ifxwet * obj , int32_T ndims ) { obj -> ndims = ndims ; obj
-> info = aygsb3ylw4 ( ndims , obj -> FMat ) ; } static void kn3nzhqflfe0st (
int32_T m , int32_T n , const real_T A [ 64 ] , int32_T ia0 , const real_T x
[ 8 ] , real_T y [ 64 ] ) { int32_T ix ; real_T c ; int32_T b_iy ; int32_T b
; int32_T iac ; int32_T d ; int32_T ia ; if ( m != 0 ) { for ( b_iy = 0 ;
b_iy < n ; b_iy ++ ) { y [ b_iy ] = 0.0 ; } b_iy = 0 ; b = ( ( n - 1 ) << 3 )
+ ia0 ; for ( iac = ia0 ; iac <= b ; iac += 8 ) { ix = 0 ; c = 0.0 ; d = (
iac + m ) - 1 ; for ( ia = iac ; ia <= d ; ia ++ ) { c += A [ ia - 1 ] * x [
ix ] ; ix ++ ; } y [ b_iy ] += - c ; b_iy ++ ; } } } static void av2g5h2imfm
( const csm4ifxwet * obj , real_T rhs [ 64 ] ) { real_T temp ; int32_T b_j ;
int32_T b_i ; int32_T c ; for ( b_j = 0 ; b_j < obj -> ndims ; b_j ++ ) { c =
b_j << 3 ; temp = rhs [ b_j ] ; for ( b_i = 0 ; b_i < b_j ; b_i ++ ) { temp
-= obj -> FMat [ c + b_i ] * rhs [ b_i ] ; } rhs [ b_j ] = temp / obj -> FMat
[ c + b_j ] ; } clax1tb0ex ( obj -> ndims , obj -> FMat , rhs ) ; } static
void kn3nzhqflfe0s ( int32_T m , int32_T n , const real_T A [ 64 ] , int32_T
ia0 , const real_T x [ 64 ] , real_T y [ 8 ] ) { int32_T iy ; int32_T ix ;
int32_T b ; int32_T iac ; int32_T c ; int32_T ia ; if ( m != 0 ) { for ( ix =
0 ; ix < m ; ix ++ ) { y [ ix ] = 0.0 ; } ix = 0 ; b = ( ( n - 1 ) << 3 ) +
ia0 ; for ( iac = ia0 ; iac <= b ; iac += 8 ) { iy = 0 ; c = ( iac + m ) - 1
; for ( ia = iac ; ia <= c ; ia ++ ) { y [ iy ] += A [ ia - 1 ] * x [ ix ] ;
iy ++ ; } ix ++ ; } } } static void b1nnfethkc ( csm4ifxwet * obj , const
real_T A [ 25 ] , int32_T ndims , int32_T ldA ) { int32_T iA0 ; int32_T iUU0
; int32_T b_idx ; int32_T k ; obj -> ndims = ndims ; for ( b_idx = 0 ; b_idx
< ndims ; b_idx ++ ) { iA0 = ldA * b_idx ; iUU0 = b_idx << 3 ; for ( k = 1 ;
k - 1 < ndims ; k ++ ) { obj -> FMat [ ( iUU0 + k ) - 1 ] = A [ ( iA0 + k ) -
1 ] ; } } obj -> info = aygsb3ylw4 ( ndims , obj -> FMat ) ; } static void
av2g5h2imf ( const csm4ifxwet * obj , real_T rhs [ 8 ] ) { real_T temp ;
int32_T b_j ; int32_T jjA ; int32_T ix ; int32_T c ; if ( obj -> ndims != 0 )
{ for ( b_j = 0 ; b_j < obj -> ndims ; b_j ++ ) { c = b_j << 3 ; temp = rhs [
b_j ] ; for ( ix = 0 ; ix < b_j ; ix ++ ) { temp -= obj -> FMat [ c + ix ] *
rhs [ ix ] ; } rhs [ b_j ] = temp / obj -> FMat [ c + b_j ] ; } for ( b_j =
obj -> ndims - 1 ; b_j + 1 > 0 ; b_j -- ) { jjA = ( b_j << 3 ) + b_j ; rhs [
b_j ] /= obj -> FMat [ jjA ] ; for ( c = 1 ; c - 1 < b_j ; c ++ ) { ix = b_j
- c ; rhs [ ix ] -= obj -> FMat [ jjA - c ] * rhs [ b_j ] ; } } } } static
void k0tzi03qhr ( int32_T n , real_T a , real_T x [ 8 ] , int32_T ix0 ) {
int32_T b ; int32_T k ; b = ( ix0 + n ) - 1 ; for ( k = ix0 ; k <= b ; k ++ )
{ x [ k - 1 ] *= a ; } } static void ikm0pinmtt ( const real_T H [ 25 ] ,
fovverijux * solution , ktaxowovvf * memspace , const dzrlw5sxs5 * qrmanager
, csm4ifxwet * cholmanager , const k0ratk1n10 * objective ) { int32_T nVar ;
int32_T mNull ; int32_T nullStartIdx ; real_T c [ 64 ] ; int32_T d_idx ; nVar
= qrmanager -> mrows - 1 ; mNull = qrmanager -> mrows - qrmanager -> ncols ;
if ( mNull <= 0 ) { for ( mNull = 0 ; mNull <= nVar ; mNull ++ ) { solution
-> searchDir [ mNull ] = 0.0 ; } } else { for ( nullStartIdx = 0 ;
nullStartIdx <= nVar ; nullStartIdx ++ ) { solution -> searchDir [
nullStartIdx ] = - objective -> grad [ nullStartIdx ] ; } if ( qrmanager ->
ncols <= 0 ) { switch ( objective -> objtype ) { case 5 : break ; case 3 :
b1nnfethkc ( cholmanager , H , qrmanager -> mrows , qrmanager -> mrows ) ; if
( cholmanager -> info != 0 ) { solution -> state = - 6 ; } else { av2g5h2imf
( cholmanager , solution -> searchDir ) ; } break ; case 4 : b1nnfethkc (
cholmanager , H , objective -> nvar , objective -> nvar ) ; if ( cholmanager
-> info != 0 ) { solution -> state = - 6 ; } else { av2g5h2imf ( cholmanager
, solution -> searchDir ) ; k0tzi03qhr ( qrmanager -> mrows - objective ->
nvar , 1.0 / objective -> beta , solution -> searchDir , objective -> nvar +
1 ) ; } break ; } } else { nullStartIdx = ( qrmanager -> ncols << 3 ) + 1 ;
if ( objective -> objtype == 5 ) { for ( d_idx = 0 ; d_idx < mNull ; d_idx ++
) { memspace -> workspace_double [ d_idx ] = - qrmanager -> Q [ ( ( qrmanager
-> ncols + d_idx ) << 3 ) + nVar ] ; } kn3nzhqflfe0s ( qrmanager -> mrows ,
mNull , qrmanager -> Q , nullStartIdx , memspace -> workspace_double ,
solution -> searchDir ) ; } else { if ( objective -> objtype == 3 ) {
ktr41uv2na ( H , cholmanager , qrmanager , memspace ) ; } else { nm5kzkxjjr (
objective -> beta , H , objective -> nvar , cholmanager , qrmanager ,
memspace ) ; } b1nnfethkch ( cholmanager , mNull ) ; if ( cholmanager -> info
!= 0 ) { solution -> state = - 6 ; } else { kn3nzhqflfe0st ( qrmanager ->
mrows , mNull , qrmanager -> Q , nullStartIdx , objective -> grad , memspace
-> workspace_double ) ; memcpy ( & c [ 0 ] , & memspace -> workspace_double [
0 ] , sizeof ( real_T ) << 6U ) ; av2g5h2imfm ( cholmanager , c ) ; memcpy (
& memspace -> workspace_double [ 0 ] , & c [ 0 ] , sizeof ( real_T ) << 6U )
; kn3nzhqflfe0s ( qrmanager -> mrows , mNull , qrmanager -> Q , nullStartIdx
, c , solution -> searchDir ) ; } } } } } static real_T hi3mqzewxva ( int32_T
n , const real_T x [ 8 ] ) { real_T y ; real_T scale ; real_T absxk ; real_T
t ; int32_T k ; y = 0.0 ; if ( n >= 1 ) { if ( n == 1 ) { y =
muDoubleScalarAbs ( x [ 0 ] ) ; } else { scale = 3.3121686421112381E-170 ;
for ( k = 0 ; k < n ; k ++ ) { absxk = muDoubleScalarAbs ( x [ k ] ) ; if (
absxk > scale ) { t = scale / absxk ; y = y * t * t + 1.0 ; scale = absxk ; }
else { t = absxk / scale ; y += t * t ; } } y = scale * muDoubleScalarSqrt (
y ) ; } } return y ; } static void lk3yxeq3po ( const real_T solution_xstar [
8 ] , const real_T solution_searchDir [ 8 ] , int32_T workingset_nVar , const
real_T workingset_lb [ 8 ] , const int32_T workingset_indexLB [ 8 ] , const
int32_T workingset_sizes [ 5 ] , const boolean_T workingset_isActiveConstr [
4 ] , const int32_T workingset_nWConstr [ 5 ] , boolean_T isPhaseOne , real_T
* alpha , boolean_T * newBlocking , int32_T * constrType , int32_T *
constrIdx ) { real_T denomTol ; real_T phaseOneCorrectionX ; real_T
phaseOneCorrectionP ; real_T pk_corrected ; real_T ratio ; int32_T b_idx ; *
alpha = 1.0E+30 ; * newBlocking = false ; * constrType = 0 ; * constrIdx = 0
; denomTol = 2.2204460492503131E-13 * hi3mqzewxva ( workingset_nVar ,
solution_searchDir ) ; if ( workingset_nWConstr [ 3 ] < workingset_sizes [ 3
] ) { phaseOneCorrectionX = solution_xstar [ workingset_nVar - 1 ] * ( real_T
) isPhaseOne ; phaseOneCorrectionP = solution_searchDir [ workingset_nVar - 1
] * ( real_T ) isPhaseOne ; for ( b_idx = 0 ; b_idx <= workingset_sizes [ 3 ]
- 2 ; b_idx ++ ) { pk_corrected = - solution_searchDir [ workingset_indexLB [
b_idx ] - 1 ] - phaseOneCorrectionP ; if ( ( pk_corrected > denomTol ) && ( !
workingset_isActiveConstr [ b_idx + 1 ] ) ) { ratio = ( - solution_xstar [
workingset_indexLB [ b_idx ] - 1 ] - workingset_lb [ workingset_indexLB [
b_idx ] - 1 ] ) - phaseOneCorrectionX ; ratio = muDoubleScalarMin (
muDoubleScalarAbs ( ratio ) , 1.0E-6 - ratio ) / pk_corrected ; if ( ratio <
* alpha ) { * alpha = ratio ; * constrType = 4 ; * constrIdx = b_idx + 1 ; *
newBlocking = true ; } } } if ( ( - solution_searchDir [ workingset_indexLB [
workingset_sizes [ 3 ] - 1 ] - 1 ] > denomTol ) && ( !
workingset_isActiveConstr [ workingset_sizes [ 3 ] ] ) ) { ratio = -
solution_xstar [ workingset_indexLB [ workingset_sizes [ 3 ] - 1 ] - 1 ] -
workingset_lb [ workingset_indexLB [ workingset_sizes [ 3 ] - 1 ] - 1 ] ;
ratio = muDoubleScalarMin ( muDoubleScalarAbs ( ratio ) , 1.0E-6 - ratio ) /
- solution_searchDir [ workingset_indexLB [ workingset_sizes [ 3 ] - 1 ] - 1
] ; if ( ratio < * alpha ) { * alpha = ratio ; * constrType = 4 ; * constrIdx
= workingset_sizes [ 3 ] ; * newBlocking = true ; } } } if ( ! isPhaseOne ) {
* newBlocking = ( ( ( ! * newBlocking ) || ( ! ( * alpha > 1.0 ) ) ) && ( *
newBlocking ) ) ; * alpha = muDoubleScalarMin ( * alpha , 1.0 ) ; } } static
void gohzdn0c14 ( fovverijux * solution , const k0ratk1n10 * objective ) { if
( objective -> objtype == 5 ) { if ( hi3mqzewxva ( objective -> nvar ,
solution -> searchDir ) > 100.0 * ( real_T ) objective -> nvar *
1.4901161193847656E-8 ) { solution -> state = 3 ; } else { solution -> state
= 4 ; } } } static void imaznvrexo ( kdxyjsixti * obj , int32_T TYPE ,
int32_T idx_local ) { int32_T idx_global ; int32_T idx_bnd_local ; int32_T
idx ; obj -> nWConstr [ TYPE - 1 ] ++ ; obj -> isActiveConstr [ ( obj ->
isActiveIdx [ TYPE - 1 ] + idx_local ) - 2 ] = true ; obj -> nActiveConstr ++
; obj -> Wid [ obj -> nActiveConstr - 1 ] = TYPE ; obj -> Wlocalidx [ obj ->
nActiveConstr - 1 ] = idx_local ; idx_global = obj -> nActiveConstr - 1 ; if
( TYPE == 5 ) { idx_bnd_local = 0 ; obj -> bwset [ obj -> nActiveConstr - 1 ]
= obj -> ub [ - 1 ] ; } else { idx_bnd_local = obj -> indexLB [ idx_local - 1
] ; obj -> bwset [ obj -> nActiveConstr - 1 ] = obj -> lb [ obj -> indexLB [
idx_local - 1 ] - 1 ] ; } for ( idx = 0 ; idx <= idx_bnd_local - 2 ; idx ++ )
{ obj -> ATwset [ idx + ( idx_global << 3 ) ] = 0.0 ; } obj -> ATwset [ (
idx_bnd_local + ( ( obj -> nActiveConstr - 1 ) << 3 ) ) - 1 ] = ( real_T ) (
TYPE == 5 ) * 2.0 - 1.0 ; while ( idx_bnd_local + 1 <= obj -> nVar ) { obj ->
ATwset [ idx_bnd_local + ( idx_global << 3 ) ] = 0.0 ; idx_bnd_local ++ ; }
switch ( obj -> probType ) { case 3 : case 2 : break ; default : obj ->
ATwset [ ( obj -> nVar + ( ( obj -> nActiveConstr - 1 ) << 3 ) ) - 1 ] = -
1.0 ; break ; } } static void o2tvol2vac ( kdxyjsixti * obj , int32_T
idx_local ) { obj -> nWConstr [ 2 ] ++ ; obj -> isActiveConstr [ ( obj ->
isActiveIdx [ 2 ] + idx_local ) - 2 ] = true ; obj -> nActiveConstr ++ ; obj
-> Wid [ obj -> nActiveConstr - 1 ] = 3 ; obj -> Wlocalidx [ obj ->
nActiveConstr - 1 ] = idx_local ; } static void kzdcud2kf2 ( int32_T n ,
real_T a , const real_T x [ 8 ] , real_T y [ 8 ] ) { int32_T k ; if ( ( n >=
1 ) && ( ! ( a == 0.0 ) ) ) { for ( k = 0 ; k < n ; k ++ ) { y [ k ] += a * x
[ k ] ; } } } static void eu5wfkvmpb ( real_T workspace [ 64 ] , fovverijux *
solution , const k0ratk1n10 * objective , const dzrlw5sxs5 * qrmanager ) {
real_T tol ; boolean_T nonDegenerate ; int32_T c_idx ; boolean_T guard1 =
false ; if ( qrmanager -> ncols > 0 ) { tol = 100.0 * ( real_T ) qrmanager ->
mrows * 2.2204460492503131E-16 ; nonDegenerate = ( ( qrmanager -> mrows > 0 )
&& ( qrmanager -> ncols > 0 ) ) ; if ( nonDegenerate ) { c_idx = qrmanager ->
ncols ; guard1 = false ; if ( qrmanager -> mrows < qrmanager -> ncols ) {
while ( ( c_idx > qrmanager -> mrows ) && ( muDoubleScalarAbs ( qrmanager ->
QR [ ( ( ( c_idx - 1 ) << 3 ) + qrmanager -> mrows ) - 1 ] ) >= tol ) ) {
c_idx -- ; } nonDegenerate = ( c_idx == qrmanager -> mrows ) ; if ( !
nonDegenerate ) { } else { guard1 = true ; } } else { guard1 = true ; } if (
guard1 ) { while ( ( c_idx >= 1 ) && ( muDoubleScalarAbs ( qrmanager -> QR [
( ( ( c_idx - 1 ) << 3 ) + c_idx ) - 1 ] ) >= tol ) ) { c_idx -- ; }
nonDegenerate = ( c_idx == 0 ) ; } } if ( ! nonDegenerate ) { solution ->
state = - 7 ; } else { kn3nzhqflf ( qrmanager -> mrows , qrmanager -> ncols ,
qrmanager -> Q , objective -> grad , workspace ) ; clax1tb0ex ( qrmanager ->
ncols , qrmanager -> QR , workspace ) ; for ( c_idx = 0 ; c_idx < qrmanager
-> ncols ; c_idx ++ ) { solution -> lambda [ c_idx ] = - workspace [ c_idx ]
; } } } } static int32_T e2cygyw51b ( const real_T solution_lambda [ 4 ] ,
int32_T workingset_nActiveConstr , const int32_T workingset_nWConstr [ 5 ] )
{ int32_T idxMinLambda ; real_T minLambda ; int32_T idx ; idxMinLambda = 0 ;
minLambda = 0.0 ; for ( idx = workingset_nWConstr [ 0 ] + workingset_nWConstr
[ 1 ] ; idx < workingset_nActiveConstr ; idx ++ ) { if ( solution_lambda [
idx ] < minLambda ) { minLambda = solution_lambda [ idx ] ; idxMinLambda =
idx + 1 ; } } return idxMinLambda ; } static int32_T lte02cae5i ( int32_T x )
{ return x - x / 50 * 50 ; } static void ovt5tsljpx ( int32_T *
activeSetChangeID , const real_T f [ 8 ] , fovverijux * solution , ktaxowovvf
* memspace , const k0ratk1n10 * objective , kdxyjsixti * workingset ,
dzrlw5sxs5 * qrmanager , real_T options_ObjectiveLimit , int32_T
runTimeOptions_MaxIterations , boolean_T updateFval ) { real_T b ; real_T d [
8 ] ; boolean_T nonDegenerateWset ; real_T constrViolation_new ; int32_T
b_idx ; solution -> iterations ++ ; if ( ( solution -> iterations >=
runTimeOptions_MaxIterations ) && ( ( solution -> state != 1 ) || ( objective
-> objtype == 5 ) ) ) { solution -> state = 0 ; } if ( lte02cae5i ( solution
-> iterations ) == 0 ) { b = gtxetnnm2kf ( workingset , solution -> xstar ) ;
solution -> maxConstr = b ; if ( b > 1.0E-6 ) { kuqjqcuopxe5s ( objective ->
nvar , solution -> xstar , solution -> searchDir ) ; memcpy ( & d [ 0 ] , &
solution -> searchDir [ 0 ] , sizeof ( real_T ) << 3U ) ; nonDegenerateWset =
g3dskjwjcw ( memspace -> workspace_double , d , workingset , qrmanager ) ;
memcpy ( & solution -> searchDir [ 0 ] , & d [ 0 ] , sizeof ( real_T ) << 3U
) ; if ( ( ! nonDegenerateWset ) && ( solution -> state != 0 ) ) { solution
-> state = - 2 ; } * activeSetChangeID = 0 ; constrViolation_new =
gtxetnnm2kf ( workingset , d ) ; if ( constrViolation_new < b ) { for ( b_idx
= 0 ; b_idx < objective -> nvar ; b_idx ++ ) { solution -> xstar [ b_idx ] =
d [ b_idx ] ; } solution -> maxConstr = constrViolation_new ; } } } if ( (
options_ObjectiveLimit > ( rtMinusInf ) ) && updateFval ) { b = c2n2v1sbdi (
objective , memspace -> workspace_double , f , solution -> xstar ) ; solution
-> fstar = b ; if ( ( b < options_ObjectiveLimit ) && ( ( solution -> state
!= 0 ) || ( objective -> objtype != 5 ) ) ) { solution -> state = 2 ; } } }
static void hdbhhxzsvv ( const real_T H [ 25 ] , const real_T f [ 8 ] ,
fovverijux * solution , ktaxowovvf * memspace , kdxyjsixti * workingset ,
dzrlw5sxs5 * qrmanager , csm4ifxwet * cholmanager , k0ratk1n10 * objective ,
real_T options_StepTolerance , real_T options_ObjectiveLimit , int32_T
runTimeOptions_MaxIterations ) { boolean_T subProblemChanged ; boolean_T
updateFval ; int32_T activeSetChangeID ; int32_T nVar ; int32_T
globalActiveConstrIdx ; real_T normDelta ; int32_T idxMinLambda ; int32_T
TYPE ; int32_T idx_local ; int32_T exitg1 ; boolean_T guard1 = false ;
subProblemChanged = true ; updateFval = true ; activeSetChangeID = 0 ; TYPE =
objective -> objtype ; nVar = workingset -> nVar ; globalActiveConstrIdx = 0
; h35xb0f5lh ( objective , H , f , solution -> xstar ) ; solution -> fstar =
c2n2v1sbdi ( objective , memspace -> workspace_double , f , solution -> xstar
) ; if ( solution -> iterations < runTimeOptions_MaxIterations ) { solution
-> state = - 5 ; } else { solution -> state = 0 ; } kuqjqcuopxe ( 4 ,
solution -> lambda ) ; do { exitg1 = 0 ; if ( solution -> state == - 5 ) {
guard1 = false ; if ( subProblemChanged ) { switch ( activeSetChangeID ) {
case 1 : oidsdg2ozf ( qrmanager , workingset -> ATwset , ( ( workingset ->
nActiveConstr - 1 ) << 3 ) + 1 ) ; break ; case - 1 : j1hgrtckni ( qrmanager
, globalActiveConstrIdx ) ; break ; default : h0ncymex4zm ( qrmanager ,
workingset -> ATwset , nVar , workingset -> nActiveConstr ) ; dj14ojmbav (
qrmanager , qrmanager -> mrows ) ; break ; } ikm0pinmtt ( H , solution ,
memspace , qrmanager , cholmanager , objective ) ; if ( solution -> state !=
- 5 ) { exitg1 = 1 ; } else { normDelta = hi3mqzewxva ( nVar , solution ->
searchDir ) ; guard1 = true ; } } else { kuqjqcuopxe5sa ( nVar , solution ->
searchDir ) ; normDelta = 0.0 ; guard1 = true ; } if ( guard1 ) { if ( ( !
subProblemChanged ) || ( normDelta < options_StepTolerance ) || ( workingset
-> nActiveConstr >= nVar ) ) { eu5wfkvmpb ( memspace -> workspace_double ,
solution , objective , qrmanager ) ; if ( solution -> state != - 7 ) {
idxMinLambda = e2cygyw51b ( solution -> lambda , workingset -> nActiveConstr
, workingset -> nWConstr ) ; if ( idxMinLambda == 0 ) { solution -> state = 1
; } else { activeSetChangeID = - 1 ; globalActiveConstrIdx = idxMinLambda ;
subProblemChanged = true ; pghmkcqdjs ( workingset , idxMinLambda ) ;
solution -> lambda [ idxMinLambda - 1 ] = 0.0 ; } } else { idxMinLambda =
workingset -> nActiveConstr ; activeSetChangeID = 0 ; globalActiveConstrIdx =
workingset -> nActiveConstr ; subProblemChanged = true ; pghmkcqdjs (
workingset , workingset -> nActiveConstr ) ; solution -> lambda [
idxMinLambda - 1 ] = 0.0 ; } updateFval = false ; } else { lk3yxeq3po (
solution -> xstar , solution -> searchDir , workingset -> nVar , workingset
-> lb , workingset -> indexLB , workingset -> sizes , workingset ->
isActiveConstr , workingset -> nWConstr , TYPE == 5 , & normDelta , &
updateFval , & idxMinLambda , & idx_local ) ; if ( updateFval ) { switch (
idxMinLambda ) { case 3 : o2tvol2vac ( workingset , idx_local ) ; break ;
case 4 : imaznvrexo ( workingset , 4 , idx_local ) ; break ; default :
imaznvrexo ( workingset , 5 , idx_local ) ; break ; } activeSetChangeID = 1 ;
} else { gohzdn0c14 ( solution , objective ) ; subProblemChanged = false ; if
( workingset -> nActiveConstr == 0 ) { solution -> state = 1 ; } } kzdcud2kf2
( nVar , normDelta , solution -> searchDir , solution -> xstar ) ; h35xb0f5lh
( objective , H , f , solution -> xstar ) ; updateFval = true ; } ovt5tsljpx
( & activeSetChangeID , f , solution , memspace , objective , workingset ,
qrmanager , options_ObjectiveLimit , runTimeOptions_MaxIterations ,
updateFval ) ; } } else { if ( ! updateFval ) { solution -> fstar =
c2n2v1sbdi ( objective , memspace -> workspace_double , f , solution -> xstar
) ; } exitg1 = 1 ; } } while ( exitg1 == 0 ) ; } static void pixlhadu0l (
k0ratk1n10 * obj ) { obj -> objtype = obj -> prev_objtype ; obj -> nvar = obj
-> prev_nvar ; obj -> hasLinear = obj -> prev_hasLinear ; } static void
bs5h4awdzd ( const real_T H [ 25 ] , const real_T f [ 8 ] , fovverijux *
solution , ktaxowovvf * memspace , kdxyjsixti * workingset , dzrlw5sxs5 *
qrmanager , csm4ifxwet * cholmanager , k0ratk1n10 * objective , e2ucunpqcp *
options , const e2ucunpqcp * runTimeOptions ) { int32_T PROBTYPE_ORIG ;
int32_T nVar ; int32_T nVarP1 ; int32_T PHASEONE ; boolean_T exitg1 ;
PROBTYPE_ORIG = workingset -> probType ; nVar = workingset -> nVar ; nVarP1 =
workingset -> nVar ; solution -> xstar [ workingset -> nVar ] = solution ->
maxConstr + 1.0 ; if ( workingset -> probType == 3 ) { PHASEONE = 1 ; } else
{ PHASEONE = 4 ; } hmiqzf5p5q ( workingset ) ; gzr1v3zdr1 ( workingset ,
PHASEONE ) ; bbhkemzkfn ( objective , nVarP1 + 1 ) ; options ->
ObjectiveLimit = 1.0E-6 ; options -> StepTolerance = 1.4901161193847657E-10 ;
solution -> fstar = aqnjqmfea4 ( objective , memspace -> workspace_double , H
, f , solution -> xstar ) ; solution -> state = 5 ; hdbhhxzsvv ( H , f ,
solution , memspace , workingset , qrmanager , cholmanager , objective ,
options -> StepTolerance , options -> ObjectiveLimit , runTimeOptions ->
MaxIterations ) ; if ( workingset -> isActiveConstr [ workingset -> sizes [ 3
] ] ) { PHASEONE = 2 ; exitg1 = false ; while ( ( ! exitg1 ) && ( PHASEONE <=
workingset -> nActiveConstr ) ) { if ( ( workingset -> Wid [ PHASEONE - 1 ]
== 4 ) && ( workingset -> Wlocalidx [ PHASEONE - 1 ] == workingset -> sizes [
3 ] ) ) { pghmkcqdjs ( workingset , PHASEONE ) ; exitg1 = true ; } else {
PHASEONE ++ ; } } } PHASEONE = workingset -> nActiveConstr ; while ( (
PHASEONE > 1 ) && ( PHASEONE > nVar ) ) { pghmkcqdjs ( workingset , PHASEONE
) ; PHASEONE -- ; } solution -> maxConstr = solution -> xstar [ nVarP1 ] ;
gzr1v3zdr1 ( workingset , PROBTYPE_ORIG ) ; pixlhadu0l ( objective ) ;
options -> ObjectiveLimit = - 1.0E+20 ; options -> StepTolerance = 1.0E-6 ; }
static void kju12naicn3 ( const real_T H [ 25 ] , const real_T f [ 8 ] ,
fovverijux * solution , ktaxowovvf * memspace , kdxyjsixti * workingset ,
dzrlw5sxs5 * qrmanager , csm4ifxwet * cholmanager , k0ratk1n10 * objective ,
e2ucunpqcp * options , e2ucunpqcp * runTimeOptions ) { int32_T nVar ; real_T
b ; fovverijux b_solution ; solution -> iterations = 0 ; runTimeOptions ->
RemainFeasible = true ; nVar = workingset -> nVar ; njpga5wb4z ( solution ,
workingset -> lb , workingset -> indexLB , workingset -> sizes , workingset
-> isActiveConstr ) ; bw4msbp20m ( solution , memspace , workingset ,
qrmanager ) ; if ( solution -> state >= 0 ) { solution -> iterations = 0 ; b
= gtxetnnm2kf ( workingset , solution -> xstar ) ; solution -> maxConstr = b
; if ( b > 1.0E-6 ) { bs5h4awdzd ( H , f , solution , memspace , workingset ,
qrmanager , cholmanager , objective , options , runTimeOptions ) ; if (
solution -> state == 0 ) { } else { b = gtxetnnm2kf ( workingset , solution
-> xstar ) ; solution -> maxConstr = b ; if ( b > 1.0E-6 ) { kuqjqcuopxe ( 4
, solution -> lambda ) ; solution -> fstar = aqnjqmfea4 ( objective ,
memspace -> workspace_double , H , f , solution -> xstar ) ; solution ->
state = - 2 ; } else { if ( b > 0.0 ) { kuqjqcuopxe5s ( nVar , solution ->
xstar , solution -> searchDir ) ; b_solution = * solution ; bw4msbp20m ( &
b_solution , memspace , workingset , qrmanager ) ; * solution = b_solution ;
b = gtxetnnm2kf ( workingset , b_solution . xstar ) ; if ( b >= b_solution .
maxConstr ) { solution -> maxConstr = b ; memcpy ( & solution -> xstar [ 0 ]
, & b_solution . xstar [ 0 ] , sizeof ( real_T ) << 3U ) ; kuqjqcuopxe5s (
nVar , b_solution . searchDir , solution -> xstar ) ; } } hdbhhxzsvv ( H , f
, solution , memspace , workingset , qrmanager , cholmanager , objective ,
options -> StepTolerance , options -> ObjectiveLimit , runTimeOptions ->
MaxIterations ) ; } } } else { hdbhhxzsvv ( H , f , solution , memspace ,
workingset , qrmanager , cholmanager , objective , options -> StepTolerance ,
options -> ObjectiveLimit , runTimeOptions -> MaxIterations ) ; } } } static
void mo24gowvup ( kdxyjsixti * WorkingSet , real_T TrialState_cEq ) {
WorkingSet -> beq = - TrialState_cEq ; WorkingSet -> bwset [ 0 ] = WorkingSet
-> beq ; } static void lewrggdamt ( kdxyjsixti * obj , int32_T idx_local ) {
int32_T totalEq ; int32_T iAeq0 ; int32_T iAw0 ; int32_T b_idx ; totalEq =
obj -> nWConstr [ 0 ] + obj -> nWConstr [ 1 ] ; if ( ( obj -> nActiveConstr
== totalEq ) && ( idx_local > obj -> nWConstr [ 1 ] ) ) { obj -> nWConstr [ 1
] ++ ; obj -> isActiveConstr [ ( obj -> isActiveIdx [ 1 ] + idx_local ) - 2 ]
= true ; obj -> nActiveConstr ++ ; obj -> Wid [ obj -> nActiveConstr - 1 ] =
2 ; obj -> Wlocalidx [ obj -> nActiveConstr - 1 ] = idx_local ; iAeq0 = (
idx_local - 1 ) << 3 ; iAw0 = ( obj -> nActiveConstr - 1 ) << 3 ; for (
totalEq = 1 ; totalEq - 1 < obj -> nVar ; totalEq ++ ) { obj -> ATwset [ (
iAw0 + totalEq ) - 1 ] = obj -> Aeq [ ( iAeq0 + totalEq ) - 1 ] ; } obj ->
bwset [ obj -> nActiveConstr - 1 ] = obj -> beq ; } else { obj ->
nActiveConstr ++ ; iAeq0 = obj -> nActiveConstr - 1 ; obj -> Wid [ obj ->
nActiveConstr - 1 ] = obj -> Wid [ totalEq ] ; obj -> Wlocalidx [ iAeq0 ] =
obj -> Wlocalidx [ totalEq ] ; for ( iAw0 = 0 ; iAw0 < obj -> nVar ; iAw0 ++
) { obj -> ATwset [ iAw0 + ( iAeq0 << 3 ) ] = obj -> ATwset [ ( totalEq << 3
) + iAw0 ] ; } obj -> bwset [ iAeq0 ] = obj -> bwset [ totalEq ] ; obj ->
nWConstr [ 1 ] ++ ; obj -> isActiveConstr [ idx_local - 1 ] = true ; obj ->
Wid [ totalEq ] = 2 ; obj -> Wlocalidx [ totalEq ] = idx_local ; iAeq0 = (
idx_local - 1 ) << 3 ; iAw0 = totalEq << 3 ; for ( b_idx = 1 ; b_idx - 1 <
obj -> nVar ; b_idx ++ ) { obj -> ATwset [ ( iAw0 + b_idx ) - 1 ] = obj ->
Aeq [ ( iAeq0 + b_idx ) - 1 ] ; } obj -> bwset [ totalEq ] = obj -> beq ; } }
static boolean_T nbrvt40jay ( const real_T Hessian [ 25 ] , const real_T grad
[ 8 ] , fovverijux * TrialState , ktaxowovvf * memspace , kdxyjsixti *
WorkingSet , dzrlw5sxs5 * QRManager , csm4ifxwet * CholManager , k0ratk1n10 *
QPObjective , const e2ucunpqcp * qpoptions ) { boolean_T success ; int32_T
nVar ; real_T oldDirIdx ; kdxyjsixti b_WorkingSet ; int32_T b_i ; e2ucunpqcp
qpoptions_p ; e2ucunpqcp qpoptions_e ; nVar = WorkingSet -> nVar ;
kuqjqcuopxe5sar ( WorkingSet -> nVar , TrialState -> xstarsqp_old ,
TrialState -> xstarsqp ) ; for ( b_i = 0 ; b_i < nVar ; b_i ++ ) { TrialState
-> socDirection [ b_i ] = TrialState -> xstar [ b_i ] ; } kuqjqcuopx ( 4 ,
TrialState -> lambda , TrialState -> lambda_old ) ; b_WorkingSet = *
WorkingSet ; ozqnsknwek ( & b_WorkingSet , TrialState -> cEq , TrialState ->
searchDir ) ; kuqjqcuopxe5 ( WorkingSet -> nVar , TrialState -> xstarsqp ,
TrialState -> xstar ) ; qpoptions_p = * qpoptions ; qpoptions_e = * qpoptions
; kju12naicn3 ( Hessian , grad , TrialState , memspace , & b_WorkingSet ,
QRManager , CholManager , QPObjective , & qpoptions_p , & qpoptions_e ) ; *
WorkingSet = b_WorkingSet ; while ( ( WorkingSet -> mEqRemoved > 0 ) && (
WorkingSet -> indexEqRemoved >= 1 ) ) { lewrggdamt ( WorkingSet , WorkingSet
-> indexEqRemoved ) ; WorkingSet -> mEqRemoved -- ; } for ( b_i = 0 ; b_i <
nVar ; b_i ++ ) { oldDirIdx = TrialState -> socDirection [ b_i ] ; TrialState
-> socDirection [ b_i ] = TrialState -> xstar [ b_i ] - TrialState ->
socDirection [ b_i ] ; TrialState -> xstar [ b_i ] = oldDirIdx ; } success =
( hi3mqzewxva ( nVar , TrialState -> socDirection ) <= 2.0 * hi3mqzewxva (
nVar , TrialState -> xstar ) ) ; mo24gowvup ( WorkingSet , TrialState -> cEq
) ; if ( ! success ) { kuqjqcuopx ( 4 , TrialState -> lambda_old , TrialState
-> lambda ) ; } else { cbymjegfox ( TrialState -> lambda , WorkingSet ->
nActiveConstr , WorkingSet -> sizes , WorkingSet -> isActiveIdx , WorkingSet
-> Wid , WorkingSet -> Wlocalidx , memspace -> workspace_double ) ; } return
success ; } static void epc3kbrspv ( kthfgfhdov * obj , real_T fval , real_T
eq_workspace , int32_T sqpiter , real_T qpval ) { real_T penaltyParamTrial ;
real_T constrViolationEq ; real_T linearizedConstrViolPrev ;
penaltyParamTrial = obj -> penaltyParam ; constrViolationEq =
muDoubleScalarAbs ( eq_workspace ) ; linearizedConstrViolPrev = obj ->
linearizedConstrViol ; obj -> linearizedConstrViol = 0.0 ;
linearizedConstrViolPrev += constrViolationEq ; if ( (
linearizedConstrViolPrev > 2.2204460492503131E-16 ) && ( qpval > 0.0 ) ) { if
( fval == 0.0 ) { penaltyParamTrial = 1.0 ; } else { penaltyParamTrial = 1.5
; } penaltyParamTrial = penaltyParamTrial * qpval / linearizedConstrViolPrev
; } if ( penaltyParamTrial < obj -> penaltyParam ) { obj -> phi =
penaltyParamTrial * constrViolationEq + fval ; if ( ( penaltyParamTrial * obj
-> initConstrViolationEq + obj -> initFval ) - obj -> phi > ( real_T ) obj ->
nPenaltyDecreases * obj -> threshold ) { obj -> nPenaltyDecreases ++ ; if ( (
obj -> nPenaltyDecreases << 1 ) > sqpiter ) { obj -> threshold *= 10.0 ; }
obj -> penaltyParam = muDoubleScalarMax ( penaltyParamTrial , 1.0E-10 ) ; }
else { obj -> phi = obj -> penaltyParam * constrViolationEq + fval ; } } else
{ obj -> penaltyParam = muDoubleScalarMax ( penaltyParamTrial , 1.0E-10 ) ;
obj -> phi = muDoubleScalarMax ( penaltyParamTrial , 1.0E-10 ) *
constrViolationEq + fval ; } obj -> phiPrimePlus = muDoubleScalarMin ( qpval
- obj -> penaltyParam * constrViolationEq , 0.0 ) ; } static void efh512zbx1
( const real_T Hessian [ 25 ] , const real_T grad [ 8 ] , fovverijux *
TrialState , kthfgfhdov * MeritFunction , ktaxowovvf * memspace , kdxyjsixti
* WorkingSet , dzrlw5sxs5 * QRManager , csm4ifxwet * CholManager , k0ratk1n10
* QPObjective , const e2ucunpqcp * qpoptions ) { boolean_T nonlinEqRemoved ;
e2ucunpqcp qpoptions_p ; e2ucunpqcp qpoptions_e ; qpoptions_p = * qpoptions ;
qpoptions_e = * qpoptions ; kju12naicn3 ( Hessian , grad , TrialState ,
memspace , WorkingSet , QRManager , CholManager , QPObjective , & qpoptions_p
, & qpoptions_e ) ; if ( TrialState -> state > 0 ) { epc3kbrspv (
MeritFunction , TrialState -> sqpFval , TrialState -> cEq , TrialState ->
sqpIterations , TrialState -> fstar ) ; } cbymjegfox ( TrialState -> lambda ,
WorkingSet -> nActiveConstr , WorkingSet -> sizes , WorkingSet -> isActiveIdx
, WorkingSet -> Wid , WorkingSet -> Wlocalidx , memspace -> workspace_double
) ; nonlinEqRemoved = ( WorkingSet -> mEqRemoved > 0 ) ; while ( ( WorkingSet
-> mEqRemoved > 0 ) && ( WorkingSet -> indexEqRemoved >= 1 ) ) { lewrggdamt (
WorkingSet , WorkingSet -> indexEqRemoved ) ; WorkingSet -> mEqRemoved -- ; }
if ( nonlinEqRemoved ) { WorkingSet -> Wlocalidx [ 0 ] = 1 ; } } static void
gkuyiknb3a ( k0ratk1n10 * obj , int32_T numQuadVars , real_T beta , real_T
rho ) { obj -> hasLinear = true ; obj -> nvar = numQuadVars ; obj -> objtype
= 4 ; obj -> beta = beta ; obj -> rho = rho ; } static void oo03adww3i (
int32_T nVarOrig , kdxyjsixti * WorkingSet , fovverijux * TrialState ,
ktaxowovvf * memspace ) { int32_T mLBOrig ; int32_T ix ; real_T c ; int32_T
ia ; mLBOrig = WorkingSet -> sizes [ 3 ] ; memspace -> workspace_double [ 0 ]
= WorkingSet -> beq ; memspace -> workspace_double [ 0 ] = - memspace ->
workspace_double [ 0 ] ; ix = 0 ; c = 0.0 ; for ( ia = 1 ; ia <= nVarOrig ;
ia ++ ) { c += WorkingSet -> Aeq [ ia - 1 ] * TrialState -> xstar [ ix ] ; ix
++ ; } memspace -> workspace_double [ 0 ] += c ; if ( memspace ->
workspace_double [ 0 ] <= 0.0 ) { TrialState -> xstar [ nVarOrig ] = 0.0 ;
TrialState -> xstar [ nVarOrig + 1 ] = - memspace -> workspace_double [ 0 ] ;
imaznvrexo ( WorkingSet , 4 , WorkingSet -> sizes [ 3 ] - 1 ) ; if ( memspace
-> workspace_double [ 0 ] >= - 1.0E-6 ) { imaznvrexo ( WorkingSet , 4 ,
mLBOrig ) ; } } else { TrialState -> xstar [ nVarOrig ] = memspace ->
workspace_double [ 0 ] ; TrialState -> xstar [ nVarOrig + 1 ] = 0.0 ;
imaznvrexo ( WorkingSet , 4 , WorkingSet -> sizes [ 3 ] ) ; if ( memspace ->
workspace_double [ 0 ] <= 1.0E-6 ) { imaznvrexo ( WorkingSet , 4 , mLBOrig -
1 ) ; } } } static int32_T pwtnp20vfj ( ktaxowovvf * memspace , const int32_T
WorkingSet_sizes [ 5 ] , const boolean_T WorkingSet_isActiveConstr [ 4 ] ) {
memspace -> workspace_int [ 0 ] = WorkingSet_isActiveConstr [
WorkingSet_sizes [ 3 ] - 1 ] ; memspace -> workspace_int [ 1 ] =
WorkingSet_isActiveConstr [ WorkingSet_sizes [ 3 ] ] ; return
WorkingSet_isActiveConstr [ WorkingSet_sizes [ 3 ] - 1 ] +
WorkingSet_isActiveConstr [ WorkingSet_sizes [ 3 ] ] ; } static real_T
o3ddyegemw ( int32_T n , const real_T x [ 8 ] , int32_T ix0 ) { real_T y ;
int32_T kend ; int32_T k ; y = 0.0 ; if ( n >= 1 ) { kend = ( ix0 + n ) - 1 ;
for ( k = ix0 ; k <= kend ; k ++ ) { y += muDoubleScalarAbs ( x [ k - 1 ] ) ;
} } return y ; } static real_T ldebw4msx4 ( int32_T n , const real_T x [ 8 ]
, int32_T ix0 , const real_T y [ 8 ] , int32_T iy0 ) { real_T d ; int32_T ix
; int32_T iy ; int32_T k ; d = 0.0 ; if ( n >= 1 ) { ix = ix0 ; iy = iy0 ;
for ( k = 0 ; k < n ; k ++ ) { d += x [ ix - 1 ] * y [ iy - 1 ] ; ix ++ ; iy
++ ; } } return d ; } static void epc3kbrspva ( kthfgfhdov * obj , real_T
fval , real_T eq_workspace , int32_T sqpiter , real_T qpval , const real_T x
[ 8 ] , int32_T iReg0 , int32_T nRegularized ) { real_T penaltyParamTrial ;
real_T constrViolationEq ; real_T linearizedConstrViolPrev ; real_T y ;
int32_T kend ; int32_T k ; penaltyParamTrial = obj -> penaltyParam ;
constrViolationEq = muDoubleScalarAbs ( eq_workspace ) ;
linearizedConstrViolPrev = obj -> linearizedConstrViol ; y = 0.0 ; if (
nRegularized >= 1 ) { kend = ( iReg0 + nRegularized ) - 1 ; for ( k = iReg0 ;
k <= kend ; k ++ ) { y += muDoubleScalarAbs ( x [ k - 1 ] ) ; } } obj ->
linearizedConstrViol = y ; linearizedConstrViolPrev = ( constrViolationEq +
linearizedConstrViolPrev ) - y ; if ( ( linearizedConstrViolPrev >
2.2204460492503131E-16 ) && ( qpval > 0.0 ) ) { if ( fval == 0.0 ) {
penaltyParamTrial = 1.0 ; } else { penaltyParamTrial = 1.5 ; }
penaltyParamTrial = penaltyParamTrial * qpval / linearizedConstrViolPrev ; }
if ( penaltyParamTrial < obj -> penaltyParam ) { obj -> phi =
penaltyParamTrial * constrViolationEq + fval ; if ( ( penaltyParamTrial * obj
-> initConstrViolationEq + obj -> initFval ) - obj -> phi > ( real_T ) obj ->
nPenaltyDecreases * obj -> threshold ) { obj -> nPenaltyDecreases ++ ; if ( (
obj -> nPenaltyDecreases << 1 ) > sqpiter ) { obj -> threshold *= 10.0 ; }
obj -> penaltyParam = muDoubleScalarMax ( penaltyParamTrial , 1.0E-10 ) ; }
else { obj -> phi = obj -> penaltyParam * constrViolationEq + fval ; } } else
{ obj -> penaltyParam = muDoubleScalarMax ( penaltyParamTrial , 1.0E-10 ) ;
obj -> phi = muDoubleScalarMax ( penaltyParamTrial , 1.0E-10 ) *
constrViolationEq + fval ; } obj -> phiPrimePlus = muDoubleScalarMin ( qpval
- obj -> penaltyParam * constrViolationEq , 0.0 ) ; } static void be4pi3sfci
( int32_T nActiveLBArtificial , fovverijux * TrialState , kdxyjsixti *
WorkingSet ) { int32_T mFiniteLBOrig ; int32_T idx ; real_T tmp ;
mFiniteLBOrig = WorkingSet -> sizes [ 3 ] - 2 ; idx = WorkingSet ->
nActiveConstr ; while ( ( idx > 1 ) && ( nActiveLBArtificial > 0 ) ) { if ( (
WorkingSet -> Wid [ idx - 1 ] == 4 ) && ( WorkingSet -> Wlocalidx [ idx - 1 ]
> mFiniteLBOrig ) ) { tmp = TrialState -> lambda [ WorkingSet ->
nActiveConstr - 1 ] ; TrialState -> lambda [ WorkingSet -> nActiveConstr - 1
] = 0.0 ; TrialState -> lambda [ idx - 1 ] = tmp ; pghmkcqdjs ( WorkingSet ,
idx ) ; nActiveLBArtificial -- ; } idx -- ; } } static void dq1wo1infu (
k0ratk1n10 * obj , int32_T NumVars ) { obj -> hasLinear = true ; obj -> nvar
= NumVars ; obj -> objtype = 3 ; } static int32_T cdcikb5kmwa ( int32_T n ,
const real_T x [ 4 ] ) { int32_T idxmax ; int32_T ix ; real_T smax ; int32_T
k ; real_T y ; idxmax = 1 ; if ( n > 1 ) { ix = 0 ; smax = muDoubleScalarAbs
( x [ 0 ] ) ; for ( k = 2 ; k <= n ; k ++ ) { ix ++ ; y = muDoubleScalarAbs (
x [ ix ] ) ; if ( y > smax ) { idxmax = k ; smax = y ; } } } return idxmax ;
} static void b13hapjdzs ( const real_T Hessian [ 25 ] , const real_T grad [
8 ] , fovverijux * TrialState , kthfgfhdov * MeritFunction , ktaxowovvf *
memspace , kdxyjsixti * WorkingSet , dzrlw5sxs5 * QRManager , csm4ifxwet *
CholManager , k0ratk1n10 * QPObjective , e2ucunpqcp * qpoptions ) { int32_T
nVarOrig ; real_T beta ; real_T rho ; int32_T temp ; boolean_T isAeqActive ;
int32_T c_idx ; e2ucunpqcp qpoptions_p ; e2ucunpqcp qpoptions_e ; nVarOrig =
WorkingSet -> nVar ; beta = 0.0 ; for ( temp = 0 ; temp < nVarOrig ; temp ++
) { beta += Hessian [ 5 * temp + temp ] ; } beta /= ( real_T ) WorkingSet ->
nVar ; if ( TrialState -> sqpIterations <= 1 ) { rho = muDoubleScalarMax (
1.0 , muDoubleScalarAbs ( grad [ cdcikb5kmw ( QPObjective -> nvar , grad ) -
1 ] ) ) * 100.0 ; } else { rho = muDoubleScalarAbs ( TrialState -> lambdasqp
[ cdcikb5kmwa ( WorkingSet -> mConstr , TrialState -> lambdasqp ) - 1 ] ) ; }
gkuyiknb3a ( QPObjective , WorkingSet -> nVar , beta , rho ) ; gzr1v3zdr1 (
WorkingSet , 2 ) ; oo03adww3i ( nVarOrig , WorkingSet , TrialState , memspace
) ; temp = qpoptions -> MaxIterations ; qpoptions -> MaxIterations = (
qpoptions -> MaxIterations + WorkingSet -> nVar ) - nVarOrig ; qpoptions_p =
* qpoptions ; qpoptions_e = * qpoptions ; kju12naicn3 ( Hessian , grad ,
TrialState , memspace , WorkingSet , QRManager , CholManager , QPObjective ,
& qpoptions_p , & qpoptions_e ) ; qpoptions -> MaxIterations = temp ; temp =
pwtnp20vfj ( memspace , WorkingSet -> sizes , WorkingSet -> isActiveConstr )
; if ( TrialState -> state != - 6 ) { epc3kbrspva ( MeritFunction ,
TrialState -> sqpFval , TrialState -> cEq , TrialState -> sqpIterations , (
TrialState -> fstar - rho * o3ddyegemw ( 7 - nVarOrig , TrialState -> xstar ,
nVarOrig + 1 ) ) - beta / 2.0 * ldebw4msx4 ( 7 - nVarOrig , TrialState ->
xstar , nVarOrig + 1 , TrialState -> xstar , nVarOrig + 1 ) , TrialState ->
xstar , nVarOrig + 1 , 7 - nVarOrig ) ; if ( ( memspace -> workspace_int [ 0
] != 0 ) && ( memspace -> workspace_int [ 1 ] != 0 ) ) { isAeqActive = true ;
} else { isAeqActive = false ; } TrialState -> lambda [ 0 ] *= ( real_T )
isAeqActive ; for ( c_idx = 1 ; c_idx < WorkingSet -> nActiveConstr ; c_idx
++ ) { if ( WorkingSet -> Wid [ c_idx ] == 3 ) { TrialState -> lambda [ c_idx
] *= ( real_T ) memspace -> workspace_int [ WorkingSet -> Wlocalidx [ c_idx ]
+ 1 ] ; } } } be4pi3sfci ( temp , TrialState , WorkingSet ) ; dq1wo1infu (
QPObjective , nVarOrig ) ; gzr1v3zdr1 ( WorkingSet , 3 ) ; cbymjegfox (
TrialState -> lambda , WorkingSet -> nActiveConstr , WorkingSet -> sizes ,
WorkingSet -> isActiveIdx , WorkingSet -> Wid , WorkingSet -> Wlocalidx ,
memspace -> workspace_double ) ; } static void c0gqrqmidx ( real_T Hessian [
25 ] , const real_T grad [ 8 ] , const real_T searchDir [ 8 ] ) { real_T
nrmGradInf ; real_T nrmDirInf ; int32_T iH0 ; int32_T idx ; int32_T k ;
nrmGradInf = 0.0 ; nrmDirInf = 1.0 ; for ( idx = 0 ; idx < 5 ; idx ++ ) {
nrmGradInf = muDoubleScalarMax ( nrmGradInf , muDoubleScalarAbs ( grad [ idx
] ) ) ; nrmDirInf = muDoubleScalarMax ( nrmDirInf , muDoubleScalarAbs (
searchDir [ idx ] ) ) ; } nrmGradInf = muDoubleScalarMax (
2.2204460492503131E-16 , nrmGradInf / nrmDirInf ) ; for ( idx = 0 ; idx < 5 ;
idx ++ ) { iH0 = 5 * idx ; for ( k = 0 ; k < idx ; k ++ ) { Hessian [ iH0 + k
] = 0.0 ; } Hessian [ idx + 5 * idx ] = nrmGradInf ; iH0 += idx ; for ( k = 0
; k <= 3 - idx ; k ++ ) { Hessian [ ( iH0 + k ) + 1 ] = 0.0 ; } } } static
boolean_T ebhvdjjpzt ( int32_T * STEP_TYPE , real_T Hessian [ 25 ] ,
fovverijux * TrialState , kthfgfhdov * MeritFunction , ktaxowovvf * memspace
, kdxyjsixti * WorkingSet , dzrlw5sxs5 * QRManager , csm4ifxwet * CholManager
, k0ratk1n10 * QPObjective , e2ucunpqcp * qpoptions ) { boolean_T stepSuccess
; int32_T nVar ; fovverijux b_TrialState ; int32_T b_idx ; int32_T exitg1 ;
boolean_T guard1 = false ; stepSuccess = true ; nVar = WorkingSet -> nVar ;
if ( * STEP_TYPE != 3 ) { kuqjqcuopxe5 ( WorkingSet -> nVar , TrialState ->
xstarsqp , TrialState -> xstar ) ; } else { kuqjqcuopxe5s ( WorkingSet ->
nVar , TrialState -> xstar , TrialState -> searchDir ) ; } do { exitg1 = 0 ;
guard1 = false ; switch ( * STEP_TYPE ) { case 1 : b_TrialState = *
TrialState ; efh512zbx1 ( Hessian , TrialState -> grad , & b_TrialState ,
MeritFunction , memspace , WorkingSet , QRManager , CholManager , QPObjective
, qpoptions ) ; * TrialState = b_TrialState ; if ( ( b_TrialState . state <=
0 ) && ( b_TrialState . state != - 6 ) ) { * STEP_TYPE = 2 ; } else { memcpy
( & TrialState -> delta_x [ 0 ] , & b_TrialState . delta_x [ 0 ] , sizeof (
real_T ) << 3U ) ; kuqjqcuopxe5s ( nVar , b_TrialState . xstar , TrialState
-> delta_x ) ; guard1 = true ; } break ; case 2 : b_TrialState = * TrialState
; b13hapjdzs ( Hessian , TrialState -> grad , & b_TrialState , MeritFunction
, memspace , WorkingSet , QRManager , CholManager , QPObjective , qpoptions )
; * TrialState = b_TrialState ; memcpy ( & TrialState -> delta_x [ 0 ] , &
b_TrialState . delta_x [ 0 ] , sizeof ( real_T ) << 3U ) ; kuqjqcuopxe5s (
nVar , b_TrialState . xstar , TrialState -> delta_x ) ; guard1 = true ; break
; default : b_TrialState = * TrialState ; stepSuccess = nbrvt40jay ( Hessian
, TrialState -> grad , & b_TrialState , memspace , WorkingSet , QRManager ,
CholManager , QPObjective , qpoptions ) ; * TrialState = b_TrialState ; if (
stepSuccess && ( TrialState -> state != - 6 ) ) { for ( b_idx = 0 ; b_idx <
nVar ; b_idx ++ ) { TrialState -> delta_x [ b_idx ] = TrialState -> xstar [
b_idx ] + TrialState -> socDirection [ b_idx ] ; } } guard1 = true ; break ;
} if ( guard1 ) { if ( TrialState -> state != - 6 ) { exitg1 = 1 ; } else {
c0gqrqmidx ( Hessian , TrialState -> grad , TrialState -> xstar ) ; } } }
while ( exitg1 == 0 ) ; return stepSuccess ; } static void po4spm1njq ( const
hskkdlcyjp * obj_objfun_tunableEnvironment , const real_T x [ 5 ] , real_T *
Ceq_workspace , real_T * fval , int32_T * status ) { cipokh2zzb (
obj_objfun_tunableEnvironment , x , fval , status ) ; if ( * status == 1 ) {
* status = fgxc0qaihr ( x , Ceq_workspace ) ; } } static real_T h34bguel4f (
real_T obj_penaltyParam , real_T fval , real_T Ceq_workspace , boolean_T
evalWellDefined ) { real_T val ; if ( evalWellDefined ) { val =
obj_penaltyParam * muDoubleScalarAbs ( Ceq_workspace ) + fval ; } else { val
= ( rtInf ) ; } return val ; } static void fnhb0ecihg ( boolean_T *
evalWellDefined , int32_T WorkingSet_nVar , fovverijux * TrialState , real_T
MeritFunction_penaltyParam , real_T MeritFunction_phi , real_T
MeritFunction_phiPrimePlus , real_T MeritFunction_phiFullStep , const
hskkdlcyjp * FcnEvaluator_objfun_tunableEnvironment , boolean_T socTaken ,
real_T * alpha , int32_T * exitflag ) { real_T phi_alpha ; boolean_T
tooSmallX ; int32_T b_k ; real_T fval ; int32_T exitg1 ; boolean_T exitg2 ; *
alpha = 1.0 ; * exitflag = 1 ; phi_alpha = MeritFunction_phiFullStep ; for (
b_k = 0 ; b_k < WorkingSet_nVar ; b_k ++ ) { TrialState -> searchDir [ b_k ]
= TrialState -> delta_x [ b_k ] ; } do { exitg1 = 0 ; if ( TrialState ->
FunctionEvaluations < 500 ) { if ( ( * evalWellDefined ) && ( phi_alpha <= *
alpha * 0.0001 * MeritFunction_phiPrimePlus + MeritFunction_phi ) ) { exitg1
= 1 ; } else { * alpha *= 0.7 ; for ( b_k = 0 ; b_k < WorkingSet_nVar ; b_k
++ ) { TrialState -> delta_x [ b_k ] = * alpha * TrialState -> searchDir [
b_k ] ; } if ( socTaken ) { phi_alpha = * alpha * * alpha ; if ( (
WorkingSet_nVar >= 1 ) && ( ! ( phi_alpha == 0.0 ) ) ) { for ( b_k = 0 ; b_k
< WorkingSet_nVar ; b_k ++ ) { TrialState -> delta_x [ b_k ] += phi_alpha *
TrialState -> socDirection [ b_k ] ; } } } tooSmallX = true ; b_k = 0 ;
exitg2 = false ; while ( ( ! exitg2 ) && ( b_k <= WorkingSet_nVar - 1 ) ) {
if ( 1.0E-10 * muDoubleScalarMax ( 1.0 , muDoubleScalarAbs ( TrialState ->
xstarsqp [ b_k ] ) ) <= muDoubleScalarAbs ( TrialState -> delta_x [ b_k ] ) )
{ tooSmallX = false ; exitg2 = true ; } else { b_k ++ ; } } if ( tooSmallX )
{ * exitflag = - 2 ; exitg1 = 1 ; } else { for ( b_k = 0 ; b_k <
WorkingSet_nVar ; b_k ++ ) { TrialState -> xstarsqp [ b_k ] = TrialState ->
xstarsqp_old [ b_k ] + TrialState -> delta_x [ b_k ] ; } phi_alpha =
TrialState -> cEq ; cipokh2zzb ( FcnEvaluator_objfun_tunableEnvironment ,
TrialState -> xstarsqp , & fval , & b_k ) ; if ( b_k == 1 ) { b_k =
fgxc0qaihr ( TrialState -> xstarsqp , & phi_alpha ) ; } TrialState -> sqpFval
= fval ; TrialState -> cEq = phi_alpha ; TrialState -> FunctionEvaluations ++
; * evalWellDefined = ( b_k == 1 ) ; if ( * evalWellDefined ) { phi_alpha =
MeritFunction_penaltyParam * muDoubleScalarAbs ( phi_alpha ) + fval ; } else
{ phi_alpha = ( rtInf ) ; } } } } else { * exitflag = 0 ; exitg1 = 1 ; } }
while ( exitg1 == 0 ) ; } static void kju12naicn ( fovverijux * TrialState ,
kthfgfhdov * MeritFunction , const cdseu45pm3 * FcnEvaluator , hbctg4nwcl *
FiniteDifferences , ktaxowovvf * memspace , kdxyjsixti * WorkingSet ,
dzrlw5sxs5 * QRManager , k0ratk1n10 * QPObjective , real_T Hessian [ 25 ] ,
csm4ifxwet * CholManager ) { int32_T nVar ; int32_T mLB ; int32_T
qpoptions_MaxIterations ; mf15oedits Flags ; int32_T idx ; boolean_T b ;
real_T e [ 8 ] ; real_T g [ 8 ] ; real_T h [ 5 ] ; real_T j ; real_T k ;
int32_T b_idx ; e2ucunpqcp expl_temp ; static const int8_T p [ 25 ] = { 1 , 0
, 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 ,
0 , 0 , 0 , 1 } ; static const char_T q [ 7 ] = { 'f' , 'm' , 'i' , 'n' , 'c'
, 'o' , 'n' } ; e2ucunpqcp expl_temp_p ; memset ( & CholManager -> FMat [ 0 ]
, 0 , sizeof ( real_T ) << 6U ) ; CholManager -> ldm = 8 ; CholManager ->
ndims = 0 ; CholManager -> info = 0 ; for ( b_idx = 0 ; b_idx < 25 ; b_idx ++
) { Hessian [ b_idx ] = p [ b_idx ] ; } nVar = WorkingSet -> nVar ; mLB =
WorkingSet -> sizes [ 3 ] ; qpoptions_MaxIterations = 10 *
muIntScalarMax_sint32 ( WorkingSet -> nVar , WorkingSet -> sizes [ 3 ] ) ;
TrialState -> steplength = 1.0 ; mxnuuti0th ( MeritFunction , WorkingSet ,
TrialState , & Flags . gradOK , & Flags . fevalOK , & Flags . done , & Flags
. stepAccepted , & Flags . failedLineSearch , & Flags . stepType ) ;
cct5ezbgkv ( TrialState , WorkingSet -> nVar , WorkingSet -> Aeq ) ;
oabtqrotmy ( TrialState ) ; if ( ! Flags . done ) { TrialState ->
sqpIterations = 1 ; } while ( ! Flags . done ) { if ( ( ! Flags .
stepAccepted ) && ( ! Flags . failedLineSearch ) ) { expl_temp .
IterDisplayQP = false ; expl_temp . RemainFeasible = false ; expl_temp .
ProbRelTolFactor = 1.0 ; expl_temp . ConstrRelTolFactor = 1.0 ; expl_temp .
PricingTolerance = 0.0 ; expl_temp . ObjectiveLimit = - 1.0E+20 ; expl_temp .
ConstraintTolerance = 1.0E-6 ; expl_temp . OptimalityTolerance =
2.2204460492503131E-14 ; expl_temp . StepTolerance = 1.0E-6 ; expl_temp .
MaxIterations = qpoptions_MaxIterations ; for ( b_idx = 0 ; b_idx < 7 ; b_idx
++ ) { expl_temp . SolverName [ b_idx ] = q [ b_idx ] ; } } while ( ( ! Flags
. stepAccepted ) && ( ! Flags . failedLineSearch ) ) { jy0zmqim5jn (
WorkingSet , TrialState -> cEq ) ; idx = Flags . stepType ; expl_temp_p =
expl_temp ; b = ebhvdjjpzt ( & idx , Hessian , TrialState , MeritFunction ,
memspace , WorkingSet , QRManager , CholManager , QPObjective , & expl_temp_p
) ; Flags . stepAccepted = b ; Flags . stepType = idx ; if ( b ) { for (
b_idx = 0 ; b_idx < nVar ; b_idx ++ ) { TrialState -> xstarsqp [ b_idx ] +=
TrialState -> delta_x [ b_idx ] ; } k = TrialState -> cEq ; po4spm1njq ( &
FcnEvaluator -> objfun . tunableEnvironment , TrialState -> xstarsqp , & k ,
& j , & b_idx ) ; TrialState -> sqpFval = j ; Flags . fevalOK = ( b_idx == 1
) ; TrialState -> FunctionEvaluations ++ ; TrialState -> cEq = k ;
MeritFunction -> phiFullStep = h34bguel4f ( MeritFunction -> penaltyParam , j
, k , Flags . fevalOK ) ; } if ( ( idx == 1 ) && b && Flags . fevalOK && (
MeritFunction -> phi < MeritFunction -> phiFullStep ) && ( TrialState ->
sqpFval < TrialState -> sqpFval_old ) ) { Flags . stepType = 3 ; Flags .
stepAccepted = false ; } else { fnhb0ecihg ( & Flags . fevalOK , WorkingSet
-> nVar , TrialState , MeritFunction -> penaltyParam , MeritFunction -> phi ,
MeritFunction -> phiPrimePlus , MeritFunction -> phiFullStep , & FcnEvaluator
-> objfun . tunableEnvironment , ( idx == 3 ) && b , & k , & b_idx ) ;
TrialState -> steplength = k ; if ( b_idx > 0 ) { Flags . stepAccepted = true
; } else { Flags . failedLineSearch = true ; } } } if ( Flags . stepAccepted
&& ( ! Flags . failedLineSearch ) ) { for ( b_idx = 0 ; b_idx < nVar ; b_idx
++ ) { TrialState -> xstarsqp [ b_idx ] = TrialState -> xstarsqp_old [ b_idx
] + TrialState -> delta_x [ b_idx ] ; } for ( b_idx = 0 ; b_idx <= mLB ;
b_idx ++ ) { TrialState -> lambdasqp [ b_idx ] += ( TrialState -> lambda [
b_idx ] - TrialState -> lambdasqp [ b_idx ] ) * TrialState -> steplength ; }
oabtqrotmy ( TrialState ) ; memcpy ( & e [ 0 ] , & TrialState -> grad [ 0 ] ,
sizeof ( real_T ) << 3U ) ; memcpy ( & g [ 0 ] , & WorkingSet -> Aeq [ 0 ] ,
sizeof ( real_T ) << 3U ) ; for ( b_idx = 0 ; b_idx < 5 ; b_idx ++ ) { h [
b_idx ] = TrialState -> xstarsqp [ b_idx ] ; } Flags . gradOK = ap1uxguxor (
FiniteDifferences , TrialState -> sqpFval , TrialState -> cEq , h , e , g ) ;
memcpy ( & TrialState -> grad [ 0 ] , & e [ 0 ] , sizeof ( real_T ) << 3U ) ;
memcpy ( & WorkingSet -> Aeq [ 0 ] , & g [ 0 ] , sizeof ( real_T ) << 3U ) ;
for ( b_idx = 0 ; b_idx < 5 ; b_idx ++ ) { TrialState -> xstarsqp [ b_idx ] =
h [ b_idx ] ; } TrialState -> FunctionEvaluations += FiniteDifferences ->
numEvals ; } else { k1vu0y3nbu ( TrialState ) ; } mxnuuti0thv ( & Flags ,
memspace , MeritFunction , WorkingSet , TrialState , QRManager ) ; if ( ( !
Flags . done ) && Flags . stepAccepted ) { Flags . stepAccepted = false ;
Flags . stepType = 1 ; Flags . failedLineSearch = false ; ns205swajk ( nVar ,
TrialState -> delta_gradLag , TrialState -> grad , WorkingSet -> Aeq ,
TrialState -> grad_old , TrialState -> JacCeqTrans_old , TrialState ->
lambdasqp ) ; cct5ezbgkv ( TrialState , nVar , WorkingSet -> Aeq ) ;
baiaczl2df ( nVar , Hessian , TrialState -> delta_x , TrialState ->
delta_gradLag , memspace -> workspace_double ) ; TrialState -> sqpIterations
++ ; } } } static void hkdppg2m2g ( const hskkdlcyjp * fun_tunableEnvironment
, real_T x [ 5 ] , real_T * fval , real_T * exitflag ) { fovverijux
TrialState ; cdseu45pm3 FcnEvaluator ; ktaxowovvf memspace ; kdxyjsixti
WorkingSet ; real_T b ; real_T e ; hbctg4nwcl FiniteDifferences ; real_T
Hessian [ 25 ] ; kthfgfhdov MeritFunction ; dzrlw5sxs5 QRManager ; k0ratk1n10
QPObjective ; csm4ifxwet CholManager ; int32_T i ; static const int8_T
j_sizes [ 5 ] = { 0 , 1 , 0 , 0 , 0 } ; static const int8_T j_isActiveIdx [ 6
] = { 1 , 1 , 2 , 2 , 2 , 2 } ; static const int8_T j_sizesPhaseOne [ 5 ] = {
0 , 1 , 0 , 1 , 0 } ; static const int8_T j_sizesRegularized [ 5 ] = { 0 , 1
, 0 , 2 , 0 } ; static const int8_T j_isActiveIdxPhaseOne [ 6 ] = { 1 , 1 , 2
, 2 , 3 , 3 } ; static const int8_T j_sizesRegPhaseOne [ 5 ] = { 0 , 1 , 0 ,
3 , 0 } ; static const int8_T j_isActiveIdxRegularized [ 6 ] = { 1 , 1 , 2 ,
2 , 4 , 4 } ; static const int8_T j_isActiveIdxRegPhaseOne [ 6 ] = { 1 , 1 ,
2 , 2 , 5 , 5 } ; static const real_T k [ 5 ] = { 0.9961 , - 0.0 , - 0.0893 ,
0.0 , 0.0 } ; FcnEvaluator . objfun . tunableEnvironment = *
fun_tunableEnvironment ; jt2ame0nt2 ( & FcnEvaluator . nVar , & FcnEvaluator
. mCineq , & FcnEvaluator . mCeq , & FcnEvaluator . NonFiniteSupport , &
FcnEvaluator . SpecifyObjectiveGradient , & FcnEvaluator .
SpecifyConstraintGradient , & FcnEvaluator . ScaleProblem ) ; TrialState .
nVarMax = 8 ; TrialState . mNonlinIneq = 0 ; TrialState . mNonlinEq = 1 ;
TrialState . mIneq = 0 ; TrialState . mEq = 1 ; TrialState . iNonIneq0 = 1 ;
TrialState . iNonEq0 = 1 ; TrialState . sqpFval_old = 0.0 ; for ( i = 0 ; i <
5 ; i ++ ) { TrialState . xstarsqp_old [ i ] = 0.0 ; } TrialState . cEq_old =
0.0 ; TrialState . sqpIterations = 0 ; TrialState . sqpExitFlag = 0 ;
TrialState . lambdasqp [ 0 ] = 0.0 ; TrialState . lambdasqp_old [ 0 ] = 0.0 ;
TrialState . lambdasqp [ 1 ] = 0.0 ; TrialState . lambdasqp_old [ 1 ] = 0.0 ;
TrialState . lambdasqp [ 2 ] = 0.0 ; TrialState . lambdasqp_old [ 2 ] = 0.0 ;
TrialState . lambdasqp [ 3 ] = 0.0 ; TrialState . lambdasqp_old [ 3 ] = 0.0 ;
TrialState . steplength = 1.0 ; TrialState . lambda_old [ 0 ] = 0.0 ;
TrialState . workingset_old [ 0 ] = 0 ; TrialState . lambda_old [ 1 ] = 0.0 ;
TrialState . workingset_old [ 1 ] = 0 ; TrialState . lambda_old [ 2 ] = 0.0 ;
TrialState . workingset_old [ 2 ] = 0 ; TrialState . lambda_old [ 3 ] = 0.0 ;
TrialState . workingset_old [ 3 ] = 0 ; TrialState . fstar = 0.0 ; TrialState
. firstorderopt = 0.0 ; TrialState . lambda [ 0 ] = 0.0 ; TrialState . lambda
[ 1 ] = 0.0 ; TrialState . lambda [ 2 ] = 0.0 ; TrialState . lambda [ 3 ] =
0.0 ; TrialState . state = 0 ; TrialState . maxConstr = 0.0 ; TrialState .
iterations = 0 ; WorkingSet . mConstr = 1 ; WorkingSet . mConstrOrig = 1 ;
WorkingSet . mConstrMax = 4 ; WorkingSet . nVar = 5 ; WorkingSet . nVarOrig =
5 ; WorkingSet . nVarMax = 8 ; WorkingSet . ldA = 8 ; WorkingSet . beq = 0.0
; memset ( & TrialState . grad_old [ 0 ] , 0 , sizeof ( real_T ) << 3U ) ;
memset ( & TrialState . delta_x [ 0 ] , 0 , sizeof ( real_T ) << 3U ) ;
memset ( & TrialState . socDirection [ 0 ] , 0 , sizeof ( real_T ) << 3U ) ;
memset ( & TrialState . JacCeqTrans_old [ 0 ] , 0 , sizeof ( real_T ) << 3U )
; memset ( & TrialState . gradLag [ 0 ] , 0 , sizeof ( real_T ) << 3U ) ;
memset ( & TrialState . delta_gradLag [ 0 ] , 0 , sizeof ( real_T ) << 3U ) ;
memset ( & TrialState . xstar [ 0 ] , 0 , sizeof ( real_T ) << 3U ) ; memset
( & TrialState . searchDir [ 0 ] , 0 , sizeof ( real_T ) << 3U ) ; memset ( &
WorkingSet . lb [ 0 ] , 0 , sizeof ( real_T ) << 3U ) ; memset ( & WorkingSet
. ub [ 0 ] , 0 , sizeof ( real_T ) << 3U ) ; for ( i = 0 ; i < 8 ; i ++ ) {
WorkingSet . indexLB [ i ] = 0 ; WorkingSet . indexUB [ i ] = 0 ; WorkingSet
. indexFixed [ i ] = 0 ; } WorkingSet . mEqRemoved = 0 ; WorkingSet .
indexEqRemoved = 0 ; memset ( & WorkingSet . ATwset [ 0 ] , 0 , sizeof (
real_T ) << 5U ) ; WorkingSet . nActiveConstr = 0 ; WorkingSet . bwset [ 0 ]
= 0.0 ; WorkingSet . maxConstrWorkspace [ 0 ] = 0.0 ; WorkingSet . bwset [ 1
] = 0.0 ; WorkingSet . maxConstrWorkspace [ 1 ] = 0.0 ; WorkingSet . bwset [
2 ] = 0.0 ; WorkingSet . maxConstrWorkspace [ 2 ] = 0.0 ; WorkingSet . bwset
[ 3 ] = 0.0 ; WorkingSet . maxConstrWorkspace [ 3 ] = 0.0 ; for ( i = 0 ; i <
5 ; i ++ ) { WorkingSet . sizes [ i ] = j_sizes [ i ] ; WorkingSet .
sizesNormal [ i ] = j_sizes [ i ] ; WorkingSet . sizesPhaseOne [ i ] =
j_sizesPhaseOne [ i ] ; WorkingSet . sizesRegularized [ i ] =
j_sizesRegularized [ i ] ; WorkingSet . sizesRegPhaseOne [ i ] =
j_sizesRegPhaseOne [ i ] ; } for ( i = 0 ; i < 6 ; i ++ ) { WorkingSet .
isActiveIdx [ i ] = j_isActiveIdx [ i ] ; WorkingSet . isActiveIdxNormal [ i
] = j_isActiveIdx [ i ] ; WorkingSet . isActiveIdxPhaseOne [ i ] =
j_isActiveIdxPhaseOne [ i ] ; WorkingSet . isActiveIdxRegularized [ i ] =
j_isActiveIdxRegularized [ i ] ; WorkingSet . isActiveIdxRegPhaseOne [ i ] =
j_isActiveIdxRegPhaseOne [ i ] ; } WorkingSet . isActiveConstr [ 0 ] = false
; WorkingSet . Wid [ 0 ] = 0 ; WorkingSet . Wlocalidx [ 0 ] = 0 ; WorkingSet
. isActiveConstr [ 1 ] = false ; WorkingSet . Wid [ 1 ] = 0 ; WorkingSet .
Wlocalidx [ 1 ] = 0 ; WorkingSet . isActiveConstr [ 2 ] = false ; WorkingSet
. Wid [ 2 ] = 0 ; WorkingSet . Wlocalidx [ 2 ] = 0 ; WorkingSet .
isActiveConstr [ 3 ] = false ; WorkingSet . Wid [ 3 ] = 0 ; WorkingSet .
Wlocalidx [ 3 ] = 0 ; for ( i = 0 ; i < 5 ; i ++ ) { WorkingSet . nWConstr [
i ] = 0 ; } WorkingSet . probType = 3 ; WorkingSet . SLACK0 = 1.0E-5 ; e =
0.0 ; memset ( & TrialState . grad [ 0 ] , 0 , sizeof ( real_T ) << 3U ) ;
memset ( & WorkingSet . Aeq [ 0 ] , 0 , sizeof ( real_T ) << 3U ) ;
ih4gycxc1o ( & FcnEvaluator . objfun . tunableEnvironment , k , & e , & b , &
i ) ; TrialState . sqpFval = b ; p32d0btmmxz ( fun_tunableEnvironment , &
FiniteDifferences ) ; for ( i = 0 ; i < 5 ; i ++ ) { TrialState . xstarsqp [
i ] = k [ i ] ; } ap1uxguxor ( & FiniteDifferences , b , e , TrialState .
xstarsqp , TrialState . grad , WorkingSet . Aeq ) ; TrialState .
FunctionEvaluations = FiniteDifferences . numEvals + 1 ; TrialState . cEq = e
; jy0zmqim5j ( & WorkingSet , e ) ; oml1j5lmqr ( & WorkingSet ) ;
p32d0btmmxzp ( b , e , & MeritFunction ) ; QRManager . ldq = 8 ; memset ( &
QRManager . QR [ 0 ] , 0 , sizeof ( real_T ) << 6U ) ; memset ( & QRManager .
Q [ 0 ] , 0 , sizeof ( real_T ) << 6U ) ; QRManager . mrows = 0 ; QRManager .
ncols = 0 ; QRManager . minRowCol = 0 ; QRManager . usedPivoting = false ;
memset ( & QRManager . tau [ 0 ] , 0 , sizeof ( real_T ) << 3U ) ; memset ( &
QPObjective . grad [ 0 ] , 0 , sizeof ( real_T ) << 3U ) ; for ( i = 0 ; i <
8 ; i ++ ) { QRManager . jpvt [ i ] = 0 ; } for ( i = 0 ; i < 7 ; i ++ ) {
QPObjective . Hx [ i ] = 0.0 ; } QPObjective . hasLinear = true ; QPObjective
. nvar = 5 ; QPObjective . maxVar = 8 ; QPObjective . beta = 0.0 ;
QPObjective . rho = 0.0 ; QPObjective . objtype = 3 ; QPObjective .
prev_objtype = 3 ; QPObjective . prev_nvar = 0 ; QPObjective . prev_hasLinear
= false ; QPObjective . gammaScalar = 0.0 ; kju12naicn ( & TrialState , &
MeritFunction , & FcnEvaluator , & FiniteDifferences , & memspace , &
WorkingSet , & QRManager , & QPObjective , Hessian , & CholManager ) ; for (
i = 0 ; i < 5 ; i ++ ) { x [ i ] = TrialState . xstarsqp [ i ] ; } * fval =
TrialState . sqpFval ; * exitflag = TrialState . sqpExitFlag ; } static void
p32d0btmmxzpj ( const real_T objfun_tunableEnvironment [ 4 ] , real_T
obj_objfun_tunableEnvironment [ 4 ] , int32_T * obj_nVar , int32_T *
obj_mCineq , int32_T * obj_mCeq , boolean_T * obj_NonFiniteSupport ,
boolean_T * obj_SpecifyObjectiveGradient , boolean_T *
obj_SpecifyConstraintGradient , boolean_T * obj_ScaleProblem ) {
obj_objfun_tunableEnvironment [ 0 ] = objfun_tunableEnvironment [ 0 ] ;
obj_objfun_tunableEnvironment [ 1 ] = objfun_tunableEnvironment [ 1 ] ;
obj_objfun_tunableEnvironment [ 2 ] = objfun_tunableEnvironment [ 2 ] ;
obj_objfun_tunableEnvironment [ 3 ] = objfun_tunableEnvironment [ 3 ] ; *
obj_nVar = 18 ; * obj_mCineq = 0 ; * obj_mCeq = 4 ; * obj_NonFiniteSupport =
true ; * obj_SpecifyObjectiveGradient = false ; *
obj_SpecifyConstraintGradient = false ; * obj_ScaleProblem = false ; } static
void cipokh2zzbm ( const real_T obj_objfun_tunableEnvironment [ 4 ] , const
real_T x [ 18 ] , real_T * fval , int32_T * status ) { real_T Avals [ 7 ] ;
real_T Bvals [ 7 ] ; real_T Cvals [ 7 ] ; real_T error [ 21 ] ; real_T b_x ;
real_T c_x ; real_T z1 [ 21 ] ; int32_T k ; real_T res [ 16 ] ; real_T a [ 16
] ; real_T b_res [ 16 ] ; real_T c_res [ 16 ] ; real_T e_res [ 16 ] ; int32_T
i ; static const real_T a_p [ 16 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.265 , 0.0 , 0.014 , 1.0 } ; static
const real_T b_a [ 16 ] = { 0.93058059048379183 , 0.36608709976566678 , 0.0 ,
0.0 , - 0.36608709976566678 , 0.93058059048379183 , 0.0 , 0.0 , 0.0 , 0.0 ,
1.0 , 0.0 , 0.139807669447128 , 0.0549998406976098 , - 0.051 , 1.0 } ; static
const real_T e_b [ 16 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 1.0 , 0.0 , 0.085 , 0.0 , - 0.0245 , 1.0 } ; static const real_T
d_b [ 16 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
1.0 , 0.0 , 0.11 , 0.0 , 0.0 , 1.0 } ; static const real_T b [ 16 ] = { 1.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , - 0.015 , -
0.029 , 0.0965 , 1.0 } ; static const real_T c_a [ 16 ] = {
0.93058059048379183 , - 0.366087099765667 , 0.0 , 0.0 , 0.366087099765667 ,
0.93058059048379183 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.139807669447128 ,
- 0.0549998406976098 , - 0.051 , 1.0 } ; static const real_T b_b [ 16 ] = {
1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , -
0.015 , 0.029 , 0.0965 , 1.0 } ; b_x = muDoubleScalarCos ( x [ 0 ] / 2.0 ) ;
c_x = muDoubleScalarSin ( x [ 0 ] / 2.0 ) ; b_res [ 0 ] = 1.0 - c_x * c_x *
2.0 ; b_res [ 4 ] = ( 0.0 - c_x * b_x ) * 2.0 ; b_res [ 8 ] = ( 0.0 * c_x +
0.0 * b_x ) * 2.0 ; b_res [ 1 ] = c_x * b_x * 2.0 ; b_res [ 5 ] = 1.0 - c_x *
c_x * 2.0 ; b_res [ 9 ] = ( 0.0 * c_x - 0.0 * b_x ) * 2.0 ; b_res [ 2 ] = (
0.0 * c_x - 0.0 * b_x ) * 2.0 ; b_res [ 6 ] = ( 0.0 * c_x + 0.0 * b_x ) * 2.0
; b_x = muDoubleScalarCos ( x [ 9 ] / 2.0 ) ; c_x = muDoubleScalarSin ( x [ 9
] / 2.0 ) ; e_res [ 0 ] = 1.0 - c_x * c_x * 2.0 ; e_res [ 4 ] = ( 0.0 - c_x *
b_x ) * 2.0 ; e_res [ 8 ] = ( 0.0 * c_x + 0.0 * b_x ) * 2.0 ; e_res [ 1 ] =
c_x * b_x * 2.0 ; e_res [ 5 ] = 1.0 - c_x * c_x * 2.0 ; e_res [ 9 ] = ( 0.0 *
c_x - 0.0 * b_x ) * 2.0 ; e_res [ 2 ] = ( 0.0 * c_x - 0.0 * b_x ) * 2.0 ;
e_res [ 6 ] = ( 0.0 * c_x + 0.0 * b_x ) * 2.0 ; res [ 0 ] = 1.0 - (
obj_objfun_tunableEnvironment [ 2 ] * obj_objfun_tunableEnvironment [ 2 ] +
obj_objfun_tunableEnvironment [ 3 ] * obj_objfun_tunableEnvironment [ 3 ] ) *
2.0 ; res [ 4 ] = ( obj_objfun_tunableEnvironment [ 1 ] *
obj_objfun_tunableEnvironment [ 2 ] - obj_objfun_tunableEnvironment [ 3 ] *
obj_objfun_tunableEnvironment [ 0 ] ) * 2.0 ; res [ 8 ] = (
obj_objfun_tunableEnvironment [ 1 ] * obj_objfun_tunableEnvironment [ 3 ] +
obj_objfun_tunableEnvironment [ 2 ] * obj_objfun_tunableEnvironment [ 0 ] ) *
2.0 ; res [ 12 ] = 0.0 ; res [ 1 ] = ( obj_objfun_tunableEnvironment [ 1 ] *
obj_objfun_tunableEnvironment [ 2 ] + obj_objfun_tunableEnvironment [ 3 ] *
obj_objfun_tunableEnvironment [ 0 ] ) * 2.0 ; res [ 5 ] = 1.0 - (
obj_objfun_tunableEnvironment [ 1 ] * obj_objfun_tunableEnvironment [ 1 ] +
obj_objfun_tunableEnvironment [ 3 ] * obj_objfun_tunableEnvironment [ 3 ] ) *
2.0 ; res [ 9 ] = ( obj_objfun_tunableEnvironment [ 2 ] *
obj_objfun_tunableEnvironment [ 3 ] - obj_objfun_tunableEnvironment [ 1 ] *
obj_objfun_tunableEnvironment [ 0 ] ) * 2.0 ; res [ 13 ] = 0.0 ; res [ 2 ] =
( obj_objfun_tunableEnvironment [ 1 ] * obj_objfun_tunableEnvironment [ 3 ] -
obj_objfun_tunableEnvironment [ 2 ] * obj_objfun_tunableEnvironment [ 0 ] ) *
2.0 ; res [ 6 ] = ( obj_objfun_tunableEnvironment [ 2 ] *
obj_objfun_tunableEnvironment [ 3 ] + obj_objfun_tunableEnvironment [ 1 ] *
obj_objfun_tunableEnvironment [ 0 ] ) * 2.0 ; res [ 10 ] = 1.0 - (
obj_objfun_tunableEnvironment [ 1 ] * obj_objfun_tunableEnvironment [ 1 ] +
obj_objfun_tunableEnvironment [ 2 ] * obj_objfun_tunableEnvironment [ 2 ] ) *
2.0 ; res [ 14 ] = 0.0 ; res [ 3 ] = 0.0 ; res [ 7 ] = 0.0 ; res [ 11 ] = 0.0
; res [ 15 ] = 1.0 ; for ( k = 0 ; k < 4 ; k ++ ) { for ( i = 0 ; i < 4 ; i
++ ) { a [ i + ( k << 2 ) ] = 0.0 ; a [ i + ( k << 2 ) ] += res [ k << 2 ] *
a_p [ i ] ; a [ i + ( k << 2 ) ] += res [ ( k << 2 ) + 1 ] * a_p [ i + 4 ] ;
a [ i + ( k << 2 ) ] += res [ ( k << 2 ) + 2 ] * a_p [ i + 8 ] ; a [ i + ( k
<< 2 ) ] += res [ ( k << 2 ) + 3 ] * a_p [ i + 12 ] ; } } fxnkqpuvi4 ( a , &
Avals [ 0 ] , & Avals [ 1 ] , & Avals [ 2 ] , & Avals [ 3 ] , & Avals [ 4 ] ,
& Avals [ 5 ] , & Avals [ 6 ] ) ; b_res [ 12 ] = 0.0 ; b_res [ 13 ] = 0.0 ;
b_res [ 10 ] = 1.0 ; b_res [ 14 ] = 0.0 ; b_res [ 3 ] = 0.0 ; b_res [ 7 ] =
0.0 ; b_res [ 11 ] = 0.0 ; b_res [ 15 ] = 1.0 ; for ( k = 0 ; k < 4 ; k ++ )
{ for ( i = 0 ; i < 4 ; i ++ ) { res [ k + ( i << 2 ) ] = 0.0 ; res [ k + ( i
<< 2 ) ] += b_res [ i << 2 ] * b_a [ k ] ; res [ k + ( i << 2 ) ] += b_res [
( i << 2 ) + 1 ] * b_a [ k + 4 ] ; res [ k + ( i << 2 ) ] += b_res [ ( i << 2
) + 2 ] * b_a [ k + 8 ] ; res [ k + ( i << 2 ) ] += b_res [ ( i << 2 ) + 3 ]
* b_a [ k + 12 ] ; } for ( i = 0 ; i < 4 ; i ++ ) { a [ k + ( i << 2 ) ] =
0.0 ; a [ k + ( i << 2 ) ] += e_b [ i << 2 ] * res [ k ] ; a [ k + ( i << 2 )
] += e_b [ ( i << 2 ) + 1 ] * res [ k + 4 ] ; a [ k + ( i << 2 ) ] += e_b [ (
i << 2 ) + 2 ] * res [ k + 8 ] ; a [ k + ( i << 2 ) ] += e_b [ ( i << 2 ) + 3
] * res [ k + 12 ] ; } } c_res [ 0 ] = 1.0 - ( x [ 3 ] * x [ 3 ] + x [ 4 ] *
x [ 4 ] ) * 2.0 ; c_res [ 4 ] = ( x [ 2 ] * x [ 3 ] - x [ 4 ] * x [ 1 ] ) *
2.0 ; c_res [ 8 ] = ( x [ 2 ] * x [ 4 ] + x [ 3 ] * x [ 1 ] ) * 2.0 ; c_res [
12 ] = 0.0 ; c_res [ 1 ] = ( x [ 2 ] * x [ 3 ] + x [ 4 ] * x [ 1 ] ) * 2.0 ;
c_res [ 5 ] = 1.0 - ( x [ 2 ] * x [ 2 ] + x [ 4 ] * x [ 4 ] ) * 2.0 ; c_res [
9 ] = ( x [ 3 ] * x [ 4 ] - x [ 2 ] * x [ 1 ] ) * 2.0 ; c_res [ 13 ] = 0.0 ;
c_res [ 2 ] = ( x [ 2 ] * x [ 4 ] - x [ 3 ] * x [ 1 ] ) * 2.0 ; c_res [ 6 ] =
( x [ 3 ] * x [ 4 ] + x [ 2 ] * x [ 1 ] ) * 2.0 ; c_res [ 10 ] = 1.0 - ( x [
2 ] * x [ 2 ] + x [ 3 ] * x [ 3 ] ) * 2.0 ; c_res [ 14 ] = 0.0 ; c_res [ 3 ]
= 0.0 ; c_res [ 7 ] = 0.0 ; c_res [ 11 ] = 0.0 ; c_res [ 15 ] = 1.0 ; for ( k
= 0 ; k < 4 ; k ++ ) { for ( i = 0 ; i < 4 ; i ++ ) { res [ k + ( i << 2 ) ]
= 0.0 ; res [ k + ( i << 2 ) ] += c_res [ i << 2 ] * a [ k ] ; res [ k + ( i
<< 2 ) ] += c_res [ ( i << 2 ) + 1 ] * a [ k + 4 ] ; res [ k + ( i << 2 ) ]
+= c_res [ ( i << 2 ) + 2 ] * a [ k + 8 ] ; res [ k + ( i << 2 ) ] += c_res [
( i << 2 ) + 3 ] * a [ k + 12 ] ; } for ( i = 0 ; i < 4 ; i ++ ) { b_res [ k
+ ( i << 2 ) ] = 0.0 ; b_res [ k + ( i << 2 ) ] += d_b [ i << 2 ] * res [ k ]
; b_res [ k + ( i << 2 ) ] += d_b [ ( i << 2 ) + 1 ] * res [ k + 4 ] ; b_res
[ k + ( i << 2 ) ] += d_b [ ( i << 2 ) + 2 ] * res [ k + 8 ] ; b_res [ k + (
i << 2 ) ] += d_b [ ( i << 2 ) + 3 ] * res [ k + 12 ] ; } } c_res [ 0 ] = 1.0
- ( x [ 7 ] * x [ 7 ] + x [ 8 ] * x [ 8 ] ) * 2.0 ; c_res [ 4 ] = ( x [ 6 ] *
x [ 7 ] - x [ 8 ] * x [ 5 ] ) * 2.0 ; c_res [ 8 ] = ( x [ 6 ] * x [ 8 ] + x [
7 ] * x [ 5 ] ) * 2.0 ; c_res [ 12 ] = 0.0 ; c_res [ 1 ] = ( x [ 6 ] * x [ 7
] + x [ 8 ] * x [ 5 ] ) * 2.0 ; c_res [ 5 ] = 1.0 - ( x [ 6 ] * x [ 6 ] + x [
8 ] * x [ 8 ] ) * 2.0 ; c_res [ 9 ] = ( x [ 7 ] * x [ 8 ] - x [ 6 ] * x [ 5 ]
) * 2.0 ; c_res [ 13 ] = 0.0 ; c_res [ 2 ] = ( x [ 6 ] * x [ 8 ] - x [ 7 ] *
x [ 5 ] ) * 2.0 ; c_res [ 6 ] = ( x [ 7 ] * x [ 8 ] + x [ 6 ] * x [ 5 ] ) *
2.0 ; c_res [ 10 ] = 1.0 - ( x [ 6 ] * x [ 6 ] + x [ 7 ] * x [ 7 ] ) * 2.0 ;
c_res [ 14 ] = 0.0 ; c_res [ 3 ] = 0.0 ; c_res [ 7 ] = 0.0 ; c_res [ 11 ] =
0.0 ; c_res [ 15 ] = 1.0 ; for ( k = 0 ; k < 4 ; k ++ ) { for ( i = 0 ; i < 4
; i ++ ) { res [ k + ( i << 2 ) ] = 0.0 ; res [ k + ( i << 2 ) ] += c_res [ i
<< 2 ] * b_res [ k ] ; res [ k + ( i << 2 ) ] += c_res [ ( i << 2 ) + 1 ] *
b_res [ k + 4 ] ; res [ k + ( i << 2 ) ] += c_res [ ( i << 2 ) + 2 ] * b_res
[ k + 8 ] ; res [ k + ( i << 2 ) ] += c_res [ ( i << 2 ) + 3 ] * b_res [ k +
12 ] ; } for ( i = 0 ; i < 4 ; i ++ ) { a [ k + ( i << 2 ) ] = 0.0 ; a [ k +
( i << 2 ) ] += b [ i << 2 ] * res [ k ] ; a [ k + ( i << 2 ) ] += b [ ( i <<
2 ) + 1 ] * res [ k + 4 ] ; a [ k + ( i << 2 ) ] += b [ ( i << 2 ) + 2 ] *
res [ k + 8 ] ; a [ k + ( i << 2 ) ] += b [ ( i << 2 ) + 3 ] * res [ k + 12 ]
; } } fxnkqpuvi4 ( a , & Bvals [ 0 ] , & Bvals [ 1 ] , & Bvals [ 2 ] , &
Bvals [ 3 ] , & Bvals [ 4 ] , & Bvals [ 5 ] , & Bvals [ 6 ] ) ; e_res [ 12 ]
= 0.0 ; e_res [ 13 ] = 0.0 ; e_res [ 10 ] = 1.0 ; e_res [ 14 ] = 0.0 ; e_res
[ 3 ] = 0.0 ; e_res [ 7 ] = 0.0 ; e_res [ 11 ] = 0.0 ; e_res [ 15 ] = 1.0 ;
for ( k = 0 ; k < 4 ; k ++ ) { for ( i = 0 ; i < 4 ; i ++ ) { res [ k + ( i
<< 2 ) ] = 0.0 ; res [ k + ( i << 2 ) ] += e_res [ i << 2 ] * c_a [ k ] ; res
[ k + ( i << 2 ) ] += e_res [ ( i << 2 ) + 1 ] * c_a [ k + 4 ] ; res [ k + (
i << 2 ) ] += e_res [ ( i << 2 ) + 2 ] * c_a [ k + 8 ] ; res [ k + ( i << 2 )
] += e_res [ ( i << 2 ) + 3 ] * c_a [ k + 12 ] ; } for ( i = 0 ; i < 4 ; i ++
) { a [ k + ( i << 2 ) ] = 0.0 ; a [ k + ( i << 2 ) ] += e_b [ i << 2 ] * res
[ k ] ; a [ k + ( i << 2 ) ] += e_b [ ( i << 2 ) + 1 ] * res [ k + 4 ] ; a [
k + ( i << 2 ) ] += e_b [ ( i << 2 ) + 2 ] * res [ k + 8 ] ; a [ k + ( i << 2
) ] += e_b [ ( i << 2 ) + 3 ] * res [ k + 12 ] ; } } b_res [ 0 ] = 1.0 - ( x
[ 12 ] * x [ 12 ] + x [ 13 ] * x [ 13 ] ) * 2.0 ; b_res [ 4 ] = ( x [ 11 ] *
x [ 12 ] - x [ 13 ] * x [ 10 ] ) * 2.0 ; b_res [ 8 ] = ( x [ 11 ] * x [ 13 ]
+ x [ 12 ] * x [ 10 ] ) * 2.0 ; b_res [ 12 ] = 0.0 ; b_res [ 1 ] = ( x [ 11 ]
* x [ 12 ] + x [ 13 ] * x [ 10 ] ) * 2.0 ; b_res [ 5 ] = 1.0 - ( x [ 11 ] * x
[ 11 ] + x [ 13 ] * x [ 13 ] ) * 2.0 ; b_res [ 9 ] = ( x [ 12 ] * x [ 13 ] -
x [ 11 ] * x [ 10 ] ) * 2.0 ; b_res [ 13 ] = 0.0 ; b_res [ 2 ] = ( x [ 11 ] *
x [ 13 ] - x [ 12 ] * x [ 10 ] ) * 2.0 ; b_res [ 6 ] = ( x [ 12 ] * x [ 13 ]
+ x [ 11 ] * x [ 10 ] ) * 2.0 ; b_res [ 10 ] = 1.0 - ( x [ 11 ] * x [ 11 ] +
x [ 12 ] * x [ 12 ] ) * 2.0 ; b_res [ 14 ] = 0.0 ; b_res [ 3 ] = 0.0 ; b_res
[ 7 ] = 0.0 ; b_res [ 11 ] = 0.0 ; b_res [ 15 ] = 1.0 ; for ( k = 0 ; k < 4 ;
k ++ ) { for ( i = 0 ; i < 4 ; i ++ ) { res [ k + ( i << 2 ) ] = 0.0 ; res [
k + ( i << 2 ) ] += b_res [ i << 2 ] * a [ k ] ; res [ k + ( i << 2 ) ] +=
b_res [ ( i << 2 ) + 1 ] * a [ k + 4 ] ; res [ k + ( i << 2 ) ] += b_res [ (
i << 2 ) + 2 ] * a [ k + 8 ] ; res [ k + ( i << 2 ) ] += b_res [ ( i << 2 ) +
3 ] * a [ k + 12 ] ; } for ( i = 0 ; i < 4 ; i ++ ) { e_res [ k + ( i << 2 )
] = 0.0 ; e_res [ k + ( i << 2 ) ] += d_b [ i << 2 ] * res [ k ] ; e_res [ k
+ ( i << 2 ) ] += d_b [ ( i << 2 ) + 1 ] * res [ k + 4 ] ; e_res [ k + ( i <<
2 ) ] += d_b [ ( i << 2 ) + 2 ] * res [ k + 8 ] ; e_res [ k + ( i << 2 ) ] +=
d_b [ ( i << 2 ) + 3 ] * res [ k + 12 ] ; } } b_res [ 0 ] = 1.0 - ( x [ 16 ]
* x [ 16 ] + x [ 17 ] * x [ 17 ] ) * 2.0 ; b_res [ 4 ] = ( x [ 15 ] * x [ 16
] - x [ 17 ] * x [ 14 ] ) * 2.0 ; b_res [ 8 ] = ( x [ 15 ] * x [ 17 ] + x [
16 ] * x [ 14 ] ) * 2.0 ; b_res [ 12 ] = 0.0 ; b_res [ 1 ] = ( x [ 15 ] * x [
16 ] + x [ 17 ] * x [ 14 ] ) * 2.0 ; b_res [ 5 ] = 1.0 - ( x [ 15 ] * x [ 15
] + x [ 17 ] * x [ 17 ] ) * 2.0 ; b_res [ 9 ] = ( x [ 16 ] * x [ 17 ] - x [
15 ] * x [ 14 ] ) * 2.0 ; b_res [ 13 ] = 0.0 ; b_res [ 2 ] = ( x [ 15 ] * x [
17 ] - x [ 16 ] * x [ 14 ] ) * 2.0 ; b_res [ 6 ] = ( x [ 16 ] * x [ 17 ] + x
[ 15 ] * x [ 14 ] ) * 2.0 ; b_res [ 10 ] = 1.0 - ( x [ 15 ] * x [ 15 ] + x [
16 ] * x [ 16 ] ) * 2.0 ; b_res [ 14 ] = 0.0 ; b_res [ 3 ] = 0.0 ; b_res [ 7
] = 0.0 ; b_res [ 11 ] = 0.0 ; b_res [ 15 ] = 1.0 ; for ( k = 0 ; k < 4 ; k
++ ) { for ( i = 0 ; i < 4 ; i ++ ) { res [ k + ( i << 2 ) ] = 0.0 ; res [ k
+ ( i << 2 ) ] += b_res [ i << 2 ] * e_res [ k ] ; res [ k + ( i << 2 ) ] +=
b_res [ ( i << 2 ) + 1 ] * e_res [ k + 4 ] ; res [ k + ( i << 2 ) ] += b_res
[ ( i << 2 ) + 2 ] * e_res [ k + 8 ] ; res [ k + ( i << 2 ) ] += b_res [ ( i
<< 2 ) + 3 ] * e_res [ k + 12 ] ; } for ( i = 0 ; i < 4 ; i ++ ) { a [ k + (
i << 2 ) ] = 0.0 ; a [ k + ( i << 2 ) ] += b_b [ i << 2 ] * res [ k ] ; a [ k
+ ( i << 2 ) ] += b_b [ ( i << 2 ) + 1 ] * res [ k + 4 ] ; a [ k + ( i << 2 )
] += b_b [ ( i << 2 ) + 2 ] * res [ k + 8 ] ; a [ k + ( i << 2 ) ] += b_b [ (
i << 2 ) + 3 ] * res [ k + 12 ] ; } } fxnkqpuvi4 ( a , & Cvals [ 0 ] , &
Cvals [ 1 ] , & Cvals [ 2 ] , & Cvals [ 3 ] , & Cvals [ 4 ] , & Cvals [ 5 ] ,
& Cvals [ 6 ] ) ; for ( k = 0 ; k < 7 ; k ++ ) { error [ k ] = Avals [ k ] -
Bvals [ k ] ; error [ k + 7 ] = Bvals [ k ] - Cvals [ k ] ; error [ k + 14 ]
= Cvals [ k ] - Avals [ k ] ; } for ( k = 0 ; k < 21 ; k ++ ) { z1 [ k ] =
error [ k ] * error [ k ] ; } * fval = z1 [ 0 ] ; for ( k = 0 ; k < 20 ; k ++
) { * fval += z1 [ k + 1 ] ; } * status = 1 ; if ( muDoubleScalarIsInf ( *
fval ) || muDoubleScalarIsNaN ( * fval ) ) { if ( muDoubleScalarIsNaN ( *
fval ) ) { * status = - 6 ; } else if ( * fval < 0.0 ) { * status = - 4 ; }
else { * status = - 5 ; } } } static int32_T fgxc0qaihrx ( const real_T x [
18 ] , real_T Ceq_workspace [ 4 ] ) { int32_T status ; boolean_T allFinite ;
int32_T idx_current ; Ceq_workspace [ 0 ] = ( ( ( x [ 1 ] * x [ 1 ] + x [ 2 ]
* x [ 2 ] ) + x [ 3 ] * x [ 3 ] ) + x [ 4 ] * x [ 4 ] ) - 1.0 ; Ceq_workspace
[ 1 ] = ( ( ( x [ 5 ] * x [ 5 ] + x [ 6 ] * x [ 6 ] ) + x [ 7 ] * x [ 7 ] ) +
x [ 8 ] * x [ 8 ] ) - 1.0 ; Ceq_workspace [ 2 ] = ( ( ( x [ 10 ] * x [ 10 ] +
x [ 11 ] * x [ 11 ] ) + x [ 12 ] * x [ 12 ] ) + x [ 13 ] * x [ 13 ] ) - 1.0 ;
Ceq_workspace [ 3 ] = ( ( ( x [ 14 ] * x [ 14 ] + x [ 15 ] * x [ 15 ] ) + x [
16 ] * x [ 16 ] ) + x [ 17 ] * x [ 17 ] ) - 1.0 ; status = 1 ; allFinite =
true ; idx_current = 0 ; while ( allFinite && ( idx_current + 1 <= 4 ) ) {
allFinite = ( ( ! muDoubleScalarIsInf ( Ceq_workspace [ idx_current ] ) ) &&
( ! muDoubleScalarIsNaN ( Ceq_workspace [ idx_current ] ) ) ) ; idx_current
++ ; } if ( ! allFinite ) { idx_current -- ; if ( muDoubleScalarIsNaN (
Ceq_workspace [ idx_current ] ) ) { status = - 3 ; } else if ( Ceq_workspace
[ idx_current ] < 0.0 ) { status = - 1 ; } else { status = - 2 ; } } return
status ; } static void ih4gycxc1of ( const real_T
obj_objfun_tunableEnvironment [ 4 ] , const real_T x [ 18 ] , real_T
Ceq_workspace [ 4 ] , real_T * fval , int32_T * status ) { cipokh2zzbm (
obj_objfun_tunableEnvironment , x , fval , status ) ; if ( * status == 1 ) {
* status = fgxc0qaihrx ( x , Ceq_workspace ) ; } } static void p32d0btmmxzpjg
( const real_T objfun_tunableEnvironment [ 4 ] , dxs1et3yod * obj ) { int32_T
idx ; obj -> objfun . tunableEnvironment [ 0 ] = objfun_tunableEnvironment [
0 ] ; obj -> objfun . tunableEnvironment [ 1 ] = objfun_tunableEnvironment [
1 ] ; obj -> objfun . tunableEnvironment [ 2 ] = objfun_tunableEnvironment [
2 ] ; obj -> objfun . tunableEnvironment [ 3 ] = objfun_tunableEnvironment [
3 ] ; obj -> f_1 = 0.0 ; obj -> f_2 = 0.0 ; obj -> nVar = 18 ; obj -> mIneq =
0 ; obj -> mEq = 4 ; obj -> numEvals = 0 ; obj -> SpecifyObjectiveGradient =
false ; obj -> SpecifyConstraintGradient = false ; obj ->
FiniteDifferenceType = 0 ; for ( idx = 0 ; idx < 18 ; idx ++ ) { obj -> hasLB
[ idx ] = false ; obj -> hasUB [ idx ] = false ; } obj -> hasBounds = false ;
} static boolean_T hl1l1m0sqeh ( const real_T obj_objfun_tunableEnvironment [
4 ] , real_T * fplus , real_T cEqPlus [ 4 ] , int32_T dim , real_T delta ,
real_T xk [ 18 ] ) { boolean_T evalOK ; real_T temp ; int32_T idx ; real_T
Avals [ 7 ] ; real_T Bvals [ 7 ] ; real_T Cvals [ 7 ] ; real_T error [ 21 ] ;
real_T x ; real_T b_x ; real_T z1 [ 21 ] ; real_T res [ 16 ] ; real_T a [ 16
] ; real_T b_res [ 16 ] ; real_T c_res [ 16 ] ; real_T e_res [ 16 ] ; int32_T
i ; static const real_T a_p [ 16 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.265 , 0.0 , 0.014 , 1.0 } ; static
const real_T b_a [ 16 ] = { 0.93058059048379183 , 0.36608709976566678 , 0.0 ,
0.0 , - 0.36608709976566678 , 0.93058059048379183 , 0.0 , 0.0 , 0.0 , 0.0 ,
1.0 , 0.0 , 0.139807669447128 , 0.0549998406976098 , - 0.051 , 1.0 } ; static
const real_T e_b [ 16 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 1.0 , 0.0 , 0.085 , 0.0 , - 0.0245 , 1.0 } ; static const real_T
d_b [ 16 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
1.0 , 0.0 , 0.11 , 0.0 , 0.0 , 1.0 } ; static const real_T b [ 16 ] = { 1.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , - 0.015 , -
0.029 , 0.0965 , 1.0 } ; static const real_T c_a [ 16 ] = {
0.93058059048379183 , - 0.366087099765667 , 0.0 , 0.0 , 0.366087099765667 ,
0.93058059048379183 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.139807669447128 ,
- 0.0549998406976098 , - 0.051 , 1.0 } ; static const real_T b_b [ 16 ] = {
1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , -
0.015 , 0.029 , 0.0965 , 1.0 } ; temp = xk [ dim - 1 ] ; xk [ dim - 1 ] +=
delta ; x = muDoubleScalarCos ( xk [ 0 ] / 2.0 ) ; b_x = muDoubleScalarSin (
xk [ 0 ] / 2.0 ) ; b_res [ 0 ] = 1.0 - b_x * b_x * 2.0 ; b_res [ 4 ] = ( 0.0
- b_x * x ) * 2.0 ; b_res [ 8 ] = ( 0.0 * b_x + 0.0 * x ) * 2.0 ; b_res [ 1 ]
= b_x * x * 2.0 ; b_res [ 5 ] = 1.0 - b_x * b_x * 2.0 ; b_res [ 9 ] = ( 0.0 *
b_x - 0.0 * x ) * 2.0 ; b_res [ 2 ] = ( 0.0 * b_x - 0.0 * x ) * 2.0 ; b_res [
6 ] = ( 0.0 * b_x + 0.0 * x ) * 2.0 ; x = muDoubleScalarCos ( xk [ 9 ] / 2.0
) ; b_x = muDoubleScalarSin ( xk [ 9 ] / 2.0 ) ; e_res [ 0 ] = 1.0 - b_x *
b_x * 2.0 ; e_res [ 4 ] = ( 0.0 - b_x * x ) * 2.0 ; e_res [ 8 ] = ( 0.0 * b_x
+ 0.0 * x ) * 2.0 ; e_res [ 1 ] = b_x * x * 2.0 ; e_res [ 5 ] = 1.0 - b_x *
b_x * 2.0 ; e_res [ 9 ] = ( 0.0 * b_x - 0.0 * x ) * 2.0 ; e_res [ 2 ] = ( 0.0
* b_x - 0.0 * x ) * 2.0 ; e_res [ 6 ] = ( 0.0 * b_x + 0.0 * x ) * 2.0 ; res [
0 ] = 1.0 - ( obj_objfun_tunableEnvironment [ 2 ] *
obj_objfun_tunableEnvironment [ 2 ] + obj_objfun_tunableEnvironment [ 3 ] *
obj_objfun_tunableEnvironment [ 3 ] ) * 2.0 ; res [ 4 ] = (
obj_objfun_tunableEnvironment [ 1 ] * obj_objfun_tunableEnvironment [ 2 ] -
obj_objfun_tunableEnvironment [ 3 ] * obj_objfun_tunableEnvironment [ 0 ] ) *
2.0 ; res [ 8 ] = ( obj_objfun_tunableEnvironment [ 1 ] *
obj_objfun_tunableEnvironment [ 3 ] + obj_objfun_tunableEnvironment [ 2 ] *
obj_objfun_tunableEnvironment [ 0 ] ) * 2.0 ; res [ 12 ] = 0.0 ; res [ 1 ] =
( obj_objfun_tunableEnvironment [ 1 ] * obj_objfun_tunableEnvironment [ 2 ] +
obj_objfun_tunableEnvironment [ 3 ] * obj_objfun_tunableEnvironment [ 0 ] ) *
2.0 ; res [ 5 ] = 1.0 - ( obj_objfun_tunableEnvironment [ 1 ] *
obj_objfun_tunableEnvironment [ 1 ] + obj_objfun_tunableEnvironment [ 3 ] *
obj_objfun_tunableEnvironment [ 3 ] ) * 2.0 ; res [ 9 ] = (
obj_objfun_tunableEnvironment [ 2 ] * obj_objfun_tunableEnvironment [ 3 ] -
obj_objfun_tunableEnvironment [ 1 ] * obj_objfun_tunableEnvironment [ 0 ] ) *
2.0 ; res [ 13 ] = 0.0 ; res [ 2 ] = ( obj_objfun_tunableEnvironment [ 1 ] *
obj_objfun_tunableEnvironment [ 3 ] - obj_objfun_tunableEnvironment [ 2 ] *
obj_objfun_tunableEnvironment [ 0 ] ) * 2.0 ; res [ 6 ] = (
obj_objfun_tunableEnvironment [ 2 ] * obj_objfun_tunableEnvironment [ 3 ] +
obj_objfun_tunableEnvironment [ 1 ] * obj_objfun_tunableEnvironment [ 0 ] ) *
2.0 ; res [ 10 ] = 1.0 - ( obj_objfun_tunableEnvironment [ 1 ] *
obj_objfun_tunableEnvironment [ 1 ] + obj_objfun_tunableEnvironment [ 2 ] *
obj_objfun_tunableEnvironment [ 2 ] ) * 2.0 ; res [ 14 ] = 0.0 ; res [ 3 ] =
0.0 ; res [ 7 ] = 0.0 ; res [ 11 ] = 0.0 ; res [ 15 ] = 1.0 ; for ( idx = 0 ;
idx < 4 ; idx ++ ) { for ( i = 0 ; i < 4 ; i ++ ) { a [ i + ( idx << 2 ) ] =
0.0 ; a [ i + ( idx << 2 ) ] += res [ idx << 2 ] * a_p [ i ] ; a [ i + ( idx
<< 2 ) ] += res [ ( idx << 2 ) + 1 ] * a_p [ i + 4 ] ; a [ i + ( idx << 2 ) ]
+= res [ ( idx << 2 ) + 2 ] * a_p [ i + 8 ] ; a [ i + ( idx << 2 ) ] += res [
( idx << 2 ) + 3 ] * a_p [ i + 12 ] ; } } fxnkqpuvi4 ( a , & Avals [ 0 ] , &
Avals [ 1 ] , & Avals [ 2 ] , & Avals [ 3 ] , & Avals [ 4 ] , & Avals [ 5 ] ,
& Avals [ 6 ] ) ; b_res [ 12 ] = 0.0 ; b_res [ 13 ] = 0.0 ; b_res [ 10 ] =
1.0 ; b_res [ 14 ] = 0.0 ; b_res [ 3 ] = 0.0 ; b_res [ 7 ] = 0.0 ; b_res [ 11
] = 0.0 ; b_res [ 15 ] = 1.0 ; for ( idx = 0 ; idx < 4 ; idx ++ ) { for ( i =
0 ; i < 4 ; i ++ ) { res [ idx + ( i << 2 ) ] = 0.0 ; res [ idx + ( i << 2 )
] += b_res [ i << 2 ] * b_a [ idx ] ; res [ idx + ( i << 2 ) ] += b_res [ ( i
<< 2 ) + 1 ] * b_a [ idx + 4 ] ; res [ idx + ( i << 2 ) ] += b_res [ ( i << 2
) + 2 ] * b_a [ idx + 8 ] ; res [ idx + ( i << 2 ) ] += b_res [ ( i << 2 ) +
3 ] * b_a [ idx + 12 ] ; } for ( i = 0 ; i < 4 ; i ++ ) { a [ idx + ( i << 2
) ] = 0.0 ; a [ idx + ( i << 2 ) ] += e_b [ i << 2 ] * res [ idx ] ; a [ idx
+ ( i << 2 ) ] += e_b [ ( i << 2 ) + 1 ] * res [ idx + 4 ] ; a [ idx + ( i <<
2 ) ] += e_b [ ( i << 2 ) + 2 ] * res [ idx + 8 ] ; a [ idx + ( i << 2 ) ] +=
e_b [ ( i << 2 ) + 3 ] * res [ idx + 12 ] ; } } c_res [ 0 ] = 1.0 - ( xk [ 3
] * xk [ 3 ] + xk [ 4 ] * xk [ 4 ] ) * 2.0 ; c_res [ 4 ] = ( xk [ 2 ] * xk [
3 ] - xk [ 4 ] * xk [ 1 ] ) * 2.0 ; c_res [ 8 ] = ( xk [ 2 ] * xk [ 4 ] + xk
[ 3 ] * xk [ 1 ] ) * 2.0 ; c_res [ 12 ] = 0.0 ; c_res [ 1 ] = ( xk [ 2 ] * xk
[ 3 ] + xk [ 4 ] * xk [ 1 ] ) * 2.0 ; c_res [ 5 ] = 1.0 - ( xk [ 2 ] * xk [ 2
] + xk [ 4 ] * xk [ 4 ] ) * 2.0 ; c_res [ 9 ] = ( xk [ 3 ] * xk [ 4 ] - xk [
2 ] * xk [ 1 ] ) * 2.0 ; c_res [ 13 ] = 0.0 ; c_res [ 2 ] = ( xk [ 2 ] * xk [
4 ] - xk [ 3 ] * xk [ 1 ] ) * 2.0 ; c_res [ 6 ] = ( xk [ 3 ] * xk [ 4 ] + xk
[ 2 ] * xk [ 1 ] ) * 2.0 ; c_res [ 10 ] = 1.0 - ( xk [ 2 ] * xk [ 2 ] + xk [
3 ] * xk [ 3 ] ) * 2.0 ; c_res [ 14 ] = 0.0 ; c_res [ 3 ] = 0.0 ; c_res [ 7 ]
= 0.0 ; c_res [ 11 ] = 0.0 ; c_res [ 15 ] = 1.0 ; for ( idx = 0 ; idx < 4 ;
idx ++ ) { for ( i = 0 ; i < 4 ; i ++ ) { res [ idx + ( i << 2 ) ] = 0.0 ;
res [ idx + ( i << 2 ) ] += c_res [ i << 2 ] * a [ idx ] ; res [ idx + ( i <<
2 ) ] += c_res [ ( i << 2 ) + 1 ] * a [ idx + 4 ] ; res [ idx + ( i << 2 ) ]
+= c_res [ ( i << 2 ) + 2 ] * a [ idx + 8 ] ; res [ idx + ( i << 2 ) ] +=
c_res [ ( i << 2 ) + 3 ] * a [ idx + 12 ] ; } for ( i = 0 ; i < 4 ; i ++ ) {
b_res [ idx + ( i << 2 ) ] = 0.0 ; b_res [ idx + ( i << 2 ) ] += d_b [ i << 2
] * res [ idx ] ; b_res [ idx + ( i << 2 ) ] += d_b [ ( i << 2 ) + 1 ] * res
[ idx + 4 ] ; b_res [ idx + ( i << 2 ) ] += d_b [ ( i << 2 ) + 2 ] * res [
idx + 8 ] ; b_res [ idx + ( i << 2 ) ] += d_b [ ( i << 2 ) + 3 ] * res [ idx
+ 12 ] ; } } c_res [ 0 ] = 1.0 - ( xk [ 7 ] * xk [ 7 ] + xk [ 8 ] * xk [ 8 ]
) * 2.0 ; c_res [ 4 ] = ( xk [ 6 ] * xk [ 7 ] - xk [ 8 ] * xk [ 5 ] ) * 2.0 ;
c_res [ 8 ] = ( xk [ 6 ] * xk [ 8 ] + xk [ 7 ] * xk [ 5 ] ) * 2.0 ; c_res [
12 ] = 0.0 ; c_res [ 1 ] = ( xk [ 6 ] * xk [ 7 ] + xk [ 8 ] * xk [ 5 ] ) *
2.0 ; c_res [ 5 ] = 1.0 - ( xk [ 6 ] * xk [ 6 ] + xk [ 8 ] * xk [ 8 ] ) * 2.0
; c_res [ 9 ] = ( xk [ 7 ] * xk [ 8 ] - xk [ 6 ] * xk [ 5 ] ) * 2.0 ; c_res [
13 ] = 0.0 ; c_res [ 2 ] = ( xk [ 6 ] * xk [ 8 ] - xk [ 7 ] * xk [ 5 ] ) *
2.0 ; c_res [ 6 ] = ( xk [ 7 ] * xk [ 8 ] + xk [ 6 ] * xk [ 5 ] ) * 2.0 ;
c_res [ 10 ] = 1.0 - ( xk [ 6 ] * xk [ 6 ] + xk [ 7 ] * xk [ 7 ] ) * 2.0 ;
c_res [ 14 ] = 0.0 ; c_res [ 3 ] = 0.0 ; c_res [ 7 ] = 0.0 ; c_res [ 11 ] =
0.0 ; c_res [ 15 ] = 1.0 ; for ( idx = 0 ; idx < 4 ; idx ++ ) { for ( i = 0 ;
i < 4 ; i ++ ) { res [ idx + ( i << 2 ) ] = 0.0 ; res [ idx + ( i << 2 ) ] +=
c_res [ i << 2 ] * b_res [ idx ] ; res [ idx + ( i << 2 ) ] += c_res [ ( i <<
2 ) + 1 ] * b_res [ idx + 4 ] ; res [ idx + ( i << 2 ) ] += c_res [ ( i << 2
) + 2 ] * b_res [ idx + 8 ] ; res [ idx + ( i << 2 ) ] += c_res [ ( i << 2 )
+ 3 ] * b_res [ idx + 12 ] ; } for ( i = 0 ; i < 4 ; i ++ ) { a [ idx + ( i
<< 2 ) ] = 0.0 ; a [ idx + ( i << 2 ) ] += b [ i << 2 ] * res [ idx ] ; a [
idx + ( i << 2 ) ] += b [ ( i << 2 ) + 1 ] * res [ idx + 4 ] ; a [ idx + ( i
<< 2 ) ] += b [ ( i << 2 ) + 2 ] * res [ idx + 8 ] ; a [ idx + ( i << 2 ) ]
+= b [ ( i << 2 ) + 3 ] * res [ idx + 12 ] ; } } fxnkqpuvi4 ( a , & Bvals [ 0
] , & Bvals [ 1 ] , & Bvals [ 2 ] , & Bvals [ 3 ] , & Bvals [ 4 ] , & Bvals [
5 ] , & Bvals [ 6 ] ) ; e_res [ 12 ] = 0.0 ; e_res [ 13 ] = 0.0 ; e_res [ 10
] = 1.0 ; e_res [ 14 ] = 0.0 ; e_res [ 3 ] = 0.0 ; e_res [ 7 ] = 0.0 ; e_res
[ 11 ] = 0.0 ; e_res [ 15 ] = 1.0 ; for ( idx = 0 ; idx < 4 ; idx ++ ) { for
( i = 0 ; i < 4 ; i ++ ) { res [ idx + ( i << 2 ) ] = 0.0 ; res [ idx + ( i
<< 2 ) ] += e_res [ i << 2 ] * c_a [ idx ] ; res [ idx + ( i << 2 ) ] +=
e_res [ ( i << 2 ) + 1 ] * c_a [ idx + 4 ] ; res [ idx + ( i << 2 ) ] +=
e_res [ ( i << 2 ) + 2 ] * c_a [ idx + 8 ] ; res [ idx + ( i << 2 ) ] +=
e_res [ ( i << 2 ) + 3 ] * c_a [ idx + 12 ] ; } for ( i = 0 ; i < 4 ; i ++ )
{ a [ idx + ( i << 2 ) ] = 0.0 ; a [ idx + ( i << 2 ) ] += e_b [ i << 2 ] *
res [ idx ] ; a [ idx + ( i << 2 ) ] += e_b [ ( i << 2 ) + 1 ] * res [ idx +
4 ] ; a [ idx + ( i << 2 ) ] += e_b [ ( i << 2 ) + 2 ] * res [ idx + 8 ] ; a
[ idx + ( i << 2 ) ] += e_b [ ( i << 2 ) + 3 ] * res [ idx + 12 ] ; } } b_res
[ 0 ] = 1.0 - ( xk [ 12 ] * xk [ 12 ] + xk [ 13 ] * xk [ 13 ] ) * 2.0 ; b_res
[ 4 ] = ( xk [ 11 ] * xk [ 12 ] - xk [ 13 ] * xk [ 10 ] ) * 2.0 ; b_res [ 8 ]
= ( xk [ 11 ] * xk [ 13 ] + xk [ 12 ] * xk [ 10 ] ) * 2.0 ; b_res [ 12 ] =
0.0 ; b_res [ 1 ] = ( xk [ 11 ] * xk [ 12 ] + xk [ 13 ] * xk [ 10 ] ) * 2.0 ;
b_res [ 5 ] = 1.0 - ( xk [ 11 ] * xk [ 11 ] + xk [ 13 ] * xk [ 13 ] ) * 2.0 ;
b_res [ 9 ] = ( xk [ 12 ] * xk [ 13 ] - xk [ 11 ] * xk [ 10 ] ) * 2.0 ; b_res
[ 13 ] = 0.0 ; b_res [ 2 ] = ( xk [ 11 ] * xk [ 13 ] - xk [ 12 ] * xk [ 10 ]
) * 2.0 ; b_res [ 6 ] = ( xk [ 12 ] * xk [ 13 ] + xk [ 11 ] * xk [ 10 ] ) *
2.0 ; b_res [ 10 ] = 1.0 - ( xk [ 11 ] * xk [ 11 ] + xk [ 12 ] * xk [ 12 ] )
* 2.0 ; b_res [ 14 ] = 0.0 ; b_res [ 3 ] = 0.0 ; b_res [ 7 ] = 0.0 ; b_res [
11 ] = 0.0 ; b_res [ 15 ] = 1.0 ; for ( idx = 0 ; idx < 4 ; idx ++ ) { for (
i = 0 ; i < 4 ; i ++ ) { res [ idx + ( i << 2 ) ] = 0.0 ; res [ idx + ( i <<
2 ) ] += b_res [ i << 2 ] * a [ idx ] ; res [ idx + ( i << 2 ) ] += b_res [ (
i << 2 ) + 1 ] * a [ idx + 4 ] ; res [ idx + ( i << 2 ) ] += b_res [ ( i << 2
) + 2 ] * a [ idx + 8 ] ; res [ idx + ( i << 2 ) ] += b_res [ ( i << 2 ) + 3
] * a [ idx + 12 ] ; } for ( i = 0 ; i < 4 ; i ++ ) { e_res [ idx + ( i << 2
) ] = 0.0 ; e_res [ idx + ( i << 2 ) ] += d_b [ i << 2 ] * res [ idx ] ;
e_res [ idx + ( i << 2 ) ] += d_b [ ( i << 2 ) + 1 ] * res [ idx + 4 ] ;
e_res [ idx + ( i << 2 ) ] += d_b [ ( i << 2 ) + 2 ] * res [ idx + 8 ] ;
e_res [ idx + ( i << 2 ) ] += d_b [ ( i << 2 ) + 3 ] * res [ idx + 12 ] ; } }
b_res [ 0 ] = 1.0 - ( xk [ 16 ] * xk [ 16 ] + xk [ 17 ] * xk [ 17 ] ) * 2.0 ;
b_res [ 4 ] = ( xk [ 15 ] * xk [ 16 ] - xk [ 17 ] * xk [ 14 ] ) * 2.0 ; b_res
[ 8 ] = ( xk [ 15 ] * xk [ 17 ] + xk [ 16 ] * xk [ 14 ] ) * 2.0 ; b_res [ 12
] = 0.0 ; b_res [ 1 ] = ( xk [ 15 ] * xk [ 16 ] + xk [ 17 ] * xk [ 14 ] ) *
2.0 ; b_res [ 5 ] = 1.0 - ( xk [ 15 ] * xk [ 15 ] + xk [ 17 ] * xk [ 17 ] ) *
2.0 ; b_res [ 9 ] = ( xk [ 16 ] * xk [ 17 ] - xk [ 15 ] * xk [ 14 ] ) * 2.0 ;
b_res [ 13 ] = 0.0 ; b_res [ 2 ] = ( xk [ 15 ] * xk [ 17 ] - xk [ 16 ] * xk [
14 ] ) * 2.0 ; b_res [ 6 ] = ( xk [ 16 ] * xk [ 17 ] + xk [ 15 ] * xk [ 14 ]
) * 2.0 ; b_res [ 10 ] = 1.0 - ( xk [ 15 ] * xk [ 15 ] + xk [ 16 ] * xk [ 16
] ) * 2.0 ; b_res [ 14 ] = 0.0 ; b_res [ 3 ] = 0.0 ; b_res [ 7 ] = 0.0 ;
b_res [ 11 ] = 0.0 ; b_res [ 15 ] = 1.0 ; for ( idx = 0 ; idx < 4 ; idx ++ )
{ for ( i = 0 ; i < 4 ; i ++ ) { res [ idx + ( i << 2 ) ] = 0.0 ; res [ idx +
( i << 2 ) ] += b_res [ i << 2 ] * e_res [ idx ] ; res [ idx + ( i << 2 ) ]
+= b_res [ ( i << 2 ) + 1 ] * e_res [ idx + 4 ] ; res [ idx + ( i << 2 ) ] +=
b_res [ ( i << 2 ) + 2 ] * e_res [ idx + 8 ] ; res [ idx + ( i << 2 ) ] +=
b_res [ ( i << 2 ) + 3 ] * e_res [ idx + 12 ] ; } for ( i = 0 ; i < 4 ; i ++
) { a [ idx + ( i << 2 ) ] = 0.0 ; a [ idx + ( i << 2 ) ] += b_b [ i << 2 ] *
res [ idx ] ; a [ idx + ( i << 2 ) ] += b_b [ ( i << 2 ) + 1 ] * res [ idx +
4 ] ; a [ idx + ( i << 2 ) ] += b_b [ ( i << 2 ) + 2 ] * res [ idx + 8 ] ; a
[ idx + ( i << 2 ) ] += b_b [ ( i << 2 ) + 3 ] * res [ idx + 12 ] ; } }
fxnkqpuvi4 ( a , & Cvals [ 0 ] , & Cvals [ 1 ] , & Cvals [ 2 ] , & Cvals [ 3
] , & Cvals [ 4 ] , & Cvals [ 5 ] , & Cvals [ 6 ] ) ; for ( idx = 0 ; idx < 7
; idx ++ ) { error [ idx ] = Avals [ idx ] - Bvals [ idx ] ; error [ idx + 7
] = Bvals [ idx ] - Cvals [ idx ] ; error [ idx + 14 ] = Cvals [ idx ] -
Avals [ idx ] ; } for ( idx = 0 ; idx < 21 ; idx ++ ) { z1 [ idx ] = error [
idx ] * error [ idx ] ; } * fplus = z1 [ 0 ] ; for ( idx = 0 ; idx < 20 ; idx
++ ) { * fplus += z1 [ idx + 1 ] ; } evalOK = ( ( ! muDoubleScalarIsInf ( *
fplus ) ) && ( ! muDoubleScalarIsNaN ( * fplus ) ) ) ; if ( evalOK ) {
cEqPlus [ 0 ] = ( ( ( xk [ 1 ] * xk [ 1 ] + xk [ 2 ] * xk [ 2 ] ) + xk [ 3 ]
* xk [ 3 ] ) + xk [ 4 ] * xk [ 4 ] ) - 1.0 ; cEqPlus [ 1 ] = ( ( ( xk [ 5 ] *
xk [ 5 ] + xk [ 6 ] * xk [ 6 ] ) + xk [ 7 ] * xk [ 7 ] ) + xk [ 8 ] * xk [ 8
] ) - 1.0 ; cEqPlus [ 2 ] = ( ( ( xk [ 10 ] * xk [ 10 ] + xk [ 11 ] * xk [ 11
] ) + xk [ 12 ] * xk [ 12 ] ) + xk [ 13 ] * xk [ 13 ] ) - 1.0 ; cEqPlus [ 3 ]
= ( ( ( xk [ 14 ] * xk [ 14 ] + xk [ 15 ] * xk [ 15 ] ) + xk [ 16 ] * xk [ 16
] ) + xk [ 17 ] * xk [ 17 ] ) - 1.0 ; idx = 0 ; while ( evalOK && ( idx + 1
<= 4 ) ) { evalOK = ( ( ! muDoubleScalarIsInf ( cEqPlus [ idx ] ) ) && ( !
muDoubleScalarIsNaN ( cEqPlus [ idx ] ) ) ) ; idx ++ ; } xk [ dim - 1 ] =
temp ; } return evalOK ; } static boolean_T ap1uxguxorh ( dxs1et3yod * obj ,
real_T fCurrent , const real_T cEqCurrent [ 4 ] , real_T xk [ 18 ] , real_T
gradf [ 27 ] , real_T JacCeqTrans [ 108 ] ) { boolean_T evalOK ; real_T
deltaX ; real_T b ; real_T d [ 4 ] ; int32_T idx ; boolean_T exitg1 ;
boolean_T guard1 = false ; evalOK = true ; obj -> numEvals = 0 ; idx = 0 ;
exitg1 = false ; while ( ( ! exitg1 ) && ( idx < 18 ) ) { deltaX = ( 1.0 - (
real_T ) ( xk [ idx ] < 0.0 ) * 2.0 ) * 1.4901161193847656E-8 *
muDoubleScalarMax ( muDoubleScalarAbs ( xk [ idx ] ) , 1.0 ) ; b = obj -> f_1
; d [ 0 ] = obj -> cEq_1 [ 0 ] ; d [ 1 ] = obj -> cEq_1 [ 1 ] ; d [ 2 ] = obj
-> cEq_1 [ 2 ] ; d [ 3 ] = obj -> cEq_1 [ 3 ] ; evalOK = hl1l1m0sqeh ( obj ->
objfun . tunableEnvironment , & b , d , idx + 1 , deltaX , xk ) ; obj -> f_1
= b ; obj -> cEq_1 [ 0 ] = d [ 0 ] ; obj -> cEq_1 [ 1 ] = d [ 1 ] ; obj ->
cEq_1 [ 2 ] = d [ 2 ] ; obj -> cEq_1 [ 3 ] = d [ 3 ] ; obj -> numEvals ++ ;
guard1 = false ; if ( ! evalOK ) { deltaX = - deltaX ; evalOK = hl1l1m0sqeh (
obj -> objfun . tunableEnvironment , & b , d , idx + 1 , deltaX , xk ) ; obj
-> f_1 = b ; obj -> cEq_1 [ 0 ] = d [ 0 ] ; obj -> cEq_1 [ 1 ] = d [ 1 ] ;
obj -> cEq_1 [ 2 ] = d [ 2 ] ; obj -> cEq_1 [ 3 ] = d [ 3 ] ; obj -> numEvals
++ ; if ( ! evalOK ) { exitg1 = true ; } else { guard1 = true ; } } else {
guard1 = true ; } if ( guard1 ) { gradf [ idx ] = ( obj -> f_1 - fCurrent ) /
deltaX ; JacCeqTrans [ idx ] = ( obj -> cEq_1 [ 0 ] - cEqCurrent [ 0 ] ) /
deltaX ; JacCeqTrans [ idx + 27 ] = ( obj -> cEq_1 [ 1 ] - cEqCurrent [ 1 ] )
/ deltaX ; JacCeqTrans [ idx + 54 ] = ( obj -> cEq_1 [ 2 ] - cEqCurrent [ 2 ]
) / deltaX ; JacCeqTrans [ idx + 81 ] = ( obj -> cEq_1 [ 3 ] - cEqCurrent [ 3
] ) / deltaX ; idx ++ ; } } return evalOK ; } static void jy0zmqim5jnx (
nuprfhnilo * WorkingSet , const real_T cEq [ 4 ] ) { int32_T iw0 ; int32_T
iEq0 ; int32_T idx ; iw0 = 0 ; iEq0 = 0 ; for ( idx = 0 ; idx < 4 ; idx ++ )
{ WorkingSet -> beq [ idx ] = - cEq [ idx ] ; WorkingSet -> bwset [ idx ] =
WorkingSet -> beq [ idx ] ; memcpy ( & WorkingSet -> ATwset [ iw0 ] , &
WorkingSet -> Aeq [ iEq0 ] , 18U * sizeof ( real_T ) ) ; iw0 += 27 ; iEq0 +=
27 ; } } static void iwnxlinhde5 ( nuprfhnilo * obj ) { int32_T idx ; obj ->
Aeq [ obj -> nVar - 1 ] = 0.0 ; obj -> ATwset [ obj -> nVar - 1 ] = 0.0 ; obj
-> Aeq [ obj -> nVar + 26 ] = 0.0 ; obj -> ATwset [ obj -> nVar + 26 ] = 0.0
; obj -> Aeq [ obj -> nVar + 53 ] = 0.0 ; obj -> ATwset [ obj -> nVar + 53 ]
= 0.0 ; obj -> Aeq [ obj -> nVar + 80 ] = 0.0 ; obj -> ATwset [ obj -> nVar +
80 ] = 0.0 ; obj -> indexLB [ obj -> sizes [ 3 ] - 1 ] = obj -> nVar ; obj ->
lb [ obj -> nVar - 1 ] = 1.0E-5 ; for ( idx = 5 ; idx <= obj -> nActiveConstr
; idx ++ ) { obj -> ATwset [ ( obj -> nVar + 27 * ( idx - 1 ) ) - 1 ] = - 1.0
; } } static void gzr1v3zdr1h ( nuprfhnilo * obj , int32_T PROBLEM_TYPE ) {
int32_T idx_lb ; int32_T idx_col ; switch ( PROBLEM_TYPE ) { case 3 : obj ->
nVar = 18 ; obj -> mConstr = 4 ; for ( idx_col = 0 ; idx_col < 5 ; idx_col ++
) { obj -> sizes [ idx_col ] = obj -> sizesNormal [ idx_col ] ; } for (
idx_col = 0 ; idx_col < 6 ; idx_col ++ ) { obj -> isActiveIdx [ idx_col ] =
obj -> isActiveIdxNormal [ idx_col ] ; } break ; case 1 : obj -> nVar = 19 ;
obj -> mConstr = 5 ; for ( idx_col = 0 ; idx_col < 5 ; idx_col ++ ) { obj ->
sizes [ idx_col ] = obj -> sizesPhaseOne [ idx_col ] ; } for ( idx_col = 0 ;
idx_col < 6 ; idx_col ++ ) { obj -> isActiveIdx [ idx_col ] = obj ->
isActiveIdxPhaseOne [ idx_col ] ; } iwnxlinhde5 ( obj ) ; break ; case 2 :
obj -> nVar = 26 ; obj -> mConstr = 12 ; for ( idx_col = 0 ; idx_col < 5 ;
idx_col ++ ) { obj -> sizes [ idx_col ] = obj -> sizesRegularized [ idx_col ]
; } for ( idx_col = 0 ; idx_col < 6 ; idx_col ++ ) { obj -> isActiveIdx [
idx_col ] = obj -> isActiveIdxRegularized [ idx_col ] ; } if ( obj ->
probType != 4 ) { obj -> Aeq [ 18 ] = - 1.0 ; obj -> ATwset [ 18 ] = - 1.0 ;
for ( idx_lb = 19 ; idx_lb + 1 < 23 ; idx_lb ++ ) { obj -> Aeq [ idx_lb ] =
0.0 ; obj -> ATwset [ idx_lb ] = 0.0 ; } obj -> Aeq [ 22 ] = 1.0 ; obj ->
ATwset [ 22 ] = 1.0 ; for ( idx_lb = 23 ; idx_lb + 1 < 27 ; idx_lb ++ ) { obj
-> Aeq [ idx_lb ] = 0.0 ; obj -> ATwset [ idx_lb ] = 0.0 ; } for ( idx_lb =
18 ; idx_lb < 19 ; idx_lb ++ ) { obj -> Aeq [ idx_lb + 27 ] = 0.0 ; obj ->
ATwset [ idx_lb + 27 ] = 0.0 ; } obj -> Aeq [ 46 ] = - 1.0 ; obj -> ATwset [
46 ] = - 1.0 ; for ( idx_lb = 20 ; idx_lb + 1 < 23 ; idx_lb ++ ) { obj -> Aeq
[ idx_lb + 27 ] = 0.0 ; obj -> ATwset [ idx_lb + 27 ] = 0.0 ; } for ( idx_lb
= 22 ; idx_lb < 23 ; idx_lb ++ ) { obj -> Aeq [ idx_lb + 27 ] = 0.0 ; obj ->
ATwset [ idx_lb + 27 ] = 0.0 ; } obj -> Aeq [ 50 ] = 1.0 ; obj -> ATwset [ 50
] = 1.0 ; for ( idx_lb = 24 ; idx_lb + 1 < 27 ; idx_lb ++ ) { obj -> Aeq [
idx_lb + 27 ] = 0.0 ; obj -> ATwset [ idx_lb + 27 ] = 0.0 ; } for ( idx_lb =
18 ; idx_lb < 20 ; idx_lb ++ ) { obj -> Aeq [ idx_lb + 54 ] = 0.0 ; obj ->
ATwset [ idx_lb + 54 ] = 0.0 ; } obj -> Aeq [ 74 ] = - 1.0 ; obj -> ATwset [
74 ] = - 1.0 ; for ( idx_lb = 21 ; idx_lb + 1 < 23 ; idx_lb ++ ) { obj -> Aeq
[ idx_lb + 54 ] = 0.0 ; obj -> ATwset [ idx_lb + 54 ] = 0.0 ; } for ( idx_lb
= 22 ; idx_lb < 24 ; idx_lb ++ ) { obj -> Aeq [ idx_lb + 54 ] = 0.0 ; obj ->
ATwset [ idx_lb + 54 ] = 0.0 ; } obj -> Aeq [ 78 ] = 1.0 ; obj -> ATwset [ 78
] = 1.0 ; for ( idx_lb = 25 ; idx_lb + 1 < 27 ; idx_lb ++ ) { obj -> Aeq [
idx_lb + 54 ] = 0.0 ; obj -> ATwset [ idx_lb + 54 ] = 0.0 ; } for ( idx_lb =
18 ; idx_lb < 21 ; idx_lb ++ ) { obj -> Aeq [ idx_lb + 81 ] = 0.0 ; obj ->
ATwset [ idx_lb + 81 ] = 0.0 ; } obj -> Aeq [ 102 ] = - 1.0 ; obj -> ATwset [
102 ] = - 1.0 ; for ( idx_lb = 22 ; idx_lb < 25 ; idx_lb ++ ) { obj -> Aeq [
idx_lb + 81 ] = 0.0 ; obj -> ATwset [ idx_lb + 81 ] = 0.0 ; } obj -> Aeq [
106 ] = 1.0 ; obj -> ATwset [ 106 ] = 1.0 ; idx_lb = 18 ; for ( idx_col = 0 ;
idx_col < 8 ; idx_col ++ ) { idx_lb ++ ; obj -> indexLB [ idx_col ] = idx_lb
; obj -> lb [ idx_col + 18 ] = 0.0 ; } for ( idx_col = 4 ; idx_col < obj ->
nActiveConstr ; idx_col ++ ) { if ( obj -> Wid [ idx_col ] == 3 ) { for (
idx_lb = 19 ; idx_lb <= obj -> Wlocalidx [ idx_col ] + 17 ; idx_lb ++ ) { obj
-> ATwset [ ( idx_lb + 27 * idx_col ) - 1 ] = 0.0 ; } obj -> ATwset [ ( obj
-> Wlocalidx [ idx_col ] + 27 * idx_col ) + 17 ] = - 1.0 ; for ( idx_lb = obj
-> Wlocalidx [ idx_col ] + 18 ; idx_lb + 1 < 27 ; idx_lb ++ ) { obj -> ATwset
[ idx_lb + 27 * idx_col ] = 0.0 ; } } else { memset ( & obj -> ATwset [
idx_col * 27 + 18 ] , 0 , sizeof ( real_T ) << 3U ) ; } } } break ; default :
obj -> nVar = 27 ; obj -> mConstr = 13 ; for ( idx_col = 0 ; idx_col < 5 ;
idx_col ++ ) { obj -> sizes [ idx_col ] = obj -> sizesRegPhaseOne [ idx_col ]
; } for ( idx_col = 0 ; idx_col < 6 ; idx_col ++ ) { obj -> isActiveIdx [
idx_col ] = obj -> isActiveIdxRegPhaseOne [ idx_col ] ; } iwnxlinhde5 ( obj )
; break ; } obj -> probType = PROBLEM_TYPE ; } static void oml1j5lmqrv (
nuprfhnilo * obj ) { int32_T idx ; gzr1v3zdr1h ( obj , 3 ) ; for ( idx = 0 ;
idx < 9 ; idx ++ ) { obj -> isActiveConstr [ idx + 4 ] = false ; } obj ->
nWConstr [ 0 ] = 0 ; obj -> nWConstr [ 1 ] = 4 ; obj -> nWConstr [ 2 ] = 0 ;
obj -> nWConstr [ 3 ] = 0 ; obj -> nWConstr [ 4 ] = 0 ; obj -> nActiveConstr
= 4 ; obj -> Wid [ 0 ] = 2 ; obj -> Wlocalidx [ 0 ] = 1 ; obj ->
isActiveConstr [ 0 ] = true ; for ( idx = 0 ; idx < obj -> nVar ; idx ++ ) {
obj -> ATwset [ idx ] = obj -> Aeq [ idx ] ; } obj -> bwset [ 0 ] = obj ->
beq [ 0 ] ; obj -> Wid [ 1 ] = 2 ; obj -> Wlocalidx [ 1 ] = 2 ; obj ->
isActiveConstr [ 1 ] = true ; for ( idx = 0 ; idx < obj -> nVar ; idx ++ ) {
obj -> ATwset [ idx + 27 ] = obj -> Aeq [ idx + 27 ] ; } obj -> bwset [ 1 ] =
obj -> beq [ 1 ] ; obj -> Wid [ 2 ] = 2 ; obj -> Wlocalidx [ 2 ] = 3 ; obj ->
isActiveConstr [ 2 ] = true ; for ( idx = 0 ; idx < obj -> nVar ; idx ++ ) {
obj -> ATwset [ idx + 54 ] = obj -> Aeq [ idx + 54 ] ; } obj -> bwset [ 2 ] =
obj -> beq [ 2 ] ; obj -> Wid [ 3 ] = 2 ; obj -> Wlocalidx [ 3 ] = 4 ; obj ->
isActiveConstr [ 3 ] = true ; for ( idx = 0 ; idx < obj -> nVar ; idx ++ ) {
obj -> ATwset [ idx + 81 ] = obj -> Aeq [ idx + 81 ] ; } obj -> bwset [ 3 ] =
obj -> beq [ 3 ] ; } static void p32d0btmmxzpjgg ( real_T fval , const real_T
Ceq_workspace [ 4 ] , kthfgfhdov * obj ) { obj -> penaltyParam = 1.0 ; obj ->
threshold = 0.0001 ; obj -> nPenaltyDecreases = 0 ; obj ->
linearizedConstrViol = 0.0 ; obj -> initFval = fval ; obj ->
initConstrViolationEq = ( ( muDoubleScalarAbs ( Ceq_workspace [ 0 ] ) +
muDoubleScalarAbs ( Ceq_workspace [ 1 ] ) ) + muDoubleScalarAbs (
Ceq_workspace [ 2 ] ) ) + muDoubleScalarAbs ( Ceq_workspace [ 3 ] ) ; obj ->
initConstrViolationIneq = 0.0 ; obj -> phi = 0.0 ; obj -> phiPrimePlus = 0.0
; obj -> phiFullStep = 0.0 ; obj -> feasRelativeFactor = 0.0 ; obj ->
nlpPrimalFeasError = 0.0 ; obj -> nlpDualFeasError = 0.0 ; obj ->
nlpComplError = 0.0 ; obj -> firstOrderOpt = 0.0 ; obj -> hasObjective = true
; } static void e5dhnhf4mfm2 ( real_T workspace [ 27 ] , int32_T nVar , const
real_T grad [ 27 ] , const real_T AeqTrans [ 108 ] , const int32_T finiteLB [
27 ] , int32_T mLB , const real_T lambda [ 13 ] ) { int32_T iL0 ; int32_T ix
; int32_T b ; for ( iL0 = 0 ; iL0 < nVar ; iL0 ++ ) { workspace [ iL0 ] =
grad [ iL0 ] ; } iL0 = 0 ; for ( ix = 0 ; ix < nVar ; ix ++ ) { workspace [
iL0 ] += AeqTrans [ ix ] * lambda [ 0 ] ; iL0 ++ ; } iL0 = 0 ; b = nVar + 27
; for ( ix = 27 ; ix < b ; ix ++ ) { workspace [ iL0 ] += AeqTrans [ ix ] *
lambda [ 1 ] ; iL0 ++ ; } iL0 = 0 ; b = nVar + 54 ; for ( ix = 54 ; ix < b ;
ix ++ ) { workspace [ iL0 ] += AeqTrans [ ix ] * lambda [ 2 ] ; iL0 ++ ; }
iL0 = 0 ; b = nVar + 81 ; for ( ix = 81 ; ix < b ; ix ++ ) { workspace [ iL0
] += AeqTrans [ ix ] * lambda [ 3 ] ; iL0 ++ ; } iL0 = 4 ; for ( ix = 0 ; ix
< mLB ; ix ++ ) { workspace [ finiteLB [ ix ] - 1 ] -= lambda [ iL0 ] ; iL0
++ ; } } static real_T i23ur3ytsfu ( const real_T cEq [ 4 ] ) { return
muDoubleScalarMax ( muDoubleScalarMax ( muDoubleScalarMax ( muDoubleScalarMax
( 0.0 , muDoubleScalarAbs ( cEq [ 0 ] ) ) , muDoubleScalarAbs ( cEq [ 1 ] ) )
, muDoubleScalarAbs ( cEq [ 2 ] ) ) , muDoubleScalarAbs ( cEq [ 3 ] ) ) ; }
static void g0gqo0cxgutr ( int32_T nVar , const real_T gradLag [ 27 ] ,
boolean_T * gradOK , real_T * val ) { int32_T b_idx ; boolean_T exitg1 ; *
gradOK = true ; * val = 0.0 ; b_idx = 0 ; exitg1 = false ; while ( ( ! exitg1
) && ( b_idx <= nVar - 1 ) ) { * gradOK = ( ( ! muDoubleScalarIsInf ( gradLag
[ b_idx ] ) ) && ( ! muDoubleScalarIsNaN ( gradLag [ b_idx ] ) ) ) ; if ( ! *
gradOK ) { exitg1 = true ; } else { * val = muDoubleScalarMax ( * val ,
muDoubleScalarAbs ( gradLag [ b_idx ] ) ) ; b_idx ++ ; } } } static int32_T
cdcikb5kmwaj ( int32_T n , const real_T x [ 27 ] ) { int32_T idxmax ; int32_T
ix ; real_T smax ; int32_T k ; real_T y ; if ( n < 1 ) { idxmax = 0 ; } else
{ idxmax = 1 ; if ( n > 1 ) { ix = 0 ; smax = muDoubleScalarAbs ( x [ 0 ] ) ;
for ( k = 2 ; k <= n ; k ++ ) { ix ++ ; y = muDoubleScalarAbs ( x [ ix ] ) ;
if ( y > smax ) { idxmax = k ; smax = y ; } } } } return idxmax ; } static
void mxnuuti0thvg ( kthfgfhdov * MeritFunction , const nuprfhnilo *
WorkingSet , aaxpzhoxuz * TrialState , boolean_T * Flags_gradOK , boolean_T *
Flags_fevalOK , boolean_T * Flags_done , boolean_T * Flags_stepAccepted ,
boolean_T * Flags_failedLineSearch , int32_T * Flags_stepType ) { real_T
optimRelativeFactor ; boolean_T isFeasible ; real_T c ; int32_T b_k ; *
Flags_fevalOK = true ; * Flags_stepAccepted = false ; *
Flags_failedLineSearch = false ; * Flags_stepType = 1 ; e5dhnhf4mfm2 (
TrialState -> gradLag , WorkingSet -> nVar , TrialState -> grad , WorkingSet
-> Aeq , WorkingSet -> indexLB , WorkingSet -> sizes [ 3 ] , TrialState ->
lambdasqp ) ; optimRelativeFactor = muDoubleScalarMax ( 1.0 ,
muDoubleScalarAbs ( TrialState -> grad [ cdcikb5kmwaj ( WorkingSet -> nVar ,
TrialState -> grad ) - 1 ] ) ) ; if ( muDoubleScalarIsInf (
optimRelativeFactor ) ) { optimRelativeFactor = 1.0 ; } MeritFunction ->
nlpPrimalFeasError = i23ur3ytsfu ( TrialState -> cEq ) ; MeritFunction ->
feasRelativeFactor = muDoubleScalarMax ( 1.0 , MeritFunction ->
nlpPrimalFeasError ) ; isFeasible = ( MeritFunction -> nlpPrimalFeasError <=
1.0E-6 * muDoubleScalarMax ( 1.0 , MeritFunction -> nlpPrimalFeasError ) ) ;
g0gqo0cxgutr ( WorkingSet -> nVar , TrialState -> gradLag , Flags_gradOK , &
c ) ; MeritFunction -> nlpDualFeasError = c ; if ( ! * Flags_gradOK ) { *
Flags_done = true ; if ( isFeasible ) { TrialState -> sqpExitFlag = 2 ; }
else { TrialState -> sqpExitFlag = - 2 ; } } else { MeritFunction ->
nlpComplError = 0.0 ; MeritFunction -> firstOrderOpt = muDoubleScalarMax ( c
, 0.0 ) ; for ( b_k = 0 ; b_k <= WorkingSet -> sizes [ 3 ] + 3 ; b_k ++ ) {
TrialState -> lambdasqp_old [ b_k ] = TrialState -> lambdasqp [ b_k ] ; } if
( isFeasible && ( c <= 1.0E-10 * optimRelativeFactor ) ) { * Flags_done =
true ; TrialState -> sqpExitFlag = 1 ; } else { * Flags_done = false ; if (
isFeasible && ( TrialState -> sqpFval < - 1.0E+20 ) ) { * Flags_done = true ;
TrialState -> sqpExitFlag = - 3 ; } else { if ( TrialState ->
FunctionEvaluations >= 1800 ) { * Flags_done = true ; TrialState ->
sqpExitFlag = 0 ; } } } } } static void cct5ezbgkvp ( aaxpzhoxuz * obj ,
int32_T nVar , const real_T JacCeqTrans [ 108 ] ) { int32_T k ; for ( k = 1 ;
k - 1 < nVar ; k ++ ) { obj -> JacCeqTrans_old [ k + - 1 ] = JacCeqTrans [ k
+ - 1 ] ; } for ( k = 1 ; k - 1 < nVar ; k ++ ) { obj -> JacCeqTrans_old [ k
+ 26 ] = JacCeqTrans [ k + 26 ] ; } for ( k = 1 ; k - 1 < nVar ; k ++ ) { obj
-> JacCeqTrans_old [ k + 53 ] = JacCeqTrans [ k + 53 ] ; } for ( k = 1 ; k -
1 < nVar ; k ++ ) { obj -> JacCeqTrans_old [ k + 80 ] = JacCeqTrans [ k + 80
] ; } } static void oabtqrotmyc ( aaxpzhoxuz * obj ) { int32_T b_k ; obj ->
sqpFval_old = obj -> sqpFval ; for ( b_k = 0 ; b_k < 18 ; b_k ++ ) { obj ->
xstarsqp_old [ b_k ] = obj -> xstarsqp [ b_k ] ; obj -> grad_old [ b_k ] =
obj -> grad [ b_k ] ; } obj -> cEq_old [ 0 ] = obj -> cEq [ 0 ] ; obj ->
cEq_old [ 1 ] = obj -> cEq [ 1 ] ; obj -> cEq_old [ 2 ] = obj -> cEq [ 2 ] ;
obj -> cEq_old [ 3 ] = obj -> cEq [ 3 ] ; } static void k1vu0y3nbuy (
aaxpzhoxuz * obj ) { obj -> sqpFval = obj -> sqpFval_old ; memcpy ( & obj ->
xstarsqp [ 0 ] , & obj -> xstarsqp_old [ 0 ] , 18U * sizeof ( real_T ) ) ;
obj -> cEq [ 0 ] = obj -> cEq_old [ 0 ] ; obj -> cEq [ 1 ] = obj -> cEq_old [
1 ] ; obj -> cEq [ 2 ] = obj -> cEq_old [ 2 ] ; obj -> cEq [ 3 ] = obj ->
cEq_old [ 3 ] ; } static boolean_T cm0pm04nxw ( real_T x ) { return ( !
muDoubleScalarIsInf ( x ) ) && ( ! muDoubleScalarIsNaN ( x ) ) ; } static
void mzehz0b4kv ( int32_T n , const real_T x [ 13 ] , real_T y [ 13 ] ) {
int32_T b_k ; for ( b_k = 0 ; b_k < n ; b_k ++ ) { y [ b_k ] = x [ b_k ] ; }
} static void e5dhnhf4mfm21 ( real_T workspace [ 729 ] , int32_T nVar , const
real_T grad [ 27 ] , const real_T AeqTrans [ 108 ] , const int32_T finiteLB [
27 ] , int32_T mLB , const real_T lambda [ 13 ] ) { int32_T iL0 ; int32_T ix
; int32_T b ; for ( iL0 = 0 ; iL0 < nVar ; iL0 ++ ) { workspace [ iL0 ] =
grad [ iL0 ] ; } iL0 = 0 ; for ( ix = 0 ; ix < nVar ; ix ++ ) { workspace [
iL0 ] += AeqTrans [ ix ] * lambda [ 0 ] ; iL0 ++ ; } iL0 = 0 ; b = nVar + 27
; for ( ix = 27 ; ix < b ; ix ++ ) { workspace [ iL0 ] += AeqTrans [ ix ] *
lambda [ 1 ] ; iL0 ++ ; } iL0 = 0 ; b = nVar + 54 ; for ( ix = 54 ; ix < b ;
ix ++ ) { workspace [ iL0 ] += AeqTrans [ ix ] * lambda [ 2 ] ; iL0 ++ ; }
iL0 = 0 ; b = nVar + 81 ; for ( ix = 81 ; ix < b ; ix ++ ) { workspace [ iL0
] += AeqTrans [ ix ] * lambda [ 3 ] ; iL0 ++ ; } iL0 = 4 ; for ( ix = 0 ; ix
< mLB ; ix ++ ) { workspace [ finiteLB [ ix ] - 1 ] -= lambda [ iL0 ] ; iL0
++ ; } } static void g0gqo0cxgutr1 ( int32_T nVar , const real_T gradLag [
729 ] , boolean_T * gradOK , real_T * val ) { int32_T b_idx ; boolean_T
exitg1 ; * gradOK = true ; * val = 0.0 ; b_idx = 0 ; exitg1 = false ; while (
( ! exitg1 ) && ( b_idx <= nVar - 1 ) ) { * gradOK = ( ( !
muDoubleScalarIsInf ( gradLag [ b_idx ] ) ) && ( ! muDoubleScalarIsNaN (
gradLag [ b_idx ] ) ) ) ; if ( ! * gradOK ) { exitg1 = true ; } else { * val
= muDoubleScalarMax ( * val , muDoubleScalarAbs ( gradLag [ b_idx ] ) ) ;
b_idx ++ ; } } } static boolean_T cyuk1go0vk ( const real_T xCurrent [ 18 ] ,
const real_T delta_x [ 27 ] , int32_T nVar ) { boolean_T tf ; int32_T b_idx ;
boolean_T exitg1 ; tf = true ; b_idx = 0 ; exitg1 = false ; while ( ( !
exitg1 ) && ( b_idx <= nVar - 1 ) ) { if ( 1.0E-10 * muDoubleScalarMax ( 1.0
, muDoubleScalarAbs ( xCurrent [ b_idx ] ) ) <= muDoubleScalarAbs ( delta_x [
b_idx ] ) ) { tf = false ; exitg1 = true ; } else { b_idx ++ ; } } return tf
; } static void jy0zmqim5jnxr ( nuprfhnilo * WorkingSet , const real_T cEq [
4 ] ) { int32_T i ; WorkingSet -> beq [ 0 ] = - cEq [ 0 ] ; WorkingSet ->
bwset [ 0 ] = WorkingSet -> beq [ 0 ] ; for ( i = 0 ; i < WorkingSet -> nVar
; i ++ ) { WorkingSet -> ATwset [ i ] = WorkingSet -> Aeq [ i ] ; }
WorkingSet -> beq [ 1 ] = - cEq [ 1 ] ; WorkingSet -> bwset [ 1 ] =
WorkingSet -> beq [ 1 ] ; for ( i = 0 ; i < WorkingSet -> nVar ; i ++ ) {
WorkingSet -> ATwset [ i + 27 ] = WorkingSet -> Aeq [ i + 27 ] ; } WorkingSet
-> beq [ 2 ] = - cEq [ 2 ] ; WorkingSet -> bwset [ 2 ] = WorkingSet -> beq [
2 ] ; for ( i = 0 ; i < WorkingSet -> nVar ; i ++ ) { WorkingSet -> ATwset [
i + 54 ] = WorkingSet -> Aeq [ i + 54 ] ; } WorkingSet -> beq [ 3 ] = - cEq [
3 ] ; WorkingSet -> bwset [ 3 ] = WorkingSet -> beq [ 3 ] ; for ( i = 0 ; i <
WorkingSet -> nVar ; i ++ ) { WorkingSet -> ATwset [ i + 81 ] = WorkingSet ->
Aeq [ i + 81 ] ; } i = 4 ; if ( WorkingSet -> nActiveConstr > 4 ) { while ( i
+ 1 <= WorkingSet -> nActiveConstr ) { switch ( WorkingSet -> Wid [ i ] ) {
case 4 : WorkingSet -> bwset [ i ] = WorkingSet -> lb [ WorkingSet ->
Wlocalidx [ i ] - 1 ] ; break ; case 5 : WorkingSet -> bwset [ i ] = 0.0 ;
break ; } i ++ ; } } } static real_T hi3mqzewxva3 ( int32_T n , const real_T
x [ 729 ] , int32_T ix0 ) { real_T y ; real_T scale ; int32_T kend ; real_T
absxk ; real_T t ; int32_T k ; y = 0.0 ; if ( n >= 1 ) { if ( n == 1 ) { y =
muDoubleScalarAbs ( x [ ix0 - 1 ] ) ; } else { scale =
3.3121686421112381E-170 ; kend = ( ix0 + n ) - 1 ; for ( k = ix0 ; k <= kend
; k ++ ) { absxk = muDoubleScalarAbs ( x [ k - 1 ] ) ; if ( absxk > scale ) {
t = scale / absxk ; y = y * t * t + 1.0 ; scale = absxk ; } else { t = absxk
/ scale ; y += t * t ; } } y = scale * muDoubleScalarSqrt ( y ) ; } } return
y ; } static real_T kcluehrwfuz ( int32_T n , real_T * alpha1 , real_T x [
729 ] , int32_T ix0 ) { real_T tau ; real_T xnorm ; int32_T knt ; int32_T b_k
; int32_T c_k ; tau = 0.0 ; if ( n > 0 ) { xnorm = hi3mqzewxva3 ( n - 1 , x ,
ix0 ) ; if ( xnorm != 0.0 ) { xnorm = muDoubleScalarHypot ( * alpha1 , xnorm
) ; if ( * alpha1 >= 0.0 ) { xnorm = - xnorm ; } if ( muDoubleScalarAbs (
xnorm ) < 1.0020841800044864E-292 ) { knt = - 1 ; b_k = ( ix0 + n ) - 2 ; do
{ knt ++ ; for ( c_k = ix0 ; c_k <= b_k ; c_k ++ ) { x [ c_k - 1 ] *=
9.9792015476736E+291 ; } xnorm *= 9.9792015476736E+291 ; * alpha1 *=
9.9792015476736E+291 ; } while ( ! ( muDoubleScalarAbs ( xnorm ) >=
1.0020841800044864E-292 ) ) ; xnorm = muDoubleScalarHypot ( * alpha1 ,
hi3mqzewxva3 ( n - 1 , x , ix0 ) ) ; if ( * alpha1 >= 0.0 ) { xnorm = - xnorm
; } tau = ( xnorm - * alpha1 ) / xnorm ; * alpha1 = 1.0 / ( * alpha1 - xnorm
) ; for ( c_k = ix0 ; c_k <= b_k ; c_k ++ ) { x [ c_k - 1 ] *= * alpha1 ; }
for ( b_k = 0 ; b_k <= knt ; b_k ++ ) { xnorm *= 1.0020841800044864E-292 ; }
* alpha1 = xnorm ; } else { tau = ( xnorm - * alpha1 ) / xnorm ; * alpha1 =
1.0 / ( * alpha1 - xnorm ) ; knt = ( ix0 + n ) - 2 ; for ( b_k = ix0 ; b_k <=
knt ; b_k ++ ) { x [ b_k - 1 ] *= * alpha1 ; } * alpha1 = xnorm ; } } }
return tau ; } static int32_T nflot4iy53 ( int32_T m , int32_T n , const
real_T A [ 729 ] , int32_T ia0 ) { int32_T j ; int32_T coltop ; int32_T ia ;
int32_T exitg1 ; boolean_T exitg2 ; j = n ; exitg2 = false ; while ( ( !
exitg2 ) && ( j > 0 ) ) { coltop = ( j - 1 ) * 27 + ia0 ; ia = coltop ; do {
exitg1 = 0 ; if ( ia <= ( coltop + m ) - 1 ) { if ( A [ ia - 1 ] != 0.0 ) {
exitg1 = 1 ; } else { ia ++ ; } } else { j -- ; exitg1 = 2 ; } } while (
exitg1 == 0 ) ; if ( exitg1 == 1 ) { exitg2 = true ; } } return j ; } static
void kn3nzhqflfe0stu ( int32_T m , int32_T n , const real_T A [ 729 ] ,
int32_T ia0 , const real_T x [ 729 ] , int32_T ix0 , real_T y [ 27 ] ) {
int32_T ix ; real_T c ; int32_T b_iy ; int32_T b ; int32_T iac ; int32_T d ;
int32_T ia ; if ( n != 0 ) { for ( b_iy = 0 ; b_iy < n ; b_iy ++ ) { y [ b_iy
] = 0.0 ; } b_iy = 0 ; b = ( n - 1 ) * 27 + ia0 ; for ( iac = ia0 ; iac <= b
; iac += 27 ) { ix = ix0 ; c = 0.0 ; d = ( iac + m ) - 1 ; for ( ia = iac ;
ia <= d ; ia ++ ) { c += A [ ia - 1 ] * x [ ix - 1 ] ; ix ++ ; } y [ b_iy ]
+= c ; b_iy ++ ; } } } static void bi0mgkjeh1 ( int32_T m , int32_T n ,
real_T alpha1 , int32_T ix0 , const real_T y [ 27 ] , real_T A [ 729 ] ,
int32_T ia0 ) { int32_T jA ; int32_T jy ; real_T temp ; int32_T ix ; int32_T
j ; int32_T b ; int32_T ijA ; if ( ! ( alpha1 == 0.0 ) ) { jA = ia0 - 1 ; jy
= 0 ; for ( j = 0 ; j < n ; j ++ ) { if ( y [ jy ] != 0.0 ) { temp = y [ jy ]
* alpha1 ; ix = ix0 ; b = m + jA ; for ( ijA = jA ; ijA < b ; ijA ++ ) { A [
ijA ] += A [ ix - 1 ] * temp ; ix ++ ; } } jy ++ ; jA += 27 ; } } } static
void ir3j1p5nlyw ( int32_T m , int32_T n , int32_T iv0 , real_T tau , real_T
C [ 729 ] , int32_T ic0 , real_T work [ 27 ] ) { int32_T lastv ; int32_T
lastc ; if ( tau != 0.0 ) { lastv = m ; lastc = iv0 + m ; while ( ( lastv > 0
) && ( C [ lastc - 2 ] == 0.0 ) ) { lastv -- ; lastc -- ; } lastc =
nflot4iy53 ( lastv , n , C , ic0 ) ; } else { lastv = 0 ; lastc = 0 ; } if (
lastv > 0 ) { kn3nzhqflfe0stu ( lastv , lastc , C , ic0 , C , iv0 , work ) ;
bi0mgkjeh1 ( lastv , lastc , - tau , iv0 , work , C , ic0 ) ; } } static void
l0lnfjcq5za ( real_T A [ 729 ] , int32_T m , int32_T n , int32_T nfxd ,
real_T tau [ 27 ] ) { real_T work [ 27 ] ; int32_T ii ; int32_T mmi ; real_T
b_atmp ; int32_T i ; memset ( & work [ 0 ] , 0 , 27U * sizeof ( real_T ) ) ;
for ( i = 0 ; i < nfxd ; i ++ ) { ii = i * 27 + i ; mmi = m - i ; if ( i + 1
< m ) { b_atmp = A [ ii ] ; tau [ i ] = kcluehrwfuz ( mmi , & b_atmp , A , ii
+ 2 ) ; A [ ii ] = b_atmp ; } else { tau [ i ] = 0.0 ; } if ( i + 1 < n ) {
b_atmp = A [ ii ] ; A [ ii ] = 1.0 ; ir3j1p5nlyw ( mmi , ( n - i ) - 1 , ii +
1 , tau [ i ] , A , ii + 28 , work ) ; A [ ii ] = b_atmp ; } } } static
int32_T cdcikb5kmwajm ( int32_T n , const real_T x [ 27 ] , int32_T ix0 ) {
int32_T idxmax ; int32_T ix ; real_T smax ; int32_T k ; real_T y ; if ( n < 1
) { idxmax = 0 ; } else { idxmax = 1 ; if ( n > 1 ) { ix = ix0 ; smax =
muDoubleScalarAbs ( x [ ix0 - 1 ] ) ; for ( k = 2 ; k <= n ; k ++ ) { ix ++ ;
y = muDoubleScalarAbs ( x [ ix - 1 ] ) ; if ( y > smax ) { idxmax = k ; smax
= y ; } } } } return idxmax ; } static void elpfciohbx ( int32_T n , real_T x
[ 729 ] , int32_T ix0 , int32_T iy0 ) { int32_T ix ; int32_T iy ; real_T temp
; int32_T k ; ix = ix0 - 1 ; iy = iy0 - 1 ; for ( k = 0 ; k < n ; k ++ ) {
temp = x [ ix ] ; x [ ix ] = x [ iy ] ; x [ iy ] = temp ; ix ++ ; iy ++ ; } }
static void bfeyw0p21q ( real_T A [ 729 ] , int32_T m , int32_T n , int32_T
nfxd , real_T tau [ 27 ] , int32_T jpvt [ 27 ] ) { int32_T minmn ; real_T
work [ 27 ] ; real_T vn1 [ 27 ] ; real_T vn2 [ 27 ] ; int32_T ii ; int32_T
nmi ; int32_T mmi ; int32_T pvt ; int32_T itemp ; real_T temp2 ; real_T
b_atmp ; int32_T j ; minmn = muIntScalarMin_sint32 ( m , n ) ; memset ( &
work [ 0 ] , 0 , 27U * sizeof ( real_T ) ) ; memset ( & vn1 [ 0 ] , 0 , 27U *
sizeof ( real_T ) ) ; memset ( & vn2 [ 0 ] , 0 , 27U * sizeof ( real_T ) ) ;
for ( j = nfxd ; j < n ; j ++ ) { vn1 [ j ] = hi3mqzewxva3 ( m - nfxd , A , (
j * 27 + nfxd ) + 1 ) ; vn2 [ j ] = vn1 [ j ] ; } for ( j = nfxd ; j < minmn
; j ++ ) { ii = j * 27 + j ; nmi = n - j ; mmi = m - j ; pvt = (
cdcikb5kmwajm ( nmi , vn1 , j + 1 ) + j ) - 1 ; if ( pvt + 1 != j + 1 ) {
elpfciohbx ( m , A , pvt * 27 + 1 , j * 27 + 1 ) ; itemp = jpvt [ pvt ] ;
jpvt [ pvt ] = jpvt [ j ] ; jpvt [ j ] = itemp ; vn1 [ pvt ] = vn1 [ j ] ;
vn2 [ pvt ] = vn2 [ j ] ; } if ( j + 1 < m ) { b_atmp = A [ ii ] ; tau [ j ]
= kcluehrwfuz ( mmi , & b_atmp , A , ii + 2 ) ; A [ ii ] = b_atmp ; } else {
tau [ j ] = 0.0 ; } if ( j + 1 < n ) { b_atmp = A [ ii ] ; A [ ii ] = 1.0 ;
ir3j1p5nlyw ( mmi , nmi - 1 , ii + 1 , tau [ j ] , A , ii + 28 , work ) ; A [
ii ] = b_atmp ; } for ( ii = j + 1 ; ii < n ; ii ++ ) { nmi = ii * 27 + j ;
if ( vn1 [ ii ] != 0.0 ) { b_atmp = muDoubleScalarAbs ( A [ nmi ] ) / vn1 [
ii ] ; b_atmp = 1.0 - b_atmp * b_atmp ; if ( b_atmp < 0.0 ) { b_atmp = 0.0 ;
} temp2 = vn1 [ ii ] / vn2 [ ii ] ; temp2 = temp2 * temp2 * b_atmp ; if (
temp2 <= 1.4901161193847656E-8 ) { if ( j + 1 < m ) { vn1 [ ii ] =
hi3mqzewxva3 ( mmi - 1 , A , nmi + 2 ) ; vn2 [ ii ] = vn1 [ ii ] ; } else {
vn1 [ ii ] = 0.0 ; vn2 [ ii ] = 0.0 ; } } else { vn1 [ ii ] *=
muDoubleScalarSqrt ( b_atmp ) ; } } } } } static void ixl3w5wjmif ( real_T A
[ 729 ] , int32_T m , int32_T n , int32_T jpvt [ 27 ] , real_T tau [ 27 ] ) {
int32_T minmn ; int32_T nfxd ; int32_T c_j ; minmn = muIntScalarMin_sint32 (
m , n ) ; memset ( & tau [ 0 ] , 0 , 27U * sizeof ( real_T ) ) ; if ( minmn <
1 ) { for ( minmn = 0 ; minmn < n ; minmn ++ ) { jpvt [ minmn ] = minmn + 1 ;
} } else { nfxd = - 1 ; for ( c_j = 0 ; c_j < n ; c_j ++ ) { if ( jpvt [ c_j
] != 0 ) { nfxd ++ ; if ( c_j + 1 != nfxd + 1 ) { elpfciohbx ( m , A , c_j *
27 + 1 , nfxd * 27 + 1 ) ; jpvt [ c_j ] = jpvt [ nfxd ] ; jpvt [ nfxd ] = c_j
+ 1 ; } else { jpvt [ c_j ] = c_j + 1 ; } } else { jpvt [ c_j ] = c_j + 1 ; }
} nfxd ++ ; nfxd = muIntScalarMin_sint32 ( nfxd , minmn ) ; l0lnfjcq5za ( A ,
m , n , nfxd , tau ) ; if ( nfxd < minmn ) { bfeyw0p21q ( A , m , n , nfxd ,
tau , jpvt ) ; } } } static void pbgevwrabr ( int32_T n , const real_T x [
351 ] , int32_T ix0 , real_T y [ 729 ] , int32_T iy0 ) { int32_T b_k ; for (
b_k = - 1 ; b_k < n - 1 ; b_k ++ ) { y [ iy0 + b_k ] = x [ ix0 + b_k ] ; } }
static void j443bj1hxce ( ev3ltaqeco * obj , const real_T A [ 351 ] , int32_T
mrows , int32_T ncols ) { real_T c [ 27 ] ; int32_T d [ 27 ] ; int32_T b_idx
; boolean_T guard1 = false ; guard1 = false ; if ( mrows * ncols > 0 ) { for
( b_idx = 0 ; b_idx < ncols ; b_idx ++ ) { pbgevwrabr ( mrows , A , 27 *
b_idx + 1 , obj -> QR , 27 * b_idx + 1 ) ; } guard1 = true ; } else if (
mrows * ncols == 0 ) { obj -> mrows = mrows ; obj -> ncols = ncols ; obj ->
minRowCol = 0 ; } else { guard1 = true ; } if ( guard1 ) { obj ->
usedPivoting = true ; obj -> mrows = mrows ; obj -> ncols = ncols ; obj ->
minRowCol = muIntScalarMin_sint32 ( mrows , ncols ) ; memcpy ( & rtB . b [ 0
] , & obj -> QR [ 0 ] , 729U * sizeof ( real_T ) ) ; memcpy ( & d [ 0 ] , &
obj -> jpvt [ 0 ] , 27U * sizeof ( int32_T ) ) ; ixl3w5wjmif ( rtB . b ,
mrows , ncols , d , c ) ; memcpy ( & obj -> QR [ 0 ] , & rtB . b [ 0 ] , 729U
* sizeof ( real_T ) ) ; memcpy ( & obj -> tau [ 0 ] , & c [ 0 ] , 27U *
sizeof ( real_T ) ) ; memcpy ( & obj -> jpvt [ 0 ] , & d [ 0 ] , 27U * sizeof
( int32_T ) ) ; } } static void ob5a4hvx1r ( int32_T m , int32_T n , const
real_T A [ 729 ] , int32_T ia0 , const real_T x [ 729 ] , int32_T ix0 ,
real_T y [ 27 ] ) { int32_T ix ; real_T c ; int32_T b_iy ; int32_T b ;
int32_T iac ; int32_T d ; int32_T ia ; if ( n != 0 ) { for ( b_iy = 0 ; b_iy
< n ; b_iy ++ ) { y [ b_iy ] = 0.0 ; } b_iy = 0 ; b = ( n - 1 ) * 27 + ia0 ;
for ( iac = ia0 ; iac <= b ; iac += 27 ) { ix = ix0 ; c = 0.0 ; d = ( iac + m
) - 1 ; for ( ia = iac ; ia <= d ; ia ++ ) { c += A [ ia - 1 ] * x [ ix - 1 ]
; ix ++ ; } y [ b_iy ] += c ; b_iy ++ ; } } } static void bi0mgkjeh1c (
int32_T m , int32_T n , real_T alpha1 , int32_T ix0 , const real_T y [ 27 ] ,
real_T A [ 729 ] , int32_T ia0 ) { int32_T jA ; int32_T jy ; real_T temp ;
int32_T ix ; int32_T j ; int32_T b ; int32_T ijA ; if ( ! ( alpha1 == 0.0 ) )
{ jA = ia0 - 1 ; jy = 0 ; for ( j = 0 ; j < n ; j ++ ) { if ( y [ jy ] != 0.0
) { temp = y [ jy ] * alpha1 ; ix = ix0 ; b = m + jA ; for ( ijA = jA ; ijA <
b ; ijA ++ ) { A [ ijA ] += A [ ix - 1 ] * temp ; ix ++ ; } } jy ++ ; jA +=
27 ; } } } static void ir3j1p5nlywk ( int32_T m , int32_T n , int32_T iv0 ,
real_T tau , real_T C [ 729 ] , int32_T ic0 , real_T work [ 27 ] ) { int32_T
lastv ; int32_T lastc ; if ( tau != 0.0 ) { lastv = m ; lastc = iv0 + m ;
while ( ( lastv > 0 ) && ( C [ lastc - 2 ] == 0.0 ) ) { lastv -- ; lastc -- ;
} lastc = nflot4iy53 ( lastv , n , C , ic0 ) ; } else { lastv = 0 ; lastc = 0
; } if ( lastv > 0 ) { ob5a4hvx1r ( lastv , lastc , C , ic0 , C , iv0 , work
) ; bi0mgkjeh1c ( lastv , lastc , - tau , iv0 , work , C , ic0 ) ; } } static
void k0tzi03qhro ( int32_T n , real_T a , real_T x [ 729 ] , int32_T ix0 ) {
int32_T b ; int32_T k ; b = ( ix0 + n ) - 1 ; for ( k = ix0 ; k <= b ; k ++ )
{ x [ k - 1 ] *= a ; } } static void o5wrh5a5ej ( int32_T m , int32_T n ,
int32_T k , real_T A [ 729 ] , const real_T tau [ 27 ] ) { int32_T i ;
int32_T itau ; real_T work [ 27 ] ; int32_T iaii ; int32_T b_j ; if ( n >= 1
) { for ( itau = k ; itau < n ; itau ++ ) { i = itau * 27 ; for ( iaii = 0 ;
iaii < m ; iaii ++ ) { A [ i + iaii ] = 0.0 ; } A [ i + itau ] = 1.0 ; } itau
= k - 1 ; memset ( & work [ 0 ] , 0 , 27U * sizeof ( real_T ) ) ; for ( i = k
; i >= 1 ; i -- ) { iaii = ( ( i - 1 ) * 27 + i ) - 1 ; if ( i < n ) { A [
iaii ] = 1.0 ; ir3j1p5nlywk ( ( m - i ) + 1 , n - i , iaii + 1 , tau [ itau ]
, A , iaii + 28 , work ) ; } if ( i < m ) { k0tzi03qhro ( m - i , - tau [
itau ] , A , iaii + 2 ) ; } A [ iaii ] = 1.0 - tau [ itau ] ; for ( b_j = 0 ;
b_j <= i - 2 ; b_j ++ ) { A [ ( iaii - b_j ) - 1 ] = 0.0 ; } itau -- ; } } }
static void dj14ojmbavj ( ev3ltaqeco * obj , int32_T nrows ) { int32_T iQR0 ;
int32_T idx ; int32_T n ; int32_T k ; for ( idx = 0 ; idx < obj -> minRowCol
; idx ++ ) { iQR0 = 27 * idx + idx ; n = obj -> mrows - idx ; for ( k = 1 ; k
- 1 <= n - 2 ; k ++ ) { obj -> Q [ iQR0 + k ] = obj -> QR [ iQR0 + k ] ; } }
o5wrh5a5ej ( obj -> mrows , nrows , obj -> minRowCol , obj -> Q , obj -> tau
) ; } static void ap4unorwbo ( int32_T m , int32_T n , const real_T A [ 729 ]
, const real_T x [ 27 ] , real_T y [ 729 ] ) { int32_T ix ; real_T c ;
int32_T b_iy ; int32_T iac ; int32_T b ; int32_T ia ; int32_T b_c ; if ( m !=
0 ) { for ( b_iy = 0 ; b_iy < n ; b_iy ++ ) { y [ b_iy ] = 0.0 ; } b_iy = 0 ;
b_c = ( n - 1 ) * 27 ; for ( iac = 1 ; iac <= b_c + 1 ; iac += 27 ) { ix = 0
; c = 0.0 ; b = ( iac + m ) - 1 ; for ( ia = iac ; ia <= b ; ia ++ ) { c += A
[ ia - 1 ] * x [ ix ] ; ix ++ ; } y [ b_iy ] += c ; b_iy ++ ; } } } static
void clax1tb0ex3 ( int32_T n , const real_T A [ 729 ] , real_T x [ 729 ] ) {
int32_T jjA ; int32_T ix ; int32_T j ; int32_T i ; if ( n != 0 ) { for ( j =
n - 1 ; j + 1 > 0 ; j -- ) { jjA = j * 27 + j ; x [ j ] /= A [ jjA ] ; for (
i = 1 ; i - 1 < j ; i ++ ) { ix = j - i ; x [ ix ] -= A [ jjA - i ] * x [ j ]
; } } } } static void jga1ttlxde ( int32_T nVar , int32_T mConstr ,
ev3ltaqeco * QRManager , const real_T ATwset [ 351 ] , const real_T grad [ 27
] , real_T lambdaLSQ [ 13 ] , real_T workspace [ 729 ] ) { real_T tol ;
int32_T fullRank_R ; int32_T rankR ; int32_T iQR_diag ; for ( fullRank_R = 0
; fullRank_R < mConstr ; fullRank_R ++ ) { lambdaLSQ [ fullRank_R ] = 0.0 ; }
j443bj1hxce ( QRManager , ATwset , nVar , mConstr ) ; dj14ojmbavj ( QRManager
, QRManager -> mrows ) ; ap4unorwbo ( nVar , nVar , QRManager -> Q , grad ,
workspace ) ; tol = muDoubleScalarMin ( 1.4901161193847656E-8 , ( real_T )
muIntScalarMax_sint32 ( nVar , mConstr ) * 2.2204460492503131E-16 ) *
muDoubleScalarAbs ( QRManager -> QR [ 0 ] ) ; fullRank_R =
muIntScalarMin_sint32 ( nVar , mConstr ) ; rankR = 0 ; iQR_diag = 0 ; while (
( rankR < fullRank_R ) && ( muDoubleScalarAbs ( QRManager -> QR [ iQR_diag ]
) > tol ) ) { rankR ++ ; iQR_diag += 28 ; } clax1tb0ex3 ( rankR , QRManager
-> QR , workspace ) ; fullRank_R = muIntScalarMin_sint32 ( mConstr ,
fullRank_R ) ; for ( rankR = 0 ; rankR < fullRank_R ; rankR ++ ) { lambdaLSQ
[ QRManager -> jpvt [ rankR ] - 1 ] = workspace [ rankR ] ; } } static void
cbymjegfoxs ( real_T lambda [ 13 ] , int32_T WorkingSet_nActiveConstr , const
int32_T WorkingSet_sizes [ 5 ] , const int32_T WorkingSet_isActiveIdx [ 6 ] ,
const int32_T WorkingSet_Wid [ 13 ] , const int32_T WorkingSet_Wlocalidx [ 13
] , real_T workspace [ 729 ] ) { int32_T mLB ; int32_T idx ; int32_T
idxOffset ; if ( WorkingSet_nActiveConstr != 0 ) { mLB = WorkingSet_sizes [ 3
] + 3 ; for ( idx = 0 ; idx <= mLB ; idx ++ ) { workspace [ idx ] = lambda [
idx ] ; } for ( idx = 0 ; idx <= mLB ; idx ++ ) { lambda [ idx ] = 0.0 ; }
mLB = 0 ; idx = 0 ; while ( ( idx + 1 <= WorkingSet_nActiveConstr ) && (
WorkingSet_Wid [ idx ] <= 2 ) ) { lambda [ WorkingSet_Wlocalidx [ idx ] - 1 ]
= workspace [ mLB ] ; mLB ++ ; idx ++ ; } while ( idx + 1 <=
WorkingSet_nActiveConstr ) { switch ( WorkingSet_Wid [ idx ] ) { case 3 :
idxOffset = 5 ; break ; case 4 : idxOffset = 5 ; break ; default : idxOffset
= WorkingSet_isActiveIdx [ 4 ] ; break ; } lambda [ ( idxOffset +
WorkingSet_Wlocalidx [ idx ] ) - 2 ] = workspace [ mLB ] ; mLB ++ ; idx ++ ;
} } } static void mxnuuti0thvgd ( mf15oedits * Flags , guj4mpcfgf * memspace
, kthfgfhdov * MeritFunction , nuprfhnilo * WorkingSet , aaxpzhoxuz *
TrialState , ev3ltaqeco * QRManager ) { int32_T nVar ; int32_T mLB ; real_T
optimRelativeFactor ; boolean_T isFeasible ; int32_T nActiveConstr ;
boolean_T b ; real_T c ; real_T nlpDualFeasErrorTmp ; real_T d [ 13 ] ;
boolean_T guard1 = false ; nVar = WorkingSet -> nVar ; mLB = WorkingSet ->
sizes [ 3 ] ; e5dhnhf4mfm2 ( TrialState -> gradLag , WorkingSet -> nVar ,
TrialState -> grad , WorkingSet -> Aeq , WorkingSet -> indexLB , WorkingSet
-> sizes [ 3 ] , TrialState -> lambdasqp ) ; optimRelativeFactor =
muDoubleScalarMax ( 1.0 , muDoubleScalarAbs ( TrialState -> grad [
cdcikb5kmwaj ( WorkingSet -> nVar , TrialState -> grad ) - 1 ] ) ) ; if ( !
cm0pm04nxw ( optimRelativeFactor ) ) { optimRelativeFactor = 1.0 ; }
MeritFunction -> nlpPrimalFeasError = i23ur3ytsfu ( TrialState -> cEq ) ; if
( TrialState -> sqpIterations == 0 ) { MeritFunction -> feasRelativeFactor =
muDoubleScalarMax ( 1.0 , MeritFunction -> nlpPrimalFeasError ) ; }
isFeasible = ( MeritFunction -> nlpPrimalFeasError <= 1.0E-6 * MeritFunction
-> feasRelativeFactor ) ; g0gqo0cxgutr ( WorkingSet -> nVar , TrialState ->
gradLag , & b , & c ) ; Flags -> gradOK = b ; MeritFunction ->
nlpDualFeasError = c ; if ( ! b ) { Flags -> done = true ; if ( isFeasible )
{ TrialState -> sqpExitFlag = 2 ; } else { TrialState -> sqpExitFlag = - 2 ;
} } else { MeritFunction -> nlpComplError = 0.0 ; MeritFunction ->
firstOrderOpt = muDoubleScalarMax ( c , 0.0 ) ; if ( TrialState ->
sqpIterations > 1 ) { e5dhnhf4mfm21 ( memspace -> workspace_double ,
WorkingSet -> nVar , TrialState -> grad , WorkingSet -> Aeq , WorkingSet ->
indexLB , WorkingSet -> sizes [ 3 ] , TrialState -> lambdasqp_old ) ;
g0gqo0cxgutr1 ( WorkingSet -> nVar , memspace -> workspace_double , & b , &
nlpDualFeasErrorTmp ) ; if ( muDoubleScalarMax ( nlpDualFeasErrorTmp , 0.0 )
< muDoubleScalarMax ( c , 0.0 ) ) { MeritFunction -> nlpDualFeasError =
nlpDualFeasErrorTmp ; MeritFunction -> nlpComplError = 0.0 ; MeritFunction ->
firstOrderOpt = muDoubleScalarMax ( nlpDualFeasErrorTmp , 0.0 ) ; mzehz0b4kv
( WorkingSet -> sizes [ 3 ] + 4 , TrialState -> lambdasqp_old , TrialState ->
lambdasqp ) ; } else { mzehz0b4kv ( WorkingSet -> sizes [ 3 ] + 4 ,
TrialState -> lambdasqp , TrialState -> lambdasqp_old ) ; } } else {
mzehz0b4kv ( WorkingSet -> sizes [ 3 ] + 4 , TrialState -> lambdasqp ,
TrialState -> lambdasqp_old ) ; } if ( isFeasible && ( MeritFunction ->
nlpDualFeasError <= 1.0E-10 * optimRelativeFactor ) ) { Flags -> done = true
; TrialState -> sqpExitFlag = 1 ; } else { Flags -> done = false ; if (
isFeasible && ( TrialState -> sqpFval < - 1.0E+20 ) ) { Flags -> done = true
; TrialState -> sqpExitFlag = - 3 ; } else { guard1 = false ; if ( (
TrialState -> sqpIterations > 0 ) && cyuk1go0vk ( TrialState -> xstarsqp ,
TrialState -> delta_x , WorkingSet -> nVar ) ) { if ( ! isFeasible ) { if (
Flags -> stepType != 2 ) { Flags -> stepType = 2 ; Flags -> failedLineSearch
= false ; Flags -> stepAccepted = false ; guard1 = true ; } else { Flags ->
done = true ; TrialState -> sqpExitFlag = - 2 ; } } else { nActiveConstr =
WorkingSet -> nActiveConstr ; if ( WorkingSet -> nActiveConstr > 0 ) {
jy0zmqim5jnxr ( WorkingSet , TrialState -> cEq ) ; jga1ttlxde ( nVar ,
nActiveConstr , QRManager , WorkingSet -> ATwset , TrialState -> grad ,
TrialState -> lambda , memspace -> workspace_double ) ; TrialState -> lambda
[ 0 ] = - TrialState -> lambda [ 0 ] ; TrialState -> lambda [ 1 ] = -
TrialState -> lambda [ 1 ] ; TrialState -> lambda [ 2 ] = - TrialState ->
lambda [ 2 ] ; TrialState -> lambda [ 3 ] = - TrialState -> lambda [ 3 ] ;
memcpy ( & d [ 0 ] , & TrialState -> lambda [ 0 ] , 13U * sizeof ( real_T ) )
; cbymjegfoxs ( d , WorkingSet -> nActiveConstr , WorkingSet -> sizes ,
WorkingSet -> isActiveIdx , WorkingSet -> Wid , WorkingSet -> Wlocalidx ,
memspace -> workspace_double ) ; memcpy ( & TrialState -> lambda [ 0 ] , & d
[ 0 ] , 13U * sizeof ( real_T ) ) ; e5dhnhf4mfm21 ( memspace ->
workspace_double , nVar , TrialState -> grad , WorkingSet -> Aeq , WorkingSet
-> indexLB , mLB , d ) ; g0gqo0cxgutr1 ( nVar , memspace -> workspace_double
, & isFeasible , & c ) ; if ( c <= 1.0E-10 * optimRelativeFactor ) {
MeritFunction -> nlpDualFeasError = c ; MeritFunction -> nlpComplError = 0.0
; MeritFunction -> firstOrderOpt = muDoubleScalarMax ( c , 0.0 ) ; mzehz0b4kv
( mLB + 4 , d , TrialState -> lambdasqp ) ; Flags -> done = true ; TrialState
-> sqpExitFlag = 1 ; } else { Flags -> done = true ; TrialState ->
sqpExitFlag = 2 ; } } else { Flags -> done = true ; TrialState -> sqpExitFlag
= 2 ; } } } else { guard1 = true ; } if ( guard1 ) { if ( TrialState ->
sqpIterations >= 400 ) { Flags -> done = true ; TrialState -> sqpExitFlag = 0
; } else { if ( TrialState -> FunctionEvaluations >= 1800 ) { Flags -> done =
true ; TrialState -> sqpExitFlag = 0 ; } } } } } } } static void ns205swajku
( int32_T nVar , real_T workspace [ 27 ] , const real_T grad [ 27 ] , const
real_T JacEqTrans [ 108 ] , const real_T grad_old [ 27 ] , const real_T
JacEqTrans_old [ 108 ] , const real_T lambda [ 13 ] ) { int32_T iy ; int32_T
b ; int32_T ia ; for ( iy = 0 ; iy < nVar ; iy ++ ) { workspace [ iy ] = grad
[ iy ] ; } if ( nVar >= 1 ) { for ( iy = 0 ; iy < nVar ; iy ++ ) { workspace
[ iy ] += - grad_old [ iy ] ; } } iy = 0 ; for ( ia = 0 ; ia < nVar ; ia ++ )
{ workspace [ iy ] += JacEqTrans [ ia ] * lambda [ 0 ] ; iy ++ ; } iy = 0 ; b
= nVar + 27 ; for ( ia = 27 ; ia < b ; ia ++ ) { workspace [ iy ] +=
JacEqTrans [ ia ] * lambda [ 1 ] ; iy ++ ; } iy = 0 ; b = nVar + 54 ; for (
ia = 54 ; ia < b ; ia ++ ) { workspace [ iy ] += JacEqTrans [ ia ] * lambda [
2 ] ; iy ++ ; } iy = 0 ; b = nVar + 81 ; for ( ia = 81 ; ia < b ; ia ++ ) {
workspace [ iy ] += JacEqTrans [ ia ] * lambda [ 3 ] ; iy ++ ; } iy = 0 ; for
( ia = 0 ; ia < nVar ; ia ++ ) { workspace [ iy ] += JacEqTrans_old [ ia ] *
- lambda [ 0 ] ; iy ++ ; } iy = 0 ; b = nVar + 27 ; for ( ia = 27 ; ia < b ;
ia ++ ) { workspace [ iy ] += JacEqTrans_old [ ia ] * - lambda [ 1 ] ; iy ++
; } iy = 0 ; b = nVar + 54 ; for ( ia = 54 ; ia < b ; ia ++ ) { workspace [
iy ] += JacEqTrans_old [ ia ] * - lambda [ 2 ] ; iy ++ ; } iy = 0 ; b = nVar
+ 81 ; for ( ia = 81 ; ia < b ; ia ++ ) { workspace [ iy ] += JacEqTrans_old
[ ia ] * - lambda [ 3 ] ; iy ++ ; } } static boolean_T baiaczl2dfl ( int32_T
nvar , real_T Bk [ 324 ] , const real_T sk [ 27 ] , real_T yk [ 27 ] , real_T
workspace [ 729 ] ) { boolean_T success ; real_T dotSY ; real_T curvatureS ;
int32_T ix ; int32_T iac ; int32_T jy ; real_T temp ; int32_T b_ix ; int32_T
d ; int32_T ijA ; dotSY = 0.0 ; for ( ix = 0 ; ix < nvar ; ix ++ ) { dotSY +=
sk [ ix ] * yk [ ix ] ; } for ( ix = 0 ; ix < nvar ; ix ++ ) { workspace [ ix
] = 0.0 ; } ix = 0 ; jy = ( nvar - 1 ) * 18 ; for ( iac = 1 ; iac <= jy + 1 ;
iac += 18 ) { b_ix = 0 ; d = ( iac + nvar ) - 1 ; for ( ijA = iac ; ijA <= d
; ijA ++ ) { workspace [ b_ix ] += Bk [ ijA - 1 ] * sk [ ix ] ; b_ix ++ ; }
ix ++ ; } curvatureS = 0.0 ; if ( nvar >= 1 ) { for ( ix = 0 ; ix < nvar ; ix
++ ) { curvatureS += sk [ ix ] * workspace [ ix ] ; } } if ( dotSY < 0.2 *
curvatureS ) { dotSY = 0.8 * curvatureS / ( curvatureS - dotSY ) ; for ( ix =
0 ; ix < nvar ; ix ++ ) { yk [ ix ] *= dotSY ; } dotSY = 1.0 - dotSY ; if ( !
( dotSY == 0.0 ) ) { for ( ix = 0 ; ix < nvar ; ix ++ ) { yk [ ix ] += dotSY
* workspace [ ix ] ; } } dotSY = 0.0 ; for ( ix = 0 ; ix < nvar ; ix ++ ) {
dotSY += sk [ ix ] * yk [ ix ] ; } } success = ( ( curvatureS >
2.2204460492503131E-16 ) && ( dotSY > 2.2204460492503131E-16 ) ) ; if (
success ) { curvatureS = - 1.0 / curvatureS ; if ( ! ( curvatureS == 0.0 ) )
{ ix = 0 ; jy = 0 ; for ( iac = 0 ; iac < nvar ; iac ++ ) { if ( workspace [
jy ] != 0.0 ) { temp = workspace [ jy ] * curvatureS ; b_ix = 0 ; d = nvar +
ix ; for ( ijA = ix ; ijA < d ; ijA ++ ) { Bk [ ijA ] += workspace [ b_ix ] *
temp ; b_ix ++ ; } } jy ++ ; ix += 18 ; } } curvatureS = 1.0 / dotSY ; if ( !
( curvatureS == 0.0 ) ) { ix = 0 ; jy = 0 ; for ( iac = 0 ; iac < nvar ; iac
++ ) { if ( yk [ jy ] != 0.0 ) { dotSY = yk [ jy ] * curvatureS ; b_ix = 0 ;
d = nvar + ix ; for ( ijA = ix ; ijA < d ; ijA ++ ) { Bk [ ijA ] += yk [ b_ix
] * dotSY ; b_ix ++ ; } } jy ++ ; ix += 18 ; } } } return success ; } static
void bt1s243f5e ( int32_T n , const real_T x [ 27 ] , real_T y [ 27 ] ) {
int32_T b_k ; for ( b_k = 0 ; b_k < n ; b_k ++ ) { y [ b_k ] = x [ b_k ] ; }
} static void dmpzqvndba ( int32_T n , const real_T x [ 18 ] , real_T y [ 27
] ) { int32_T b_k ; for ( b_k = 0 ; b_k < n ; b_k ++ ) { y [ b_k ] = x [ b_k
] ; } } static void fmazrorwnc ( int32_T n , const real_T x [ 18 ] , real_T y
[ 18 ] ) { int32_T b_k ; for ( b_k = 0 ; b_k < n ; b_k ++ ) { y [ b_k ] = x [
b_k ] ; } } static void ozqnsknwek4 ( nuprfhnilo * WorkingSet , const real_T
TrialState_cEq [ 4 ] , const real_T TrialState_searchDir [ 27 ] ) { int32_T
ix ; real_T c ; int32_T b ; int32_T ia ; WorkingSet -> beq [ 0 ] = -
TrialState_cEq [ 0 ] ; WorkingSet -> beq [ 1 ] = - TrialState_cEq [ 1 ] ;
WorkingSet -> beq [ 2 ] = - TrialState_cEq [ 2 ] ; WorkingSet -> beq [ 3 ] =
- TrialState_cEq [ 3 ] ; ix = 0 ; c = 0.0 ; for ( ia = 0 ; ia < WorkingSet ->
nVar ; ia ++ ) { c += WorkingSet -> Aeq [ ia ] * TrialState_searchDir [ ix ]
; ix ++ ; } WorkingSet -> beq [ 0 ] += c ; ix = 0 ; c = 0.0 ; b = WorkingSet
-> nVar + 27 ; for ( ia = 27 ; ia < b ; ia ++ ) { c += WorkingSet -> Aeq [ ia
] * TrialState_searchDir [ ix ] ; ix ++ ; } WorkingSet -> beq [ 1 ] += c ; ix
= 0 ; c = 0.0 ; b = WorkingSet -> nVar + 54 ; for ( ia = 54 ; ia < b ; ia ++
) { c += WorkingSet -> Aeq [ ia ] * TrialState_searchDir [ ix ] ; ix ++ ; }
WorkingSet -> beq [ 2 ] += c ; ix = 0 ; c = 0.0 ; b = WorkingSet -> nVar + 81
; for ( ia = 81 ; ia < b ; ia ++ ) { c += WorkingSet -> Aeq [ ia ] *
TrialState_searchDir [ ix ] ; ix ++ ; } WorkingSet -> beq [ 3 ] += c ;
WorkingSet -> bwset [ 0 ] = WorkingSet -> beq [ 0 ] ; WorkingSet -> bwset [ 1
] = WorkingSet -> beq [ 1 ] ; WorkingSet -> bwset [ 2 ] = WorkingSet -> beq [
2 ] ; WorkingSet -> bwset [ 3 ] = WorkingSet -> beq [ 3 ] ; } static void
njpga5wb4z1 ( aaxpzhoxuz * solution , const real_T workingset_lb [ 27 ] ,
const int32_T workingset_indexLB [ 27 ] , const int32_T workingset_sizes [ 5
] , const boolean_T workingset_isActiveConstr [ 13 ] ) { int32_T b_idx ; for
( b_idx = 0 ; b_idx < workingset_sizes [ 3 ] ; b_idx ++ ) { if (
workingset_isActiveConstr [ b_idx + 4 ] ) { solution -> xstar [
workingset_indexLB [ b_idx ] - 1 ] = - workingset_lb [ workingset_indexLB [
b_idx ] - 1 ] ; } } } static void j443bj1hxced ( ev3ltaqeco * obj , int32_T
mrows , int32_T ncols ) { real_T c [ 27 ] ; int32_T d [ 27 ] ; obj ->
usedPivoting = true ; obj -> mrows = mrows ; obj -> ncols = ncols ; obj ->
minRowCol = muIntScalarMin_sint32 ( mrows , ncols ) ; memcpy ( & rtB .
b_mbvzarwird [ 0 ] , & obj -> QR [ 0 ] , 729U * sizeof ( real_T ) ) ; memcpy
( & d [ 0 ] , & obj -> jpvt [ 0 ] , 27U * sizeof ( int32_T ) ) ; ixl3w5wjmif
( rtB . b_mbvzarwird , mrows , ncols , d , c ) ; memcpy ( & obj -> QR [ 0 ] ,
& rtB . b_mbvzarwird [ 0 ] , 729U * sizeof ( real_T ) ) ; memcpy ( & obj ->
tau [ 0 ] , & c [ 0 ] , 27U * sizeof ( real_T ) ) ; memcpy ( & obj -> jpvt [
0 ] , & d [ 0 ] , 27U * sizeof ( int32_T ) ) ; } static int32_T mgd2kii20a (
ev3ltaqeco * qrmanager , const real_T beqf [ 13 ] , int32_T mConstr , int32_T
nVar ) { int32_T numDependent ; real_T tol ; real_T qtb ; int32_T b_idx ;
int32_T ix ; int32_T iy ; int32_T k ; boolean_T exitg1 ; numDependent =
mConstr - nVar ; numDependent = muIntScalarMax_sint32 ( 0 , numDependent ) ;
for ( b_idx = 0 ; b_idx < nVar ; b_idx ++ ) { qrmanager -> jpvt [ b_idx ] = 0
; } j443bj1hxced ( qrmanager , mConstr , nVar ) ; tol = 100.0 * ( real_T )
nVar * 2.2204460492503131E-16 ; b_idx = muIntScalarMin_sint32 ( nVar ,
mConstr ) ; while ( ( b_idx > 0 ) && ( muDoubleScalarAbs ( qrmanager -> QR [
( ( b_idx - 1 ) * 27 + b_idx ) - 1 ] ) < tol ) ) { b_idx -- ; numDependent ++
; } if ( numDependent > 0 ) { dj14ojmbavj ( qrmanager , qrmanager -> mrows )
; b_idx = 0 ; exitg1 = false ; while ( ( ! exitg1 ) && ( b_idx <=
numDependent - 1 ) ) { qtb = 0.0 ; ix = ( ( mConstr - b_idx ) - 1 ) * 27 ; iy
= 0 ; for ( k = 0 ; k < mConstr ; k ++ ) { qtb += qrmanager -> Q [ ix ] *
beqf [ iy ] ; ix ++ ; iy ++ ; } if ( muDoubleScalarAbs ( qtb ) >= tol ) {
numDependent = - 1 ; exitg1 = true ; } else { b_idx ++ ; } } } return
numDependent ; } static void apakcbefy5 ( int32_T depIdx [ 27 ] , int32_T
mFixed , int32_T nDep , ev3ltaqeco * qrmanager , const real_T AeqfPrime [ 351
] , int32_T mRows , int32_T nCols ) { int32_T b_idx ; for ( b_idx = 0 ; b_idx
< mFixed ; b_idx ++ ) { qrmanager -> jpvt [ b_idx ] = 1 ; } for ( b_idx =
mFixed ; b_idx < nCols ; b_idx ++ ) { qrmanager -> jpvt [ b_idx ] = 0 ; }
j443bj1hxce ( qrmanager , AeqfPrime , mRows , nCols ) ; for ( b_idx = 0 ;
b_idx < nDep ; b_idx ++ ) { depIdx [ b_idx ] = qrmanager -> jpvt [ ( nCols -
nDep ) + b_idx ] ; } } static void h1ikxoaf0xd ( int32_T x [ 27 ] , int32_T
xLen , int32_T workspace [ 27 ] , int32_T xMin , int32_T xMax ) { int32_T
maxOffset ; int32_T idxStart ; int32_T idxEnd ; int32_T b_idxW ; if ( ( xLen
> 1 ) && ( xMax > xMin ) ) { maxOffset = xMax - xMin ; for ( idxStart = 0 ;
idxStart <= maxOffset ; idxStart ++ ) { workspace [ idxStart ] = 0 ; }
maxOffset = xMax - xMin ; for ( idxStart = 0 ; idxStart < xLen ; idxStart ++
) { workspace [ x [ idxStart ] - xMin ] ++ ; } for ( idxStart = 1 ; idxStart
< maxOffset + 1 ; idxStart ++ ) { workspace [ idxStart ] += workspace [
idxStart - 1 ] ; } idxStart = 0 ; idxEnd = workspace [ 0 ] ; for ( b_idxW = 0
; b_idxW < maxOffset ; b_idxW ++ ) { while ( idxStart + 1 <= idxEnd ) { x [
idxStart ] = b_idxW + xMin ; idxStart ++ ; } idxStart = workspace [ b_idxW ]
; idxEnd = workspace [ b_idxW + 1 ] ; } while ( idxStart + 1 <= idxEnd ) { x
[ idxStart ] = xMax ; idxStart ++ ; } } } static void pghmkcqdjs5 (
nuprfhnilo * obj , int32_T idx_global ) { int32_T TYPE ; int32_T
idx_global_start ; int32_T b_idx ; TYPE = obj -> Wid [ idx_global - 1 ] - 1 ;
obj -> isActiveConstr [ ( obj -> isActiveIdx [ obj -> Wid [ idx_global - 1 ]
- 1 ] + obj -> Wlocalidx [ idx_global - 1 ] ) - 2 ] = false ;
idx_global_start = obj -> nActiveConstr - 1 ; obj -> Wid [ idx_global - 1 ] =
obj -> Wid [ obj -> nActiveConstr - 1 ] ; obj -> Wlocalidx [ idx_global - 1 ]
= obj -> Wlocalidx [ idx_global_start ] ; for ( b_idx = 0 ; b_idx < obj ->
nVar ; b_idx ++ ) { obj -> ATwset [ b_idx + 27 * ( idx_global - 1 ) ] = obj
-> ATwset [ 27 * idx_global_start + b_idx ] ; } obj -> bwset [ idx_global - 1
] = obj -> bwset [ idx_global_start ] ; obj -> nActiveConstr -- ; obj ->
nWConstr [ TYPE ] -- ; } static void egyda50nzu ( nuprfhnilo * obj , int32_T
idx_global ) { int32_T totalEq ; int32_T TYPE ; int32_T b_idx ; int32_T d_idx
; totalEq = ( obj -> nWConstr [ 0 ] + obj -> nWConstr [ 1 ] ) - 1 ; if ( (
totalEq + 1 != 0 ) && ( idx_global <= totalEq + 1 ) ) { if ( ( totalEq + 1 ==
obj -> nActiveConstr ) || ( totalEq + 1 == idx_global ) ) { obj -> mEqRemoved
++ ; obj -> indexEqRemoved [ obj -> mEqRemoved - 1 ] = obj -> Wlocalidx [
idx_global - 1 ] ; pghmkcqdjs5 ( obj , idx_global ) ; } else { obj ->
mEqRemoved ++ ; TYPE = obj -> Wid [ idx_global - 1 ] - 1 ; obj ->
indexEqRemoved [ obj -> mEqRemoved - 1 ] = obj -> Wlocalidx [ idx_global - 1
] ; obj -> isActiveConstr [ ( obj -> isActiveIdx [ obj -> Wid [ idx_global -
1 ] - 1 ] + obj -> Wlocalidx [ idx_global - 1 ] ) - 2 ] = false ; obj -> Wid
[ idx_global - 1 ] = obj -> Wid [ totalEq ] ; obj -> Wlocalidx [ idx_global -
1 ] = obj -> Wlocalidx [ totalEq ] ; for ( b_idx = 0 ; b_idx < obj -> nVar ;
b_idx ++ ) { obj -> ATwset [ b_idx + 27 * ( idx_global - 1 ) ] = obj ->
ATwset [ 27 * totalEq + b_idx ] ; } obj -> bwset [ idx_global - 1 ] = obj ->
bwset [ totalEq ] ; b_idx = obj -> nActiveConstr - 1 ; obj -> Wid [ totalEq ]
= obj -> Wid [ obj -> nActiveConstr - 1 ] ; obj -> Wlocalidx [ totalEq ] =
obj -> Wlocalidx [ b_idx ] ; for ( d_idx = 0 ; d_idx < obj -> nVar ; d_idx ++
) { obj -> ATwset [ d_idx + 27 * totalEq ] = obj -> ATwset [ 27 * b_idx +
d_idx ] ; } obj -> bwset [ totalEq ] = obj -> bwset [ b_idx ] ; obj ->
nActiveConstr -- ; obj -> nWConstr [ TYPE ] -- ; } } } static int32_T
bt35m0mjfwo ( guj4mpcfgf * memspace , nuprfhnilo * workingset , ev3ltaqeco *
qrmanager ) { int32_T nDepInd ; int32_T mTotalWorkingEq ; int32_T b [ 27 ] ;
int32_T c [ 27 ] ; int32_T idx_row ; int32_T b_idx_col ; mTotalWorkingEq =
workingset -> nWConstr [ 1 ] + workingset -> nWConstr [ 0 ] ; nDepInd = 0 ;
if ( mTotalWorkingEq > 0 ) { for ( idx_row = 0 ; idx_row < mTotalWorkingEq ;
idx_row ++ ) { for ( b_idx_col = 0 ; b_idx_col < workingset -> nVar ;
b_idx_col ++ ) { qrmanager -> QR [ idx_row + 27 * b_idx_col ] = workingset ->
ATwset [ 27 * idx_row + b_idx_col ] ; } } nDepInd = mgd2kii20a ( qrmanager ,
workingset -> bwset , mTotalWorkingEq , workingset -> nVar ) ; if ( nDepInd >
0 ) { memcpy ( & b [ 0 ] , & memspace -> workspace_int [ 0 ] , 27U * sizeof (
int32_T ) ) ; apakcbefy5 ( b , workingset -> nWConstr [ 0 ] , nDepInd ,
qrmanager , workingset -> ATwset , workingset -> nVar , mTotalWorkingEq ) ;
memcpy ( & c [ 0 ] , & memspace -> workspace_sort [ 0 ] , 27U * sizeof (
int32_T ) ) ; h1ikxoaf0xd ( b , nDepInd , c , 1 , mTotalWorkingEq ) ; memcpy
( & memspace -> workspace_int [ 0 ] , & b [ 0 ] , 27U * sizeof ( int32_T ) )
; memcpy ( & memspace -> workspace_sort [ 0 ] , & c [ 0 ] , 27U * sizeof (
int32_T ) ) ; for ( mTotalWorkingEq = nDepInd ; mTotalWorkingEq > 0 ;
mTotalWorkingEq -- ) { egyda50nzu ( workingset , b [ mTotalWorkingEq - 1 ] )
; } } } return nDepInd ; } static void hmiqzf5p5qb ( nuprfhnilo * obj ) {
int32_T idx_global ; for ( idx_global = obj -> nWConstr [ 0 ] + obj ->
nWConstr [ 1 ] ; idx_global < obj -> nActiveConstr ; idx_global ++ ) { obj ->
isActiveConstr [ ( obj -> isActiveIdx [ obj -> Wid [ idx_global ] - 1 ] + obj
-> Wlocalidx [ idx_global ] ) - 2 ] = false ; } obj -> nWConstr [ 2 ] = 0 ;
obj -> nWConstr [ 3 ] = 0 ; obj -> nWConstr [ 4 ] = 0 ; obj -> nActiveConstr
= obj -> nWConstr [ 0 ] + obj -> nWConstr [ 1 ] ; } static void gfhhinglrqw (
nuprfhnilo * workingset , ev3ltaqeco * qrmanager , guj4mpcfgf * memspace ,
real_T tolfactor ) { int32_T nFixedConstr ; real_T tol ; int32_T idx ;
int32_T nDepIneq ; int32_T b [ 27 ] ; int32_T c [ 27 ] ; nFixedConstr =
workingset -> nWConstr [ 1 ] + workingset -> nWConstr [ 0 ] ; if ( (
workingset -> nWConstr [ 2 ] + workingset -> nWConstr [ 3 ] ) + workingset ->
nWConstr [ 4 ] > 0 ) { tol = tolfactor * ( real_T ) workingset -> nVar *
2.2204460492503131E-16 ; for ( nDepIneq = 0 ; nDepIneq < nFixedConstr ;
nDepIneq ++ ) { qrmanager -> jpvt [ nDepIneq ] = 1 ; } for ( nDepIneq =
nFixedConstr + 1 ; nDepIneq <= workingset -> nActiveConstr ; nDepIneq ++ ) {
qrmanager -> jpvt [ nDepIneq - 1 ] = 0 ; } j443bj1hxce ( qrmanager ,
workingset -> ATwset , workingset -> nVar , workingset -> nActiveConstr ) ;
nDepIneq = 0 ; for ( idx = workingset -> nActiveConstr ; idx > workingset ->
nVar ; idx -- ) { nDepIneq ++ ; memspace -> workspace_int [ nDepIneq - 1 ] =
qrmanager -> jpvt [ idx - 1 ] ; } if ( idx <= workingset -> nVar ) { while (
( idx > nFixedConstr ) && ( muDoubleScalarAbs ( qrmanager -> QR [ ( ( idx - 1
) * 27 + idx ) - 1 ] ) < tol ) ) { nDepIneq ++ ; memspace -> workspace_int [
nDepIneq - 1 ] = qrmanager -> jpvt [ idx - 1 ] ; idx -- ; } } memcpy ( & b [
0 ] , & memspace -> workspace_int [ 0 ] , 27U * sizeof ( int32_T ) ) ; memcpy
( & c [ 0 ] , & memspace -> workspace_sort [ 0 ] , 27U * sizeof ( int32_T ) )
; h1ikxoaf0xd ( b , nDepIneq , c , nFixedConstr + 1 , workingset ->
nActiveConstr ) ; memcpy ( & memspace -> workspace_int [ 0 ] , & b [ 0 ] ,
27U * sizeof ( int32_T ) ) ; memcpy ( & memspace -> workspace_sort [ 0 ] , &
c [ 0 ] , 27U * sizeof ( int32_T ) ) ; for ( nFixedConstr = nDepIneq ;
nFixedConstr > 0 ; nFixedConstr -- ) { pghmkcqdjs5 ( workingset , b [
nFixedConstr - 1 ] ) ; } } } static void ktvooewnrx ( int32_T m , int32_T n ,
const real_T A [ 351 ] , const real_T x [ 27 ] , real_T y [ 729 ] ) { int32_T
ix ; real_T c ; int32_T iy ; int32_T iac ; int32_T b ; int32_T ia ; int32_T
b_c ; if ( n != 0 ) { iy = 0 ; b_c = ( n - 1 ) * 27 ; for ( iac = 1 ; iac <=
b_c + 1 ; iac += 27 ) { ix = 0 ; c = 0.0 ; b = ( iac + m ) - 1 ; for ( ia =
iac ; ia <= b ; ia ++ ) { c += A [ ia - 1 ] * x [ ix ] ; ix ++ ; } y [ iy ]
+= - c ; iy ++ ; } } } static void e0svfow1h1 ( real_T A [ 729 ] , int32_T m
, int32_T n , real_T tau [ 27 ] ) { int32_T minmn ; minmn =
muIntScalarMin_sint32 ( m , n ) ; memset ( & tau [ 0 ] , 0 , 27U * sizeof (
real_T ) ) ; if ( minmn >= 1 ) { l0lnfjcq5za ( A , m , n , minmn , tau ) ; }
} static void h0ncymex4zmtv ( ev3ltaqeco * obj , const real_T A [ 351 ] ,
int32_T mrows , int32_T ncols ) { int32_T b_idx ; boolean_T guard1 = false ;
guard1 = false ; if ( mrows * ncols > 0 ) { for ( b_idx = 0 ; b_idx < ncols ;
b_idx ++ ) { pbgevwrabr ( mrows , A , 27 * b_idx + 1 , obj -> QR , 27 * b_idx
+ 1 ) ; } guard1 = true ; } else if ( mrows * ncols == 0 ) { obj -> mrows =
mrows ; obj -> ncols = ncols ; obj -> minRowCol = 0 ; } else { guard1 = true
; } if ( guard1 ) { obj -> usedPivoting = false ; obj -> mrows = mrows ; obj
-> ncols = ncols ; for ( b_idx = 0 ; b_idx < ncols ; b_idx ++ ) { obj -> jpvt
[ b_idx ] = b_idx + 1 ; } obj -> minRowCol = muIntScalarMin_sint32 ( mrows ,
ncols ) ; e0svfow1h1 ( obj -> QR , mrows , ncols , obj -> tau ) ; } } static
void kfjmuob5wh5tt ( int32_T m , const real_T A [ 729 ] , real_T B_m [ 729 ]
) { real_T temp ; int32_T iAcol ; int32_T i ; int32_T k ; for ( i = 1 ; i - 1
< m ; i ++ ) { iAcol = ( i - 1 ) * 27 - 1 ; temp = B_m [ i + - 1 ] ; for ( k
= 1 ; k - 1 <= i - 2 ; k ++ ) { temp -= A [ k + iAcol ] * B_m [ k + - 1 ] ; }
B_m [ i + - 1 ] = temp / A [ i + iAcol ] ; } for ( i = 1 ; i - 1 < m ; i ++ )
{ iAcol = ( i - 1 ) * 27 - 1 ; temp = B_m [ i + 26 ] ; for ( k = 1 ; k - 1 <=
i - 2 ; k ++ ) { temp -= A [ k + iAcol ] * B_m [ k + 26 ] ; } B_m [ i + 26 ]
= temp / A [ i + iAcol ] ; } } static void k24gkerz4mwi3bt ( int32_T m ,
int32_T k , const real_T A [ 729 ] , const real_T B_n [ 729 ] , real_T C [
729 ] ) { int32_T br ; int32_T ar ; int32_T ia ; int32_T c ; int32_T d ;
int32_T b_ic ; for ( ar = 0 ; ar < m ; ar ++ ) { C [ ar ] = 0.0 ; } br = m +
27 ; for ( ar = 27 ; ar < br ; ar ++ ) { C [ ar ] = 0.0 ; } ar = - 1 ; for (
br = 1 ; br <= k ; br ++ ) { ia = ar ; for ( b_ic = 0 ; b_ic < m ; b_ic ++ )
{ ia ++ ; C [ b_ic ] += B_n [ br - 1 ] * A [ ia ] ; } ar += 27 ; } ar = - 1 ;
c = k + 27 ; for ( br = 28 ; br <= c ; br ++ ) { ia = ar ; d = m + 27 ; for (
b_ic = 27 ; b_ic < d ; b_ic ++ ) { ia ++ ; C [ b_ic ] += B_n [ br - 1 ] * A [
ia ] ; } ar += 27 ; } } static void h0ncymex4zmt ( ev3ltaqeco * obj , int32_T
mrows , int32_T ncols ) { int32_T idx ; obj -> usedPivoting = false ; obj ->
mrows = mrows ; obj -> ncols = ncols ; for ( idx = 0 ; idx < ncols ; idx ++ )
{ obj -> jpvt [ idx ] = idx + 1 ; } obj -> minRowCol = muIntScalarMin_sint32
( mrows , ncols ) ; e0svfow1h1 ( obj -> QR , mrows , ncols , obj -> tau ) ; }
static void k24gkerz4mwi3b ( int32_T m , int32_T k , const real_T A [ 729 ] ,
const real_T B_g [ 729 ] , real_T C [ 729 ] ) { int32_T br ; int32_T ar ;
real_T temp ; int32_T c ; int32_T w ; for ( ar = 0 ; ar < m ; ar ++ ) { C [
ar ] = 0.0 ; } br = m + 27 ; for ( ar = 27 ; ar < br ; ar ++ ) { C [ ar ] =
0.0 ; } ar = - 1 ; for ( br = 0 ; br < m ; br ++ ) { temp = 0.0 ; for ( w = 1
; w - 1 < k ; w ++ ) { temp += A [ w + ar ] * B_g [ w + - 1 ] ; } C [ br ] +=
temp ; ar += 27 ; } ar = - 1 ; c = m + 27 ; for ( br = 27 ; br < c ; br ++ )
{ temp = 0.0 ; for ( w = 1 ; w - 1 < k ; w ++ ) { temp += A [ w + ar ] * B_g
[ w + 26 ] ; } C [ br ] += temp ; ar += 27 ; } } static void kfjmuob5wh5t (
int32_T m , const real_T A [ 729 ] , real_T B_g [ 729 ] ) { int32_T kAcol ;
int32_T k ; int32_T i ; for ( k = m ; k > 0 ; k -- ) { kAcol = ( k - 1 ) * 27
- 1 ; if ( B_g [ k + - 1 ] != 0.0 ) { B_g [ k + - 1 ] /= A [ k + kAcol ] ;
for ( i = 1 ; i - 1 <= k - 2 ; i ++ ) { B_g [ i + - 1 ] -= B_g [ k + - 1 ] *
A [ i + kAcol ] ; } } } for ( k = m ; k > 0 ; k -- ) { kAcol = ( k - 1 ) * 27
- 1 ; if ( B_g [ k + 26 ] != 0.0 ) { B_g [ k + 26 ] /= A [ k + kAcol ] ; for
( i = 1 ; i - 1 <= k - 2 ; i ++ ) { B_g [ i + 26 ] -= B_g [ k + 26 ] * A [ i
+ kAcol ] ; } } } } static void kzdcud2kf2g ( int32_T n , const real_T x [ 27
] , real_T y [ 729 ] ) { int32_T k ; for ( k = 0 ; k < n ; k ++ ) { y [ k ]
+= x [ k ] ; } } static real_T a0pa3vf4j5 ( nuprfhnilo * obj , const real_T x
[ 729 ] ) { int32_T ix ; real_T c ; int32_T b ; int32_T ia ; obj ->
maxConstrWorkspace [ 0 ] = obj -> beq [ 0 ] ; obj -> maxConstrWorkspace [ 0 ]
= - obj -> maxConstrWorkspace [ 0 ] ; obj -> maxConstrWorkspace [ 1 ] = obj
-> beq [ 1 ] ; obj -> maxConstrWorkspace [ 1 ] = - obj -> maxConstrWorkspace
[ 1 ] ; obj -> maxConstrWorkspace [ 2 ] = obj -> beq [ 2 ] ; obj ->
maxConstrWorkspace [ 2 ] = - obj -> maxConstrWorkspace [ 2 ] ; obj ->
maxConstrWorkspace [ 3 ] = obj -> beq [ 3 ] ; obj -> maxConstrWorkspace [ 3 ]
= - obj -> maxConstrWorkspace [ 3 ] ; ix = 0 ; c = 0.0 ; for ( ia = 0 ; ia <
obj -> nVar ; ia ++ ) { c += obj -> Aeq [ ia ] * x [ ix ] ; ix ++ ; } obj ->
maxConstrWorkspace [ 0 ] += c ; ix = 0 ; c = 0.0 ; b = obj -> nVar + 27 ; for
( ia = 27 ; ia < b ; ia ++ ) { c += obj -> Aeq [ ia ] * x [ ix ] ; ix ++ ; }
obj -> maxConstrWorkspace [ 1 ] += c ; ix = 0 ; c = 0.0 ; b = obj -> nVar +
54 ; for ( ia = 54 ; ia < b ; ia ++ ) { c += obj -> Aeq [ ia ] * x [ ix ] ;
ix ++ ; } obj -> maxConstrWorkspace [ 2 ] += c ; ix = 0 ; c = 0.0 ; b = obj
-> nVar + 81 ; for ( ia = 81 ; ia < b ; ia ++ ) { c += obj -> Aeq [ ia ] * x
[ ix ] ; ix ++ ; } obj -> maxConstrWorkspace [ 3 ] += c ; return
muDoubleScalarMax ( muDoubleScalarMax ( muDoubleScalarMax ( muDoubleScalarMax
( 0.0 , muDoubleScalarAbs ( obj -> maxConstrWorkspace [ 0 ] ) ) ,
muDoubleScalarAbs ( obj -> maxConstrWorkspace [ 1 ] ) ) , muDoubleScalarAbs (
obj -> maxConstrWorkspace [ 2 ] ) ) , muDoubleScalarAbs ( obj ->
maxConstrWorkspace [ 3 ] ) ) ; } static real_T afl1fr4kxa ( nuprfhnilo * obj
, const real_T x [ 729 ] ) { real_T v ; int32_T ix ; real_T c ; int32_T ia ;
obj -> maxConstrWorkspace [ 0 ] = obj -> beq [ 0 ] ; obj ->
maxConstrWorkspace [ 0 ] = - obj -> maxConstrWorkspace [ 0 ] ; obj ->
maxConstrWorkspace [ 1 ] = obj -> beq [ 1 ] ; obj -> maxConstrWorkspace [ 1 ]
= - obj -> maxConstrWorkspace [ 1 ] ; obj -> maxConstrWorkspace [ 2 ] = obj
-> beq [ 2 ] ; obj -> maxConstrWorkspace [ 2 ] = - obj -> maxConstrWorkspace
[ 2 ] ; obj -> maxConstrWorkspace [ 3 ] = obj -> beq [ 3 ] ; obj ->
maxConstrWorkspace [ 3 ] = - obj -> maxConstrWorkspace [ 3 ] ; ix = 0 ; c =
0.0 ; for ( ia = 0 ; ia < 18 ; ia ++ ) { c += obj -> Aeq [ ia ] * x [ ix ] ;
ix ++ ; } obj -> maxConstrWorkspace [ 0 ] += c ; ix = 0 ; c = 0.0 ; for ( ia
= 27 ; ia < 45 ; ia ++ ) { c += obj -> Aeq [ ia ] * x [ ix ] ; ix ++ ; } obj
-> maxConstrWorkspace [ 1 ] += c ; ix = 0 ; c = 0.0 ; for ( ia = 54 ; ia < 72
; ia ++ ) { c += obj -> Aeq [ ia ] * x [ ix ] ; ix ++ ; } obj ->
maxConstrWorkspace [ 2 ] += c ; ix = 0 ; c = 0.0 ; for ( ia = 81 ; ia < 99 ;
ia ++ ) { c += obj -> Aeq [ ia ] * x [ ix ] ; ix ++ ; } obj ->
maxConstrWorkspace [ 3 ] += c ; obj -> maxConstrWorkspace [ 0 ] = ( obj ->
maxConstrWorkspace [ 0 ] - x [ 18 ] ) + x [ 22 ] ; v = muDoubleScalarMax (
0.0 , muDoubleScalarAbs ( obj -> maxConstrWorkspace [ 0 ] ) ) ; obj ->
maxConstrWorkspace [ 1 ] = ( obj -> maxConstrWorkspace [ 1 ] - x [ 19 ] ) + x
[ 23 ] ; v = muDoubleScalarMax ( v , muDoubleScalarAbs ( obj ->
maxConstrWorkspace [ 1 ] ) ) ; obj -> maxConstrWorkspace [ 2 ] = ( obj ->
maxConstrWorkspace [ 2 ] - x [ 20 ] ) + x [ 24 ] ; v = muDoubleScalarMax ( v
, muDoubleScalarAbs ( obj -> maxConstrWorkspace [ 2 ] ) ) ; obj ->
maxConstrWorkspace [ 3 ] = ( obj -> maxConstrWorkspace [ 3 ] - x [ 21 ] ) + x
[ 25 ] ; return muDoubleScalarMax ( v , muDoubleScalarAbs ( obj ->
maxConstrWorkspace [ 3 ] ) ) ; } static real_T gtxetnnm2kf5 ( nuprfhnilo *
obj , const real_T x [ 729 ] ) { real_T v ; int32_T mLB ; int32_T idx ; mLB =
obj -> sizes [ 3 ] ; if ( obj -> probType == 2 ) { v = afl1fr4kxa ( obj , x )
; } else { v = a0pa3vf4j5 ( obj , x ) ; } if ( mLB > 0 ) { for ( idx = 0 ;
idx < mLB ; idx ++ ) { v = muDoubleScalarMax ( v , - x [ obj -> indexLB [ idx
] - 1 ] - obj -> lb [ obj -> indexLB [ idx ] - 1 ] ) ; } } return v ; }
static real_T a0pa3vf4j53 ( nuprfhnilo * obj , const real_T x [ 729 ] ) {
int32_T ix ; real_T c ; int32_T b ; int32_T ia ; obj -> maxConstrWorkspace [
0 ] = obj -> beq [ 0 ] ; obj -> maxConstrWorkspace [ 0 ] = - obj ->
maxConstrWorkspace [ 0 ] ; obj -> maxConstrWorkspace [ 1 ] = obj -> beq [ 1 ]
; obj -> maxConstrWorkspace [ 1 ] = - obj -> maxConstrWorkspace [ 1 ] ; obj
-> maxConstrWorkspace [ 2 ] = obj -> beq [ 2 ] ; obj -> maxConstrWorkspace [
2 ] = - obj -> maxConstrWorkspace [ 2 ] ; obj -> maxConstrWorkspace [ 3 ] =
obj -> beq [ 3 ] ; obj -> maxConstrWorkspace [ 3 ] = - obj ->
maxConstrWorkspace [ 3 ] ; ix = 27 ; c = 0.0 ; for ( ia = 0 ; ia < obj ->
nVar ; ia ++ ) { c += obj -> Aeq [ ia ] * x [ ix ] ; ix ++ ; } obj ->
maxConstrWorkspace [ 0 ] += c ; ix = 27 ; c = 0.0 ; b = obj -> nVar + 27 ;
for ( ia = 27 ; ia < b ; ia ++ ) { c += obj -> Aeq [ ia ] * x [ ix ] ; ix ++
; } obj -> maxConstrWorkspace [ 1 ] += c ; ix = 27 ; c = 0.0 ; b = obj ->
nVar + 54 ; for ( ia = 54 ; ia < b ; ia ++ ) { c += obj -> Aeq [ ia ] * x [
ix ] ; ix ++ ; } obj -> maxConstrWorkspace [ 2 ] += c ; ix = 27 ; c = 0.0 ; b
= obj -> nVar + 81 ; for ( ia = 81 ; ia < b ; ia ++ ) { c += obj -> Aeq [ ia
] * x [ ix ] ; ix ++ ; } obj -> maxConstrWorkspace [ 3 ] += c ; return
muDoubleScalarMax ( muDoubleScalarMax ( muDoubleScalarMax ( muDoubleScalarMax
( 0.0 , muDoubleScalarAbs ( obj -> maxConstrWorkspace [ 0 ] ) ) ,
muDoubleScalarAbs ( obj -> maxConstrWorkspace [ 1 ] ) ) , muDoubleScalarAbs (
obj -> maxConstrWorkspace [ 2 ] ) ) , muDoubleScalarAbs ( obj ->
maxConstrWorkspace [ 3 ] ) ) ; } static real_T afl1fr4kxac ( nuprfhnilo * obj
, const real_T x [ 729 ] ) { real_T v ; int32_T ix ; real_T c ; int32_T ia ;
obj -> maxConstrWorkspace [ 0 ] = obj -> beq [ 0 ] ; obj ->
maxConstrWorkspace [ 0 ] = - obj -> maxConstrWorkspace [ 0 ] ; obj ->
maxConstrWorkspace [ 1 ] = obj -> beq [ 1 ] ; obj -> maxConstrWorkspace [ 1 ]
= - obj -> maxConstrWorkspace [ 1 ] ; obj -> maxConstrWorkspace [ 2 ] = obj
-> beq [ 2 ] ; obj -> maxConstrWorkspace [ 2 ] = - obj -> maxConstrWorkspace
[ 2 ] ; obj -> maxConstrWorkspace [ 3 ] = obj -> beq [ 3 ] ; obj ->
maxConstrWorkspace [ 3 ] = - obj -> maxConstrWorkspace [ 3 ] ; ix = 27 ; c =
0.0 ; for ( ia = 0 ; ia < 18 ; ia ++ ) { c += obj -> Aeq [ ia ] * x [ ix ] ;
ix ++ ; } obj -> maxConstrWorkspace [ 0 ] += c ; ix = 27 ; c = 0.0 ; for ( ia
= 27 ; ia < 45 ; ia ++ ) { c += obj -> Aeq [ ia ] * x [ ix ] ; ix ++ ; } obj
-> maxConstrWorkspace [ 1 ] += c ; ix = 27 ; c = 0.0 ; for ( ia = 54 ; ia <
72 ; ia ++ ) { c += obj -> Aeq [ ia ] * x [ ix ] ; ix ++ ; } obj ->
maxConstrWorkspace [ 2 ] += c ; ix = 27 ; c = 0.0 ; for ( ia = 81 ; ia < 99 ;
ia ++ ) { c += obj -> Aeq [ ia ] * x [ ix ] ; ix ++ ; } obj ->
maxConstrWorkspace [ 3 ] += c ; obj -> maxConstrWorkspace [ 0 ] = ( obj ->
maxConstrWorkspace [ 0 ] - x [ 45 ] ) + x [ 49 ] ; v = muDoubleScalarMax (
0.0 , muDoubleScalarAbs ( obj -> maxConstrWorkspace [ 0 ] ) ) ; obj ->
maxConstrWorkspace [ 1 ] = ( obj -> maxConstrWorkspace [ 1 ] - x [ 46 ] ) + x
[ 50 ] ; v = muDoubleScalarMax ( v , muDoubleScalarAbs ( obj ->
maxConstrWorkspace [ 1 ] ) ) ; obj -> maxConstrWorkspace [ 2 ] = ( obj ->
maxConstrWorkspace [ 2 ] - x [ 47 ] ) + x [ 51 ] ; v = muDoubleScalarMax ( v
, muDoubleScalarAbs ( obj -> maxConstrWorkspace [ 2 ] ) ) ; obj ->
maxConstrWorkspace [ 3 ] = ( obj -> maxConstrWorkspace [ 3 ] - x [ 48 ] ) + x
[ 52 ] ; return muDoubleScalarMax ( v , muDoubleScalarAbs ( obj ->
maxConstrWorkspace [ 3 ] ) ) ; } static real_T gtxetnnm2kf5h ( nuprfhnilo *
obj , const real_T x [ 729 ] ) { real_T v ; int32_T mLB ; int32_T idx ; mLB =
obj -> sizes [ 3 ] ; if ( obj -> probType == 2 ) { v = afl1fr4kxac ( obj , x
) ; } else { v = a0pa3vf4j53 ( obj , x ) ; } if ( mLB > 0 ) { for ( idx = 0 ;
idx < mLB ; idx ++ ) { v = muDoubleScalarMax ( v , - x [ obj -> indexLB [ idx
] + 26 ] - obj -> lb [ obj -> indexLB [ idx ] - 1 ] ) ; } } return v ; }
static void j3nlhgkchg ( int32_T n , const real_T x [ 729 ] , real_T y [ 27 ]
) { int32_T b_k ; for ( b_k = 0 ; b_k < n ; b_k ++ ) { y [ b_k ] = x [ b_k +
27 ] ; } } static void h3pi1xdwf1 ( int32_T n , const real_T x [ 729 ] ,
real_T y [ 27 ] ) { int32_T b_k ; for ( b_k = 0 ; b_k < n ; b_k ++ ) { y [
b_k ] = x [ b_k ] ; } } static boolean_T g3dskjwjcwp ( real_T workspace [ 729
] , real_T xCurrent [ 27 ] , nuprfhnilo * workingset , ev3ltaqeco * qrmanager
) { boolean_T nonDegenerateWset ; int32_T mWConstr ; int32_T nVar ; real_T
constrViolation_minnormX ; real_T constrViolation_basicX ; int32_T b_idx ;
int32_T b_idx_row ; int32_T exitg1 ; mWConstr = workingset -> nActiveConstr -
1 ; nVar = workingset -> nVar ; nonDegenerateWset = true ; if ( workingset ->
nActiveConstr != 0 ) { for ( b_idx = 0 ; b_idx <= mWConstr ; b_idx ++ ) {
workspace [ b_idx ] = workingset -> bwset [ b_idx ] ; workspace [ b_idx + 27
] = workingset -> bwset [ b_idx ] ; } ktvooewnrx ( workingset -> nVar ,
workingset -> nActiveConstr , workingset -> ATwset , xCurrent , workspace ) ;
if ( workingset -> nActiveConstr >= workingset -> nVar ) { for ( b_idx = 0 ;
b_idx < nVar ; b_idx ++ ) { for ( b_idx_row = 0 ; b_idx_row <= mWConstr ;
b_idx_row ++ ) { qrmanager -> QR [ b_idx_row + 27 * b_idx ] = workingset ->
ATwset [ 27 * b_idx_row + b_idx ] ; } } h0ncymex4zmt ( qrmanager , workingset
-> nActiveConstr , workingset -> nVar ) ; dj14ojmbavj ( qrmanager , qrmanager
-> mrows ) ; memcpy ( & rtB . workspace [ 0 ] , & workspace [ 0 ] , 729U *
sizeof ( real_T ) ) ; k24gkerz4mwi3b ( workingset -> nVar , workingset ->
nActiveConstr , qrmanager -> Q , rtB . workspace , workspace ) ; kfjmuob5wh5t
( workingset -> nVar , qrmanager -> QR , workspace ) ; } else { h0ncymex4zmtv
( qrmanager , workingset -> ATwset , workingset -> nVar , workingset ->
nActiveConstr ) ; dj14ojmbavj ( qrmanager , qrmanager -> minRowCol ) ;
kfjmuob5wh5tt ( workingset -> nActiveConstr , qrmanager -> QR , workspace ) ;
memcpy ( & rtB . workspace [ 0 ] , & workspace [ 0 ] , 729U * sizeof ( real_T
) ) ; k24gkerz4mwi3bt ( workingset -> nVar , workingset -> nActiveConstr ,
qrmanager -> Q , rtB . workspace , workspace ) ; } mWConstr = 0 ; do { exitg1
= 0 ; if ( mWConstr <= nVar - 1 ) { if ( ( ! cm0pm04nxw ( workspace [
mWConstr ] ) ) || ( ! cm0pm04nxw ( workspace [ mWConstr + 27 ] ) ) ) {
nonDegenerateWset = false ; exitg1 = 1 ; } else { mWConstr ++ ; } } else {
kzdcud2kf2g ( nVar , xCurrent , workspace ) ; constrViolation_minnormX =
gtxetnnm2kf5 ( workingset , workspace ) ; constrViolation_basicX =
gtxetnnm2kf5h ( workingset , workspace ) ; if ( ( constrViolation_minnormX <=
2.2204460492503131E-16 ) || ( constrViolation_minnormX <
constrViolation_basicX ) ) { h3pi1xdwf1 ( nVar , workspace , xCurrent ) ; }
else { j3nlhgkchg ( nVar , workspace , xCurrent ) ; } exitg1 = 1 ; } } while
( exitg1 == 0 ) ; } return nonDegenerateWset ; } static real_T a0pa3vf4j53c (
nuprfhnilo * obj , const real_T x [ 27 ] ) { int32_T ix ; real_T c ; int32_T
b ; int32_T ia ; obj -> maxConstrWorkspace [ 0 ] = obj -> beq [ 0 ] ; obj ->
maxConstrWorkspace [ 0 ] = - obj -> maxConstrWorkspace [ 0 ] ; obj ->
maxConstrWorkspace [ 1 ] = obj -> beq [ 1 ] ; obj -> maxConstrWorkspace [ 1 ]
= - obj -> maxConstrWorkspace [ 1 ] ; obj -> maxConstrWorkspace [ 2 ] = obj
-> beq [ 2 ] ; obj -> maxConstrWorkspace [ 2 ] = - obj -> maxConstrWorkspace
[ 2 ] ; obj -> maxConstrWorkspace [ 3 ] = obj -> beq [ 3 ] ; obj ->
maxConstrWorkspace [ 3 ] = - obj -> maxConstrWorkspace [ 3 ] ; ix = 0 ; c =
0.0 ; for ( ia = 0 ; ia < obj -> nVar ; ia ++ ) { c += obj -> Aeq [ ia ] * x
[ ix ] ; ix ++ ; } obj -> maxConstrWorkspace [ 0 ] += c ; ix = 0 ; c = 0.0 ;
b = obj -> nVar + 27 ; for ( ia = 27 ; ia < b ; ia ++ ) { c += obj -> Aeq [
ia ] * x [ ix ] ; ix ++ ; } obj -> maxConstrWorkspace [ 1 ] += c ; ix = 0 ; c
= 0.0 ; b = obj -> nVar + 54 ; for ( ia = 54 ; ia < b ; ia ++ ) { c += obj ->
Aeq [ ia ] * x [ ix ] ; ix ++ ; } obj -> maxConstrWorkspace [ 2 ] += c ; ix =
0 ; c = 0.0 ; b = obj -> nVar + 81 ; for ( ia = 81 ; ia < b ; ia ++ ) { c +=
obj -> Aeq [ ia ] * x [ ix ] ; ix ++ ; } obj -> maxConstrWorkspace [ 3 ] += c
; return muDoubleScalarMax ( muDoubleScalarMax ( muDoubleScalarMax (
muDoubleScalarMax ( 0.0 , muDoubleScalarAbs ( obj -> maxConstrWorkspace [ 0 ]
) ) , muDoubleScalarAbs ( obj -> maxConstrWorkspace [ 1 ] ) ) ,
muDoubleScalarAbs ( obj -> maxConstrWorkspace [ 2 ] ) ) , muDoubleScalarAbs (
obj -> maxConstrWorkspace [ 3 ] ) ) ; } static real_T afl1fr4kxack (
nuprfhnilo * obj , const real_T x [ 27 ] ) { real_T v ; int32_T ix ; real_T c
; int32_T ia ; obj -> maxConstrWorkspace [ 0 ] = obj -> beq [ 0 ] ; obj ->
maxConstrWorkspace [ 0 ] = - obj -> maxConstrWorkspace [ 0 ] ; obj ->
maxConstrWorkspace [ 1 ] = obj -> beq [ 1 ] ; obj -> maxConstrWorkspace [ 1 ]
= - obj -> maxConstrWorkspace [ 1 ] ; obj -> maxConstrWorkspace [ 2 ] = obj
-> beq [ 2 ] ; obj -> maxConstrWorkspace [ 2 ] = - obj -> maxConstrWorkspace
[ 2 ] ; obj -> maxConstrWorkspace [ 3 ] = obj -> beq [ 3 ] ; obj ->
maxConstrWorkspace [ 3 ] = - obj -> maxConstrWorkspace [ 3 ] ; ix = 0 ; c =
0.0 ; for ( ia = 0 ; ia < 18 ; ia ++ ) { c += obj -> Aeq [ ia ] * x [ ix ] ;
ix ++ ; } obj -> maxConstrWorkspace [ 0 ] += c ; ix = 0 ; c = 0.0 ; for ( ia
= 27 ; ia < 45 ; ia ++ ) { c += obj -> Aeq [ ia ] * x [ ix ] ; ix ++ ; } obj
-> maxConstrWorkspace [ 1 ] += c ; ix = 0 ; c = 0.0 ; for ( ia = 54 ; ia < 72
; ia ++ ) { c += obj -> Aeq [ ia ] * x [ ix ] ; ix ++ ; } obj ->
maxConstrWorkspace [ 2 ] += c ; ix = 0 ; c = 0.0 ; for ( ia = 81 ; ia < 99 ;
ia ++ ) { c += obj -> Aeq [ ia ] * x [ ix ] ; ix ++ ; } obj ->
maxConstrWorkspace [ 3 ] += c ; obj -> maxConstrWorkspace [ 0 ] = ( obj ->
maxConstrWorkspace [ 0 ] - x [ 18 ] ) + x [ 22 ] ; v = muDoubleScalarMax (
0.0 , muDoubleScalarAbs ( obj -> maxConstrWorkspace [ 0 ] ) ) ; obj ->
maxConstrWorkspace [ 1 ] = ( obj -> maxConstrWorkspace [ 1 ] - x [ 19 ] ) + x
[ 23 ] ; v = muDoubleScalarMax ( v , muDoubleScalarAbs ( obj ->
maxConstrWorkspace [ 1 ] ) ) ; obj -> maxConstrWorkspace [ 2 ] = ( obj ->
maxConstrWorkspace [ 2 ] - x [ 20 ] ) + x [ 24 ] ; v = muDoubleScalarMax ( v
, muDoubleScalarAbs ( obj -> maxConstrWorkspace [ 2 ] ) ) ; obj ->
maxConstrWorkspace [ 3 ] = ( obj -> maxConstrWorkspace [ 3 ] - x [ 21 ] ) + x
[ 25 ] ; return muDoubleScalarMax ( v , muDoubleScalarAbs ( obj ->
maxConstrWorkspace [ 3 ] ) ) ; } static real_T gtxetnnm2kf5h2 ( nuprfhnilo *
obj , const real_T x [ 27 ] ) { real_T v ; int32_T mLB ; int32_T idx ; mLB =
obj -> sizes [ 3 ] ; if ( obj -> probType == 2 ) { v = afl1fr4kxack ( obj , x
) ; } else { v = a0pa3vf4j53c ( obj , x ) ; } if ( mLB > 0 ) { for ( idx = 0
; idx < mLB ; idx ++ ) { v = muDoubleScalarMax ( v , - x [ obj -> indexLB [
idx ] - 1 ] - obj -> lb [ obj -> indexLB [ idx ] - 1 ] ) ; } } return v ; }
static void bw4msbp20mk ( aaxpzhoxuz * solution , guj4mpcfgf * memspace ,
nuprfhnilo * workingset , ev3ltaqeco * qrmanager ) { int32_T b ; real_T c [
27 ] ; boolean_T okWorkingSet ; real_T constrViolation ; boolean_T guard1 =
false ; solution -> state = 82 ; b = bt35m0mjfwo ( memspace , workingset ,
qrmanager ) ; if ( b != - 1 ) { gfhhinglrqw ( workingset , qrmanager ,
memspace , 100.0 ) ; memcpy ( & c [ 0 ] , & solution -> xstar [ 0 ] , 27U *
sizeof ( real_T ) ) ; okWorkingSet = g3dskjwjcwp ( memspace ->
workspace_double , c , workingset , qrmanager ) ; memcpy ( & solution ->
xstar [ 0 ] , & c [ 0 ] , 27U * sizeof ( real_T ) ) ; guard1 = false ; if ( !
okWorkingSet ) { gfhhinglrqw ( workingset , qrmanager , memspace , 1000.0 ) ;
okWorkingSet = g3dskjwjcwp ( memspace -> workspace_double , c , workingset ,
qrmanager ) ; memcpy ( & solution -> xstar [ 0 ] , & c [ 0 ] , 27U * sizeof (
real_T ) ) ; if ( ! okWorkingSet ) { solution -> state = - 7 ; } else {
guard1 = true ; } } else { guard1 = true ; } if ( guard1 ) { if ( workingset
-> nWConstr [ 0 ] + workingset -> nWConstr [ 1 ] == workingset -> nVar ) {
constrViolation = gtxetnnm2kf5h2 ( workingset , solution -> xstar ) ; if (
constrViolation > 1.0E-6 ) { solution -> state = - 2 ; } } } } else {
solution -> state = - 3 ; hmiqzf5p5qb ( workingset ) ; } } static void
bbhkemzkfna ( ecn2fyspui * obj , int32_T NumVars ) { obj -> prev_objtype =
obj -> objtype ; obj -> prev_nvar = obj -> nvar ; obj -> prev_hasLinear = obj
-> hasLinear ; obj -> objtype = 5 ; obj -> nvar = NumVars ; obj ->
gammaScalar = 1.0 ; obj -> hasLinear = true ; } static void hrefiazefh2 (
boolean_T obj_hasLinear , int32_T obj_nvar , real_T workspace [ 729 ] , const
real_T H [ 324 ] , const real_T f [ 27 ] , const real_T x [ 27 ] ) { int32_T
fMultiplier ; int32_T iy ; real_T c ; int32_T iac ; int32_T b ; int32_T ia ;
int32_T b_c ; fMultiplier = 0 ; if ( obj_hasLinear ) { while ( fMultiplier <=
obj_nvar - 1 ) { workspace [ fMultiplier ] = f [ fMultiplier ] ; fMultiplier
++ ; } fMultiplier = 1 ; } if ( obj_nvar != 0 ) { if ( fMultiplier != 1 ) {
while ( fMultiplier <= obj_nvar - 1 ) { workspace [ fMultiplier ] = 0.0 ;
fMultiplier ++ ; } } fMultiplier = 0 ; b_c = ( obj_nvar - 1 ) * obj_nvar + 1
; iac = 1 ; while ( ( ( obj_nvar > 0 ) && ( iac <= b_c ) ) || ( ( obj_nvar <
0 ) && ( iac >= b_c ) ) ) { c = 0.5 * x [ fMultiplier ] ; iy = 0 ; b = ( iac
+ obj_nvar ) - 1 ; for ( ia = iac ; ia <= b ; ia ++ ) { workspace [ iy ] += H
[ ia - 1 ] * c ; iy ++ ; } fMultiplier ++ ; iac += obj_nvar ; } } } static
real_T aqnjqmfea4l ( const ecn2fyspui * obj , real_T workspace [ 729 ] ,
const real_T H [ 324 ] , const real_T f [ 27 ] , const real_T x [ 27 ] ) {
real_T val ; int32_T b_k ; val = 0.0 ; switch ( obj -> objtype ) { case 5 :
val = x [ obj -> nvar - 1 ] * obj -> gammaScalar ; break ; case 3 :
hrefiazefh2 ( obj -> hasLinear , obj -> nvar , workspace , H , f , x ) ; if (
obj -> nvar >= 1 ) { for ( b_k = 0 ; b_k < obj -> nvar ; b_k ++ ) { val += x
[ b_k ] * workspace [ b_k ] ; } } break ; case 4 : hrefiazefh2 ( obj ->
hasLinear , obj -> nvar , workspace , H , f , x ) ; for ( b_k = obj -> nvar ;
b_k + 1 < 27 ; b_k ++ ) { workspace [ b_k ] = 0.5 * obj -> beta * x [ b_k ] +
obj -> rho ; } for ( b_k = 0 ; b_k < 26 ; b_k ++ ) { val += x [ b_k ] *
workspace [ b_k ] ; } break ; } return val ; } static void emnad0v3tp (
int32_T m , int32_T n , const real_T A [ 324 ] , int32_T lda , const real_T x
[ 27 ] , real_T y [ 26 ] ) { int32_T iy ; int32_T ix ; int32_T iac ; int32_T
b ; int32_T ia ; int32_T c ; if ( ( m != 0 ) && ( n != 0 ) ) { for ( ix = 0 ;
ix < m ; ix ++ ) { y [ ix ] = 0.0 ; } ix = 0 ; c = ( n - 1 ) * lda + 1 ; iac
= 1 ; while ( ( ( lda > 0 ) && ( iac <= c ) ) || ( ( lda < 0 ) && ( iac >= c
) ) ) { iy = 0 ; b = ( iac + m ) - 1 ; for ( ia = iac ; ia <= b ; ia ++ ) { y
[ iy ] += A [ ia - 1 ] * x [ ix ] ; iy ++ ; } ix ++ ; iac += lda ; } } }
static void h35xb0f5lhr ( ecn2fyspui * obj , const real_T H [ 324 ] , const
real_T f [ 27 ] , const real_T x [ 27 ] ) { int32_T k ; int32_T iy ; switch (
obj -> objtype ) { case 5 : for ( iy = 0 ; iy <= obj -> nvar - 2 ; iy ++ ) {
obj -> grad [ iy ] = 0.0 ; } obj -> grad [ obj -> nvar - 1 ] = obj ->
gammaScalar ; break ; case 3 : emnad0v3tp ( obj -> nvar , obj -> nvar , H ,
obj -> nvar , x , obj -> Hx ) ; for ( iy = 0 ; iy < obj -> nvar ; iy ++ ) {
obj -> grad [ iy ] = obj -> Hx [ iy ] ; } if ( obj -> hasLinear && ( obj ->
nvar >= 1 ) ) { iy = obj -> nvar - 1 ; for ( k = 0 ; k <= iy ; k ++ ) { obj
-> grad [ k ] += f [ k ] ; } } break ; case 4 : emnad0v3tp ( obj -> nvar ,
obj -> nvar , H , obj -> nvar , x , obj -> Hx ) ; for ( iy = obj -> nvar ; iy
+ 1 < 27 ; iy ++ ) { obj -> Hx [ iy ] = obj -> beta * x [ iy ] ; } memcpy ( &
obj -> grad [ 0 ] , & obj -> Hx [ 0 ] , 26U * sizeof ( real_T ) ) ; if ( obj
-> hasLinear && ( obj -> nvar >= 1 ) ) { iy = obj -> nvar - 1 ; for ( k = 0 ;
k <= iy ; k ++ ) { obj -> grad [ k ] += f [ k ] ; } } if ( 26 - obj -> nvar
>= 1 ) { iy = obj -> nvar ; for ( k = 0 ; k <= 25 - obj -> nvar ; k ++ ) {
obj -> grad [ iy ] += obj -> rho ; iy ++ ; } } break ; } } static real_T
c2n2v1sbdis ( const ecn2fyspui * obj , real_T workspace [ 729 ] , const
real_T f [ 27 ] , const real_T x [ 27 ] ) { real_T val ; int32_T b_k ; val =
0.0 ; switch ( obj -> objtype ) { case 5 : val = x [ obj -> nvar - 1 ] * obj
-> gammaScalar ; break ; case 3 : if ( obj -> hasLinear ) { for ( b_k = 0 ;
b_k < obj -> nvar ; b_k ++ ) { workspace [ b_k ] = 0.5 * obj -> Hx [ b_k ] +
f [ b_k ] ; } if ( obj -> nvar >= 1 ) { for ( b_k = 0 ; b_k < obj -> nvar ;
b_k ++ ) { val += x [ b_k ] * workspace [ b_k ] ; } } } else { if ( obj ->
nvar >= 1 ) { for ( b_k = 0 ; b_k < obj -> nvar ; b_k ++ ) { val += x [ b_k ]
* obj -> Hx [ b_k ] ; } } val *= 0.5 ; } break ; case 4 : if ( obj ->
hasLinear ) { for ( b_k = 0 ; b_k < obj -> nvar ; b_k ++ ) { workspace [ b_k
] = f [ b_k ] ; } for ( b_k = 0 ; b_k <= 25 - obj -> nvar ; b_k ++ ) {
workspace [ obj -> nvar + b_k ] = obj -> rho ; } for ( b_k = 0 ; b_k < 26 ;
b_k ++ ) { workspace [ b_k ] += 0.5 * obj -> Hx [ b_k ] ; val += x [ b_k ] *
workspace [ b_k ] ; } } else { for ( b_k = 0 ; b_k < 26 ; b_k ++ ) { val += x
[ b_k ] * obj -> Hx [ b_k ] ; } val *= 0.5 ; for ( b_k = obj -> nvar ; b_k +
1 < 27 ; b_k ++ ) { val += x [ b_k ] * obj -> rho ; } } break ; } return val
; } static void pgwb0irvmr ( int32_T n , real_T y [ 13 ] ) { int32_T k ; for
( k = 0 ; k < n ; k ++ ) { y [ k ] = 0.0 ; } } static void oklow4km22 (
int32_T n , real_T y [ 27 ] ) { int32_T k ; for ( k = 0 ; k < n ; k ++ ) { y
[ k ] = 0.0 ; } } static void hwy0ursta0 ( int32_T n , real_T x [ 729 ] ,
int32_T ix0 , int32_T iy0 , real_T c , real_T s ) { int32_T ix ; int32_T iy ;
real_T temp ; int32_T k ; if ( n >= 1 ) { ix = ix0 - 1 ; iy = iy0 - 1 ; for (
k = 0 ; k < n ; k ++ ) { temp = c * x [ ix ] + s * x [ iy ] ; x [ iy ] = c *
x [ iy ] - s * x [ ix ] ; x [ ix ] = temp ; iy ++ ; ix ++ ; } } } static void
oidsdg2ozfj ( ev3ltaqeco * obj , const real_T vec [ 351 ] , int32_T iv0 ) {
int32_T iQR0 ; real_T c ; real_T b_c ; real_T s ; int32_T iyend ; int32_T ix
; real_T c_c ; int32_T b_iy ; int32_T d ; int32_T ia ; iQR0 = obj -> ncols +
1 ; obj -> minRowCol = muIntScalarMin_sint32 ( obj -> mrows , iQR0 ) ; iQR0 =
27 * obj -> ncols ; if ( obj -> mrows != 0 ) { iyend = iQR0 + obj -> mrows ;
for ( b_iy = iQR0 ; b_iy < iyend ; b_iy ++ ) { obj -> QR [ b_iy ] = 0.0 ; }
iyend = ( obj -> mrows - 1 ) * 27 ; for ( b_iy = 1 ; b_iy <= iyend + 1 ; b_iy
+= 27 ) { ix = iv0 ; c_c = 0.0 ; d = ( b_iy + obj -> mrows ) - 1 ; for ( ia =
b_iy ; ia <= d ; ia ++ ) { c_c += obj -> Q [ ia - 1 ] * vec [ ix - 1 ] ; ix
++ ; } obj -> QR [ iQR0 ] += c_c ; iQR0 ++ ; } } obj -> ncols ++ ; obj ->
jpvt [ obj -> ncols - 1 ] = obj -> ncols ; for ( iQR0 = obj -> mrows - 2 ;
iQR0 + 2 > obj -> ncols ; iQR0 -- ) { c_c = obj -> QR [ ( obj -> ncols - 1 )
* 27 + iQR0 ] ; c = obj -> QR [ ( ( obj -> ncols - 1 ) * 27 + iQR0 ) + 1 ] ;
jym3k4ksh1 ( & c_c , & c , & b_c , & s ) ; obj -> QR [ iQR0 + 27 * ( obj ->
ncols - 1 ) ] = c_c ; obj -> QR [ ( iQR0 + 27 * ( obj -> ncols - 1 ) ) + 1 ]
= c ; iyend = 27 * iQR0 + 1 ; hwy0ursta0 ( obj -> mrows , obj -> Q , iyend ,
iyend + 27 , b_c , s ) ; } } static void hwy0ursta00 ( int32_T n , real_T x [
729 ] , int32_T ix0 , int32_T iy0 , real_T c , real_T s ) { int32_T ix ;
int32_T iy ; real_T temp ; int32_T k ; if ( n >= 1 ) { ix = ix0 - 1 ; iy =
iy0 - 1 ; for ( k = 0 ; k < n ; k ++ ) { temp = c * x [ ix ] + s * x [ iy ] ;
x [ iy ] = c * x [ iy ] - s * x [ ix ] ; x [ ix ] = temp ; iy += 27 ; ix +=
27 ; } } } static void j1hgrtcknic ( ev3ltaqeco * obj , int32_T idx ) {
int32_T i ; int32_T k ; int32_T QRk0 ; real_T d ; real_T e ; real_T c_c ;
real_T b_s ; if ( obj -> usedPivoting ) { i = 1 ; while ( ( i <= obj -> ncols
) && ( obj -> jpvt [ i - 1 ] != idx ) ) { i ++ ; } idx = i ; } if ( idx >=
obj -> ncols ) { obj -> ncols -- ; } else { obj -> jpvt [ idx - 1 ] = obj ->
jpvt [ obj -> ncols - 1 ] ; for ( i = 0 ; i < obj -> minRowCol ; i ++ ) { obj
-> QR [ i + 27 * ( idx - 1 ) ] = obj -> QR [ ( obj -> ncols - 1 ) * 27 + i ]
; } obj -> ncols -- ; obj -> minRowCol = muIntScalarMin_sint32 ( obj -> mrows
, obj -> ncols ) ; if ( idx < obj -> mrows ) { i = obj -> mrows - 1 ; i =
muIntScalarMin_sint32 ( i , obj -> ncols ) ; for ( k = i ; k >= idx ; k -- )
{ d = obj -> QR [ ( ( idx - 1 ) * 27 + k ) - 1 ] ; e = obj -> QR [ ( idx - 1
) * 27 + k ] ; jym3k4ksh1 ( & d , & e , & c_c , & b_s ) ; obj -> QR [ ( k +
27 * ( idx - 1 ) ) - 1 ] = d ; obj -> QR [ k + 27 * ( idx - 1 ) ] = e ; obj
-> QR [ k + 27 * ( k - 1 ) ] = 0.0 ; QRk0 = 27 * idx + k ; hwy0ursta00 ( obj
-> ncols - idx , obj -> QR , QRk0 , QRk0 + 1 , c_c , b_s ) ; QRk0 = ( k - 1 )
* 27 + 1 ; hwy0ursta0 ( obj -> mrows , obj -> Q , QRk0 , QRk0 + 27 , c_c ,
b_s ) ; } for ( k = idx ; k < i ; k ++ ) { d = obj -> QR [ 27 * k + k ] ; e =
obj -> QR [ ( 27 * k + k ) + 1 ] ; jym3k4ksh1 ( & d , & e , & c_c , & b_s ) ;
obj -> QR [ k + 27 * k ] = d ; obj -> QR [ ( k + 27 * k ) + 1 ] = e ; QRk0 =
( k + 1 ) * 28 ; hwy0ursta00 ( ( obj -> ncols - k ) - 1 , obj -> QR , QRk0 ,
QRk0 + 1 , c_c , b_s ) ; QRk0 = 27 * k + 1 ; hwy0ursta0 ( obj -> mrows , obj
-> Q , QRk0 , QRk0 + 27 , c_c , b_s ) ; } } } } static void gyu4d440gr (
int32_T m , int32_T n , int32_T k , const real_T A [ 324 ] , int32_T lda ,
const real_T B_p [ 729 ] , int32_T ib0 , real_T C [ 729 ] ) { int32_T br ;
int32_T ar ; int32_T ia ; int32_T b_cr ; int32_T c ; int32_T ib ; int32_T d ;
int32_T b_ic ; int32_T b_c ; if ( ( m != 0 ) && ( n != 0 ) ) { b_c = ( n - 1
) * 27 ; for ( br = 0 ; br <= b_c ; br += 27 ) { b_cr = br + m ; for ( ar =
br ; ar < b_cr ; ar ++ ) { C [ ar ] = 0.0 ; } } br = ib0 ; for ( b_cr = 0 ;
b_cr <= b_c ; b_cr += 27 ) { ar = - 1 ; c = br + k ; for ( ib = br ; ib < c ;
ib ++ ) { ia = ar ; d = b_cr + m ; for ( b_ic = b_cr ; b_ic < d ; b_ic ++ ) {
ia ++ ; C [ b_ic ] += B_p [ ib - 1 ] * A [ ia ] ; } ar += lda ; } br += 27 ;
} } } static void lzabwiefrn ( int32_T m , int32_T n , int32_T k , const
real_T A [ 729 ] , int32_T ia0 , const real_T B_l [ 729 ] , real_T C [ 729 ]
) { int32_T br ; int32_T ar ; real_T temp ; int32_T b_cr ; int32_T c ;
int32_T b_ic ; int32_T w ; int32_T b_c ; if ( ( m != 0 ) && ( n != 0 ) ) {
b_c = ( n - 1 ) * 27 ; for ( br = 0 ; br <= b_c ; br += 27 ) { b_cr = br + m
; for ( ar = br ; ar < b_cr ; ar ++ ) { C [ ar ] = 0.0 ; } } br = - 1 ; for (
b_cr = 0 ; b_cr <= b_c ; b_cr += 27 ) { ar = ia0 ; c = b_cr + m ; for ( b_ic
= b_cr ; b_ic < c ; b_ic ++ ) { temp = 0.0 ; for ( w = 1 ; w - 1 < k ; w ++ )
{ temp += A [ ( w + ar ) - 2 ] * B_l [ w + br ] ; } C [ b_ic ] += temp ; ar
+= 27 ; } br += 27 ; } } } static void nm5kzkxjjrx ( real_T beta , const
real_T H [ 324 ] , int32_T nVarOrig , bwxng4ee5f * cholmanager , const
ev3ltaqeco * qrmanager , guj4mpcfgf * memspace ) { int32_T mNull ; int32_T
nullStart ; int32_T b_idx_col ; int32_T idx_row ; mNull = qrmanager -> mrows
- qrmanager -> ncols ; nullStart = 27 * qrmanager -> ncols + 1 ; gyu4d440gr (
nVarOrig , mNull , nVarOrig , H , nVarOrig , qrmanager -> Q , nullStart ,
memspace -> workspace_double ) ; for ( b_idx_col = 0 ; b_idx_col < mNull ;
b_idx_col ++ ) { for ( idx_row = nVarOrig ; idx_row < qrmanager -> mrows ;
idx_row ++ ) { memspace -> workspace_double [ idx_row + 27 * b_idx_col ] =
qrmanager -> Q [ ( b_idx_col + qrmanager -> ncols ) * 27 + idx_row ] * beta ;
} } lzabwiefrn ( mNull , mNull , qrmanager -> mrows , qrmanager -> Q ,
nullStart , memspace -> workspace_double , cholmanager -> FMat ) ; } static
void ktr41uv2nae ( const real_T H [ 324 ] , bwxng4ee5f * cholmanager , const
ev3ltaqeco * qrmanager , guj4mpcfgf * memspace ) { int32_T mNull ; int32_T
nullStart ; mNull = qrmanager -> mrows - qrmanager -> ncols ; nullStart = 27
* qrmanager -> ncols + 1 ; gyu4d440gr ( qrmanager -> mrows , mNull ,
qrmanager -> mrows , H , qrmanager -> mrows , qrmanager -> Q , nullStart ,
memspace -> workspace_double ) ; lzabwiefrn ( mNull , mNull , qrmanager ->
mrows , qrmanager -> Q , nullStart , memspace -> workspace_double ,
cholmanager -> FMat ) ; } static int32_T aygsb3ylw43 ( int32_T n , real_T A [
729 ] ) { int32_T info ; int32_T idxA1j ; int32_T idxAjj ; real_T ssq ;
int32_T b_j ; int32_T ix ; real_T c ; int32_T iac ; int32_T d ; int32_T ia ;
int32_T b_ix ; int32_T b_iy ; int32_T b_k ; boolean_T exitg1 ; info = 0 ; b_j
= 0 ; exitg1 = false ; while ( ( ! exitg1 ) && ( b_j <= n - 1 ) ) { idxA1j =
b_j * 27 ; idxAjj = idxA1j + b_j ; ssq = 0.0 ; if ( b_j >= 1 ) { b_ix =
idxA1j ; b_iy = idxA1j ; for ( b_k = 0 ; b_k < b_j ; b_k ++ ) { ssq += A [
b_ix ] * A [ b_iy ] ; b_ix ++ ; b_iy ++ ; } } ssq = A [ idxAjj ] - ssq ; if (
ssq > 0.0 ) { ssq = muDoubleScalarSqrt ( ssq ) ; A [ idxAjj ] = ssq ; if (
b_j + 1 < n ) { b_ix = ( n - b_j ) - 2 ; if ( ( b_j != 0 ) && ( b_ix + 1 != 0
) ) { b_iy = idxAjj + 27 ; b_k = ( 27 * b_ix + idxA1j ) + 28 ; for ( iac =
idxA1j + 28 ; iac <= b_k ; iac += 27 ) { ix = idxA1j ; c = 0.0 ; d = ( iac +
b_j ) - 1 ; for ( ia = iac ; ia <= d ; ia ++ ) { c += A [ ia - 1 ] * A [ ix ]
; ix ++ ; } A [ b_iy ] += - c ; b_iy += 27 ; } } ssq = 1.0 / ssq ; idxA1j = (
27 * b_ix + idxAjj ) + 28 ; for ( idxAjj += 27 ; idxAjj + 1 <= idxA1j ;
idxAjj += 27 ) { A [ idxAjj ] *= ssq ; } } b_j ++ ; } else { A [ idxAjj ] =
ssq ; info = b_j + 1 ; exitg1 = true ; } } return info ; } static void
b1nnfethkchne ( bwxng4ee5f * obj , int32_T ndims ) { obj -> ndims = ndims ;
obj -> info = aygsb3ylw43 ( ndims , obj -> FMat ) ; } static void kfjfbltgxr
( int32_T m , int32_T n , const real_T A [ 729 ] , int32_T ia0 , const real_T
x [ 27 ] , real_T y [ 729 ] ) { int32_T ix ; real_T c ; int32_T b_iy ;
int32_T b ; int32_T iac ; int32_T d ; int32_T ia ; if ( m != 0 ) { for ( b_iy
= 0 ; b_iy < n ; b_iy ++ ) { y [ b_iy ] = 0.0 ; } b_iy = 0 ; b = ( n - 1 ) *
27 + ia0 ; for ( iac = ia0 ; iac <= b ; iac += 27 ) { ix = 0 ; c = 0.0 ; d =
( iac + m ) - 1 ; for ( ia = iac ; ia <= d ; ia ++ ) { c += A [ ia - 1 ] * x
[ ix ] ; ix ++ ; } y [ b_iy ] += - c ; b_iy ++ ; } } } static void
av2g5h2imfmz3 ( const bwxng4ee5f * obj , real_T rhs [ 729 ] ) { real_T temp ;
int32_T b_j ; int32_T b_i ; int32_T c ; for ( b_j = 0 ; b_j < obj -> ndims ;
b_j ++ ) { c = b_j * 27 ; temp = rhs [ b_j ] ; for ( b_i = 0 ; b_i < b_j ;
b_i ++ ) { temp -= obj -> FMat [ c + b_i ] * rhs [ b_i ] ; } rhs [ b_j ] =
temp / obj -> FMat [ c + b_j ] ; } clax1tb0ex3 ( obj -> ndims , obj -> FMat ,
rhs ) ; } static void gfjnudvuzd ( int32_T m , int32_T n , const real_T A [
729 ] , int32_T ia0 , const real_T x [ 729 ] , real_T y [ 27 ] ) { int32_T iy
; int32_T ix ; int32_T b ; int32_T iac ; int32_T c ; int32_T ia ; if ( m != 0
) { for ( ix = 0 ; ix < m ; ix ++ ) { y [ ix ] = 0.0 ; } ix = 0 ; b = ( n - 1
) * 27 + ia0 ; for ( iac = ia0 ; iac <= b ; iac += 27 ) { iy = 0 ; c = ( iac
+ m ) - 1 ; for ( ia = iac ; ia <= c ; ia ++ ) { y [ iy ] += A [ ia - 1 ] * x
[ ix ] ; iy ++ ; } ix ++ ; } } } static void dtjf2kakeb ( int32_T n , const
real_T x [ 324 ] , int32_T ix0 , real_T y [ 729 ] , int32_T iy0 ) { int32_T
b_k ; for ( b_k = - 1 ; b_k < n - 1 ; b_k ++ ) { y [ iy0 + b_k ] = x [ ix0 +
b_k ] ; } } static void b1nnfethkchn ( bwxng4ee5f * obj , const real_T A [
324 ] , int32_T ndims , int32_T ldA ) { int32_T b_idx ; obj -> ndims = ndims
; for ( b_idx = 0 ; b_idx < ndims ; b_idx ++ ) { dtjf2kakeb ( ndims , A , ldA
* b_idx + 1 , obj -> FMat , 27 * b_idx + 1 ) ; } obj -> info = aygsb3ylw43 (
ndims , obj -> FMat ) ; } static void av2g5h2imfmz ( const bwxng4ee5f * obj ,
real_T rhs [ 27 ] ) { real_T temp ; int32_T b_j ; int32_T jjA ; int32_T ix ;
int32_T c ; if ( obj -> ndims != 0 ) { for ( b_j = 0 ; b_j < obj -> ndims ;
b_j ++ ) { c = b_j * 27 ; temp = rhs [ b_j ] ; for ( ix = 0 ; ix < b_j ; ix
++ ) { temp -= obj -> FMat [ c + ix ] * rhs [ ix ] ; } rhs [ b_j ] = temp /
obj -> FMat [ c + b_j ] ; } for ( b_j = obj -> ndims - 1 ; b_j + 1 > 0 ; b_j
-- ) { jjA = b_j * 27 + b_j ; rhs [ b_j ] /= obj -> FMat [ jjA ] ; for ( c =
1 ; c - 1 < b_j ; c ++ ) { ix = b_j - c ; rhs [ ix ] -= obj -> FMat [ jjA - c
] * rhs [ b_j ] ; } } } } static void k0tzi03qhroe ( int32_T n , real_T a ,
real_T x [ 27 ] , int32_T ix0 ) { int32_T b ; int32_T k ; b = ( ix0 + n ) - 1
; for ( k = ix0 ; k <= b ; k ++ ) { x [ k - 1 ] *= a ; } } static void
ikm0pinmttl ( const real_T H [ 324 ] , aaxpzhoxuz * solution , guj4mpcfgf *
memspace , const ev3ltaqeco * qrmanager , bwxng4ee5f * cholmanager , const
ecn2fyspui * objective ) { int32_T nVar ; int32_T mNull ; int32_T
nullStartIdx ; int32_T d_idx ; nVar = qrmanager -> mrows - 1 ; mNull =
qrmanager -> mrows - qrmanager -> ncols ; if ( mNull <= 0 ) { for ( mNull = 0
; mNull <= nVar ; mNull ++ ) { solution -> searchDir [ mNull ] = 0.0 ; } }
else { for ( nullStartIdx = 0 ; nullStartIdx <= nVar ; nullStartIdx ++ ) {
solution -> searchDir [ nullStartIdx ] = - objective -> grad [ nullStartIdx ]
; } if ( qrmanager -> ncols <= 0 ) { switch ( objective -> objtype ) { case 5
: break ; case 3 : b1nnfethkchn ( cholmanager , H , qrmanager -> mrows ,
qrmanager -> mrows ) ; if ( cholmanager -> info != 0 ) { solution -> state =
- 6 ; } else { av2g5h2imfmz ( cholmanager , solution -> searchDir ) ; } break
; case 4 : b1nnfethkchn ( cholmanager , H , objective -> nvar , objective ->
nvar ) ; if ( cholmanager -> info != 0 ) { solution -> state = - 6 ; } else {
av2g5h2imfmz ( cholmanager , solution -> searchDir ) ; k0tzi03qhroe (
qrmanager -> mrows - objective -> nvar , 1.0 / objective -> beta , solution
-> searchDir , objective -> nvar + 1 ) ; } break ; } } else { nullStartIdx =
27 * qrmanager -> ncols + 1 ; if ( objective -> objtype == 5 ) { for ( d_idx
= 0 ; d_idx < mNull ; d_idx ++ ) { memspace -> workspace_double [ d_idx ] = -
qrmanager -> Q [ ( qrmanager -> ncols + d_idx ) * 27 + nVar ] ; } gfjnudvuzd
( qrmanager -> mrows , mNull , qrmanager -> Q , nullStartIdx , memspace ->
workspace_double , solution -> searchDir ) ; } else { if ( objective ->
objtype == 3 ) { ktr41uv2nae ( H , cholmanager , qrmanager , memspace ) ; }
else { nm5kzkxjjrx ( objective -> beta , H , objective -> nvar , cholmanager
, qrmanager , memspace ) ; } b1nnfethkchne ( cholmanager , mNull ) ; if (
cholmanager -> info != 0 ) { solution -> state = - 6 ; } else { kfjfbltgxr (
qrmanager -> mrows , mNull , qrmanager -> Q , nullStartIdx , objective ->
grad , memspace -> workspace_double ) ; memcpy ( & rtB . c [ 0 ] , & memspace
-> workspace_double [ 0 ] , 729U * sizeof ( real_T ) ) ; av2g5h2imfmz3 (
cholmanager , rtB . c ) ; memcpy ( & memspace -> workspace_double [ 0 ] , &
rtB . c [ 0 ] , 729U * sizeof ( real_T ) ) ; gfjnudvuzd ( qrmanager -> mrows
, mNull , qrmanager -> Q , nullStartIdx , rtB . c , solution -> searchDir ) ;
} } } } } static real_T hi3mqzewxva3m ( int32_T n , const real_T x [ 27 ] ) {
real_T y ; real_T scale ; real_T absxk ; real_T t ; int32_T k ; y = 0.0 ; if
( n >= 1 ) { if ( n == 1 ) { y = muDoubleScalarAbs ( x [ 0 ] ) ; } else {
scale = 3.3121686421112381E-170 ; for ( k = 0 ; k < n ; k ++ ) { absxk =
muDoubleScalarAbs ( x [ k ] ) ; if ( absxk > scale ) { t = scale / absxk ; y
= y * t * t + 1.0 ; scale = absxk ; } else { t = absxk / scale ; y += t * t ;
} } y = scale * muDoubleScalarSqrt ( y ) ; } } return y ; } static void
lk3yxeq3pou ( const real_T solution_xstar [ 27 ] , const real_T
solution_searchDir [ 27 ] , int32_T workingset_nVar , const real_T
workingset_lb [ 27 ] , const int32_T workingset_indexLB [ 27 ] , const
int32_T workingset_sizes [ 5 ] , const boolean_T workingset_isActiveConstr [
13 ] , const int32_T workingset_nWConstr [ 5 ] , boolean_T isPhaseOne ,
real_T * alpha , boolean_T * newBlocking , int32_T * constrType , int32_T *
constrIdx ) { real_T denomTol ; real_T phaseOneCorrectionX ; real_T
phaseOneCorrectionP ; real_T pk_corrected ; real_T ratio ; int32_T b_idx ; *
alpha = 1.0E+30 ; * newBlocking = false ; * constrType = 0 ; * constrIdx = 0
; denomTol = 2.2204460492503131E-13 * hi3mqzewxva3m ( workingset_nVar ,
solution_searchDir ) ; if ( workingset_nWConstr [ 3 ] < workingset_sizes [ 3
] ) { phaseOneCorrectionX = solution_xstar [ workingset_nVar - 1 ] * ( real_T
) isPhaseOne ; phaseOneCorrectionP = solution_searchDir [ workingset_nVar - 1
] * ( real_T ) isPhaseOne ; for ( b_idx = 0 ; b_idx <= workingset_sizes [ 3 ]
- 2 ; b_idx ++ ) { pk_corrected = - solution_searchDir [ workingset_indexLB [
b_idx ] - 1 ] - phaseOneCorrectionP ; if ( ( pk_corrected > denomTol ) && ( !
workingset_isActiveConstr [ b_idx + 4 ] ) ) { ratio = ( - solution_xstar [
workingset_indexLB [ b_idx ] - 1 ] - workingset_lb [ workingset_indexLB [
b_idx ] - 1 ] ) - phaseOneCorrectionX ; ratio = muDoubleScalarMin (
muDoubleScalarAbs ( ratio ) , 1.0E-6 - ratio ) / pk_corrected ; if ( ratio <
* alpha ) { * alpha = ratio ; * constrType = 4 ; * constrIdx = b_idx + 1 ; *
newBlocking = true ; } } } if ( ( - solution_searchDir [ workingset_indexLB [
workingset_sizes [ 3 ] - 1 ] - 1 ] > denomTol ) && ( !
workingset_isActiveConstr [ workingset_sizes [ 3 ] + 3 ] ) ) { ratio = -
solution_xstar [ workingset_indexLB [ workingset_sizes [ 3 ] - 1 ] - 1 ] -
workingset_lb [ workingset_indexLB [ workingset_sizes [ 3 ] - 1 ] - 1 ] ;
ratio = muDoubleScalarMin ( muDoubleScalarAbs ( ratio ) , 1.0E-6 - ratio ) /
- solution_searchDir [ workingset_indexLB [ workingset_sizes [ 3 ] - 1 ] - 1
] ; if ( ratio < * alpha ) { * alpha = ratio ; * constrType = 4 ; * constrIdx
= workingset_sizes [ 3 ] ; * newBlocking = true ; } } } if ( ! isPhaseOne ) {
* newBlocking = ( ( ( ! * newBlocking ) || ( ! ( * alpha > 1.0 ) ) ) && ( *
newBlocking ) ) ; * alpha = muDoubleScalarMin ( * alpha , 1.0 ) ; } } static
void gohzdn0c145 ( aaxpzhoxuz * solution , const ecn2fyspui * objective ) {
if ( objective -> objtype == 5 ) { if ( hi3mqzewxva3m ( objective -> nvar ,
solution -> searchDir ) > 100.0 * ( real_T ) objective -> nvar *
1.4901161193847656E-8 ) { solution -> state = 3 ; } else { solution -> state
= 4 ; } } } static void imaznvrexor ( nuprfhnilo * obj , int32_T TYPE ,
int32_T idx_local ) { int32_T idx_global ; int32_T idx_bnd_local ; int32_T
idx ; obj -> nWConstr [ TYPE - 1 ] ++ ; obj -> isActiveConstr [ ( obj ->
isActiveIdx [ TYPE - 1 ] + idx_local ) - 2 ] = true ; obj -> nActiveConstr ++
; obj -> Wid [ obj -> nActiveConstr - 1 ] = TYPE ; obj -> Wlocalidx [ obj ->
nActiveConstr - 1 ] = idx_local ; idx_global = obj -> nActiveConstr - 1 ; if
( TYPE == 5 ) { idx_bnd_local = 0 ; obj -> bwset [ obj -> nActiveConstr - 1 ]
= obj -> ub [ - 1 ] ; } else { idx_bnd_local = obj -> indexLB [ idx_local - 1
] ; obj -> bwset [ obj -> nActiveConstr - 1 ] = obj -> lb [ obj -> indexLB [
idx_local - 1 ] - 1 ] ; } for ( idx = 0 ; idx <= idx_bnd_local - 2 ; idx ++ )
{ obj -> ATwset [ idx + 27 * idx_global ] = 0.0 ; } obj -> ATwset [ (
idx_bnd_local + 27 * ( obj -> nActiveConstr - 1 ) ) - 1 ] = ( real_T ) ( TYPE
== 5 ) * 2.0 - 1.0 ; while ( idx_bnd_local + 1 <= obj -> nVar ) { obj ->
ATwset [ idx_bnd_local + 27 * idx_global ] = 0.0 ; idx_bnd_local ++ ; }
switch ( obj -> probType ) { case 3 : case 2 : break ; default : obj ->
ATwset [ ( obj -> nVar + 27 * ( obj -> nActiveConstr - 1 ) ) - 1 ] = - 1.0 ;
break ; } } static void o2tvol2vacn ( nuprfhnilo * obj , int32_T idx_local )
{ obj -> nWConstr [ 2 ] ++ ; obj -> isActiveConstr [ ( obj -> isActiveIdx [ 2
] + idx_local ) - 2 ] = true ; obj -> nActiveConstr ++ ; obj -> Wid [ obj ->
nActiveConstr - 1 ] = 3 ; obj -> Wlocalidx [ obj -> nActiveConstr - 1 ] =
idx_local ; } static void kzdcud2kf2gk ( int32_T n , real_T a , const real_T
x [ 27 ] , real_T y [ 27 ] ) { int32_T k ; if ( ( n >= 1 ) && ( ! ( a == 0.0
) ) ) { for ( k = 0 ; k < n ; k ++ ) { y [ k ] += a * x [ k ] ; } } } static
void eu5wfkvmpbt ( real_T workspace [ 729 ] , aaxpzhoxuz * solution , const
ecn2fyspui * objective , const ev3ltaqeco * qrmanager ) { real_T tol ;
boolean_T nonDegenerate ; int32_T c_idx ; boolean_T guard1 = false ; if (
qrmanager -> ncols > 0 ) { tol = 100.0 * ( real_T ) qrmanager -> mrows *
2.2204460492503131E-16 ; nonDegenerate = ( ( qrmanager -> mrows > 0 ) && (
qrmanager -> ncols > 0 ) ) ; if ( nonDegenerate ) { c_idx = qrmanager ->
ncols ; guard1 = false ; if ( qrmanager -> mrows < qrmanager -> ncols ) {
while ( ( c_idx > qrmanager -> mrows ) && ( muDoubleScalarAbs ( qrmanager ->
QR [ ( ( c_idx - 1 ) * 27 + qrmanager -> mrows ) - 1 ] ) >= tol ) ) { c_idx
-- ; } nonDegenerate = ( c_idx == qrmanager -> mrows ) ; if ( ! nonDegenerate
) { } else { guard1 = true ; } } else { guard1 = true ; } if ( guard1 ) {
while ( ( c_idx >= 1 ) && ( muDoubleScalarAbs ( qrmanager -> QR [ ( ( c_idx -
1 ) * 27 + c_idx ) - 1 ] ) >= tol ) ) { c_idx -- ; } nonDegenerate = ( c_idx
== 0 ) ; } } if ( ! nonDegenerate ) { solution -> state = - 7 ; } else {
ap4unorwbo ( qrmanager -> mrows , qrmanager -> ncols , qrmanager -> Q ,
objective -> grad , workspace ) ; clax1tb0ex3 ( qrmanager -> ncols ,
qrmanager -> QR , workspace ) ; for ( c_idx = 0 ; c_idx < qrmanager -> ncols
; c_idx ++ ) { solution -> lambda [ c_idx ] = - workspace [ c_idx ] ; } } } }
static int32_T e2cygyw51bl ( const real_T solution_lambda [ 13 ] , int32_T
workingset_nActiveConstr , const int32_T workingset_nWConstr [ 5 ] ) {
int32_T idxMinLambda ; real_T minLambda ; int32_T idx ; idxMinLambda = 0 ;
minLambda = 0.0 ; for ( idx = workingset_nWConstr [ 0 ] + workingset_nWConstr
[ 1 ] ; idx < workingset_nActiveConstr ; idx ++ ) { if ( solution_lambda [
idx ] < minLambda ) { minLambda = solution_lambda [ idx ] ; idxMinLambda =
idx + 1 ; } } return idxMinLambda ; } static void ovt5tsljpxd ( int32_T *
activeSetChangeID , const real_T f [ 27 ] , aaxpzhoxuz * solution ,
guj4mpcfgf * memspace , const ecn2fyspui * objective , nuprfhnilo *
workingset , ev3ltaqeco * qrmanager , real_T options_ObjectiveLimit , int32_T
runTimeOptions_MaxIterations , boolean_T updateFval ) { real_T b ; real_T d [
27 ] ; boolean_T nonDegenerateWset ; real_T constrViolation_new ; int32_T
b_idx ; solution -> iterations ++ ; if ( ( solution -> iterations >=
runTimeOptions_MaxIterations ) && ( ( solution -> state != 1 ) || ( objective
-> objtype == 5 ) ) ) { solution -> state = 0 ; } if ( lte02cae5i ( solution
-> iterations ) == 0 ) { b = gtxetnnm2kf5h2 ( workingset , solution -> xstar
) ; solution -> maxConstr = b ; if ( b > 1.0E-6 ) { bt1s243f5e ( objective ->
nvar , solution -> xstar , solution -> searchDir ) ; memcpy ( & d [ 0 ] , &
solution -> searchDir [ 0 ] , 27U * sizeof ( real_T ) ) ; nonDegenerateWset =
g3dskjwjcwp ( memspace -> workspace_double , d , workingset , qrmanager ) ;
memcpy ( & solution -> searchDir [ 0 ] , & d [ 0 ] , 27U * sizeof ( real_T )
) ; if ( ( ! nonDegenerateWset ) && ( solution -> state != 0 ) ) { solution
-> state = - 2 ; } * activeSetChangeID = 0 ; constrViolation_new =
gtxetnnm2kf5h2 ( workingset , d ) ; if ( constrViolation_new < b ) { for (
b_idx = 0 ; b_idx < objective -> nvar ; b_idx ++ ) { solution -> xstar [
b_idx ] = d [ b_idx ] ; } solution -> maxConstr = constrViolation_new ; } } }
if ( ( options_ObjectiveLimit > ( rtMinusInf ) ) && updateFval ) { b =
c2n2v1sbdis ( objective , memspace -> workspace_double , f , solution ->
xstar ) ; solution -> fstar = b ; if ( ( b < options_ObjectiveLimit ) && ( (
solution -> state != 0 ) || ( objective -> objtype != 5 ) ) ) { solution ->
state = 2 ; } } } static void hdbhhxzsvvr ( const real_T H [ 324 ] , const
real_T f [ 27 ] , aaxpzhoxuz * solution , guj4mpcfgf * memspace , nuprfhnilo
* workingset , ev3ltaqeco * qrmanager , bwxng4ee5f * cholmanager , ecn2fyspui
* objective , real_T options_StepTolerance , real_T options_ObjectiveLimit ,
int32_T runTimeOptions_MaxIterations ) { boolean_T subProblemChanged ;
boolean_T updateFval ; int32_T activeSetChangeID ; int32_T nVar ; int32_T
globalActiveConstrIdx ; real_T normDelta ; int32_T idxMinLambda ; int32_T
TYPE ; int32_T idx_local ; int32_T exitg1 ; boolean_T guard1 = false ;
subProblemChanged = true ; updateFval = true ; activeSetChangeID = 0 ; TYPE =
objective -> objtype ; nVar = workingset -> nVar ; globalActiveConstrIdx = 0
; h35xb0f5lhr ( objective , H , f , solution -> xstar ) ; solution -> fstar =
c2n2v1sbdis ( objective , memspace -> workspace_double , f , solution ->
xstar ) ; if ( solution -> iterations < runTimeOptions_MaxIterations ) {
solution -> state = - 5 ; } else { solution -> state = 0 ; } pgwb0irvmr ( 13
, solution -> lambda ) ; do { exitg1 = 0 ; if ( solution -> state == - 5 ) {
guard1 = false ; if ( subProblemChanged ) { switch ( activeSetChangeID ) {
case 1 : oidsdg2ozfj ( qrmanager , workingset -> ATwset , 27 * ( workingset
-> nActiveConstr - 1 ) + 1 ) ; break ; case - 1 : j1hgrtcknic ( qrmanager ,
globalActiveConstrIdx ) ; break ; default : h0ncymex4zmtv ( qrmanager ,
workingset -> ATwset , nVar , workingset -> nActiveConstr ) ; dj14ojmbavj (
qrmanager , qrmanager -> mrows ) ; break ; } ikm0pinmttl ( H , solution ,
memspace , qrmanager , cholmanager , objective ) ; if ( solution -> state !=
- 5 ) { exitg1 = 1 ; } else { normDelta = hi3mqzewxva3m ( nVar , solution ->
searchDir ) ; guard1 = true ; } } else { oklow4km22 ( nVar , solution ->
searchDir ) ; normDelta = 0.0 ; guard1 = true ; } if ( guard1 ) { if ( ( !
subProblemChanged ) || ( normDelta < options_StepTolerance ) || ( workingset
-> nActiveConstr >= nVar ) ) { eu5wfkvmpbt ( memspace -> workspace_double ,
solution , objective , qrmanager ) ; if ( solution -> state != - 7 ) {
idxMinLambda = e2cygyw51bl ( solution -> lambda , workingset -> nActiveConstr
, workingset -> nWConstr ) ; if ( idxMinLambda == 0 ) { solution -> state = 1
; } else { activeSetChangeID = - 1 ; globalActiveConstrIdx = idxMinLambda ;
subProblemChanged = true ; pghmkcqdjs5 ( workingset , idxMinLambda ) ;
solution -> lambda [ idxMinLambda - 1 ] = 0.0 ; } } else { idxMinLambda =
workingset -> nActiveConstr ; activeSetChangeID = 0 ; globalActiveConstrIdx =
workingset -> nActiveConstr ; subProblemChanged = true ; pghmkcqdjs5 (
workingset , workingset -> nActiveConstr ) ; solution -> lambda [
idxMinLambda - 1 ] = 0.0 ; } updateFval = false ; } else { lk3yxeq3pou (
solution -> xstar , solution -> searchDir , workingset -> nVar , workingset
-> lb , workingset -> indexLB , workingset -> sizes , workingset ->
isActiveConstr , workingset -> nWConstr , TYPE == 5 , & normDelta , &
updateFval , & idxMinLambda , & idx_local ) ; if ( updateFval ) { switch (
idxMinLambda ) { case 3 : o2tvol2vacn ( workingset , idx_local ) ; break ;
case 4 : imaznvrexor ( workingset , 4 , idx_local ) ; break ; default :
imaznvrexor ( workingset , 5 , idx_local ) ; break ; } activeSetChangeID = 1
; } else { gohzdn0c145 ( solution , objective ) ; subProblemChanged = false ;
if ( workingset -> nActiveConstr == 0 ) { solution -> state = 1 ; } }
kzdcud2kf2gk ( nVar , normDelta , solution -> searchDir , solution -> xstar )
; h35xb0f5lhr ( objective , H , f , solution -> xstar ) ; updateFval = true ;
} ovt5tsljpxd ( & activeSetChangeID , f , solution , memspace , objective ,
workingset , qrmanager , options_ObjectiveLimit ,
runTimeOptions_MaxIterations , updateFval ) ; } } else { if ( ! updateFval )
{ solution -> fstar = c2n2v1sbdis ( objective , memspace -> workspace_double
, f , solution -> xstar ) ; } exitg1 = 1 ; } } while ( exitg1 == 0 ) ; }
static void pixlhadu0l4 ( ecn2fyspui * obj ) { obj -> objtype = obj ->
prev_objtype ; obj -> nvar = obj -> prev_nvar ; obj -> hasLinear = obj ->
prev_hasLinear ; } static void bs5h4awdzde ( const real_T H [ 324 ] , const
real_T f [ 27 ] , aaxpzhoxuz * solution , guj4mpcfgf * memspace , nuprfhnilo
* workingset , ev3ltaqeco * qrmanager , bwxng4ee5f * cholmanager , ecn2fyspui
* objective , e2ucunpqcp * options , const e2ucunpqcp * runTimeOptions ) {
int32_T PROBTYPE_ORIG ; int32_T nVar ; int32_T nVarP1 ; int32_T PHASEONE ;
boolean_T exitg1 ; PROBTYPE_ORIG = workingset -> probType ; nVar = workingset
-> nVar ; nVarP1 = workingset -> nVar ; solution -> xstar [ workingset ->
nVar ] = solution -> maxConstr + 1.0 ; if ( workingset -> probType == 3 ) {
PHASEONE = 1 ; } else { PHASEONE = 4 ; } hmiqzf5p5qb ( workingset ) ;
gzr1v3zdr1h ( workingset , PHASEONE ) ; bbhkemzkfna ( objective , nVarP1 + 1
) ; options -> ObjectiveLimit = 1.0E-6 ; options -> StepTolerance =
1.4901161193847657E-10 ; solution -> fstar = aqnjqmfea4l ( objective ,
memspace -> workspace_double , H , f , solution -> xstar ) ; solution ->
state = 5 ; hdbhhxzsvvr ( H , f , solution , memspace , workingset ,
qrmanager , cholmanager , objective , options -> StepTolerance , options ->
ObjectiveLimit , runTimeOptions -> MaxIterations ) ; if ( workingset ->
isActiveConstr [ workingset -> sizes [ 3 ] + 3 ] ) { PHASEONE = 5 ; exitg1 =
false ; while ( ( ! exitg1 ) && ( PHASEONE <= workingset -> nActiveConstr ) )
{ if ( ( workingset -> Wid [ PHASEONE - 1 ] == 4 ) && ( workingset ->
Wlocalidx [ PHASEONE - 1 ] == workingset -> sizes [ 3 ] ) ) { pghmkcqdjs5 (
workingset , PHASEONE ) ; exitg1 = true ; } else { PHASEONE ++ ; } } }
PHASEONE = workingset -> nActiveConstr ; while ( ( PHASEONE > 4 ) && (
PHASEONE > nVar ) ) { pghmkcqdjs5 ( workingset , PHASEONE ) ; PHASEONE -- ; }
solution -> maxConstr = solution -> xstar [ nVarP1 ] ; gzr1v3zdr1h (
workingset , PROBTYPE_ORIG ) ; pixlhadu0l4 ( objective ) ; options ->
ObjectiveLimit = - 1.0E+20 ; options -> StepTolerance = 1.0E-6 ; } static
void kju12naicn3sk ( const real_T H [ 324 ] , const real_T f [ 27 ] ,
aaxpzhoxuz * solution , guj4mpcfgf * memspace , nuprfhnilo * workingset ,
ev3ltaqeco * qrmanager , bwxng4ee5f * cholmanager , ecn2fyspui * objective ,
e2ucunpqcp * options , e2ucunpqcp * runTimeOptions ) { int32_T nVar ; real_T
b ; aaxpzhoxuz b_solution ; solution -> iterations = 0 ; runTimeOptions ->
RemainFeasible = true ; nVar = workingset -> nVar ; njpga5wb4z1 ( solution ,
workingset -> lb , workingset -> indexLB , workingset -> sizes , workingset
-> isActiveConstr ) ; bw4msbp20mk ( solution , memspace , workingset ,
qrmanager ) ; if ( solution -> state >= 0 ) { solution -> iterations = 0 ; b
= gtxetnnm2kf5h2 ( workingset , solution -> xstar ) ; solution -> maxConstr =
b ; if ( b > 1.0E-6 ) { bs5h4awdzde ( H , f , solution , memspace ,
workingset , qrmanager , cholmanager , objective , options , runTimeOptions )
; if ( solution -> state == 0 ) { } else { b = gtxetnnm2kf5h2 ( workingset ,
solution -> xstar ) ; solution -> maxConstr = b ; if ( b > 1.0E-6 ) {
pgwb0irvmr ( 13 , solution -> lambda ) ; solution -> fstar = aqnjqmfea4l (
objective , memspace -> workspace_double , H , f , solution -> xstar ) ;
solution -> state = - 2 ; } else { if ( b > 0.0 ) { bt1s243f5e ( nVar ,
solution -> xstar , solution -> searchDir ) ; b_solution = * solution ;
bw4msbp20mk ( & b_solution , memspace , workingset , qrmanager ) ; * solution
= b_solution ; b = gtxetnnm2kf5h2 ( workingset , b_solution . xstar ) ; if (
b >= b_solution . maxConstr ) { solution -> maxConstr = b ; memcpy ( &
solution -> xstar [ 0 ] , & b_solution . xstar [ 0 ] , 27U * sizeof ( real_T
) ) ; bt1s243f5e ( nVar , b_solution . searchDir , solution -> xstar ) ; } }
hdbhhxzsvvr ( H , f , solution , memspace , workingset , qrmanager ,
cholmanager , objective , options -> StepTolerance , options ->
ObjectiveLimit , runTimeOptions -> MaxIterations ) ; } } } else { hdbhhxzsvvr
( H , f , solution , memspace , workingset , qrmanager , cholmanager ,
objective , options -> StepTolerance , options -> ObjectiveLimit ,
runTimeOptions -> MaxIterations ) ; } } } static void mo24gowvupk (
nuprfhnilo * WorkingSet , const real_T TrialState_cEq [ 4 ] ) { WorkingSet ->
beq [ 0 ] = - TrialState_cEq [ 0 ] ; WorkingSet -> bwset [ 0 ] = WorkingSet
-> beq [ 0 ] ; WorkingSet -> beq [ 1 ] = - TrialState_cEq [ 1 ] ; WorkingSet
-> bwset [ 1 ] = WorkingSet -> beq [ 1 ] ; WorkingSet -> beq [ 2 ] = -
TrialState_cEq [ 2 ] ; WorkingSet -> bwset [ 2 ] = WorkingSet -> beq [ 2 ] ;
WorkingSet -> beq [ 3 ] = - TrialState_cEq [ 3 ] ; WorkingSet -> bwset [ 3 ]
= WorkingSet -> beq [ 3 ] ; } static void lewrggdamtv ( nuprfhnilo * obj ,
int32_T idx_local ) { int32_T totalEq ; int32_T iAeq0 ; int32_T iAw0 ;
int32_T b_idx ; totalEq = obj -> nWConstr [ 0 ] + obj -> nWConstr [ 1 ] ; if
( ( obj -> nActiveConstr == totalEq ) && ( idx_local > obj -> nWConstr [ 1 ]
) ) { obj -> nWConstr [ 1 ] ++ ; obj -> isActiveConstr [ ( obj -> isActiveIdx
[ 1 ] + idx_local ) - 2 ] = true ; obj -> nActiveConstr ++ ; obj -> Wid [ obj
-> nActiveConstr - 1 ] = 2 ; obj -> Wlocalidx [ obj -> nActiveConstr - 1 ] =
idx_local ; iAeq0 = ( idx_local - 1 ) * 27 ; iAw0 = ( obj -> nActiveConstr -
1 ) * 27 ; for ( totalEq = 1 ; totalEq - 1 < obj -> nVar ; totalEq ++ ) { obj
-> ATwset [ ( iAw0 + totalEq ) - 1 ] = obj -> Aeq [ ( iAeq0 + totalEq ) - 1 ]
; } obj -> bwset [ obj -> nActiveConstr - 1 ] = obj -> beq [ idx_local - 1 ]
; } else { obj -> nActiveConstr ++ ; iAeq0 = obj -> nActiveConstr - 1 ; obj
-> Wid [ obj -> nActiveConstr - 1 ] = obj -> Wid [ totalEq ] ; obj ->
Wlocalidx [ iAeq0 ] = obj -> Wlocalidx [ totalEq ] ; for ( iAw0 = 0 ; iAw0 <
obj -> nVar ; iAw0 ++ ) { obj -> ATwset [ iAw0 + 27 * iAeq0 ] = obj -> ATwset
[ 27 * totalEq + iAw0 ] ; } obj -> bwset [ iAeq0 ] = obj -> bwset [ totalEq ]
; obj -> nWConstr [ 1 ] ++ ; obj -> isActiveConstr [ idx_local - 1 ] = true ;
obj -> Wid [ totalEq ] = 2 ; obj -> Wlocalidx [ totalEq ] = idx_local ; iAeq0
= ( idx_local - 1 ) * 27 ; iAw0 = 27 * totalEq ; for ( b_idx = 1 ; b_idx - 1
< obj -> nVar ; b_idx ++ ) { obj -> ATwset [ ( iAw0 + b_idx ) - 1 ] = obj ->
Aeq [ ( iAeq0 + b_idx ) - 1 ] ; } obj -> bwset [ totalEq ] = obj -> beq [
idx_local - 1 ] ; } } static boolean_T nbrvt40jayo ( const real_T Hessian [
324 ] , const real_T grad [ 27 ] , aaxpzhoxuz * TrialState , guj4mpcfgf *
memspace , nuprfhnilo * WorkingSet , ev3ltaqeco * QRManager , bwxng4ee5f *
CholManager , ecn2fyspui * QPObjective , const e2ucunpqcp * qpoptions ) {
boolean_T success ; int32_T nVar ; real_T oldDirIdx ; int32_T b_i ;
e2ucunpqcp qpoptions_p ; e2ucunpqcp qpoptions_e ; nVar = WorkingSet -> nVar ;
fmazrorwnc ( WorkingSet -> nVar , TrialState -> xstarsqp_old , TrialState ->
xstarsqp ) ; for ( b_i = 0 ; b_i < nVar ; b_i ++ ) { TrialState ->
socDirection [ b_i ] = TrialState -> xstar [ b_i ] ; } mzehz0b4kv ( 13 ,
TrialState -> lambda , TrialState -> lambda_old ) ; rtB . b_WorkingSet = *
WorkingSet ; ozqnsknwek4 ( & rtB . b_WorkingSet , TrialState -> cEq ,
TrialState -> searchDir ) ; dmpzqvndba ( WorkingSet -> nVar , TrialState ->
xstarsqp , TrialState -> xstar ) ; qpoptions_p = * qpoptions ; qpoptions_e =
* qpoptions ; kju12naicn3sk ( Hessian , grad , TrialState , memspace , & rtB
. b_WorkingSet , QRManager , CholManager , QPObjective , & qpoptions_p , &
qpoptions_e ) ; * WorkingSet = rtB . b_WorkingSet ; while ( ( WorkingSet ->
mEqRemoved > 0 ) && ( WorkingSet -> indexEqRemoved [ WorkingSet -> mEqRemoved
- 1 ] >= 1 ) ) { lewrggdamtv ( WorkingSet , WorkingSet -> indexEqRemoved [
WorkingSet -> mEqRemoved - 1 ] ) ; WorkingSet -> mEqRemoved -- ; } for ( b_i
= 0 ; b_i < nVar ; b_i ++ ) { oldDirIdx = TrialState -> socDirection [ b_i ]
; TrialState -> socDirection [ b_i ] = TrialState -> xstar [ b_i ] -
TrialState -> socDirection [ b_i ] ; TrialState -> xstar [ b_i ] = oldDirIdx
; } success = ( hi3mqzewxva3m ( nVar , TrialState -> socDirection ) <= 2.0 *
hi3mqzewxva3m ( nVar , TrialState -> xstar ) ) ; mo24gowvupk ( WorkingSet ,
TrialState -> cEq ) ; if ( ! success ) { mzehz0b4kv ( 13 , TrialState ->
lambda_old , TrialState -> lambda ) ; } else { cbymjegfoxs ( TrialState ->
lambda , WorkingSet -> nActiveConstr , WorkingSet -> sizes , WorkingSet ->
isActiveIdx , WorkingSet -> Wid , WorkingSet -> Wlocalidx , memspace ->
workspace_double ) ; } return success ; } static void epc3kbrspvag (
kthfgfhdov * obj , real_T fval , const real_T eq_workspace [ 4 ] , int32_T
sqpiter , real_T qpval ) { real_T penaltyParamTrial ; real_T
constrViolationEq ; real_T linearizedConstrViolPrev ; penaltyParamTrial = obj
-> penaltyParam ; constrViolationEq = ( ( muDoubleScalarAbs ( eq_workspace [
0 ] ) + muDoubleScalarAbs ( eq_workspace [ 1 ] ) ) + muDoubleScalarAbs (
eq_workspace [ 2 ] ) ) + muDoubleScalarAbs ( eq_workspace [ 3 ] ) ;
linearizedConstrViolPrev = obj -> linearizedConstrViol ; obj ->
linearizedConstrViol = 0.0 ; linearizedConstrViolPrev += constrViolationEq ;
if ( ( linearizedConstrViolPrev > 2.2204460492503131E-16 ) && ( qpval > 0.0 )
) { if ( fval == 0.0 ) { penaltyParamTrial = 1.0 ; } else { penaltyParamTrial
= 1.5 ; } penaltyParamTrial = penaltyParamTrial * qpval /
linearizedConstrViolPrev ; } if ( penaltyParamTrial < obj -> penaltyParam ) {
obj -> phi = penaltyParamTrial * constrViolationEq + fval ; if ( (
penaltyParamTrial * obj -> initConstrViolationEq + obj -> initFval ) - obj ->
phi > ( real_T ) obj -> nPenaltyDecreases * obj -> threshold ) { obj ->
nPenaltyDecreases ++ ; if ( ( obj -> nPenaltyDecreases << 1 ) > sqpiter ) {
obj -> threshold *= 10.0 ; } obj -> penaltyParam = muDoubleScalarMax (
penaltyParamTrial , 1.0E-10 ) ; } else { obj -> phi = obj -> penaltyParam *
constrViolationEq + fval ; } } else { obj -> penaltyParam = muDoubleScalarMax
( penaltyParamTrial , 1.0E-10 ) ; obj -> phi = muDoubleScalarMax (
penaltyParamTrial , 1.0E-10 ) * constrViolationEq + fval ; } obj ->
phiPrimePlus = muDoubleScalarMin ( qpval - obj -> penaltyParam *
constrViolationEq , 0.0 ) ; } static void efh512zbx11 ( const real_T Hessian
[ 324 ] , const real_T grad [ 27 ] , aaxpzhoxuz * TrialState , kthfgfhdov *
MeritFunction , guj4mpcfgf * memspace , nuprfhnilo * WorkingSet , ev3ltaqeco
* QRManager , bwxng4ee5f * CholManager , ecn2fyspui * QPObjective , const
e2ucunpqcp * qpoptions ) { boolean_T nonlinEqRemoved ; e2ucunpqcp qpoptions_p
; e2ucunpqcp qpoptions_e ; qpoptions_p = * qpoptions ; qpoptions_e = *
qpoptions ; kju12naicn3sk ( Hessian , grad , TrialState , memspace ,
WorkingSet , QRManager , CholManager , QPObjective , & qpoptions_p , &
qpoptions_e ) ; if ( TrialState -> state > 0 ) { epc3kbrspvag ( MeritFunction
, TrialState -> sqpFval , TrialState -> cEq , TrialState -> sqpIterations ,
TrialState -> fstar ) ; } cbymjegfoxs ( TrialState -> lambda , WorkingSet ->
nActiveConstr , WorkingSet -> sizes , WorkingSet -> isActiveIdx , WorkingSet
-> Wid , WorkingSet -> Wlocalidx , memspace -> workspace_double ) ;
nonlinEqRemoved = ( WorkingSet -> mEqRemoved > 0 ) ; while ( ( WorkingSet ->
mEqRemoved > 0 ) && ( WorkingSet -> indexEqRemoved [ WorkingSet -> mEqRemoved
- 1 ] >= 1 ) ) { lewrggdamtv ( WorkingSet , WorkingSet -> indexEqRemoved [
WorkingSet -> mEqRemoved - 1 ] ) ; WorkingSet -> mEqRemoved -- ; } if (
nonlinEqRemoved ) { WorkingSet -> Wlocalidx [ 0 ] = 1 ; WorkingSet ->
Wlocalidx [ 1 ] = 2 ; WorkingSet -> Wlocalidx [ 2 ] = 3 ; WorkingSet ->
Wlocalidx [ 3 ] = 4 ; } } static void gkuyiknb3ak ( ecn2fyspui * obj ,
int32_T numQuadVars , real_T beta , real_T rho ) { obj -> hasLinear = true ;
obj -> nvar = numQuadVars ; obj -> objtype = 4 ; obj -> beta = beta ; obj ->
rho = rho ; } static void oo03adww3io ( int32_T nVarOrig , nuprfhnilo *
WorkingSet , aaxpzhoxuz * TrialState , guj4mpcfgf * memspace ) { int32_T
mLBOrig ; int32_T ix ; real_T c ; int32_T b ; int32_T ia ; mLBOrig =
WorkingSet -> sizes [ 3 ] - 7 ; memspace -> workspace_double [ 0 ] =
WorkingSet -> beq [ 0 ] ; memspace -> workspace_double [ 1 ] = WorkingSet ->
beq [ 1 ] ; memspace -> workspace_double [ 2 ] = WorkingSet -> beq [ 2 ] ;
memspace -> workspace_double [ 3 ] = WorkingSet -> beq [ 3 ] ; memspace ->
workspace_double [ 0 ] = - memspace -> workspace_double [ 0 ] ; memspace ->
workspace_double [ 1 ] = - memspace -> workspace_double [ 1 ] ; memspace ->
workspace_double [ 2 ] = - memspace -> workspace_double [ 2 ] ; memspace ->
workspace_double [ 3 ] = - memspace -> workspace_double [ 3 ] ; ix = 0 ; c =
0.0 ; for ( ia = 0 ; ia < nVarOrig ; ia ++ ) { c += WorkingSet -> Aeq [ ia ]
* TrialState -> xstar [ ix ] ; ix ++ ; } memspace -> workspace_double [ 0 ]
+= c ; ix = 0 ; c = 0.0 ; b = nVarOrig + 27 ; for ( ia = 27 ; ia < b ; ia ++
) { c += WorkingSet -> Aeq [ ia ] * TrialState -> xstar [ ix ] ; ix ++ ; }
memspace -> workspace_double [ 1 ] += c ; ix = 0 ; c = 0.0 ; b = nVarOrig +
54 ; for ( ia = 54 ; ia < b ; ia ++ ) { c += WorkingSet -> Aeq [ ia ] *
TrialState -> xstar [ ix ] ; ix ++ ; } memspace -> workspace_double [ 2 ] +=
c ; ix = 0 ; c = 0.0 ; b = nVarOrig + 81 ; for ( ia = 81 ; ia < b ; ia ++ ) {
c += WorkingSet -> Aeq [ ia ] * TrialState -> xstar [ ix ] ; ix ++ ; }
memspace -> workspace_double [ 3 ] += c ; if ( memspace -> workspace_double [
0 ] <= 0.0 ) { TrialState -> xstar [ nVarOrig ] = 0.0 ; TrialState -> xstar [
nVarOrig + 4 ] = - memspace -> workspace_double [ 0 ] ; imaznvrexor (
WorkingSet , 4 , mLBOrig ) ; if ( memspace -> workspace_double [ 0 ] >= -
1.0E-6 ) { imaznvrexor ( WorkingSet , 4 , mLBOrig + 4 ) ; } } else {
TrialState -> xstar [ nVarOrig ] = memspace -> workspace_double [ 0 ] ;
TrialState -> xstar [ nVarOrig + 4 ] = 0.0 ; imaznvrexor ( WorkingSet , 4 ,
mLBOrig + 4 ) ; if ( memspace -> workspace_double [ 0 ] <= 1.0E-6 ) {
imaznvrexor ( WorkingSet , 4 , mLBOrig ) ; } } if ( memspace ->
workspace_double [ 1 ] <= 0.0 ) { TrialState -> xstar [ nVarOrig + 1 ] = 0.0
; TrialState -> xstar [ nVarOrig + 5 ] = - memspace -> workspace_double [ 1 ]
; imaznvrexor ( WorkingSet , 4 , mLBOrig + 1 ) ; if ( memspace ->
workspace_double [ 1 ] >= - 1.0E-6 ) { imaznvrexor ( WorkingSet , 4 , mLBOrig
+ 5 ) ; } } else { TrialState -> xstar [ nVarOrig + 1 ] = memspace ->
workspace_double [ 1 ] ; TrialState -> xstar [ nVarOrig + 5 ] = 0.0 ;
imaznvrexor ( WorkingSet , 4 , mLBOrig + 5 ) ; if ( memspace ->
workspace_double [ 1 ] <= 1.0E-6 ) { imaznvrexor ( WorkingSet , 4 , mLBOrig +
1 ) ; } } if ( memspace -> workspace_double [ 2 ] <= 0.0 ) { TrialState ->
xstar [ nVarOrig + 2 ] = 0.0 ; TrialState -> xstar [ nVarOrig + 6 ] = -
memspace -> workspace_double [ 2 ] ; imaznvrexor ( WorkingSet , 4 , mLBOrig +
2 ) ; if ( memspace -> workspace_double [ 2 ] >= - 1.0E-6 ) { imaznvrexor (
WorkingSet , 4 , mLBOrig + 6 ) ; } } else { TrialState -> xstar [ nVarOrig +
2 ] = memspace -> workspace_double [ 2 ] ; TrialState -> xstar [ nVarOrig + 6
] = 0.0 ; imaznvrexor ( WorkingSet , 4 , mLBOrig + 6 ) ; if ( memspace ->
workspace_double [ 2 ] <= 1.0E-6 ) { imaznvrexor ( WorkingSet , 4 , mLBOrig +
2 ) ; } } if ( memspace -> workspace_double [ 3 ] <= 0.0 ) { TrialState ->
xstar [ nVarOrig + 3 ] = 0.0 ; TrialState -> xstar [ nVarOrig + 7 ] = -
memspace -> workspace_double [ 3 ] ; imaznvrexor ( WorkingSet , 4 , mLBOrig +
3 ) ; if ( memspace -> workspace_double [ 3 ] >= - 1.0E-6 ) { imaznvrexor (
WorkingSet , 4 , mLBOrig + 7 ) ; } } else { TrialState -> xstar [ nVarOrig +
3 ] = memspace -> workspace_double [ 3 ] ; TrialState -> xstar [ nVarOrig + 7
] = 0.0 ; imaznvrexor ( WorkingSet , 4 , mLBOrig + 7 ) ; if ( memspace ->
workspace_double [ 3 ] <= 1.0E-6 ) { imaznvrexor ( WorkingSet , 4 , mLBOrig +
3 ) ; } } } static int32_T pwtnp20vfjo ( guj4mpcfgf * memspace , const
int32_T WorkingSet_sizes [ 5 ] , const boolean_T WorkingSet_isActiveConstr [
13 ] ) { int32_T nActiveLBArtificial ; int32_T idx_local ; int32_T
b_idx_local ; idx_local = WorkingSet_sizes [ 3 ] - 4 ; memspace ->
workspace_int [ 0 ] = WorkingSet_isActiveConstr [ idx_local ] ; memspace ->
workspace_int [ 4 ] = WorkingSet_isActiveConstr [ WorkingSet_sizes [ 3 ] ] ;
nActiveLBArtificial = WorkingSet_isActiveConstr [ idx_local ] +
WorkingSet_isActiveConstr [ WorkingSet_sizes [ 3 ] ] ; idx_local =
WorkingSet_sizes [ 3 ] - 3 ; b_idx_local = WorkingSet_sizes [ 3 ] + 1 ;
memspace -> workspace_int [ 1 ] = WorkingSet_isActiveConstr [ idx_local ] ;
memspace -> workspace_int [ 5 ] = WorkingSet_isActiveConstr [ b_idx_local ] ;
nActiveLBArtificial = ( nActiveLBArtificial + WorkingSet_isActiveConstr [
idx_local ] ) + WorkingSet_isActiveConstr [ b_idx_local ] ; idx_local =
WorkingSet_sizes [ 3 ] - 2 ; b_idx_local = WorkingSet_sizes [ 3 ] + 2 ;
memspace -> workspace_int [ 2 ] = WorkingSet_isActiveConstr [ idx_local ] ;
memspace -> workspace_int [ 6 ] = WorkingSet_isActiveConstr [ b_idx_local ] ;
nActiveLBArtificial = ( nActiveLBArtificial + WorkingSet_isActiveConstr [
idx_local ] ) + WorkingSet_isActiveConstr [ b_idx_local ] ; idx_local =
WorkingSet_sizes [ 3 ] - 1 ; b_idx_local = WorkingSet_sizes [ 3 ] + 3 ;
memspace -> workspace_int [ 3 ] = WorkingSet_isActiveConstr [ idx_local ] ;
memspace -> workspace_int [ 7 ] = WorkingSet_isActiveConstr [ b_idx_local ] ;
return ( nActiveLBArtificial + WorkingSet_isActiveConstr [ idx_local ] ) +
WorkingSet_isActiveConstr [ b_idx_local ] ; } static real_T o3ddyegemwh (
int32_T n , const real_T x [ 27 ] , int32_T ix0 ) { real_T y ; int32_T kend ;
int32_T k ; y = 0.0 ; if ( n >= 1 ) { kend = ( ix0 + n ) - 1 ; for ( k = ix0
; k <= kend ; k ++ ) { y += muDoubleScalarAbs ( x [ k - 1 ] ) ; } } return y
; } static real_T ldebw4msx4g ( int32_T n , const real_T x [ 27 ] , int32_T
ix0 , const real_T y [ 27 ] , int32_T iy0 ) { real_T d ; int32_T ix ; int32_T
iy ; int32_T k ; d = 0.0 ; if ( n >= 1 ) { ix = ix0 ; iy = iy0 ; for ( k = 0
; k < n ; k ++ ) { d += x [ ix - 1 ] * y [ iy - 1 ] ; ix ++ ; iy ++ ; } }
return d ; } static void epc3kbrspvagn ( kthfgfhdov * obj , real_T fval ,
const real_T eq_workspace [ 4 ] , int32_T sqpiter , real_T qpval , const
real_T x [ 27 ] , int32_T iReg0 , int32_T nRegularized ) { real_T
penaltyParamTrial ; real_T constrViolationEq ; real_T
linearizedConstrViolPrev ; real_T y ; int32_T kend ; int32_T k ;
penaltyParamTrial = obj -> penaltyParam ; constrViolationEq = ( (
muDoubleScalarAbs ( eq_workspace [ 0 ] ) + muDoubleScalarAbs ( eq_workspace [
1 ] ) ) + muDoubleScalarAbs ( eq_workspace [ 2 ] ) ) + muDoubleScalarAbs (
eq_workspace [ 3 ] ) ; linearizedConstrViolPrev = obj -> linearizedConstrViol
; y = 0.0 ; if ( nRegularized >= 1 ) { kend = ( iReg0 + nRegularized ) - 1 ;
for ( k = iReg0 ; k <= kend ; k ++ ) { y += muDoubleScalarAbs ( x [ k - 1 ] )
; } } obj -> linearizedConstrViol = y ; linearizedConstrViolPrev = (
constrViolationEq + linearizedConstrViolPrev ) - y ; if ( (
linearizedConstrViolPrev > 2.2204460492503131E-16 ) && ( qpval > 0.0 ) ) { if
( fval == 0.0 ) { penaltyParamTrial = 1.0 ; } else { penaltyParamTrial = 1.5
; } penaltyParamTrial = penaltyParamTrial * qpval / linearizedConstrViolPrev
; } if ( penaltyParamTrial < obj -> penaltyParam ) { obj -> phi =
penaltyParamTrial * constrViolationEq + fval ; if ( ( penaltyParamTrial * obj
-> initConstrViolationEq + obj -> initFval ) - obj -> phi > ( real_T ) obj ->
nPenaltyDecreases * obj -> threshold ) { obj -> nPenaltyDecreases ++ ; if ( (
obj -> nPenaltyDecreases << 1 ) > sqpiter ) { obj -> threshold *= 10.0 ; }
obj -> penaltyParam = muDoubleScalarMax ( penaltyParamTrial , 1.0E-10 ) ; }
else { obj -> phi = obj -> penaltyParam * constrViolationEq + fval ; } } else
{ obj -> penaltyParam = muDoubleScalarMax ( penaltyParamTrial , 1.0E-10 ) ;
obj -> phi = muDoubleScalarMax ( penaltyParamTrial , 1.0E-10 ) *
constrViolationEq + fval ; } obj -> phiPrimePlus = muDoubleScalarMin ( qpval
- obj -> penaltyParam * constrViolationEq , 0.0 ) ; } static void be4pi3sfcin
( int32_T nActiveLBArtificial , aaxpzhoxuz * TrialState , nuprfhnilo *
WorkingSet ) { int32_T mFiniteLBOrig ; int32_T idx ; real_T tmp ;
mFiniteLBOrig = WorkingSet -> sizes [ 3 ] - 8 ; idx = WorkingSet ->
nActiveConstr ; while ( ( idx > 4 ) && ( nActiveLBArtificial > 0 ) ) { if ( (
WorkingSet -> Wid [ idx - 1 ] == 4 ) && ( WorkingSet -> Wlocalidx [ idx - 1 ]
> mFiniteLBOrig ) ) { tmp = TrialState -> lambda [ WorkingSet ->
nActiveConstr - 1 ] ; TrialState -> lambda [ WorkingSet -> nActiveConstr - 1
] = 0.0 ; TrialState -> lambda [ idx - 1 ] = tmp ; pghmkcqdjs5 ( WorkingSet ,
idx ) ; nActiveLBArtificial -- ; } idx -- ; } } static void dq1wo1infuk (
ecn2fyspui * obj , int32_T NumVars ) { obj -> hasLinear = true ; obj -> nvar
= NumVars ; obj -> objtype = 3 ; } static int32_T cdcikb5kmwajms ( int32_T n
, const real_T x [ 13 ] ) { int32_T idxmax ; int32_T ix ; real_T smax ;
int32_T k ; real_T y ; idxmax = 1 ; ix = 0 ; smax = muDoubleScalarAbs ( x [ 0
] ) ; for ( k = 2 ; k <= n ; k ++ ) { ix ++ ; y = muDoubleScalarAbs ( x [ ix
] ) ; if ( y > smax ) { idxmax = k ; smax = y ; } } return idxmax ; } static
void b13hapjdzsn ( const real_T Hessian [ 324 ] , const real_T grad [ 27 ] ,
aaxpzhoxuz * TrialState , kthfgfhdov * MeritFunction , guj4mpcfgf * memspace
, nuprfhnilo * WorkingSet , ev3ltaqeco * QRManager , bwxng4ee5f * CholManager
, ecn2fyspui * QPObjective , e2ucunpqcp * qpoptions ) { int32_T nVarOrig ;
real_T beta ; real_T rho ; int32_T temp ; int32_T nActiveLBArtificial ;
boolean_T isAeqActive ; e2ucunpqcp qpoptions_p ; e2ucunpqcp qpoptions_e ;
nVarOrig = WorkingSet -> nVar ; beta = 0.0 ; for ( temp = 0 ; temp < nVarOrig
; temp ++ ) { beta += Hessian [ 18 * temp + temp ] ; } beta /= ( real_T )
WorkingSet -> nVar ; if ( TrialState -> sqpIterations <= 1 ) { rho =
muDoubleScalarMax ( 1.0 , muDoubleScalarAbs ( grad [ cdcikb5kmwaj (
QPObjective -> nvar , grad ) - 1 ] ) ) * 100.0 ; } else { rho =
muDoubleScalarAbs ( TrialState -> lambdasqp [ cdcikb5kmwajms ( WorkingSet ->
mConstr , TrialState -> lambdasqp ) - 1 ] ) ; } gkuyiknb3ak ( QPObjective ,
WorkingSet -> nVar , beta , rho ) ; gzr1v3zdr1h ( WorkingSet , 2 ) ;
oo03adww3io ( nVarOrig , WorkingSet , TrialState , memspace ) ; temp =
qpoptions -> MaxIterations ; qpoptions -> MaxIterations = ( qpoptions ->
MaxIterations + WorkingSet -> nVar ) - nVarOrig ; qpoptions_p = * qpoptions ;
qpoptions_e = * qpoptions ; kju12naicn3sk ( Hessian , grad , TrialState ,
memspace , WorkingSet , QRManager , CholManager , QPObjective , & qpoptions_p
, & qpoptions_e ) ; qpoptions -> MaxIterations = temp ; nActiveLBArtificial =
pwtnp20vfjo ( memspace , WorkingSet -> sizes , WorkingSet -> isActiveConstr )
; if ( TrialState -> state != - 6 ) { epc3kbrspvagn ( MeritFunction ,
TrialState -> sqpFval , TrialState -> cEq , TrialState -> sqpIterations , (
TrialState -> fstar - rho * o3ddyegemwh ( 26 - nVarOrig , TrialState -> xstar
, nVarOrig + 1 ) ) - beta / 2.0 * ldebw4msx4g ( 26 - nVarOrig , TrialState ->
xstar , nVarOrig + 1 , TrialState -> xstar , nVarOrig + 1 ) , TrialState ->
xstar , nVarOrig + 1 , 26 - nVarOrig ) ; if ( ( memspace -> workspace_int [ 0
] != 0 ) && ( memspace -> workspace_int [ 4 ] != 0 ) ) { isAeqActive = true ;
} else { isAeqActive = false ; } TrialState -> lambda [ 0 ] *= ( real_T )
isAeqActive ; if ( ( memspace -> workspace_int [ 1 ] != 0 ) && ( memspace ->
workspace_int [ 5 ] != 0 ) ) { isAeqActive = true ; } else { isAeqActive =
false ; } TrialState -> lambda [ 1 ] *= ( real_T ) isAeqActive ; if ( (
memspace -> workspace_int [ 2 ] != 0 ) && ( memspace -> workspace_int [ 6 ]
!= 0 ) ) { isAeqActive = true ; } else { isAeqActive = false ; } TrialState
-> lambda [ 2 ] *= ( real_T ) isAeqActive ; if ( ( memspace -> workspace_int
[ 3 ] != 0 ) && ( memspace -> workspace_int [ 7 ] != 0 ) ) { isAeqActive =
true ; } else { isAeqActive = false ; } TrialState -> lambda [ 3 ] *= (
real_T ) isAeqActive ; for ( temp = 4 ; temp < WorkingSet -> nActiveConstr ;
temp ++ ) { if ( WorkingSet -> Wid [ temp ] == 3 ) { TrialState -> lambda [
temp ] *= ( real_T ) memspace -> workspace_int [ WorkingSet -> Wlocalidx [
temp ] + 7 ] ; } } } be4pi3sfcin ( nActiveLBArtificial , TrialState ,
WorkingSet ) ; dq1wo1infuk ( QPObjective , nVarOrig ) ; gzr1v3zdr1h (
WorkingSet , 3 ) ; cbymjegfoxs ( TrialState -> lambda , WorkingSet ->
nActiveConstr , WorkingSet -> sizes , WorkingSet -> isActiveIdx , WorkingSet
-> Wid , WorkingSet -> Wlocalidx , memspace -> workspace_double ) ; } static
void c0gqrqmidxf ( real_T Hessian [ 324 ] , const real_T grad [ 27 ] , const
real_T searchDir [ 27 ] ) { real_T nrmGradInf ; real_T nrmDirInf ; int32_T
iH0 ; int32_T idx ; int32_T k ; nrmGradInf = 0.0 ; nrmDirInf = 1.0 ; for (
idx = 0 ; idx < 18 ; idx ++ ) { nrmGradInf = muDoubleScalarMax ( nrmGradInf ,
muDoubleScalarAbs ( grad [ idx ] ) ) ; nrmDirInf = muDoubleScalarMax (
nrmDirInf , muDoubleScalarAbs ( searchDir [ idx ] ) ) ; } nrmGradInf =
muDoubleScalarMax ( 2.2204460492503131E-16 , nrmGradInf / nrmDirInf ) ; for (
idx = 0 ; idx < 18 ; idx ++ ) { iH0 = 18 * idx ; for ( k = 0 ; k < idx ; k ++
) { Hessian [ iH0 + k ] = 0.0 ; } Hessian [ idx + 18 * idx ] = nrmGradInf ;
iH0 += idx ; for ( k = 0 ; k <= 16 - idx ; k ++ ) { Hessian [ ( iH0 + k ) + 1
] = 0.0 ; } } } static boolean_T ebhvdjjpztr ( int32_T * STEP_TYPE , real_T
Hessian [ 324 ] , aaxpzhoxuz * TrialState , kthfgfhdov * MeritFunction ,
guj4mpcfgf * memspace , nuprfhnilo * WorkingSet , ev3ltaqeco * QRManager ,
bwxng4ee5f * CholManager , ecn2fyspui * QPObjective , e2ucunpqcp * qpoptions
) { boolean_T stepSuccess ; int32_T nVar ; aaxpzhoxuz b_TrialState ; int32_T
b_idx ; int32_T exitg1 ; boolean_T guard1 = false ; stepSuccess = true ; nVar
= WorkingSet -> nVar ; if ( * STEP_TYPE != 3 ) { dmpzqvndba ( WorkingSet ->
nVar , TrialState -> xstarsqp , TrialState -> xstar ) ; } else { bt1s243f5e (
WorkingSet -> nVar , TrialState -> xstar , TrialState -> searchDir ) ; } do {
exitg1 = 0 ; guard1 = false ; switch ( * STEP_TYPE ) { case 1 : b_TrialState
= * TrialState ; efh512zbx11 ( Hessian , TrialState -> grad , & b_TrialState
, MeritFunction , memspace , WorkingSet , QRManager , CholManager ,
QPObjective , qpoptions ) ; * TrialState = b_TrialState ; if ( ( b_TrialState
. state <= 0 ) && ( b_TrialState . state != - 6 ) ) { * STEP_TYPE = 2 ; }
else { memcpy ( & TrialState -> delta_x [ 0 ] , & b_TrialState . delta_x [ 0
] , 27U * sizeof ( real_T ) ) ; bt1s243f5e ( nVar , b_TrialState . xstar ,
TrialState -> delta_x ) ; guard1 = true ; } break ; case 2 : b_TrialState = *
TrialState ; b13hapjdzsn ( Hessian , TrialState -> grad , & b_TrialState ,
MeritFunction , memspace , WorkingSet , QRManager , CholManager , QPObjective
, qpoptions ) ; * TrialState = b_TrialState ; memcpy ( & TrialState ->
delta_x [ 0 ] , & b_TrialState . delta_x [ 0 ] , 27U * sizeof ( real_T ) ) ;
bt1s243f5e ( nVar , b_TrialState . xstar , TrialState -> delta_x ) ; guard1 =
true ; break ; default : b_TrialState = * TrialState ; stepSuccess =
nbrvt40jayo ( Hessian , TrialState -> grad , & b_TrialState , memspace ,
WorkingSet , QRManager , CholManager , QPObjective , qpoptions ) ; *
TrialState = b_TrialState ; if ( stepSuccess && ( TrialState -> state != - 6
) ) { for ( b_idx = 0 ; b_idx < nVar ; b_idx ++ ) { TrialState -> delta_x [
b_idx ] = TrialState -> xstar [ b_idx ] + TrialState -> socDirection [ b_idx
] ; } } guard1 = true ; break ; } if ( guard1 ) { if ( TrialState -> state !=
- 6 ) { exitg1 = 1 ; } else { c0gqrqmidxf ( Hessian , TrialState -> grad ,
TrialState -> xstar ) ; } } } while ( exitg1 == 0 ) ; return stepSuccess ; }
static void po4spm1njqc ( const real_T obj_objfun_tunableEnvironment [ 4 ] ,
const real_T x [ 18 ] , real_T Ceq_workspace [ 4 ] , real_T * fval , int32_T
* status ) { cipokh2zzbm ( obj_objfun_tunableEnvironment , x , fval , status
) ; if ( * status == 1 ) { * status = fgxc0qaihrx ( x , Ceq_workspace ) ; } }
static real_T h34bguel4f4 ( real_T obj_penaltyParam , real_T fval , const
real_T Ceq_workspace [ 4 ] , boolean_T evalWellDefined ) { real_T val ; if (
evalWellDefined ) { val = ( ( ( muDoubleScalarAbs ( Ceq_workspace [ 0 ] ) +
muDoubleScalarAbs ( Ceq_workspace [ 1 ] ) ) + muDoubleScalarAbs (
Ceq_workspace [ 2 ] ) ) + muDoubleScalarAbs ( Ceq_workspace [ 3 ] ) ) *
obj_penaltyParam + fval ; } else { val = ( rtInf ) ; } return val ; } static
void fnhb0ecihgt ( boolean_T * evalWellDefined , int32_T WorkingSet_nVar ,
aaxpzhoxuz * TrialState , real_T MeritFunction_penaltyParam , real_T
MeritFunction_phi , real_T MeritFunction_phiPrimePlus , real_T
MeritFunction_phiFullStep , const real_T
FcnEvaluator_objfun_tunableEnvironment [ 4 ] , boolean_T socTaken , real_T *
alpha , int32_T * exitflag ) { real_T phi_alpha ; boolean_T tooSmallX ;
int32_T b_k ; real_T Ceq_workspace [ 4 ] ; int32_T exitg1 ; boolean_T exitg2
; * alpha = 1.0 ; * exitflag = 1 ; phi_alpha = MeritFunction_phiFullStep ;
for ( b_k = 0 ; b_k < WorkingSet_nVar ; b_k ++ ) { TrialState -> searchDir [
b_k ] = TrialState -> delta_x [ b_k ] ; } do { exitg1 = 0 ; if ( TrialState
-> FunctionEvaluations < 1800 ) { if ( ( * evalWellDefined ) && ( phi_alpha
<= * alpha * 0.0001 * MeritFunction_phiPrimePlus + MeritFunction_phi ) ) {
exitg1 = 1 ; } else { * alpha *= 0.7 ; for ( b_k = 0 ; b_k < WorkingSet_nVar
; b_k ++ ) { TrialState -> delta_x [ b_k ] = * alpha * TrialState ->
searchDir [ b_k ] ; } if ( socTaken ) { phi_alpha = * alpha * * alpha ; if (
( WorkingSet_nVar >= 1 ) && ( ! ( phi_alpha == 0.0 ) ) ) { for ( b_k = 0 ;
b_k < WorkingSet_nVar ; b_k ++ ) { TrialState -> delta_x [ b_k ] += phi_alpha
* TrialState -> socDirection [ b_k ] ; } } } tooSmallX = true ; b_k = 0 ;
exitg2 = false ; while ( ( ! exitg2 ) && ( b_k <= WorkingSet_nVar - 1 ) ) {
if ( 1.0E-10 * muDoubleScalarMax ( 1.0 , muDoubleScalarAbs ( TrialState ->
xstarsqp [ b_k ] ) ) <= muDoubleScalarAbs ( TrialState -> delta_x [ b_k ] ) )
{ tooSmallX = false ; exitg2 = true ; } else { b_k ++ ; } } if ( tooSmallX )
{ * exitflag = - 2 ; exitg1 = 1 ; } else { for ( b_k = 0 ; b_k <
WorkingSet_nVar ; b_k ++ ) { TrialState -> xstarsqp [ b_k ] = TrialState ->
xstarsqp_old [ b_k ] + TrialState -> delta_x [ b_k ] ; } Ceq_workspace [ 0 ]
= TrialState -> cEq [ 0 ] ; Ceq_workspace [ 1 ] = TrialState -> cEq [ 1 ] ;
Ceq_workspace [ 2 ] = TrialState -> cEq [ 2 ] ; Ceq_workspace [ 3 ] =
TrialState -> cEq [ 3 ] ; cipokh2zzbm (
FcnEvaluator_objfun_tunableEnvironment , TrialState -> xstarsqp , & phi_alpha
, & b_k ) ; if ( b_k == 1 ) { b_k = fgxc0qaihrx ( TrialState -> xstarsqp ,
Ceq_workspace ) ; } TrialState -> sqpFval = phi_alpha ; TrialState -> cEq [ 0
] = Ceq_workspace [ 0 ] ; TrialState -> cEq [ 1 ] = Ceq_workspace [ 1 ] ;
TrialState -> cEq [ 2 ] = Ceq_workspace [ 2 ] ; TrialState -> cEq [ 3 ] =
Ceq_workspace [ 3 ] ; TrialState -> FunctionEvaluations ++ ; *
evalWellDefined = ( b_k == 1 ) ; if ( * evalWellDefined ) { phi_alpha += ( (
( muDoubleScalarAbs ( Ceq_workspace [ 0 ] ) + muDoubleScalarAbs (
Ceq_workspace [ 1 ] ) ) + muDoubleScalarAbs ( Ceq_workspace [ 2 ] ) ) +
muDoubleScalarAbs ( Ceq_workspace [ 3 ] ) ) * MeritFunction_penaltyParam ; }
else { phi_alpha = ( rtInf ) ; } } } } else { * exitflag = 0 ; exitg1 = 1 ; }
} while ( exitg1 == 0 ) ; } static void kju12naicn3s ( aaxpzhoxuz *
TrialState , kthfgfhdov * MeritFunction , const dccng4x0j0 * FcnEvaluator ,
dxs1et3yod * FiniteDifferences , guj4mpcfgf * memspace , nuprfhnilo *
WorkingSet , ev3ltaqeco * QRManager , ecn2fyspui * QPObjective , real_T
Hessian [ 324 ] , bwxng4ee5f * CholManager ) { int32_T nVar ; int32_T mLB ;
int32_T qpoptions_MaxIterations ; mf15oedits Flags ; int32_T idx ; boolean_T
b ; real_T e [ 27 ] ; real_T g [ 108 ] ; real_T h [ 18 ] ; real_T j ; real_T
k [ 4 ] ; int32_T b_idx ; e2ucunpqcp expl_temp ; static const int8_T o [ 324
] = { 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
1 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 } ; static const char_T p
[ 7 ] = { 'f' , 'm' , 'i' , 'n' , 'c' , 'o' , 'n' } ; e2ucunpqcp expl_temp_p
; memset ( & CholManager -> FMat [ 0 ] , 0 , 729U * sizeof ( real_T ) ) ;
CholManager -> ldm = 27 ; CholManager -> ndims = 0 ; CholManager -> info = 0
; for ( b_idx = 0 ; b_idx < 324 ; b_idx ++ ) { Hessian [ b_idx ] = o [ b_idx
] ; } nVar = WorkingSet -> nVar ; mLB = WorkingSet -> sizes [ 3 ] ;
qpoptions_MaxIterations = 10 * muIntScalarMax_sint32 ( WorkingSet -> nVar ,
WorkingSet -> sizes [ 3 ] ) ; TrialState -> steplength = 1.0 ; mxnuuti0thvg (
MeritFunction , WorkingSet , TrialState , & Flags . gradOK , & Flags .
fevalOK , & Flags . done , & Flags . stepAccepted , & Flags .
failedLineSearch , & Flags . stepType ) ; cct5ezbgkvp ( TrialState ,
WorkingSet -> nVar , WorkingSet -> Aeq ) ; oabtqrotmyc ( TrialState ) ; if (
! Flags . done ) { TrialState -> sqpIterations = 1 ; } while ( ! Flags . done
) { if ( ( ! Flags . stepAccepted ) && ( ! Flags . failedLineSearch ) ) {
expl_temp . IterDisplayQP = false ; expl_temp . RemainFeasible = false ;
expl_temp . ProbRelTolFactor = 1.0 ; expl_temp . ConstrRelTolFactor = 1.0 ;
expl_temp . PricingTolerance = 0.0 ; expl_temp . ObjectiveLimit = - 1.0E+20 ;
expl_temp . ConstraintTolerance = 1.0E-6 ; expl_temp . OptimalityTolerance =
2.2204460492503131E-14 ; expl_temp . StepTolerance = 1.0E-6 ; expl_temp .
MaxIterations = qpoptions_MaxIterations ; for ( b_idx = 0 ; b_idx < 7 ; b_idx
++ ) { expl_temp . SolverName [ b_idx ] = p [ b_idx ] ; } } while ( ( ! Flags
. stepAccepted ) && ( ! Flags . failedLineSearch ) ) { jy0zmqim5jnxr (
WorkingSet , TrialState -> cEq ) ; idx = Flags . stepType ; expl_temp_p =
expl_temp ; b = ebhvdjjpztr ( & idx , Hessian , TrialState , MeritFunction ,
memspace , WorkingSet , QRManager , CholManager , QPObjective , & expl_temp_p
) ; Flags . stepAccepted = b ; Flags . stepType = idx ; if ( b ) { for (
b_idx = 0 ; b_idx < nVar ; b_idx ++ ) { TrialState -> xstarsqp [ b_idx ] +=
TrialState -> delta_x [ b_idx ] ; } k [ 0 ] = TrialState -> cEq [ 0 ] ; k [ 1
] = TrialState -> cEq [ 1 ] ; k [ 2 ] = TrialState -> cEq [ 2 ] ; k [ 3 ] =
TrialState -> cEq [ 3 ] ; po4spm1njqc ( FcnEvaluator -> objfun .
tunableEnvironment , TrialState -> xstarsqp , k , & j , & b_idx ) ;
TrialState -> sqpFval = j ; Flags . fevalOK = ( b_idx == 1 ) ; TrialState ->
FunctionEvaluations ++ ; TrialState -> cEq [ 0 ] = k [ 0 ] ; TrialState ->
cEq [ 1 ] = k [ 1 ] ; TrialState -> cEq [ 2 ] = k [ 2 ] ; TrialState -> cEq [
3 ] = k [ 3 ] ; MeritFunction -> phiFullStep = h34bguel4f4 ( MeritFunction ->
penaltyParam , j , k , Flags . fevalOK ) ; } if ( ( idx == 1 ) && b && Flags
. fevalOK && ( MeritFunction -> phi < MeritFunction -> phiFullStep ) && (
TrialState -> sqpFval < TrialState -> sqpFval_old ) ) { Flags . stepType = 3
; Flags . stepAccepted = false ; } else { fnhb0ecihgt ( & Flags . fevalOK ,
WorkingSet -> nVar , TrialState , MeritFunction -> penaltyParam ,
MeritFunction -> phi , MeritFunction -> phiPrimePlus , MeritFunction ->
phiFullStep , FcnEvaluator -> objfun . tunableEnvironment , ( idx == 3 ) && b
, & j , & b_idx ) ; TrialState -> steplength = j ; if ( b_idx > 0 ) { Flags .
stepAccepted = true ; } else { Flags . failedLineSearch = true ; } } } if (
Flags . stepAccepted && ( ! Flags . failedLineSearch ) ) { for ( b_idx = 0 ;
b_idx < nVar ; b_idx ++ ) { TrialState -> xstarsqp [ b_idx ] = TrialState ->
xstarsqp_old [ b_idx ] + TrialState -> delta_x [ b_idx ] ; } for ( b_idx = 0
; b_idx <= mLB + 3 ; b_idx ++ ) { TrialState -> lambdasqp [ b_idx ] += (
TrialState -> lambda [ b_idx ] - TrialState -> lambdasqp [ b_idx ] ) *
TrialState -> steplength ; } oabtqrotmyc ( TrialState ) ; memcpy ( & e [ 0 ]
, & TrialState -> grad [ 0 ] , 27U * sizeof ( real_T ) ) ; memcpy ( & g [ 0 ]
, & WorkingSet -> Aeq [ 0 ] , 108U * sizeof ( real_T ) ) ; memcpy ( & h [ 0 ]
, & TrialState -> xstarsqp [ 0 ] , 18U * sizeof ( real_T ) ) ; Flags . gradOK
= ap1uxguxorh ( FiniteDifferences , TrialState -> sqpFval , TrialState -> cEq
, h , e , g ) ; memcpy ( & TrialState -> grad [ 0 ] , & e [ 0 ] , 27U *
sizeof ( real_T ) ) ; memcpy ( & WorkingSet -> Aeq [ 0 ] , & g [ 0 ] , 108U *
sizeof ( real_T ) ) ; memcpy ( & TrialState -> xstarsqp [ 0 ] , & h [ 0 ] ,
18U * sizeof ( real_T ) ) ; TrialState -> FunctionEvaluations +=
FiniteDifferences -> numEvals ; } else { k1vu0y3nbuy ( TrialState ) ; }
mxnuuti0thvgd ( & Flags , memspace , MeritFunction , WorkingSet , TrialState
, QRManager ) ; if ( ( ! Flags . done ) && Flags . stepAccepted ) { Flags .
stepAccepted = false ; Flags . stepType = 1 ; Flags . failedLineSearch =
false ; ns205swajku ( nVar , TrialState -> delta_gradLag , TrialState -> grad
, WorkingSet -> Aeq , TrialState -> grad_old , TrialState -> JacCeqTrans_old
, TrialState -> lambdasqp ) ; cct5ezbgkvp ( TrialState , nVar , WorkingSet ->
Aeq ) ; baiaczl2dfl ( nVar , Hessian , TrialState -> delta_x , TrialState ->
delta_gradLag , memspace -> workspace_double ) ; TrialState -> sqpIterations
++ ; } } } static void hkdppg2m2gk ( const real_T fun_tunableEnvironment [ 4
] , real_T x [ 18 ] , real_T * fval , real_T * exitflag ) { aaxpzhoxuz
TrialState ; dccng4x0j0 FcnEvaluator ; real_T b ; real_T e [ 4 ] ; dxs1et3yod
FiniteDifferences ; real_T Hessian [ 324 ] ; kthfgfhdov MeritFunction ;
ecn2fyspui QPObjective ; static const real_T i [ 18 ] = { 0.17453292519943295
, 0.8135 , 0.0244 , - 0.0019 , - 0.5821 , 0.9338 , 0.0064 , - 0.0889 , 0.3413
, - 0.17453292519943295 , 0.8135 , - 0.0245 , - 0.0019 , 0.5821 , - 0.9338 ,
0.0064 , 0.0889 , 0.3413 } ; int32_T i_p ; static const int8_T m [ 5 ] = { 0
, 4 , 0 , 0 , 0 } ; static const int8_T q [ 6 ] = { 1 , 1 , 5 , 5 , 5 , 5 } ;
static const int8_T n [ 5 ] = { 0 , 4 , 0 , 1 , 0 } ; static const int8_T o [
5 ] = { 0 , 4 , 0 , 8 , 0 } ; static const int8_T r [ 6 ] = { 1 , 1 , 5 , 5 ,
6 , 6 } ; static const int8_T p [ 5 ] = { 0 , 4 , 0 , 9 , 0 } ; static const
int8_T t [ 6 ] = { 1 , 1 , 5 , 5 , 13 , 13 } ; static const int8_T u [ 6 ] =
{ 1 , 1 , 5 , 5 , 14 , 14 } ; static const real_T i_e [ 18 ] = {
0.17453292519943295 , 0.8135 , 0.0244 , - 0.0019 , - 0.5821 , 0.9338 , 0.0064
, - 0.0889 , 0.3413 , - 0.17453292519943295 , 0.8135 , - 0.0245 , - 0.0019 ,
0.5821 , - 0.9338 , 0.0064 , 0.0889 , 0.3413 } ; p32d0btmmxzpj (
fun_tunableEnvironment , FcnEvaluator . objfun . tunableEnvironment , &
FcnEvaluator . nVar , & FcnEvaluator . mCineq , & FcnEvaluator . mCeq , &
FcnEvaluator . NonFiniteSupport , & FcnEvaluator . SpecifyObjectiveGradient ,
& FcnEvaluator . SpecifyConstraintGradient , & FcnEvaluator . ScaleProblem )
; TrialState . nVarMax = 27 ; TrialState . mNonlinIneq = 0 ; TrialState .
mNonlinEq = 4 ; TrialState . mIneq = 0 ; TrialState . mEq = 4 ; TrialState .
iNonIneq0 = 1 ; TrialState . iNonEq0 = 1 ; TrialState . sqpFval_old = 0.0 ;
memset ( & TrialState . xstarsqp_old [ 0 ] , 0 , 18U * sizeof ( real_T ) ) ;
TrialState . cEq_old [ 0 ] = 0.0 ; TrialState . cEq_old [ 1 ] = 0.0 ;
TrialState . cEq_old [ 2 ] = 0.0 ; TrialState . cEq_old [ 3 ] = 0.0 ; memset
( & TrialState . grad_old [ 0 ] , 0 , 27U * sizeof ( real_T ) ) ; TrialState
. sqpIterations = 0 ; TrialState . sqpExitFlag = 0 ; memset ( & TrialState .
lambdasqp [ 0 ] , 0 , 13U * sizeof ( real_T ) ) ; memset ( & TrialState .
lambdasqp_old [ 0 ] , 0 , 13U * sizeof ( real_T ) ) ; TrialState . steplength
= 1.0 ; memset ( & TrialState . delta_x [ 0 ] , 0 , 27U * sizeof ( real_T ) )
; memset ( & TrialState . socDirection [ 0 ] , 0 , 27U * sizeof ( real_T ) )
; memset ( & TrialState . lambda_old [ 0 ] , 0 , 13U * sizeof ( real_T ) ) ;
for ( i_p = 0 ; i_p < 13 ; i_p ++ ) { TrialState . workingset_old [ i_p ] = 0
; } memset ( & TrialState . JacCeqTrans_old [ 0 ] , 0 , 108U * sizeof (
real_T ) ) ; memset ( & TrialState . gradLag [ 0 ] , 0 , 27U * sizeof (
real_T ) ) ; memset ( & TrialState . delta_gradLag [ 0 ] , 0 , 27U * sizeof (
real_T ) ) ; memset ( & TrialState . xstar [ 0 ] , 0 , 27U * sizeof ( real_T
) ) ; TrialState . fstar = 0.0 ; TrialState . firstorderopt = 0.0 ; memset (
& TrialState . lambda [ 0 ] , 0 , 13U * sizeof ( real_T ) ) ; TrialState .
state = 0 ; TrialState . maxConstr = 0.0 ; TrialState . iterations = 0 ; rtB
. WorkingSet . mConstr = 4 ; rtB . WorkingSet . mConstrOrig = 4 ; rtB .
WorkingSet . mConstrMax = 13 ; rtB . WorkingSet . nVar = 18 ; rtB .
WorkingSet . nVarOrig = 18 ; rtB . WorkingSet . nVarMax = 27 ; rtB .
WorkingSet . ldA = 27 ; rtB . WorkingSet . beq [ 0 ] = 0.0 ; rtB . WorkingSet
. beq [ 1 ] = 0.0 ; rtB . WorkingSet . beq [ 2 ] = 0.0 ; rtB . WorkingSet .
beq [ 3 ] = 0.0 ; memset ( & TrialState . searchDir [ 0 ] , 0 , 27U * sizeof
( real_T ) ) ; memset ( & rtB . WorkingSet . lb [ 0 ] , 0 , 27U * sizeof (
real_T ) ) ; memset ( & rtB . WorkingSet . ub [ 0 ] , 0 , 27U * sizeof (
real_T ) ) ; memset ( & rtB . WorkingSet . indexLB [ 0 ] , 0 , 27U * sizeof (
int32_T ) ) ; memset ( & rtB . WorkingSet . indexUB [ 0 ] , 0 , 27U * sizeof
( int32_T ) ) ; memset ( & rtB . WorkingSet . indexFixed [ 0 ] , 0 , 27U *
sizeof ( int32_T ) ) ; rtB . WorkingSet . mEqRemoved = 0 ; rtB . WorkingSet .
indexEqRemoved [ 0 ] = 0 ; rtB . WorkingSet . indexEqRemoved [ 1 ] = 0 ; rtB
. WorkingSet . indexEqRemoved [ 2 ] = 0 ; rtB . WorkingSet . indexEqRemoved [
3 ] = 0 ; memset ( & rtB . WorkingSet . ATwset [ 0 ] , 0 , 351U * sizeof (
real_T ) ) ; rtB . WorkingSet . nActiveConstr = 0 ; memset ( & rtB .
WorkingSet . bwset [ 0 ] , 0 , 13U * sizeof ( real_T ) ) ; memset ( & rtB .
WorkingSet . maxConstrWorkspace [ 0 ] , 0 , 13U * sizeof ( real_T ) ) ; for (
i_p = 0 ; i_p < 5 ; i_p ++ ) { rtB . WorkingSet . sizes [ i_p ] = m [ i_p ] ;
rtB . WorkingSet . sizesNormal [ i_p ] = m [ i_p ] ; rtB . WorkingSet .
sizesPhaseOne [ i_p ] = n [ i_p ] ; rtB . WorkingSet . sizesRegularized [ i_p
] = o [ i_p ] ; rtB . WorkingSet . sizesRegPhaseOne [ i_p ] = p [ i_p ] ; }
for ( i_p = 0 ; i_p < 6 ; i_p ++ ) { rtB . WorkingSet . isActiveIdx [ i_p ] =
q [ i_p ] ; rtB . WorkingSet . isActiveIdxNormal [ i_p ] = q [ i_p ] ; rtB .
WorkingSet . isActiveIdxPhaseOne [ i_p ] = r [ i_p ] ; rtB . WorkingSet .
isActiveIdxRegularized [ i_p ] = t [ i_p ] ; rtB . WorkingSet .
isActiveIdxRegPhaseOne [ i_p ] = u [ i_p ] ; } for ( i_p = 0 ; i_p < 13 ; i_p
++ ) { rtB . WorkingSet . isActiveConstr [ i_p ] = false ; rtB . WorkingSet .
Wid [ i_p ] = 0 ; rtB . WorkingSet . Wlocalidx [ i_p ] = 0 ; } for ( i_p = 0
; i_p < 5 ; i_p ++ ) { rtB . WorkingSet . nWConstr [ i_p ] = 0 ; } rtB .
WorkingSet . probType = 3 ; rtB . WorkingSet . SLACK0 = 1.0E-5 ; memset ( &
TrialState . grad [ 0 ] , 0 , 27U * sizeof ( real_T ) ) ; e [ 0 ] = 0.0 ; e [
1 ] = 0.0 ; e [ 2 ] = 0.0 ; e [ 3 ] = 0.0 ; memset ( & rtB . WorkingSet . Aeq
[ 0 ] , 0 , 108U * sizeof ( real_T ) ) ; ih4gycxc1of ( FcnEvaluator . objfun
. tunableEnvironment , i_e , e , & b , & i_p ) ; TrialState . sqpFval = b ;
p32d0btmmxzpjg ( fun_tunableEnvironment , & FiniteDifferences ) ; memcpy ( &
TrialState . xstarsqp [ 0 ] , & i [ 0 ] , 18U * sizeof ( real_T ) ) ;
ap1uxguxorh ( & FiniteDifferences , b , e , TrialState . xstarsqp ,
TrialState . grad , rtB . WorkingSet . Aeq ) ; TrialState .
FunctionEvaluations = FiniteDifferences . numEvals + 1 ; TrialState . cEq [ 0
] = e [ 0 ] ; TrialState . cEq [ 1 ] = e [ 1 ] ; TrialState . cEq [ 2 ] = e [
2 ] ; TrialState . cEq [ 3 ] = e [ 3 ] ; jy0zmqim5jnx ( & rtB . WorkingSet ,
e ) ; oml1j5lmqrv ( & rtB . WorkingSet ) ; rtB . s . ldq = 27 ; memset ( &
rtB . s . QR [ 0 ] , 0 , 729U * sizeof ( real_T ) ) ; memset ( & rtB . s . Q
[ 0 ] , 0 , 729U * sizeof ( real_T ) ) ; rtB . s . mrows = 0 ; rtB . s .
ncols = 0 ; rtB . s . minRowCol = 0 ; rtB . s . usedPivoting = false ;
p32d0btmmxzpjgg ( b , e , & MeritFunction ) ; memset ( & rtB . s . jpvt [ 0 ]
, 0 , 27U * sizeof ( int32_T ) ) ; memset ( & rtB . s . tau [ 0 ] , 0 , 27U *
sizeof ( real_T ) ) ; memset ( & QPObjective . grad [ 0 ] , 0 , 27U * sizeof
( real_T ) ) ; memset ( & QPObjective . Hx [ 0 ] , 0 , 26U * sizeof ( real_T
) ) ; QPObjective . hasLinear = true ; QPObjective . nvar = 18 ; QPObjective
. maxVar = 27 ; QPObjective . beta = 0.0 ; QPObjective . rho = 0.0 ;
QPObjective . objtype = 3 ; QPObjective . prev_objtype = 3 ; QPObjective .
prev_nvar = 0 ; QPObjective . prev_hasLinear = false ; QPObjective .
gammaScalar = 0.0 ; kju12naicn3s ( & TrialState , & MeritFunction , &
FcnEvaluator , & FiniteDifferences , & rtB . memspace , & rtB . WorkingSet ,
& rtB . s , & QPObjective , Hessian , & rtB . CholManager ) ; memcpy ( & x [
0 ] , & TrialState . xstarsqp [ 0 ] , 18U * sizeof ( real_T ) ) ; * fval =
TrialState . sqpFval ; * exitflag = TrialState . sqpExitFlag ; } void
MdlInitialize ( void ) { boolean_T tmp ; int_T tmp_p ; char * tmp_e ; tmp =
false ; if ( tmp ) { tmp_p = strcmp ( "VariableStepAuto" , ssGetSolverName (
rtS ) ) ; if ( tmp_p != 0 ) { tmp_e = solver_mismatch_message (
"VariableStepAuto" , ssGetSolverName ( rtS ) ) ; ssSetErrorStatus ( rtS ,
tmp_e ) ; } } } void MdlStart ( void ) { NeslSimulator * tmp ; boolean_T
tmp_p ; NeslSimulationData * tmp_e ; NeuDiagnosticManager * diagnosticManager
; NeModelParameters modelParameters ; real_T tmp_i ; NeuDiagnosticTree *
diagnosticTree ; int32_T tmp_m ; char * msg ; NeModelParameters
modelParameters_p ; { void * * slioCatalogueAddr = rt_slioCatalogueAddr ( ) ;
void * r2 = ( NULL ) ; void * * pOSigstreamManagerAddr = ( NULL ) ; const int
maxErrorBufferSize = 16384 ; char errMsgCreatingOSigstreamManager [ 16384 ] ;
bool errorCreatingOSigstreamManager = false ; const char *
errorAddingR2SharedResource = ( NULL ) ; * slioCatalogueAddr =
rtwGetNewSlioCatalogue ( rt_GetMatSigLogSelectorFileName ( ) ) ;
errorAddingR2SharedResource = rtwAddR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) , 1 ) ; if (
errorAddingR2SharedResource != ( NULL ) ) { rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = ( NULL ) ; ssSetErrorStatus ( rtS
, errorAddingR2SharedResource ) ; return ; } r2 = rtwGetR2SharedResource (
rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( ) ) ) ;
pOSigstreamManagerAddr = rt_GetOSigstreamManagerAddr ( ) ;
errorCreatingOSigstreamManager = rtwOSigstreamManagerCreateInstance (
rt_GetMatSigLogSelectorFileName ( ) , r2 , pOSigstreamManagerAddr ,
errMsgCreatingOSigstreamManager , maxErrorBufferSize ) ; if (
errorCreatingOSigstreamManager ) { * pOSigstreamManagerAddr = ( NULL ) ;
ssSetErrorStatus ( rtS , errMsgCreatingOSigstreamManager ) ; return ; } } {
bool externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( ) ; rtwISigstreamManagerGetInputIsInDatasetFormat (
pISigstreamManager , & externalInputIsInDatasetFormat ) ; if (
externalInputIsInDatasetFormat ) { } } tmp = nesl_lease_simulator (
"triped/Solver Configuration_1" , 0 , 0 ) ; rtDW . gwpbgup500 = ( void * )
tmp ; tmp_p = pointer_is_null ( rtDW . gwpbgup500 ) ; if ( tmp_p ) {
triped_a151ee3d_1_gateway ( ) ; tmp = nesl_lease_simulator (
"triped/Solver Configuration_1" , 0 , 0 ) ; rtDW . gwpbgup500 = ( void * )
tmp ; } tmp_e = nesl_create_simulation_data ( ) ; rtDW . luvxugyja4 = ( void
* ) tmp_e ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
k00imi24sj = ( void * ) diagnosticManager ; modelParameters . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters . mSolverTolerance = 0.001 ;
modelParameters . mVariableStepSolver = true ; modelParameters . mIsUsingODEN
= false ; modelParameters . mFixedStepSize = 0.001 ; modelParameters .
mStartTime = 0.0 ; modelParameters . mLoadInitialState = false ;
modelParameters . mUseSimState = false ; modelParameters . mLinTrimCompile =
false ; modelParameters . mLoggingMode = SSC_LOGGING_NONE ; modelParameters .
mRTWModifiedTimeStamp = 5.26730935E+8 ; tmp_i = 0.001 ; modelParameters .
mSolverTolerance = tmp_i ; tmp_i = 0.0 ; modelParameters . mFixedStepSize =
tmp_i ; tmp_p = true ; modelParameters . mVariableStepSolver = tmp_p ; tmp_p
= false ; modelParameters . mIsUsingODEN = tmp_p ; tmp_p =
ssGetGlobalInitialStatesAvailable ( rtS ) ; modelParameters .
mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS ) ) ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . k00imi24sj ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . gwpbgup500
, & modelParameters , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
tmp = nesl_lease_simulator ( "triped/Solver Configuration_1" , 1 , 0 ) ; rtDW
. kia1gcj0ok = ( void * ) tmp ; tmp_p = pointer_is_null ( rtDW . kia1gcj0ok )
; if ( tmp_p ) { triped_a151ee3d_1_gateway ( ) ; tmp = nesl_lease_simulator (
"triped/Solver Configuration_1" , 1 , 0 ) ; rtDW . kia1gcj0ok = ( void * )
tmp ; } tmp_e = nesl_create_simulation_data ( ) ; rtDW . psowfugydz = ( void
* ) tmp_e ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
bir0wi3sel = ( void * ) diagnosticManager ; modelParameters_p . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters_p . mSolverTolerance = 0.001 ;
modelParameters_p . mVariableStepSolver = true ; modelParameters_p .
mIsUsingODEN = false ; modelParameters_p . mFixedStepSize = 0.001 ;
modelParameters_p . mStartTime = 0.0 ; modelParameters_p . mLoadInitialState
= false ; modelParameters_p . mUseSimState = false ; modelParameters_p .
mLinTrimCompile = false ; modelParameters_p . mLoggingMode = SSC_LOGGING_NONE
; modelParameters_p . mRTWModifiedTimeStamp = 5.26730935E+8 ; tmp_i = 0.001 ;
modelParameters_p . mSolverTolerance = tmp_i ; tmp_i = 0.0 ;
modelParameters_p . mFixedStepSize = tmp_i ; tmp_p = true ; modelParameters_p
. mVariableStepSolver = tmp_p ; tmp_p = false ; modelParameters_p .
mIsUsingODEN = tmp_p ; tmp_p = ssGetGlobalInitialStatesAvailable ( rtS ) ;
modelParameters_p . mLoadInitialState = ( tmp_p && ssIsFirstInitCond ( rtS )
) ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . bir0wi3sel ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_m = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . kia1gcj0ok
, & modelParameters_p , diagnosticManager ) ; if ( tmp_m != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
MdlInitialize ( ) ; } void MdlOutputs ( int_T tid ) { boolean_T first_output
; NeslSimulationData * simulationData ; real_T time ; real_T tmp [ 36 ] ;
int_T tmp_p [ 10 ] ; NeuDiagnosticManager * diagnosticManager ;
NeuDiagnosticTree * diagnosticTree ; char * msg ; real_T time_p ; real_T
tmp_e [ 111 ] ; int_T tmp_i [ 11 ] ; real_T angle ; real_T newCoord [ 4 ] ;
real_T unusedU1 ; real_T OptVals [ 5 ] ; real_T b_OptVals [ 18 ] ; hskkdlcyjp
tunableEnvironment ; real_T b_tunableEnvironment [ 4 ] ; real_T tmp_m [ 16 ]
; int32_T i ; static const int8_T c [ 4 ] = { 0 , 0 , 0 , 1 } ; rtB .
emix4wr52y = ( muDoubleScalarSin ( rtP . SineWave_Freq * ssGetTaskTime ( rtS
, 0 ) + rtP . SineWave_Phase ) * rtP . SineWave_Amp + rtP . SineWave_Bias ) +
rtP . Constant3_Value ; rtB . kdnyrfmwwa = ( muDoubleScalarSin ( rtP .
cos_Freq * ssGetTaskTime ( rtS , 0 ) + rtP . cos_Phase ) * rtP . cos_Amp +
rtP . cos_Bias ) + rtP . Constant5_Value ; angle = rtP . Constant_Value * -
120.0 * 3.1415926535897931 / 180.0 ; tmp_m [ 0 ] = muDoubleScalarCos ( angle
) ; tmp_m [ 4 ] = - muDoubleScalarSin ( angle ) ; tmp_m [ 8 ] = 0.0 ; tmp_m [
12 ] = 0.0 ; tmp_m [ 1 ] = muDoubleScalarSin ( angle ) ; tmp_m [ 5 ] =
muDoubleScalarCos ( angle ) ; tmp_m [ 9 ] = 0.0 ; tmp_m [ 13 ] = 0.0 ; tmp_m
[ 2 ] = 0.0 ; tmp_m [ 3 ] = 0.0 ; tmp_m [ 6 ] = 0.0 ; tmp_m [ 7 ] = 0.0 ;
tmp_m [ 10 ] = 1.0 ; tmp_m [ 11 ] = 0.0 ; tmp_m [ 14 ] = 0.0 ; tmp_m [ 15 ] =
1.0 ; tunableEnvironment . f1 [ 0 ] = 1.0 ; tunableEnvironment . f1 [ 4 ] =
0.0 ; tunableEnvironment . f1 [ 8 ] = 0.0 ; tunableEnvironment . f1 [ 1 ] =
0.0 ; tunableEnvironment . f1 [ 5 ] = 1.0 ; tunableEnvironment . f1 [ 9 ] =
0.0 ; tunableEnvironment . f1 [ 2 ] = 0.0 ; tunableEnvironment . f1 [ 6 ] =
0.0 ; tunableEnvironment . f1 [ 10 ] = 1.0 ; for ( i = 0 ; i < 4 ; i ++ ) {
angle = tmp_m [ i + 12 ] + ( tmp_m [ i + 8 ] * rtP . Constant4_Value + (
tmp_m [ i + 4 ] * rtB . kdnyrfmwwa + tmp_m [ i ] * rtB . emix4wr52y ) ) ;
tunableEnvironment . f1 [ ( i << 2 ) + 3 ] = c [ i ] ; newCoord [ i ] = angle
; } tunableEnvironment . f1 [ 12 ] = newCoord [ 0 ] ; tunableEnvironment . f1
[ 13 ] = newCoord [ 1 ] ; tunableEnvironment . f1 [ 14 ] = newCoord [ 2 ] ;
hkdppg2m2g ( & tunableEnvironment , OptVals , & angle , & unusedU1 ) ;
b_tunableEnvironment [ 0 ] = OptVals [ 0 ] ; b_tunableEnvironment [ 1 ] =
OptVals [ 1 ] ; b_tunableEnvironment [ 2 ] = OptVals [ 2 ] ;
b_tunableEnvironment [ 3 ] = OptVals [ 3 ] ; hkdppg2m2gk (
b_tunableEnvironment , b_OptVals , & angle , & unusedU1 ) ; rtB . efjglo0jpm
= OptVals [ 4 ] ; if ( rtDW . jopmtehazu == 0.0 ) { rtDW . jopmtehazu = 1.0 ;
rtX . ldodtqkp4s [ 0 ] = rtB . efjglo0jpm ; rtX . ldodtqkp4s [ 1 ] = 0.0 ; }
rtB . mjmtgjjzzj [ 0 ] = rtX . ldodtqkp4s [ 0 ] ; rtB . mjmtgjjzzj [ 1 ] =
rtX . ldodtqkp4s [ 1 ] ; rtB . mjmtgjjzzj [ 2 ] = ( ( rtB . efjglo0jpm - rtX
. ldodtqkp4s [ 0 ] ) * 1000.0 - 2.0 * rtX . ldodtqkp4s [ 1 ] ) * 1000.0 ; rtB
. mjmtgjjzzj [ 3 ] = 0.0 ; rtB . iqgj4cowyc = rtP . Gain_Gain * b_OptVals [ 0
] ; rtB . p2qawryk4y = rtP . Gain_Gain_lf1hkkhtnn * rtB . iqgj4cowyc ; if (
rtDW . fcytalkur3 == 0.0 ) { rtDW . fcytalkur3 = 1.0 ; rtX . mxrhinqq03 [ 0 ]
= rtB . p2qawryk4y ; rtX . mxrhinqq03 [ 1 ] = 0.0 ; } rtB . ey5rpjheu5 [ 0 ]
= rtX . mxrhinqq03 [ 0 ] ; rtB . ey5rpjheu5 [ 1 ] = rtX . mxrhinqq03 [ 1 ] ;
rtB . ey5rpjheu5 [ 2 ] = ( ( rtB . p2qawryk4y - rtX . mxrhinqq03 [ 0 ] ) *
1000.0 - 2.0 * rtX . mxrhinqq03 [ 1 ] ) * 1000.0 ; rtB . ey5rpjheu5 [ 3 ] =
0.0 ; rtB . jbflhrvxr3 = rtP . Gain1_Gain * b_OptVals [ 9 ] ; rtB .
o3caeg22xm = rtP . Gain1_Gain_n4cvaldzyx * rtB . jbflhrvxr3 ; if ( rtDW .
mznnwa3jrm == 0.0 ) { rtDW . mznnwa3jrm = 1.0 ; rtX . d2me05llor [ 0 ] = rtB
. o3caeg22xm ; rtX . d2me05llor [ 1 ] = 0.0 ; } rtB . d4pikybbay [ 0 ] = rtX
. d2me05llor [ 0 ] ; rtB . d4pikybbay [ 1 ] = rtX . d2me05llor [ 1 ] ; rtB .
d4pikybbay [ 2 ] = ( ( rtB . o3caeg22xm - rtX . d2me05llor [ 0 ] ) * 1000.0 -
2.0 * rtX . d2me05llor [ 1 ] ) * 1000.0 ; rtB . d4pikybbay [ 3 ] = 0.0 ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { e0p5cszha5 ( rtP . Constant6_Value , rtP .
Constant8_Value , rtP . Constant7_Value , rtP . Constant1_Value , & rtB .
lolmohwkmq ) ; } if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . fs1jne3mev = rtB .
lolmohwkmq . ovgwheqnqh ; } if ( rtDW . gja3qfiayv == 0.0 ) { rtDW .
gja3qfiayv = 1.0 ; rtX . ke4pfrc4tx [ 0 ] = rtDW . fs1jne3mev ; rtX .
ke4pfrc4tx [ 1 ] = 0.0 ; } rtB . jgqcqpxn4x [ 0 ] = rtX . ke4pfrc4tx [ 0 ] ;
rtB . jgqcqpxn4x [ 1 ] = rtX . ke4pfrc4tx [ 1 ] ; rtB . jgqcqpxn4x [ 2 ] = (
( rtDW . fs1jne3mev - rtX . ke4pfrc4tx [ 0 ] ) * 1000.0 - 2.0 * rtX .
ke4pfrc4tx [ 1 ] ) * 1000.0 ; rtB . jgqcqpxn4x [ 3 ] = 0.0 ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . cdjd2gowev = rtP .
Gain_Gain_krn1x3gc2r * rtB . lolmohwkmq . j0rc1se3o4 * rtP .
Gain_Gain_kvivx2t5tl ; } if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . mb1tkpm0oo
= rtB . cdjd2gowev ; } if ( rtDW . liafyk0sq0 == 0.0 ) { rtDW . liafyk0sq0 =
1.0 ; rtX . br3slk5vda [ 0 ] = rtDW . mb1tkpm0oo ; rtX . br3slk5vda [ 1 ] =
0.0 ; } rtB . nk4fjtzt35 [ 0 ] = rtX . br3slk5vda [ 0 ] ; rtB . nk4fjtzt35 [
1 ] = rtX . br3slk5vda [ 1 ] ; rtB . nk4fjtzt35 [ 2 ] = ( ( rtDW . mb1tkpm0oo
- rtX . br3slk5vda [ 0 ] ) * 1000.0 - 2.0 * rtX . br3slk5vda [ 1 ] ) * 1000.0
; rtB . nk4fjtzt35 [ 3 ] = 0.0 ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB .
am4ocgktdw = rtP . Gain1_Gain_amreev2b1i * rtB . lolmohwkmq . ntyw452pod *
rtP . Gain1_Gain_k41kpwc3hi ; } if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
nlprusk0lb = rtB . am4ocgktdw ; } if ( rtDW . e3wlnzdn2r == 0.0 ) { rtDW .
e3wlnzdn2r = 1.0 ; rtX . mpwv4qwqhx [ 0 ] = rtDW . nlprusk0lb ; rtX .
mpwv4qwqhx [ 1 ] = 0.0 ; } rtB . d3anamivak [ 0 ] = rtX . mpwv4qwqhx [ 0 ] ;
rtB . d3anamivak [ 1 ] = rtX . mpwv4qwqhx [ 1 ] ; rtB . d3anamivak [ 2 ] = (
( rtDW . nlprusk0lb - rtX . mpwv4qwqhx [ 0 ] ) * 1000.0 - 2.0 * rtX .
mpwv4qwqhx [ 1 ] ) * 1000.0 ; rtB . d3anamivak [ 3 ] = 0.0 ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { e0p5cszha5 ( rtP . Constant9_Value , rtP .
Constant11_Value , rtP . Constant10_Value , rtP . Constant2_Value , & rtB .
iu53rp0sko ) ; } if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . imp34ktok4 = rtB .
iu53rp0sko . ovgwheqnqh ; } if ( rtDW . fegt1ehs0h == 0.0 ) { rtDW .
fegt1ehs0h = 1.0 ; rtX . jbd5a5gzgp [ 0 ] = rtDW . imp34ktok4 ; rtX .
jbd5a5gzgp [ 1 ] = 0.0 ; } rtB . hmjbsyhvew [ 0 ] = rtX . jbd5a5gzgp [ 0 ] ;
rtB . hmjbsyhvew [ 1 ] = rtX . jbd5a5gzgp [ 1 ] ; rtB . hmjbsyhvew [ 2 ] = (
( rtDW . imp34ktok4 - rtX . jbd5a5gzgp [ 0 ] ) * 1000.0 - 2.0 * rtX .
jbd5a5gzgp [ 1 ] ) * 1000.0 ; rtB . hmjbsyhvew [ 3 ] = 0.0 ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . kcw4co0adz = rtP .
Gain_Gain_mapktpvvuh * rtB . iu53rp0sko . j0rc1se3o4 * rtP .
Gain_Gain_ehckjz1434 ; } if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . naplv55ipv
= rtB . kcw4co0adz ; } if ( rtDW . p55ar3qyut == 0.0 ) { rtDW . p55ar3qyut =
1.0 ; rtX . cq3qm13szg [ 0 ] = rtDW . naplv55ipv ; rtX . cq3qm13szg [ 1 ] =
0.0 ; } rtB . bvc43hgq3b [ 0 ] = rtX . cq3qm13szg [ 0 ] ; rtB . bvc43hgq3b [
1 ] = rtX . cq3qm13szg [ 1 ] ; rtB . bvc43hgq3b [ 2 ] = ( ( rtDW . naplv55ipv
- rtX . cq3qm13szg [ 0 ] ) * 1000.0 - 2.0 * rtX . cq3qm13szg [ 1 ] ) * 1000.0
; rtB . bvc43hgq3b [ 3 ] = 0.0 ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB .
aa23nqqdmc = rtP . Gain1_Gain_itppknz00q * rtB . iu53rp0sko . ntyw452pod *
rtP . Gain1_Gain_h3sey3zqp2 ; } if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
pbcfqgaa1q = rtB . aa23nqqdmc ; } if ( rtDW . dcf5utnyxc == 0.0 ) { rtDW .
dcf5utnyxc = 1.0 ; rtX . dsxshkljpd [ 0 ] = rtDW . pbcfqgaa1q ; rtX .
dsxshkljpd [ 1 ] = 0.0 ; } rtB . mhtigldxbi [ 0 ] = rtX . dsxshkljpd [ 0 ] ;
rtB . mhtigldxbi [ 1 ] = rtX . dsxshkljpd [ 1 ] ; rtB . mhtigldxbi [ 2 ] = (
( rtDW . pbcfqgaa1q - rtX . dsxshkljpd [ 0 ] ) * 1000.0 - 2.0 * rtX .
dsxshkljpd [ 1 ] ) * 1000.0 ; rtB . mhtigldxbi [ 3 ] = 0.0 ; simulationData =
( NeslSimulationData * ) rtDW . luvxugyja4 ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 72 ;
simulationData -> mData -> mContStates . mX = & rtX . pi3sslfh45 [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 3 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . fx5xo5lbmd [ 0 ] ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
og2zcxhium ; first_output = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
first_output ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; first_output = ( ssGetMdlInfoPtr ( rtS ) ->
mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = first_output ; first_output = ssIsSolverCheckingCIC (
rtS ) ; simulationData -> mData -> mIsSolverCheckingCIC = first_output ;
first_output = ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData
-> mIsComputingJacobian = first_output ; simulationData -> mData ->
mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
first_output = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = first_output ; tmp_p [ 0 ] = 0 ; tmp [ 0 ] = rtB .
mjmtgjjzzj [ 0 ] ; tmp [ 1 ] = rtB . mjmtgjjzzj [ 1 ] ; tmp [ 2 ] = rtB .
mjmtgjjzzj [ 2 ] ; tmp [ 3 ] = rtB . mjmtgjjzzj [ 3 ] ; tmp_p [ 1 ] = 4 ; tmp
[ 4 ] = rtB . ey5rpjheu5 [ 0 ] ; tmp [ 5 ] = rtB . ey5rpjheu5 [ 1 ] ; tmp [ 6
] = rtB . ey5rpjheu5 [ 2 ] ; tmp [ 7 ] = rtB . ey5rpjheu5 [ 3 ] ; tmp_p [ 2 ]
= 8 ; tmp [ 8 ] = rtB . d4pikybbay [ 0 ] ; tmp [ 9 ] = rtB . d4pikybbay [ 1 ]
; tmp [ 10 ] = rtB . d4pikybbay [ 2 ] ; tmp [ 11 ] = rtB . d4pikybbay [ 3 ] ;
tmp_p [ 3 ] = 12 ; tmp [ 12 ] = rtB . jgqcqpxn4x [ 0 ] ; tmp [ 13 ] = rtB .
jgqcqpxn4x [ 1 ] ; tmp [ 14 ] = rtB . jgqcqpxn4x [ 2 ] ; tmp [ 15 ] = rtB .
jgqcqpxn4x [ 3 ] ; tmp_p [ 4 ] = 16 ; tmp [ 16 ] = rtB . nk4fjtzt35 [ 0 ] ;
tmp [ 17 ] = rtB . nk4fjtzt35 [ 1 ] ; tmp [ 18 ] = rtB . nk4fjtzt35 [ 2 ] ;
tmp [ 19 ] = rtB . nk4fjtzt35 [ 3 ] ; tmp_p [ 5 ] = 20 ; tmp [ 20 ] = rtB .
d3anamivak [ 0 ] ; tmp [ 21 ] = rtB . d3anamivak [ 1 ] ; tmp [ 22 ] = rtB .
d3anamivak [ 2 ] ; tmp [ 23 ] = rtB . d3anamivak [ 3 ] ; tmp_p [ 6 ] = 24 ;
tmp [ 24 ] = rtB . hmjbsyhvew [ 0 ] ; tmp [ 25 ] = rtB . hmjbsyhvew [ 1 ] ;
tmp [ 26 ] = rtB . hmjbsyhvew [ 2 ] ; tmp [ 27 ] = rtB . hmjbsyhvew [ 3 ] ;
tmp_p [ 7 ] = 28 ; tmp [ 28 ] = rtB . bvc43hgq3b [ 0 ] ; tmp [ 29 ] = rtB .
bvc43hgq3b [ 1 ] ; tmp [ 30 ] = rtB . bvc43hgq3b [ 2 ] ; tmp [ 31 ] = rtB .
bvc43hgq3b [ 3 ] ; tmp_p [ 8 ] = 32 ; tmp [ 32 ] = rtB . mhtigldxbi [ 0 ] ;
tmp [ 33 ] = rtB . mhtigldxbi [ 1 ] ; tmp [ 34 ] = rtB . mhtigldxbi [ 2 ] ;
tmp [ 35 ] = rtB . mhtigldxbi [ 3 ] ; tmp_p [ 9 ] = 36 ; simulationData ->
mData -> mInputValues . mN = 36 ; simulationData -> mData -> mInputValues .
mX = & tmp [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 10 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_p [ 0 ] ;
simulationData -> mData -> mOutputs . mN = 75 ; simulationData -> mData ->
mOutputs . mX = & rtB . m2ws5ju1b4 [ 0 ] ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . k00imi24sj ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; i = ne_simulator_method ( ( NeslSimulator * ) rtDW . gwpbgup500 ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( i != 0 ) {
first_output = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
first_output ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } if ( ssIsMajorTimeStep ( rtS ) &&
simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } simulationData = (
NeslSimulationData * ) rtDW . psowfugydz ; time_p = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_p ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . bj5e50514f ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . cjwakeaooj ;
first_output = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) ->
foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
first_output ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; first_output = ( ssGetMdlInfoPtr ( rtS ) ->
mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = first_output ; first_output = ssIsSolverCheckingCIC (
rtS ) ; simulationData -> mData -> mIsSolverCheckingCIC = first_output ;
simulationData -> mData -> mIsComputingJacobian = false ; simulationData ->
mData -> mIsEvaluatingF0 = false ; first_output = ssIsSolverRequestingReset (
rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = first_output ;
tmp_i [ 0 ] = 0 ; tmp_e [ 0 ] = rtB . mjmtgjjzzj [ 0 ] ; tmp_e [ 1 ] = rtB .
mjmtgjjzzj [ 1 ] ; tmp_e [ 2 ] = rtB . mjmtgjjzzj [ 2 ] ; tmp_e [ 3 ] = rtB .
mjmtgjjzzj [ 3 ] ; tmp_i [ 1 ] = 4 ; tmp_e [ 4 ] = rtB . ey5rpjheu5 [ 0 ] ;
tmp_e [ 5 ] = rtB . ey5rpjheu5 [ 1 ] ; tmp_e [ 6 ] = rtB . ey5rpjheu5 [ 2 ] ;
tmp_e [ 7 ] = rtB . ey5rpjheu5 [ 3 ] ; tmp_i [ 2 ] = 8 ; tmp_e [ 8 ] = rtB .
d4pikybbay [ 0 ] ; tmp_e [ 9 ] = rtB . d4pikybbay [ 1 ] ; tmp_e [ 10 ] = rtB
. d4pikybbay [ 2 ] ; tmp_e [ 11 ] = rtB . d4pikybbay [ 3 ] ; tmp_i [ 3 ] = 12
; tmp_e [ 12 ] = rtB . jgqcqpxn4x [ 0 ] ; tmp_e [ 13 ] = rtB . jgqcqpxn4x [ 1
] ; tmp_e [ 14 ] = rtB . jgqcqpxn4x [ 2 ] ; tmp_e [ 15 ] = rtB . jgqcqpxn4x [
3 ] ; tmp_i [ 4 ] = 16 ; tmp_e [ 16 ] = rtB . nk4fjtzt35 [ 0 ] ; tmp_e [ 17 ]
= rtB . nk4fjtzt35 [ 1 ] ; tmp_e [ 18 ] = rtB . nk4fjtzt35 [ 2 ] ; tmp_e [ 19
] = rtB . nk4fjtzt35 [ 3 ] ; tmp_i [ 5 ] = 20 ; tmp_e [ 20 ] = rtB .
d3anamivak [ 0 ] ; tmp_e [ 21 ] = rtB . d3anamivak [ 1 ] ; tmp_e [ 22 ] = rtB
. d3anamivak [ 2 ] ; tmp_e [ 23 ] = rtB . d3anamivak [ 3 ] ; tmp_i [ 6 ] = 24
; tmp_e [ 24 ] = rtB . hmjbsyhvew [ 0 ] ; tmp_e [ 25 ] = rtB . hmjbsyhvew [ 1
] ; tmp_e [ 26 ] = rtB . hmjbsyhvew [ 2 ] ; tmp_e [ 27 ] = rtB . hmjbsyhvew [
3 ] ; tmp_i [ 7 ] = 28 ; tmp_e [ 28 ] = rtB . bvc43hgq3b [ 0 ] ; tmp_e [ 29 ]
= rtB . bvc43hgq3b [ 1 ] ; tmp_e [ 30 ] = rtB . bvc43hgq3b [ 2 ] ; tmp_e [ 31
] = rtB . bvc43hgq3b [ 3 ] ; tmp_i [ 8 ] = 32 ; tmp_e [ 32 ] = rtB .
mhtigldxbi [ 0 ] ; tmp_e [ 33 ] = rtB . mhtigldxbi [ 1 ] ; tmp_e [ 34 ] = rtB
. mhtigldxbi [ 2 ] ; tmp_e [ 35 ] = rtB . mhtigldxbi [ 3 ] ; tmp_i [ 9 ] = 36
; memcpy ( & tmp_e [ 36 ] , & rtB . m2ws5ju1b4 [ 0 ] , 75U * sizeof ( real_T
) ) ; tmp_i [ 10 ] = 111 ; simulationData -> mData -> mInputValues . mN = 111
; simulationData -> mData -> mInputValues . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mInputOffsets . mN = 11 ; simulationData -> mData
-> mInputOffsets . mX = & tmp_i [ 0 ] ; simulationData -> mData -> mOutputs .
mN = 117 ; simulationData -> mData -> mOutputs . mX = & rtB . fvdszxdfmk [ 0
] ; simulationData -> mData -> mSampleHits . mN = 0 ; simulationData -> mData
-> mSampleHits . mX = NULL ; simulationData -> mData ->
mIsFundamentalSampleHit = false ; simulationData -> mData -> mTolerances . mN
= 0 ; simulationData -> mData -> mTolerances . mX = NULL ; simulationData ->
mData -> mCstateHasChanged = false ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . bir0wi3sel ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . kia1gcj0ok ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( i != 0 ) {
first_output = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
first_output ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } if ( ssIsMajorTimeStep ( rtS ) &&
simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } UNUSED_PARAMETER ( tid
) ; } void MdlOutputsTID2 ( int_T tid ) { rtB . heotptkrgn = rtP .
Constant_Value_pgin54o4vu ; UNUSED_PARAMETER ( tid ) ; } void MdlUpdate (
int_T tid ) { NeslSimulationData * simulationData ; real_T time ; boolean_T
tmp ; real_T tmp_p [ 36 ] ; int_T tmp_e [ 10 ] ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; int32_T tmp_i ; char
* msg ; simulationData = ( NeslSimulationData * ) rtDW . luvxugyja4 ; time =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time ; simulationData -> mData -> mContStates . mN
= 72 ; simulationData -> mData -> mContStates . mX = & rtX . pi3sslfh45 [ 0 ]
; simulationData -> mData -> mDiscStates . mN = 3 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . fx5xo5lbmd [ 0 ] ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
og2zcxhium ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS )
-> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB .
mjmtgjjzzj [ 0 ] ; tmp_p [ 1 ] = rtB . mjmtgjjzzj [ 1 ] ; tmp_p [ 2 ] = rtB .
mjmtgjjzzj [ 2 ] ; tmp_p [ 3 ] = rtB . mjmtgjjzzj [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . ey5rpjheu5 [ 0 ] ; tmp_p [ 5 ] = rtB . ey5rpjheu5 [ 1 ] ;
tmp_p [ 6 ] = rtB . ey5rpjheu5 [ 2 ] ; tmp_p [ 7 ] = rtB . ey5rpjheu5 [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . d4pikybbay [ 0 ] ; tmp_p [ 9 ] = rtB .
d4pikybbay [ 1 ] ; tmp_p [ 10 ] = rtB . d4pikybbay [ 2 ] ; tmp_p [ 11 ] = rtB
. d4pikybbay [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . jgqcqpxn4x [ 0 ]
; tmp_p [ 13 ] = rtB . jgqcqpxn4x [ 1 ] ; tmp_p [ 14 ] = rtB . jgqcqpxn4x [ 2
] ; tmp_p [ 15 ] = rtB . jgqcqpxn4x [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] =
rtB . nk4fjtzt35 [ 0 ] ; tmp_p [ 17 ] = rtB . nk4fjtzt35 [ 1 ] ; tmp_p [ 18 ]
= rtB . nk4fjtzt35 [ 2 ] ; tmp_p [ 19 ] = rtB . nk4fjtzt35 [ 3 ] ; tmp_e [ 5
] = 20 ; tmp_p [ 20 ] = rtB . d3anamivak [ 0 ] ; tmp_p [ 21 ] = rtB .
d3anamivak [ 1 ] ; tmp_p [ 22 ] = rtB . d3anamivak [ 2 ] ; tmp_p [ 23 ] = rtB
. d3anamivak [ 3 ] ; tmp_e [ 6 ] = 24 ; tmp_p [ 24 ] = rtB . hmjbsyhvew [ 0 ]
; tmp_p [ 25 ] = rtB . hmjbsyhvew [ 1 ] ; tmp_p [ 26 ] = rtB . hmjbsyhvew [ 2
] ; tmp_p [ 27 ] = rtB . hmjbsyhvew [ 3 ] ; tmp_e [ 7 ] = 28 ; tmp_p [ 28 ] =
rtB . bvc43hgq3b [ 0 ] ; tmp_p [ 29 ] = rtB . bvc43hgq3b [ 1 ] ; tmp_p [ 30 ]
= rtB . bvc43hgq3b [ 2 ] ; tmp_p [ 31 ] = rtB . bvc43hgq3b [ 3 ] ; tmp_e [ 8
] = 32 ; tmp_p [ 32 ] = rtB . mhtigldxbi [ 0 ] ; tmp_p [ 33 ] = rtB .
mhtigldxbi [ 1 ] ; tmp_p [ 34 ] = rtB . mhtigldxbi [ 2 ] ; tmp_p [ 35 ] = rtB
. mhtigldxbi [ 3 ] ; tmp_e [ 9 ] = 36 ; simulationData -> mData ->
mInputValues . mN = 36 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 10 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . k00imi24sj ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . gwpbgup500 ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( tmp_i != 0 ) {
tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID2 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) {
NeslSimulationData * simulationData ; real_T time ; boolean_T tmp ; real_T
tmp_p [ 36 ] ; int_T tmp_e [ 10 ] ; NeuDiagnosticManager * diagnosticManager
; NeuDiagnosticTree * diagnosticTree ; int32_T tmp_i ; char * msg ; XDot *
_rtXdot ; _rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ; _rtXdot -> ldodtqkp4s [
0 ] = rtX . ldodtqkp4s [ 1 ] ; _rtXdot -> ldodtqkp4s [ 1 ] = ( ( rtB .
efjglo0jpm - rtX . ldodtqkp4s [ 0 ] ) * 1000.0 - 2.0 * rtX . ldodtqkp4s [ 1 ]
) * 1000.0 ; _rtXdot -> mxrhinqq03 [ 0 ] = rtX . mxrhinqq03 [ 1 ] ; _rtXdot
-> mxrhinqq03 [ 1 ] = ( ( rtB . p2qawryk4y - rtX . mxrhinqq03 [ 0 ] ) *
1000.0 - 2.0 * rtX . mxrhinqq03 [ 1 ] ) * 1000.0 ; _rtXdot -> d2me05llor [ 0
] = rtX . d2me05llor [ 1 ] ; _rtXdot -> d2me05llor [ 1 ] = ( ( rtB .
o3caeg22xm - rtX . d2me05llor [ 0 ] ) * 1000.0 - 2.0 * rtX . d2me05llor [ 1 ]
) * 1000.0 ; _rtXdot -> ke4pfrc4tx [ 0 ] = rtX . ke4pfrc4tx [ 1 ] ; _rtXdot
-> ke4pfrc4tx [ 1 ] = ( ( rtDW . fs1jne3mev - rtX . ke4pfrc4tx [ 0 ] ) *
1000.0 - 2.0 * rtX . ke4pfrc4tx [ 1 ] ) * 1000.0 ; _rtXdot -> br3slk5vda [ 0
] = rtX . br3slk5vda [ 1 ] ; _rtXdot -> br3slk5vda [ 1 ] = ( ( rtDW .
mb1tkpm0oo - rtX . br3slk5vda [ 0 ] ) * 1000.0 - 2.0 * rtX . br3slk5vda [ 1 ]
) * 1000.0 ; _rtXdot -> mpwv4qwqhx [ 0 ] = rtX . mpwv4qwqhx [ 1 ] ; _rtXdot
-> mpwv4qwqhx [ 1 ] = ( ( rtDW . nlprusk0lb - rtX . mpwv4qwqhx [ 0 ] ) *
1000.0 - 2.0 * rtX . mpwv4qwqhx [ 1 ] ) * 1000.0 ; _rtXdot -> jbd5a5gzgp [ 0
] = rtX . jbd5a5gzgp [ 1 ] ; _rtXdot -> jbd5a5gzgp [ 1 ] = ( ( rtDW .
imp34ktok4 - rtX . jbd5a5gzgp [ 0 ] ) * 1000.0 - 2.0 * rtX . jbd5a5gzgp [ 1 ]
) * 1000.0 ; _rtXdot -> cq3qm13szg [ 0 ] = rtX . cq3qm13szg [ 1 ] ; _rtXdot
-> cq3qm13szg [ 1 ] = ( ( rtDW . naplv55ipv - rtX . cq3qm13szg [ 0 ] ) *
1000.0 - 2.0 * rtX . cq3qm13szg [ 1 ] ) * 1000.0 ; _rtXdot -> dsxshkljpd [ 0
] = rtX . dsxshkljpd [ 1 ] ; _rtXdot -> dsxshkljpd [ 1 ] = ( ( rtDW .
pbcfqgaa1q - rtX . dsxshkljpd [ 0 ] ) * 1000.0 - 2.0 * rtX . dsxshkljpd [ 1 ]
) * 1000.0 ; simulationData = ( NeslSimulationData * ) rtDW . luvxugyja4 ;
time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time ; simulationData -> mData ->
mContStates . mN = 72 ; simulationData -> mData -> mContStates . mX = & rtX .
pi3sslfh45 [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 3 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . fx5xo5lbmd [ 0 ] ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = & rtDW . og2zcxhium ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB .
mjmtgjjzzj [ 0 ] ; tmp_p [ 1 ] = rtB . mjmtgjjzzj [ 1 ] ; tmp_p [ 2 ] = rtB .
mjmtgjjzzj [ 2 ] ; tmp_p [ 3 ] = rtB . mjmtgjjzzj [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . ey5rpjheu5 [ 0 ] ; tmp_p [ 5 ] = rtB . ey5rpjheu5 [ 1 ] ;
tmp_p [ 6 ] = rtB . ey5rpjheu5 [ 2 ] ; tmp_p [ 7 ] = rtB . ey5rpjheu5 [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . d4pikybbay [ 0 ] ; tmp_p [ 9 ] = rtB .
d4pikybbay [ 1 ] ; tmp_p [ 10 ] = rtB . d4pikybbay [ 2 ] ; tmp_p [ 11 ] = rtB
. d4pikybbay [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . jgqcqpxn4x [ 0 ]
; tmp_p [ 13 ] = rtB . jgqcqpxn4x [ 1 ] ; tmp_p [ 14 ] = rtB . jgqcqpxn4x [ 2
] ; tmp_p [ 15 ] = rtB . jgqcqpxn4x [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] =
rtB . nk4fjtzt35 [ 0 ] ; tmp_p [ 17 ] = rtB . nk4fjtzt35 [ 1 ] ; tmp_p [ 18 ]
= rtB . nk4fjtzt35 [ 2 ] ; tmp_p [ 19 ] = rtB . nk4fjtzt35 [ 3 ] ; tmp_e [ 5
] = 20 ; tmp_p [ 20 ] = rtB . d3anamivak [ 0 ] ; tmp_p [ 21 ] = rtB .
d3anamivak [ 1 ] ; tmp_p [ 22 ] = rtB . d3anamivak [ 2 ] ; tmp_p [ 23 ] = rtB
. d3anamivak [ 3 ] ; tmp_e [ 6 ] = 24 ; tmp_p [ 24 ] = rtB . hmjbsyhvew [ 0 ]
; tmp_p [ 25 ] = rtB . hmjbsyhvew [ 1 ] ; tmp_p [ 26 ] = rtB . hmjbsyhvew [ 2
] ; tmp_p [ 27 ] = rtB . hmjbsyhvew [ 3 ] ; tmp_e [ 7 ] = 28 ; tmp_p [ 28 ] =
rtB . bvc43hgq3b [ 0 ] ; tmp_p [ 29 ] = rtB . bvc43hgq3b [ 1 ] ; tmp_p [ 30 ]
= rtB . bvc43hgq3b [ 2 ] ; tmp_p [ 31 ] = rtB . bvc43hgq3b [ 3 ] ; tmp_e [ 8
] = 32 ; tmp_p [ 32 ] = rtB . mhtigldxbi [ 0 ] ; tmp_p [ 33 ] = rtB .
mhtigldxbi [ 1 ] ; tmp_p [ 34 ] = rtB . mhtigldxbi [ 2 ] ; tmp_p [ 35 ] = rtB
. mhtigldxbi [ 3 ] ; tmp_e [ 9 ] = 36 ; simulationData -> mData ->
mInputValues . mN = 36 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 10 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mDx . mN = 72 ; simulationData -> mData -> mDx .
mX = & _rtXdot -> pi3sslfh45 [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . k00imi24sj ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . gwpbgup500 ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlProjection ( void ) { NeslSimulationData * simulationData ;
real_T time ; boolean_T tmp ; real_T tmp_p [ 36 ] ; int_T tmp_e [ 10 ] ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; int32_T tmp_i ; char * msg ; simulationData = ( NeslSimulationData * ) rtDW
. luvxugyja4 ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN
= 1 ; simulationData -> mData -> mTime . mX = & time ; simulationData ->
mData -> mContStates . mN = 72 ; simulationData -> mData -> mContStates . mX
= & rtX . pi3sslfh45 [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 3
; simulationData -> mData -> mDiscStates . mX = & rtDW . fx5xo5lbmd [ 0 ] ;
simulationData -> mData -> mModeVector . mN = 0 ; simulationData -> mData ->
mModeVector . mX = & rtDW . og2zcxhium ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB .
mjmtgjjzzj [ 0 ] ; tmp_p [ 1 ] = rtB . mjmtgjjzzj [ 1 ] ; tmp_p [ 2 ] = rtB .
mjmtgjjzzj [ 2 ] ; tmp_p [ 3 ] = rtB . mjmtgjjzzj [ 3 ] ; tmp_e [ 1 ] = 4 ;
tmp_p [ 4 ] = rtB . ey5rpjheu5 [ 0 ] ; tmp_p [ 5 ] = rtB . ey5rpjheu5 [ 1 ] ;
tmp_p [ 6 ] = rtB . ey5rpjheu5 [ 2 ] ; tmp_p [ 7 ] = rtB . ey5rpjheu5 [ 3 ] ;
tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . d4pikybbay [ 0 ] ; tmp_p [ 9 ] = rtB .
d4pikybbay [ 1 ] ; tmp_p [ 10 ] = rtB . d4pikybbay [ 2 ] ; tmp_p [ 11 ] = rtB
. d4pikybbay [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = rtB . jgqcqpxn4x [ 0 ]
; tmp_p [ 13 ] = rtB . jgqcqpxn4x [ 1 ] ; tmp_p [ 14 ] = rtB . jgqcqpxn4x [ 2
] ; tmp_p [ 15 ] = rtB . jgqcqpxn4x [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] =
rtB . nk4fjtzt35 [ 0 ] ; tmp_p [ 17 ] = rtB . nk4fjtzt35 [ 1 ] ; tmp_p [ 18 ]
= rtB . nk4fjtzt35 [ 2 ] ; tmp_p [ 19 ] = rtB . nk4fjtzt35 [ 3 ] ; tmp_e [ 5
] = 20 ; tmp_p [ 20 ] = rtB . d3anamivak [ 0 ] ; tmp_p [ 21 ] = rtB .
d3anamivak [ 1 ] ; tmp_p [ 22 ] = rtB . d3anamivak [ 2 ] ; tmp_p [ 23 ] = rtB
. d3anamivak [ 3 ] ; tmp_e [ 6 ] = 24 ; tmp_p [ 24 ] = rtB . hmjbsyhvew [ 0 ]
; tmp_p [ 25 ] = rtB . hmjbsyhvew [ 1 ] ; tmp_p [ 26 ] = rtB . hmjbsyhvew [ 2
] ; tmp_p [ 27 ] = rtB . hmjbsyhvew [ 3 ] ; tmp_e [ 7 ] = 28 ; tmp_p [ 28 ] =
rtB . bvc43hgq3b [ 0 ] ; tmp_p [ 29 ] = rtB . bvc43hgq3b [ 1 ] ; tmp_p [ 30 ]
= rtB . bvc43hgq3b [ 2 ] ; tmp_p [ 31 ] = rtB . bvc43hgq3b [ 3 ] ; tmp_e [ 8
] = 32 ; tmp_p [ 32 ] = rtB . mhtigldxbi [ 0 ] ; tmp_p [ 33 ] = rtB .
mhtigldxbi [ 1 ] ; tmp_p [ 34 ] = rtB . mhtigldxbi [ 2 ] ; tmp_p [ 35 ] = rtB
. mhtigldxbi [ 3 ] ; tmp_e [ 9 ] = 36 ; simulationData -> mData ->
mInputValues . mN = 36 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 10 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . k00imi24sj ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . gwpbgup500 ,
NESL_SIM_PROJECTION , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlZeroCrossings ( void ) { NeslSimulationData * simulationData
; real_T time ; boolean_T tmp ; real_T tmp_p [ 36 ] ; int_T tmp_e [ 10 ] ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; int32_T tmp_i ; char * msg ; ZCV * _rtZCSV ; _rtZCSV = ( ( ZCV * )
ssGetSolverZcSignalVector ( rtS ) ) ; simulationData = ( NeslSimulationData *
) rtDW . luvxugyja4 ; time = ssGetT ( rtS ) ; simulationData -> mData ->
mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time ;
simulationData -> mData -> mContStates . mN = 72 ; simulationData -> mData ->
mContStates . mX = & rtX . pi3sslfh45 [ 0 ] ; simulationData -> mData ->
mDiscStates . mN = 3 ; simulationData -> mData -> mDiscStates . mX = & rtDW .
fx5xo5lbmd [ 0 ] ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . og2zcxhium ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ; tmp_e [
0 ] = 0 ; tmp_p [ 0 ] = rtB . mjmtgjjzzj [ 0 ] ; tmp_p [ 1 ] = rtB .
mjmtgjjzzj [ 1 ] ; tmp_p [ 2 ] = rtB . mjmtgjjzzj [ 2 ] ; tmp_p [ 3 ] = rtB .
mjmtgjjzzj [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . ey5rpjheu5 [ 0 ] ;
tmp_p [ 5 ] = rtB . ey5rpjheu5 [ 1 ] ; tmp_p [ 6 ] = rtB . ey5rpjheu5 [ 2 ] ;
tmp_p [ 7 ] = rtB . ey5rpjheu5 [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB .
d4pikybbay [ 0 ] ; tmp_p [ 9 ] = rtB . d4pikybbay [ 1 ] ; tmp_p [ 10 ] = rtB
. d4pikybbay [ 2 ] ; tmp_p [ 11 ] = rtB . d4pikybbay [ 3 ] ; tmp_e [ 3 ] = 12
; tmp_p [ 12 ] = rtB . jgqcqpxn4x [ 0 ] ; tmp_p [ 13 ] = rtB . jgqcqpxn4x [ 1
] ; tmp_p [ 14 ] = rtB . jgqcqpxn4x [ 2 ] ; tmp_p [ 15 ] = rtB . jgqcqpxn4x [
3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] = rtB . nk4fjtzt35 [ 0 ] ; tmp_p [ 17 ]
= rtB . nk4fjtzt35 [ 1 ] ; tmp_p [ 18 ] = rtB . nk4fjtzt35 [ 2 ] ; tmp_p [ 19
] = rtB . nk4fjtzt35 [ 3 ] ; tmp_e [ 5 ] = 20 ; tmp_p [ 20 ] = rtB .
d3anamivak [ 0 ] ; tmp_p [ 21 ] = rtB . d3anamivak [ 1 ] ; tmp_p [ 22 ] = rtB
. d3anamivak [ 2 ] ; tmp_p [ 23 ] = rtB . d3anamivak [ 3 ] ; tmp_e [ 6 ] = 24
; tmp_p [ 24 ] = rtB . hmjbsyhvew [ 0 ] ; tmp_p [ 25 ] = rtB . hmjbsyhvew [ 1
] ; tmp_p [ 26 ] = rtB . hmjbsyhvew [ 2 ] ; tmp_p [ 27 ] = rtB . hmjbsyhvew [
3 ] ; tmp_e [ 7 ] = 28 ; tmp_p [ 28 ] = rtB . bvc43hgq3b [ 0 ] ; tmp_p [ 29 ]
= rtB . bvc43hgq3b [ 1 ] ; tmp_p [ 30 ] = rtB . bvc43hgq3b [ 2 ] ; tmp_p [ 31
] = rtB . bvc43hgq3b [ 3 ] ; tmp_e [ 8 ] = 32 ; tmp_p [ 32 ] = rtB .
mhtigldxbi [ 0 ] ; tmp_p [ 33 ] = rtB . mhtigldxbi [ 1 ] ; tmp_p [ 34 ] = rtB
. mhtigldxbi [ 2 ] ; tmp_p [ 35 ] = rtB . mhtigldxbi [ 3 ] ; tmp_e [ 9 ] = 36
; simulationData -> mData -> mInputValues . mN = 36 ; simulationData -> mData
-> mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 10 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0 ] ; simulationData -> mData -> mNonSampledZCs . mN = 3 ;
simulationData -> mData -> mNonSampledZCs . mX = & _rtZCSV -> nacjhvmcs2 ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . k00imi24sj ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . gwpbgup500 ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_i !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlTerminate ( void ) { neu_destroy_diagnostic_manager ( (
NeuDiagnosticManager * ) rtDW . k00imi24sj ) ; nesl_destroy_simulation_data (
( NeslSimulationData * ) rtDW . luvxugyja4 ) ; nesl_erase_simulator (
"triped/Solver Configuration_1" ) ; neu_destroy_diagnostic_manager ( (
NeuDiagnosticManager * ) rtDW . bir0wi3sel ) ; nesl_destroy_simulation_data (
( NeslSimulationData * ) rtDW . psowfugydz ) ; nesl_erase_simulator (
"triped/Solver Configuration_1" ) ; if ( rt_slioCatalogue ( ) != ( NULL ) ) {
void * * slioCatalogueAddr = rt_slioCatalogueAddr ( ) ;
rtwSaveDatasetsToMatFile ( rtwGetPointerFromUniquePtr ( rt_slioCatalogue ( )
) , rt_GetMatSigstreamLoggingFileName ( ) ) ; rtwTerminateSlioCatalogue (
slioCatalogueAddr ) ; * slioCatalogueAddr = NULL ; } } void
MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 90 ) ;
ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ; ssSetNumU (
rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ; ssSetNumSampleTimes ( rtS ,
2 ) ; ssSetNumBlocks ( rtS , 267 ) ; ssSetNumBlockIO ( rtS , 29 ) ;
ssSetNumBlockParams ( rtS , 33 ) ; } void MdlInitializeSampleTimes ( void ) {
ssSetSampleTime ( rtS , 0 , 0.0 ) ; ssSetSampleTime ( rtS , 1 , 0.0 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 1.0 ) ; }
void raccel_set_checksum ( ) { ssSetChecksumVal ( rtS , 0 , 223868464U ) ;
ssSetChecksumVal ( rtS , 1 , 1825467118U ) ; ssSetChecksumVal ( rtS , 2 ,
79481394U ) ; ssSetChecksumVal ( rtS , 3 , 920024568U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( void ) { static struct _ssMdlInfo mdlInfo
; ( void ) memset ( ( char * ) rtS , 0 , sizeof ( SimStruct ) ) ; ( void )
memset ( ( char * ) & mdlInfo , 0 , sizeof ( struct _ssMdlInfo ) ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { real_T * x = ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ;
( void ) memset ( ( void * ) x , 0 , sizeof ( X ) ) ; } { void * dwork = (
void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork ,
0 , sizeof ( DW ) ) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset (
( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS
, & dtInfo ) ; dtInfo . numDataTypes = 14 ; dtInfo . dataTypeSizes = &
rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ;
dtInfo . BTransTable = & rtBTransTable ; dtInfo . PTransTable = &
rtPTransTable ; dtInfo . dataTypeInfoTable = rtDataTypeInfoTable ; }
triped_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive ( rtS , true
) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2
) ; ssSetModelName ( rtS , "triped" ) ; ssSetPath ( rtS , "triped" ) ;
ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal ( rtS , 1.0 ) ; { static RTWLogInfo
rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval = NULL ;
ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { { static int_T
rt_LoggedStateWidths [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 4 , 3 , 4 , 3 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 4 , 3 , 4 , 3 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 4 ,
3 , 4 , 3 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 3 } ; static int_T rt_LoggedStateNumDimensions
[ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 } ; static int_T rt_LoggedStateDimensions [ ] = { 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 4 , 3 , 4 , 3 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 4 , 3 , 4 , 3 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 4 , 3 , 4 , 3 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 3 } ; static
boolean_T rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static BuiltInDTypeId
rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ; static int_T
rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static RTWPreprocessingFcnPtr
rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) } ; static
const char_T * rt_LoggedStateLabels [ ] = { "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "Discrete" , "FirstOutput" , "Discrete" , "FirstOutput" ,
"Discrete" , "FirstOutput" , "Discrete" , "FirstOutput" , "Discrete" ,
"FirstOutput" , "Discrete" , "FirstOutput" , "Discrete" , "FirstOutput" ,
"Discrete" , "FirstOutput" , "Discrete" , "FirstOutput" , "Discrete" } ;
static const char_T * rt_LoggedStateBlockNames [ ] = {
"triped/TriPed/Leg_0/Simulink-PS\nConverter1" ,
"triped/TriPed/Leg_0/Simulink-PS\nConverter1" ,
"triped/TriPed/Leg_0/Simulink-PS\nConverter" ,
"triped/TriPed/Leg_0/Simulink-PS\nConverter" ,
"triped/TriPed/Leg_0/Simulink-PS\nConverter2" ,
"triped/TriPed/Leg_0/Simulink-PS\nConverter2" ,
"triped/TriPed/Leg_1/Simulink-PS\nConverter1" ,
"triped/TriPed/Leg_1/Simulink-PS\nConverter1" ,
"triped/TriPed/Leg_1/Simulink-PS\nConverter" ,
"triped/TriPed/Leg_1/Simulink-PS\nConverter" ,
"triped/TriPed/Leg_1/Simulink-PS\nConverter2" ,
"triped/TriPed/Leg_1/Simulink-PS\nConverter2" ,
"triped/TriPed/Leg_2/Simulink-PS\nConverter1" ,
"triped/TriPed/Leg_2/Simulink-PS\nConverter1" ,
"triped/TriPed/Leg_2/Simulink-PS\nConverter" ,
"triped/TriPed/Leg_2/Simulink-PS\nConverter" ,
"triped/TriPed/Leg_2/Simulink-PS\nConverter2" ,
"triped/TriPed/Leg_2/Simulink-PS\nConverter2" ,
"triped/TriPed/Leg_0/SubChain 0/LCS0_Gimbal_Joint" ,
"triped/TriPed/Leg_0/SubChain 0/LCS0_Gimbal_Joint" ,
"triped/TriPed/Leg_0/SubChain 0/LCS0_Gimbal_Joint" ,
"triped/TriPed/Leg_0/SubChain 0/LCS0_Gimbal_Joint" ,
"triped/TriPed/Leg_0/SubChain 0/LCS0_Gimbal_Joint" ,
"triped/TriPed/Leg_0/SubChain 0/LCS0_Gimbal_Joint" ,
"triped/TriPed/Leg_0/OpenSubChain/LL_revolute_Joint" ,
"triped/TriPed/Leg_0/OpenSubChain/LL_revolute_Joint" ,
"triped/TriPed/Leg_0/SubChain 1/Coupling01_1_Spherical_Joint" ,
"triped/TriPed/Leg_0/SubChain 1/Coupling01_1_Spherical_Joint" ,
"triped/TriPed/Leg_0/SubChain 2/Coupling02_1_Spherical_Joint" ,
"triped/TriPed/Leg_0/SubChain 2/Coupling02_1_Spherical_Joint" ,
"triped/TriPed/Leg_1/SubChain 0/LCS0_Gimbal_Joint" ,
"triped/TriPed/Leg_1/SubChain 0/LCS0_Gimbal_Joint" ,
"triped/TriPed/Leg_1/SubChain 0/LCS0_Gimbal_Joint" ,
"triped/TriPed/Leg_1/SubChain 0/LCS0_Gimbal_Joint" ,
"triped/TriPed/Leg_1/SubChain 0/LCS0_Gimbal_Joint" ,
"triped/TriPed/Leg_1/SubChain 0/LCS0_Gimbal_Joint" ,
"triped/TriPed/Leg_1/OpenSubChain/LL_revolute_Joint" ,
"triped/TriPed/Leg_1/OpenSubChain/LL_revolute_Joint" ,
"triped/TriPed/Leg_1/SubChain 1/Coupling01_1_Spherical_Joint" ,
"triped/TriPed/Leg_1/SubChain 1/Coupling01_1_Spherical_Joint" ,
"triped/TriPed/Leg_1/SubChain 2/Coupling02_1_Spherical_Joint" ,
"triped/TriPed/Leg_1/SubChain 2/Coupling02_1_Spherical_Joint" ,
"triped/TriPed/Leg_2/SubChain 0/LCS0_Gimbal_Joint" ,
"triped/TriPed/Leg_2/SubChain 0/LCS0_Gimbal_Joint" ,
"triped/TriPed/Leg_2/SubChain 0/LCS0_Gimbal_Joint" ,
"triped/TriPed/Leg_2/SubChain 0/LCS0_Gimbal_Joint" ,
"triped/TriPed/Leg_2/SubChain 0/LCS0_Gimbal_Joint" ,
"triped/TriPed/Leg_2/SubChain 0/LCS0_Gimbal_Joint" ,
"triped/TriPed/Leg_2/OpenSubChain/LL_revolute_Joint" ,
"triped/TriPed/Leg_2/OpenSubChain/LL_revolute_Joint" ,
"triped/TriPed/Leg_2/SubChain 1/Coupling01_1_Spherical_Joint" ,
"triped/TriPed/Leg_2/SubChain 1/Coupling01_1_Spherical_Joint" ,
"triped/TriPed/Leg_2/SubChain 2/Coupling02_1_Spherical_Joint" ,
"triped/TriPed/Leg_2/SubChain 2/Coupling02_1_Spherical_Joint" ,
"triped/TriPed/Leg_0/OpenSubChain/leg_extend_to_LL_GearConstraint" ,
"triped/TriPed/Leg_0/OpenSubChain/leg_extend_to_LL_GearConstraint" ,
"triped/TriPed/Leg_1/OpenSubChain/leg_extend_to_LL_GearConstraint" ,
"triped/TriPed/Leg_1/OpenSubChain/leg_extend_to_LL_GearConstraint" ,
"triped/TriPed/Leg_2/OpenSubChain/leg_extend_to_LL_GearConstraint" ,
"triped/TriPed/Leg_2/OpenSubChain/leg_extend_to_LL_GearConstraint" ,
"triped/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1" ,
"triped/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1" ,
"triped/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1" ,
"triped/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1" ,
"triped/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1" ,
"triped/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1" ,
"triped/Solver\nConfiguration/EVAL_KEY/INPUT_5_1_1" ,
"triped/Solver\nConfiguration/EVAL_KEY/INPUT_5_1_1" ,
"triped/Solver\nConfiguration/EVAL_KEY/INPUT_4_1_1" ,
"triped/Solver\nConfiguration/EVAL_KEY/INPUT_4_1_1" ,
"triped/Solver\nConfiguration/EVAL_KEY/INPUT_6_1_1" ,
"triped/Solver\nConfiguration/EVAL_KEY/INPUT_6_1_1" ,
"triped/Solver\nConfiguration/EVAL_KEY/INPUT_8_1_1" ,
"triped/Solver\nConfiguration/EVAL_KEY/INPUT_8_1_1" ,
"triped/Solver\nConfiguration/EVAL_KEY/INPUT_7_1_1" ,
"triped/Solver\nConfiguration/EVAL_KEY/INPUT_7_1_1" ,
"triped/Solver\nConfiguration/EVAL_KEY/INPUT_9_1_1" ,
"triped/Solver\nConfiguration/EVAL_KEY/INPUT_9_1_1" ,
"triped/Solver\nConfiguration/EVAL_KEY/STATE_1" } ; static const char_T *
rt_LoggedStateNames [ ] = {
"triped.TriPed.Leg_0.Simulink_PS_Converter1.outputFiltered_4231925902_0" ,
"triped.TriPed.Leg_0.Simulink_PS_Converter1.outputFiltered_4231925902_1" ,
"triped.TriPed.Leg_0.Simulink_PS_Converter.outputFiltered_3147721310_0" ,
"triped.TriPed.Leg_0.Simulink_PS_Converter.outputFiltered_3147721310_1" ,
"triped.TriPed.Leg_0.Simulink_PS_Converter2.outputFiltered_3244177726_0" ,
"triped.TriPed.Leg_0.Simulink_PS_Converter2.outputFiltered_3244177726_1" ,
"triped.TriPed.Leg_1.Simulink_PS_Converter1.outputFiltered_1310641310_0" ,
"triped.TriPed.Leg_1.Simulink_PS_Converter1.outputFiltered_1310641310_1" ,
"triped.TriPed.Leg_1.Simulink_PS_Converter.outputFiltered_1937696046_0" ,
"triped.TriPed.Leg_1.Simulink_PS_Converter.outputFiltered_1937696046_1" ,
"triped.TriPed.Leg_1.Simulink_PS_Converter2.outputFiltered_163493454_0" ,
"triped.TriPed.Leg_1.Simulink_PS_Converter2.outputFiltered_163493454_1" ,
"triped.TriPed.Leg_2.Simulink_PS_Converter1.outputFiltered_3062761519_0" ,
"triped.TriPed.Leg_2.Simulink_PS_Converter1.outputFiltered_3062761519_1" ,
"triped.TriPed.Leg_2.Simulink_PS_Converter.outputFiltered_887005182_0" ,
"triped.TriPed.Leg_2.Simulink_PS_Converter.outputFiltered_887005182_1" ,
"triped.TriPed.Leg_2.Simulink_PS_Converter2.outputFiltered_2347639199_0" ,
"triped.TriPed.Leg_2.Simulink_PS_Converter2.outputFiltered_2347639199_1" ,
"triped.TriPed.Leg_0.SubChain_0.LCS0_Gimbal_Joint.Rx.q" ,
"triped.TriPed.Leg_0.SubChain_0.LCS0_Gimbal_Joint.Ry.q" ,
"triped.TriPed.Leg_0.SubChain_0.LCS0_Gimbal_Joint.Rz.q" ,
"triped.TriPed.Leg_0.SubChain_0.LCS0_Gimbal_Joint.Rx.w" ,
"triped.TriPed.Leg_0.SubChain_0.LCS0_Gimbal_Joint.Ry.w" ,
"triped.TriPed.Leg_0.SubChain_0.LCS0_Gimbal_Joint.Rz.w" ,
"triped.TriPed.Leg_0.OpenSubChain.LL_revolute_Joint.Rz.q" ,
"triped.TriPed.Leg_0.OpenSubChain.LL_revolute_Joint.Rz.w" ,
"triped.TriPed.Leg_0.SubChain_1.Coupling01_1_Spherical_Joint.S.Q" ,
"triped.TriPed.Leg_0.SubChain_1.Coupling01_1_Spherical_Joint.S.w" ,
"triped.TriPed.Leg_0.SubChain_2.Coupling02_1_Spherical_Joint.S.Q" ,
"triped.TriPed.Leg_0.SubChain_2.Coupling02_1_Spherical_Joint.S.w" ,
"triped.TriPed.Leg_1.SubChain_0.LCS0_Gimbal_Joint.Rx.q" ,
"triped.TriPed.Leg_1.SubChain_0.LCS0_Gimbal_Joint.Ry.q" ,
"triped.TriPed.Leg_1.SubChain_0.LCS0_Gimbal_Joint.Rz.q" ,
"triped.TriPed.Leg_1.SubChain_0.LCS0_Gimbal_Joint.Rx.w" ,
"triped.TriPed.Leg_1.SubChain_0.LCS0_Gimbal_Joint.Ry.w" ,
"triped.TriPed.Leg_1.SubChain_0.LCS0_Gimbal_Joint.Rz.w" ,
"triped.TriPed.Leg_1.OpenSubChain.LL_revolute_Joint.Rz.q" ,
"triped.TriPed.Leg_1.OpenSubChain.LL_revolute_Joint.Rz.w" ,
"triped.TriPed.Leg_1.SubChain_1.Coupling01_1_Spherical_Joint.S.Q" ,
"triped.TriPed.Leg_1.SubChain_1.Coupling01_1_Spherical_Joint.S.w" ,
"triped.TriPed.Leg_1.SubChain_2.Coupling02_1_Spherical_Joint.S.Q" ,
"triped.TriPed.Leg_1.SubChain_2.Coupling02_1_Spherical_Joint.S.w" ,
"triped.TriPed.Leg_2.SubChain_0.LCS0_Gimbal_Joint.Rx.q" ,
"triped.TriPed.Leg_2.SubChain_0.LCS0_Gimbal_Joint.Ry.q" ,
"triped.TriPed.Leg_2.SubChain_0.LCS0_Gimbal_Joint.Rz.q" ,
"triped.TriPed.Leg_2.SubChain_0.LCS0_Gimbal_Joint.Rx.w" ,
"triped.TriPed.Leg_2.SubChain_0.LCS0_Gimbal_Joint.Ry.w" ,
"triped.TriPed.Leg_2.SubChain_0.LCS0_Gimbal_Joint.Rz.w" ,
"triped.TriPed.Leg_2.OpenSubChain.LL_revolute_Joint.Rz.q" ,
"triped.TriPed.Leg_2.OpenSubChain.LL_revolute_Joint.Rz.w" ,
"triped.TriPed.Leg_2.SubChain_1.Coupling01_1_Spherical_Joint.S.Q" ,
"triped.TriPed.Leg_2.SubChain_1.Coupling01_1_Spherical_Joint.S.w" ,
"triped.TriPed.Leg_2.SubChain_2.Coupling02_1_Spherical_Joint.S.Q" ,
"triped.TriPed.Leg_2.SubChain_2.Coupling02_1_Spherical_Joint.S.w" ,
"triped.TriPed.Leg_0.OpenSubChain.leg_extend_to_LL_GearConstraint.q" ,
"triped.TriPed.Leg_0.OpenSubChain.leg_extend_to_LL_GearConstraint.w" ,
"triped.TriPed.Leg_1.OpenSubChain.leg_extend_to_LL_GearConstraint.q" ,
"triped.TriPed.Leg_1.OpenSubChain.leg_extend_to_LL_GearConstraint.w" ,
"triped.TriPed.Leg_2.OpenSubChain.leg_extend_to_LL_GearConstraint.q" ,
"triped.TriPed.Leg_2.OpenSubChain.leg_extend_to_LL_GearConstraint.w" ,
"Discrete" , "FirstOutput" , "Discrete" , "FirstOutput" , "Discrete" ,
"FirstOutput" , "Discrete" , "FirstOutput" , "Discrete" , "FirstOutput" ,
"Discrete" , "FirstOutput" , "Discrete" , "FirstOutput" , "Discrete" ,
"FirstOutput" , "Discrete" , "FirstOutput" , "Discrete" } ; static boolean_T
rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static RTWLogDataTypeConvert
rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 ,
1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } ,
{ 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static RTWLogSignalInfo
rt_LoggedStateSignalInfo = { 79 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert } ; static void *
rt_LoggedStateSignalPtrs [ 79 ] ; rtliSetLogXSignalPtrs ( ssGetRTWLogInfo (
rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . ldodtqkp4s [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . ldodtqkp4s [ 1 ] ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . mxrhinqq03 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . mxrhinqq03 [ 1 ] ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . d2me05llor [ 0 ] ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . d2me05llor [ 1 ] ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . ke4pfrc4tx [ 0 ] ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . ke4pfrc4tx [ 1 ] ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtX . br3slk5vda [ 0 ] ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtX . br3slk5vda [ 1 ] ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtX . mpwv4qwqhx [ 0 ] ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtX . mpwv4qwqhx [ 1 ] ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtX . jbd5a5gzgp [ 0 ] ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) & rtX . jbd5a5gzgp [ 1 ] ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) & rtX . cq3qm13szg [ 0 ] ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) & rtX . cq3qm13szg [ 1 ] ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) & rtX . dsxshkljpd [ 0 ] ;
rt_LoggedStateSignalPtrs [ 17 ] = ( void * ) & rtX . dsxshkljpd [ 1 ] ;
rt_LoggedStateSignalPtrs [ 18 ] = ( void * ) & rtX . pi3sslfh45 [ 0 ] ;
rt_LoggedStateSignalPtrs [ 19 ] = ( void * ) & rtX . pi3sslfh45 [ 1 ] ;
rt_LoggedStateSignalPtrs [ 20 ] = ( void * ) & rtX . pi3sslfh45 [ 2 ] ;
rt_LoggedStateSignalPtrs [ 21 ] = ( void * ) & rtX . pi3sslfh45 [ 3 ] ;
rt_LoggedStateSignalPtrs [ 22 ] = ( void * ) & rtX . pi3sslfh45 [ 4 ] ;
rt_LoggedStateSignalPtrs [ 23 ] = ( void * ) & rtX . pi3sslfh45 [ 5 ] ;
rt_LoggedStateSignalPtrs [ 24 ] = ( void * ) & rtX . pi3sslfh45 [ 6 ] ;
rt_LoggedStateSignalPtrs [ 25 ] = ( void * ) & rtX . pi3sslfh45 [ 7 ] ;
rt_LoggedStateSignalPtrs [ 26 ] = ( void * ) & rtX . pi3sslfh45 [ 8 ] ;
rt_LoggedStateSignalPtrs [ 27 ] = ( void * ) & rtX . pi3sslfh45 [ 12 ] ;
rt_LoggedStateSignalPtrs [ 28 ] = ( void * ) & rtX . pi3sslfh45 [ 15 ] ;
rt_LoggedStateSignalPtrs [ 29 ] = ( void * ) & rtX . pi3sslfh45 [ 19 ] ;
rt_LoggedStateSignalPtrs [ 30 ] = ( void * ) & rtX . pi3sslfh45 [ 22 ] ;
rt_LoggedStateSignalPtrs [ 31 ] = ( void * ) & rtX . pi3sslfh45 [ 23 ] ;
rt_LoggedStateSignalPtrs [ 32 ] = ( void * ) & rtX . pi3sslfh45 [ 24 ] ;
rt_LoggedStateSignalPtrs [ 33 ] = ( void * ) & rtX . pi3sslfh45 [ 25 ] ;
rt_LoggedStateSignalPtrs [ 34 ] = ( void * ) & rtX . pi3sslfh45 [ 26 ] ;
rt_LoggedStateSignalPtrs [ 35 ] = ( void * ) & rtX . pi3sslfh45 [ 27 ] ;
rt_LoggedStateSignalPtrs [ 36 ] = ( void * ) & rtX . pi3sslfh45 [ 28 ] ;
rt_LoggedStateSignalPtrs [ 37 ] = ( void * ) & rtX . pi3sslfh45 [ 29 ] ;
rt_LoggedStateSignalPtrs [ 38 ] = ( void * ) & rtX . pi3sslfh45 [ 30 ] ;
rt_LoggedStateSignalPtrs [ 39 ] = ( void * ) & rtX . pi3sslfh45 [ 34 ] ;
rt_LoggedStateSignalPtrs [ 40 ] = ( void * ) & rtX . pi3sslfh45 [ 37 ] ;
rt_LoggedStateSignalPtrs [ 41 ] = ( void * ) & rtX . pi3sslfh45 [ 41 ] ;
rt_LoggedStateSignalPtrs [ 42 ] = ( void * ) & rtX . pi3sslfh45 [ 44 ] ;
rt_LoggedStateSignalPtrs [ 43 ] = ( void * ) & rtX . pi3sslfh45 [ 45 ] ;
rt_LoggedStateSignalPtrs [ 44 ] = ( void * ) & rtX . pi3sslfh45 [ 46 ] ;
rt_LoggedStateSignalPtrs [ 45 ] = ( void * ) & rtX . pi3sslfh45 [ 47 ] ;
rt_LoggedStateSignalPtrs [ 46 ] = ( void * ) & rtX . pi3sslfh45 [ 48 ] ;
rt_LoggedStateSignalPtrs [ 47 ] = ( void * ) & rtX . pi3sslfh45 [ 49 ] ;
rt_LoggedStateSignalPtrs [ 48 ] = ( void * ) & rtX . pi3sslfh45 [ 50 ] ;
rt_LoggedStateSignalPtrs [ 49 ] = ( void * ) & rtX . pi3sslfh45 [ 51 ] ;
rt_LoggedStateSignalPtrs [ 50 ] = ( void * ) & rtX . pi3sslfh45 [ 52 ] ;
rt_LoggedStateSignalPtrs [ 51 ] = ( void * ) & rtX . pi3sslfh45 [ 56 ] ;
rt_LoggedStateSignalPtrs [ 52 ] = ( void * ) & rtX . pi3sslfh45 [ 59 ] ;
rt_LoggedStateSignalPtrs [ 53 ] = ( void * ) & rtX . pi3sslfh45 [ 63 ] ;
rt_LoggedStateSignalPtrs [ 54 ] = ( void * ) & rtX . pi3sslfh45 [ 66 ] ;
rt_LoggedStateSignalPtrs [ 55 ] = ( void * ) & rtX . pi3sslfh45 [ 67 ] ;
rt_LoggedStateSignalPtrs [ 56 ] = ( void * ) & rtX . pi3sslfh45 [ 68 ] ;
rt_LoggedStateSignalPtrs [ 57 ] = ( void * ) & rtX . pi3sslfh45 [ 69 ] ;
rt_LoggedStateSignalPtrs [ 58 ] = ( void * ) & rtX . pi3sslfh45 [ 70 ] ;
rt_LoggedStateSignalPtrs [ 59 ] = ( void * ) & rtX . pi3sslfh45 [ 71 ] ;
rt_LoggedStateSignalPtrs [ 60 ] = ( void * ) & rtDW . jgjp1fusts ;
rt_LoggedStateSignalPtrs [ 61 ] = ( void * ) & rtDW . jopmtehazu ;
rt_LoggedStateSignalPtrs [ 62 ] = ( void * ) & rtDW . pdizpebcrn ;
rt_LoggedStateSignalPtrs [ 63 ] = ( void * ) & rtDW . fcytalkur3 ;
rt_LoggedStateSignalPtrs [ 64 ] = ( void * ) & rtDW . huv3xhr2xb ;
rt_LoggedStateSignalPtrs [ 65 ] = ( void * ) & rtDW . mznnwa3jrm ;
rt_LoggedStateSignalPtrs [ 66 ] = ( void * ) & rtDW . fs1jne3mev ;
rt_LoggedStateSignalPtrs [ 67 ] = ( void * ) & rtDW . gja3qfiayv ;
rt_LoggedStateSignalPtrs [ 68 ] = ( void * ) & rtDW . mb1tkpm0oo ;
rt_LoggedStateSignalPtrs [ 69 ] = ( void * ) & rtDW . liafyk0sq0 ;
rt_LoggedStateSignalPtrs [ 70 ] = ( void * ) & rtDW . nlprusk0lb ;
rt_LoggedStateSignalPtrs [ 71 ] = ( void * ) & rtDW . e3wlnzdn2r ;
rt_LoggedStateSignalPtrs [ 72 ] = ( void * ) & rtDW . imp34ktok4 ;
rt_LoggedStateSignalPtrs [ 73 ] = ( void * ) & rtDW . fegt1ehs0h ;
rt_LoggedStateSignalPtrs [ 74 ] = ( void * ) & rtDW . naplv55ipv ;
rt_LoggedStateSignalPtrs [ 75 ] = ( void * ) & rtDW . p55ar3qyut ;
rt_LoggedStateSignalPtrs [ 76 ] = ( void * ) & rtDW . pbcfqgaa1q ;
rt_LoggedStateSignalPtrs [ 77 ] = ( void * ) & rtDW . dcf5utnyxc ;
rt_LoggedStateSignalPtrs [ 78 ] = ( void * ) rtDW . fx5xo5lbmd ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 10000 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo (
rtS ) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 )
; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static struct _ssSFcnModelMethods3 mdlMethods3
; static struct _ssSFcnModelMethods2 mdlMethods2 ; static boolean_T
contStatesDisabled [ 90 ] ; static real_T absTol [ 90 ] = { 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 ,
1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 , 1.0E-6 } ;
static uint8_T absTolControl [ 90 ] = { 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U } ; static real_T contStateJacPerturbBoundMinVec [ 90
] ; static real_T contStateJacPerturbBoundMaxVec [ 90 ] ; static uint8_T
zcAttributes [ 3 ] = { ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) } ; static ssNonContDerivSigInfo nonContDerivSigInfo [ 6 ] = {
{ 1 * sizeof ( real_T ) , ( char * ) ( & rtB . aa23nqqdmc ) , ( NULL ) } , {
1 * sizeof ( real_T ) , ( char * ) ( & rtB . kcw4co0adz ) , ( NULL ) } , { 1
* sizeof ( real_T ) , ( char * ) ( & rtB . am4ocgktdw ) , ( NULL ) } , { 1 *
sizeof ( real_T ) , ( char * ) ( & rtB . cdjd2gowev ) , ( NULL ) } , { 1 *
sizeof ( real_T ) , ( char * ) ( & rtB . iu53rp0sko . ovgwheqnqh ) , ( NULL )
} , { 1 * sizeof ( real_T ) , ( char * ) ( & rtB . lolmohwkmq . ovgwheqnqh )
, ( NULL ) } } ; { int i ; for ( i = 0 ; i < 90 ; ++ i ) {
contStateJacPerturbBoundMinVec [ i ] = 0 ; contStateJacPerturbBoundMaxVec [ i
] = rtGetInf ( ) ; } } ssSetSolverRelTol ( rtS , 0.001 ) ; ssSetStepSize (
rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS , -
1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ; ssSetMaxStepSize ( rtS , 0.02 )
; ssSetSolverMaxOrder ( rtS , - 1 ) ; ssSetSolverRefineFactor ( rtS , 1 ) ;
ssSetOutputTimes ( rtS , ( NULL ) ) ; ssSetNumOutputTimes ( rtS , 0 ) ;
ssSetOutputTimesOnly ( rtS , 0 ) ; ssSetOutputTimesIndex ( rtS , 0 ) ;
ssSetZCCacheNeedsReset ( rtS , 1 ) ; ssSetDerivCacheNeedsReset ( rtS , 0 ) ;
ssSetNumNonContDerivSigInfos ( rtS , 6 ) ; ssSetNonContDerivSigInfos ( rtS ,
nonContDerivSigInfo ) ; ssSetSolverInfo ( rtS , & slvrInfo ) ;
ssSetSolverName ( rtS , "VariableStepAuto" ) ; ssSetVariableStepSolver ( rtS
, 1 ) ; ssSetSolverConsistencyChecking ( rtS , 0 ) ;
ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ; ssSetSolverRobustResetMethod (
rtS , 0 ) ; _ssSetSolverUpdateJacobianAtReset ( rtS , true ) ;
ssSetAbsTolVector ( rtS , absTol ) ; ssSetAbsTolControlVector ( rtS ,
absTolControl ) ; ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetJacobianPerturbationBoundsMinVec ( rtS , contStateJacPerturbBoundMinVec
) ; ssSetJacobianPerturbationBoundsMaxVec ( rtS ,
contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 1 ) ; (
void ) memset ( ( void * ) & mdlMethods2 , 0 , sizeof ( mdlMethods2 ) ) ;
ssSetModelMethods2 ( rtS , & mdlMethods2 ) ; ( void ) memset ( ( void * ) &
mdlMethods3 , 0 , sizeof ( mdlMethods3 ) ) ; ssSetModelMethods3 ( rtS , &
mdlMethods3 ) ; ssSetModelProjection ( rtS , MdlProjection ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetSolverZcSignalAttrib ( rtS , zcAttributes ) ;
ssSetSolverNumZcSignals ( rtS , 3 ) ; ssSetModelZeroCrossings ( rtS ,
MdlZeroCrossings ) ; ssSetSolverConsecutiveZCsStepRelTol ( rtS ,
2.8421709430404007E-13 ) ; ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ;
ssSetSolverConsecutiveZCsError ( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic (
rtS , 1 ) ; ssSetSolverIgnoredZcDiagnostic ( rtS , 1 ) ;
ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ;
ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 3 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1 ) ; } {
ZCSigState * zc = ( ZCSigState * ) & rtPrevZCX ; ssSetPrevZCSigState ( rtS ,
zc ) ; } { rtPrevZCX . bsdzg53aha = UNINITIALIZED_ZCSIG ; rtPrevZCX .
jysthfp50c = UNINITIALIZED_ZCSIG ; rtPrevZCX . afij42gx2g =
UNINITIALIZED_ZCSIG ; } ssSetChecksumVal ( rtS , 0 , 223868464U ) ;
ssSetChecksumVal ( rtS , 1 , 1825467118U ) ; ssSetChecksumVal ( rtS , 2 ,
79481394U ) ; ssSetChecksumVal ( rtS , 3 , 920024568U ) ; { static const
sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo
rt_ExtModeInfo ; static const sysRanDType * systemRan [ 4 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = &
rtAlwaysEnabled ; systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = &
rtAlwaysEnabled ; rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) ,
& ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo
( rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS
) , ssGetTPtr ( rtS ) ) ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 2 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID2 ( tid ) ; }
