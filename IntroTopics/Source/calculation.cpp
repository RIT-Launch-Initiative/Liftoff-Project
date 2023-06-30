#include <cstdio>

#include "Include/Calculator/Calculator.hpp"
#include "Include/Calculator/Calculation.hpp"
#include "Include/Calculator/AddCalculation.hpp"
#include "Include/Calculator/SubCalculation.hpp"
#include "Include/Calculator/MulCalculation.hpp"
#include "Include/Calculator/DivCalculation.hpp"


int main(void) { // void arg because I am lazy and I have work tomorrow
    // Copy Initialization Examples
    AddCalculation adder = AddCalculation(); 
    SubCalculation subber = SubCalculation();
    MulCalculation multer = MulCalculation();
    DivCalculation divver = DivCalculation();

    // Direct Initialization Example
    Calculator calc(&adder, &subber, &multer, &divver);
    
    printf("10 + 10 = %d\n", calc.calculate(10, 10, ADD));
    printf("10 - 10 = %d\n", calc.calculate(10, 10, SUBTRACT));
    printf("10 * 10 = %d\n", calc.calculate(10, 10, &multer));
    printf("10 / 10 = %d\n", calc.calculate(10, 10, &divver));

    return 0;
}

