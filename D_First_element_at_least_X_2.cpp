#include <bits/stdc++.h>
using namespace std;
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll  int
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
ll sum;
vl st(400005, -1);
vl val(100005);
void build_tree(ll s, ll e, ll curr)
{
    if (s == e)
    {
        st[curr] = val[s];
        return;
    }
    ll mid = s + (e - s) / 2;
    build_tree(s, mid, 2 * curr + 1);
    build_tree(mid + 1, e, 2 * curr + 2);
    st[curr] = max(st[2 * curr + 1], st[2 * curr + 2]);
}
void update_tree(ll s, ll e, ll curr, ll ind)
{
    if (s == e)
    {
        st[curr] = val[s];
        return;
    }
    ll mid = s + (e - s) / 2;
    if (ind <= mid)
        update_tree(s, mid, 2 * curr + 1, ind);
    else
        update_tree(mid + 1, e, 2 * curr + 2, ind);
    st[curr] = max(st[2 * curr + 1], st[2 * curr + 2]);
}
ll query_ans(ll s, ll e, ll curr, ll k, ll l, ll r)
{
    
    if (st[curr] >= k)
    {
        if (s == e)  return s;
        else
        {   ll mid = s + (e - s) / 2;
            if (st[2 * curr + 1] >= k and mid >= l)
            { 
                if(query_ans(s, mid, 2 * curr + 1, k, l, r)>=l)return query_ans(s, mid, 2 * curr + 1, k, l, r);
                else return query_ans(mid + 1, e, 2 * curr + 2, k, l, r);
            }
            else
            {
                query_ans(mid + 1, e, 2 * curr + 2, k, l, r);
            }
        }
    }
    else return -1;
}
void solve()
{
    ni2(n, m);
    rep(i, 0, n, 1) cin >> val[i];

    build_tree(0, n - 1, 0);

    w(m)
    {
        ni1(qq);
        if (qq == 1)
        {
            ni2(i, v);
            val[i] = v;
            update_tree(0, n - 1, 0, i);
        }
        else
        {
            ni2(x, l);
            cout << query_ans(0, n - 1, 0, x, l, n - 1) << endl;
        }
    }
}

int main()
{
    fast();
    solve();
    khatam;
}