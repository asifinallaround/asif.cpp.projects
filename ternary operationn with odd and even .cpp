#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
    int num;
    cout<< "Please enter any number ";
    cin >>num;

    (num%2==0)?cout<<num<<" is Even.":cout<<num<< " is odd";
    getch();
}
