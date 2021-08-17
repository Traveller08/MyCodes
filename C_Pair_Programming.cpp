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
#define mod 1000000007
#define siz1 200005
#define siz2 1000005
#define khatam return 0
#define all(x) x.begin(), x.end()
typedef vector<ll> vl;
typedef vector<pair<ll, ll>> vll;
typedef unordered_map<ll, ll> ull;
typedef map<ll, ll> mll;

void solve()
{
    ni3(k,n,m);
    array(mono, n);
    array(poly, m);
    vl ans;
    bool flag = 0;
    ll i = 0, j = 0;
    ll k1=k;
    while (1)
    {
        bool f1 = 0, f2 = 0,f3=0,f4=0;
        if (i < n)
        {
            if (mono[i] == 0)
                k++, ans.pb(mono[i]),i++,f2 = true,k1++;
            
        }
        if (j < m)
        {
            if (poly[j] == 0)
                k++, ans.pb(poly[j]),j++, f1 = true,k1++;
           
        }
       if(f1 or f2)continue;
        if (i < n)
        {
            if (mono[i] <= k and mono[i] != 0)
                ans.pb(mono[i]),i++,f1=true,k1++;
            else if (mono[i] > k and !f1 and !f2)
            {
                f3=true;
              
            }
        }
        if(f1 or f2)continue;
        if (j < m)
        {
            if (poly[j] <= k and poly[j] != 0)
                ans.pb(poly[j]),j++,f2=true,k1++;
            else if (poly[j] > k and !f1 and !f2)
            {
                f4=true;
            }
        }
         if (!f1 and !f2)
        {  
            break;
          
        }
        if(f3 and f4){
            flag=true;
            break;
        }
    }
    if (flag or ans.size()!=n+m)
        cout << -1 << endl;
    else
    {
        print(ans);
    }
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