 #include <stdio.h>
 
 int main(){
    int i = 5;

        printf("The value of i is %d\n", i);

            i = i + 5;    

        printf("The value of i is %d\n", i);

        printf("The value of i is %d\n", i++); //here i++ is post-increment.

        printf("The value of i is %d\n", ++i); //here ++i is pre-increment.

        /* In i++ here 1st comes i so it first print the value and then ++ process the task
        But in ++i ++ process the task and then print the processed value.*/

        printf("The value of i is %d\n", i--);

        printf("The value of i is %d\n", --i);


        

    return 0;
 }