/*
*
*   Writtn By: Aaron Hale
*   Date: 06/29/23
*
*   Challenge to practice opening a file and determining the number of lines in a file
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    //Create file pointers
    FILE *pfile = NULL;
    char *filename = "samplefile.txt";

    //Open file and check if pointer is assigned
    pfile = fopen(filename,"r");
    if(pfile==NULL)
        printf("Failed to open %s.\n",filename);

    //find number of lines
    int i = 0;
    int c;
    while((c = fgetc(pfile))!=EOF)
        if(c == '\n')
            i++;

    //rpint number of lines and close file, add 1 to account for EOF line
    printf("%d",++i);
    fclose(pfile);
    pfile = NULL;


    return(0);
}




