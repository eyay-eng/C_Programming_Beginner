/*
*   Written By: Aaron Hale
*   06/18/23
*
*   Program that will find all prime numbers from 3-100
*   Number considered prime if that number is not evenly divisble by any other previous prime number
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

    //Create array to store prime numbers, hardcode first 2
    int primes[100]={2,3};

    //Boolean value if current value is prime
    bool isPrime= false;

    //primeIndex keeps track of number of found elemends
    int primeIdx = 2;

    //loop to scan from 1-100
    for(int idx_p=5; idx_p<=100; idx_p+=2){
        //set isPrime to true to initiate check
        isPrime = true;
        for(int i =0; isPrime && idx_p/primes[i]>=primes[i];i++){
            if(idx_p % primes[i] ==0){
                isPrime = false;
            }
        }

        //if survived prime check add # to array and update prime index
        if(isPrime == true){
            primes[primeIdx] = idx_p;
            primeIdx++;
        }

    }

    //print all primes to terminal
    for(int idx = 0; idx<primeIdx; idx++){
        printf("Prime: %d\n",primes[idx]);
    }

    return(0);
}