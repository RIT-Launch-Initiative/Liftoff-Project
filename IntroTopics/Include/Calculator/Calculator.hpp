#ifndef CALCULATOR
#define CALCULATOR

#include "Include/Calculator/Calculation.hpp"

// enum keyword for declaring a data type with a set of predefined values
// typedef used to not need to type enum before the type name (C only. It is unnecessary in C++)
typedef enum {
    ADD,
    SUBTRACT,
    MULTIPLY,
    DIVIDE
} calc_op_t; // _t is a common convention for identifying a typedefed type


class Calculator { // Defining a class named Calculator
public: // Label for publicly accessible functions and variables
    Calculator(Calculation *adder, Calculation *subber, Calculation *multer, Calculation *divver_local); // Constructor for instantiating a Calculator

    ~Calculator(); // Unused but an example of a destructor signified by the ~ 

    int calculate(int x, int y, calc_op_t op);

    int calculate(int x, int y, Calculation *calculation);

private: // Label for private functions and variables only the class can access!
    Calculation *adder;
    Calculation *subber;
    Calculation *multer;
    Calculation *divver;
};

#endif
