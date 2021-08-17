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


 new_int_1(n);
 map<ll,vector<ll>>mp;
 for(ll i=0;i<2*n;i++)
 {
    ll a;cin>>a;
    mp[a].push_back(i+1);

 }

 bool flag=0;
 vector<pair<ll,ll>>ans;
 for(auto it=mp.begin();it!=mp.end();++it)
 {
     if(it->second.size()%2!=0)
     {
         flag=1;
         break;
     }
     else 
     { ll m=it->second.size();
        vector<ll>copy=it->second;
         for(ll j=0;j<m;j+=2)
         {
               
            ans.push_back(make_pair(copy[j],copy[j+1]));
         }
        
     }
 }
     if(flag)cout<<-1<<endl;
     else 
     {  // cout<<ans.size()<<" "<<endl;;
         for(auto it=ans.begin();it!=ans.end();++it)
         {
             cout<<it->first<<" "<<it->second<<endl;
         }
     }

 
 return 0;
}