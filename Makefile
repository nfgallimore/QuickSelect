#############################################################################
# QuickSelect
# Author Nick Gallimore
OBJS=QuickSelect.o
EXE=QuickSelect

GCC=g++
CFLAGS=-Wall -std=c++17

.PHONY : all
all: $(EXE)

# QuickSelect
.PHONY : run
run : QuickSelect
	@./QuickSelect

QuickSelect : QuickSelect.cpp
	$(GCC) $^ $(CFLAGS) -o $@

# clean
.PHONY : clean
clean :
	rm -f $(EXE)