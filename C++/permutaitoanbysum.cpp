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
bool dp[501][125251]={};
ll dp0[501][125251]={};
bool dpsum(ll n,ll s,ll total)
{//   if(dp0[n][s]>=1)return dp[n][s];
    if(n==0 && s==0 && total>=0)
    return true;
    if(total<0  )return false;
    if(n==0 && s!=0)
    return false;
    if(n!=0 && s==0)
    return false;
    if(total<=s){ 
         dp0[n][s]++;
      return  dp[n][s]= dpsum(n-1,s-total,total-1,a) | dpsum(n,s,total-1,a);
       
        }
    else if(total>s){ 
         dp0[n][s]++;
    return    dp[n][s]=dpsum(n,s,total-1);
       }

}
int main(){
 fast();

new_int_1(t);
  w(t){
      new_int_4(n,l,r,s);
      ll no=r-l+1;
      vector<ll>a;
      if(dpsum(no,s,n,a))cout<<"yes"<<endl;
      else cout<<"NO"<<endl;
 }
 return 0;
}