#include<iostream>
#include<conio.h>
using namespace std ;
int main ()
{
    int num,i;

    cout<< "Please enter a number : ";
    cin>> num ;

    for(i=1;i<=100;i++)
    {
        cout<<num<<"x"<<i<< " = " <<(num*i)<<endl;
    }

    getch();
    }
