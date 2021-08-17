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


void solve()
   {
       ni1(n);
       array(val,n);
      
       ll f2=0,t3=0,s6=0,f5=0,e8=0,f4=0;
       ll f2a[n+1]={},t3a[n+1]={},s6a[n+1]={},f5a[n+1]={},e8a[n+1]={},f4a[n+1]={};
       for(ll i=n-1;i>=0;i--)
       {
          if(val[i]==42)f2++;
            f2a[i]=f2;
             if(val[i]==23)t3++;
            t3a[i]=t3;
           if(val[i]==16)s6++;
           s6a[i]=s6;
           if(val[i]==15)f5++;
           f5a[i]=f5;
           if(val[i]==8)e8++;
           e8a[i]=e8;
           if(val[i]==4)f4++;
           f4a[i]=f4;
       }
       rep(i,0,n,1)cout<<f2a[i]<<" ";cout<<endl;
       rep(i,0,n,1)cout<<t3a[i]<<" ";cout<<endl;
        rep(i,0,n,1)cout<<s6a[i]<<" ";cout<<endl;
       rep(i,0,n,1)cout<<f5a[i]<<" ";cout<<endl;
        rep(i,0,n,1)cout<<e8a[i]<<" ";cout<<endl;
       rep(i,0,n,1)cout<<f4a[i]<<" ";cout<<endl;
       ll curr=0,no=0;
    for(ll i=n-1;i>=0;i--)
    {
        if(val[i]==4)
        {
            if(min(f2a[i]-curr,min(t3a[i]-curr,min(s6a[i]-curr,min(f5a[i]-curr,e8a[i]-curr))))>=1)
            {
              
              curr++;
            }
        }
    }
    ll ans=0;
    cout<<curr<<endl;
    ans=n-curr*6;
       
            cout<<ans<<endl;
   }

int main(){
   fast();
   solve();
   khatam; 
}