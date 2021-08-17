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
typedef pair<ll,ll>pll;

void solve()
   {
       ni2(n,m);
       vector<pll> adj[n+1];
    vl path(n+1,-1);
    vl  dis(n+1,100000000000);
    bool vis[n+1]={};
       rep(i,0,m,1){
           ni3(l,r,w);
             adj[l].pb(mp(r,w));
             adj[r].pb(mp(l,w));
                }
            dis[1]=0;
        priority_queue<pll,vector<pll>,greater<pll>>pq;
        pq.push(mp(0,1));
        while(!pq.empty()){
            ll v=pq.top().second;pq.pop();
              if(!vis[v]) {
                  vis[v]=true;
                   for(auto x:adj[v]){
                    ll b=x.first,w=x.second;
                    if(dis[b]>w+dis[v]){
                        dis[b]=dis[v]+w;
                        path[b]=v;
                        pq.push(mp(dis[b],b));
                    }
                    }
                }
        }
      vl ans;
      ll i=n;
    //  cout<<dis[n]<<endl;
   //   rep(i,0,10,1)cout<<path[i]<<" ";cout<<endl;
      while(path[i]!=-1){
          ans.pb(i);
          i=path[i];
      }
       bool found=0;
       if(i!=1)found=true;
       ans.pb(1);
       reverse(all(ans));
       if(found)cout<<-1<<endl;
       else {
           print(ans);
       }

   }

int main(){
   fast();
   solve();
   khatam; 
}