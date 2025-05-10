#include<stdio.h>

    int main(){

        int num;

            printf("Enter the value of num = ");
            scanf("%d", &num);

            switch (num){
                case 1:
                    printf("You enter 1");
                    break ;
                case 2:
                    printf("You enter 2");
                    break;
                default:
                    printf("You enter unwanted value.");



            }


     return 0;
    }