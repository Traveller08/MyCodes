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
// vl adj[200006];
// void factors()
// {
//     rep(i,1,200005,1)
//     {
//         rep(j,2*i,200005,i)
//         {
//             adj[j].pb(i);
//         }
//     }
     
// }
void solve()
   {
       ni1(n);
       array(val,n);
    //    sort(all(val));
        mll mpp;
        rep(i,0,n,1)mpp[val[i]]++;
       
       vl dp(200005,0);
     
    //    mpp.clear();
    //  print(dp);
    
       rep(i,1,200005,1)
       { dp[i]+=mpp[i];
           rep(j,2*i,200005,i)
           {
               dp[j]=max(dp[j],dp[i]);
           }
        //ll temp=dp[i];
    //       for(auto x:adj[val[i]])
    //       {
             
    //           if(mpp[x]!=0)
    //           {
    //             temp=max(dp[i],dp[i]+dp[mpp[x]-1]);
              
    //           }
    //           else mpp.erase(x);
            
        //   }
        //     dp[i]=temp;
        //   mpp[val[i]]=i+1;
       }
    //    rep(i,0,100,1)cout<<dp[i]<<" ";cout<<endl;
      //  print(dp);
    //   for(auto it=mpp.begin();it!=mpp.end();++it)cout<<it->first<<" "<<it->second<<endl;
       cout<<n-*max_element(all(dp))<<"\n";
    // rep(i,0,n,1)
    //    {   cout<<val[i]<<" : ";
    //       for(auto x:adj[val[i]])cout<<x<<" ";cout<<endl;
    //    }
          

   }

int main(){
   fast();
 //  factors();
   ni1(t);
       w(t)
       {
          solve();
       }
   khatam; 
}