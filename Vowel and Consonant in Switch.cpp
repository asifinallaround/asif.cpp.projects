#include<iostream>
#include<conio.h>
using namespace std ;
int main ()
{
    char ch;
    cout<< "Enter a Letter !"<<endl;
    cin>>ch;
    ch=tolower(ch);
    switch(ch)
    {
    case 'a':
        case 'e':
            case 'i':
                case 'o':
                    case 'u':
                        cout<<ch<< " is Vowel";
                        break;
                    default:
                        cout<< ch << " is consonant ";

    }
    getch();
}
