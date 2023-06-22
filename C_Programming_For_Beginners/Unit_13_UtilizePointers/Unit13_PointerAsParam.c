/*
*
*   Written By: Aaron Hale
*
*   Simple program to practice passing pointer to function
*
*/

#include <stdio.h>
#include <stdlib.h>

void sqrSelf(int *pVal);

int main(){

    int i = 4;
    sqrSelf(&i);
    printf("%d",i);

    return 0;
}

void sqrSelf(int *pVal){

        int i = *pVal;
        *pVal = *pVal*i;
}