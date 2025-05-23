#include <stdio.h>

int main(){
       
       int i = 1, n, Sum = 0;
          
          printf("Enter the value of n = ");
          scanf("%d", &n);

          while(i<=n){
            
            Sum+=i;    //Sum = Sum + i
            i++;

          }
          
          printf("The value of %d is %d", n, Sum);
   
    return 0;
}