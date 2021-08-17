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
bool vis[30005]={};
vector<ll>adj[30005];
bool ans=0;
void dfs(ll st,ll en)
{
     vis[st]=true;
    bool found=0;
    for(auto x : adj[st])
    {
      if(!vis[x])
      { 
       if(x>en)return;
       if(x==en)
       {
           found=true;
           break;
       }
     //  cout<<x<<" "<<en<<endl;
     
         dfs(x,en);
          vis[x]=true;
        
      }
    }
    if(found)
    {
        ans=true;
        return;
    }
 
}
int main(){
 fast();
 new_int_2(n,t);
   rep(i,0,n){
     ll am;
     cin>>am;
     adj[i+1].push_back(am+i+1);
     adj[am+i+1].push_back(i+1);
   }
 dfs(1,t);
 if(ans==true)cout<<"YES"<<endl;
 else cout<<"NO"<<endl;
 
 return 0;
}