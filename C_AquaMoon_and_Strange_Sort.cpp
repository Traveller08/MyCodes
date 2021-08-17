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

void solve()
{
    ni1(n);
    array(val, n);
    map<ll, pair<ll, ll>> pos;
    vector<ll> arr(n);
    rep(i, 0, n, 1)
    {
        arr[i] = val[i];
        if (i % 2 == 0)
            pos[val[i]].first++;
        else
            pos[val[i]].second++;
    }
    sort(all(arr));
    bool found = 0;
    vl ps;
    rep(i, 0, n, 1)
    {
        if (val[i] == arr[i])
        {
           if(pos[val[i]].first>=2 or pos[val[i]].second>=2) ps.pb(i);
            continue;
        }
        else
        {
            if (i % 2 == 0)
            {
                if (pos[arr[i]].first > 0)
                {
                    pos[arr[i]].first--;
                }
                else
                {
                    found = true;
                    break;
                }
            }
            else
            {
                if (pos[arr[i]].second > 0)
                {
                    pos[arr[i]].second--;
                }
                else
                {
                    found = true;
                    break;
                }
            }
        }
        if (found)
            break;
    }
    if (found)
        cout << "NO" << endl;
      else if (ps.size() == 0)cout << "YES" << endl;
    else
    {
       
      //  cout<<"this"<<endl;
            rep(i, 0, ps.size(), 1)
            {
                if (ps[i] % 2 == 0)
                {
                    if (pos[arr[ps[i]]].first > 0)
                    {
                        pos[arr[ps[i]]].first--;
                    }
                    else
                    {
                        found = true;
                        break;
                    }
                }
                else
                {
                    if (pos[arr[ps[i]]].second > 0)
                    {
                        pos[arr[ps[i]]].second--;
                    }
                    else
                    {
                        found = true;
                        break;
                    }
                }
                if(found)break;
            }
             if (found)
             cout << "NO" << endl;
             else cout<<"YES"<<endl;

        
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