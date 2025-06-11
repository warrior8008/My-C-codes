    //F = 9/5*C + 32

#include <stdio.h>


    float ctof(float);

    float ctof(float c){

        return ((9*c/5) + 32);

    }
    
     
int main(){
    
    float c;

        printf("Enter the celcius value = ");
        scanf("%f", &c);

        printf("The farenheit value of %.2f is %.1f", c, ctof(c));

    return 0;
}