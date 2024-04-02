#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int f=1,i,n;
    cout<< "Please enter a number "<<endl;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    cout<<"Factorial of " <<n<<" is = "<<f;
}
