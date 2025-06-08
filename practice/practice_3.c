//1. Write a program using function to find average of three numbers.

#include <stdio.h>

    float average(int a, int b, int c);

    float average(int a, int b, int c){
        
        return (a + b + c)/3.0;
    
    }


int main(){

    int x , y , z;

        printf("a = ");
        scanf("%d",&x);

        printf("b = ");
        scanf("%d",&y);

        printf("c = ");
        scanf("%d",&z);

        printf("The average of these numbers is %2f", average(x , y, z));
    
    return 0;

}