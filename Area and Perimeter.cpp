#include<iostream>
   
    using namespace std;

    int main(){

        cout<<"\n\nWe need calculate the Area and Perimeter of a Rectangle, Let's do it ......!!!\n\n";

        int Area, Perimeter, length, bredth;

        cout<<"Enter the length = " ;
        cin >> length;

        cout<<"Enter the bredth = " ;
        cin >> bredth;

        Area = length*bredth;

        cout<<"\nThe area is = " <<Area ;

        Perimeter = 2*(length+bredth);

        cout<<"\nThe perimeter is = " <<Perimeter ;
                                                                                                                        
        return 0;
    }