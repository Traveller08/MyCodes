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
    ni2(n, k);
    array(val, n);
    ll curr_sum = 0;
    rep(i, 0, k, 1) curr_sum += val[i];
    vl sum;
    sum.pb(curr_sum);
    rep(i, k, n, 1)
    {
        curr_sum -= val[i - k];
        curr_sum += val[i];
        sum.pb(curr_sum);
    }
    //   cout<<sum<<endl;
    vl fin_ans;
    bool flag=0;
    for(ll p=0;p<sum.size();p++){
        vl ans;

        bool found = 0;
       
        ll sum1 = 0;
        rep(i, 0, k - 1, 1) sum1 += val[i];
        vl cnt(n + 1, 0);
        ll i = k - 1, j = k - 1;
        while (j < n)
        {

            ll curr = sum[p] - sum1;
          
            if (val[j] == curr)
            {
                ans.pb(val[j]);
                j++;
            }
            else
            {
                ans.pb(curr);
                cnt[j]++;
                if (cnt[j] >=k)
                {
                    found = true;
                    break;
                }
            }
            i++;
            sum1 -= ans[i - k];
           
            sum1 += curr;
        }
        if(!found){
            flag=true;
            fin_ans=ans;
        }
    }
    // cout<<endl;
    if (!flag)
        cout << -1 << endl;
    else
    {
        cout << fin_ans.size() << endl;
        print(fin_ans);
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