#include <iostream>
#include <conio.h>
using namespace std ;

int main ()
{
    double f,c;
    cout<< "Please enter the the Celsius Value =";
    cin >> c;

    f=((c*((double)9/5))+32);

    cout << "The Fahrenheit value is =  " <<f << endl ;

    getch();
}
