//1. Write a program using function to find average of three numbers.

#include <stdio.h>

    float average(int a, int b, int c);

    float average(int a, int b, int c){
        
        return (a + b + c)/3.0;
    
    }


int main(){

    int a , b , c;

        printf("a = ");
        scanf("%d",&a);

        printf("b = ");
        scanf("%d",&b);

        printf("c = ");
        scanf("%d",&c);

        printf("The average of these numbers is %2f", average(a , b, c));
    
    return 0;
}