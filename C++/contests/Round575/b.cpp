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
        cout << ele <<" "; \
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
    ni2(n, k);
    array(val, n);
    vl st;
    ll curr = 0, sum = 0, sumuntil = 0;
    rep(i, 0, n, 1) sum += val[i];
    if (k == 1)
    {
        if (sum % 2 == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl
                 << n << endl;
    }
    else if(k==2)
    {
        
            ll sum1,sum = 0,curr=0;
            for (ll i = 0; i < n; i++)
                sum1 += val[i];
            if (sum1 % 2 != 0)
            {
                cout << "NO" << endl;
                return;
            }
            else
            {
                for (ll i = 0; i < n; i++)
                {
                    curr += val[i];
                    if (i != n - 1 and curr % 2 != 0 and sum1 % 2 == 0)
                    {
                        st.pb(i + 1);
                        sum++;
                        st.pb(n);
                        sum++;
                        break;
                    }
                }
                if(sum!=k)cout<<"NO"<<endl;
                else 
                {
                    cout<<"YES"<<endl;
                    print(st);
                }
            }
        
    }
    else
    {
        ll sum = 0;
        rep(i, 0, n, 1)
        {
            curr += val[i];
            if (curr % 2 != 0 and sum <= k - 3)
                sum++, curr = 0, st.pb(i + 1);
            else if(curr%2!=0)break;
        }
        if (sum != 0)
        {
            ll ind = st[sum - 1];
            ll sum1 = 0;
            for (ll i = ind; i < n; i++)
                sum1 += val[i];
            if (sum1 % 2 != 0)
            {
                cout << "NO" << endl;
                return;
            }
            else
            {
                curr=0;
                for (ll i = ind; i < n; i++)
                {
                    curr += val[i];
                    if (i != n - 1 and curr % 2 != 0 and sum1 % 2 == 0)
                    {
                        st.pb(i + 1);
                        sum++;
                        st.pb(n);
                        sum++;
                        break;
                    }
                }
                if(sum!=k)cout<<"NO"<<endl;
                else 
                {
                    cout<<"YES"<<endl;
                    print(st);
                }
            }
        }
        else cout<<"NO"<<endl;
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