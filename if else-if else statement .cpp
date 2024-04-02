#include <iostream>
#include <conio.h>
using namespace std ;

int main ()
{
    int age;
    cout<< "Please enter your authentic age "<<endl;
    cin>> age ;

    if(age==18)
    {
        cout<<"Just be an Adult ";
    }
    else if (18<age)
    {
        cout << "Adult and eligible for anything ";
    }
    else
    {
        cout << "Underage";
    }

    getch ();
}
