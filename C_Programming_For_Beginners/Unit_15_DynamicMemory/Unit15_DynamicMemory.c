/*
*
*   Written By: Aaron Hale
*   10/22/23
*
*   Simple program to practice dyanmic memory allocation based on user input
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strMem();

int main(){

    strMem();

    return(0);
}


void strMem(){
    char *pStr = NULL;
    int usrLen= 0;

    //Get user memory length
    printf("Enter Desired Memory Length: ");
    scanf("%d", &usrLen);

    //Initialize Memory allocation

    pStr = (char *) malloc(usrLen * sizeof(char));

    if(pStr!=NULL){
        printf("Enter string: ");
        scanf("%s",pStr);

        //Print String
        printf("Text read is: %s", pStr);
    }

    //Free Memory
    free(pStr);
    pStr = NULL;


}