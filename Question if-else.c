#include <stdio.h>

int main(){

    int marks;
        
            printf("Enter the marks between (0-100) : ");
            scanf("%d", &marks);

            if(marks<=100 && marks>=90){
                printf("    GRADE = A");
            }else if(marks<=90 && marks>=80){
                printf("    GRADE = B");
            }else if(marks<=80 && marks>=70){
                printf("    GRADE = C");
            }else if(marks<=70 && marks>=60){
                printf("    GRADE = D");
            }else if(marks<=60 && marks>=50){
                printf("    GRADE = E");
            }else if(marks<=50 && marks>=0){
                printf("    GRADE = F");
            }else{
                printf("Not defined value");
            }
            

    return 0;
}