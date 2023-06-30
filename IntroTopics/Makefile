# Defining variables 
# g++ is a compiler for C++
COMPILER = g++ 
# -Wall turns on all compile warnings
# -g enables you to use gdb, a debugger for your code
FLAGS = -Wall -g

SOURCE = Source/Calculator/*.cpp Source/calculation.cpp

# There's another way of compiling it, but this would be simplest. Its 1 AM too X)
calculate_main.o: 
	$(COMPILER) $(FLAGS) -o calculation_main $(SOURCE) -I.

clean:
	rm calculation_main
