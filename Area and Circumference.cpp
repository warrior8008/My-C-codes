#include<iostream>

    using namespace std;

        int main(){


            cout<<"We need to calculate the Area and Circumference of a Circle let's do it .......!!!";

            int radius, Area, Circumference;
            float pie = 3.14;

            cout<<"\nEnter the radius = ";
            cin>>radius;

            Area = pie*radius*radius;

            cout<<"\nThe Area of Circle = "<<Area;

            Circumference = 2*pie*radius;

            cout<<"\nThe Circumference of circle = "<<Circumference;


        return 0;
    }