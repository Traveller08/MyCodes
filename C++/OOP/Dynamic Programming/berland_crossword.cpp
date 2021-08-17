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
bool checker(ll n, ll a)
{
    if (a <= n - 2)
        return true;
    else
        return false;
}
void solve()
{
    ni5(n, u, r, d, l);
    bool mat[n][n] = {};
    if (!checker(n, u))
    {
        for (ll i = 1; i < n - 1; i++)
            mat[0][i] = true, u--;
    }
    else
    {
        for (ll i = 1; i < u + 1; i++)
            mat[0][i] = true;
        u = 0;
    }
    if (!checker(n, r))
    {
        for (ll i = 1; i < n - 1; i++)
            mat[i][n - 1] = true, r--;
    }
    else
    {
        for (ll i = 1; i < r + 1; i++)
            mat[i][n - 1] = true;
        r = 0;
    }
    if (!checker(n, d))
    {
        for (ll i = 1; i < n - 1; i++)
            mat[n - 1][i] = true, d--;
    }
    else
    {
        for (ll i = 1; i < d + 1; i++)
            mat[n - 1][i] = true;
        d = 0;
    }
    if (!checker(n, l))
    {
        for (ll i = 1; i < n - 1; i++)
            mat[i][0] = true, l--;
    }
    else
    {
        for (ll i = 1; i < l + 1; i++)
            mat[i][0] = true, l--;
        l = 0;
    }
    if (u > 0)
    {
    }
    rep(i, 0, n, 1)
    {
        rep(j, 0, n, 1)
                cout
            << mat[i][j] << " ";
        cout << endl;
    }
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

