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
#define md 1000000007
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
 ll arr[n+1];
 arr[0]=0;
 rep(i,1,n+1)cin>>arr[i];
 rep(i,1,n+1)
 {
     
  arr[i]=((arr[i]%md)*(arr[i]%md));
     }
 rep(i,1,n+1)
 {
     
  arr[i]+=(arr[i-1]%md);
     }
//rep(i,0,n+1)cout<<arr[i]<<" ";
  stack<pair<ll,ll>>store;
  store.push(make_pair(0,0));
  w(q)
  {
      new_int_3(p,l,r);
      if(p==1)
      {
          cout<<arr[r]-arr[l-1]<<endl;
      }
      else if(p==2)
      {
          ll dif=arr[l]-arr[l-1];
          ll newsq=(r*r)%md-dif;
          
      }
  } 
 
 return 0;
}