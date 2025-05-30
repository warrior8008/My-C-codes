#include <stdio.h>

// Function ka declaration (prototype)
int sum(int x, int y);

// Main function – yahin se program start hota hai
int main() {
    int a, b;

    printf("Enter two numbers: , ");
    scanf("%d  %d", &a, &b);

    int result = sum(a, b);  // Function ko call kiya

    printf("The sum is: %d\n", result);

    return 0;
}

// Ye function hai – do numbers lega aur sum karke return karega
int sum(int x, int y) {
    return x + y;
}