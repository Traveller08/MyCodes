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
#define mod 998244352
map<pair<ll,ll>,ll>store;
ll power(ll a,ll b)
{
    ll c=1;
    while(b--)
    {
       c=((c*a)%mod);
    }
    return c%mod;
}
void solve(ll arr[], ll n, ll m, ll a, ll d)
{
    
    for(ll j=a;j<(a+(n-1)*d)+1;j+=d)
    {ll ans = 0;
        rep(i, 0, m)
         { // pair<ll,ll>key={j,i};
             if(store[{j,i}]<=0)
              store[{j,i}]=power(j,i);
           //   cout<<i<<" "<<j<<" "<<store[{j,i}]<<endl;
            ans += (arr[i] * store[{j,i}])%mod;
        }
        cout<<ans%mod<<" ";
    }
   // return ans%mod;
}
int main()
{
    fast();
    new_int_4(n, m, a, d);
    array(arr, m+1);
     solve(arr, n, m+1, a, d);
 //  cout<<power(2,6)<<endl;
    return 0;
}