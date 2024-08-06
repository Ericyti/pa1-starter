/**
 * Assignment-1
 * Username: _______ (fill out your username here)
 * Class: UCSD CSE30-S224
 */
#include <stdio.h>
#include <stdlib.h>

#define POLYNOMIAL_FORMAT "%x * 16^%d\n"

int main(int argc, char *argv[]) {


    if (argc != 2) {
        fprintf(stderr, "%s wrong number of arguments\n", argv[0]);
        return EXIT_FAILURE;
    }


    unsigned int base10 = (unsigned) atoi(argv[1]);
  
    // put your code here (use as many lines as you need)


    return EXIT_SUCCESS; 
}
