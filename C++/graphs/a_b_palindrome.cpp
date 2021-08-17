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
    ni2(a, b);
    ns(s);
    ll n = s.length();
    bool found = 0;
    rep(i, 0, n / 2, 1)
    {
        if (s[i] == '0' && s[n - (i + 1)] == '?')
        {
            s[n - (i + 1)] = '0';
        }
        if (s[i] == '?' && s[n - (i + 1)] == '0')
        {
            s[i] = '0';
        }
        if (s[i] == '1' && s[n - (i + 1)] == '?')
        {
            s[n - (i + 1)] = '1';
        }
        if (s[i] == '?' && s[n - (i + 1)] == '1')
        {
            s[i] = '1';
        }
        if ((s[i] == '1' && s[n - (i + 1)] == '0') || s[i] == '0' && s[n - (i + 1)] == '1')
        {
            found = true;
        }
    }
    
        ll zr = 0, on = 0;
    if (!found)
    {
        rep(i, 0, n, 1)
        {
            if (s[i] == '0')
                zr++;
            if (s[i] == '1')
                on++;
        }
        if(a<zr || b<on)
        {
            found=true;
        }

    }
    if(!found)
    {
        on=b-on;
        zr=a-zr;
        rep(i,0,n/2,1)
        {
            if(s[i]=='?' && s[n-(i+1)]=='?')
            {
                if(on>0)
                {
                    on-=2;
                    s[i]='1';
                    s[n-(i+1)]='1';
                }
                else if(zr>0)
                {
                    zr-=2;
                    s[i]='0';
                    s[n-(i+1)]='0';
                }
            }
        }
        if(n%2!=0)
        {
            if(on>0)
            {
                if(s[n/2]=='?')
                  s[n/2]='1';
            }
            else if(zr>0)
            {
                if(s[n/2]=='?')
                {
                    s[n/2]='0';
                }
            }
        }
    }
    if(!found)
    {
        rep(i,0,n,1)
        {
            if(s[i]=='0')a--;
            if(s[i]=='1')b--;
        }
        if(a!=0 || b!=0)
        {
            found=true;
            
        }
        rep(i,0,n/2,1)
        {
            if(s[i]!=s[n-(i+1)])
            {
                found=true;
                break;
            }
        }
    }
   if(found)cout<<-1<<endl;
   else
    cout << s << endl;
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