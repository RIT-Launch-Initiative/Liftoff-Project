#include "Include/Calculator/Calculator.hpp"

class Calculator { 
public: 

    // Dependency Injection. I can make derivatives of AddCalculation that can add numbers in different ways for example. 
    Calculator(Calculation adder, Calculation subber, Calculation multer, Calculation diver) : adder(adder), subber(subber) { // Preferred way of assigning member variables
        // Can assign member variables in the constructor like this too!

        this->multer = multer; // Helps you differentiate between class member variable and local variable
                               // this references the class. The arrow will be explained shortly
        divver = diver;
    }

    ~Calculator(); // Unused but an example of a destructor signified by the ~ 


    // Example for using switch case and enums
    // Although trivial, note this could be considered poor practice. 

    // If you wanted to add more functionality such as an exponent calculation, you would need to add a
    // case for exponents and a new enum value and defeats the purpose of creating a Calculation class too

    // This matters because it harms testability and you may introduce a change that breaks the function entirely
    
    // It also violates several principles of good software engineering including Open-Closed Principle where 
    // software should be open for extension, closed for modification. Look up SOLID and GRASP principles in your free time
    int calculate(int x, int y, calc_op_t symbol) {
        int result = 0; // Needs to be within scope for returning

        switch (symbol) { // Look up the differences between switch-case and if-else. They are very different
            case ADD:
                result = adder.calculate(x, y);
                break; // ABSOLUTELY NECESSARY OR YOU FALL INTO THE NEXT CASE

            case SUBTRACT:
                result = subber.calculate(x, y);
                break; // Used to exit the switch-case.

            case MULTIPLY:
                return multer.calculate(x, y); // No need for break if you can just automatically exit
                
            case DIVIDE:
                return divver.calculate(x, y);

            default:
                return 0;
        }

        return result;
    }

    int calculate(int x, int y, Calculation calculation) { // Example of function overloading and a demo of good software practices involving 
                                                           // Dependency Injection, Loose Coupling, etc. 
        calculation.calculate(x, y);
    }

private: // Label for private functions and variables only the class can access!
    Calculation adder;
    Calculation subber;
    Calculation multer;
    Calculation divver;
}


void main(void) { // Feeling lazy and its 11PM on a work night X)
    // Copy Initialization Examples
    Calculation adder = AddCalculation(); 
    Calculation subber = SubCalculation();

    // Direct Initialization Examples
    MulCalculation multer();
    DivCalculation divver();

    Calculator calc(adder, subber, multer, divver);
    
    printf("10 + 10 = %d\n", calc.calculate(10, 10, ADD));
    printf("10 - 10 = %d\n", calc.calculate(10, 10, SUBTRACT));
    printf("10 * 10 = %d\n", calc.calculate(10, 10, multer));
    printf("10 / 10 = %d\n", calc.calculate(10, 10, divver));

}
