#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll int
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
typedef pair<ll,ll>pll;
vl adj[1000005];
bool vis[1000005]={};
  ll st,end;
  bool found=0;
char mat[1000][1000];

void dfs(ll v){
    vis[v]=true;
    if(v==end){found=true;return;}
    for(auto x:adj[v]){
        if(!vis[x]){
            
            dfs(x);
        }
    }
}
void solve()
   {
       ni2(n,m);
     
       rep(i,0,n,1)rep(j,0,m,1){
           cin>>mat[i][j];
           if(mat[i][j]=='A')st=j*m+i+1;
           if(mat[i][j]=='B')end=j)m+i+1;
           }
         
       
       rep(i,0,n,1){
           rep(j,0,m,1){
               if(mat[i][j]=='.' or mat[i][j]=='A' or mat[i][j]=='B'){
                   if(i!=n-1){if(mat[i+1][j]=='.' or mat[i+1][j]=='A' or mat[i+1][j]=='B')adj[i*m+j+1].pb((i+1)*m+j+1),adj[(i+1)*m+j+1].pb(i*m+j+1);}
                    if(j!=m-1){if(mat[i][j+1]=='.' or mat[i][j+1]=='A' or mat[i][j+1]=='B') adj[m*i+j+1].pb(m*i+j+2),adj[m*i+j+2].pb(m*i+j+1);}    
               }
           }
       }
  
     ll cnt=0;
     rep(i,0,n,1)rep(j,0,m,1)if(mat[i][j]=='.' and !vis[i*m+j+1])cnt++,dfs(i*m+j+1);
     cout<<cnt<<endl;
   }

int main(){
   fast();
 solve();
   khatam; 
}

