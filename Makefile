#############################################################################
# FindKthLargestNumber
#

EXE=FindKthLargestNumber

GCC= g++
CFLAGS=-Wall -std=c++17

.PHONY : all
all : $(EXE)

# StreamingActivity
.PHONY : run
run : FindKthLargestNumber
	@./FindKthLargestNumber

FindKthLargestNumber:
	$(GCC) FindKthLargestNumber.cpp $(CFLAGS) -o FindKthLargestNumber

# clean
.PHONY : clean
clean : cleanobjects
	rm -f $(EXE)

.PHONY : cleanobjects
cleanobjects :
	rm -f $(OBJS) $(TOBJS)