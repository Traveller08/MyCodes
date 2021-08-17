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
      vector<pair<ll,pair<ll,bool>>>vt;
      rep(i,0,n)
      {
          ll a;
          cin>>a;
          vt.push_back(make_pair(a,make_pair(i+1,false)));
      }
      vector<pair<ll,ll>>ans;
      bool found=0;
      for(auto it=vt.begin();it!=vt.end();++it)
      {
          for(auto itr=vt.begin();itr!=vt.end();++itr)
          {
              if(it->first!=itr->first  && itr->second.second==false)
           {
               ans.push_back(make_pair(it->second.first,itr->second.first));
              it->second.second=true;
               itr->second.second=true;
               break;
           }
          }
      }
      //if(ans.size()!=n-1)cout<<"NO"<<endl;
     // else
      {
          cout<<"YES"<<endl;
          for(auto it=ans.begin();it!=ans.end();++it)
          {
              cout<<it->first<<" "<<it->second<<endl;
          }
      }
 }
 return 0;
}