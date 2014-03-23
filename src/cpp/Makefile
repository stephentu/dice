DEBUG ?= 1

PWD := $(shell pwd)

ifeq ($(strip $(DEBUG)),1)
        CXXFLAGS := -I$(PWD) -Wall -g -fno-omit-frame-pointer --std=c++0x
else
        CXXFLAGS := -DNDEBUG -I$(PWD) -Wall -Werror -g -O3 -funroll-loops -ffast-math -fno-omit-frame-pointer --std=c++0x
endif

LDFLAGS := -lpthread -lrt 

HEADERS := diceenum.hh dice.hh pretty_printers.hh
SRCFILES := 
OBJFILES = $(SRCFILES:.cc=.o)

PROGS := dice

all: $(PROGS)

%.o: %.cc $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(PROGS): %: %.o $(OBJFILES)
	$(CXX) $< -o $@ $(OBJFILES) $(LDFLAGS)

.PHONY: clean
clean:
	rm -f *.o $(PROGS)
