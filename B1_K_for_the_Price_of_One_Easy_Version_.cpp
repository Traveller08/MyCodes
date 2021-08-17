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
        cout << ele << " "; \
    cout << endl;
#define printp(x)      \
    for (auto ele : x) \
        cout << ele.firs <<" " << ele.second << endl;
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
    ni3(n, p, k);
    array(val, n);
    bool found=0;
    sort(all(val));
    if(val[0]<=p)found=true;
    ll curr = 0;
    if (n == 1)
    {
        if (val[0] <= p)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    else if(!found)cout<<0<<endl;
    else
    {
       vl sum=val;
       rep(i,2,n,1){
           sum[i]+=sum[i-2];
       }
       ll ind=-1,ind1=-1;
       rep(i,0,n,2){
         if(sum[i]>p){
             ind=i;
             break;
         }
       }
       rep(i,1,n,2){
           if(sum[i]>p){
               ind1=i;
               break;
           }
       }
       if(ind==-1 or ind1==-1){
        //   cout<<"this";
           if(n%2==0){
               if(ind1==-1)cout<<n<<endl;
               else{
                   if(val[n-1]+sum[n-2]<=p)cout<<n<<endl;
                   else cout<<n-1<<endl;
               }
           }
           else{
               if(ind==-1)cout<<n<<endl;
               else{
                   if(val[n-1]+sum[n-2]<=p)cout<<n<<endl;
                   else cout<<n-1<<endl;
               }
           }
       }
       else {
               if(sum[ind]>p){
                   ind-=2;
                   if(val[ind+1]+sum[ind]<=p)ind++;
               }
               if(sum[ind1]>p){
                   ind1-=2;
                   if(val[ind1+1]+sum[ind1]<=p)ind1++;
                   }
                   cout<<max(ind,ind1)+1<<endl;

       }
       // print(val);
       // print(sum);
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