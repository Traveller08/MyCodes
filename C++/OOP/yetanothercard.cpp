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
 new_int_2(n,q);
 set<pair<ll,ll>>arr;
 
 rep(i,1,n+1)
 {
    ll c;cin>>c;
    arr.insert({i,c});
 }
 ll s=1;
 while (q--)
 { s--;
     new_int_1(r);
     ll index=0;
     auto itr=arr.begin();
     ll count=0;
      for(auto it=arr.begin();it!=arr.end();++it)
      {   count++;
          if(it->second==r)
          {
              itr=it;
              break;
          }
      }
      
      
     cout<<(count)<<" ";
      ll a=itr->second;
       //   for(auto it=arr.begin();it!=arr.end();++it)cout<<it->second<<" ";cout<<endl;
    arr.insert({s,a});
    arr.erase(itr);
    //   for(auto it=arr.begin();it!=arr.end();++it)cout<<it->second<<" ";cout<<endl;
   
    
 }
 cout<<endl;
 
 return 0;
}