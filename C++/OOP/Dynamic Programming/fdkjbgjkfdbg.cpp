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
    ni5(a, b, x, y, n);
   // ll ans = 0;
    ll dif1 = a - x;
    ll dif2 = b - y;
    bool fir=0;
   
    ll a1=a,b1=b,x1=x,y1=y,n1=n,dif11=dif1,dif22=dif2;
        if (n1 >= dif11)
        {
            a1 -= dif11;
            n1 -= dif11;
            if (n1 >= dif22)
            {
                n1 -= dif22;
                b1 = y1;
            }
            else
            {
                b1 -= n1;
                n1 = 0;
            }
        }
        else
        {   
            a1-=n1;
            n1=0;
        }
    
        if (n >= dif2)
        {
            b -= dif2;
            n -= dif2;
            if (n >= dif1)
            {
                n -= dif1;
                a = x;
            }
            else
            {
                a-= n;
                n = 0;
            }
        }
        else
        {
            b-=n;
            n=0;
        }
    ll ans=a*b<a1*b1?a*b:a1*b1;
   cout<<ans<<endl;
}
int main()
{
    fast();
    ni1(t);
    w(t)
    {
        solve();
    }
    return 0;
}

/*--------------------------------------------------------------------------------------------------------------------
                                                                                                                    
--------------------------------------------------------------------------------------------------------------------*/