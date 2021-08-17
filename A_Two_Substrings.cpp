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


void solve()
   {
       ns(s);
       bool fo1=0,fo2=0,fo3=0,fo4=0;
       ll ind2=0,ind1=0;
       ll n=s.length();
       rep(i,1,n,1)
       {
           if(s[i]=='B' and s[i-1]=='A')
           {
               ind1=i;
               fo1=true;
               break;
           } 
       }
       rep(i,ind1+1,n,1)
       {
            if(s[i]=='A' and s[i-1]=='B')
           {
              
               fo2=true;
               break;
           } 
       }
        rep(i,1,n,1)
       {
           if(s[i]=='A' and s[i-1]=='B')
           {
               ind2=i;
               fo3=true;
               break;
           } 
       }
       rep(i,ind2+1,n,1)
       {
            if(s[i]=='B' and s[i-1]=='A')
           {
              
               fo4=true;
               break;
           } 
       }
       if((fo1 and fo2) or (fo3 and fo4))cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
   }

int main(){
   solve();
   khatam; 
}