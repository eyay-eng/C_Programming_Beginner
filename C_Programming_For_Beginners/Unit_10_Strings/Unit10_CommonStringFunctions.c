/*
*
*   Written By: Aaron Hale
*   06/20/23
*
*   Practice challenge to gain familiarity with common string functions
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void revStr();
void strSort();


int main(){
    

    revStr();

    strSort();


    return(0);
}


//Read input fromReverse string and print to screen

void revStr(){
    char usrStr[50];
    
    printf("Enter word to Reverse: ");
    scanf("%s",usrStr);
    int l = strlen(usrStr);
    
    
    printf("The word in reverse is: ");
    for( int i = l; i>=0; i--){
        
        printf("%c",usrStr[i]);
    }

}

//Sort the strings of an Array using a bubble sort algorithm

void strSort(){
    int numStr;
    char usrStrs[25][50];

    //get user to input number of strings to enter
    printf("Enter number of Strings to input (Max 25): ");
    scanf("%d", &numStr);
    
    //Protect Array from overload
    if(numStr > 25){
        printf("Invalid Input!\n");
        return(strSort());
    }


    //Load user strings into 2d Array
    for(int i = 0; i<numStr; i++){
        printf("Enter String %d: ",i+1);
        scanf("%s", usrStrs[i]);
    }

    //Bubble sort of strings
    char temp[50];
    for(int i =0; i<numStr-1;i++){
        for(int j = 0; j < numStr-i-1;j++){
            if (strcmp(usrStrs[j], usrStrs[j+1])>0){
                strncpy(temp,usrStrs[j],sizeof(temp)-1);
                strncpy(usrStrs[j],usrStrs[j+1],sizeof(usrStrs[j])-1);
                strncpy(usrStrs[j+1],temp,sizeof(usrStrs[j+1])-1);
            }
        }

    }

    //Print Sorted Array
    printf("\nSorted Strings:\n");
    for(int i = 0; i< numStr; i++)
        printf("%s\n",usrStrs[i]);
}