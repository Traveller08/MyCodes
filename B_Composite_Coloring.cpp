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
typedef pair<int,int>pll;
#define x first
#define y second
vector<ll> low_prime(1100, 0);
void lowest_prime()
{
    low_prime[1] = 1;
    rep(i, 2, 1100, 1)
    {
        if (low_prime[i] == 0)
        {
            low_prime[i] = i;
            rep(j, i * i, 1100, i)
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
    array(val, n);
    vl ans(n,0);
   mll mpp,mp1;
    rep(i,0,n,1){
        mpp[low_prime[val[i]]]++;
        ans[i]=low_prime[val[i]];
    }
    
    ll color=1;
    for(auto xx:mpp){
      mp1[xx.first]=color;
      color++;
    }
    
    rep(i,0,n,1){
        ans[i]=mp1[ans[i]];
    }
    cout<<color-1<<endl;
    rep(i,0,n,1)cout<<ans[i]<<" ";cout<<endl;
}

int main()
{
    fast();
    ni1(t);
    lowest_prime();
    w(t)
    {
        solve();
    }
    khatam;
}