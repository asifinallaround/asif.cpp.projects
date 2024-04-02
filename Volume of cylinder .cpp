#include <iostream>
#include <conio.h>
using namespace std ;

int main ()
{
    double pi=3.1416;
    double r,h,v;

    cout << "Enter the Value of  radius = ";
    cin >> r ;

    cout << "Enter value of the height = ";
    cin  >> h;

    v= (pi*(r*r)*h);

    cout << "The Volume of the Cylinder = " << v ;

    getch();
}
