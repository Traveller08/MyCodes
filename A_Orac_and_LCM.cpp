/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Author : Ankit Chaudhary ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
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
/*----------------------------------------------------------------------------------------------------------------------------------------------------------
                                                                                                                                                            
----------------------------------------------------------------------------------------------------------------------------------------------------------*/

void solve()
{
    ni1(n);
    vector<ll>lc;
    array(arr,n);
    rep(i,0,n,1)
    {
        rep(j,i+1,n,1)
        {
            lc.push_back((arr[i]*arr[j])/__gcd(arr[i],arr[j]));
        }
    }
    ll sz=lc.size();
    ll ans=lc[0];
    rep(i,1,sz,1)
    {
       ans=__gcd(ans,lc[i]);
       if(ans==1)break;
    }
    cout<<ans<<endl;
}
int main()
{
    fast();
   solve();
    return 0;
}

/*--------------------------------------------------------------------------------------------------------------------
                                                                                                                    
--------------------------------------------------------------------------------------------------------------------*/