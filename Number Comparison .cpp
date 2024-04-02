#include<iostream>
#include<conio.h>
using namespace std ;
int main ()
{
    int n1,n2,n3;
    cout <<"Enter the number ";
    cin>> n1>> n2>> n3;

    if(n1>n2 && n1>n3)
    {
        cout<< "Number 1 is the biggest ";
    }
   else if(n2>n1 && n2>n3)
    {
        cout<< "Number 2 is the biggest ";
    }
      else
    {
        cout<< "Number 3 is the biggest ";
    }

    getch();
}
