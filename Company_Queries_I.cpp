#include <bits/stdc++.h>
using namespace std;
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll int
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
   int dp[50005][20];
    TreeAncestor(int n, vector<int>& parent) {
        memset(dp, 0xff, sizeof(dp));
        for (int i = 1; i < n; i++)
            dp[i+1][0] = parent[i];
        for (int j = 1; j < 20; j++) {
            for (int i = 0; i < n; i++)
                if (~dp[i][j - 1])
                dp[i][j] = dp[dp[i][j - 1]][j - 1];
        }
    }
    
    int getKthAncestor(int node, int k) {
        for (int j = 0; j < 20; j++) 
            if (k & (1 << j)) {
                node = dp[node][j];
                if (node == -1)
                    return -1;
            }
        return node;
    }
void solve()
{
    ni2(n, q);
    vl val(n);
    val[0] = -1;
    rep(i, 1, n, 1) cin >> val[i];
    TreeAncestor(n,val);

    rep(i, 0, q, 1)
    {
        ni2(x, k);
        cout << getKthAncestor(x, k) << "\n";
    }
      //rep(i,1,29,1)cout<<lca[9][i]<<" ";
}

int main()
{
    fast();
    solve();
    khatam;
}