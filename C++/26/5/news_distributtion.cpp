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
        cout << ele << " "; \
    cout << endl;
#define printp(x)      \
    for (auto ele : x) \
        cout << ele.firs <<" "<< ele.second << endl;
#define mod 1000000007
#define siz1 200005
#define siz2 1000005
#define khatam return 0
#define all(x) x.begin(), x.end()
typedef vector<ll> vl;
typedef vector<pair<ll, ll>> vll;
typedef unordered_map<ll, ll> ull;
typedef map<ll, ll> mll;

vl adj[500005];
bool vis[500005] = {};
ll no_of_elements=0;
vl distributed;

void dfs(ll v)
{
    vis[v] = true;
    for (auto x : adj[v])
    {
        if (!vis[x])
        {
           no_of_elements++;
            distributed.pb(x);
            dfs(x);
        }
    }
}

void solve()
{
    ni2(n, k);
    rep(i, 0, k, 1)
    {
        ni1(s);
        vl members;
        w(s)ni1(q),members.pb(q);
        
        rep(i, 0, members.size(), 1)
            rep(j, 0, members.size(), 1)
                if (i != j)adj[members[i]].pb(members[j]);      
    }
    vl ans(n+1,0);
    rep(i, 1, n + 1, 1)
    {
        if (!vis[i])
        {
            no_of_elements++, dfs(i);
            ans[i]=no_of_elements;
            for (auto x : distributed)ans[x] = no_of_elements;
             no_of_elements=0;
            distributed.clear();
        }
    }
    rep(i, 1, n + 1, 1) cout << ans[i] << " ";cout << endl;
}

int main()
{
    fast();
    solve();
    khatam;
}