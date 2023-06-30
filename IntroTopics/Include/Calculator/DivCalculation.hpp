#ifndef DIV_CALCULATION
#define DIV_CALCULATION

#include "Include/Calculator/Calculation.hpp" // Need header of the parent class

class DivCalculation : public Calculation { // Defining an DivCalculation class that inherits from Calculation. This is known as polymorphism
public: // public functions
    DivCalculation(); 

    int calculate(int x, int y);
};

#endif
