/*
*   Written By: Aaron Hale
*   06/18/23
*
*   
*
*/



#include <stdio.h>
#include <stdlib.h>


int gcd(int a, int b);
float absolute(float c);
float sqrRoot(float d);


int main(){

    int a = 15;
    int b = 6;
    float c = -2;
    float d = -9;
    int result = gcd(a,b);
    printf("The greatest commmon denominator of %d and %d is: %d\n", a ,b, result);
    printf("the absolute value of %4.2f is: %4.2f\n", c,absolute(c));
    printf("The square root of %4.2f is %4.2f\n",d, sqrRoot(d));
}

//Finds greatest common divisor of two non-negative integer values and to return the result 
int gcd(int a, int b){
    //Function Variables
    int LCM = 0;
    int GDC = 0;
    int multi_a = a;
    int multi_b = b;

    //find LCM
    while(1){
        if(multi_a==multi_b){
            printf("found!\n");
            LCM = multi_a;
            break;
        }
        if(multi_a<multi_b){
            multi_a = multi_a + a;
        }
        else if(multi_a>multi_b){
            multi_b= multi_b + b;
        }    
    }
    //calculate GCD
    GDC = (a*b)/LCM;    
    return(GDC);
}

//Calculate the absolute value of a number
float absolute(float c){
    if(c<0)
        return(c*-1.0);
    if(c>=0)
        return(c);
}

//Compute the square root of a number
float sqrRoot(float d){
    //Check if negative
    const float epsilon = 0.00001;
    float guess = 1.0;
    float result = 0;

    if(d < 0){
        printf("Negative argument passed to sqrRoot!");
        result = -1;
    }
    else{
        while(absolute(guess*guess-d)>= epsilon)
            guess = (d / guess + guess) / 2.0;
        result=guess;        
    }

    return(result);
}
