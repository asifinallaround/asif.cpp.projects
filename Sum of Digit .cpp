#include<iostream>
using namespace std;

int main ()
{
    int num, sum = 0;
    cout<< "Please enter digit ";
    cin>>num;
    cout <<"\nThe number is: " << num;

    //loop to find sum of digits
    while(num!=0){
        sum += num % 10;
        num = num / 10;
    }

    //output
    cout <<"\nSum of digits: " << sum;

    return 0;
}
