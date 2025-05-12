#include <stdio.h>

/*
Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
 Income Slab Tax:
 2.5 – 5.0L = 5%
 5.0L - 10.0L = 20%
 Above 10.0L = 30%
Note that there is no tax below 2.5L. Take income amount as an input from the user.

*/
int main(){
    unsigned long long income,tax;
    
        printf("Enter the amout to = ");
        scanf("%llu", &income);

    if(income<250000){
        tax = 0;;
    }else if(income<=500000 && income>=250000){
        tax = (income*5)/100;
    }else if(income<=1000000 && income>=500000){
        tax = (income*20)/100;
    }else if(income>1000000){
        tax = (income*30)/100;
    }
        printf("The tax you have to pay is %llu", tax);
    return 0;
}