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
map<ll, map<char, ll>> mpp;
map<char, ll> query;
void build_tree(ll s, ll e, ll curr, string &ss)
{
    if (s == e)
    {
        mpp[curr][ss[s]]++;
        return;
    }
    ll mid = s + (e - s) / 2;
    build_tree(s, mid, 2 * curr + 1, ss);
    build_tree(mid + 1, e, 2 * curr + 2, ss);
    for (auto it = mpp[2 * curr + 1].begin(); it != mpp[2 * curr + 1].end(); ++it)
    {
        mpp[curr][it->first]++;
    }
    for (auto it = mpp[2 * curr + 2].begin(); it != mpp[2 * curr + 2].end(); ++it)
    {
        mpp[curr][it->first]++;
    }
}
void update(ll s, ll e, ll curr, string &ss, ll index)
{
    if (s == e)
    {
        mpp[curr][ss[s]] = 1;
        return;
    }
    ll mid = s + (e - s) / 2;
    if (index <= mid)
    {
        mpp[2 * curr + 1].clear();
        update(s, mid, 2 * curr + 1, ss, index);
        for (auto it = mpp[2 * curr + 1].begin(); it != mpp[2 * curr + 1].end(); ++it)if(it->second>0)mpp[curr][it->first]++;
      
    }

    else
    {
        mpp[2 * curr + 2].clear();
        update(mid + 1, e, 2 * curr + 2, ss, index);
        for (auto it = mpp[2 * curr + 2].begin(); it != mpp[2 * curr + 2].end(); ++it)if(it->second>0)mpp[curr][it->first]++;
    }
       
}
void query_ans(ll s, ll e, ll curr, string &ss, ll l, ll r)
{
    if (l > e or r < s)
        return;
    if (s == e)
    {
        query[ss[s]]++;
        return;
    }

    if (l <= s and r >= e)
    {
        for (auto it = mpp[curr].begin(); it != mpp[curr].end(); ++it)
        {
            query[it->first]++;
        }
    }
    ll mid = s + (e - s) / 2;
    query_ans(s, mid, 2 * curr + 1, ss, l, r);
    query_ans(mid + 1, e, 2 * curr + 2, ss, l, r);
}
void solve()
{
    ns(ss);
    ll nn = ss.length();
    build_tree(0, nn - 1, 0, ss);
    //  rep(i,0,4*nn,1)cout<<st[i]<<" ";cout<<endl;
    ni1(m);
    w(m)
    {
        ni1(p);
        if (p == 1)
        {
            ll l;
            cin >> l;
            char c;
            cin >> c;
            ss[l - 1] = c;
            update(0, nn - 1, 0, ss, l - 1);
            // cout<<ss<<endl;
            // rep(i,0,4*nn,1)cout<<st[i]<<" ";cout<<endl;
            cout << "update ";
            for (auto x : mpp[0])
                cout << x.first;
            cout << endl;
        }
        else
        {
            query.clear();
            ni2(l, r);
            query_ans(0, nn - 1, 0, ss, l - 1, r - 1);
            cout << query.size() << endl;
            query.clear();
        }
    }
    for (auto x : mpp[0])
        cout << x.first;
    cout << endl;
    //cout<<ss<<" "<<nn<<endl;
}

int main()
{
    //  fast();
    solve();
    khatam;
}