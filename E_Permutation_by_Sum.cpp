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
    ni4(n, l, r, s);
    vl arr(n , 0);
    ll curr = 0;
    rep(i, l - 1, r, 1)
    {
        arr[i] = i - l + 2, curr += arr[i];
    }
    ll dif = s - curr;
    if (dif < 0)
        cout << -1 << endl;
    else
    {
        ll mxm = n;
        for (ll i = r - 1; i >= l - 1; i--)
        {
            ll df = mxm - arr[i];
            if (dif > 0)
            {
                if (dif <= df)
                {
                    arr[i] += dif;
                    dif = 0;
                    break;
                }
                else
                {
                    ll tt = mxm - arr[i];
                    arr[i] = mxm;
                    dif -= tt;
                    mxm--;
                }
            }
            else
                break;
        }
    
    if (dif != 0)
        cout << -1 << endl;
    else
    {
        mll mpp;
        bool found=0;
        bool vis[n + 1] = {};
        rep(i, l - 1, r, 1)
        {
            mpp[arr[i]]++;
            vis[arr[i]] = true;
        }
        for (auto x : mpp)
        {
            if (x.second > 1)
            {
                found = true;
                break;
            }
        }
        ll j = 1;
        rep(i, 0, n, 1)
        {

            if (vis[j])
            {
                while (1)
                {
                    if (!vis[j])
                    {
                        break;
                    }
                    j++;
                }
            }
            if (arr[i] == 0)
            {
                arr[i] = j;
                vis[j] = true;
            }
        }
        mpp.clear();
        vl ck(n,0);
        rep(i,0,n,1){if(arr[i]==0){
            found=true;
            break;
        }}
        if(found)cout<<-1<<endl;
        else {
             rep(i,0,n,1){
            ck[arr[i]-1]++;
           }
           rep(i,0,n,1){
               if(ck[i]!=1){
                   found=true;
                   break;
               }
           }
           if(found)cout<<-1<<endl;
         else { print(arr);}
        }
       
    }
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