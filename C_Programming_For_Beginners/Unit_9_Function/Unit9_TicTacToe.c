/*
*
*   Written By: Aaron Hale
*   06/19/23
*
*   Simple 2 player Tic-Tac-Toe game that can be played in a console window
*
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void drawBoard(char boardArray[]);
int getPlayerSelect(bool player, char boardArray[]);
int gameWinCheck();


int main(){

    //Load blank board
    char boardArray[10] = {'0','1', '2', '3', '4', '5', '6', '7', '8', '9' };

    drawBoard(boardArray);

    //Select
    int winner = 0;
    bool player1 = true;
    int i = 0;
    int choice = 0;

    //main game loop
    while(i < 10){
        
        drawBoard(boardArray);
        //check to see if player has won
        winner = gameWinCheck(boardArray);
        if(winner == 1)
            break;
        else if(winner ==2)
            break;
        
        //if no winner, get player input
        if(player1){
            choice = getPlayerSelect(player1, boardArray);
            boardArray[choice] = 'x';
            player1 = false;
        }
        else{
            choice = getPlayerSelect(player1, boardArray);
            boardArray[choice] = 'o';
            player1 = true;
        }
        i++;
    }

    if(winner ==1)
        printf("Player 1 Wins!\n");
    else if(winner ==2)
        printf("Player 2 Wins!\n");
    else
        printf("Tie Game! Better luck next time\n");


    return(0);
}


void drawBoard(char boardArray[]){
    system("cls");

    printf("\n          Tic Tac Toe\n\n");
    printf("Player 1 (x)  -  Player 2(o)\n\n");
    int gridSize = 3;
    int cellSize = 4;
    int arryRef = 1;
    char c;
    
    //print Board Grid
    int totalSize = gridSize*cellSize;
    for (int i =0; i<= totalSize; i++){
        for(int k = 0; k <= totalSize; k++){
            if(i % cellSize == 0 || k % cellSize == 0)
                c = '*';
            else
                c = ' ';
            if(i % cellSize == 2 && k % cellSize == 2){
                c = boardArray[arryRef];
                arryRef++;
            }
            printf("%c", c);
        }
        printf("\n");
    }
}

//
int getPlayerSelect(bool player, char boardArray[]){
    int cellSelect = 0;
    if(player){
        printf("Player 1, Enter a number: ");
        scanf("%d", &cellSelect);
    }
    else{
        printf("Player 2, Enter a number: ");
        scanf("%d", &cellSelect);
    }
    //Check input for validity (no mark previously made)
    if(boardArray[cellSelect] =='x' || boardArray[cellSelect] =='o' ){
        printf("invalid Move!\n");
        return(getPlayerSelect(player,boardArray));
    }

    return(cellSelect);
}

int gameWinCheck(char boardArray[]){
    //check row
    int winner = 0;
    for(int i = 1; i <  10; i+=3)
        if(boardArray[i]=='x' && boardArray[i+1]=='x' && boardArray[i+2]=='x')
            winner = 1;
        else if(boardArray[i]=='o' && boardArray[i+1]=='o' && boardArray[i+2]=='o')
            winner = 2;
            
    //check column
    for(int i = 1; i <  4; i++)
        if(boardArray[i]=='x' && boardArray[i+3]=='x' && boardArray[i+6]=='x')
            winner = 1;
        else if(boardArray[i]=='o' && boardArray[i+3]=='o' && boardArray[i+6]=='o')
            winner = 2;

    //check cross
    if(boardArray[1]=='x' && boardArray[5]=='x' && boardArray[9]=='x')
        winner = 1;
    else if(boardArray[1]=='o' && boardArray[5]=='o' && boardArray[9]=='o')
        winner = 2;

    if(boardArray[3]=='x' && boardArray[5]=='x' && boardArray[7]=='x')
        winner = 1;

    else if(boardArray[3]=='o' && boardArray[5]=='o' && boardArray[7]=='o')
        winner = 2;

    return(winner);
}

