#include<iostream>
#include<conio.h>
using namespace std ;

int main ()
{
    int a=32 , b =12 ,c,d,e,f,g,i;

    c= a&b;
    cout <<"And Operation = " <<c<<endl;

    d= a|b;
    cout <<"Or OP = "<< d<< endl;

    e= a^b;
    cout <<"XOr OP = "<< e<<endl;

    f= a>>3;
    cout <<"right shift  OP = "<< f<<endl;

    g= a<<3;
    cout <<"left  shift  OP = "<< f<<endl;

    i=~b;
    cout <<"Not  Operation = " <<i<<endl;
}

