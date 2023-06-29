/*
*
*   Writtn By: Aaron Hale
*   Date: 06/29/23
*
*   Challenge to practice opening and converting characters to all upper case
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    //File to read from
    FILE *pFile,*tempFile = NULL;
    char *fName = "samplefile.txt";
    pFile = fopen(fName,"r");

    //temp file to write to
    char *tempName = "TempFile.txt";
    tempFile = fopen(tempName,"w");
    //Check if file is open 

    if(pFile==NULL || tempFile == NULL){
        printf("Failed to open file!\n");
        return(-1);
    }


    char c;
    while((c = fgetc(pFile)) != EOF){
        if(islower(c)){
            c = c-32;
        }
        fputc(c,tempFile);
    }


    //Close files
    fclose(pFile);
    fclose(tempFile);
    
    //Swap temp file to original file
    remove(fName);
    rename(tempName,fName);

    return(0);

}

//Convert all characters to uppercase
    //write the results out to a temporary file
    //rename the temporary file to the original file
    //remove the temporary file