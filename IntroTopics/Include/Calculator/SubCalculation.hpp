#include "Include/Calculator/Calculation.hpp" // Need header of the parent class

class SubCalculation : public Calculation { // Defining an SubCalculation class that inherits from Calculation. This is known as polymorphism
public: // public functions
    SubCalculation() : Calculation(); // SubCalculation constructor has to call the base constructor of Calculation. 

    int calculate(x, y) {
}
