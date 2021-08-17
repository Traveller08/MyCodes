/*************************************************************
** AUTHOR : ANKIT CHAUDHARY **
*************************************************************/
#include <bits/stdc++.h>
using namespace std;
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long int
#define pb push_back
#define pf push_front
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define mem0(a) memset(a, 0, sizeof(a))
#define w(t) while (t--)
#define array(arr, n) \
    ll arr[n];        \
    rep(i, 0, n) cin >> arr[i];
#define new_int_1(t) \
    ll t;            \
    cin >> t;
#define new_int_2(a, b) \
    ll a, b;            \
    cin >> a >> b
#define new_int_3(a, b, c) \
    ll a, b, c;            \
    cin >> a >> b >> c
#define new_int_4(a, b, c, d) \
    ll a, b, c, d;            \
    cin >> a >> b >> c >> d
#define new_int_6(a, b, c, d, e, f) \
    ll a, b, c, d, e, f;            \
    cin >> a >> b >> c >> d >> e >> f
#define new_str(s) \
    string s;      \
    cin >> s
int main()
{
    fast();
    new_int_1(n);
    array(val0, n);
    array(val1, n);
    ll incf[n + 1] = {};
    ll incr[n + 1] = {};
    ll dp[n + 1][n + 1] = {};

    ll sum1 = 0;
    rep(i, 0, n)
    {
        sum1 += (val0[i] * val1[i]);
        incf[i + 1] = sum1;
    }
    sum1 = 0;
    for (ll i = n - 1; i >= 0; i--)
    {
        sum1 += (val0[i] * val1[i]);
        incr[i] = sum1;
    }

   

    for (ll i = 0; i < n; i++)
    {
        for (ll j = i ; j < n; j++)
        {  ll temp1=0;
            for(ll k=j;k>=i;k--)
            {
              temp1+=(val0[k]*val1[j+i-k]);
            }
            dp[i][j]=temp1;
        }
    }

    ll maxsum = INT_MIN;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i ; j < n; j++)
        {
            ll temp = incf[i] + incr[j + 1]+dp[i][j];
          maxsum=max(maxsum,temp);
        }
    }
    cout << maxsum << endl;
    return 0;
}