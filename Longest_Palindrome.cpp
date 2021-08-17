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
#define rep(i, a, b, k) for (int i = a; i < b; i += k)
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
#define mod1 1000001279
#define mod2 1000000007
#define siz1 200005
#define p 31
#define siz2 1000005
#define khatam return 0
#define all(x) x.begin(), x.end()
typedef vector<ll> vl;
typedef vector<pair<ll, ll>> vll;
typedef unordered_map<ll, ll> ull;
typedef map<ll, ll> mll;
long long binpow(long long a, long long b, long long m)
{
    a %= m;
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
void solve()
{
    ns(s);

    int n = s.length();
    vl hash1(n + 1, 0), pw(n + 1, 0), hash2(n + 1, 0);
    pw[0] = 1;
    rep(i, 1, n + 1, 1) pw[i] = (pw[i - 1] * p) % mod1;
    ll curr = 1;

    rep(i, 0, n, 1)
    {
        hash1[i + 1] = (s[i] * curr + hash1[i]) % mod1;
        curr = (curr * p) % mod1;
    }
    curr = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        hash2[i] = (s[i] * curr + hash2[i + 1]) % mod1;
        curr = (curr * p) % mod1;
    }
    int i = 0, j = n - 1;
    pair<int, int> ans;
    ll curr_len = 0;
    while (i <= j)
    {

        ll fhash = (hash1[j + 1] - hash1[i] + mod1) % mod1;
        ll mdinv = binpow(pw[i], mod1 - 2, mod1);
       
        ll bhash = (hash2[i] - hash2[j + 1]) % mod1;
        fhash = (fhash * mdinv) % mod1;
        ll mdinv1 = binpow(pw[n - j - 1], mod1 - 2, mod1);
    
        bhash = (bhash * mdinv1) % mod1;
        if (fhash == bhash)
        {
            if (j - i + 1 > curr_len)
            {
                curr_len = j - i + 1;
                ans.second = j;
                ans.first = i;
            }
        }
        int tempi = i, tempj = j;
        j--;

        if (i <= j)
        {
            fhash = (hash1[j + 1] - hash1[i] + mod1) % mod1;
             mdinv = binpow(pw[i], mod1 - 2, mod1);
           
             bhash = (hash2[i] - hash2[j + 1]) % mod1;
            fhash = (fhash * mdinv) % mod1;
             mdinv1 = binpow(pw[n - j - 1], mod1 - 2, mod1);
        
            bhash = (bhash * mdinv1) % mod1;
            if (fhash == bhash)
            {
                if (j - i + 1 > curr_len)
                {
                    curr_len = j - i + 1;
                    ans.second = j;
                    ans.first = i;
                }
            }
        }
       
        i++;
        j = tempj;
        if (i <= j)
        {
             fhash = (hash1[j + 1] - hash1[i] + mod1) % mod1;
             mdinv = binpow(pw[i], mod1 - 2, mod1);
           
             bhash = (hash2[i] - hash2[j + 1]) % mod1;
            fhash = (fhash * mdinv) % mod1;
             mdinv1 = binpow(pw[n - j - 1], mod1 - 2, mod1);
        
            bhash = (bhash * mdinv1) % mod1;
            if (fhash == bhash)
            {
                if (j - i + 1 > curr_len)
                {
                    curr_len = j -i + 1;
                    ans.second = j;
                    ans.first = i;
                }
            }
        }
      
        i = tempi;
        j = tempj;
        // cout<<fhash<<" "<<bhash<<endl;
        i++;
        j--;
    }
    string fin_ans;
    rep(i,ans.first,ans.second+1,1)fin_ans.pb(s[i]);
    cout<<fin_ans<<endl;
    // cout<<fhash<<" "<<bhash<<endl;
}

int main()
{
    fast();
    solve();
    khatam;
}