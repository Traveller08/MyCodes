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
        cout << ele.first <<" "<< ele.second << endl;
#define mod 1000000007
#define siz1 200005
#define siz2 1000005
#define khatam return 0
#define all(x) x.begin(), x.end()
typedef vector<ll> vl;
typedef vector<pair<ll, ll>> vll;
typedef unordered_map<ll, ll> ull;
typedef map<ll, ll> mll;
typedef pair<ll, ll> pll;
#define x first
#define y second

void solve()
{
    ni2(n, k);
    vector<pll> val;
    bool vis[2 * n ] = {};
    vl rem;
    rep(i, 0, k, 1)
    {
        ni2(p, q);
        p--,q--;
        if (q < p)
            val.pb(mp(q, p));
        else
            val.pb(mp(p, q));
        vis[p] = true;
        vis[q] = true;
    }
     rep(i,0,2*n,1){
         if(!vis[i])rem.pb(i);
     }
     ll kk=rem.size();
     rep(i,0,kk/2,1){
         ll a=rem[i];
         ll b=rem[i+kk/2];
         if(b<a)val.pb(mp(b,a));
         else val.pb(mp(a,b));
     }
    ll curr_points = 0;
     k=val.size();
    rep(i, 0, k, 1)
    {
        rep(j, 0, k, 1)
        {
            if (val[i].x > val[j].x and val[i].x < val[j].y and val[i].y > val[j].y)
                curr_points++;
        }
    }
   // cout<<curr_points<<endl;
  
  // printp(val);
  cout << curr_points << endl;
}

int main()
{
    fast();
    ni1(t);
    w(t)
    {
        solve();
    }
    khatam;
}