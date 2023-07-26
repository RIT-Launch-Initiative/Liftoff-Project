#include <stdio.h>
#include <stdint.h>

void pointer_problem() { // TODO: 1. Update argument here
    // 1. TODO: Set the value of the pointer to 5
}

// TODO: 2. The memory will be destroyed upon returning causing a crash if accessed. Fix this function.
int* memory_problem() { // TODO: 2. Update return type here
    int memory[10] = {};

///////////////////////// DO NOT MODIFY BELOW THIS LINE /////////////////////////

    for (int i = 0; i < 10; i++) {
        memory[i] = i + 1;
    }

    return memory;
///////////////////////// DO NOT MODIFY ABOVE THIS LINE /////////////////////////

}

// TODO: 3. Each time this function is called, it should return the opposite of the previous call
bool flip_flop_problem() {
    bool flip_flop = false; // TODO: 3 Add a keyword to make this variable persist between function calls
    flip_flop = !flip_flop; // Hint: Lifetime of this variable is the lifetime of the program
    return flip_flop;
}

// TODO: 4. This function should return value_to_be_cleared which should be 0 by the end of the function
uint8_t clear_bit_problem() {
    uint8_t value_to_be_cleared = 0b10000000;

    // TODO: Clear the bit here

    return value_to_be_cleared;
}

// TODO: 5. This function should return value_to_be_cleared which should be 2 by the end of the function
uint8_t set_bit_problem() {
    uint8_t value_to_be_set = 0b00000000;

    // TODO: Set the bit here.

    return value_to_be_set;
}

// TODO: 6. This function should return value_to_complement which should be 255 by the end of the function
uint8_t complement_problem() {
    uint8_t value_to_complement = 0b00000000;

    // TODO: Complement the value here

    return value_to_complement; // Should return 0b11111111 or 255
}

int main() {
    // TODO: 1. Use this variable and set it through the pointer_problem function.
    int pointer_problem_int = 0;
    // TODO: 1. Function call here
    printf("pointer_problem_int (expect 5): %d\n", pointer_problem_int);

    // TODO: 2 Modify the function call when you change the signature
    // TODO: 2 Use this variable for something else ;)
    int *memory_problem_array = memory_problem();
    // TODO: 2. Uncomment the print statement. Running without function modification will lead to a segfault
    for (int i = 0; i < 10; i++) {
//        printf("memory_problem_array[%d] (expect %d): %d\n", i, i + 1, memory_problem_array[i]);
    }
    // TODO: 2 What to do with this type of memory when you're done

///////////////////////// DO NOT MODIFY BELOW THIS LINE /////////////////////////

    // Should print true, false, true
    printf("flip_flop_problem (expect true): %s\n", flip_flop_problem() ? "true" : "false");
    printf("flip_flop_problem (expect false): %s\n", flip_flop_problem() ? "true" : "false");
    printf("flip_flop_problem (expect true): %s\n", flip_flop_problem() ? "true" : "false");

    // 4. Should print 0
    printf("clear_bit_problem (expect 0), %d\n", clear_bit_problem());

    // 5. Should print 2
    printf("clear_bit_problem (expect 2), %d\n", set_bit_problem());

    // 6. Should print 255
    printf("clear_bit_problem (expect 255), %d\n", complement_problem());

    return 0;
}
