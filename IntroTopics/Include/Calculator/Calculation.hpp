#ifndef CALCULATION // Preprocessor macro (if not defined then compile this block up to endif)
#define CALCULATION // Define CALCULATION. Purpose is to prevent multiple definitions of the class when #include multiples times

class Calculation { // Defining another class
public: // public functions
    // No constructor necessary to be defined. Can still be instantiated but no setup is needed here

    virtual int calculate(int x, int y) = 0; // The virtual keyword forces implementations of Calculation to implement this function
};

#endif
