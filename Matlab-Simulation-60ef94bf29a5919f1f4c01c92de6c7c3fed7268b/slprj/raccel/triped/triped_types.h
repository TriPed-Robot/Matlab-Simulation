#ifndef RTW_HEADER_triped_types_h_
#define RTW_HEADER_triped_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#ifndef struct_tag_s7RdrPWkr8UPAUyTdDJkLaG
#define struct_tag_s7RdrPWkr8UPAUyTdDJkLaG
struct tag_s7RdrPWkr8UPAUyTdDJkLaG { boolean_T gradOK ; boolean_T fevalOK ;
boolean_T done ; boolean_T stepAccepted ; boolean_T failedLineSearch ;
int32_T stepType ; } ;
#endif
#ifndef typedef_mf15oedits
#define typedef_mf15oedits
typedef struct tag_s7RdrPWkr8UPAUyTdDJkLaG mf15oedits ;
#endif
#ifndef struct_tag_s6ICcRyulWOFjNCN0ll7VsE
#define struct_tag_s6ICcRyulWOFjNCN0ll7VsE
struct tag_s6ICcRyulWOFjNCN0ll7VsE { real_T penaltyParam ; real_T threshold ;
int32_T nPenaltyDecreases ; real_T linearizedConstrViol ; real_T initFval ;
real_T initConstrViolationEq ; real_T initConstrViolationIneq ; real_T phi ;
real_T phiPrimePlus ; real_T phiFullStep ; real_T feasRelativeFactor ; real_T
nlpPrimalFeasError ; real_T nlpDualFeasError ; real_T nlpComplError ; real_T
firstOrderOpt ; boolean_T hasObjective ; } ;
#endif
#ifndef typedef_kthfgfhdov
#define typedef_kthfgfhdov
typedef struct tag_s6ICcRyulWOFjNCN0ll7VsE kthfgfhdov ;
#endif
#ifndef struct_tag_sDnH2d97ZF1l5skAFODODXG
#define struct_tag_sDnH2d97ZF1l5skAFODODXG
struct tag_sDnH2d97ZF1l5skAFODODXG { real_T grad [ 8 ] ; real_T Hx [ 7 ] ;
boolean_T hasLinear ; int32_T nvar ; int32_T maxVar ; real_T beta ; real_T
rho ; int32_T objtype ; int32_T prev_objtype ; int32_T prev_nvar ; boolean_T
prev_hasLinear ; real_T gammaScalar ; } ;
#endif
#ifndef typedef_k0ratk1n10
#define typedef_k0ratk1n10
typedef struct tag_sDnH2d97ZF1l5skAFODODXG k0ratk1n10 ;
#endif
#ifndef struct_tag_s3qXbEhvk4uA7MIiQ6kN0wF
#define struct_tag_s3qXbEhvk4uA7MIiQ6kN0wF
struct tag_s3qXbEhvk4uA7MIiQ6kN0wF { real_T grad [ 27 ] ; real_T Hx [ 26 ] ;
boolean_T hasLinear ; int32_T nvar ; int32_T maxVar ; real_T beta ; real_T
rho ; int32_T objtype ; int32_T prev_objtype ; int32_T prev_nvar ; boolean_T
prev_hasLinear ; real_T gammaScalar ; } ;
#endif
#ifndef typedef_ecn2fyspui
#define typedef_ecn2fyspui
typedef struct tag_s3qXbEhvk4uA7MIiQ6kN0wF ecn2fyspui ;
#endif
#ifndef struct_tag_sB1c5v6JmFtnbGXL7YllpgC
#define struct_tag_sB1c5v6JmFtnbGXL7YllpgC
struct tag_sB1c5v6JmFtnbGXL7YllpgC { real_T workspace_double [ 64 ] ; int32_T
workspace_int [ 8 ] ; int32_T workspace_sort [ 8 ] ; } ;
#endif
#ifndef typedef_ktaxowovvf
#define typedef_ktaxowovvf
typedef struct tag_sB1c5v6JmFtnbGXL7YllpgC ktaxowovvf ;
#endif
#ifndef struct_tag_s1TgE9KstXgkd2qJxO1bF4F
#define struct_tag_s1TgE9KstXgkd2qJxO1bF4F
struct tag_s1TgE9KstXgkd2qJxO1bF4F { char_T SolverName [ 7 ] ; int32_T
MaxIterations ; real_T StepTolerance ; real_T OptimalityTolerance ; real_T
ConstraintTolerance ; real_T ObjectiveLimit ; real_T PricingTolerance ;
real_T ConstrRelTolFactor ; real_T ProbRelTolFactor ; boolean_T
RemainFeasible ; boolean_T IterDisplayQP ; } ;
#endif
#ifndef typedef_e2ucunpqcp
#define typedef_e2ucunpqcp
typedef struct tag_s1TgE9KstXgkd2qJxO1bF4F e2ucunpqcp ;
#endif
#ifndef struct_tag_sP2NPOBvNQEwvUHA3lYxSy
#define struct_tag_sP2NPOBvNQEwvUHA3lYxSy
struct tag_sP2NPOBvNQEwvUHA3lYxSy { real_T workspace_double [ 729 ] ; int32_T
workspace_int [ 27 ] ; int32_T workspace_sort [ 27 ] ; } ;
#endif
#ifndef typedef_guj4mpcfgf
#define typedef_guj4mpcfgf
typedef struct tag_sP2NPOBvNQEwvUHA3lYxSy guj4mpcfgf ;
#endif
#ifndef struct_tag_w1BjGIPsODQUNOecMmnDmC
#define struct_tag_w1BjGIPsODQUNOecMmnDmC
struct tag_w1BjGIPsODQUNOecMmnDmC { real_T f1 [ 16 ] ; } ;
#endif
#ifndef typedef_hskkdlcyjp
#define typedef_hskkdlcyjp
typedef struct tag_w1BjGIPsODQUNOecMmnDmC hskkdlcyjp ;
#endif
#ifndef struct_tag_EmfSsx2MVgYk9MqdB24ZLB
#define struct_tag_EmfSsx2MVgYk9MqdB24ZLB
struct tag_EmfSsx2MVgYk9MqdB24ZLB { real_T tunableEnvironment [ 4 ] ; } ;
#endif
#ifndef typedef_aocslup0te
#define typedef_aocslup0te
typedef struct tag_EmfSsx2MVgYk9MqdB24ZLB aocslup0te ;
#endif
#ifndef struct_tag_s2iMGcSohf9lbP2KCuzDmOD
#define struct_tag_s2iMGcSohf9lbP2KCuzDmOD
struct tag_s2iMGcSohf9lbP2KCuzDmOD { int32_T nVarMax ; int32_T mNonlinIneq ;
int32_T mNonlinEq ; int32_T mIneq ; int32_T mEq ; int32_T iNonIneq0 ; int32_T
iNonEq0 ; real_T sqpFval ; real_T sqpFval_old ; real_T xstarsqp [ 5 ] ;
real_T xstarsqp_old [ 5 ] ; real_T cEq ; real_T cEq_old ; real_T grad [ 8 ] ;
real_T grad_old [ 8 ] ; int32_T FunctionEvaluations ; int32_T sqpIterations ;
int32_T sqpExitFlag ; real_T lambdasqp [ 4 ] ; real_T lambdasqp_old [ 4 ] ;
real_T steplength ; real_T delta_x [ 8 ] ; real_T socDirection [ 8 ] ; real_T
lambda_old [ 4 ] ; int32_T workingset_old [ 4 ] ; real_T JacCeqTrans_old [ 8
] ; real_T gradLag [ 8 ] ; real_T delta_gradLag [ 8 ] ; real_T xstar [ 8 ] ;
real_T fstar ; real_T firstorderopt ; real_T lambda [ 4 ] ; int32_T state ;
real_T maxConstr ; int32_T iterations ; real_T searchDir [ 8 ] ; } ;
#endif
#ifndef typedef_fovverijux
#define typedef_fovverijux
typedef struct tag_s2iMGcSohf9lbP2KCuzDmOD fovverijux ;
#endif
#ifndef struct_tag_se9i8MYRsFcVJwptRI7bkkG
#define struct_tag_se9i8MYRsFcVJwptRI7bkkG
struct tag_se9i8MYRsFcVJwptRI7bkkG { int32_T mConstr ; int32_T mConstrOrig ;
int32_T mConstrMax ; int32_T nVar ; int32_T nVarOrig ; int32_T nVarMax ;
int32_T ldA ; real_T Aeq [ 8 ] ; real_T beq ; real_T lb [ 8 ] ; real_T ub [ 8
] ; int32_T indexLB [ 8 ] ; int32_T indexUB [ 8 ] ; int32_T indexFixed [ 8 ]
; int32_T mEqRemoved ; int32_T indexEqRemoved ; real_T ATwset [ 32 ] ; real_T
bwset [ 4 ] ; int32_T nActiveConstr ; real_T maxConstrWorkspace [ 4 ] ;
int32_T sizes [ 5 ] ; int32_T sizesNormal [ 5 ] ; int32_T sizesPhaseOne [ 5 ]
; int32_T sizesRegularized [ 5 ] ; int32_T sizesRegPhaseOne [ 5 ] ; int32_T
isActiveIdx [ 6 ] ; int32_T isActiveIdxNormal [ 6 ] ; int32_T
isActiveIdxPhaseOne [ 6 ] ; int32_T isActiveIdxRegularized [ 6 ] ; int32_T
isActiveIdxRegPhaseOne [ 6 ] ; boolean_T isActiveConstr [ 4 ] ; int32_T Wid [
4 ] ; int32_T Wlocalidx [ 4 ] ; int32_T nWConstr [ 5 ] ; int32_T probType ;
real_T SLACK0 ; } ;
#endif
#ifndef typedef_kdxyjsixti
#define typedef_kdxyjsixti
typedef struct tag_se9i8MYRsFcVJwptRI7bkkG kdxyjsixti ;
#endif
#ifndef struct_tag_s9RUNKbZOpc243fgyEwIhIE
#define struct_tag_s9RUNKbZOpc243fgyEwIhIE
struct tag_s9RUNKbZOpc243fgyEwIhIE { int32_T ldq ; real_T QR [ 64 ] ; real_T
Q [ 64 ] ; int32_T jpvt [ 8 ] ; int32_T mrows ; int32_T ncols ; real_T tau [
8 ] ; int32_T minRowCol ; boolean_T usedPivoting ; } ;
#endif
#ifndef typedef_dzrlw5sxs5
#define typedef_dzrlw5sxs5
typedef struct tag_s9RUNKbZOpc243fgyEwIhIE dzrlw5sxs5 ;
#endif
#ifndef struct_tag_s7q2n73mPyi6kOY0qBrhltE
#define struct_tag_s7q2n73mPyi6kOY0qBrhltE
struct tag_s7q2n73mPyi6kOY0qBrhltE { real_T FMat [ 64 ] ; int32_T ldm ;
int32_T ndims ; int32_T info ; } ;
#endif
#ifndef typedef_csm4ifxwet
#define typedef_csm4ifxwet
typedef struct tag_s7q2n73mPyi6kOY0qBrhltE csm4ifxwet ;
#endif
#ifndef struct_tag_sTiuxFOmMDEuARrUgHTQ8dH
#define struct_tag_sTiuxFOmMDEuARrUgHTQ8dH
struct tag_sTiuxFOmMDEuARrUgHTQ8dH { int32_T nVarMax ; int32_T mNonlinIneq ;
int32_T mNonlinEq ; int32_T mIneq ; int32_T mEq ; int32_T iNonIneq0 ; int32_T
iNonEq0 ; real_T sqpFval ; real_T sqpFval_old ; real_T xstarsqp [ 18 ] ;
real_T xstarsqp_old [ 18 ] ; real_T cEq [ 4 ] ; real_T cEq_old [ 4 ] ; real_T
grad [ 27 ] ; real_T grad_old [ 27 ] ; int32_T FunctionEvaluations ; int32_T
sqpIterations ; int32_T sqpExitFlag ; real_T lambdasqp [ 13 ] ; real_T
lambdasqp_old [ 13 ] ; real_T steplength ; real_T delta_x [ 27 ] ; real_T
socDirection [ 27 ] ; real_T lambda_old [ 13 ] ; int32_T workingset_old [ 13
] ; real_T JacCeqTrans_old [ 108 ] ; real_T gradLag [ 27 ] ; real_T
delta_gradLag [ 27 ] ; real_T xstar [ 27 ] ; real_T fstar ; real_T
firstorderopt ; real_T lambda [ 13 ] ; int32_T state ; real_T maxConstr ;
int32_T iterations ; real_T searchDir [ 27 ] ; } ;
#endif
#ifndef typedef_aaxpzhoxuz
#define typedef_aaxpzhoxuz
typedef struct tag_sTiuxFOmMDEuARrUgHTQ8dH aaxpzhoxuz ;
#endif
#ifndef struct_tag_uwURw7Y1X48E7tGgXPeV1F
#define struct_tag_uwURw7Y1X48E7tGgXPeV1F
struct tag_uwURw7Y1X48E7tGgXPeV1F { aocslup0te objfun ; int32_T nVar ;
int32_T mCineq ; int32_T mCeq ; boolean_T NonFiniteSupport ; boolean_T
SpecifyObjectiveGradient ; boolean_T SpecifyConstraintGradient ; boolean_T
ScaleProblem ; } ;
#endif
#ifndef typedef_dccng4x0j0
#define typedef_dccng4x0j0
typedef struct tag_uwURw7Y1X48E7tGgXPeV1F dccng4x0j0 ;
#endif
#ifndef struct_tag_sLvmhE6D0hxNcuiKOz0Ij8C
#define struct_tag_sLvmhE6D0hxNcuiKOz0Ij8C
struct tag_sLvmhE6D0hxNcuiKOz0Ij8C { int32_T mConstr ; int32_T mConstrOrig ;
int32_T mConstrMax ; int32_T nVar ; int32_T nVarOrig ; int32_T nVarMax ;
int32_T ldA ; real_T Aeq [ 108 ] ; real_T beq [ 4 ] ; real_T lb [ 27 ] ;
real_T ub [ 27 ] ; int32_T indexLB [ 27 ] ; int32_T indexUB [ 27 ] ; int32_T
indexFixed [ 27 ] ; int32_T mEqRemoved ; int32_T indexEqRemoved [ 4 ] ;
real_T ATwset [ 351 ] ; real_T bwset [ 13 ] ; int32_T nActiveConstr ; real_T
maxConstrWorkspace [ 13 ] ; int32_T sizes [ 5 ] ; int32_T sizesNormal [ 5 ] ;
int32_T sizesPhaseOne [ 5 ] ; int32_T sizesRegularized [ 5 ] ; int32_T
sizesRegPhaseOne [ 5 ] ; int32_T isActiveIdx [ 6 ] ; int32_T
isActiveIdxNormal [ 6 ] ; int32_T isActiveIdxPhaseOne [ 6 ] ; int32_T
isActiveIdxRegularized [ 6 ] ; int32_T isActiveIdxRegPhaseOne [ 6 ] ;
boolean_T isActiveConstr [ 13 ] ; int32_T Wid [ 13 ] ; int32_T Wlocalidx [ 13
] ; int32_T nWConstr [ 5 ] ; int32_T probType ; real_T SLACK0 ; } ;
#endif
#ifndef typedef_nuprfhnilo
#define typedef_nuprfhnilo
typedef struct tag_sLvmhE6D0hxNcuiKOz0Ij8C nuprfhnilo ;
#endif
#ifndef struct_tag_PIxFgPbfAWivo5cdl98uVB
#define struct_tag_PIxFgPbfAWivo5cdl98uVB
struct tag_PIxFgPbfAWivo5cdl98uVB { aocslup0te objfun ; real_T f_1 ; real_T
cEq_1 [ 4 ] ; real_T f_2 ; real_T cEq_2 [ 4 ] ; int32_T nVar ; int32_T mIneq
; int32_T mEq ; int32_T numEvals ; boolean_T SpecifyObjectiveGradient ;
boolean_T SpecifyConstraintGradient ; boolean_T hasLB [ 18 ] ; boolean_T
hasUB [ 18 ] ; boolean_T hasBounds ; int32_T FiniteDifferenceType ; } ;
#endif
#ifndef typedef_dxs1et3yod
#define typedef_dxs1et3yod
typedef struct tag_PIxFgPbfAWivo5cdl98uVB dxs1et3yod ;
#endif
#ifndef struct_tag_s6IYf5FC6GU53JgldL2WSuH
#define struct_tag_s6IYf5FC6GU53JgldL2WSuH
struct tag_s6IYf5FC6GU53JgldL2WSuH { int32_T ldq ; real_T QR [ 729 ] ; real_T
Q [ 729 ] ; int32_T jpvt [ 27 ] ; int32_T mrows ; int32_T ncols ; real_T tau
[ 27 ] ; int32_T minRowCol ; boolean_T usedPivoting ; } ;
#endif
#ifndef typedef_ev3ltaqeco
#define typedef_ev3ltaqeco
typedef struct tag_s6IYf5FC6GU53JgldL2WSuH ev3ltaqeco ;
#endif
#ifndef struct_tag_szGW6IJLSZyQp2eI3uCSztH
#define struct_tag_szGW6IJLSZyQp2eI3uCSztH
struct tag_szGW6IJLSZyQp2eI3uCSztH { real_T FMat [ 729 ] ; int32_T ldm ;
int32_T ndims ; int32_T info ; } ;
#endif
#ifndef typedef_bwxng4ee5f
#define typedef_bwxng4ee5f
typedef struct tag_szGW6IJLSZyQp2eI3uCSztH bwxng4ee5f ;
#endif
#ifndef struct_tag_srzlrHQXTjDseHG9Tzi7PD
#define struct_tag_srzlrHQXTjDseHG9Tzi7PD
struct tag_srzlrHQXTjDseHG9Tzi7PD { hskkdlcyjp tunableEnvironment ; } ;
#endif
#ifndef typedef_ns42ql2vox
#define typedef_ns42ql2vox
typedef struct tag_srzlrHQXTjDseHG9Tzi7PD ns42ql2vox ;
#endif
#ifndef struct_tag_lIpFRGEW3ykvkau95w7DLG
#define struct_tag_lIpFRGEW3ykvkau95w7DLG
struct tag_lIpFRGEW3ykvkau95w7DLG { ns42ql2vox objfun ; int32_T nVar ;
int32_T mCineq ; int32_T mCeq ; boolean_T NonFiniteSupport ; boolean_T
SpecifyObjectiveGradient ; boolean_T SpecifyConstraintGradient ; boolean_T
ScaleProblem ; } ;
#endif
#ifndef typedef_cdseu45pm3
#define typedef_cdseu45pm3
typedef struct tag_lIpFRGEW3ykvkau95w7DLG cdseu45pm3 ;
#endif
#ifndef struct_tag_1PJM66jq5rwq1H5xB7kBWH
#define struct_tag_1PJM66jq5rwq1H5xB7kBWH
struct tag_1PJM66jq5rwq1H5xB7kBWH { ns42ql2vox objfun ; real_T f_1 ; real_T
cEq_1 ; real_T f_2 ; real_T cEq_2 ; int32_T nVar ; int32_T mIneq ; int32_T
mEq ; int32_T numEvals ; boolean_T SpecifyObjectiveGradient ; boolean_T
SpecifyConstraintGradient ; boolean_T hasLB [ 5 ] ; boolean_T hasUB [ 5 ] ;
boolean_T hasBounds ; int32_T FiniteDifferenceType ; } ;
#endif
#ifndef typedef_hbctg4nwcl
#define typedef_hbctg4nwcl
typedef struct tag_1PJM66jq5rwq1H5xB7kBWH hbctg4nwcl ;
#endif
typedef struct P_ P ;
#endif
