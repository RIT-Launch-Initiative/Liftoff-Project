#include "Include/Calculator/Calculation.hpp" // Need header of the parent class

class MulCalculation : public Calculation { // Defining an MulCalculation class that inherits from Calculation. This is known as polymorphism
public: // public functions
    MulCalculation() : Calculation(); // MulCalculation constructor has to call the base constructor of Calculation. 

    int calculate(x, y);
}
