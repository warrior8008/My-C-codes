#include <stdio.h>
         
         int main(){
            
            int a;

                printf("Sir, Enter your Age = ");
                scanf("%d", &a);

                if(a>=100){
                    printf("Oh, You live in Earth from many Years you can Drive.");
                }

                else if(a>=60){
                   printf("Oh, You are senior citizen, you can drive.\n");
                }

                else if(a>=18){
                    printf("Oh, You are Adult You can drive.\n");
                }

                else{
                    printf("Sorry You Cannot Drive.");
                }



                
            return 0;
         }