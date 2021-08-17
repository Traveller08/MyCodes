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
       ns(s);
       if(n==1 or n==2){
           ll cnt=0;
           rep(i,0,n,1){
               if(s[i]=='G')cnt++;
              
           }
            cout<<cnt<<endl;
       }
       else{
           vl dp(n+1,0);
           rep(i,0,n,1){
               if(i>0){
                     if(s[i]=='G' and s[i-1]=='G')dp[i]=dp[i-1]+1;
                     else if(s[i]=='G' and s[i-1]=='S')dp[i]=1;
                     else if(s[i]=='S' and s[i-1]=='S')dp[i]=-1;
                     else if(s[i]=='S' and s[i-1]=='G')dp[i]=0;
               }
               else if(i==0 and s[i]=='G')dp[i]=1;
               
           }
           vl ps;
           ll cnt=0,curr=0;
           rep(i,0,n,1){
               if(dp[i]>=1)curr=dp[i];
               else {
                   if(dp[i]==0){
                      if(curr>0) ps.pb(curr),cnt++;
                       curr=0;
                       if(i<n-1 and dp[i+1]==-1 and ps.size()>=1)ps.pb(0);
                   }
               }

           }
           if(curr>0)ps.pb(curr),cnt++;
         //  cout<<cnt<<endl;
           if(cnt==0 or cnt==1){
               cout<<(*max_element(all(dp)))<<endl;
           }
           else {
               ll ans=0;
               ll m=ps.size();
               rep(i,1,m,1){
                   if(min(ps[i],ps[i-1])==0){
                         if(cnt>=2)ans=max(ans,ps[i]+ps[i-1]+1);
                       else ans=max(ans,ps[i]+ps[i-1]);
                   }
                   else {
                       if(cnt>2)ans=max(ans,ps[i]+ps[i-1]+1);
                       else ans=max(ans,ps[i]+ps[i-1]);
                   }
               }
              
               cout<<ans<<endl;
           }
        //    cout<<cnt<<endl;
        //    print(ps);
        //    print(dp);
       }
       
   }

int main(){
   fast();
   solve();
   khatam; 
}