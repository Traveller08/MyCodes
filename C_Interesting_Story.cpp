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
typedef pair<ll,ll>pll;
#define x first
#define y second
void solve()
{
    ni1(n);
    vector<string> val(n);
    rep(i, 0, n, 1) cin >> val[i];
    vector<pll>v1,v2,v3,v4,v5;
    rep(i, 0, n, 1)
    {
        ll cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0, cnt5 = 0;
        for (auto c : val[i])
        {
            if (c == 'a')
                cnt1++;
            if (c == 'b')
                cnt2++;
            if (c == 'c')
                cnt3++;
            if (c == 'd')
                cnt4++;
            if (c == 'e')
                cnt5++;
        }
      v1.pb(mp(cnt1,val[i].length()));
        v2.pb(mp(cnt2,val[i].length()));
        v3.pb(mp(cnt3,val[i].length()));
        v4.pb(mp(cnt4,val[i].length()));
        v5.pb(mp(cnt5,val[i].length()));
    }
    sort(all(v1));
    reverse(all(v1));
    sort(all(v2));
    reverse(all(v2));
    sort(all(v3));
    reverse(all(v3));
    sort(all(v4));
    reverse(all(v4));
    sort(all(v5));
    reverse(all(v5));
    ll mx = 0, curr1 = 0,curr2=0,cnt3=0;
    ll m=v1.size();
    rep(i,0,m,1){
      curr1+=abs(v1[i].x);
      curr2+=(v1[i].y-abs(v1[i].x));
      if(curr1>curr2){
          cnt3++;
      }
      else break;
      mx=max(cnt3,mx);
    }
    curr1 = 0,curr2=0,cnt3=0;
     m=v2.size();
    rep(i,0,m,1){
      curr1+=abs(v2[i].x);
      curr2+=(v2[i].y-abs(v2[i].x));
      if(curr1>curr2){
          cnt3++;
      }
      else break;
      mx=max(cnt3,mx);
    }
     curr1 = 0,curr2=0,cnt3=0;
     m=v3.size();
    rep(i,0,m,1){
      curr1+=abs(v3[i].x);
      curr2+=(v3[i].y-abs(v3[i].x));
      if(curr1>curr2){
          cnt3++;
      }
      else break;
      mx=max(cnt3,mx);
    }
      curr1 = 0,curr2=0,cnt3=0;
     m=v4.size();
    rep(i,0,m,1){
      curr1+=abs(v4[i].x);
      curr2+=(v4[i].y-abs(v4[i].x));
      if(curr1>curr2){
          cnt3++;
      }
      else break;
      mx=max(cnt3,mx);
    }
     curr1 = 0,curr2=0,cnt3=0;
     m=v5.size();
    rep(i,0,m,1){
      curr1+=abs(v5[i].x);
      curr2+=(v5[i].y-abs(v5[i].x));
      if(curr1>curr2){
          cnt3++;
           mx=max(cnt3,mx);
      }
      else break;
     
    }
  
    cout<<mx<<endl;
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