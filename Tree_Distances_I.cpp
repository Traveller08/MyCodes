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
vl adj[siz1];
bool vis[siz1]={};
int dis[siz1]={};
void dfs(int v){
   
    vis[v]=true;
    for(auto x:adj[v]){
        if(!vis[x]){
             dis[x]=dis[v]+1;
            dfs(x);
           
        }
    }
}


void solve()
   {
       ni1(n);
       rep(i,0,n-1,1){
          ni2(p,q);
          adj[p].pb(q);
          adj[q].pb(p);
       }
       rep(i,1,n+1,1){
           
      rep(i,0,n+1,1)dis[i]=0,vis[i]=false;
       dfs(i);
  
   //    rep(i,1,n+1,1)cout<<dis[i]<<" ";cout<<endl;
      cout<<*max_element(dis,dis+n+2)<<" ";
       }
   }

int main(){
   fast();
  solve();
   khatam; 
}