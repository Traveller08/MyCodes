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
       ll n=s.length();
       ll cnt=0;
       bool vis[100]={};
       vl arr(100,0);
       rep(i,0,n,1){
           
            arr[s[i]-'a']++;
       }
       bool found=0;
      cnt=0;
       rep(i,0,n,1){
           if(arr[i]>1){
               found=true;
               break;
           }
           else if(arr[i]==1)cnt++;
           else break;
       }
       if(cnt!=n)found=true;
       if(found)cout<<"NO"<<endl;
       else{
           ll ind=0;
           rep(i,0,n,1){
               if(s[i]=='a'){
                   ind=i;
                   break;
               }
           }
           cnt=0;
           ll i=ind,j=ind+1;
           char curr='a';
           
           while(1){
               bool b1=0,b2=0;
               if(i<0 and j>n-1)break;
               if(i>=0){
                   if(s[i]==curr and !vis[i])vis[i]=true,curr++,i--,cnt++,b1=true;
                
               }
               if(j<=n-1){
                   if(s[j]==curr and !vis[j])vis[j]=true,curr++,j++,cnt++,b1=true;
                   else b2=true;
               }
               if(!b1){
                   if(cnt<n)found=true;
                   break;
               }
               if(cnt==n)break;
           }
           if(found)cout<<"NO"<<endl;
           else cout<<"YES"<<endl;
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