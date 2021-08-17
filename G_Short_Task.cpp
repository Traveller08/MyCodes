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
vector<int> low_prime(10000010, 0);
vl sum_div(10000010,0);
vector<int>ans(10000010,INT_MAX);
void lowest_prime()
{
    low_prime[1] = 1;
    rep(i, 2, 10000010, 1)
    {
        if (low_prime[i] == 0)
        {
            low_prime[i] = i;
            rep(j, i * i, 10000010, i)
            {
                if (low_prime[j] == 0)
                    low_prime[j] = i;
            }
        }
    }
    sum_div[0]=0;
    sum_div[1]=1;
    rep(i,0,10000010,1){
        if(low_prime[i]==i)sum_div[i]=i;
    }
    sum_div[1]=1;
    rep(i,2,10000010,1){
        if(sum_div[i]==i){
         sum_div[i]=i+1;
        }
        else {
           ll j=i;
           sum_div[i]=1;
           while(j%low_prime[i]==0){
               j/=low_prime[i];
               sum_div[i]=sum_div[i]*low_prime[i]+1;
           }
           sum_div[i]*=sum_div[j];
        }
    }
    // rep(i,1,10000010,1)sum_div[i]++;
      //  cout<<"max element  ---> "<<*max_element(all(sum_div));
    rep(i,0,10000010,1)if(sum_div[i]<10000010)ans[sum_div[i]]=ans[sum_div[i]]<i?ans[sum_div[i]]:i;
}


void solve()
{
    ni1(n);
    if(ans[n]==INT_MAX)cout<<-1<<endl;
    else cout<<ans[n]<<endl;
}

int main()
{
    fast();
    lowest_prime();
    ni1(t);
    while(t--)solve();
   // cout<<sum_div[18]<<endl;
    khatam;
}