
CXX = g++
EXEC = Program
CXXFLAGS = -Wall -g 
# -pedantic -MMD -MP-Wextra -Wshadow -Wnon-virtual-dtor -Wold-style-cast -Wcast-align -Wunused -Woverloaded-virtual -Wpedantic -Wconversion -Wsign-conversion -Wnull-dereference -Wdouble-promotion -Wformat=2 -Wduplicated-cond -Wduplicated-branches -Wlogical-op -Wuseless-cast -fsanitize=leak -fsanitize=address  -fsanitize=undefined  -fsanitize=pointer-compare  -fsanitize=pointer-subtract

LIBS = -lm

SRC=$(wildcard *.cpp)
OBJS=$(SRC:.cpp=.o)
DEPS=$(SRC:.cpp=.d)

$(EXEC): $(OBJS) 
	$(CXX) $(CXXFLAGS) $+ -o $@


*.o: *.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean run rebuild debug memcheck

rebuild: 
	make clean
	make run

clean:
	rm -f *.o
	rm -f *~
	rm -f *.d
	rm -f $(EXEC)

debug:
	gdb $(OUTPUT)
memcheck:
	valgrind --leak-check=full ./$(OUTPUT)

run: $(EXEC)
	./$(EXEC)

rerun:
	make clean
	make all
	make run

-include $(DEPS)
