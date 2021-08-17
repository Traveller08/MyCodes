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
    array(arr, n);
    vector<ll> ans;
    rep(i, 1, n, 1)
    {
        if (__gcd(arr[i], arr[i - 1]) != 1)
        {
            if (arr[i - 1] >= arr[i])
            {
                for (ll j = arr[i - 1]; j <= 100007; j++)
                {
                    if (i >= 2)
                    {
                        if (__gcd(j, arr[i - 2]) == 1 && __gcd(j, arr[i])==1)
                        {
                            ans.push_back(i);
                            ans.push_back(i+1);
                            arr[i-1]=j;
                            ans.push_back(j);
                            ans.push_back(arr[i]);
                            
                            break;
                        }
                    }
                    else if(__gcd(j, arr[i]) == 1)
                    {
                          ans.push_back(i);
                            ans.push_back(i+1);
                            ans.push_back(j);
                            arr[i-1]=j;
                            ans.push_back(arr[i]);
                            break; 
                    }
                }
            }
            else 
            {
                swap(arr[i],arr[i-1]);
                for (ll j = arr[i - 1]; j <= 100007; j++)
                {
                    if (i >= 2)
                    {
                        if (__gcd(j, arr[i - 2]) == 1 && __gcd(j, arr[i])==1)
                        {
                            ans.push_back(i);
                            ans.push_back(i+1);
                            arr[i-1]=j;
                            ans.push_back(j);
                            ans.push_back(arr[i]);
                            break;
                        }
                    }
                    else if(__gcd(j, arr[i]) == 1)
                    {
                          ans.push_back(i);
                            ans.push_back(i+1);
                            ans.push_back(j);
                            arr[i-1]=j;
                            ans.push_back(arr[i]);
                            break; 
                    }
                }
 
            }
 
        }
    }
    
    ll sz=ans.size();
    ll tp=0;
    if(sz!=0)
    {
        cout<<sz/4<<endl;
    }
    rep(i,0,sz,1)
    {
        tp++;
        if(tp%4!=0)cout<<ans[i]<<" ";
        else cout<<ans[i]<<endl;
    }
    if(sz==0)cout<<0<<endl;
}
int main()
{
    fast();
    ni1(t);
    ll pop=0;
    w(t)
    {
        solve();
    }
    return 0;
}
 
/*--------------------------------------------------------------------------------------------------------------------
                                                                                                                    
--------------------------------------------------------------------------------------------------------------------*/