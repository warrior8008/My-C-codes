#include<stdio.h>
    int main(){
        
        int a,b,c,d;

            printf("Enter the value of a = ");
            scanf("%d", &a);

            printf("Enter the value of b = ");
            scanf("%d", &b);
        
            printf("Enter the value of c = ");
            scanf("%d", &c);

            printf("Enter the value of d = ");
            scanf("%d", &d);

            if(a>=b && a>=c && a>=d){
               printf("The a is greatest.");
            }else if(b>=a && b>=c && b>=d){
                printf("The b is greatest.");
            }else if(c>=a && c>=b && c>=d){
                printf("The c is greatest.");
            }else if(d>=a && d>=b && d>=c){
                printf("The d is greatest.");
            }
        
        return 0;
    }