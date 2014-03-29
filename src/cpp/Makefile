-include config.mk

DEBUG ?= 1

PWD := $(shell pwd)

ifeq ($(strip $(DEBUG)),1)
        CXXFLAGS := -MD -I$(PWD) -Wall -g -fno-omit-frame-pointer --std=c++0x
else
        CXXFLAGS := -MD -DNDEBUG -I$(PWD) -Wall -Werror -O3 -funroll-loops -ffast-math -fno-omit-frame-pointer --std=c++0x
endif

LDFLAGS := -lpthread -lrt -ltbb

SRCFILES := dice.cc diceenum.1.cc diceenum.2.cc diceenum.3.cc driver.cc
OBJFILES = $(SRCFILES:.cc=.o)

PROGS := search simulator test

all: $(PROGS)

%.o: %.cc 
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(PROGS): %: %.o $(OBJFILES)
	$(CXX) $< -o $@ $(OBJFILES) $(LDFLAGS)

DEPFILES := $(wildcard *.d)
ifneq ($(DEPFILES),)
-include $(DEPFILES)
endif

.PHONY: clean
clean:
	rm -f *.o *.d $(PROGS)
