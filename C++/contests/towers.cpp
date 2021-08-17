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
ll op(pair<ll,ll>a,pair<ll,ll>b){return a.first>b.first;}
int main(){
 fast();
new_int_1(t);
  w(t){
      new_int_3(n,m,x);
      vector<pair<ll,ll>>hi;
      rep(i,0,n)
      {
          ll lk;
          cin>>lk;
          hi.push_back(make_pair(lk,i));
      }
      ll ans[m]={};
      sort(hi.begin(),hi.end(),op);
     ll pos[n]={};
      rep(i,0,n)
      {
          if((i/m)%2==0)
          {
              ans[i%m]+=hi[i].first;
              pos[hi[i].second]=i%m;
          }
          else
          { 
             ans[m-(i%m)-1]+=hi[i].first;
             pos[hi[i].second]=m-(i%m)-1;
          }
      }
      bool found=0;
      ll minm=INT_MAX;
      ll maxm=INT_MIN;
      rep(i,0,m)
      {
          minm=min(ans[i],minm);
          maxm=max(ans[i],maxm);
      }
      if((maxm-minm)<=x)
      {
          cout<<"YES"<<endl;
          rep(i,0,n)cout<<pos[i]+1<<" ";cout<<endl;
      }
      else cout<<"NO"<<endl;
      //cout<<ak<<endl;
     
 }
 
 return 0;
}