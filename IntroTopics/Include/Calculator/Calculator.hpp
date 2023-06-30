#include "Include/Calculator/Calculation.hpp"

class Calculator { // Defining a class named Calculator
public: // Label for publicly accessible functions and variables
    Calculator(Calculation adder, Calculation subber, Calculation multer, Calculation divver); // Constructor for instantiating a Calculator

    ~Calculator(); // Unused but an example of a destructor signified by the ~ 

    int calculate(int x, int y, char symbol);

private: // Label for private functions and variables only the class can access!
    Calculation adder;
    Calculation subber;
    Calculation multer;
    Calculation divver;
}
