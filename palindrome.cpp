#include <iostream>
using namespace std;
int main()
{
     int n, number, digit, reverse = 0;
     cout << "Enter a positive number: "<<endl;
     cin >> number;
     n = number;
     do
     {
         digit = number % 10;
         reverse = (reverse * 10) + digit;
         number = number / 10;
     } while (number != 0);
     cout << "The reverse of the number is: " << reverse << endl;
     if (n == reverse)
         cout << "The number is a palindrome.";
     else
         cout << "The number is not a palindrome.";
    return 0;
}
