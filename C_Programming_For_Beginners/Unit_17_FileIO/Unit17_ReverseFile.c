/*
*
*   Writtn By: Aaron Hale
*   Date: 06/29/23
*
*   Challenge to practice finding position in file
*/

#include <stdio.h>
#include <stdlib.h>


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

    //Move to end of file and get pointer position
    fseek(pFile,0, SEEK_END);
    int pos = ftell(pFile);


    printf("total size of file is %d bytes\n",pos);

    int i = 0;
    while(i < pos){
        i++;
        fseek(pFile,-i,SEEK_END);
        fputc(fgetc(pFile),tempFile);
    }

    //Close files
    fclose(pFile);
    fclose(tempFile);
    
    //Swap temp file to original file
    remove(fName);
    rename(tempName,fName);

    pFile = NULL;
    tempFile = NULL;


    return(0);
}