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
#define mod 1000000007
#define siz1 200005
#define siz2 1000005

#define khatam return 0
#define all(x) x.begin(),x.end()
typedef vector<ll> vl;
typedef vector<pair<ll,ll>> vll;
typedef unordered_map<ll,ll> ull;
typedef map<ll,ll> mll;
ll sz,k,siz,k2;
ll max_sum(ll n,ll sum,vl &val,vl &rem,ll tk)
{  
     if(n==0 and (sz <tk or sum%k!=0 ))return INT_MIN;
     if(n==0 and sum%k==0 and tk<=sz )return 0;
     if(n%k2==0 and tk>sz)return INT_MIN;
      if(n%k2==0 and tk<=sz)tk=0;
    //  if((sum+rem[n-1])%k==0)return val[n-1]+max_sum(n-1,sum+rem[n-1],val,rem,tk+1);
       return max(val[n-1]+max_sum(n-1,sum+rem[n-1],val,rem,tk+1),max_sum(n-1,sum,val,rem,tk));
      
}
void solve()
   {
      ni4(n,k1,s,k3);
      sz=s;k=k1,siz=n,k2=k3;
      array(val,n);
       vl rem(n,0);
        rep(i,0,n,1){
            rem[i]=val[i]%k1;
        }
    cout<<max_sum(n,0,val,rem,0)<<endl;
   }

int main(){
   fast();
 solve();
   khatam; 
}