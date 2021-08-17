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
#define mem0(a) memset(a, 0, size_setof(a))
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
        cout << ele <<" "; \
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
vl adj[500];
bool vis[500]={};
void dfs(ll v){
    vis[v]=true;
    for(auto x:adj[v]){
        if(!vis[x])dfs(x);
    }
}
void solve()
{
    ni2(n, m);
    vl val[m+1];
    bool no_lan=0;
    rep(l,0,n,1)
    {
        ni1(sz);
        if(sz>0)no_lan=true;
        w(sz){
            ni1(p);
            val[p].pb(l+1);
        }
          
    }
    rep(i,1,m+1,1){
        if(val[i].size()>1){
           rep(j,0,val[i].size()-1,1){
               adj[val[i][j]].pb(val[i][j+1]),adj[val[i][j+1]].pb(val[i][j]);
           }
        }
    }
    ll cnt=0;
   rep(i,1,n+1,1){
       if(!vis[i]){
           dfs(i);
           cnt++;
       }
   }
   if(!no_lan)cnt++;
   cout<<cnt-1<<endl;
  
}

int main()
{
    fast();
    solve();
    khatam;
}