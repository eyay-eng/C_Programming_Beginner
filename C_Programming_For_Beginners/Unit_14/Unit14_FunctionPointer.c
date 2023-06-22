/*
*
*   Written By: Aaron Hale
*   06/21/23
*
*   Small program to practice pointer arithmetic
*/



#include <stdio.h>
#include <stdlib.h>


int lenString(const char *pMsg);

int main(){

    printf("The length of the string is: %d\n", lenString("Hello!"));

    return(0);
}

int lenString(const char *pMsg){

    const char *lastAddress = pMsg;

    while(*lastAddress)
        ++lastAddress;
        
    return lastAddress - pMsg;

}

