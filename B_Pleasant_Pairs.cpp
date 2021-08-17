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
       ni1(n);
       array(val,n);
       ll cnt=0;
       vector<pair<ll,ll>> adj[2*n+1];
       rep(i,0,n,1){
          for(ll j=val[i];j<=2*n;j+=val[i]){
           //    cout<<j<<" "<<val[i]<<endl;
              adj[j].pb(mp(val[i],i+1));
          }
       }
    //    rep(i,1,6*n+1,1){
    //      cout<<i<<" : "<<endl;
    //      for(auto x:adj[i])cout<<x.first<<" "<<x.second<<endl;
    //    }
       rep(i,1,2*n+1,1){
           ll m=adj[i].size();
          if(m>=2){ for(ll j=0;j<m;j++){
               for(ll k=j+1;k<m;k++){
                   if(adj[i][j].first*adj[i][k].first==adj[i][j].second+adj[i][k].second and adj[i][j].second+adj[i][k].second==i){
                     //  cout<<i<<endl;
                      // cout<<adj[i][j].first*adj[i][k].first<<" "<<adj[i][j].second+adj[i][k].second<<endl;
                       cnt++;}
               }
           }}
       }
       //cout<<endl;
//     rep(i,0,n,1)
// {
//     for(ll j=0;j<i;j++){
//         if(val[i]*val[j]==i+j+2)cout<<val[i]*val[j]<<" "<<i+j+2<<endl;
//     }
     cout<<cnt<<endl;
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