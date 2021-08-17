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
int val[siz1];
int no[siz1];
stack<ll> st;

bool comp(int a, int b)
{

    return no[a] > no[b];
}
void dsf(int x)
{
    if (!adj[x].empty())
    {

        ll ans = 1;
        sort(adj[x].begin(), adj[x].end(), comp);
        for (auto &i : adj[x])
            no[i] = (no[i] * (ans++));
        ll poi = 0;
        for (auto &i : adj[x])
            poi += (no[i]);
        no[x] = poi;
    }
}
void dfs1(ll v)
{
    vis[v] = true;
    st.push(v);
    no[v] = 1;
    ll io = 1;
    for (auto &x : adj[v])
    {
        if (!vis[x])
        {
            vis[x] = true;
            no[v] += io;

            io++;
            dfs1(x);
        }
    }
}
void dfs2(int x)
{
    vis[x] = true;
    ll mul = 1;

    for (auto p : adj[x])
    {
        if (!vis[p])
        {
            vis[p] = true;
            val[p] = (val[x] * (mul++)) % mod;
            dfs2(p);
        }
    }
}

int main()
{
    fast();
    ni1(t);
    w(t)
    {
        memset(vis, false, sizeof(vis));
        memset(adj, 0, sizeof(adj));
        memset(val, 0, sizeof(val));
        memset(no, 0, sizeof(no));
             ni2(n, x);

        ll aa, bb;

        rep(i, 0, n - 1, 1)
        {
            cin >> aa >> bb;
            adj[aa].push_back(bb);
        }

        dfs1(1);
        memset(vis, false, sizeof(vis));
        val[1] = x;
        while (!st.empty())
        {
            dsf(st.top());
            st.pop();
        }
         memset(vis, false, sizeof(vis));
         for (auto &i : adj)sort(i.begin(), i.end(), comp);
         dfs2(1);
        ll final_ans=0;
        rep(i,1,n+2,1)final_ans+=val[i],final_ans%=mod;
        rep(i,0,n+2,1)cout<<no[i]<<" ";cout<<endl;
        cout << final_ans%mod << endl;
        
    }
    return 0;
}

/*--------------------------------------------------------------------------------------------------------------------
                                                                                                                    
--------------------------------------------------------------------------------------------------------------------*/