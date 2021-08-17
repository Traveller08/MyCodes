#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define pf push_front
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define mem0(a) memset(a,0,sizeof(a))
#define w(t) while(t--)
#define array(arr,n) ll arr[n];rep(i,0,n)cin>>arr[i];
#define new_int_1(t) ll t;cin>>t;
#define new_int_2(a,b) ll a,b;cin>>a>>b
#define new_int_3(a,b,c) ll a,b,c;cin>>a>>b>>c
#define new_int_4(a,b,c,d) ll a,b,c,d;cin>>a>>b>>c>>d
#define new_int_6(a,b,c,d,e,f) ll a,b,c,d,e,f;cin>>a>>b>>c>>d>>e>>f
#define new_str(s) string s;cin>>s
bool vis[100001]={};
vector<ll>adj[100001];
void bfs(ll v)
{
   queue<ll>q;
   q.push(v);
   vis[v]=true;
  
   while (!q.empty())
   {   
      ll v=q.front();
      cout<<v<<endl;
      q.pop();
      vis[v]=true;
      for(auto x : adj[v])
      {  
          if(!vis[x])
          { // cout<<x<<endl;
              q.push(x);
          }
      }
   }
   
}
int main(){
 fast();
 new_int_2(n,m);
 
 rep(i,0,m)
 {
     new_int_2(x,y);
     adj[x].push_back(y);
     adj[y].push_back(x);
 }
  for(ll i=1;i<=n;i++)
  {
      if(!vis[i])bfs(i);
  }


 return 0;
}