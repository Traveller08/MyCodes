#include <bits/stdc++.h>
using namespace std;
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pf push_front
#define rep(i, a, b, k) for (ll i = a; i < b; i += k)
#define rept(i, a, b) for (auto i = a; i != b; ++i)
#define drep(i, a, b, k) for (ll i = a; i >= b; i--)
#define mem0(a) memset(a, 0, sizeof(a))
#define w(t) while (t--)
#define array(arr, n)          \
    vector<ll> arr(n);         \
    for (ll i = 0; i < n; i++) \
        cin >> arr[i];
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
#define getmax(a, b) a > b ? a : b
#define getmin(a, b) a < b ? a : b
#define print(x)               \
    for (auto ele : x)         \
        cout << ele << '	'; \
    cout << endl;
#define printp(x)      \
    for (auto ele : x) \
        cout << ele.firs << '	' << ele.second << endl;
#define mod 1000000007
#define MX 100000000
#define siz1 200005
#define siz2 1000005
#define khatam return 0
#define all(x) x.begin(), x.end()
typedef vector<ll> vl;
typedef vector<pair<ll, ll>> vll;
typedef unordered_map<ll, ll> ull;
typedef map<ll, ll> mll;
vl val[2000000];
queue<pair<ll, ll>> qu;
vl dis(1000000);
vector<bool> prime(siz2, false);
void sieve()
{
    rep(i, 2, 1010, 1)
    {
        if (prime[i] == false)
        {
            rep(j, i * i, siz2, i)
            {
                prime[i] = true;
            }
        }
    }
}
vector<ll> low_prime(siz2, 0);
void lowest_prime()
{
    low_prime[1] = 1;
    rep(i, 2, 1010, 1)
    {
        if (low_prime[i] == 0)
        {
            low_prime[i] = i;
            rep(j, i * i, siz2, i)
            {
                if (low_prime[j] == 0)
                    low_prime[j] = i;
            }
        }
    }
}
void solve()
{
    ni1(n);
    vl disc(4, MX);
    ll temp = 0;
    rep(i, 0, n, 1)
    {
        ni1(p);
        temp |= ((p - 1) << (2 * i));
    }
    rep(i, 0, (1 << (2 * n)), 1)
    {
        dis[i] = MX;
        rep(j, 0, 4, 1) disc[j] = MX;
        rep(j, 0, (2 * n), 2)
        {
            ll temp1 = (i & (3 << j)) >> j;
            if (disc[temp1] == MX)
                disc[temp1] = j;
        }
        rep(j, 0, 4, 1)
            rep(k, 0, 4, 1) if (disc[j] < disc[k])
        {
            ll temp2 = ((i & ~(3 << disc[j])) | (k << disc[j]));
            val[i].pb(temp2);
            val[temp2].pb(i);
        }
    }
    qu.push({temp, 0});
    dis[temp] = 0;
    while (!qu.empty())
    {
        pair<ll, ll> t = qu.front();
        qu.pop();
        if (!t.first)
            break;
        rep(i, 0, val[t.first].size(), 1)
        {
            ll j = val[t.first][i];
            if (dis[j] > dis[t.first] + 1)
            {
                dis[j] = dis[t.first] + 1;
                qu.push({j, dis[t.first] + 1});
            }
        }
    }
    cout << dis[0] << endl;
}

int main()
{
    fast();
    solve();
    khatam;
}