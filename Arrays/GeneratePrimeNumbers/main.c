/*
Create a program that will find all prime numbers from 3-100, no input to this program.
Output will be each prime number separated by a space on a single line. Need to create an
array that will store each prime number as it is generated. Hard-code the first two prime numbers
(2 and 3) in the primes array. Utilize loops to only find prime numbers up to 100 and a loop
to print out the primes array. Number is prime if it cannot be evenly divided by any other previous
prime numbers. Use p/primes[i] >= primes[i] which is a test to ensure that the value of p does not
exceed the square root of primes[i].
*/


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    int p, i;
    // Initialize the primes array size 100 with values 2 and 3 hard-coded
    int primes[50] = {0};
    primes[0] = 2;
    primes[1] = 3;
    int primeIndex = 2;

    bool isPrime;

    // Loop through every number 3-100 (can ignore even numbers) and add it to primes if it is prime
    for(p = 5; p <= 100; p = p + 2){

        isPrime = true;
        // Loop for p / primes[i] >= primes[i]
        for(i = 1; isPrime && p / primes[i] >= primes[i]; ++i)
            if(p % primes[i] == 0)
                isPrime = false;
        if(isPrime == true){
            primes[primeIndex] = p;
            ++primeIndex;
        }
    }

    printf("Prime numbers between 0 and 100:\n");
    // Loop to print out the primes array
    for(i = 0; i < primeIndex; i++){
        printf("%i ", primes[i]);
        printf("\n");
    }

    return 0;
}
