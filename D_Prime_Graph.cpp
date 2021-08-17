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
typedef pair<ll,ll> pll;
vector<bool> prime(1505, false);
vl fact;
 void sieve()
{
    rep(i, 2, 1010, 1)
    {
        if (prime[i] == false)
        {
            rep(j, i * i, 1500, i)
            {
                prime[j] = true;
            }
        }
    }
    rep(i,2,1500,1){
        if(!prime[i])fact.pb(i);
    }
}

void solve()
{
   ni1(n);
   vector<pll>ans;
   for(int i=1;i<=n-1;i++)ans.pb(mp(i,i+1));
   ans.pb(mp(1,n));
   ll req=*lower_bound(all(fact),n);
   int m=req;
   req-=n;
   int i=1;
   bool vis[n+1]={};
   while(req>0 and i+2<=n){
      if(!vis[i] and !vis[i+2]) ans.pb(mp(i,i+2)),req--,vis[i]=true,vis[i+2]=true;
       i++;
       
   }
   cout<<m<<endl;
  for(auto x:ans)cout<<x.first<<" "<<x.second<<endl;

}

int main()
{
    fast();
    sieve();
    solve();
    khatam;
}