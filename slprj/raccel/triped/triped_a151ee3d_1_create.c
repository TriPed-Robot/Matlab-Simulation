#include "pm_std.h"
#include "ne_std.h"
#include "ne_dae.h"
#include "pm_default_allocator.h"
#include "sm_ssci_NeDaePrivateData.h"
#include "sm_CTarget.h"
PmfMessageId sm_ssci_recordRunTimeError ( const char * errorId , const char *
errorMsg , NeuDiagnosticManager * mgr ) ;
#define pm_allocator_alloc(_allocator, _m, _n) ((_allocator)->mCallocFcn((_allocator), (_m), (_n)))
#define PM_ALLOCATE_ARRAY(_name, _type, _size, _allocator)\
 _name = (_type *) pm_allocator_alloc(_allocator, sizeof(_type), _size)
#define pm_size_to_int(_size)          ((int32_T) (_size))
PmIntVector * pm_create_int_vector ( size_t , PmAllocator * ) ; int_T
pm_create_int_vector_fields ( PmIntVector * , size_t , PmAllocator * ) ;
int_T pm_create_real_vector_fields ( PmRealVector * , size_t , PmAllocator *
) ; int_T pm_create_char_vector_fields ( PmCharVector * , size_t ,
PmAllocator * ) ; int_T pm_create_bool_vector_fields ( PmBoolVector * ,
size_t , PmAllocator * ) ; void pm_rv_equals_rv ( const PmRealVector * ,
const PmRealVector * ) ; void sm_ssci_setupLoggerFcn_codeGen ( const NeDae *
dae , NeLoggerBuilder * neLoggerBuilder ) ; int32_T sm_ssci_logFcn_codeGen (
const NeDae * dae , const NeSystemInput * systemInput , PmRealVector * output
) ; extern const NeAssertData triped_a151ee3d_1_assertData [ ] ; extern const
NeZCData triped_a151ee3d_1_ZCData [ ] ; void
triped_a151ee3d_1_computeRuntimeParameters ( const double *
runtimeRootVariables , double * runtimeParameters ) ; void
triped_a151ee3d_1_validateRuntimeParameters ( const double *
runtimeParameters , int32_T * assertSatisfactionFlags ) ; void
triped_a151ee3d_1_computeAsmRuntimeDerivedValues ( const double *
runtimeParameters , RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle )
; void triped_a151ee3d_1_computeSimRuntimeDerivedValues ( const double *
runtimeParameters , RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle )
; PmfMessageId triped_a151ee3d_1_compDerivs ( const
RuntimeDerivedValuesBundle * , const int * , const double * , const int * ,
const double * , const double * , const double * , const double * , double *
, double * , NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
triped_a151ee3d_1_numJacPerturbLoBounds ( const RuntimeDerivedValuesBundle *
, const int * , const double * , const int * , const double * , const double
* , const double * , const double * , double * , double * ,
NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
triped_a151ee3d_1_numJacPerturbHiBounds ( const RuntimeDerivedValuesBundle *
, const int * , const double * , const int * , const double * , const double
* , const double * , const double * , double * , double * ,
NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
triped_a151ee3d_1_checkDynamics ( const RuntimeDerivedValuesBundle * , const
double * , const double * , const double * , const double * , const double *
, double * , NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
triped_a151ee3d_1_compOutputsDyn ( const RuntimeDerivedValuesBundle * , const
int * , const double * , const int * , const double * , const double * ,
const double * , const double * , double * , double * , int * , double * ,
NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
triped_a151ee3d_1_compOutputsKin ( const RuntimeDerivedValuesBundle * , const
double * , const int * , const double * , const double * , const double * ,
const double * , double * , NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
triped_a151ee3d_1_compOutputs ( const RuntimeDerivedValuesBundle * , const
int * , const double * , const int * , const double * , const double * ,
const double * , const double * , double * , double * , int * , double * ,
NeuDiagnosticManager * neDiagMgr ) ; PmfMessageId
triped_a151ee3d_1_computeAsmModeVector ( const double * , const double * ,
const double * , int * , double * , NeuDiagnosticManager * neDiagMgr ) ;
PmfMessageId triped_a151ee3d_1_computeSimModeVector ( const double * , const
double * , const double * , int * , double * , NeuDiagnosticManager *
neDiagMgr ) ; PmfMessageId triped_a151ee3d_1_computeZeroCrossings ( const
RuntimeDerivedValuesBundle * , const double * , const double * , const double
* , const double * , const double * , double * , double * ,
NeuDiagnosticManager * neDiagMgr ) ; void triped_a151ee3d_1_setTargets (
const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , CTarget *
targets ) ; void triped_a151ee3d_1_resetAsmStateVector ( const void * mech ,
double * stateVector ) ; void triped_a151ee3d_1_resetSimStateVector ( const
void * mech , double * stateVector ) ; void
triped_a151ee3d_1_initializeTrackedAngleState ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const int *
modeVector , const double * motionData , double * stateVector , void *
neDiagMgr ) ; void triped_a151ee3d_1_computeDiscreteState ( const void * mech
, const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , double *
stateVector ) ; void triped_a151ee3d_1_adjustPosition ( const void * mech ,
const double * dofDeltas , double * stateVector ) ; void
triped_a151ee3d_1_perturbAsmJointPrimitiveState ( const void * mech , size_t
stageIdx , size_t primitiveIdx , double magnitude , boolean_T
doPerturbVelocity , double * stateVector ) ; void
triped_a151ee3d_1_perturbSimJointPrimitiveState ( const void * mech , size_t
stageIdx , size_t primitiveIdx , double magnitude , boolean_T
doPerturbVelocity , double * stateVector ) ; void
triped_a151ee3d_1_perturbFlexibleBodyState ( const void * mech , size_t
stageIdx , double magnitude , boolean_T doPerturbVelocity , double *
stateVector ) ; void triped_a151ee3d_1_computePosDofBlendMatrix ( const void
* mech , size_t stageIdx , size_t primitiveIdx , const double * stateVector ,
int partialType , double * matrix ) ; void
triped_a151ee3d_1_computeVelDofBlendMatrix ( const void * mech , size_t
stageIdx , size_t primitiveIdx , const double * stateVector , int partialType
, double * matrix ) ; void triped_a151ee3d_1_projectPartiallyTargetedPos (
const void * mech , size_t stageIdx , size_t primitiveIdx , const double *
origStateVector , int partialType , double * stateVector ) ; void
triped_a151ee3d_1_propagateMotion ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const double *
stateVector , double * motionData ) ; size_t
triped_a151ee3d_1_computeAssemblyError ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , size_t
constraintIdx , const double * stateVector , const int * modeVector , const
double * motionData , double * error ) ; size_t
triped_a151ee3d_1_computeAssemblyJacobian ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , size_t
constraintIdx , boolean_T forVelocitySatisfaction , const double *
stateVector , const int * modeVector , const double * motionData , double * J
) ; size_t triped_a151ee3d_1_computeFullAssemblyJacobian ( const void * mech
, const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const
double * stateVector , const int * modeVector , const double * motionData ,
double * J ) ; int triped_a151ee3d_1_isInKinematicSingularity ( const void *
mech , const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , size_t
constraintIdx , const int * modeVector , const double * motionData ) ;
PmfMessageId triped_a151ee3d_1_convertStateVector ( const void * asmMech ,
const RuntimeDerivedValuesBundle * asmRuntimeDerivedValuesBundle , const void
* simMech , const double * asmStateVector , const int * asmModeVector , const
int * simModeVector , double * simStateVector , void * neDiagMgr ) ; void
triped_a151ee3d_1_constructStateVector ( const void * mech , const double *
solverStateVector , const double * u , const double * uDot , const double *
discreteStateVector , double * fullStateVector ) ; void
triped_a151ee3d_1_extractSolverStateVector ( const void * mech , const double
* fullStateVector , double * solverStateVector ) ; int
triped_a151ee3d_1_isPositionViolation ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const int *
constraintEqnEnableFlags , const double * stateVector , const int *
modeVector ) ; int triped_a151ee3d_1_isVelocityViolation ( const void * mech
, const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const int *
constraintEqnEnableFlags , const double * stateVector , const int *
modeVector ) ; PmfMessageId triped_a151ee3d_1_projectStateSim ( const void *
mech , const RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const
int * constraintEqnEnableFlags , const int * modeVector , const double *
inputVector , double * stateVector , void * neDiagMgr ) ; void
triped_a151ee3d_1_computeConstraintError ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const double *
stateVector , const int * modeVector , double * error ) ; void
triped_a151ee3d_1_resetModeVector ( const void * mech , int * modeVector ) ;
boolean_T triped_a151ee3d_1_hasJointDisToNormModeChange ( const void * mech ,
const int * prevModeVector , const int * modeVector ) ; PmfMessageId
triped_a151ee3d_1_performJointDisToNormModeChange ( const void * mech , const
RuntimeDerivedValuesBundle * runtimeDerivedValuesBundle , const int *
prevModeVector , const int * modeVector , const double * inputVector , double
* stateVector , void * neDiagMgr ) ; PmfMessageId
triped_a151ee3d_1_onModeChangedCutJoints ( const void * mech , const int *
prevModeVector , int * modeVector , double * stateVector , void * neDiagMgr )
; PmfMessageId triped_a151ee3d_1_assemble ( const double * u , double * udot
, double * x , NeuDiagnosticManager * neDiagMgr ) { ( void ) x ; ( void ) u ;
( void ) udot ; ( void ) neDiagMgr ; return NULL ; } static void
dae_cg_setParameters_function ( const NeDae * dae , const NeParameterBundle *
paramBundle ) { const NeDaePrivateData * smData = dae -> mPrivateData ; const
double * runtimeRootVariables = paramBundle -> mRealParameters . mX ; if (
smData -> mRuntimeParameterScalars . mN == 0 ) return ;
triped_a151ee3d_1_computeRuntimeParameters ( runtimeRootVariables , smData ->
mRuntimeParameterScalars . mX ) ;
triped_a151ee3d_1_computeAsmRuntimeDerivedValues ( smData ->
mRuntimeParameterScalars . mX , & dae -> mPrivateData ->
mAsmRuntimeDerivedValuesBundle ) ;
triped_a151ee3d_1_computeSimRuntimeDerivedValues ( smData ->
mRuntimeParameterScalars . mX , & dae -> mPrivateData ->
mSimRuntimeDerivedValuesBundle ) ;
sm_core_computeRedundantConstraintEquations ( & dae -> mPrivateData ->
mSimulationDelegate , & smData -> mSimRuntimeDerivedValuesBundle ) ;
#if 0
{ size_t i ; const size_t n = smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mSize ; pmf_printf (
"\nRuntime Enabled Equations (%lu)\n" , n ) ; for ( i = 0 ; i < n ; ++ i )
pmf_printf ( "  %2lu:  %d\n" , i , smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mValues [ i ] ) ; }
#endif
} static PmfMessageId dae_cg_pAssert_method ( const NeDae * dae , const
NeSystemInput * systemInput , NeDaeMethodOutput * daeMethodOutput ,
NeuDiagnosticManager * neDiagMgr ) { const NeDaePrivateData * smData = dae ->
mPrivateData ; const double * runtimeParams = smData ->
mRuntimeParameterScalars . mX ; int32_T * assertSatisfactionFlags =
daeMethodOutput -> mPASSERT . mX ; ( void ) systemInput ; ( void ) neDiagMgr
; triped_a151ee3d_1_validateRuntimeParameters ( runtimeParams ,
assertSatisfactionFlags ) ; return NULL ; } static PmfMessageId
dae_cg_deriv_method ( const NeDae * dae , const NeSystemInput * systemInput ,
NeDaeMethodOutput * daeMethodOutput , NeuDiagnosticManager * neDiagMgr ) {
const NeDaePrivateData * smData = dae -> mPrivateData ; PmfMessageId errorId
= NULL ; double errorResult = 0.0 ; if ( smData ->
mCachedDerivativesAvailable ) memcpy ( daeMethodOutput -> mXP0 . mX , smData
-> mCachedDerivatives . mX , 72 * sizeof ( real_T ) ) ; else errorId =
triped_a151ee3d_1_compDerivs ( & smData -> mSimRuntimeDerivedValuesBundle ,
smData -> mSimulationDelegate . mRunTimeEnabledEquations . mValues ,
systemInput -> mX . mX , systemInput -> mM . mX , systemInput -> mU . mX ,
systemInput -> mU . mX + 9 , systemInput -> mV . mX + 9 , systemInput -> mD .
mX , daeMethodOutput -> mXP0 . mX , & errorResult , neDiagMgr ) ; return
errorId ; } static PmfMessageId dae_cg_numJacPerturbLoBounds_method ( const
NeDae * dae , const NeSystemInput * systemInput , NeDaeMethodOutput *
daeMethodOutput , NeuDiagnosticManager * neDiagMgr ) { const NeDaePrivateData
* smData = dae -> mPrivateData ; PmfMessageId errorId = NULL ; double
errorResult = 0.0 ; errorId = triped_a151ee3d_1_numJacPerturbLoBounds ( &
smData -> mSimRuntimeDerivedValuesBundle , smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mValues , systemInput -> mX . mX , systemInput ->
mM . mX , systemInput -> mU . mX , systemInput -> mU . mX + 9 , systemInput
-> mV . mX + 9 , systemInput -> mD . mX , daeMethodOutput -> mNUMJAC_DX_LO .
mX , & errorResult , neDiagMgr ) ; return errorId ; } static PmfMessageId
dae_cg_numJacPerturbHiBounds_method ( const NeDae * dae , const NeSystemInput
* systemInput , NeDaeMethodOutput * daeMethodOutput , NeuDiagnosticManager *
neDiagMgr ) { const NeDaePrivateData * smData = dae -> mPrivateData ;
PmfMessageId errorId = NULL ; double errorResult = 0.0 ; errorId =
triped_a151ee3d_1_numJacPerturbHiBounds ( & smData ->
mSimRuntimeDerivedValuesBundle , smData -> mSimulationDelegate .
mRunTimeEnabledEquations . mValues , systemInput -> mX . mX , systemInput ->
mM . mX , systemInput -> mU . mX , systemInput -> mU . mX + 9 , systemInput
-> mV . mX + 9 , systemInput -> mD . mX , daeMethodOutput -> mNUMJAC_DX_HI .
mX , & errorResult , neDiagMgr ) ; return errorId ; } static PmfMessageId
dae_cg_compOutputs_method ( const NeDae * dae , const NeSystemInput *
systemInput , NeDaeMethodOutput * daeMethodOutput , NeuDiagnosticManager *
neDiagMgr ) { PmfMessageId errorId = NULL ; NeDaePrivateData * smData = dae
-> mPrivateData ; int derivErr = 0 ; double errorResult = 0.0 ; errorId =
triped_a151ee3d_1_compOutputs ( & smData -> mSimRuntimeDerivedValuesBundle ,
smData -> mSimulationDelegate . mRunTimeEnabledEquations . mValues ,
systemInput -> mX . mX , systemInput -> mM . mX , systemInput -> mU . mX ,
systemInput -> mU . mX + 9 , systemInput -> mV . mX + 9 , systemInput -> mD .
mX , smData -> mCachedDerivatives . mX , daeMethodOutput -> mY . mX , &
derivErr , & errorResult , neDiagMgr ) ; smData ->
mCachedDerivativesAvailable = ( derivErr == 0 ) ; return errorId ; } static
PmfMessageId dae_cg_mode_method ( const NeDae * dae , const NeSystemInput *
systemInput , NeDaeMethodOutput * daeMethodOutput , NeuDiagnosticManager *
neDiagMgr ) { const NeDaePrivateData * smData = dae -> mPrivateData ;
PmfMessageId errorId = NULL ; double errorResult = 0.0 ; errorId =
triped_a151ee3d_1_computeSimModeVector ( systemInput -> mU . mX , systemInput
-> mU . mX + 9 , systemInput -> mV . mX + 9 , daeMethodOutput -> mMODE . mX ,
& errorResult , neDiagMgr ) ; memcpy ( smData -> mCachedModeVector . mX ,
daeMethodOutput -> mMODE . mX , 0 * sizeof ( int32_T ) ) ; return errorId ; }
static PmfMessageId dae_cg_zeroCrossing_method ( const NeDae * dae , const
NeSystemInput * systemInput , NeDaeMethodOutput * daeMethodOutput ,
NeuDiagnosticManager * neDiagMgr ) { const NeDaePrivateData * smData = dae ->
mPrivateData ; double errorResult = 0.0 ; return
triped_a151ee3d_1_computeZeroCrossings ( & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mX . mX , systemInput -> mU .
mX , systemInput -> mU . mX + 9 , systemInput -> mV . mX + 9 , systemInput ->
mD . mX , daeMethodOutput -> mZC . mX , & errorResult , neDiagMgr ) ; }
static PmfMessageId dae_cg_project_solve ( const NeDae * dae , const
NeSystemInput * systemInput , NeuDiagnosticManager * neDiagMgr ) {
NeDaePrivateData * smData = dae -> mPrivateData ; return sm_core_projectState
( false , & smData -> mSimulationDelegate , & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mM . mX , systemInput -> mU .
mX , systemInput -> mU . mX + 9 , systemInput -> mD . mX , systemInput -> mX
. mX , neDiagMgr ) ; } static PmfMessageId dae_cg_check_solve ( const NeDae *
dae , const NeSystemInput * systemInput , NeuDiagnosticManager * neDiagMgr )
{ NeDaePrivateData * smData = dae -> mPrivateData ; PmfMessageId errorId =
NULL ; if ( smData -> mNumConstraintEqns > 0 ) errorId = sm_core_projectState
( false , & smData -> mSimulationDelegate , & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mM . mX , systemInput -> mU .
mX , systemInput -> mU . mX + 9 , systemInput -> mD . mX , systemInput -> mX
. mX , neDiagMgr ) ; if ( errorId == NULL && smData -> mDoCheckDynamics ) {
double result = 0.0 ; errorId = triped_a151ee3d_1_checkDynamics ( & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mX . mX , systemInput -> mU .
mX , systemInput -> mU . mX + 9 , systemInput -> mV . mX + 9 , systemInput ->
mD . mX , & result , neDiagMgr ) ; } return errorId ; } static PmfMessageId
dae_cg_CIC_MODE_solve ( const NeDae * dae , const NeSystemInput * systemInput
, NeuDiagnosticManager * neDiagMgr ) { NeDaePrivateData * smData = dae ->
mPrivateData ; PmfMessageId errorId = NULL ; double errorResult = 0.0 ; const
size_t mvSize = smData -> mModeVectorSize ; boolean_T modeChanged = false ;
if ( mvSize > 0 ) { errorId = triped_a151ee3d_1_computeSimModeVector (
systemInput -> mU . mX , systemInput -> mU . mX + 9 , systemInput -> mV . mX
+ 9 , systemInput -> mM . mX , & errorResult , neDiagMgr ) ; if ( errorId !=
NULL ) return errorId ; { size_t i ; for ( i = 0 ; i < mvSize ; ++ i ) if (
systemInput -> mM . mX [ i ] != smData -> mCachedModeVector . mX [ i ] ) {
modeChanged = true ; break ; } } } if ( modeChanged ) { errorId =
sm_core_onModeChanged ( & smData -> mSimulationDelegate , & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mU . mX , systemInput -> mU .
mX + 9 , systemInput -> mD . mX , smData -> mCachedModeVector . mX ,
systemInput -> mM . mX , systemInput -> mX . mX , neDiagMgr ) ; if ( errorId
!= NULL ) return errorId ; memcpy ( smData -> mCachedModeVector . mX ,
systemInput -> mM . mX , 0 * sizeof ( int32_T ) ) ; } errorId =
sm_core_projectState ( true , & smData -> mSimulationDelegate , & smData ->
mSimRuntimeDerivedValuesBundle , systemInput -> mM . mX , systemInput -> mU .
mX , systemInput -> mU . mX + 9 , systemInput -> mD . mX , systemInput -> mX
. mX , neDiagMgr ) ; return errorId ; } static PmfMessageId
dae_cg_assemble_solve ( const NeDae * dae , const NeSystemInput * systemInput
, NeuDiagnosticManager * neDiagMgr ) { NeDaePrivateData * smData = dae ->
mPrivateData ; const SmMechanismDelegate * delegate = & smData ->
mAssemblyDelegate ; const RuntimeDerivedValuesBundle *
runtimeDerivedValuesBundle = & smData -> mAsmRuntimeDerivedValuesBundle ;
PmfMessageId errorId = NULL ; size_t i ; double errorResult = 0.0 ; const
size_t numTargets = 84 ; unsigned int asmStatus = 0 ; double *
assemblyFullStateVector = smData -> mAssemblyFullStateVector . mX ; double *
simulationFullStateVector = smData -> mSimulationFullStateVector . mX ; ( *
delegate -> mSetTargets ) ( runtimeDerivedValuesBundle , smData -> mTargets )
; { const double * u = systemInput -> mU . mX ; const double * uDot = u +
smData -> mInputVectorSize ; CTarget * target = smData -> mTargets + smData
-> mNumInternalTargets ; for ( i = 0 ; i < smData ->
mNumInputMotionPrimitives ; ++ i ) { const size_t inputOffset = smData ->
mMotionInputOffsets . mX [ i ] ; ( target ++ ) -> mValue [ 0 ] = u [
inputOffset ] ; ( target ++ ) -> mValue [ 0 ] = uDot [ inputOffset ] ; } } if
( smData -> mAssemblyModeVector . mN > 0 ) { errorId =
triped_a151ee3d_1_computeAsmModeVector ( systemInput -> mU . mX , systemInput
-> mU . mX + 9 , systemInput -> mV . mX + 9 , smData -> mAssemblyModeVector .
mX , & errorResult , neDiagMgr ) ; if ( errorId != NULL ) return errorId ; }
errorId = sm_core_computeStateVector ( delegate , runtimeDerivedValuesBundle
, smData -> mAssemblyModeVector . mX , numTargets , smData -> mTargets ,
assemblyFullStateVector , neDiagMgr ) ; if ( errorId != NULL ) return errorId
; asmStatus = sm_core_checkAssembly ( delegate , runtimeDerivedValuesBundle ,
assemblyFullStateVector , smData -> mAssemblyModeVector . mX , NULL , NULL ,
NULL ) ; if ( asmStatus != 1 ) { return sm_ssci_recordRunTimeError (
"sm:compiler:messages:simulationErrors:AssemblyFailure" , asmStatus == 2 ?
 "Model not assembled due to a position violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."
: ( asmStatus == 3 ?
 "Model not assembled due to a velocity violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."
:
 "Model not assembled due to a singularity violation. The failure occurred during the attempt to assemble all joints in the system and satisfy any motion inputs. If an Update Diagram operation completes successfully, the failure is likely caused by motion inputs. Consider adjusting the motion inputs to specify a different starting configuration. Also consider adjusting or adding joint targets to better guide the assembly."
) , neDiagMgr ) ; }
#if 0
triped_a151ee3d_1_checkTargets ( & smData -> mSimRuntimeDerivedValuesBundle ,
assemblyFullStateVector ) ;
#endif
if ( smData -> mModeVectorSize > 0 ) { errorId =
triped_a151ee3d_1_computeSimModeVector ( systemInput -> mU . mX , systemInput
-> mU . mX + 9 , systemInput -> mV . mX + 9 , systemInput -> mM . mX , &
errorResult , neDiagMgr ) ; if ( errorId != NULL ) return errorId ; memcpy (
smData -> mCachedModeVector . mX , systemInput -> mM . mX , 0 * sizeof (
int32_T ) ) ; } errorId = ( * delegate -> mConvertStateVector ) ( NULL ,
runtimeDerivedValuesBundle , NULL , assemblyFullStateVector , smData ->
mAssemblyModeVector . mX , systemInput -> mM . mX , simulationFullStateVector
, neDiagMgr ) ; for ( i = 0 ; i < smData -> mStateVectorSize ; ++ i )
systemInput -> mX . mX [ i ] = simulationFullStateVector [ smData ->
mStateVectorMap . mX [ i ] ] ; memcpy ( systemInput -> mD . mX ,
simulationFullStateVector + smData -> mFullStateVectorSize - smData ->
mDiscreteStateSize , smData -> mDiscreteStateSize * sizeof ( double ) ) ;
return errorId ; } typedef struct { size_t first ; size_t second ; } SizePair
; static void checkMemAllocStatus ( int_T status ) { ( void ) status ; }
static PmCharVector cStringToCharVector ( const char * src ) { const size_t n
= strlen ( src ) ; PmCharVector charVect ; const int_T status =
pm_create_char_vector_fields ( & charVect , n + 1 , pm_default_allocator ( )
) ; checkMemAllocStatus ( status ) ; strcpy ( charVect . mX , src ) ; return
charVect ; } static void initBasicAttributes ( NeDaePrivateData * smData ) {
size_t i ; smData -> mStateVectorSize = 72 ; smData -> mFullStateVectorSize =
93 ; smData -> mDiscreteStateSize = 3 ; smData -> mModeVectorSize = 0 ;
smData -> mNumZeroCrossings = 3 ; smData -> mInputVectorSize = 9 ; smData ->
mOutputVectorSize = 117 ; smData -> mNumConstraintEqns = 21 ; smData ->
mDoCheckDynamics = true ; for ( i = 0 ; i < 4 ; ++ i ) smData -> mChecksum [
i ] = 0 ; } static void initStateVector ( NeDaePrivateData * smData ) {
PmAllocator * alloc = pm_default_allocator ( ) ; const int32_T stateVectorMap
[ 72 ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 12 , 13 , 14 , 15 , 16 , 17 , 18 ,
21 , 22 , 23 , 24 , 25 , 26 , 27 , 28 , 29 , 30 , 31 , 32 , 33 , 34 , 35 , 40
, 41 , 42 , 43 , 44 , 45 , 46 , 49 , 50 , 51 , 52 , 53 , 54 , 55 , 56 , 57 ,
58 , 59 , 60 , 61 , 62 , 63 , 68 , 69 , 70 , 71 , 72 , 73 , 74 , 77 , 78 , 79
, 80 , 81 , 82 , 83 , 84 , 85 , 86 , 87 , 88 , 89 } ; const CTarget targets [
84 ] = { { 0 , 61 , 0 , false , 0 , 1 , "deg" , false , true , +
1.000000000000000000e+00 , true , 1 , { - 5.235987755982988157e-01 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 61 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 65 , 0 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00 ,
+ 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 65 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 75 , 0 , false , 0 , 1 , "deg" , false ,
true , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00 ,
+ 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 75 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 75 , 1 , false , 0 , 1 , "deg" , false ,
true , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00 ,
+ 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 75 , 1
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 75 , 2 , false , 0 , 1 , "deg" , false ,
true , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00 ,
+ 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 75 , 2
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 1 , 101 , 0 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , true , 4 , { + 1.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 2 , 101 , 0
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , true , 3
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 1 , 105 , 0 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , true , 4 , { + 1.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 2 , 105 , 0
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , true , 3
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 107 , 0 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00 ,
+ 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 107 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 1 , 125 , 0 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , true , 4 , { + 1.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 2 , 125 , 0
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , true , 3
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 1 , 127 , 0 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , true , 4 , { + 1.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 2 , 127 , 0
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , true , 3
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 131 , 0 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00 ,
+ 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 131 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 159 , 0 , false , 0 , 1 , "deg" , false
, true , + 1.000000000000000000e+00 , true , 1 , { - 5.235987755982988157e-01
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 159 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 163 , 0 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00 ,
+ 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 163 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 173 , 0 , false , 0 , 1 , "deg" , false
, true , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 173 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 173 , 1 , false , 0 , 1 , "deg" , false
, true , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 173 , 1
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 173 , 2 , false , 0 , 1 , "deg" , false
, true , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 173 , 2
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 1 , 199 , 0 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , true , 4 , { + 1.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 2 , 199 , 0
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , true , 3
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 1 , 203 , 0 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , true , 4 , { + 1.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 2 , 203 , 0
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , true , 3
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 205 , 0 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00 ,
+ 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 205 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 1 , 223 , 0 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , true , 4 , { + 1.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 2 , 223 , 0
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , true , 3
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 1 , 225 , 0 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , true , 4 , { + 1.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 2 , 225 , 0
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , true , 3
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 229 , 0 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00 ,
+ 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 229 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 257 , 0 , false , 0 , 1 , "deg" , false
, true , + 1.000000000000000000e+00 , true , 1 , { - 5.235987755982988157e-01
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 257 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 261 , 0 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00 ,
+ 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 261 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 271 , 0 , false , 0 , 1 , "deg" , false
, true , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 271 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 271 , 1 , false , 0 , 1 , "deg" , false
, true , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 271 , 1
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 271 , 2 , false , 0 , 1 , "deg" , false
, true , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 271 , 2
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 1 , 297 , 0 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , true , 4 , { + 1.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 2 , 297 , 0
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , true , 3
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 1 , 301 , 0 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , true , 4 , { + 1.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 2 , 301 , 0
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , true , 3
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 303 , 0 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00 ,
+ 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 303 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 1 , 321 , 0 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , true , 4 , { + 1.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 2 , 321 , 0
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , true , 3
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 1 , 323 , 0 , false , 0 , 0 , "1" , false ,
false , + 1.000000000000000000e+00 , true , 4 , { + 1.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 2 , 323 , 0
, false , 0 , 0 , "1" , true , false , + 1.000000000000000000e+00 , true , 3
, { + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 327 , 0 , false , 0 , 0 , "1" , false ,
true , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00 ,
+ 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 327 , 0
, false , 0 , 0 , "1" , true , true , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 65 , 0 , false , 0 , 3 , "" , false ,
false , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 65 , 0
, false , 0 , 3 , "" , true , false , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 107 , 0 , false , 0 , 3 , "" , false ,
false , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 107 , 0
, false , 0 , 3 , "" , true , false , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 131 , 0 , false , 0 , 3 , "" , false ,
false , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 131 , 0
, false , 0 , 3 , "" , true , false , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 163 , 0 , false , 0 , 3 , "" , false ,
false , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 163 , 0
, false , 0 , 3 , "" , true , false , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 205 , 0 , false , 0 , 3 , "" , false ,
false , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 205 , 0
, false , 0 , 3 , "" , true , false , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 229 , 0 , false , 0 , 3 , "" , false ,
false , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 229 , 0
, false , 0 , 3 , "" , true , false , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 261 , 0 , false , 0 , 3 , "" , false ,
false , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 261 , 0
, false , 0 , 3 , "" , true , false , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 303 , 0 , false , 0 , 3 , "" , false ,
false , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 303 , 0
, false , 0 , 3 , "" , true , false , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } , { 0 , 327 , 0 , false , 0 , 3 , "" , false ,
false , + 1.000000000000000000e+00 , true , 1 , { + 0.000000000000000000e+00
, + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 } , { + 0.000000000000000000e+00 } } , { 0 , 327 , 0
, false , 0 , 3 , "" , true , false , + 1.000000000000000000e+00 , true , 1 ,
{ + 0.000000000000000000e+00 , + 0.000000000000000000e+00 , +
0.000000000000000000e+00 , + 0.000000000000000000e+00 } , { +
0.000000000000000000e+00 } } } ; const size_t numTargets = 84 ; int_T status
; size_t i ; status = pm_create_real_vector_fields ( & smData ->
mAssemblyFullStateVector , 93 , alloc ) ; checkMemAllocStatus ( status ) ;
status = pm_create_real_vector_fields ( & smData ->
mSimulationFullStateVector , 93 , alloc ) ; checkMemAllocStatus ( status ) ;
status = pm_create_int_vector_fields ( & smData -> mStateVectorMap , smData
-> mStateVectorSize , alloc ) ; checkMemAllocStatus ( status ) ; memcpy (
smData -> mStateVectorMap . mX , stateVectorMap , smData -> mStateVectorSize
* sizeof ( int32_T ) ) ; smData -> mNumInternalTargets = 66 ; smData ->
mNumInputMotionPrimitives = 9 ; PM_ALLOCATE_ARRAY ( smData -> mTargets ,
CTarget , numTargets , alloc ) ; for ( i = 0 ; i < numTargets ; ++ i )
sm_compiler_CTarget_copy ( targets + i , smData -> mTargets + i ) ; } static
void initAsserts ( NeDaePrivateData * smData ) { PmAllocator * alloc =
pm_default_allocator ( ) ; int_T status = 0 ; smData -> mNumParamAsserts = 0
; smData -> mParamAssertObjects = NULL ; smData -> mParamAssertPaths = NULL ;
smData -> mParamAssertDescriptors = NULL ; smData -> mParamAssertMessages =
NULL ; smData -> mParamAssertMessageIds = NULL ; status =
pm_create_bool_vector_fields ( & smData -> mParamAssertIsWarnings , smData ->
mNumParamAsserts , alloc ) ; checkMemAllocStatus ( status ) ; if ( smData ->
mNumParamAsserts > 0 ) { const NeAssertData * ad =
triped_a151ee3d_1_assertData ; size_t i ; PM_ALLOCATE_ARRAY ( smData ->
mParamAssertObjects , PmCharVector , 0 , alloc ) ; PM_ALLOCATE_ARRAY ( smData
-> mParamAssertPaths , PmCharVector , 0 , alloc ) ; PM_ALLOCATE_ARRAY (
smData -> mParamAssertDescriptors , PmCharVector , 0 , alloc ) ;
PM_ALLOCATE_ARRAY ( smData -> mParamAssertMessages , PmCharVector , 0 , alloc
) ; PM_ALLOCATE_ARRAY ( smData -> mParamAssertMessageIds , PmCharVector , 0 ,
alloc ) ; for ( i = 0 ; i < smData -> mNumParamAsserts ; ++ i , ++ ad ) {
smData -> mParamAssertObjects [ i ] = cStringToCharVector ( ad -> mObject ) ;
smData -> mParamAssertPaths [ i ] = cStringToCharVector ( ad -> mPath ) ;
smData -> mParamAssertDescriptors [ i ] = cStringToCharVector ( ad ->
mDescriptor ) ; smData -> mParamAssertMessages [ i ] = cStringToCharVector (
ad -> mMessage ) ; smData -> mParamAssertMessageIds [ i ] =
cStringToCharVector ( ad -> mMessageID ) ; smData -> mParamAssertIsWarnings .
mX [ i ] = ad -> mIsWarn ; } } } static void initModeVector (
NeDaePrivateData * smData ) { { size_t i ; const int_T status =
pm_create_int_vector_fields ( & smData -> mAssemblyModeVector , 0 ,
pm_default_allocator ( ) ) ; checkMemAllocStatus ( status ) ; for ( i = 0 ; i
< smData -> mAssemblyModeVector . mN ; ++ i ) smData -> mAssemblyModeVector .
mX [ i ] = 0 ; } { size_t i ; const int_T status =
pm_create_int_vector_fields ( & smData -> mCachedModeVector , 0 ,
pm_default_allocator ( ) ) ; checkMemAllocStatus ( status ) ; for ( i = 0 ; i
< smData -> mModeVectorSize ; ++ i ) smData -> mCachedModeVector . mX [ i ] =
0 ; } } static void initZeroCrossings ( NeDaePrivateData * smData ) {
PmAllocator * alloc = pm_default_allocator ( ) ; int_T status = 0 ; smData ->
mZeroCrossingObjects = NULL ; smData -> mZeroCrossingPaths = NULL ; smData ->
mZeroCrossingDescriptors = NULL ; status = pm_create_int_vector_fields ( &
smData -> mZeroCrossingTypes , 3 , alloc ) ; checkMemAllocStatus ( status ) ;
if ( smData -> mNumZeroCrossings > 0 ) { const NeZCData * zcd =
triped_a151ee3d_1_ZCData ; size_t i ; PM_ALLOCATE_ARRAY ( smData ->
mZeroCrossingObjects , PmCharVector , 3 , alloc ) ; PM_ALLOCATE_ARRAY (
smData -> mZeroCrossingPaths , PmCharVector , 3 , alloc ) ; PM_ALLOCATE_ARRAY
( smData -> mZeroCrossingDescriptors , PmCharVector , 3 , alloc ) ; for ( i =
0 ; i < smData -> mNumZeroCrossings ; ++ i , ++ zcd ) { smData ->
mZeroCrossingObjects [ i ] = cStringToCharVector ( zcd -> mObject ) ; smData
-> mZeroCrossingPaths [ i ] = cStringToCharVector ( zcd -> mPath ) ; smData
-> mZeroCrossingDescriptors [ i ] = cStringToCharVector ( zcd -> mDescriptor
) ; smData -> mZeroCrossingTypes . mX [ i ] = zcd -> mType ; } } } static
void initVariables ( NeDaePrivateData * smData ) { const char * varFullPaths
[ 72 ] = { "TriPed.Leg_0.SubChain_0.LCS0_Gimbal_Joint.Rx.q" ,
"TriPed.Leg_0.SubChain_0.LCS0_Gimbal_Joint.Ry.q" ,
"TriPed.Leg_0.SubChain_0.LCS0_Gimbal_Joint.Rz.q" ,
"TriPed.Leg_0.SubChain_0.LCS0_Gimbal_Joint.Rx.w" ,
"TriPed.Leg_0.SubChain_0.LCS0_Gimbal_Joint.Ry.w" ,
"TriPed.Leg_0.SubChain_0.LCS0_Gimbal_Joint.Rz.w" ,
"TriPed.Leg_0.OpenSubChain.LL_revolute_Joint.Rz.q" ,
"TriPed.Leg_0.OpenSubChain.LL_revolute_Joint.Rz.w" ,
"TriPed.Leg_0.SubChain_1.Coupling01_1_Spherical_Joint.S.Q" ,
"TriPed.Leg_0.SubChain_1.Coupling01_1_Spherical_Joint.S.Q" ,
"TriPed.Leg_0.SubChain_1.Coupling01_1_Spherical_Joint.S.Q" ,
"TriPed.Leg_0.SubChain_1.Coupling01_1_Spherical_Joint.S.Q" ,
"TriPed.Leg_0.SubChain_1.Coupling01_1_Spherical_Joint.S.w" ,
"TriPed.Leg_0.SubChain_1.Coupling01_1_Spherical_Joint.S.w" ,
"TriPed.Leg_0.SubChain_1.Coupling01_1_Spherical_Joint.S.w" ,
"TriPed.Leg_0.SubChain_2.Coupling02_1_Spherical_Joint.S.Q" ,
"TriPed.Leg_0.SubChain_2.Coupling02_1_Spherical_Joint.S.Q" ,
"TriPed.Leg_0.SubChain_2.Coupling02_1_Spherical_Joint.S.Q" ,
"TriPed.Leg_0.SubChain_2.Coupling02_1_Spherical_Joint.S.Q" ,
"TriPed.Leg_0.SubChain_2.Coupling02_1_Spherical_Joint.S.w" ,
"TriPed.Leg_0.SubChain_2.Coupling02_1_Spherical_Joint.S.w" ,
"TriPed.Leg_0.SubChain_2.Coupling02_1_Spherical_Joint.S.w" ,
"TriPed.Leg_1.SubChain_0.LCS0_Gimbal_Joint.Rx.q" ,
"TriPed.Leg_1.SubChain_0.LCS0_Gimbal_Joint.Ry.q" ,
"TriPed.Leg_1.SubChain_0.LCS0_Gimbal_Joint.Rz.q" ,
"TriPed.Leg_1.SubChain_0.LCS0_Gimbal_Joint.Rx.w" ,
"TriPed.Leg_1.SubChain_0.LCS0_Gimbal_Joint.Ry.w" ,
"TriPed.Leg_1.SubChain_0.LCS0_Gimbal_Joint.Rz.w" ,
"TriPed.Leg_1.OpenSubChain.LL_revolute_Joint.Rz.q" ,
"TriPed.Leg_1.OpenSubChain.LL_revolute_Joint.Rz.w" ,
"TriPed.Leg_1.SubChain_1.Coupling01_1_Spherical_Joint.S.Q" ,
"TriPed.Leg_1.SubChain_1.Coupling01_1_Spherical_Joint.S.Q" ,
"TriPed.Leg_1.SubChain_1.Coupling01_1_Spherical_Joint.S.Q" ,
"TriPed.Leg_1.SubChain_1.Coupling01_1_Spherical_Joint.S.Q" ,
"TriPed.Leg_1.SubChain_1.Coupling01_1_Spherical_Joint.S.w" ,
"TriPed.Leg_1.SubChain_1.Coupling01_1_Spherical_Joint.S.w" ,
"TriPed.Leg_1.SubChain_1.Coupling01_1_Spherical_Joint.S.w" ,
"TriPed.Leg_1.SubChain_2.Coupling02_1_Spherical_Joint.S.Q" ,
"TriPed.Leg_1.SubChain_2.Coupling02_1_Spherical_Joint.S.Q" ,
"TriPed.Leg_1.SubChain_2.Coupling02_1_Spherical_Joint.S.Q" ,
"TriPed.Leg_1.SubChain_2.Coupling02_1_Spherical_Joint.S.Q" ,
"TriPed.Leg_1.SubChain_2.Coupling02_1_Spherical_Joint.S.w" ,
"TriPed.Leg_1.SubChain_2.Coupling02_1_Spherical_Joint.S.w" ,
"TriPed.Leg_1.SubChain_2.Coupling02_1_Spherical_Joint.S.w" ,
"TriPed.Leg_2.SubChain_0.LCS0_Gimbal_Joint.Rx.q" ,
"TriPed.Leg_2.SubChain_0.LCS0_Gimbal_Joint.Ry.q" ,
"TriPed.Leg_2.SubChain_0.LCS0_Gimbal_Joint.Rz.q" ,
"TriPed.Leg_2.SubChain_0.LCS0_Gimbal_Joint.Rx.w" ,
"TriPed.Leg_2.SubChain_0.LCS0_Gimbal_Joint.Ry.w" ,
"TriPed.Leg_2.SubChain_0.LCS0_Gimbal_Joint.Rz.w" ,
"TriPed.Leg_2.OpenSubChain.LL_revolute_Joint.Rz.q" ,
"TriPed.Leg_2.OpenSubChain.LL_revolute_Joint.Rz.w" ,
"TriPed.Leg_2.SubChain_1.Coupling01_1_Spherical_Joint.S.Q" ,
"TriPed.Leg_2.SubChain_1.Coupling01_1_Spherical_Joint.S.Q" ,
"TriPed.Leg_2.SubChain_1.Coupling01_1_Spherical_Joint.S.Q" ,
"TriPed.Leg_2.SubChain_1.Coupling01_1_Spherical_Joint.S.Q" ,
"TriPed.Leg_2.SubChain_1.Coupling01_1_Spherical_Joint.S.w" ,
"TriPed.Leg_2.SubChain_1.Coupling01_1_Spherical_Joint.S.w" ,
"TriPed.Leg_2.SubChain_1.Coupling01_1_Spherical_Joint.S.w" ,
"TriPed.Leg_2.SubChain_2.Coupling02_1_Spherical_Joint.S.Q" ,
"TriPed.Leg_2.SubChain_2.Coupling02_1_Spherical_Joint.S.Q" ,
"TriPed.Leg_2.SubChain_2.Coupling02_1_Spherical_Joint.S.Q" ,
"TriPed.Leg_2.SubChain_2.Coupling02_1_Spherical_Joint.S.Q" ,
"TriPed.Leg_2.SubChain_2.Coupling02_1_Spherical_Joint.S.w" ,
"TriPed.Leg_2.SubChain_2.Coupling02_1_Spherical_Joint.S.w" ,
"TriPed.Leg_2.SubChain_2.Coupling02_1_Spherical_Joint.S.w" ,
"TriPed.Leg_0.OpenSubChain.leg_extend_to_LL_GearConstraint.q" ,
"TriPed.Leg_0.OpenSubChain.leg_extend_to_LL_GearConstraint.w" ,
"TriPed.Leg_1.OpenSubChain.leg_extend_to_LL_GearConstraint.q" ,
"TriPed.Leg_1.OpenSubChain.leg_extend_to_LL_GearConstraint.w" ,
"TriPed.Leg_2.OpenSubChain.leg_extend_to_LL_GearConstraint.q" ,
"TriPed.Leg_2.OpenSubChain.leg_extend_to_LL_GearConstraint.w" } ; const char
* varObjects [ 72 ] = { "triped/TriPed/Leg_0/SubChain 0/LCS0_Gimbal_Joint" ,
"triped/TriPed/Leg_0/SubChain 0/LCS0_Gimbal_Joint" ,
"triped/TriPed/Leg_0/SubChain 0/LCS0_Gimbal_Joint" ,
"triped/TriPed/Leg_0/SubChain 0/LCS0_Gimbal_Joint" ,
"triped/TriPed/Leg_0/SubChain 0/LCS0_Gimbal_Joint" ,
"triped/TriPed/Leg_0/SubChain 0/LCS0_Gimbal_Joint" ,
"triped/TriPed/Leg_0/OpenSubChain/LL_revolute_Joint" ,
"triped/TriPed/Leg_0/OpenSubChain/LL_revolute_Joint" ,
"triped/TriPed/Leg_0/SubChain 1/Coupling01_1_Spherical_Joint" ,
"triped/TriPed/Leg_0/SubChain 1/Coupling01_1_Spherical_Joint" ,
"triped/TriPed/Leg_0/SubChain 1/Coupling01_1_Spherical_Joint" ,
"triped/TriPed/Leg_0/SubChain 1/Coupling01_1_Spherical_Joint" ,
"triped/TriPed/Leg_0/SubChain 1/Coupling01_1_Spherical_Joint" ,
"triped/TriPed/Leg_0/SubChain 1/Coupling01_1_Spherical_Joint" ,
"triped/TriPed/Leg_0/SubChain 1/Coupling01_1_Spherical_Joint" ,
"triped/TriPed/Leg_0/SubChain 2/Coupling02_1_Spherical_Joint" ,
"triped/TriPed/Leg_0/SubChain 2/Coupling02_1_Spherical_Joint" ,
"triped/TriPed/Leg_0/SubChain 2/Coupling02_1_Spherical_Joint" ,
"triped/TriPed/Leg_0/SubChain 2/Coupling02_1_Spherical_Joint" ,
"triped/TriPed/Leg_0/SubChain 2/Coupling02_1_Spherical_Joint" ,
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
"triped/TriPed/Leg_1/SubChain 1/Coupling01_1_Spherical_Joint" ,
"triped/TriPed/Leg_1/SubChain 1/Coupling01_1_Spherical_Joint" ,
"triped/TriPed/Leg_1/SubChain 1/Coupling01_1_Spherical_Joint" ,
"triped/TriPed/Leg_1/SubChain 1/Coupling01_1_Spherical_Joint" ,
"triped/TriPed/Leg_1/SubChain 1/Coupling01_1_Spherical_Joint" ,
"triped/TriPed/Leg_1/SubChain 2/Coupling02_1_Spherical_Joint" ,
"triped/TriPed/Leg_1/SubChain 2/Coupling02_1_Spherical_Joint" ,
"triped/TriPed/Leg_1/SubChain 2/Coupling02_1_Spherical_Joint" ,
"triped/TriPed/Leg_1/SubChain 2/Coupling02_1_Spherical_Joint" ,
"triped/TriPed/Leg_1/SubChain 2/Coupling02_1_Spherical_Joint" ,
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
"triped/TriPed/Leg_2/SubChain 1/Coupling01_1_Spherical_Joint" ,
"triped/TriPed/Leg_2/SubChain 1/Coupling01_1_Spherical_Joint" ,
"triped/TriPed/Leg_2/SubChain 1/Coupling01_1_Spherical_Joint" ,
"triped/TriPed/Leg_2/SubChain 1/Coupling01_1_Spherical_Joint" ,
"triped/TriPed/Leg_2/SubChain 1/Coupling01_1_Spherical_Joint" ,
"triped/TriPed/Leg_2/SubChain 2/Coupling02_1_Spherical_Joint" ,
"triped/TriPed/Leg_2/SubChain 2/Coupling02_1_Spherical_Joint" ,
"triped/TriPed/Leg_2/SubChain 2/Coupling02_1_Spherical_Joint" ,
"triped/TriPed/Leg_2/SubChain 2/Coupling02_1_Spherical_Joint" ,
"triped/TriPed/Leg_2/SubChain 2/Coupling02_1_Spherical_Joint" ,
"triped/TriPed/Leg_2/SubChain 2/Coupling02_1_Spherical_Joint" ,
"triped/TriPed/Leg_2/SubChain 2/Coupling02_1_Spherical_Joint" ,
"triped/TriPed/Leg_0/OpenSubChain/leg_extend_to_LL_GearConstraint" ,
"triped/TriPed/Leg_0/OpenSubChain/leg_extend_to_LL_GearConstraint" ,
"triped/TriPed/Leg_1/OpenSubChain/leg_extend_to_LL_GearConstraint" ,
"triped/TriPed/Leg_1/OpenSubChain/leg_extend_to_LL_GearConstraint" ,
"triped/TriPed/Leg_2/OpenSubChain/leg_extend_to_LL_GearConstraint" ,
"triped/TriPed/Leg_2/OpenSubChain/leg_extend_to_LL_GearConstraint" } ; smData
-> mNumVarScalars = 72 ; smData -> mVarFullPaths = NULL ; smData ->
mVarObjects = NULL ; if ( smData -> mNumVarScalars > 0 ) { size_t s ;
PmAllocator * alloc = pm_default_allocator ( ) ; PM_ALLOCATE_ARRAY ( smData
-> mVarFullPaths , PmCharVector , 72 , alloc ) ; PM_ALLOCATE_ARRAY ( smData
-> mVarObjects , PmCharVector , 72 , alloc ) ; for ( s = 0 ; s < smData ->
mNumVarScalars ; ++ s ) { smData -> mVarFullPaths [ s ] = cStringToCharVector
( varFullPaths [ s ] ) ; smData -> mVarObjects [ s ] = cStringToCharVector (
varObjects [ s ] ) ; } } } static void initRuntimeParameters (
NeDaePrivateData * smData ) { PmAllocator * alloc = pm_default_allocator ( )
; int_T status = 0 ; size_t i = 0 ; const int32_T * rtpRootVarRows = NULL ;
const int32_T * rtpRootVarCols = NULL ; const char * * rtpFullPaths = NULL ;
smData -> mNumRtpRootVars = 0 ; status = pm_create_int_vector_fields ( &
smData -> mRtpRootVarRows , smData -> mNumRtpRootVars , alloc ) ;
checkMemAllocStatus ( status ) ; memcpy ( smData -> mRtpRootVarRows . mX ,
rtpRootVarRows , smData -> mNumRtpRootVars * sizeof ( int32_T ) ) ; status =
pm_create_int_vector_fields ( & smData -> mRtpRootVarCols , smData ->
mNumRtpRootVars , alloc ) ; checkMemAllocStatus ( status ) ; memcpy ( smData
-> mRtpRootVarCols . mX , rtpRootVarCols , smData -> mNumRtpRootVars * sizeof
( int32_T ) ) ; smData -> mRtpFullPaths = NULL ; if ( smData ->
mNumRtpRootVars > 0 ) { size_t v ; PM_ALLOCATE_ARRAY ( smData ->
mRtpFullPaths , PmCharVector , 0 , alloc ) ; for ( v = 0 ; v < smData ->
mNumRtpRootVars ; ++ v ) { smData -> mRtpFullPaths [ v ] =
cStringToCharVector ( rtpFullPaths [ v ] ) ; } } smData ->
mNumRuntimeRootVarScalars = 0 ; status = pm_create_real_vector_fields ( &
smData -> mRuntimeParameterScalars , 0 , alloc ) ; checkMemAllocStatus (
status ) ; for ( i = 0 ; i < smData -> mRuntimeParameterScalars . mN ; ++ i )
smData -> mRuntimeParameterScalars . mX [ i ] = 0.0 ;
sm_core_RuntimeDerivedValuesBundle_create ( & smData ->
mAsmRuntimeDerivedValuesBundle , 0 , 0 ) ;
sm_core_RuntimeDerivedValuesBundle_create ( & smData ->
mSimRuntimeDerivedValuesBundle , 0 , 0 ) ; } static void initIoInfoHelper (
size_t n , const char * portPathsSource [ ] , const char * unitsSource [ ] ,
const SizePair dimensions [ ] , boolean_T doInputs , NeDaePrivateData *
smData ) { PmCharVector * portPaths = NULL ; PmCharVector * units = NULL ;
NeDsIoInfo * infos = NULL ; if ( n > 0 ) { size_t s ; PmAllocator * alloc =
pm_default_allocator ( ) ; PM_ALLOCATE_ARRAY ( portPaths , PmCharVector , n ,
alloc ) ; PM_ALLOCATE_ARRAY ( units , PmCharVector , n , alloc ) ;
PM_ALLOCATE_ARRAY ( infos , NeDsIoInfo , n , alloc ) ; for ( s = 0 ; s < n ;
++ s ) { portPaths [ s ] = cStringToCharVector ( portPathsSource [ s ] ) ;
units [ s ] = cStringToCharVector ( unitsSource [ s ] ) ; { NeDsIoInfo * info
= infos + s ; info -> mName = info -> mIdentifier = portPaths [ s ] . mX ;
info -> mM = dimensions [ s ] . first ; info -> mN = dimensions [ s ] .
second ; info -> mUnit = units [ s ] . mX ; } } } if ( doInputs ) { smData ->
mNumInputs = n ; smData -> mInputPortPaths = portPaths ; smData ->
mInputUnits = units ; smData -> mInputInfos = infos ; } else { smData ->
mNumOutputs = n ; smData -> mOutputPortPaths = portPaths ; smData ->
mOutputUnits = units ; smData -> mOutputInfos = infos ; } } static void
initIoInfo ( NeDaePrivateData * smData ) { const char * inputPortPaths [ 9 ]
= { "TriPed.Leg_0.OpenSubChain.leg_extend_motor_revolute_Joint.qi" ,
"TriPed.Leg_0.SubChain_1.left_swing_motor_Revolute_Joint.qi" ,
"TriPed.Leg_0.SubChain_2.right_swing_motor_Revolute_Joint.qi" ,
"TriPed.Leg_1.OpenSubChain.leg_extend_motor_revolute_Joint.qi" ,
"TriPed.Leg_1.SubChain_1.left_swing_motor_Revolute_Joint.qi" ,
"TriPed.Leg_1.SubChain_2.right_swing_motor_Revolute_Joint.qi" ,
"TriPed.Leg_2.OpenSubChain.leg_extend_motor_revolute_Joint.qi" ,
"TriPed.Leg_2.SubChain_1.left_swing_motor_Revolute_Joint.qi" ,
"TriPed.Leg_2.SubChain_2.right_swing_motor_Revolute_Joint.qi" } ; const char
* inputUnits [ 9 ] = { "rad" , "rad" , "rad" , "rad" , "rad" , "rad" , "rad"
, "rad" , "rad" } ; const SizePair inputDimensions [ 9 ] = { { 1 , 1 } , { 1
, 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 }
, { 1 , 1 } } ; const char * outputPortPaths [ 45 ] = {
"TriPed.Leg_0.OpenSubChain.leg_extend_motor_revolute_Joint.q" ,
"TriPed.Leg_0.SubChain_0.x6DOF_FT_Sensor_0.x6_DOF_F_T_Sensor.fc" ,
"TriPed.Leg_0.SubChain_0.x6DOF_FT_Sensor_0.x6_DOF_F_T_Sensor.tc" ,
"TriPed.Leg_0.SubChain_1.Coupling01_1_Spherical_Joint.Q" ,
"TriPed.Leg_0.SubChain_1.Coupling01_1_Spherical_Joint.w" ,
"TriPed.Leg_0.SubChain_1.Coupling_01_2_Spherical_Joint.Q" ,
"TriPed.Leg_0.SubChain_1.Coupling_01_2_Spherical_Joint.w" ,
"TriPed.Leg_0.SubChain_1.left_swing_motor_Revolute_Joint.q" ,
"TriPed.Leg_0.SubChain_2.Coupling02_1_Spherical_Joint.Q" ,
"TriPed.Leg_0.SubChain_2.Coupling02_1_Spherical_Joint.w" ,
"TriPed.Leg_0.SubChain_2.Coupling02_2_Spherical_Joint.Q" ,
"TriPed.Leg_0.SubChain_2.Coupling02_2_Spherical_Joint.w" ,
"TriPed.Leg_0.SubChain_2.right_swing_motor_Revolute_Joint.q" ,
"TriPed.Leg_1.OpenSubChain.leg_extend_motor_revolute_Joint.q" ,
"TriPed.Leg_1.SubChain_0.x6DOF_FT_Sensor_0.x6_DOF_F_T_Sensor.fc" ,
"TriPed.Leg_1.SubChain_0.x6DOF_FT_Sensor_0.x6_DOF_F_T_Sensor.tc" ,
"TriPed.Leg_1.SubChain_1.Coupling01_1_Spherical_Joint.Q" ,
"TriPed.Leg_1.SubChain_1.Coupling01_1_Spherical_Joint.w" ,
"TriPed.Leg_1.SubChain_1.Coupling_01_2_Spherical_Joint.Q" ,
"TriPed.Leg_1.SubChain_1.Coupling_01_2_Spherical_Joint.w" ,
"TriPed.Leg_1.SubChain_1.left_swing_motor_Revolute_Joint.q" ,
"TriPed.Leg_1.SubChain_2.Coupling02_1_Spherical_Joint.Q" ,
"TriPed.Leg_1.SubChain_2.Coupling02_1_Spherical_Joint.w" ,
"TriPed.Leg_1.SubChain_2.Coupling02_2_Spherical_Joint.Q" ,
"TriPed.Leg_1.SubChain_2.Coupling02_2_Spherical_Joint.w" ,
"TriPed.Leg_1.SubChain_2.right_swing_motor_Revolute_Joint.q" ,
"TriPed.Leg_2.OpenSubChain.leg_extend_motor_revolute_Joint.q" ,
"TriPed.Leg_2.SubChain_0.x6DOF_FT_Sensor_0.x6_DOF_F_T_Sensor.fc" ,
"TriPed.Leg_2.SubChain_0.x6DOF_FT_Sensor_0.x6_DOF_F_T_Sensor.tc" ,
"TriPed.Leg_2.SubChain_1.Coupling01_1_Spherical_Joint.Q" ,
"TriPed.Leg_2.SubChain_1.Coupling01_1_Spherical_Joint.w" ,
"TriPed.Leg_2.SubChain_1.Coupling_01_2_Spherical_Joint.Q" ,
"TriPed.Leg_2.SubChain_1.Coupling_01_2_Spherical_Joint.w" ,
"TriPed.Leg_2.SubChain_1.left_swing_motor_Revolute_Joint.q" ,
"TriPed.Leg_2.SubChain_2.Coupling02_1_Spherical_Joint.Q" ,
"TriPed.Leg_2.SubChain_2.Coupling02_1_Spherical_Joint.w" ,
"TriPed.Leg_2.SubChain_2.Coupling02_2_Spherical_Joint.Q" ,
"TriPed.Leg_2.SubChain_2.Coupling02_2_Spherical_Joint.w" ,
"TriPed.Leg_2.SubChain_2.right_swing_motor_Revolute_Joint.q" ,
"TriPed.Ground.SpatialContactForce_Leg0.fn" ,
"TriPed.Ground.SpatialContactForce_Leg1.fn" ,
"TriPed.Ground.SpatialContactForce_Leg2.fn" , "TriPed.Transform_Sensor.x" ,
"TriPed.Transform_Sensor.y" , "TriPed.Transform_Sensor.z" } ; const char *
outputUnits [ 45 ] = { "rad" , "m*kg/s^2" , "m^2*kg/s^2" , "1" , "rad/s" ,
"1" , "rad/s" , "rad" , "1" , "rad/s" , "1" , "rad/s" , "rad" , "rad" ,
"m*kg/s^2" , "m^2*kg/s^2" , "1" , "rad/s" , "1" , "rad/s" , "rad" , "1" ,
"rad/s" , "1" , "rad/s" , "rad" , "rad" , "m*kg/s^2" , "m^2*kg/s^2" , "1" ,
"rad/s" , "1" , "rad/s" , "rad" , "1" , "rad/s" , "1" , "rad/s" , "rad" ,
"m*kg/s^2" , "m*kg/s^2" , "m*kg/s^2" , "m" , "m" , "m" } ; const SizePair
outputDimensions [ 45 ] = { { 1 , 1 } , { 3 , 1 } , { 3 , 1 } , { 4 , 1 } , {
3 , 1 } , { 4 , 1 } , { 3 , 1 } , { 1 , 1 } , { 4 , 1 } , { 3 , 1 } , { 4 , 1
} , { 3 , 1 } , { 1 , 1 } , { 1 , 1 } , { 3 , 1 } , { 3 , 1 } , { 4 , 1 } , {
3 , 1 } , { 4 , 1 } , { 3 , 1 } , { 1 , 1 } , { 4 , 1 } , { 3 , 1 } , { 4 , 1
} , { 3 , 1 } , { 1 , 1 } , { 1 , 1 } , { 3 , 1 } , { 3 , 1 } , { 4 , 1 } , {
3 , 1 } , { 4 , 1 } , { 3 , 1 } , { 1 , 1 } , { 4 , 1 } , { 3 , 1 } , { 4 , 1
} , { 3 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , { 1 , 1 } , {
1 , 1 } , { 1 , 1 } } ; initIoInfoHelper ( 9 , inputPortPaths , inputUnits ,
inputDimensions , true , smData ) ; initIoInfoHelper ( 45 , outputPortPaths ,
outputUnits , outputDimensions , false , smData ) ; } static void
initInputDerivs ( NeDaePrivateData * smData ) { const int32_T numInputDerivs
[ 9 ] = { 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 , 2 } ; PmAllocator * alloc =
pm_default_allocator ( ) ; const int_T status = pm_create_int_vector_fields (
& smData -> mNumInputDerivs , smData -> mInputVectorSize , alloc ) ;
checkMemAllocStatus ( status ) ; memcpy ( smData -> mNumInputDerivs . mX ,
numInputDerivs , 9 * sizeof ( int32_T ) ) ; smData -> mInputOrder = 2 ; }
static void initDirectFeedthrough ( NeDaePrivateData * smData ) { const
boolean_T directFeedthroughVector [ 9 ] = { true , true , true , true , true
, true , true , true , true } ; const boolean_T directFeedthroughMatrix [
2106 ] = { true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true } ; PmAllocator * alloc =
pm_default_allocator ( ) ; { const int_T status =
pm_create_bool_vector_fields ( & smData -> mDirectFeedthroughVector , 9 ,
alloc ) ; checkMemAllocStatus ( status ) ; memcpy ( smData ->
mDirectFeedthroughVector . mX , directFeedthroughVector , 9 * sizeof (
boolean_T ) ) ; } { const int_T status = pm_create_bool_vector_fields ( &
smData -> mDirectFeedthroughMatrix , 2106 , alloc ) ; checkMemAllocStatus (
status ) ; memcpy ( smData -> mDirectFeedthroughMatrix . mX ,
directFeedthroughMatrix , 2106 * sizeof ( boolean_T ) ) ; } } static void
initOutputDerivProc ( NeDaePrivateData * smData ) { PmAllocator * alloc =
pm_default_allocator ( ) ; const int32_T outputFunctionMap [ 117 ] = { 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ;
smData -> mOutputFunctionMap = pm_create_int_vector ( 117 , alloc ) ; memcpy
( smData -> mOutputFunctionMap -> mX , outputFunctionMap , 117 * sizeof (
int32_T ) ) ; smData -> mNumOutputClasses = 1 ; smData ->
mHasKinematicOutputs = true ; smData -> mHasDynamicOutputs = true ; smData ->
mIsOutputClass0Dynamic = false ; smData -> mDoComputeDynamicOutputs = false ;
smData -> mCachedDerivativesAvailable = false ; { size_t i = 0 ; const int_T
status = pm_create_real_vector_fields ( & smData -> mCachedDerivatives , 72 ,
pm_default_allocator ( ) ) ; checkMemAllocStatus ( status ) ; for ( i = 0 ; i
< smData -> mCachedDerivatives . mN ; ++ i ) smData -> mCachedDerivatives .
mX [ i ] = 0.0 ; } }
#if 0
static void initializeSizePairVector ( const SmSizePair * data ,
SmSizePairVector * vector ) { const size_t n = sm_core_SmSizePairVector_size
( vector ) ; size_t i ; for ( i = 0 ; i < n ; ++ i , ++ data )
sm_core_SmSizePairVector_setValue ( vector , i , data ++ ) ; }
#endif
static void initAssemblyDelegate ( SmMechanismDelegate * delegate ) {
SmMechanismDelegateScratchpad * scratchpad = NULL ; const SmSizePair
jointToStageIdx [ 26 ] = { { 33 , 25 } , { 61 , 3 } , { 65 , 4 } , { 75 , 2 }
, { 85 , 1 } , { 101 , 6 } , { 107 , 5 } , { 125 , 8 } , { 131 , 7 } , { 159
, 11 } , { 163 , 12 } , { 173 , 10 } , { 183 , 9 } , { 199 , 14 } , { 205 ,
13 } , { 223 , 16 } , { 229 , 15 } , { 257 , 19 } , { 261 , 20 } , { 271 , 18
} , { 281 , 17 } , { 297 , 22 } , { 303 , 21 } , { 321 , 24 } , { 327 , 23 }
, { 343 , 0 } } ; const size_t primitiveIndices [ 26 + 1 ] = { 0 , 0 , 0 , 3
, 4 , 5 , 6 , 7 , 8 , 9 , 9 , 12 , 13 , 14 , 15 , 16 , 17 , 18 , 18 , 21 , 22
, 23 , 24 , 25 , 26 , 27 , 27 } ; const SmSizePair stateOffsets [ 27 ] = { {
0 , 3 } , { 1 , 4 } , { 2 , 5 } , { 6 , 7 } , { 8 , 9 } , { 10 , 11 } , { 12
, 16 } , { 19 , 20 } , { 21 , 25 } , { 28 , 31 } , { 29 , 32 } , { 30 , 33 }
, { 34 , 35 } , { 36 , 37 } , { 38 , 39 } , { 40 , 44 } , { 47 , 48 } , { 49
, 53 } , { 56 , 59 } , { 57 , 60 } , { 58 , 61 } , { 62 , 63 } , { 64 , 65 }
, { 66 , 67 } , { 68 , 72 } , { 75 , 76 } , { 77 , 81 } } ; const SmSizePair
dofOffsets [ 27 ] = { { 0 , 1 } , { 1 , 2 } , { 2 , 3 } , { 3 , 4 } , { 4 , 5
} , { 5 , 6 } , { 6 , 9 } , { 9 , 10 } , { 10 , 13 } , { 13 , 14 } , { 14 ,
15 } , { 15 , 16 } , { 16 , 17 } , { 17 , 18 } , { 18 , 19 } , { 19 , 22 } ,
{ 22 , 23 } , { 23 , 26 } , { 26 , 27 } , { 27 , 28 } , { 28 , 29 } , { 29 ,
30 } , { 30 , 31 } , { 31 , 32 } , { 32 , 35 } , { 35 , 36 } , { 36 , 39 } }
; const size_t * flexibleStages = NULL ; const size_t remodIndices [ 21 ] = {
0 , 1 , 2 , 6 , 8 , 10 , 19 , 28 , 29 , 30 , 34 , 36 , 38 , 47 , 56 , 57 , 58
, 62 , 64 , 66 , 75 } ; const size_t equationsPerConstraint [ 9 ] = { 3 , 3 ,
3 , 3 , 3 , 3 , 5 , 5 , 5 } ; const size_t dofToVelSlot [ 39 ] = { 3 , 4 , 5
, 7 , 9 , 11 , 16 , 17 , 18 , 20 , 25 , 26 , 27 , 31 , 32 , 33 , 35 , 37 , 39
, 44 , 45 , 46 , 48 , 53 , 54 , 55 , 59 , 60 , 61 , 63 , 65 , 67 , 72 , 73 ,
74 , 76 , 81 , 82 , 83 } ; const size_t constraintDofs [ 48 ] = { 5 , 6 , 7 ,
8 , 0 , 1 , 2 , 9 , 10 , 11 , 12 , 0 , 1 , 2 , 18 , 19 , 20 , 21 , 13 , 14 ,
15 , 22 , 23 , 24 , 25 , 13 , 14 , 15 , 31 , 32 , 33 , 34 , 26 , 27 , 28 , 35
, 36 , 37 , 38 , 26 , 27 , 28 , 4 , 3 , 17 , 16 , 30 , 29 } ; const size_t
constraintDofOffsets [ 9 + 1 ] = { 0 , 7 , 14 , 21 , 28 , 35 , 42 , 44 , 46 ,
48 } ; const size_t Jm = 33 ; const size_t Jn = 39 ; SmSizePair zeroSizePair
; zeroSizePair . mFirst = zeroSizePair . mSecond = 0 ;
sm_core_MechanismDelegate_allocScratchpad ( delegate ) ; scratchpad =
delegate -> mScratchpad ; delegate -> mTargetStrengthFree = 0 ; delegate ->
mTargetStrengthSuggested = 1 ; delegate -> mTargetStrengthDesired = 2 ;
delegate -> mTargetStrengthRequired = 3 ; delegate -> mConsistencyTol = +
1.000000000000000062e-09 ; delegate -> mTreeJointDof = 39 ; delegate -> mDof
= 39 ; delegate -> mStateSize = 93 ; delegate -> mContinuousStateSize = 90 ;
delegate -> mModeVectorSize = 0 ; delegate -> mNumStages = 26 ; delegate ->
mNumConstraints = 9 ; delegate -> mNumAllConstraintEquations = 33 ;
sm_core_SmSizePairVector_create ( & delegate -> mJointToStageIdx , 26 , &
zeroSizePair ) ; memcpy ( sm_core_SmSizePairVector_nonConstValues ( &
delegate -> mJointToStageIdx ) , jointToStageIdx , 26 * sizeof ( SmSizePair )
) ; sm_core_SmSizeTVector_create ( & delegate -> mPrimitiveIndices , delegate
-> mNumStages + 1 , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues ( &
delegate -> mPrimitiveIndices ) , primitiveIndices , ( delegate -> mNumStages
+ 1 ) * sizeof ( size_t ) ) ; sm_core_SmSizePairVector_create ( & delegate ->
mStateOffsets , 27 , & zeroSizePair ) ; memcpy (
sm_core_SmSizePairVector_nonConstValues ( & delegate -> mStateOffsets ) ,
stateOffsets , 27 * sizeof ( SmSizePair ) ) ; sm_core_SmSizePairVector_create
( & delegate -> mDofOffsets , 27 , & zeroSizePair ) ; memcpy (
sm_core_SmSizePairVector_nonConstValues ( & delegate -> mDofOffsets ) ,
dofOffsets , 27 * sizeof ( SmSizePair ) ) ; sm_core_SmSizeTVector_create ( &
delegate -> mFlexibleStages , 0 , 0 ) ; memcpy (
sm_core_SmSizeTVector_nonConstValues ( & delegate -> mFlexibleStages ) ,
flexibleStages , 0 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create ( &
delegate -> mRemodIndices , 21 , 0 ) ; memcpy (
sm_core_SmSizeTVector_nonConstValues ( & delegate -> mRemodIndices ) ,
remodIndices , 21 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create ( &
delegate -> mEquationsPerConstraint , delegate -> mNumConstraints , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mEquationsPerConstraint ) , equationsPerConstraint , delegate ->
mNumConstraints * sizeof ( size_t ) ) ; sm_core_SmIntVector_create ( &
delegate -> mRunTimeEnabledEquations , delegate -> mNumAllConstraintEquations
, 1 ) ; sm_core_SmSizeTVector_create ( & delegate -> mDofToVelSlot , delegate
-> mDof , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mDofToVelSlot ) , dofToVelSlot , delegate -> mDof * sizeof ( size_t ) ) ;
sm_core_SmSizeTVector_create ( & delegate -> mConstraintDofs , 48 , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate -> mConstraintDofs
) , constraintDofs , 48 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create
( & delegate -> mConstraintDofOffsets , delegate -> mNumConstraints + 1 , 0 )
; memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mConstraintDofOffsets ) , constraintDofOffsets , ( delegate ->
mNumConstraints + 1 ) * sizeof ( size_t ) ) ; sm_core_SmBoundedSet_create ( &
scratchpad -> mPosRequired , 39 ) ; sm_core_SmBoundedSet_create ( &
scratchpad -> mPosDesired , 39 ) ; sm_core_SmBoundedSet_create ( & scratchpad
-> mPosSuggested , 39 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosFree , 39 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosNonRequired , 39 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosSuggAndFree , 39 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelRequired , 39 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelDesired , 39 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelSuggested , 39 ) ; sm_core_SmBoundedSet_create ( & scratchpad -> mVelFree
, 39 ) ; sm_core_SmBoundedSet_create ( & scratchpad -> mVelNonRequired , 39 )
; sm_core_SmBoundedSet_create ( & scratchpad -> mVelSuggAndFree , 39 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mConstraintFilter , 9 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveConstraints , 9 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveDofs , 39 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveDofs0 , 39 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mNewConstraints , 9 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mNewDofs , 39 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mUnsatisfiedConstraints , 9 ) ;
sm_core_SmSizeTVector_create ( & scratchpad -> mActiveConstraintsVect , 9 , 0
) ; sm_core_SmSizeTVector_create ( & scratchpad -> mActiveDofsVect , 39 , 0 )
; sm_core_SmSizeTVector_create ( & scratchpad -> mFullDofToActiveDof , 39 , 0
) ; sm_core_SmSizePairVector_create ( & scratchpad ->
mPartiallyPosTargetedPrims , 27 , & zeroSizePair ) ;
sm_core_SmSizePairVector_create ( & scratchpad -> mPartiallyVelTargetedPrims
, 27 , & zeroSizePair ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mPosPartialTypes , 27 , 0 ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mVelPartialTypes , 27 , 0 ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mPartiallyActivePrims , 27 , 0 ) ; sm_core_SmSizePairVector_create ( &
scratchpad -> mBaseFrameVelOffsets , 6 , & zeroSizePair ) ;
sm_core_SmSizePairVector_create ( & scratchpad -> mCvVelOffsets , 27 , &
zeroSizePair ) ; sm_core_SmRealVector_create ( & scratchpad ->
mCvAzimuthValues , 27 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mInitialState , 93 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mStartState , 93 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mTestState , 93 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mFullStateVector , 93 , 0.0 ) ; sm_core_SmIntVector_create ( & scratchpad ->
mModeVector , 0 , 0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mJacobianRowMaj , Jm * Jn , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mJacobian , Jm * Jn , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mJacobianPrimSubmatrix , Jm * 6 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mConstraintNonhomoTerms , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mConstraintError , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mBestConstraintError ,
Jm , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mDeltas , Jn * (
Jm <= Jn ? Jm : Jn ) , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mSvdWork , 5395 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mLineSearchScaledDeltaVect , 39 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mLineSearchTestStateVect , 93 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mLineSearchErrorVect , Jm , 0.0
) ; sm_core_SmRealVector_create ( & scratchpad -> mActiveDofVelsVect , 39 ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mVelSystemRhs , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mMotionData , 471 , 0.0
) ; delegate -> mSetTargets = triped_a151ee3d_1_setTargets ; delegate ->
mResetStateVector = triped_a151ee3d_1_resetAsmStateVector ; delegate ->
mInitializeTrackedAngleState = triped_a151ee3d_1_initializeTrackedAngleState
; delegate -> mComputeDiscreteState = triped_a151ee3d_1_computeDiscreteState
; delegate -> mAdjustPosition = triped_a151ee3d_1_adjustPosition ; delegate
-> mPerturbJointPrimitiveState =
triped_a151ee3d_1_perturbAsmJointPrimitiveState ; delegate ->
mPerturbFlexibleBodyState = NULL ; delegate -> mComputePosDofBlendMatrix =
triped_a151ee3d_1_computePosDofBlendMatrix ; delegate ->
mComputeVelDofBlendMatrix = triped_a151ee3d_1_computeVelDofBlendMatrix ;
delegate -> mProjectPartiallyTargetedPos =
triped_a151ee3d_1_projectPartiallyTargetedPos ; delegate -> mPropagateMotion
= triped_a151ee3d_1_propagateMotion ; delegate -> mComputeAssemblyError =
triped_a151ee3d_1_computeAssemblyError ; delegate -> mComputeAssemblyJacobian
= triped_a151ee3d_1_computeAssemblyJacobian ; delegate ->
mComputeFullAssemblyJacobian = triped_a151ee3d_1_computeFullAssemblyJacobian
; delegate -> mIsInKinematicSingularity =
triped_a151ee3d_1_isInKinematicSingularity ; delegate -> mConvertStateVector
= triped_a151ee3d_1_convertStateVector ; delegate -> mConstructStateVector =
NULL ; delegate -> mExtractSolverStateVector = NULL ; delegate ->
mIsPositionViolation = NULL ; delegate -> mIsVelocityViolation = NULL ;
delegate -> mProjectStateSim = NULL ; delegate -> mComputeConstraintError =
NULL ; delegate -> mResetModeVector = NULL ; delegate ->
mHasJointDisToNormModeChange = NULL ; delegate ->
mPerformJointDisToNormModeChange = NULL ; delegate -> mOnModeChangedCutJoints
= NULL ; delegate -> mMech = NULL ; } static void initSimulationDelegate (
SmMechanismDelegate * delegate ) { SmMechanismDelegateScratchpad * scratchpad
= NULL ; const SmSizePair jointToStageIdx [ 26 ] = { { 33 , 25 } , { 61 , 3 }
, { 65 , 4 } , { 75 , 2 } , { 85 , 1 } , { 101 , 6 } , { 107 , 5 } , { 125 ,
8 } , { 131 , 7 } , { 159 , 11 } , { 163 , 12 } , { 173 , 10 } , { 183 , 9 }
, { 199 , 14 } , { 205 , 13 } , { 223 , 16 } , { 229 , 15 } , { 257 , 19 } ,
{ 261 , 20 } , { 271 , 18 } , { 281 , 17 } , { 297 , 22 } , { 303 , 21 } , {
321 , 24 } , { 327 , 23 } , { 343 , 0 } } ; const size_t primitiveIndices [
26 + 1 ] = { 0 , 0 , 0 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 9 , 12 , 13 , 14 , 15 ,
16 , 17 , 18 , 18 , 21 , 22 , 23 , 24 , 25 , 26 , 27 , 27 } ; const
SmSizePair stateOffsets [ 27 ] = { { 0 , 3 } , { 1 , 4 } , { 2 , 5 } , { 6 ,
7 } , { 8 , 9 } , { 10 , 11 } , { 12 , 16 } , { 19 , 20 } , { 21 , 25 } , {
28 , 31 } , { 29 , 32 } , { 30 , 33 } , { 34 , 35 } , { 36 , 37 } , { 38 , 39
} , { 40 , 44 } , { 47 , 48 } , { 49 , 53 } , { 56 , 59 } , { 57 , 60 } , {
58 , 61 } , { 62 , 63 } , { 64 , 65 } , { 66 , 67 } , { 68 , 72 } , { 75 , 76
} , { 77 , 81 } } ; const SmSizePair dofOffsets [ 27 ] = { { 0 , 1 } , { 1 ,
2 } , { 2 , 3 } , { 3 , 4 } , { 4 , 5 } , { 5 , 6 } , { 6 , 9 } , { 9 , 10 }
, { 10 , 13 } , { 13 , 14 } , { 14 , 15 } , { 15 , 16 } , { 16 , 17 } , { 17
, 18 } , { 18 , 19 } , { 19 , 22 } , { 22 , 23 } , { 23 , 26 } , { 26 , 27 }
, { 27 , 28 } , { 28 , 29 } , { 29 , 30 } , { 30 , 31 } , { 31 , 32 } , { 32
, 35 } , { 35 , 36 } , { 36 , 39 } } ; const size_t * flexibleStages = NULL ;
const size_t remodIndices [ 21 ] = { 0 , 1 , 2 , 6 , 8 , 10 , 19 , 28 , 29 ,
30 , 34 , 36 , 38 , 47 , 56 , 57 , 58 , 62 , 64 , 66 , 75 } ; const size_t
equationsPerConstraint [ 9 ] = { 3 , 3 , 3 , 3 , 3 , 3 , 1 , 1 , 1 } ; const
size_t dofToVelSlot [ 39 ] = { 3 , 4 , 5 , 7 , 9 , 11 , 16 , 17 , 18 , 20 ,
25 , 26 , 27 , 31 , 32 , 33 , 35 , 37 , 39 , 44 , 45 , 46 , 48 , 53 , 54 , 55
, 59 , 60 , 61 , 63 , 65 , 67 , 72 , 73 , 74 , 76 , 81 , 82 , 83 } ; const
size_t constraintDofs [ 48 ] = { 5 , 6 , 7 , 8 , 0 , 1 , 2 , 9 , 10 , 11 , 12
, 0 , 1 , 2 , 18 , 19 , 20 , 21 , 13 , 14 , 15 , 22 , 23 , 24 , 25 , 13 , 14
, 15 , 31 , 32 , 33 , 34 , 26 , 27 , 28 , 35 , 36 , 37 , 38 , 26 , 27 , 28 ,
4 , 3 , 17 , 16 , 30 , 29 } ; const size_t constraintDofOffsets [ 9 + 1 ] = {
0 , 7 , 14 , 21 , 28 , 35 , 42 , 44 , 46 , 48 } ; const size_t Jm = 21 ;
const size_t Jn = 39 ; SmSizePair zeroSizePair ; zeroSizePair . mFirst =
zeroSizePair . mSecond = 0 ; sm_core_MechanismDelegate_allocScratchpad (
delegate ) ; scratchpad = delegate -> mScratchpad ; delegate ->
mTargetStrengthFree = 0 ; delegate -> mTargetStrengthSuggested = 1 ; delegate
-> mTargetStrengthDesired = 2 ; delegate -> mTargetStrengthRequired = 3 ;
delegate -> mConsistencyTol = + 1.000000000000000062e-09 ; delegate ->
mTreeJointDof = 39 ; delegate -> mDof = 39 ; delegate -> mStateSize = 93 ;
delegate -> mContinuousStateSize = 90 ; delegate -> mModeVectorSize = 0 ;
delegate -> mNumStages = 26 ; delegate -> mNumConstraints = 9 ; delegate ->
mNumAllConstraintEquations = 21 ; sm_core_SmSizePairVector_create ( &
delegate -> mJointToStageIdx , 26 , & zeroSizePair ) ; memcpy (
sm_core_SmSizePairVector_nonConstValues ( & delegate -> mJointToStageIdx ) ,
jointToStageIdx , 26 * sizeof ( SmSizePair ) ) ; sm_core_SmSizeTVector_create
( & delegate -> mPrimitiveIndices , delegate -> mNumStages + 1 , 0 ) ; memcpy
( sm_core_SmSizeTVector_nonConstValues ( & delegate -> mPrimitiveIndices ) ,
primitiveIndices , ( delegate -> mNumStages + 1 ) * sizeof ( size_t ) ) ;
sm_core_SmSizePairVector_create ( & delegate -> mStateOffsets , 27 , &
zeroSizePair ) ; memcpy ( sm_core_SmSizePairVector_nonConstValues ( &
delegate -> mStateOffsets ) , stateOffsets , 27 * sizeof ( SmSizePair ) ) ;
sm_core_SmSizePairVector_create ( & delegate -> mDofOffsets , 27 , &
zeroSizePair ) ; memcpy ( sm_core_SmSizePairVector_nonConstValues ( &
delegate -> mDofOffsets ) , dofOffsets , 27 * sizeof ( SmSizePair ) ) ;
sm_core_SmSizeTVector_create ( & delegate -> mFlexibleStages , 0 , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate -> mFlexibleStages
) , flexibleStages , 0 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create (
& delegate -> mRemodIndices , 21 , 0 ) ; memcpy (
sm_core_SmSizeTVector_nonConstValues ( & delegate -> mRemodIndices ) ,
remodIndices , 21 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create ( &
delegate -> mEquationsPerConstraint , delegate -> mNumConstraints , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mEquationsPerConstraint ) , equationsPerConstraint , delegate ->
mNumConstraints * sizeof ( size_t ) ) ; sm_core_SmIntVector_create ( &
delegate -> mRunTimeEnabledEquations , delegate -> mNumAllConstraintEquations
, 1 ) ; sm_core_SmSizeTVector_create ( & delegate -> mDofToVelSlot , delegate
-> mDof , 0 ) ; memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mDofToVelSlot ) , dofToVelSlot , delegate -> mDof * sizeof ( size_t ) ) ;
sm_core_SmSizeTVector_create ( & delegate -> mConstraintDofs , 48 , 0 ) ;
memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate -> mConstraintDofs
) , constraintDofs , 48 * sizeof ( size_t ) ) ; sm_core_SmSizeTVector_create
( & delegate -> mConstraintDofOffsets , delegate -> mNumConstraints + 1 , 0 )
; memcpy ( sm_core_SmSizeTVector_nonConstValues ( & delegate ->
mConstraintDofOffsets ) , constraintDofOffsets , ( delegate ->
mNumConstraints + 1 ) * sizeof ( size_t ) ) ; sm_core_SmBoundedSet_create ( &
scratchpad -> mPosRequired , 39 ) ; sm_core_SmBoundedSet_create ( &
scratchpad -> mPosDesired , 39 ) ; sm_core_SmBoundedSet_create ( & scratchpad
-> mPosSuggested , 39 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosFree , 39 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosNonRequired , 39 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mPosSuggAndFree , 39 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelRequired , 39 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelDesired , 39 ) ; sm_core_SmBoundedSet_create ( & scratchpad ->
mVelSuggested , 39 ) ; sm_core_SmBoundedSet_create ( & scratchpad -> mVelFree
, 39 ) ; sm_core_SmBoundedSet_create ( & scratchpad -> mVelNonRequired , 39 )
; sm_core_SmBoundedSet_create ( & scratchpad -> mVelSuggAndFree , 39 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mConstraintFilter , 9 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveConstraints , 9 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveDofs , 39 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mActiveDofs0 , 39 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mNewConstraints , 9 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mNewDofs , 39 ) ;
sm_core_SmBoundedSet_create ( & scratchpad -> mUnsatisfiedConstraints , 9 ) ;
sm_core_SmSizeTVector_create ( & scratchpad -> mActiveConstraintsVect , 9 , 0
) ; sm_core_SmSizeTVector_create ( & scratchpad -> mActiveDofsVect , 39 , 0 )
; sm_core_SmSizeTVector_create ( & scratchpad -> mFullDofToActiveDof , 39 , 0
) ; sm_core_SmSizePairVector_create ( & scratchpad ->
mPartiallyPosTargetedPrims , 27 , & zeroSizePair ) ;
sm_core_SmSizePairVector_create ( & scratchpad -> mPartiallyVelTargetedPrims
, 27 , & zeroSizePair ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mPosPartialTypes , 27 , 0 ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mVelPartialTypes , 27 , 0 ) ; sm_core_SmSizeTVector_create ( & scratchpad ->
mPartiallyActivePrims , 27 , 0 ) ; sm_core_SmSizePairVector_create ( &
scratchpad -> mBaseFrameVelOffsets , 6 , & zeroSizePair ) ;
sm_core_SmSizePairVector_create ( & scratchpad -> mCvVelOffsets , 27 , &
zeroSizePair ) ; sm_core_SmRealVector_create ( & scratchpad ->
mCvAzimuthValues , 27 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mInitialState , 93 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mStartState , 93 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mTestState , 93 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mFullStateVector , 93 , 0.0 ) ; sm_core_SmIntVector_create ( & scratchpad ->
mModeVector , 0 , 0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mJacobianRowMaj , Jm * Jn , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mJacobian , Jm * Jn , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mJacobianPrimSubmatrix , Jm * 6 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mConstraintNonhomoTerms , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mConstraintError , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mBestConstraintError ,
Jm , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mDeltas , Jn * (
Jm <= Jn ? Jm : Jn ) , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mSvdWork , 3763 , 0.0 ) ; sm_core_SmRealVector_create ( & scratchpad ->
mLineSearchScaledDeltaVect , 39 , 0.0 ) ; sm_core_SmRealVector_create ( &
scratchpad -> mLineSearchTestStateVect , 93 , 0.0 ) ;
sm_core_SmRealVector_create ( & scratchpad -> mLineSearchErrorVect , Jm , 0.0
) ; sm_core_SmRealVector_create ( & scratchpad -> mActiveDofVelsVect , 39 ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mVelSystemRhs , Jm ,
0.0 ) ; sm_core_SmRealVector_create ( & scratchpad -> mMotionData , 471 , 0.0
) ; delegate -> mSetTargets = NULL ; delegate -> mResetStateVector =
triped_a151ee3d_1_resetSimStateVector ; delegate ->
mInitializeTrackedAngleState = NULL ; delegate -> mComputeDiscreteState =
NULL ; delegate -> mAdjustPosition = NULL ; delegate ->
mPerturbJointPrimitiveState = triped_a151ee3d_1_perturbSimJointPrimitiveState
; delegate -> mPerturbFlexibleBodyState =
triped_a151ee3d_1_perturbFlexibleBodyState ; delegate ->
mComputePosDofBlendMatrix = NULL ; delegate -> mComputeVelDofBlendMatrix =
NULL ; delegate -> mProjectPartiallyTargetedPos = NULL ; delegate ->
mPropagateMotion = NULL ; delegate -> mComputeAssemblyError = NULL ; delegate
-> mComputeAssemblyJacobian = NULL ; delegate -> mComputeFullAssemblyJacobian
= NULL ; delegate -> mIsInKinematicSingularity = NULL ; delegate ->
mConvertStateVector = NULL ; delegate -> mConstructStateVector =
triped_a151ee3d_1_constructStateVector ; delegate ->
mExtractSolverStateVector = triped_a151ee3d_1_extractSolverStateVector ;
delegate -> mIsPositionViolation = triped_a151ee3d_1_isPositionViolation ;
delegate -> mIsVelocityViolation = triped_a151ee3d_1_isVelocityViolation ;
delegate -> mProjectStateSim = triped_a151ee3d_1_projectStateSim ; delegate
-> mComputeConstraintError = triped_a151ee3d_1_computeConstraintError ;
delegate -> mResetModeVector = triped_a151ee3d_1_resetModeVector ; delegate
-> mHasJointDisToNormModeChange =
triped_a151ee3d_1_hasJointDisToNormModeChange ; delegate ->
mPerformJointDisToNormModeChange =
triped_a151ee3d_1_performJointDisToNormModeChange ; delegate ->
mOnModeChangedCutJoints = triped_a151ee3d_1_onModeChangedCutJoints ; delegate
-> mMech = NULL ; } static void initMechanismDelegates ( NeDaePrivateData *
smData ) { PmAllocator * alloc = pm_default_allocator ( ) ; const int32_T
motionInputOffsets [ 9 ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 } ; int_T
status = 0 ; initAssemblyDelegate ( & smData -> mAssemblyDelegate ) ;
initSimulationDelegate ( & smData -> mSimulationDelegate ) ; status =
pm_create_int_vector_fields ( & smData -> mMotionInputOffsets , smData ->
mNumInputMotionPrimitives , alloc ) ; checkMemAllocStatus ( status ) ; memcpy
( smData -> mMotionInputOffsets . mX , motionInputOffsets , 9 * sizeof (
int32_T ) ) ; } static void initComputationFcnPtrs ( NeDaePrivateData *
smData ) { smData -> mSetParametersFcn = dae_cg_setParameters_function ;
smData -> mPAssertFcn = dae_cg_pAssert_method ; smData -> mDerivativeFcn =
dae_cg_deriv_method ; smData -> mNumJacPerturbLoBoundsFcn =
dae_cg_numJacPerturbLoBounds_method ; smData -> mNumJacPerturbHiBoundsFcn =
dae_cg_numJacPerturbHiBounds_method ; smData -> mOutputFcn =
dae_cg_compOutputs_method ; smData -> mModeFcn = dae_cg_mode_method ; smData
-> mZeroCrossingFcn = dae_cg_zeroCrossing_method ; smData -> mProjectionFcn =
dae_cg_project_solve ; smData -> mCIC_MODE_Fcn = dae_cg_CIC_MODE_solve ;
smData -> mCheckFcn = ( smData -> mStateVectorSize == 0 ) ?
dae_cg_check_solve : NULL ; smData -> mAssemblyFcn = dae_cg_assemble_solve ;
smData -> mSetupLoggerFcn = sm_ssci_setupLoggerFcn_codeGen ; smData ->
mLogFcn = sm_ssci_logFcn_codeGen ; smData -> mResidualsFcn = NULL ; smData ->
mLinearizeFcn = NULL ; smData -> mGenerateFcn = NULL ; } static void
initLiveLinkToSm ( NeDaePrivateData * smData ) { smData -> mLiveSmLink = NULL
; smData -> mLiveSmLink_destroy = NULL ; smData -> mLiveSmLink_copy = NULL ;
} void triped_a151ee3d_1_NeDaePrivateData_create ( NeDaePrivateData * smData
) { initBasicAttributes ( smData ) ; initStateVector ( smData ) ; initAsserts
( smData ) ; initModeVector ( smData ) ; initZeroCrossings ( smData ) ;
initVariables ( smData ) ; initRuntimeParameters ( smData ) ; initIoInfo (
smData ) ; initInputDerivs ( smData ) ; initDirectFeedthrough ( smData ) ;
initOutputDerivProc ( smData ) ; initMechanismDelegates ( smData ) ;
initComputationFcnPtrs ( smData ) ; initLiveLinkToSm ( smData ) ; }
