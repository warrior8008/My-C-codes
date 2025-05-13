#include<stdio.h>
    int main(){
        
        unsigned long long  a,b,c,d;

            printf("Enter the value of a = ");
            scanf("%llu", &a);

            printf("Enter the value of b = ");
            scanf("%llu", &b);
        
            printf("Enter the value of c = ");
            scanf("%llu", &c);

            printf("Enter the value of d = ");
            scanf("%llu", &d);

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