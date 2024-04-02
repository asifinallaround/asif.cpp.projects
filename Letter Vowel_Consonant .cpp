#include<iostream>
#include<conio.h>
using namespace std ;
int main ()
{
    char ch;
    cout<< "Enter Any Letter ";
    cin >> ch ;
    ch == toupper(ch);//this will change the letter into uppercase ,if i put tolower(ch) it will be opposite.
    cout << "The Letter "<< ch << " is ";

    if(ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
    {
        cout<<"Vowel. ";
    }
    else
    {
        cout<< "Consonant.";
    }
    getch();
}
