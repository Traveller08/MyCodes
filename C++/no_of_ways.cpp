#include <bits/stdc++.h>
using namespace std;
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long int
#define pb push_back
#define pf push_front
#define um(a, b, name) unordered_map<a, b> name;
#define rep(i, a, b, k) for (ll i = a; i < b; i += k)
#define mem0(a) memset(a, 0, sizeof(a))
#define w(t) while (t--)
#define array(arr, n) \
    ll arr[n];        \
    rep(i, 0, n, 1) cin >> arr[i];
#define ni1(t) \
    ll t;      \
    cin >> t;
#define ni2(a, b) \
    ll a, b;      \
    cin >> a >> b
#define ni3(a, b, c) \
    ll a, b, c;      \
    cin >> a >> b >> c
#define ni4(a, b, c, d) \
    ll a, b, c, d;      \
    cin >> a >> b >> c >> d
#define ni5(a, b, c, d, e) \
    ll a, b, c, d, e;      \
    cin >> a >> b >> c >> d >> e
#define ni6(a, b, c, d, e, f) \
    ll a, b, c, d, e, f;      \
    cin >> a >> b >> c >> d >> e >> f
#define ns(s) \
    string s; \
    cin >> s
#define mod 1e9 + 7
#define siz1 200005
#define siz2 1000005

void solve()
{
    ni1(n);
    array(val,n);
    ll pre[n+1]={},post[n+1]={};
    partial_sum(val,val+n,pre+1);
    ll sum=0;
    for(ll i=n-1;i>=0;i--)sum+=val[i],post[i]=sum;
     rep(i,0,n+1,1)cout<<post[i]<<" ";cout<<endl;

     ll init=0,i=0,end=n-1,j=n-1,count=0;
     while (init<end)
     {
        i=init,j=end;
        while(i<j)
        {
            
        }
        init++;
     }
     
}
int main()
{
    fast();
    solve();
    return 0;
}

