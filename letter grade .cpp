#include<iostream>
#include<conio.h>
using namespace std ;

int main ()
{
    double marks;

    cout << "Please enter your Subject marks"<< endl;
    cin >> marks;

    if (100<marks)
    {
        cout << "Invalid";
    }
    else if (0>marks)
    {
        cout << "Invalid";
    }
    else if (marks>=80)
    {
        cout << "A+";
    }
    else if (marks>=70)
    {
        cout << "A";
    }
    else if (marks>=60)
    {
        cout << "B";
    }
    else if (marks>=50)
    {
        cout << "C";
    }
    else if (marks>=40)
    {
        cout << "D";
    }
    else
    {
        cout<< "Tumi Fail !! Bosho";
    }

    getch();
}
