#ifndef MUL_CALCULATION
#define MUL_CALCULATION

#include "Include/Calculator/Calculation.hpp" // Need header of the parent class

class MulCalculation : public Calculation { // Defining an MulCalculation class that inherits from Calculation. This is known as polymorphism
public: // public functions
    MulCalculation(); 

    int calculate(int x, int y);
};
#endif

