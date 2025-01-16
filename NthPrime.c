// Copyright 2025 Landon Davidson
// Landon Davidson
// landond@uw.edu

#include "NthPrime.h"  // Include own header file for checks
#include <stdbool.h>   // For isPrime function

// Test if input is prime or compound
static bool isPrime(int input) {
  // For each possible divisor from 2 (since 1 divides everything)
  // to input - 1 (to avoid using sqrt),
  // check if i divides input and if i doesn't equal input.
  // If so, the number is compound and return false
  for (int i = 2; i < input; i++) {
    if (input % i == 0 && i != input) {
      return false;
    }
  }
  // If the for loop never found a divisor
  // to input then it is prime and return true
  return true;
}

int64_t NthPrime(int16_t n) {
  if (n < 1) {
    return -1;
  }
  // The number of primes we have found
  int num_prime = 0;
  // The number we are currently testing, starting at 1
  int cur_num = 1;
  // While number of found primes not equal to n, keep looking
  while (num_prime != n) {
    // Increment current number
    cur_num++;
    // If the current number is prime increment number of found primes
    if (isPrime(cur_num)) {
      num_prime++;
    }
  }
  // Return current number minus 1 since the while loop adds an extra number
  return cur_num;
}
