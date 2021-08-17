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
#define mk -2e16
#define new_int_4(a,b,c,d) ll a,b,c,d;cin>>a>>b>>c>>d
#define new_int_6(a,b,c,d,e,f) ll a,b,c,d,e,f;cin>>a>>b>>c>>d>>e>>f
#define new_str(s) string s;cin>>s
ll store[2000002];

ll prizeMinimiser(ll no[],ll dis[],ll m,ll par)
{ 
   if(par==0)
    return 0;
  else if(par!=0 && m==0)
     return mk;
     if(store[m]>=0)
    return store[m];
  if(par>=no[m-1])
  {
       store[m]=max(dis[m-1]+prizeMinimiser(no,dis,m-1,par-no[m-1]),prizeMinimiser(no,dis,m-1,par));
  }
  else store[m]=prizeMinimiser(no,dis,m-1,par);
  return store[m];
}
int main(){
 fast();
memset(store,-1,sizeof(store));
  new_int_2(n,m);
  ll arr[n];
  ll sum=0;
  rep(i,0,n)
  {
    cin>>arr[i];
    sum+=arr[i];
  }
  ll no[m],dis[m];
  rep(i,0,m)
  {
      cin>>no[i]>>dis[i];
  }
  ll par=n;
  cout<<sum-prizeMinimiser(no,dis,m,par)<<endl; 
   //rep(i,0,m)cout<<no[i]<<" "<<dis[i]<<endl;
  
 return 0;
}