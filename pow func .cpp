#include<iostream>
#include<cmath>
using std::cin;
using std::cout;
int main ()
{
    int base, exponent;
    cout << "What is the base?\n";
    cin>> base;
    cout <<"What is the exponent?\n";
    cin>> exponent;
    double power = pow(base,exponent);
    cout << base << " to the power " << exponent << " = "<< power <<std::endl;
    return 0;
}
