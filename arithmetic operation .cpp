#include<iostream>
#include <conio.h>
using namespace std;

int main()
    {
        double n1,n2;
        cout<< "Please Enter your Desire Number ";
        cin >> n1 >> n2 ;

        double sum = (float)n1+ n2;
        cout <<"Here the the sum of these two number =" << sum ;
        cout <<endl;
        double sub = (float)n1 - n2;
        cout <<"Here the the sub of these two number =" << sub ;
        cout <<endl;
        double mul = (float)n1 * n2;
        cout <<"Here the the mul of these two number =" << mul ;
        cout <<endl;
        double div = (float)n1 / n2;
        cout <<"Here the the divide  of these two number =" << div ;
        cout <<endl;
        int reminder = int (n1) % int(n2); // Modulus operation requires integers
    cout << "Here the reminder of these two numbers = " << reminder << endl;

        getch ();
    }
