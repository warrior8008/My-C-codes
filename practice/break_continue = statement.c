#include <stdio.h>

int main(){

        int i , n;
            
            printf("Enter the value of n = ");
            scanf("%d", &n);

            for(int i = 0; i < n; i++)
                
            {
                if(i==6){
                    break; //break = It means exit the loop now
                   // continue; //continue = It means skip the iterationn not, means if value is 6 skip this iteration
              }
              printf("i is %d\n", i);
            }

    return 0;  
}