//Write a program in C to print multiplication table of a given number n in reverse order.

#include <stdio.h>

int main(){

        int n, i = 10;
        
        printf("Enter the value of n = ");
        scanf("%d", &n);
        
        while(i){
            printf("%d X %d = %d\n", n, i, n*i);
            i--;
        }

    return 0;
}
