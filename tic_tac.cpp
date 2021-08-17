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
int mat[1000][1000] = {};
 moved[1000][1000]={};
string ck(int k, int n, int m)
{
    bool found = 0;
    int ind = 0;
    ll maxm1=INT_MAX,maxm2=INT_MAX;
    rep(i, 0, n - k + 1, 1)
    {
        rep(j, 0, m - k + 1, 1)
        {
            if(mat[i][j]==1){
                ll temp_max=-1;
                bool temp=0;

                 rep(ii,i,i+k,1){
                     rep(jj,j,j+k,1){
                         if(mat[ii][jj]==1){
                             temp_max=max(temp_max,moved[ii][jj]);
                         }
                         else{
                             temp=true;
                             break;
                         }
                     }
                     if(temp)break;
                 }
                 if(!temp and temp_max!=-1){
                     maxm1=min(maxm1,temp_max);
                 }
            }
            else if(mat[i][j]==2){
                    ll temp_max=-1;
                   bool temp=0;

                 rep(ii,i,i+k,1){
                     rep(jj,j,j+k,1){
                         if(mat[ii][jj]==2){
                             temp_max=max(temp_max,moved[ii][jj]);
                         }
                         else{
                             temp=true;
                             break;
                         }
                     }
                     if(temp)break;
                 }
                 if(!temp and temp_max!=-1){
                     maxm2=min(maxm2,temp_max);
                 }
            }
        }
    }
    
    //  cout<<ind<<endl;
    if(maxm1<maxm2)return "Alice";
    else if(maxm2<maxm1)return "Bob";
    else return "Draw";
    
}
void solve()
{
    ni3(n, m, k);
    string ans;
    bool found = 0;
    rep(i, 0, n * m, 1)
    {
        ni2(x, y);
        if (i % 2 == 0)
            mat[x - 1][y - 1] = 1;
        else
            mat[x - 1][y - 1] = 2;
        moved[x-1][y-1]=i+1;
    }
    cout<<ck(k,n,m)<<endl;
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