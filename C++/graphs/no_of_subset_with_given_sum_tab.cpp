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
#define mod 1000000007
ll power(ll a, ll b)
{
    ll ans = 1;
    w(b)
    {
        ans *= a;
        ans %= mod;
    }
    return ans;
}
ll noofsub(ll n)
{
    ll sum = (n * (n + 1)) / 4;
    vector<vector<ll>> dp(n + 1, vector<ll>(sum + 1, 0));
    rep(i, 0, n + 1) dp[i][0] = 1;
    rep(i, 1, n + 1)
    {
        rep(j, 1, sum + 1)
        {
            if (i <= j)
            {
                dp[i][j] = ((dp[i - 1][j]) + (dp[i - 1][j - i])) % mod;
            }
            else
                dp[i][j] = (dp[i - 1][j]);
        }
    }

    return (dp[n][sum]) % mod;
}
int main()
{
    fast();
    new_int_1(n);
    ll sum = n * (n + 1) / 2;
    if (sum % 2 != 0)
        cout << 0 << endl;
    else
    {
        ll ans = noofsub(n);

        cout << (ans * (power(2,mod-2))%mod)%mod << endl;
    }
    return 0;
}