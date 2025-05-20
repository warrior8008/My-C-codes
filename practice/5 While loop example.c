/*While loop: Condition pehle check hoti hai; true ho to body chalti hai, warna loop ek-baar bhi nahi chalta.*/

#include <stdio.h>

int main(){
  
      int i = 0;                // shuruat
 while (i <= 10) {         // condition check hoti rahegi
       printf("%d\n", i);    // body: current number print karo
     i++;                  // update step (i = i + 1)

}

    return 0;
}