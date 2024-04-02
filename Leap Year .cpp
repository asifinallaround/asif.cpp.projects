#include<iostream>
#include<conio.h>
using namespace std ;
int main ()
{
    int y;
    cout<< "Enter Year for checking leap year \n ";
    cin>> y;

    if (y%4==0 && y%100!=0)
    {
        cout<<y<<" is a Leap year.";
    }
    else  if (y%400==0 && y%100!=0)
    {
        cout<<y<<" is a Leap year.";
    }
    else
    {
        cout<<y<<"  is a Leap not year.";
    }
    getch();
}

