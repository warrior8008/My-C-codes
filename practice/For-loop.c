    /*write a program in C to print first "n" natural numbers using for loop.*/

#include <stdio.h>

int main(){

     int n;

        printf("Enter the value of n = ");
        scanf("%d", &n);


        for (int i = 1; i<=n; i++) {   
        printf("%d\n", i);            
 
}

    return 0;
}