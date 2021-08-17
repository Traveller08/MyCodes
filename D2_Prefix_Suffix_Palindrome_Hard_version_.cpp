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
#define mod 1000001279
#define siz1 200005
#define p 31
#define siz2 1000005
#define khatam return 0
#define all(x) x.begin(), x.end()
typedef vector<ll> vl;
typedef vector<pair<ll, ll>> vll;
typedef unordered_map<ll, ll> ull;
typedef map<ll, ll> mll;

void solve()
{
    ns(s);
    ll n = s.length();
    ll i = 0, j = n - 1;
    string pre = "", pos = "", rem = "", mid1 = "", mid2 = "";

    while (i <= j)
    {
        if (s[i] == s[j])
        {
            if (i != j)
            {
                pre.pb(s[i]), pos.pb(s[j]), i++, j--;
            }
            else
                {pre.pb(s[i]);j--;break;}
        }
        else
            break;
    }
    rep(k, i, j + 1, 1) rem.pb(s[k]);
    n = rem.length();
    if (n >= 2)
    {    
        vl pw(n+5,0);
    pw[0] = 1;
    rep(i, 1, n+2, 1) pw[i] = (pw[i - 1] * p) % mod;

        vl pre_hash(n + 1, 0), suf_hash(n + 1, 0);
        ll curr = 0, hash_value = 0;
        rep(k, 0, n, 1)
        {
            hash_value = (hash_value + (rem[k] - 'a' + 1) * pw[curr]) % mod;
            pre_hash[k] = hash_value;
            curr++;
        }
        hash_value = 0, curr = 0;
        for (ll k = n - 1; k >= 0; k--)
        {
            hash_value = (hash_value + (rem[k] - 'a' + 1) * pw[curr]) % mod;
            suf_hash[k] = hash_value;
            curr++;
        }
       
        i=0,j=n-1;
        while(i<=j){
            if(rem[i]==rem[j])
            {
              ll f_hash=pre_hash[j];
              ll b_hash=j==n-1?suf_hash[i]:(suf_hash[i]-suf_hash[j+1]+mod)%mod;
              ll p1=0,p2=n-j-1;
              p1<p2?f_hash=(f_hash*pw[p2-p1])%mod:b_hash=(b_hash*pw[p1-p2])%mod;
              if(f_hash==b_hash){
                  rep(k,0,j+1,1){mid1.pb(rem[k]);}
                  break;
              }
              else j--;
            }
            else j--;
        }

        reverse(all(rem));
          curr = 0, hash_value = 0;
        rep(k, 0, n, 1)
        {
            hash_value = (hash_value + (rem[k] - 'a' + 1) * pw[curr]) % mod;
            pre_hash[k] = hash_value;
            curr++;
        }
        hash_value = 0, curr = 0;
        for (ll k = n - 1; k >= 0; k--)
        {
            hash_value = (hash_value + (rem[k] - 'a' + 1) * pw[curr]) % mod;
            suf_hash[k] = hash_value;
            curr++;
        }
         i=0,j=n-1;
        while(i<=j){
            if(rem[i]==rem[j])
            {
              ll f_hash=pre_hash[j];
              ll b_hash=j==n-1?suf_hash[i]:(suf_hash[i]-suf_hash[j+1]+mod)%mod;
              ll p1=0,p2=n-j-1;
              p1<p2?f_hash=(f_hash*pw[p2-p1])%mod:b_hash=(b_hash*pw[p1-p2])%mod;
              if(f_hash==b_hash){
                  rep(k,0,j+1,1){mid2.pb(rem[k]);}
                  break;
              }
              else j--;
            }
            else j--;
        }
        reverse(all(pos));
      //  cout << pre << " " << pos << endl;
        string ans1 = pre + mid1 + pos;
        string ans2 = pre + mid2 + pos;
        ans1.size() > ans2.size() ?  cout<<ans1<<endl :cout<< ans2<<endl;
        
    }
    else
    {
        reverse(all(pos));
        cout<<pre+rem+pos<<endl;
    }
}

int main()
{
    fast();
    //precal();
    ni1(t);
    w(t)
    {
        solve();
    }
    khatam;
}