#include <stdio.h>

    int fibionacci(int);

    int fibionacci(int n){
         if(n == 1 || n == 2){
            return n - 1;
         }

    return fibionacci(n-1) + fibionacci(n-2);
    }

    
    int main(){
    
    int n;

        printf("Enter the value of n = ");
        scanf("%d", &n);

        printf("The value of fibionacci series at %d is %d.", n ,fibionacci(n));

    return 0;

}