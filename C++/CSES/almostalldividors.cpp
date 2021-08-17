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

unordered_map<ll, vector<ll>> fact;
void seive()
{
    for (ll i = 2; i < 1000002; i++)
    {
        for (ll j = 2 * i; j < 1000002; j += i)
        {
            fact[j].push_back(i);
        }
    }
}
int main()
{
    seive();
    fast();
    new_int_1(t);
    w(t)
    {
        new_int_1(n);
        array(arr, n);
        sort(arr, arr + n);
        bool flag = 0;
        ll no = arr[0] * arr[n - 1];
        if (n != 1)
        {
        
                rep(i,0,n/2)
                {
                    if(arr[i]*arr[n-(i+1)]!=no)
                    {
                        flag=true;
                        break;
                    }
                }
                if(n%2!=0)
                {
                    if(arr[n/2]*arr[n/2]!=no)
                    {
                        flag=true;
                    }
                }
            
        }
       if(!flag) 
       for(ll i=0;i<n;i++)
        { vector<ll>pa;
          for(ll j=0;j<i;j++)
          {
            if(arr[i]%arr[j]==0)
            {
                pa.push_back(arr[j]);
            }
          }
          if(pa!=fact[arr[i]]){
              flag=true;
              break;
          }
        }
       
        if (!flag)
            cout << no << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}