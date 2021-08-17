
// A C++ program to generate palindromic numbers
// less than n.
#include <iostream>
using namespace std;
long long cnt=0;
// A utility for creating palindrome
ll createPalindrome(int input, int b, bool isOdd)
{
    ll n = input;
    ll palin = input;
    if (isOdd) n /= b;
    while (n > 0)
    {
        palin = palin * b + (n % b);
        n /= b;
    }
    return palin;
}
 
void generatePalindromes(int n)
{
    ll number;
    for (int j = 0; j < 2; j++)
    {
        int i = 1;
        while ((number = createPalindrome(i, 10, j % 2)) < n)
        {
            cout << number << " ";
            cnt++;
            i++;
        }
    }
}

int main()
{
    long long n = 1049009000000;
    generatePalindromes(n);
    cout<<"cnt "<<cnt<<endl;
    return 0;
}