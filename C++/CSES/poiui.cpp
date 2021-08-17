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
int main(){
 fast();
new_int_1(t);
  w(t){
   set<pair<ll,pair<ll,ll>>>mp;
      new_int_2(n,m);
    ll arr[n][m];
    rep(i,0,n)
    {
      rep(j,0,m)
      {
        cin>>arr[i][j];
        mp.insert(make_pair(arr[i][j],make_pair(i,j)));
      }
    }
    ll count=0;
    ll ans[n][m];
    memset(ans,-1,sizeof(ans));

    for(auto it=mp.begin();it!=mp.end();++it)
  {  
     if(count==m)break;
      count++;
    
       ll r=it->second.first;
       ll c=it->second.second;
       ans[r][c]=count;
  }
  for(ll i=0;i<n;i++)
  {
    map<ll,ll>pre;
    for(ll j=0;j<m;j++)
    {
      if(ans[i][j]>0)pre[ans[i][j]]++;
    }
    
    for(ll j=0;j<m;j++)
    {
      if(ans[i][j]<0)
      {
        for(ll k=1;k<=m;k++)
        {
          if(pre[k]==0){
            ans[i][j]=k;
            pre[k]++;
            break;
          }
        }
      }
    }

  }
   for(ll i=0;i<n;i++)
   {
     map<ll,ll>st;
     for(ll j=0;j<m;j++)
     {
       st[ans[i][j]]=arr[i][j];
     }
     for(auto it=st.begin();it!=st.end();++it)
     {
       cout<<it->second<<" ";
     }cout<<endl;
   }
     
 }
 return 0;
}