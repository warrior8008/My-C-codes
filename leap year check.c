/*Write a program in C to find whether a year entered by the user is a leap year or not. 
Take year as an input from the user*/


#include<stdio.h>
    
    int main(){

        int year;

            printf("Enter the Year = ");
            scanf("%d", &year);

            if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
                printf("%d is a Leap year.", year);
            }else{
                printf("%d is not a Leap year.", year);
            }

        return 0;
    }