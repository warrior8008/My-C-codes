/*write a program in C to print "n" natural numbers using do-while loop.*/

#include<stdio.h>
    int main(){

          int n , i = 1;
                 
                 printf("Ente the value of n = ");
                 scanf("%d", &n);

            do{

                printf("\n%d", i);i++;

            }while(i<=n);


    return 0;
}