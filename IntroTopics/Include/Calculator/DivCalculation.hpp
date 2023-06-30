#include "Include/Calculator/Calculation.hpp" // Need header of the parent class

class DivCalculation : public Calculation { // Defining an DivCalculation class that inherits from Calculation. This is known as polymorphism
public: // public functions
    DivCalculation() : Calculation(); // DivCalculation constructor has to call the base constructor of Calculation. 

    int calculate(x, y);
}
