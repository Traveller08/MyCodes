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
    ni1(n);
    array(val, n);
    vl ans(n, 0);
    mll frq;
    rep(i, 0, n, 1) frq[val[i]]++;
    bool vis[n + 1] = {};
    rep(i, 0, n, 1)
    {
        if ((frq[val[i]] == 1 )and i + 1 != val[i])
        {
            ans[i] = val[i];
            vis[val[i]] = true;
        }
     }
    // //print(ans);
    // vl rem;
    // mll ck1;
    // rep(i,1,n+1,1){
    //     if(frq[i]==0)ck1[i]++;
    // }
    //  rep(i, 0, n, 1)
    // {
    //     if (ans[i] == 0)
    //     {

    //         for (auto x : ck1)
    //         {
    //             if (x.first != i + 1)
    //             {
    //                 ans[i] = x.first;
    //                 auto it = ck1.find(x.first);
    //                 vis[x.first]=true;
    //                 ck1.erase(it);
    //               //  cout<<ans[i]<<" "<<i<<" "<<endl;;
    //                 break;
    //             }
    //             else continue;
    //         }
    //     }
    // }
   
     map<int, int> ck;
  
    rep(i, 1, n + 1, 1)
    {
        if (!vis[i])
            ck[i]++;
    }
   
   
  
    
    rep(i, 0, n, 1)
    {
        if (ans[i] == 0)
        {

            for (auto x : ck)
            {
                if (x.first != i + 1)
                {
                    ans[i] = x.first;
                    auto it = ck.find(x.first);
                    ck.erase(it);
                  //  cout<<ans[i]<<" "<<i<<" "<<endl;;
                    break;
                }
                else continue;
            }
        }
    }
  

    // print(ans);
    mll mpp;
    rep(i, 0, n, 1) mpp[ans[i]] = i + 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (val[i] == ans[i])
            continue;
        else
        {
            ll ps = mpp[val[i]];
            if (ps != ans[i] and ans[ps - 1] != i + 1 and ans[ps - 1] == val[i])
            {
                mpp[ans[i]] = ps;
                mpp[ans[ps - 1]] = i + 1;
                swap(ans[i], ans[ps - 1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (val[i] == ans[i])
            continue;
        else
        {
            ll ps = mpp[val[i]];
            if (ps != ans[i] and ans[ps - 1] != i + 1 and ans[ps - 1] == val[i])
            {
                mpp[ans[i]] = ps;
                mpp[ans[ps - 1]] = i + 1;
                swap(ans[i], ans[ps - 1]);
            }
        }
    }
    int ind=-1;
     rep(i,0,n,1){
         vis[ans[i]]=true;
         if(ans[i]==0){ind=i;}
     }
     if(ind!=-1){rep(i,0,n+1,1){  
         if(!vis[i]){ans[ind]=i;break;}
     }}
     rep(i,0,n,1){
         if(ans[i]==i+1){
             if(i>0)swap(ans[i],ans[i-1]);
             else swap(ans[i],ans[i+1]);
         }
     }
    ll cnt = 0;
    rep(i, 0, n, 1)
    {
        if (ans[i] == val[i])
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    print(ans);
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