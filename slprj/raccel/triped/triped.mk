# Copyright 1994-2019 The MathWorks, Inc.
#
# File    : ert_lcc64.tmf   
#
# Abstract:
#       Template makefile for building a PC-based stand-alone embedded real-time 
#       version of Simulink model using generated C code and 
#			LCC compiler Version 2.4
#
#       This makefile attempts to conform to the guidelines specified in the
#       IEEE Std 1003.2-1992 (POSIX) standard. It is designed to be used
#       with GNU Make (gmake) which is located in matlabroot/bin/win64.
#
#       Note that this template is automatically customized by the build 
#       procedure to create "<model>.mk"
#
#       The following defines can be used to modify the behavior of the
#       build:
#         OPT_OPTS       - Optimization options. Default is none. To enable 
#                          debugging specify as OPT_OPTS=-g4. 
#         OPTS           - User specific compile options.
#         USER_SRCS      - Additional user sources, such as files needed by
#                          S-functions.
#         USER_INCLUDES  - Additional include paths 
#                          (i.e. USER_INCLUDES="-Iwhere-ever -Iwhere-ever2")
#                          (For Lcc, have a '/'as file separator before the 
#                          file name instead of a '\' . 
#                          i.e.,  d:\work\proj1/myfile.c - reqd for 'gmake')
#       This template makefile is designed to be used with a system target
#       file that contains 'rtwgensettings.BuildDirSuffix' see ert.tlc

#------------------------ Macros read by make_rtw ------------------------------
#
# The following macros are read by the build procedure:
#
#  MAKECMD         - This is the command used to invoke the make utility
#  HOST            - What platform this template makefile is targeted for
#                    (i.e. PC or UNIX)
#  BUILD           - Invoke make from the build procedure (yes/no)?
#  SYS_TARGET_FILE - Name of system target file.

MAKECMD         = "%MATLAB%\bin\win64\gmake"
SHELL           = cmd
HOST            = PC
BUILD           = yes
SYS_TARGET_FILE = any

# Opt in to simplified format by specifying compatible Toolchain
TOOLCHAIN_NAME = "LCC-win64 v2.4.1 | gmake (64-bit Windows)"

MAKEFILE_FILESEP = /

#---------------------- Tokens expanded by make_rtw ----------------------------
#
# The following tokens, when wrapped with "|>" and "<|" are expanded by the
# build procedure.
#
#  MODEL_NAME          - Name of the Simulink block diagram
#  MODEL_MODULES       - Any additional generated source modules
#  MAKEFILE_NAME       - Name of makefile created from template makefile <model>.mk
#  MATLAB_ROOT         - Path to where MATLAB is installed.
#  MATLAB_BIN          - Path to MATLAB executable.
#  S_FUNCTIONS_LIB     - List of S-functions libraries to link. 
#  NUMST               - Number of sample times
#  NCSTATES            - Number of continuous states
#  BUILDARGS           - Options passed in at the command line.
#  MULTITASKING        - yes (1) or no (0): Is solver mode multitasking
#  INTEGER_CODE        - yes (1) or no (0): Is generated code purely integer
#  MAT_FILE            - yes (1) or no (0): Should mat file logging be done,
#                        if 0, the generated code runs indefinitely
#  MULTI_INSTANCE_CODE - Is the generated code multi instantiable (1/0)?
#  SHRLIBTARGET        - Is this build intended for generation of a shared library instead 
#                        of executable (1/0)?
#  MAKEFILEBUILDER_TGT - Is this build performed by the MakefileBuilder class
#                        e.g. to create a PIL executable?
#  STANDALONE_SUPPRESS_EXE - Build the standalone target but only create object code modules 
#                            and do not build an executable

MODEL                = triped
MODULES              = triped_a151ee3d_1.c triped_a151ee3d_1_create.c triped_a151ee3d_1_setParameters.c triped_a151ee3d_1_asserts.c triped_a151ee3d_1_deriv.c triped_a151ee3d_1_checkDynamics.c triped_a151ee3d_1_compOutputs.c triped_a151ee3d_1_asm_delegate.c triped_a151ee3d_1_sim_delegate.c triped_a151ee3d_1_mode_zero_crossings.c triped_a151ee3d_1_geometries.c triped_a151ee3d_1_gateway.c pm_printf.c rt_logging.c rt_backsubrr_dbl.c rt_forwardsubrr_dbl.c rt_lu_real.c rt_matrixlib_dbl.c rtGetInf.c rtGetNaN.c rt_nonfinite.c triped.c triped_capi.c triped_data.c triped_tgtconn.c rt_logging_mmi.c rtw_modelmap_utils.c raccel_main_new.c raccel_sup.c raccel_mat.c simulink_solver_api.c raccel_utils.c common_utils.c ext_svr.c updown.c ext_work.c rtiostream_interface.c rtiostream_tcpip.c rtiostream_utils.c
PRODUCT              = triped.exe
MAKEFILE             = triped.mk
MATLAB_ROOT          = C:/Program Files/MATLAB/R2020a
ALT_MATLAB_ROOT      = C:/PROGRA~1/MATLAB/R2020a
MATLAB_BIN           = C:/Program Files/MATLAB/R2020a/bin
ALT_MATLAB_BIN       = C:/PROGRA~1/MATLAB/R2020a/bin
MASTER_ANCHOR_DIR    = 
START_DIR            = C:/Users/jan-b/Documents/GitHub/Matlab-Simulation
S_FUNCTIONS_LIB      = $(MATLAB_ROOT)\sys\lcc64\lcc64\lib64\wsock32.lib
NUMST                = 2
NCSTATES             = 90
BUILDARGS            =  RSIM_SOLVER_SELECTION=2 PCMATLABROOT="C:\\Program Files\\MATLAB\\R2020a" EXTMODE_STATIC_ALLOC=0 EXTMODE_STATIC_ALLOC_SIZE=1000000 EXTMODE_TRANSPORT=0 TMW_EXTMODE_TESTING=0 RSIM_PARAMETER_LOADING=1 OPTS="-DTGTCONN -DNRT -DRSIM_PARAMETER_LOADING -DRSIM_WITH_SL_SOLVER -DENABLE_SLEXEC_SSBRIDGE=1 -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0 -DON_TARGET_WAIT_FOR_START=0 -DTID01EQ=0"
MULTITASKING         = 0
INTEGER_CODE         = 0
MAT_FILE             = 1
ALLOCATIONFCN        = 0
ONESTEPFCN           = 0
TERMFCN              = 1
MULTI_INSTANCE_CODE  = 0
CLASSIC_INTERFACE    = 1
MODELREFS            = 
SHRLIBTARGET         = 0
MAKEFILEBUILDER_TGT  = 0
ENABLE_SLEXEC_SSBRIDGE  = 1
STANDALONE_SUPPRESS_EXE = 0
OPTIMIZATION_FLAGS      = 
ADDITIONAL_LDFLAGS      = 
DEFINES_CUSTOM          = -DEXT_MODE -DIS_RAPID_ACCEL 
SYSTEM_LIBS             = -L"C:\Program Files\MATLAB\R2020a\extern\lib\win64\microsoft" libmwipp.lib libut.lib libmx.lib libmex.lib libmat.lib libmwmathutil.lib libmwslexec_simbridge.lib libmwsl_fileio.lib libmwsigstream.lib libmwsl_AsyncioQueue.lib libmwsl_services.lib libmwsdi_raccel.lib libmwi18n.lib libmwcoder_target_services.lib libmwcoder_ParamTuningTgtAppSvc.lib libmwsl_simtarget_instrumentation.lib libfixedpoint.lib libmwslexec_simlog.lib libmwstringutil.lib
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 0

#--------------------------- Model and reference models -----------------------
MODELLIB                  = 
MODELREF_LINK_LIBS        = 
MODELREF_LINK_RSPFILE     = triped_ref.rsp
RELATIVE_PATH_TO_ANCHOR   = ../../..
FMT_RELATIVE_PATH_TO_ANCHOR   = $(subst /,\,$(RELATIVE_PATH_TO_ANCHOR))
# NONE: standalone, SIM: modelref sim, RTW: modelref coder target
MODELREF_TARGET_TYPE       = NONE
MODELREF_SFCN_SUFFIX       = _msf
ISPROTECTINGMODEL          = NOTPROTECTING
PROT_CAPIC_SUFFIX          = _capi.c
PROT_CAPIO_SUFFIX          = _capi_host.obj


#-- In the case when directory name contains space ---
ifneq ($(MATLAB_ROOT),$(ALT_MATLAB_ROOT))
MATLAB_ROOT := $(ALT_MATLAB_ROOT)
endif
ifneq ($(MATLAB_BIN),$(ALT_MATLAB_BIN))
MATLAB_BIN := $(ALT_MATLAB_BIN)
endif

#--------------------------- Tool Specifications -------------------------------

LCC = $(MATLAB_ROOT)\sys\lcc64\lcc64
include $(MATLAB_ROOT)\rtw\c\tools\lcc64tools.mak

CMD_FILE             = $(MODEL).rsp

#------------------------------ Include Path -----------------------------------

# Additional includes 

ADD_INCLUDES = \
	-I$(START_DIR) \
	-I$(START_DIR)/slprj/raccel/triped \
	-I$(MATLAB_ROOT)/rtw/c/src/rapid \
	-I$(MATLAB_ROOT)/rtw/c/raccel \
	-I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common \
	-I$(MATLAB_ROOT)/toolbox/coder/rtiostream/src \
	-I$(MATLAB_ROOT)/extern/include \
	-I$(MATLAB_ROOT)/simulink/include \
	-I$(MATLAB_ROOT)/rtw/c/src \
	-I$(MATLAB_ROOT)/toolbox/coder/rtiostream/src/rtiostreamtcpip \
	-I$(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils \
	-I$(MATLAB_ROOT)/toolbox/physmod/sm/ssci/c/win64 \
	-I$(MATLAB_ROOT)/toolbox/physmod/sm/core/c/win64 \
	-I$(MATLAB_ROOT)/toolbox/physmod/sm/math/c/win64 \
	-I$(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64 \
	-I$(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64 \
	-I$(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64 \
	-I$(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64 \
	-I$(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64 \
	-I$(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64 \
	-I$(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64 \
	-I$(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64 \


# see COMPILER_INCLUDES from lcctool.mak

INCLUDES = -I. -I$(RELATIVE_PATH_TO_ANCHOR) $(ADD_INCLUDES) \
           $(COMPILER_INCLUDES) $(USER_INCLUDES)

#-------------------------------- C Flags --------------------------------------

# Optimization Options
OPT_OPTS = $(DEFAULT_OPT_OPTS)

# General User Options
OPTS =

# Compiler options, etc:
ifneq ($(OPTIMIZATION_FLAGS),)
CC_OPTS = $(OPTS) $(ANSI_OPTS)  $(OPTIMIZATION_FLAGS)
else
CC_OPTS = $(OPT_OPTS) $(OPTS) $(ANSI_OPTS) 
endif

CPP_REQ_DEFINES = -DMODEL=$(MODEL) -DNUMST=$(NUMST) -DNCSTATES=$(NCSTATES) \
		  -DMAT_FILE=$(MAT_FILE) -DINTEGER_CODE=$(INTEGER_CODE) \
		  -DONESTEPFCN=$(ONESTEPFCN) -DTERMFCN=$(TERMFCN) \
		  -DHAVESTDIO -DMULTI_INSTANCE_CODE=$(MULTI_INSTANCE_CODE) \
		  -DCLASSIC_INTERFACE=$(CLASSIC_INTERFACE) \
		  -DALLOCATIONFCN=$(ALLOCATIONFCN)

ifeq ($(MODELREF_TARGET_TYPE),SIM)
CPP_REQ_DEFINES += -DMDL_REF_SIM_TGT=1 
ifneq ($(ENABLE_SLEXEC_SSBRIDGE), 0)
CPP_REQ_DEFINES += -DENABLE_SLEXEC_SSBRIDGE=$(ENABLE_SLEXEC_SSBRIDGE)
endif
else
CPP_REQ_DEFINES += -DMT=$(MULTITASKING)
endif

CPP_REQ_DEFINES += -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=$(MODEL_HAS_DYNAMICALLY_LOADED_SFCNS)

CFLAGS = $(DEFAULT_CFLAGS) $(CC_OPTS) $(DEFINES_CUSTOM) $(CPP_REQ_DEFINES) $(INCLUDES) -w -noregistrylookup 

# Additional flags required for SIM target
CFLAGS += -dll -Zp8 -noregistrylookup -DLCC_WIN64

CPP_REQ_DEFINES += -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=$(MODEL_HAS_DYNAMICALLY_LOADED_SFCNS)

ifeq ($(OPT_OPTS),$(DEFAULT_OPT_OPTS))
LDFLAGS = -s -L$(LIB)
else
LDFLAGS = -L$(LIB)
endif

#-------------------------- Additional Libraries ------------------------------

LIBS =

ifeq ($(OPT_OPTS),$(DEFAULT_OPT_OPTS))
ifeq ($(INTEGER_CODE),0)
ifeq ($(MODELREF_TARGET_TYPE),SIM)
LIBS += $(MATLAB_ROOT)/toolbox/physmod/sm/ssci/lib/win64\sm_ssci_rtwsfcn_lcc.lib
else
LIBS += $(MATLAB_ROOT)/toolbox/physmod/sm/ssci/lib/win64\sm_ssci_ert_lcc.lib
endif
else
LIBS += $(MATLAB_ROOT)/toolbox/physmod/sm/ssci/lib/win64\sm_ssci_int_ert_lcc.lib
endif
else
LIBS += sm_ssci.lib
endif

ifeq ($(OPT_OPTS),$(DEFAULT_OPT_OPTS))
ifeq ($(INTEGER_CODE),0)
ifeq ($(MODELREF_TARGET_TYPE),SIM)
LIBS += $(MATLAB_ROOT)/toolbox/physmod/sm/core/lib/win64\sm_rtwsfcn_lcc.lib
else
LIBS += $(MATLAB_ROOT)/toolbox/physmod/sm/core/lib/win64\sm_ert_lcc.lib
endif
else
LIBS += $(MATLAB_ROOT)/toolbox/physmod/sm/core/lib/win64\sm_int_ert_lcc.lib
endif
else
LIBS += sm.lib
endif

ifeq ($(OPT_OPTS),$(DEFAULT_OPT_OPTS))
ifeq ($(INTEGER_CODE),0)
ifeq ($(MODELREF_TARGET_TYPE),SIM)
LIBS += $(MATLAB_ROOT)/toolbox/physmod/sm/math/lib/win64\pm_math_rtwsfcn_lcc.lib
else
LIBS += $(MATLAB_ROOT)/toolbox/physmod/sm/math/lib/win64\pm_math_ert_lcc.lib
endif
else
LIBS += $(MATLAB_ROOT)/toolbox/physmod/sm/math/lib/win64\pm_math_int_ert_lcc.lib
endif
else
LIBS += pm_math.lib
endif

ifeq ($(OPT_OPTS),$(DEFAULT_OPT_OPTS))
ifeq ($(INTEGER_CODE),0)
ifeq ($(MODELREF_TARGET_TYPE),SIM)
LIBS += $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/lib/win64\ssc_sli_rtwsfcn_lcc.lib
else
LIBS += $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/lib/win64\ssc_sli_ert_lcc.lib
endif
else
LIBS += $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/lib/win64\ssc_sli_int_ert_lcc.lib
endif
else
LIBS += ssc_sli.lib
endif

ifeq ($(OPT_OPTS),$(DEFAULT_OPT_OPTS))
ifeq ($(INTEGER_CODE),0)
ifeq ($(MODELREF_TARGET_TYPE),SIM)
LIBS += $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/lib/win64\ssc_core_rtwsfcn_lcc.lib
else
LIBS += $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/lib/win64\ssc_core_ert_lcc.lib
endif
else
LIBS += $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/lib/win64\ssc_core_int_ert_lcc.lib
endif
else
LIBS += ssc_core.lib
endif

ifeq ($(OPT_OPTS),$(DEFAULT_OPT_OPTS))
ifeq ($(INTEGER_CODE),0)
ifeq ($(MODELREF_TARGET_TYPE),SIM)
LIBS += $(MATLAB_ROOT)/toolbox/physmod/network_engine/lib/win64\ne_rtwsfcn_lcc.lib
else
LIBS += $(MATLAB_ROOT)/toolbox/physmod/network_engine/lib/win64\ne_ert_lcc.lib
endif
else
LIBS += $(MATLAB_ROOT)/toolbox/physmod/network_engine/lib/win64\ne_int_ert_lcc.lib
endif
else
LIBS += ne.lib
endif

ifeq ($(OPT_OPTS),$(DEFAULT_OPT_OPTS))
ifeq ($(INTEGER_CODE),0)
ifeq ($(MODELREF_TARGET_TYPE),SIM)
LIBS += $(MATLAB_ROOT)/toolbox/physmod/common/math/core/lib/win64\mc_rtwsfcn_lcc.lib
else
LIBS += $(MATLAB_ROOT)/toolbox/physmod/common/math/core/lib/win64\mc_ert_lcc.lib
endif
else
LIBS += $(MATLAB_ROOT)/toolbox/physmod/common/math/core/lib/win64\mc_int_ert_lcc.lib
endif
else
LIBS += mc.lib
endif

ifeq ($(OPT_OPTS),$(DEFAULT_OPT_OPTS))
ifeq ($(INTEGER_CODE),0)
ifeq ($(MODELREF_TARGET_TYPE),SIM)
LIBS += $(MATLAB_ROOT)/toolbox/physmod/common/external/library/lib/win64\ex_rtwsfcn_lcc.lib
else
LIBS += $(MATLAB_ROOT)/toolbox/physmod/common/external/library/lib/win64\ex_ert_lcc.lib
endif
else
LIBS += $(MATLAB_ROOT)/toolbox/physmod/common/external/library/lib/win64\ex_int_ert_lcc.lib
endif
else
LIBS += ex.lib
endif

ifeq ($(OPT_OPTS),$(DEFAULT_OPT_OPTS))
ifeq ($(INTEGER_CODE),0)
ifeq ($(MODELREF_TARGET_TYPE),SIM)
LIBS += $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/lib/win64\pm_rtwsfcn_lcc.lib
else
LIBS += $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/lib/win64\pm_ert_lcc.lib
endif
else
LIBS += $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/lib/win64\pm_int_ert_lcc.lib
endif
else
LIBS += pm.lib
endif


LIBS +=  $(S_FUNCTIONS_LIB)

#----------------------------- Source Files ------------------------------------
ADD_SRCS =

SRCS = $(ADD_SRCS) $(MODULES)

USER_SRCS =

USER_OBJS       = $(USER_SRCS:.c=.obj)
LOCAL_USER_OBJS = $(notdir $(USER_OBJS))

OBJS      = $(SRCS:.c=.obj) $(USER_OBJS)
PROT_CAPIC  = $(addsuffix $(PROT_CAPIC_SUFFIX), $(MODEL))
PROT_CAPIO  = $(addsuffix $(PROT_CAPIO_SUFFIX), $(MODEL))

DEF_FILE = $(MODEL).def

#--------------------------------- Rules ---------------------------------------
BIN_SETTING        = $(LD) $(LDFLAGS) $(ADDITIONAL_LDFLAGS) -o $(PRODUCT)
ifeq ($(MODELREF_TARGET_TYPE),NONE)
  ifeq ($(SHRLIBTARGET),1)
    BIN_SETTING        = $(LD) $(LDFLAGS) $(ADDITIONAL_LDFLAGS) -dll -entry LibMain -o $(PRODUCT)
    $(PRODUCT) : $(OBJS) $(LIBS) $(MODELREF_LINK_LIBS)
	$(BIN_SETTING) @$(CMD_FILE) $(LOCAL_USER_OBJS) @$(MODELREF_LINK_RSPFILE) $(LIBS) $(MODEL).def
	@cmd /C "echo ### Created dynamically linked library: $@"
  else
    ifeq ($(MAKEFILEBUILDER_TGT),1)
      PREBUILT_OBJS       = $(MODULES:.c=.obj)
      $(PRODUCT) : $(PREBUILT_OBJS) $(OBJS) $(MODELLIB) $(LIBS) $(MODELREF_LINK_LIBS)
	$(BIN_SETTING) $(PREBUILT_OBJS) @$(CMD_FILE) $(LOCAL_USER_OBJS) $(MODELLIB) @$(MODELREF_LINK_RSPFILE) $(LIBS)
	@cmd /C "echo ### Created executable: $@"
    else
      ifeq ($(STANDALONE_SUPPRESS_EXE), 1)
        .PHONY: $(PRODUCT)
        $(PRODUCT) : $(OBJS) $(LIBS) $(MODELREF_LINK_LIBS)
	@cmd /C "echo ### Created object modules $@"
      else
        $(PRODUCT) : $(OBJS) $(LIBS) $(MODELREF_LINK_LIBS)
	$(BIN_SETTING) @$(CMD_FILE) $(LOCAL_USER_OBJS) @$(MODELREF_LINK_RSPFILE) $(LIBS) $(SYSTEM_LIBS)
	@cmd /C "echo ### Created executable: $@"
      endif
    endif
  endif
else
 ifeq ($(MODELREF_TARGET_TYPE),SIM)
  ifeq ($(ISPROTECTINGMODEL),PROTECTING)
  all : $(PRODUCT) $(PROT_CAPIO)
  endif
  $(PRODUCT) : $(OBJS) $(LIBS)
	@if exist $(MODELLIB) del "$(MODELLIB)"
	$(LIBCMD) /out:$(MODELLIB) @$(CMD_FILE) $(LOCAL_USER_OBJS)
	@cmd /C "echo ### Created $(MODELLIB)"
  ifeq ($(ISPROTECTINGMODEL),PROTECTING)
  $(PROT_CAPIO) : $(PROT_CAPIC)
	$(CC) -c $(CFLAGS) -DHOST_CAPI_BUILD $(PROT_CAPIC) /Fo$(PROT_CAPIO)
  endif
 else
  $(PRODUCT) : $(OBJS)
	@if exist $(MODELLIB) del "$(MODELLIB)"
	$(LIBCMD) /out:$(MODELLIB) @$(CMD_FILE) $(LOCAL_USER_OBJS)
	@cmd /C "echo ### Created $(MODELLIB)"
	@cmd /C "echo ### Created library: $@"
 endif
endif

%.obj : %.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : %.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(RELATIVE_PATH_TO_ANCHOR)/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/rtw/c/ert/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/rtw/c/src/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/sm/ssci/c/win64/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/sm/core/c/win64/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/sm/math/c/win64/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/simulink/src/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/rtiostreamtcpip/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils/%.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

rt_logging.obj : $(MATLAB_ROOT)\rtw\c\src/rt_logging.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $(MATLAB_ROOT)\rtw\c\src/rt_logging.c

raccel_main_new.obj : $(MATLAB_ROOT)\rtw\c\raccel/raccel_main_new.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $(MATLAB_ROOT)\rtw\c\raccel/raccel_main_new.c

raccel_sup.obj : $(MATLAB_ROOT)\rtw\c\raccel/raccel_sup.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $(MATLAB_ROOT)\rtw\c\raccel/raccel_sup.c

raccel_mat.obj : $(MATLAB_ROOT)\rtw\c\raccel/raccel_mat.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $(MATLAB_ROOT)\rtw\c\raccel/raccel_mat.c

simulink_solver_api.obj : $(MATLAB_ROOT)\simulink\include/simulink_solver_api.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $(MATLAB_ROOT)\simulink\include/simulink_solver_api.c

raccel_utils.obj : $(MATLAB_ROOT)\rtw\c\src\rapid/raccel_utils.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $(MATLAB_ROOT)\rtw\c\src\rapid/raccel_utils.c

common_utils.obj : $(MATLAB_ROOT)\rtw\c\src\rapid/common_utils.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $(MATLAB_ROOT)\rtw\c\src\rapid/common_utils.c

ext_svr.obj : $(MATLAB_ROOT)\rtw\c\src\ext_mode\common/ext_svr.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $(MATLAB_ROOT)\rtw\c\src\ext_mode\common/ext_svr.c

updown.obj : $(MATLAB_ROOT)\rtw\c\src\ext_mode\common/updown.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $(MATLAB_ROOT)\rtw\c\src\ext_mode\common/updown.c

ext_work.obj : $(MATLAB_ROOT)\rtw\c\src\ext_mode\common/ext_work.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $(MATLAB_ROOT)\rtw\c\src\ext_mode\common/ext_work.c

rtiostream_interface.obj : $(MATLAB_ROOT)\rtw\c\src\ext_mode\common/rtiostream_interface.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $(MATLAB_ROOT)\rtw\c\src\ext_mode\common/rtiostream_interface.c

rtiostream_tcpip.obj : $(MATLAB_ROOT)\toolbox\coder\rtiostream\src\rtiostreamtcpip/rtiostream_tcpip.c
	$(CC) -c -Fo$(@F) $(CFLAGS) $(MATLAB_ROOT)\toolbox\coder\rtiostream\src\rtiostreamtcpip/rtiostream_tcpip.c

rtiostream_utils.obj : C:\Program\ Files\MATLAB\R2020a\toolbox\coder\rtiostream\src\utils/rtiostream_utils.c
	$(CC) -c -Fo$(@F) $(CFLAGS) C:\Program\ Files\MATLAB\R2020a\toolbox\coder\rtiostream\src\utils/rtiostream_utils.c



%.obj : $(MATLAB_ROOT)/toolbox/physmod/sm/ssci/c/win64/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/sm/core/c/win64/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/sm/math/c/win64/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/rtw/c/src/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/simulink/src/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/rtw/c/src/ext_mode/common/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/rtiostreamtcpip/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<

%.obj : $(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils/%.C
	$(CC) -c -Fo$(@F) $(CFLAGS) $<



# Libraries:



MODULES_sm_ssci = \
    sm_ssci_3dd14f0a.obj \
    sm_ssci_646478c5.obj \
    sm_ssci_916e6db1.obj \
    sm_ssci_b2b6b422.obj \
    sm_ssci_c16a187b.obj \


sm_ssci.lib : $(MAKEFILE) rtw_proj.tmw $(MODULES_sm_ssci)
	@cmd /C "echo ### Creating $@"
	@if exist $@ del "$@"
	$(LIBCMD) /out:$@ $(MODULES_sm_ssci)
	@cmd /C "echo ### $@ Created"

MODULES_sm = \
    sm_04d045b9.obj \
    sm_1ade6722.obj \
    sm_1dba7276.obj \
    sm_1e022f29.obj \
    sm_2567b5ea.obj \
    sm_26df822b.obj \
    sm_346a6262.obj \
    sm_3c02344f.obj \
    sm_440126a7.obj \
    sm_45dc522c.obj \
    sm_5763bdb7.obj \
    sm_6166f1eb.obj \
    sm_62d41fb5.obj \
    sm_67d72683.obj \
    sm_6fbd150d.obj \
    sm_71b23225.obj \
    sm_73d210b9.obj \
    sm_7a6fe4d7.obj \
    sm_8bba0509.obj \
    sm_916806b3.obj \
    sm_95b82517.obj \
    sm_9abcb56e.obj \
    sm_a0028316.obj \
    sm_a264a430.obj \
    sm_aa059a3a.obj \
    sm_acba2496.obj \
    sm_badd8656.obj \
    sm_bc63e36c.obj \
    sm_bfda6e42.obj \
    sm_c0ba649d.obj \
    sm_c160a102.obj \
    sm_c60cd1fd.obj \
    sm_c7d3720c.obj \
    sm_c7d6c0d7.obj \
    sm_cabca465.obj \
    sm_d3d79f0f.obj \
    sm_d3d946fd.obj \
    sm_df66e89b.obj \
    sm_e2bea5a2.obj \
    sm_e8bab6d7.obj \
    sm_ec6029c9.obj \
    sm_efdfa66e.obj \
    sm_f3b314ce.obj \


sm.lib : $(MAKEFILE) rtw_proj.tmw $(MODULES_sm)
	@cmd /C "echo ### Creating $@"
	@if exist $@ del "$@"
	$(LIBCMD) /out:$@ $(MODULES_sm)
	@cmd /C "echo ### $@ Created"

MODULES_pm_math = \
    pm_math_01dec08e.obj \
    pm_math_04d19358.obj \
    pm_math_050e87e9.obj \
    pm_math_1966ea7d.obj \
    pm_math_1ad202b7.obj \
    pm_math_1c69d5b2.obj \
    pm_math_1c6b6a1b.obj \
    pm_math_29dc7f63.obj \
    pm_math_2a66252c.obj \
    pm_math_32d9636d.obj \
    pm_math_3309726a.obj \
    pm_math_3463da5d.obj \
    pm_math_360e4b46.obj \
    pm_math_3fbf046b.obj \
    pm_math_48b75553.obj \
    pm_math_48bd51fb.obj \
    pm_math_5a01dda4.obj \
    pm_math_646fa971.obj \
    pm_math_6b69e06e.obj \
    pm_math_7565727c.obj \
    pm_math_7cd5543c.obj \
    pm_math_89df260e.obj \
    pm_math_8cd61cd6.obj \
    pm_math_8d05b7c0.obj \
    pm_math_93014cb0.obj \
    pm_math_a001e9ec.obj \
    pm_math_b7b980b1.obj \
    pm_math_bad43c87.obj \
    pm_math_c7d2cd09.obj \
    pm_math_d1be0f30.obj \
    pm_math_d80b9e3b.obj \
    pm_math_da630bd2.obj \
    pm_math_e8b06b42.obj \
    pm_math_ee02b2b3.obj \
    pm_math_f760e8f6.obj \
    pm_math_f866cdd2.obj \
    pm_math_fd679a52.obj \


pm_math.lib : $(MAKEFILE) rtw_proj.tmw $(MODULES_pm_math)
	@cmd /C "echo ### Creating $@"
	@if exist $@ del "$@"
	$(LIBCMD) /out:$@ $(MODULES_pm_math)
	@cmd /C "echo ### $@ Created"

MODULES_ssc_sli = \
    ssc_sli_0763c151.obj \
    ssc_sli_0bd269e6.obj \
    ssc_sli_0d6d0780.obj \
    ssc_sli_136b443c.obj \
    ssc_sli_140b3534.obj \
    ssc_sli_15d5f6ce.obj \
    ssc_sli_1db813e8.obj \
    ssc_sli_2bbd58a4.obj \
    ssc_sli_2f6ea1cd.obj \
    ssc_sli_360cfd63.obj \
    ssc_sli_42b14021.obj \
    ssc_sli_43618287.obj \
    ssc_sli_466b08dd.obj \
    ssc_sli_496799bd.obj \
    ssc_sli_4e028390.obj \
    ssc_sli_51dbd3b5.obj \
    ssc_sli_550a4805.obj \
    ssc_sli_5a0cb974.obj \
    ssc_sli_5d63aeeb.obj \
    ssc_sli_62d81790.obj \
    ssc_sli_77063d8b.obj \
    ssc_sli_7a618260.obj \
    ssc_sli_880e593a.obj \
    ssc_sli_89d0f30a.obj \
    ssc_sli_8a64c4e2.obj \
    ssc_sli_93019ea6.obj \
    ssc_sli_9abcdb7f.obj \
    ssc_sli_9b67747c.obj \
    ssc_sli_9c030181.obj \
    ssc_sli_c7dda239.obj \
    ssc_sli_d064c978.obj \
    ssc_sli_d80c44d2.obj \
    ssc_sli_dcd66f69.obj \
    ssc_sli_e66fe6d5.obj \
    ssc_sli_e7b327bb.obj \
    ssc_sli_eb0a5702.obj \
    ssc_sli_edbee55c.obj \
    ssc_sli_f6bd9cc8.obj \
    ssc_sli_f9b5dbc5.obj \
    ssc_sli_fa0ce53e.obj \
    ssc_sli_fbdf29da.obj \


ssc_sli.lib : $(MAKEFILE) rtw_proj.tmw $(MODULES_ssc_sli)
	@cmd /C "echo ### Creating $@"
	@if exist $@ del "$@"
	$(LIBCMD) /out:$@ $(MODULES_ssc_sli)
	@cmd /C "echo ### $@ Created"

MODULES_ssc_core = \
    ssc_core_01dcc633.obj \
    ssc_core_04da2c69.obj \
    ssc_core_05058dd9.obj \
    ssc_core_06ba68a6.obj \
    ssc_core_09b5fa6e.obj \
    ssc_core_0bd666aa.obj \
    ssc_core_0f019bd9.obj \
    ssc_core_0f0420a6.obj \
    ssc_core_18bf4d77.obj \
    ssc_core_1b0cafd5.obj \
    ssc_core_1c6b0332.obj \
    ssc_core_1db416c9.obj \
    ssc_core_1fd25120.obj \
    ssc_core_24b4cdee.obj \
    ssc_core_2568b075.obj \
    ssc_core_280c0222.obj \
    ssc_core_2cd54448.obj \
    ssc_core_3169e4b7.obj \
    ssc_core_360a4baf.obj \
    ssc_core_37d4ea84.obj \
    ssc_core_40dfdbdc.obj \
    ssc_core_41017299.obj \
    ssc_core_4666b45b.obj \
    ssc_core_48b08af1.obj \
    ssc_core_48b1386a.obj \
    ssc_core_4965213d.obj \
    ssc_core_4ad9135b.obj \
    ssc_core_4db6bd68.obj \
    ssc_core_4db86fcc.obj \
    ssc_core_4e03e39d.obj \
    ssc_core_4e04eecd.obj \
    ssc_core_54d55ae9.obj \
    ssc_core_5505224d.obj \
    ssc_core_56b1a2bf.obj \
    ssc_core_576cd129.obj \
    ssc_core_59b034b8.obj \
    ssc_core_5a046b27.obj \
    ssc_core_5d6ba758.obj \
    ssc_core_60b0e4dc.obj \
    ssc_core_67d1f118.obj \
    ssc_core_68da074b.obj \
    ssc_core_6b6b89d2.obj \
    ssc_core_6dd833f3.obj \
    ssc_core_73d9c2b7.obj \
    ssc_core_76d825be.obj \
    ssc_core_79dd08ab.obj \
    ssc_core_7a613edb.obj \
    ssc_core_83db8762.obj \
    ssc_core_856738f2.obj \
    ssc_core_8569edc5.obj \
    ssc_core_89d7fa79.obj \
    ssc_core_8a6471dc.obj \
    ssc_core_8d0064b8.obj \
    ssc_core_96061071.obj \
    ssc_core_97d767fe.obj \
    ssc_core_990fe1a4.obj \
    ssc_core_9b607b15.obj \
    ssc_core_9c016445.obj \
    ssc_core_9c01d168.obj \
    ssc_core_9dd110ad.obj \
    ssc_core_9fb0e229.obj \
    ssc_core_9fb25b4f.obj \
    ssc_core_9fb2e56c.obj \
    ssc_core_a1d393be.obj \
    ssc_core_a4d4c45e.obj \
    ssc_core_a4da1d0a.obj \
    ssc_core_a6b78ccc.obj \
    ssc_core_a76299bc.obj \
    ssc_core_a867d880.obj \
    ssc_core_a9bf1ff2.obj \
    ssc_core_abd05c18.obj \
    ssc_core_abd5e7b4.obj \
    ssc_core_acb64294.obj \
    ssc_core_acb6462e.obj \
    ssc_core_b1038cbb.obj \
    ssc_core_b10e34f4.obj \
    ssc_core_b2b3b239.obj \
    ssc_core_b402b40d.obj \
    ssc_core_b7b88213.obj \
    ssc_core_b96ebc21.obj \
    ssc_core_bc648043.obj \
    ssc_core_bfdb08db.obj \
    ssc_core_c3003040.obj \
    ssc_core_c5b050d7.obj \
    ssc_core_c5b63cb2.obj \
    ssc_core_c607b660.obj \
    ssc_core_c8d33536.obj \
    ssc_core_c8d83e88.obj \
    ssc_core_cab615c8.obj \
    ssc_core_cabdc251.obj \
    ssc_core_cc067f58.obj \
    ssc_core_ce6a84bb.obj \
    ssc_core_d06d763c.obj \
    ssc_core_d3d34d7c.obj \
    ssc_core_d70a6a09.obj \
    ssc_core_d807fa59.obj \
    ssc_core_dcda6edd.obj \
    ssc_core_deb7fd8d.obj \
    ssc_core_e0d0866d.obj \
    ssc_core_e2b61d72.obj \
    ssc_core_e400c1c2.obj \
    ssc_core_ead8f455.obj \
    ssc_core_ee000fbe.obj \
    ssc_core_ee01086d.obj \
    ssc_core_ee0f0141.obj \
    ssc_core_f9b6dbed.obj \
    ssc_core_fa09e9e6.obj \
    ssc_core_fbd34e62.obj \
    ssc_core_ff06d9a4.obj \


ssc_core.lib : $(MAKEFILE) rtw_proj.tmw $(MODULES_ssc_core)
	@cmd /C "echo ### Creating $@"
	@if exist $@ del "$@"
	$(LIBCMD) /out:$@ $(MODULES_ssc_core)
	@cmd /C "echo ### $@ Created"

MODULES_ne = \
    ne_59b4e14a.obj \


ne.lib : $(MAKEFILE) rtw_proj.tmw $(MODULES_ne)
	@cmd /C "echo ### Creating $@"
	@if exist $@ del "$@"
	$(LIBCMD) /out:$@ $(MODULES_ne)
	@cmd /C "echo ### $@ Created"

MODULES_mc = \
    mc_026e4f4b.obj \
    mc_03b98f6f.obj \
    mc_0764157d.obj \
    mc_0bd30dee.obj \
    mc_0d6fd085.obj \
    mc_0ed73c49.obj \
    mc_10d4ab75.obj \
    mc_11086079.obj \
    mc_110e6c6c.obj \
    mc_140e3c4c.obj \
    mc_15d12d95.obj \
    mc_15d828ca.obj \
    mc_220ba961.obj \
    mc_2565d6e0.obj \
    mc_2a642f54.obj \
    mc_2a6a9b24.obj \
    mc_2bbf87e3.obj \
    mc_2cdc96b4.obj \
    mc_32d501e3.obj \
    mc_32dc008a.obj \
    mc_3b6a945d.obj \
    mc_3e66abdf.obj \
    mc_4105189f.obj \
    mc_47b8cebe.obj \
    mc_47b91db1.obj \
    mc_4b0301c6.obj \
    mc_4c6117e3.obj \
    mc_51d4094e.obj \
    mc_52623861.obj \
    mc_52688a58.obj \
    mc_53b1fc84.obj \
    mc_550847c3.obj \
    mc_5766048f.obj \
    mc_59b6e413.obj \
    mc_5d65cd86.obj \
    mc_5edd42ef.obj \
    mc_630208f8.obj \
    mc_630dda0e.obj \
    mc_67da200d.obj \
    mc_67da4f41.obj \
    mc_6b6d311a.obj \
    mc_6e61d16c.obj \
    mc_6fb1c336.obj \
    mc_7809a65c.obj \
    mc_7a613aec.obj \
    mc_7bbf41f0.obj \
    mc_7cd58f0b.obj \
    mc_7cdbe436.obj \
    mc_7d0547c8.obj \
    mc_7d099de7.obj \
    mc_7eb21b39.obj \
    mc_81b0ada5.obj \
    mc_81b5717e.obj \
    mc_870ec75e.obj \
    mc_89d597cf.obj \
    mc_90b6aa0a.obj \
    mc_95b62b73.obj \
    mc_9ab7d9b0.obj \
    mc_9b6376d1.obj \
    mc_9b6c1529.obj \
    mc_a2647600.obj \
    mc_a26bab1a.obj \
    mc_a3b90582.obj \
    mc_a7684938.obj \
    mc_a865d1dd.obj \
    mc_acb3fad7.obj \
    mc_af0bc203.obj \
    mc_af0cc4c9.obj \
    mc_b0de9cbc.obj \
    mc_b362c5eb.obj \
    mc_b7b03d44.obj \
    mc_b96a0bad.obj \
    mc_bb0520ee.obj \
    mc_bdbb9b78.obj \
    mc_c2dbf4b2.obj \
    mc_c8d25d23.obj \
    mc_cab8a1f9.obj \
    mc_ce6656ce.obj \
    mc_d20085b7.obj \
    mc_d9d38185.obj \
    mc_dbbb14d2.obj \
    mc_dcdddfae.obj \
    mc_debb448f.obj \
    mc_e7bc2f1a.obj \
    mc_e969ae87.obj \
    mc_edbf543c.obj \
    mc_ee000fbe.obj \
    mc_efdea3a7.obj \
    mc_f00d2f9b.obj \
    mc_f3be157c.obj \
    mc_fbd54145.obj \
    mc_fcb15a9b.obj \
    mc_fd619d14.obj \
    mc_fd6341bb.obj \


mc.lib : $(MAKEFILE) rtw_proj.tmw $(MODULES_mc)
	@cmd /C "echo ### Creating $@"
	@if exist $@ del "$@"
	$(LIBCMD) /out:$@ $(MODULES_mc)
	@cmd /C "echo ### $@ Created"

MODULES_ex = \
    ex_04d5441d.obj \
    ex_136645f8.obj \
    ex_17bc61ac.obj \
    ex_18b4440a.obj \
    ex_2ebcd5b2.obj \
    ex_316a81de.obj \
    ex_36012fa7.obj \
    ex_40d5be33.obj \
    ex_47b11894.obj \
    ex_57660158.obj \
    ex_690b7cd0.obj \
    ex_79d100f1.obj \
    ex_8a6fc761.obj \
    ex_98d223a6.obj \
    ex_aed5de1e.obj \
    ex_b2b40ad5.obj \
    ex_bb0efd4b.obj \
    ex_c9069dae.obj \
    ex_d9d686a8.obj \
    ex_debffef2.obj \
    ex_e40d74b8.obj \
    ex_eb0d559b.obj \
    ex_f6bb4c2d.obj \
    ex_f866102d.obj \


ex.lib : $(MAKEFILE) rtw_proj.tmw $(MODULES_ex)
	@cmd /C "echo ### Creating $@"
	@if exist $@ del "$@"
	$(LIBCMD) /out:$@ $(MODULES_ex)
	@cmd /C "echo ### $@ Created"

MODULES_pm = \
    pm_09bc42e2.obj \
    pm_14098e54.obj \
    pm_26dc3230.obj \
    pm_4fd5f5b9.obj \
    pm_fed8c2c9.obj \


pm.lib : $(MAKEFILE) rtw_proj.tmw $(MODULES_pm)
	@cmd /C "echo ### Creating $@"
	@if exist $@ del "$@"
	$(LIBCMD) /out:$@ $(MODULES_pm)
	@cmd /C "echo ### $@ Created"



#----------------------------- Dependencies ------------------------------------

$(OBJS) : $(MAKEFILE) rtw_proj.tmw
