#include<iostream>
#include<conio.h>
using namespace std;

int main ()
{
    int x;
    cout << "Please enter your Value "<<endl;
    cin >> x;

    if (x>0)
    {
        cout << "Positive";
    }

    if (x<0)
    {
        cout << "Negative";
    }

    if (x==0)
    {
        cout << "Zero but not hero ";
    }

    getch();
}
