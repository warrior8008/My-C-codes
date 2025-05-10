#include<stdio.h>

int main(){

    int a,b,Final_result,Average;

    printf("Enter the value of a = ");
    scanf("%d",&a);
    printf("Enter the value of b = ");
    scanf("%d",&b);
    
    Final_result = a-(-b);

    printf("The sum of a  and  b is %d\n",Final_result);

    Average = (a+b)/2;

    printf("The average of a and b is %d",Average);

    return 0;
}