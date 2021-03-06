#Set this to @ to keep the makefile quiet
# SILENCE = @

#---- Outputs ----#
COMPONENT_NAME = test
#Set this to @ to keep the makefile quiet
# SILENCE = @

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
    # main.cpp \
    # helloworld.cpp

TEST_SRC_DIRS = \
    tests \
    tests/*

MOCKS_SRC_DIRS = \
    mocks \

INCLUDE_DIRS =\
  .\
  include \
  include/* \
	/usr/include/c++/4.2.1/ \
  $(CPPUTEST_HOME)/include/ \
  $(CPPUTEST_HOME)/include/Platforms/Gcc\
  mocks

CPPUTEST_WARNINGFLAGS = -Wall -Werror -Wswitch-default
CPPUTEST_WARNINGFLAGS += -Wconversion -Wswitch-enum -Wno-date-time

include $(CPPUTEST_HOME)/build/MakefileWorker.mk
