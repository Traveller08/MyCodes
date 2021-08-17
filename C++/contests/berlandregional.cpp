#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long int
int main(){
 fast();
 ll t;cin>>t;
  while(t--){
      unordered_map<ll,vector<ll>>mp;
      ll n;cin>>n;
      ll ui[n];
      for(ll i=0;i<n;i++)
      {
          cin>>ui[i];
      }
       ll totalsum=0;
      for(ll i=0;i<n;i++)
      {
          ll a;cin>>a;
          totalsum+=a;
          mp[ui[i]].push_back(a);
      }
     
     vector<ll>post[n+1];
     
      for(auto it=mp.begin();it!=mp.end();++it)
      {  
        sort(it->second.begin(),it->second.end());
         ll pstsum=0;
         post[it->first].push_back(0);
         for(auto itr=it->second.begin();itr!=it->second.end();itr++)
         {
           pstsum+=(*itr);
           post[it->first].push_back(pstsum);
         }
         
      }
   ll ans[n+1]={};
   
   for(ll k=1;k<=n;k++)
   {
       for(ll j=1;j<=n;j++)
       {
         ans[k]+=(post[j][(post[j].size()-1)%k]);
         
       }
   
   }
   for(ll i=1;i<=n;i++)
   cout<<(totalsum-ans[i])<<" ";cout<<endl;
 }
 return 0;
}

for(ll i=0;i<n;i++)
{
    for(ll j=i;j<n;j++)
    {

    }
    for(ll j=i-1;j>=0;j--)
    {

    }
}

