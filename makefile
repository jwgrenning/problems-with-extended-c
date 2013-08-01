#Set this to @ to keep the makefile quiet
SILENCE = @

#set CPPUTEST_HOME to point to cpputest

#---- Outputs ----#
COMPONENT_NAME = OffTargetTests

#--- Inputs ----#
PROJECT_HOME_DIR = .

SRC_FILES = production-src/MicrocontrollerCode.c

TEST_SRC_FILES = test/AllTests.cpp test/TestMicroControllerCode.cpp 

INCLUDE_DIRS =\
  .\
  test\
  compiler-includes\
  $(CPPUTEST_HOME)/include/ \
  $(CPPUTEST_HOME)/include/Platforms/Gcc\
  
CPPUTEST_USE_EXTENSIONS = Y

CPPUTEST_WARNINGFLAGS = -Wall -Werror -Wswitch-default  -Wfatal-errors
CPPUTEST_CXXFLAGS =  -std=c++0x
CPPUTEST_CFLAGS = -std=c99

include $(CPPUTEST_HOME)/build/MakefileWorker.mk
