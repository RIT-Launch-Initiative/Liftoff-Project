// Use <> for headers designated by the compiler such as standard library headers
#include <stdio.h> // Standard Library header for using input and output functions like printf 

// Use "" for headers defined in the project folder 
#include "Include/IntroToC.h" // This is how you would add a header file to a source file

// You would define your functions below 
int adder(int x, int y) {
    int z; // Define an integer variable named z
    z = x + y; // I add x and y, then assign it to the variable z
    return z; // Return the value of z

    // I could also do
    // return x + y 
    // This would add x and y and return that value
    // The compiler would most likely optimize out those extra instructions and unnecessary use of memory
    // Never assume what the compiler might do and be explicit though!
}


int subtracter(int x, int y) {
    // TODO: This is your job
}

void hello_world() {
    // You can read the main function for more examples of printf

    // const defines a variable as never changing. Compiler errors will be thrown if you try to change it
    // You can look up how this helps both humans and computers!
    // char stands for character
    // [6] defines a buffer size of 6 (more on this later)
    // Also known as char* buffer (also more on this later)
    // char buffers are also known as strings in higher level languages
    const char buffer[6] = {'L', 'a', 'u', 'n', 'c', 'h'}; // Defining an array (or buffer) of char. char must use single quotes!

    


    // printf is a function defined by stdio.h
    // %s defines a variable argument of type string (char array)    
    printf("String: %s", buffer); 


    // TODO: Use the printf function to print "Hello, World!".
    // Hint: You do not need to use %s or assign a buffer

}


bool reverse_card(bool card) {
    // Example of an if-else statement
    
    // Take note of this practice too: It is best to let the compiler catch mistakes for you
    // by putting variables to the right hand side. See one of the below cases

    if (true == card) { // If card equals true
        return false; // returns a value of false if card is true
    }
    
    // You don't need to have an else or else-if case
    if (false == card) { // If card equals false 
        return true;

    // BOTTOM STATEMENTS ARE AN EXAMPLE AND WILL NEVER EXECUTE //
    } else if (true != card && false == card) { // if card does not equal true AND card equals false
        return true;
    } else if (false != card || true == card) { // if card does not equal false OR card equals true
        return false;
    } else if (card = false) { // BAD: This compiles! You're assigning card to false here
        return card; // Always returns false
    } else { // If all else fails... this executes
        return !card; // ! is used to invert a boolean case
    }
}

bool reverse_int(int card) {
    // Integers can be used in logic statements as well, although this can be bad practice too.
    // This is more of an exercise for you though.
    
    // 0 is the only value that would be false
    // TODO: Write an if-else case where the boolean value of the integer passed is reversed

    return false; // TODO: Remove this when you're done
}

/**
* This is the main function. It can also be specified as void main(), but this is less common
* This function signature along with the one mentioned in the previous line is required if you want 
* an executable program
*
* argc is the number of arguments passed in
* **argv is the arguments passed in. You will see what * means but its basically a buffer of character buffers (strings)
*/
int main(int argc, char **argv) {
    int add_result = adder(2, 2); // add_result will be assigned to 4
    int sub_result = subtracter(4, 2); // sub_result should be assigned to 2 if implemented correctly 

    // Print examples
    printf("addResult: %d", add_result); // %d is used for printing decimals
    // TODO: Print out your subtraction result!

    if (reverse_card(false)) { // reverse_card returns a boolean and its return value will be used
        printf("False became True!");
    }

    if (true == reverse_card(0)) { // Sometimes its better to be clear to the programmers what you mean though. It also helps catch potential issues if reverse_card were to change in the future. 
        printf("0 is true now!");
    }

    return 0; // Main returns 0. Usually signifies that program executed successfully.
}
