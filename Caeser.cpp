#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pf push_front
#define rep(i,a,b,k) for(ll i=a;i<b;i+=k)
#define rept(i,a,b) for(auto i=a;i!=b;++i)
#define drep(i,a,b,k) for(ll i=a;i>=b;i--)
#define mem0(a) memset(a,0,sizeof(a))
#define w(t) while(t--)
#define array(arr,n) vector<ll>arr(n);for(ll i=0;i<n;i++)cin>>arr[i];
#define ni1(t) ll t;cin>>t;
#define ni2(a,b) ll a,b;cin>>a>>b
#define ni3(a,b,c) ll a,b,c;cin>>a>>b>>c
#define ni4(a,b,c,d) ll a,b,c,d;cin>>a>>b>>c>>d
#define ni5(a,b,c,d,e) ll a,b,c,d,e;cin>>a>>b>>c>>d>>e
#define ni6(a,b,c,d,e,f) ll a,b,c,d,e,f;cin>>a>>b>>c>>d>>e>>f
#define ns(s) string s;cin>>s
#define getmax(a,b) a>b?a:b
#define getmin(a,b) a<b?a:b
#define print(x) for(auto ele:x)cout<<ele<<'	';cout<<endl;
#define printp(x)  for(auto ele:x)cout<<ele.firs<<'	'<<ele.second<<endl;
#define mod 100000000
#define siz1 200005
#define siz2 1000005
#define khatam return 0
#define all(x) x.begin(),x.end()
typedef vector<ll> vl;
typedef vector<pair<ll,ll>> vll;
typedef unordered_map<ll,ll> ull;
typedef map<ll,ll> mll;
ll ki,kj;
ll dp[101][101][11][11];
ll total_no_ways(ll n1,ll n2,ll k1,ll k2)
{
    if(n1+n2==0)return 1;
    if(dp[n1][n2][k1][k2]!=-1)return dp[n1][n2][k1][k2];
    ll x=0,y=0;
   if(n1>0 and k1>0) x=total_no_ways(n1-1,n2,k1-1,kj);
    if(n2>0 and k2>0 )y=total_no_ways(n1,n2-1,ki,k2-1);
   return dp[n1][n2][k1][k2]=(x+y)%mod;
}

void solve()
   {
       ni4(n1,n2,k1,k2);
       ki=k1,kj=k2;
       memset(dp,-1,sizeof(dp));
       cout<<total_no_ways(n1,n2,k1,k2)<<endl;
   }

int main(){
   fast();
  solve();
   khatam; 
}