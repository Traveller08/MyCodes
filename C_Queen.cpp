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
vl adj[400005];
bool vis[400005]={};
vl ans;
ll marked[400005]={};
void dfs(ll v,ll rt)
{
    vis[v]=true;
  //  if(v!=rt and marked[v]==1 and adj[v].size()==0)ans.pb(v);
    for(auto x:adj[v])
    {
        if(!vis[x])
        {   bool found=0;
            for(auto y:adj[x])
             {
            if(marked[y]!=1){
                found=true;
            }
           
             }
           if(!found and marked[x]==1)ans.pb(x);
            dfs(x,rt);
        }
    }
}
void solve()
   {
       ni1(n);
       ll root_node=0;
       rep(i,0,n,1)
       {
           ni2(p,c);
           if(p!=-1)
           {
               adj[p].pb(i+1);
           }
           else 
           {
               root_node=i+1;
           }
           if(c==1)marked[i+1]=1;
       }
       dfs(root_node,root_node);
     //  cout<<root_node<<endl;
     sort(all(ans));
      if(ans.size()==0)cout<<-1<<endl;
      else print(ans);
   }

int main(){
   fast();
  solve();
   khatam; 
}