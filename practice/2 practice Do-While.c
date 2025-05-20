/*Do-while loop: Body pehle chalti hai, baad me condition check hoti hai; isliye body kam-se-kam ek baar zaroor chalti hai.*/

#include <stdio.h>

int main(){
    int i = 0;               // shuruat

do {
    printf("%d\n", i);   // body kam se kam 1 baar chalegi
    i++;                 // update step
} while (i <= 10);       // condition baad me check hoti hai

    return 0;
}