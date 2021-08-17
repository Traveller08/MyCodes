/*************************************************************
** AUTHOR : ANKIT CHAUDHARY **
*************************************************************/
#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll int
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
ll dp[4001][4001];
ll subset(ll (&val[]),ll n,ll k,ll ha,ll hb)
{
    if(ha>=k && hb>=k)return n;
    else if(ha>=k && hb<k)return -1e10;
    if(n<0)return -1e10;
     if(dp[n][ha]!=-1)return dp[n][ha];
    return dp[n][ha]=max(subset(val,n-1,k,ha+val[n-1],hb),subset(val,n-1,k,ha,hb+val[n-1]));
}
int main(){
 fast();
new_int_1(t);
  w(t){
      new_int_2(n,k);
      array(val,n);
      sort(val,val+n);
      memset(dp,-1,sizeof(dp));
      ll ans=subset(val,n,k,0,0);
      if(ans<0)cout<<-1<<endl;
      else cout<<n-ans<<endl;
 }
 return 0;
}