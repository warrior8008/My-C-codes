/*Write a program in C to print "n" natural number in reverse order*/

#include <stdio.h>

int main() {
    int n;                                 // variable declare
    printf("Enter the value of n = ");
    scanf("%d", &n);                       // user se input lo

    for ( ; n; n--) {                      // init part khali, condition i!=0, update i--
        printf("%d\n", n);
    }
    return 0;
}
