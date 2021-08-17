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
#define siz1 200005
#define siz2 1000005
#define khatam return 0
#define all(x) x.begin(), x.end()
typedef vector<ll> vl;
typedef vector<pair<ll, ll>> vll;
typedef unordered_map<ll, ll> ull;
typedef map<ll, ll> mll;
vector<bool> prime(10005, false);
vl prime_no;
vl adj[10005];
ll dis[10005];
bool vis[10005]={};
queue<ll>st;
void sieve()
{
    rep(i, 2, 1000, 1)
    {
        if (prime[i] == false)
        {
            rep(j, i * i,10001 , i)
            {
                prime[j] = true;
            }
        }
    }
    rep(i, 1000, 10000, 1) if (!prime[i]) prime_no.pb(i);
}
bool valid_pair(ll a, ll b)
{
    ll count = 0;
    while (a > 0)
    {
        if (a % 10 != b % 10)
            count++;
        a /= 10, b /= 10;
    }
    if (count == 1)
        return true;
    else
        return false;
}
void make_graph()
{
    rep(i, 0, prime_no.size(), 1)
    {
        rep(j, i + 1, prime_no.size(), 1)
        {
            if (valid_pair(prime_no[i], prime_no[j]))
            {
                adj[prime_no[i]].pb(prime_no[j]);
                adj[prime_no[j]].pb(prime_no[i]);
            }
        }
    }
}


void bfs(ll v)
{
    vis[v]=true;
    dis[v]=0;
    st.push(v);
    while (!st.empty())
    {
        ll s=st.front();
        st.pop();
        for(auto x:adj[s])
        {
            if(!vis[x])
            {
                dis[x]=dis[s]+1;
                vis[x]=true;
                st.push(x);
            }
        }
    }
    
}
void solve()
{
   memset(dis,-1,sizeof(dis));
   memset(vis,false,sizeof(vis));
  while(!st.empty())st.pop();
   ni2(a,b);
   bfs(a);
   if(dis[b]==-1)cout<<"Impossible"<<endl;
   else cout<<dis[b]<<endl;
}

int main()
{
    fast();
    sieve();
    make_graph();
    // rep(i,1000,1100,1)
    //  {   cout<<i<<" this  ";
    //      for(auto x:adj[i])cout<<x<<" ";cout<<endl<<endl;
    //  }
    ni1(t);
    w(t)
    {
        solve();
    }
    khatam;
}