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
#define print(x) for(auto ele:x)cout<<ele<<" ";cout<<endl;
#define printp(x)  for(auto ele:x)cout<<ele.firs<<'	'<<ele.second<<endl;
#define mod 1000000007
#define siz1 200005
#define siz2 1000005
#define khatam return 0
#define all(x) x.begin(),x.end()
typedef vector<ll> vl;
typedef vector<pair<ll,ll>> vll;
typedef unordered_map<ll,ll> ull;
typedef map<ll,ll> mll;
vl factor[200005];
ll dp[200005];
void all_factors()
{
   rep(i,1,200005,1)
   {   factor[i].pb(1);
       for(ll j=2;j*j<=i;j++)
       {
           if(i%j==0)
           {
               if(i/j!=j)factor[i].pb(j),factor[i].pb(i/j);
               else factor[i].pb(j);
           }
       }
       sort(all(factor[i]),greater<ll>());
   }
}
void dfs(ll v,vl &freq)
{
    dp[v]=freq[v];
    if(freq[v]==0)return;
    for(auto x:factor[v])
    {
         if(freq[x]>0)dp[x]=getmax(dp[v]+freq[x],dp[x]);
    }
}

void solve()
   {
       ni1(n);
       array(val,n);
       sort(all(val),greater<ll>());
       ll siz=*max_element(all(val));
       vl freq(siz+1,0);
       rep(i,0,200005,1)dp[i]=1;
       rep(i,0,n,1)freq[val[i]]++;
       rep(i,0,n,1)
       {
           dfs(val[i],freq);
       }
     cout<<n-*max_element(dp,dp+siz+1)<<endl;
   }
int main(){
   fast();
   all_factors();
  
   ni1(t);
       w(t)
       {
          solve();
       }
   khatam; 
}