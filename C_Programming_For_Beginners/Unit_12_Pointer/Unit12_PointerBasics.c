/*
*
*   Written By: Aaron Hale
*   06/20/23
*
*   Basic program to introduce concept of pointers
*
*/

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main(){

    //Initialize pointer, integer, and then assign that integer address to the pointer
    int *num = NULL;
    int number = 15;
    num = &number;
    
    //Print Some information about the pointer
    printf("The address of the pointer is: %p\n",(void*)&num);
    printf("The address of the number is: %p\n",&number);
    printf("The value of the number is: %d",*num);

    return 0;
}