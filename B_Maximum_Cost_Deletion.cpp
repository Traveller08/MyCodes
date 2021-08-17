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
       ni3(n,a,b);
       ns(s);
       if(a>=0 and b>=0)cout<<n*(a+b)<<endl;
       else if(a<0 and b>=0)cout<<n*(a+b)<<endl;
       else 
       {
               vl pos1,pos0;
               ll cnt0=0,cnt1=0;
               rep(i,0,n,1){
                    if(s[i]=='0'){
                         cnt0++;
                         if(cnt1>0)pos1.pb(cnt1),cnt1=0;
                    }
                    else {
                       cnt1++;
                       if(cnt0>0)pos0.pb(cnt0),cnt0=0;
                    }
               }
                if(cnt1>0)pos1.pb(cnt1),cnt1=0;
                 if(cnt0>0)pos0.pb(cnt0),cnt0=0;
             //    print(pos0);
            //     print(pos1);
                 ll sum1=0,sum2=0;
                 rep(i,0,pos0.size(),1)sum1+=pos0[i];
                 rep(i,0,pos1.size(),1)sum2+=pos1[i];
                 ll ans1=a*sum1+b;
                 ll ans2=a*sum2+b;
                 rep(i,0,pos1.size(),1){
                     ans1+=(pos1[i]*a+b);
                 }
                 rep(i,0,pos0.size(),1)ans2+=(pos0[i]*a+b);
                 cout<<max(ans1,ans2)<<endl;
           
       }
   }

int main(){
   fast();
   ni1(t);
       w(t)
       {
          solve();
       }
   khatam; 
}