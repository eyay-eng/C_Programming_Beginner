/*
*   Written By: Aaron Hale
*   06/18/23
*
*   
*   Program should use 2-d array to calculate average yearly rainfall, and average rainfall for each month
*   Data values will be hardcoded
*
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    //Create months
    enum monthYear{January,February,March,April,May,June,July,August,September, November, December}month;

    float sumYear =0.0;
    float sumMonth = 0.0;
    float monthAvg[12];

    //Initialize array and hardcode weather data
    float rainfall[5][12] = {
        {1.35, 2.28, 2.65, 4.58, 1.65, 3.13, 2.24, 5.81, 4.73, 0.73, 2.57, 3.40,},
        {2.34, 2.63, 1.64, 2.88, 4.04, 6.16, 10.13, 8.82, 3.27, 8.63, 2.77, 2.92},
        {2.93, 2.94, 2.39, 3.18, 3.11, 1.62, 6.84, 3.84, 2.65, 3.12, 3.53, 3.47},
        {3.84, 2.83, 1.86, 5.19, 7.01, 5.38, 6.85, 5.15, 3.55, 10.40, 2.41, 4.70},
        {1.90, 2.71, 7.23, 3.35, 2.61, 2.05, 3.80, 3.71, 4.38, 5.15, 6.28, 3.61}
    };

    //Creat array for years
    int year[5] = {2022,2021,2020,2019,2018};
    float yearAvg[5];

    //calculate average yearly rainfall
    for(int idx_y=0;idx_y<5;idx_y++){
        //Calculate yearly total rainfall
        for(int idx_m=0;idx_m<12;idx_m++){
            sumYear=sumYear+rainfall[idx_y][idx_m];
        }
        yearAvg[idx_y] = sumYear/12;
        sumYear=0;
    }

    //Calcuate Monthly Rainfall
    for(int idx_m = 0;idx_m<12;idx_m++){
        //calcualte montly rainfall
        for(int idx_y=0;idx_y<5;idx_y++)
            sumMonth=sumMonth+rainfall[idx_y][idx_m];
        monthAvg[idx_m]=sumMonth/5;
        sumMonth=0;
    }

    //Print Yearly Results
    for(int idx_y=0;idx_y<5;idx_y++)
        printf("Avg Rainfall %d: %fin\n",year[idx_y], yearAvg[idx_y]);    

    //printMonthly results
    printf("\nMONTHLY AVERAGES:\n\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
    for(int idx_m=0;idx_m<12;idx_m++)
        printf("%4.1f ", monthAvg[idx_m]);


    return(0);
}