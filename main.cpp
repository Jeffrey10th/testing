#include <iostream>


/* Purpose of this program:
 * to test unsigned integers and signed integers and perform calculations between them.
 * This program is also (in terms of unsigned integers), related to deep-machine-level memory.
 * Use with caution.
*/ 

int main() {

    unsigned int u = 10, u2 = 42;
    int i = 10, i2 = 42;

    //statement will work as expected since the resulting integer is not negative
    std::cout << u2 - u << std::endl;

    //resulting integer will be negative
    std::cout << u - u2 << std::endl;

    std::cout << i2 - i << std::endl;
    std::cout << i - i2 << std::endl;

    std::cout << i - u << std::endl;
    std::cout << u - i << std::endl;

}