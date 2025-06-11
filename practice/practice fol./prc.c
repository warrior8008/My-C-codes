#include <stdio.h>

    void Indian();
    void France();

int main(){
    
    char c;

    printf("Enter f for French i for Indian = ");
    scanf("%c", &c );

    if(c == 'i'){
        Indian();
    }else{
        France();
    }


    return 0;
}

    void Indian(){
        printf("Namaste!");
    }
    void France(){
        printf("Bonjour");
    }