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
    ni2(n, k);
    ll sz=n;
    deque<ll> pw;
    w(n)
    {
        ni1(p);
        pw.pb(p);
    }
    vl ans(sz + 1, 0);
    bool found = 0;
    ll maxm = 0;
 //   for(auto it=pw.begin();it!=pw.end();++it)cout<<*it<<" ";cout<<endl;
     ll pre = pw.front();
        pw.pop_front();
        ll sec = pw.front();
        pw.pop_front();
    //      for(auto it=pw.begin();it!=pw.end();++it)cout<<*it<<" ";cout<<endl;
    while (1)
    {
     //    for(auto it=pw.begin();it!=pw.end();++it)cout<<*it<<" ";cout<<endl;
      
        if (pre > sec)
        { // cout<<ans[pre]<<endl;
           // cout << pre << " " << sec << endl;
            pw.push_front(pre);
             pw.push_back(sec);
             ans[pre]++;
            ans[sec] = 0;
            
            if (ans[pre] >= k)
            {
                maxm = pre;
                break;
            }
        }

        else
        {
            pw.push_front(sec);
             pw.pb(pre);
              ans[sec]++;
                ans[pre] = 0;
            if (ans[sec] >= k){
          
            maxm = sec;
            break;
            }
        }
         pre = pw.front();
        pw.pop_front();
         sec = pw.front();
        pw.pop_front();
    }
  // pw.push_front(10);
   //  for(auto it=pw.begin();it!=pw.end();++it)cout<<*it<<" ";cout<<endl;
   cout << maxm << endl;
}

int main()
{
    fast();
    solve();
    khatam;
}