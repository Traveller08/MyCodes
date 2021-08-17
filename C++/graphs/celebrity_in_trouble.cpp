#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

int main()
{
    long long int n, i, sum = 0;
    cin >> n;
    
    long long int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = ((sum + arr[i]) % mod + mod) % mod;
    }
    long long int q;
    cin >> q;

    while (q--)
    {
        long long int w;
        cin >> w;
        sum = (sum * 2)%mod;

        cout << sum % mod << endl;
    }
}
