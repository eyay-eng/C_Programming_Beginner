/*
*
*   Written By: Aaron Hale
*   06/19/23
*   Practice working char arryas
*
*
*/


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int getStrLen(char strArray[]);
void strConcat(char result[], char str1[], char str2[]);
bool strCompare(char str1[],char str2[]);



int main(){
    char msg1[]= {"Help"};
    char msg2[]= {"Me"};
    char result[100];
    
    //Test String Length
    int len = getStrLen(msg1);
    printf("Length of \"%s\" is: %d\n",msg1,len);
    
    //Test Concat
    strConcat(result,msg1,msg2);
    printf("%s\n",result);

    //Test string compare
    if(strCompare(msg1,msg2))
        printf("The two strings are equal!");
    else
        printf("The two strings are not equal!");

    return(0);
}

//Write function to count the number of characters in a string w/o using strlen(), exclude '\0'
int getStrLen(char strArray[]){
    int i =0;
    while(strArray[i] != '\0')
        i++;
    return(i);
}


//Concatenate two character strings w/o using strcat()
void strConcat(char result[], char str1[], char str2[]){
    int i = 0;
    int j = 0;
    while(i < getStrLen(str1)){
        result[i] = str1[i];
        i++;
    }
    while(j < getStrLen(str2)){
        result[i] = str2[j];
        i++;
        j++;
    }
    
}

//Write function to compare if 2 strings are equal, w/o using strcmp()
bool strCompare(char str1[],char str2[]){
    bool rslt = false;
    int i = 0;
    if(getStrLen(str1) == getStrLen(str2))
        rslt = true;
        while(i < getStrLen(str1)){
            if(str1[i] != str2[i]){
                rslt = false;
                break;
            }
        }

    return(rslt);
}
