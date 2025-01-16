// Copyright 2025 Landon Davidson
// Landon Davidson
// landond@uw.edu

#include <stdio.h>     // For printf
#include <inttypes.h>  // For int16_t
#include "NthPrime.h"  // NthPrime module

// Run and test NthPrime with the inputs 5, 10, and 15
int main(int argc, char** argv) {
    printf("The 5th prime is %" PRId64 "\n", NthPrime(5));
    printf("The 10th prime is %" PRId64 "\n", NthPrime(10));
    printf("The 15th prime is %" PRId64 "\n", NthPrime(15));
}

