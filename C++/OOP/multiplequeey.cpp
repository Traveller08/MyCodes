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
      new_int_2(n,q);
      array(arr,n);
      ll sum[n+1]={};
      ll apsum[n+1]={};
      rep(i,0,n)
      {
          sum[i+1]=arr[i];
          apsum[i+1]=arr[i];
      }
      ll temp=0;
      rep(i,0,n+1)
      {
         temp+=sum[i];
         sum[i]=temp;
      }
      rep(i,0,n+1)
      {
          apsum[i]*=(i);
      }
      ll temp1=0;
      rep(i,0,n+1)
      {
         temp1+=apsum[i];
         apsum[i]=temp1;
      }
      w(q)
      {
          new_int_2(l,r);
          ll pssum=apsum[r]-apsum[l-1];
          ll sump=sum[r]-sum[l-1];
           sump*=(l-1);
          ll ans=pssum-sump;
          cout<<ans<<endl;
      }
 }
 return 0;
}