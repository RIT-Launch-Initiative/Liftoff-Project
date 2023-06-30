/**
* This is a header file. It defines all variables and functions that 
* would be shared with source files (defined by a .c or .cpp extension)
* which would be found in the Source folder. You can still define 
* functionality within a header file as well, but this is generally discouraged
* due to reasons involving compiler that I will not be talking about :)
*/
#include <stdbool.h>


/**
* This has been provided for you as an example
* int (integer for short) is a type that will be returned
* adder is the name of the function
* x and y are arguments passed into the function defined as integers
*/
int adder(int x, int y);


/**
* Subtract x from y
*/
int subtracter(int x, int y);

/**
* Prints hello world. 
* A void return type defines this as a function that doesn't return anything
*/
void hello_world();

/**
* Inverts the boolean of the argument
* bool can only be true or false
*/
bool reverse_card(bool card);

/**
* Same as above. In C++ this could be also named reverse_card which is known as an overloaded function
* Every number but 0 means true. 
*/
bool reverse_int(int card);


/**
* The entry point of a program. An executable program must have this
*/
int main(int argc, char **argv);

