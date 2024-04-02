#include<iostream>
#include<conio.h>
using namespace std;
 int main (){
    double pi= 3.1416 ;
    double h,r,a;

    cout<< "Enter Radius = ";
    cin >> r;

    cout << "Enter Height = ";
    cin >> h ;
    cout << endl;

    a=((2* pi *r)*(h+r));
    cout<< "The Area of the Cylinder is  = " << a <<endl ;

    getch ();
 }
