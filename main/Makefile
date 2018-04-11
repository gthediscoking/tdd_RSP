#Set this to @ to keep the makefile quiet
# SILENCE = @

#---- Outputs ----#
COMPONENT_NAME = RPS
#Set this to @ to keep the makefile quiet
# SILENCE = @

#--- Inputs ----#
PROJECT_HOME_DIR = .

COMPILER = g++
CFLAGS   = -g -Wall -O2
LDFLAGS  =
LIBS     =
TARGET   = RSP
INCLUDE_DIRS =\
  .\
  ../include \
  ../include/* \
	/usr/include/c++/4.2.1/
SRC_DIRS = main.cpp\
	    ../src\
	    ../src/*
OBJDIR   = ../obj
CPPS = $(wildcard *.cpp)
INCLUDE  = -I$(INCLUDE_DIRS)
SOURCES  = $(addprefix $(SRC_DIRS)/, $CPPS)
OBJECTS  = $(addprefix $(OBJDIR)/, $(CPPS:.cpp=.o))

$(TARGET): $(OBJECTS)
    $(COMPILER) -o $@ $^ $(LDFLAGS)

$(OBJDIR)/%.o: %.cpp
    @[ -d $(OBJDIR) ]
    $(COMPILER) $(CFLAGS) $(INCLUDE) -o $@ -c $<

all: clean $(TARGET)

clean:
    rm -f $(OBJECTS) $(TARGET)
