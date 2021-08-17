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
#define print(x)            \
    for (auto ele : x)      \
        cout << ele << " "; \
    cout << endl;
#define printp(x)      \
    for (auto ele : x) \
        cout << ele.firs << '	' << ele.second << endl;
#define mod 1000000007
#define siz1 200005
#define siz2 1000005
#define khatam return 0
#define all(x) x.begin(), x.end()
typedef vector<ll> vl;
typedef vector<pair<ll, ll>> vll;
typedef unordered_map<ll, ll> ull;
typedef map<ll, ll> mll;
vl adj[100005];
ll vis[100005] = {};
ll cont[26] = {};
vector<char> st(100005);
void dfs(string s, ll curr, ll v)
{
    vis[v] = true;
    st[v] = s[curr];
  //  sort(all(adj[v]));
    for (auto x : adj[v])
    {
        if (!vis[x])
        {
            curr++;
            dfs(s, curr, x);
            vis[x] = true;
        }
    }
}
void dfs1(ll v)
{

    vis[v] = true;
    cont[st[v] - 'a']++;

    for (auto x : adj[v])
    {
        if (!vis[x])
        {
            dfs1(x);
            vis[x] = true;
        }
    }
}
void solve()
{
    ni2(n, q);
    ns(s);
    vl ord;
    rep(i, 0, n - 1, 1)
    {
        ni2(p, q);
        adj[p].pb(q);
        ord.pb(p);
        ord.pb(q);
    }
    memset(cont, 0, 26);
   for(auto i: ord)
    dfs(s, 0, i);
    //rep(i,0,10,1)cout<<st[i]<<" ";cout<<endl;
    w(q)
    {
        memset(vis, false, sizeof(vis));
        memset(cont, 0, 26);
        ll a;
        char b;
        cin >> a;
        cin >> b;
        dfs1(a);
        cout << cont[b - 'a'] << endl;
    }
}

int main()
{
    fast();
    solve();
    khatam;
}