#include <stdio.h>

// Function ka declaration (prototype)
int sum(int , int);

// Ye function hai – do numbers lega aur sum karke return karega
int sum(int x , int y) {
    return x + y ;
}
    

// Main function – yahin se program start hota hai
int main() {

    int a, b ;

    printf("Enter 1st number:");
    scanf("%d", &a);

    printf("Enter 2nd number:");
    scanf("%d", &b);

    int result = sum(a, b);  // Function ko call kiya
    
    printf("The sum is: %d\n", result);

    return 0;

}