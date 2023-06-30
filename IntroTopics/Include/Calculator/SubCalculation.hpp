#ifndef SUB_CALCULATION
#define SUB_CALCULATION

#include "Include/Calculator/Calculation.hpp" // Need header of the parent class

class SubCalculation : public Calculation { // Defining an SubCalculation class that inherits from Calculation. This is known as polymorphism
public: // public functions
    SubCalculation(); 

    int calculate(int x, int y);
};
#endif
