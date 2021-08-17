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
ll dp[5005][75][75];
ll sz,k,siz,k2;
ll max_sum(ll n,ll sum,vl &val,vl &rem,ll tk)
{  
   if(dp[n][tk][sum]!=-1)return dp[n][tk][sum];
   
       if(n==0 and (sz <tk or sum%k!=0 ))return INT_MIN;
     if(n==0 and sum%k==0 and tk<=sz )return 0;
     if(n%k2==0 and tk>sz)return INT_MIN;
      if(n%k2==0 and tk<=sz)tk=0;
    //   vis[n]=true;
     // if((sum+rem[n-1])%k==0)return val[n-1]+max_sum(n-1,sum+rem[n-1],val,rem,tk+1);
       return dp[n][tk][sum]=max(val[n-1]+max_sum(n-1,(sum+rem[n-1])%k,val,rem,tk+1),max_sum(n-1,sum%k,val,rem,tk));     
}
void solve()
   {
      memset(dp,-1,sizeof(dp));
     ni3(n,m,k1);
    k=k1,siz=n*m,sz=m/2,k2=m;
    vl val;
    rep(j,0,n,1)
    {
        array(temp,m);
        sort(all(temp));
        rep(i,0,m,1)val.pb(temp[i]);
    }
  //  print(val);
       vl rem(m*n,0);
        rep(i,0,m*n,1){
            rem[i]=val[i]%k1;
        }
    cout<<max_sum(m*n,0,val,rem,0)<<endl;
  //  rep(i,0,26,1)cout<<dp[i]<<" ";cout<<endl;
   }

int main(){
   fast();
 solve();
   khatam; 
}