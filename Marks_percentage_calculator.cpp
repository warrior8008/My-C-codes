#include<stdio.h>

/*Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.
*/


    int main(){
        
        int marks1,marks2,marks3;

            printf("Enter the marks of Physics = ");
            scanf("%d", &marks1);

            printf("Enter the marks of Chemistry = ");
            scanf("%d", &marks2);

            printf("Enter the marks of Mathematics = ");
            scanf("%d", &marks3);

        if(marks1<=33 || marks2<=33 || marks3<=33){
            printf("You are fail because, you are not pass individually in subject.\n");
        }
        else if(((marks1 + marks2 + marks3)/100)*3 <40){
            printf("You  are fail due to less percentage\n");
        }
        else{
            printf("Hurray, You are Passed..\n");
        }
        

     return 0;
    }