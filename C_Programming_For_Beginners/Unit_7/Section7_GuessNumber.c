/*
*   Written By: Aaron Hale
*   06/17/23
*
*   Basic standalone script using loops to create a guessing game
*   The user has 5 tries to guess a randomly generated number between 0-20
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    //Game Variables
    int guessNum = 5;
    int maxRange = 20;
    int minRange = 0;
    int guess;


    //initialize random number generator
    time_t t;
    srand((unsigned) time(&t));

    //Generate random between 0-20
    int ans = rand() % (maxRange + 1 - minRange) + minRange;

    //Start Message
    printf("\nWelcome! This is a guessing game\nYou have 5 tries to pick a number between 0-20\n");
    printf("Good luck!\n\n");

    //Start of game loop!

    
    while(guessNum>0){
        //Inform number of guesses remaining
        printf("You have %d Tries Remaining\n",guessNum);

        //Get guess from user
        printf("Enter your Guess: ");
        scanf("%d", &guess);
    
        //Check if the guess is correct
        if(guess==ans){
            printf("You guessed the number! Congrats!\n");
            break;
        }
        else if(guess>ans){
            printf("your guess is high!\n\n");
        }
        else{
            printf("Your Guess is Low!\n\n");
        }
        guessNum--;
    }


    //Failure message
    if(guess!=ans){
        printf("You've ran out of guesses, better luck next time!\n");

    }
    return(0);
}