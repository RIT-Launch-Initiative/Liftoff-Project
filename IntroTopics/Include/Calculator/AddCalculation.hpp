#include "Include/Calculator/Calculation.hpp" // Need header of the parent class

class AddCalculation : public Calculation { // Defining an AddCalculation class that inherits from Calculation. This is known as polymorphism
public: // public functions
    AddCalculation() : Calculation(); // AddCalculation constructor has to call the base constructor of Calculation. 

    int calculate(x, y);
}
