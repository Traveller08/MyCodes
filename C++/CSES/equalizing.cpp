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
      new_int_1(n);
      array(arr,n);
      map<ll,ll>mp;
      rep(i,0,n)
      {
          mp[arr[i]]++;
      }
      map<ll,ll>freq;
      for(auto it=mp.begin();it!=mp.end();++it)
      {
          freq[it->second]++;
      }
     ll siz=freq.size();
     ll mul[siz+1]={};
     ll count=0;
     ll index=0;
     for(auto it=freq.begin();it!=freq.end();++it)
     {  index++;
         count+=((it->first)*(it->second));
          mul[index]=count;
          
     }
    // rep(i,0,siz+1)cout<<mul[i]<<" ";cout<<endl;
     ll mindel=INT_MAX;
     ll ind=0;
     for(auto it=freq.begin();it!=(freq.end());++it)
     {  ll temp=mul[ind];
        ll val=it->first;
          for(auto itr=next(it);itr!=freq.end();++itr)
          {
             temp+=((itr->first-val)*(itr->second));
          }
         // cout<<temp<<endl;
          mindel=min(mindel,temp);
          ind++;
     }
     cout<<mindel<<endl;
 }
 return 0;
}