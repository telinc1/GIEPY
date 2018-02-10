# Enable gcov
CPPUTEST_USE_GCOV = Y

# Execute flags
CPPUTEST_EXE_FLAGS = -c

# Set asar Flags
CPPUTEST_LDFLAGS = -L. -L../bolib/lib -Lbuild/components -lbolib -lasar -ldl

#Set this to @ to keep the makefile quiet
SILENCE = @

#---- Outputs ----#
COMPONENT_NAME = giepy
#Set this to @ to keep the makefile quiet
SILENCE = @

#--- Inputs ----#
PROJECT_HOME_DIR = .
ifeq "$(CPPUTEST_HOME)" ""
    CPPUTEST_HOME = ../CppUTest
endif
CPP_PLATFORM = Gcc

SRC_DIRS = \
    src\
    src/*

# to pick specific files (rather than directories) use this:    
SRC_FILES = 

TEST_SRC_DIRS = \
    tests \
    tests/*

MOCKS_SRC_DIRS = \
    mocks \

INCLUDE_DIRS =\
  .\
  include \
  include/* \
  ../bolib/include/ \
  ../bolib/include/common \
  ../bolib/include/file \
  ../jansson/src/ \
  $(CPPUTEST_HOME)/include/ \
  $(CPPUTEST_HOME)/include/Platforms/Gcc\
  mocks

CPPUTEST_WARNINGFLAGS = -Wall -Werror -Wswitch-default 
CPPUTEST_WARNINGFLAGS += -Wconversion -Wswitch-enum 

include $(CPPUTEST_HOME)/build/MakefileWorker.mk

