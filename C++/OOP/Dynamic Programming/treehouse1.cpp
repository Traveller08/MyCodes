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
#define mod 1000000007
#define siz1 300008
#define siz2 1000005
/*----------------------------------------------------------------------------------------------------------------------------------------------------------
                                                                                                                                                            
----------------------------------------------------------------------------------------------------------------------------------------------------------*/
vector<int> adj[siz1];
bool vis[siz1];
int no[siz1];
bool comp(int a, int b) { 
    if(a==b)
    {
        return adj[a].size()>adj[b].size();
    }
    else return no[a]>no[b];
}
ll dfs(ll v)
{

    if (adj[v].size() && !vis[v] )
    {  
        vis[v]=true;
        vector<ll> val;
        for (auto &x : adj[v])
        {
          if(!vis[x]) {
               val.push_back(dfs(x));
               vis[x]=true;}
        }

        sort(val.begin(), val.end(), greater<ll>());
        ll ans = 0;
        rep(i,0,val.size(),1)ans += val[i] * (i + 1);

        return ++ans;
    }

    return 1;
}
void dsf1(int x)
{
    vis[x] = true;
    no[x]=1;
    for (auto p : adj[x])
    {
        if (!vis[p])
        {
            vis[p] = true;
            dsf1(p);
             no[x]+=no[p];
        }
    }
}
void solve()
{

    memset(adj, 0, sizeof(adj));
     memset(vis, false, sizeof(vis));
    ni2(n, x);

    ll aa, bb;

    rep(i, 0, n - 1, 1)
    {
        cin >> aa >> bb;
        adj[aa].push_back(bb);
    }
    dsf1(1);
     memset(vis, false, sizeof(vis));
  //   for (auto &i : adj)sort(i.begin(), i.end(), comp);
    ll ans = ((dfs(1) % mod) * (x % mod)) % mod;
    cout << ans <<endl;
}

int main()
{
    fast();

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}