#ifndef ADD_CALCULATION
#define ADD_CALCULATION

#include "Include/Calculator/Calculation.hpp" // Need header of the parent class

class AddCalculation : public Calculation { // Defining an AddCalculation class that inherits from Calculation. This is known as polymorphism
public: // public functions
    AddCalculation(); // AddCalculation constructor has to call the base constructor of Calculation. 

    int calculate(int x, int y);
};
#endif
