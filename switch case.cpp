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
                case 3:
                    printf("You enter 3");
                    break;
                case 4:
                    printf("You enter 4");
                    break;
                case 5:
                    printf("You enter 5");
                    break;
                case 6:
                    printf("You enter 6");
                    break;
                case 7:
                    printf("You enter 7");
                    break;                
                default:
                    printf("You enter unwanted value.");
            }


     return 0;
    }