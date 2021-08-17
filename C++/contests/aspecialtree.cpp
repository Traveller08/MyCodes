/*************************************************************
** AUTHOR : ANKIT CHAUDHARY **
*************************************************************/
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

ll dis[200005]={};
bool vis[200005]={};
void dfs(ll v,vector<ll>adj[])
{
  vis[v]=true;
  for(auto x:adj[v])
  {
      if(!vis[x])
      {
          dfs(x,adj);
          vis[x]=true;
          dis[x]=dis[v]+1;
      }
  }
}
int main(){
 fast();
new_int_1(t);
  w(t){
      vector<ll>adj[200005];
      memset(dis,0,sizeof(dis));
      memset(vis,false,sizeof(vis));
      new_int_3(n,k,a);
      array(f,k);
      ll m=n-1;
      unordered_map<ll,ll>que;
      w(m)
      {
          new_int_2(g,h);
          que[g]++;
          que[h]++;
          adj[g].push_back(h);
          adj[h].push_back(g);
      }
     
      for(auto it=que.begin();it!=que.end();++it)
      {
          dfs(it->first,adj);
      }
      ll aa=*max_element(dis,dis+200005);
      cout<<aa-1<<endl;

 }
 return 0;
}