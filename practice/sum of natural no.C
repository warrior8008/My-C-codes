#include <stdio.h>

int main(){
       
       int i = 0, n, Sum ;
          
          printf("Enter the value of n = ");
          scanf("%d", &n);

          while(i<=n){
            Sum+=i;
          }
            printf("The value of %d is %d", n, Sum);
    return 0;
}