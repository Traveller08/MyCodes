/*************************************************************
** Kisi ka solution nahi dekhte jake khud se try karo **
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
ll dyp(ll no[],ll dis[],ll n,ll m)
{  
    ll dp[2][n+1];
    mem0(dp);
    
    for(ll i=0;i<m;i++)
    {  if(i%2!=0)
       {
           for(ll j=1;j<=n;j++)
           {
               if(no[i]<=j)
               {
                   dp[1][j]=max(dis[i]+dp[0][j-no[i]],dp[0][j]);
               }
               else dp[1][j]=dp[0][j];
           }
       }
       else
       {
           for(ll j=1;j<=n;j++)
           {
              if(no[i]<=j)
                dp[0][j]=max(dis[i]+dp[1][j-no[i]],dp[1][j]);
              else dp[0][j]=dp[1][j];
           }
       }
     
      
       
    }
    rep(i,0,n+1)cout<<dp[0][i]<<" ";cout<<endl;
     rep(i,0,n+1)cout<<dp[1][i]<<" ";

  if(n%2!=0)return dp[0][n];
  else return dp[1][n];
  
}
int main(){
 fast();
 new_int_2(n,m);
 ll arr[n];
 ll no[m],dis[m];
 ll sum=0;
 rep(i,0,n)
 {
     cin>>arr[i];
     sum+=arr[i];
 }
 rep(i,0,m)
 {
 cin>>no[i]>>dis[i];
 }
 cout<<sum-dyp(no,dis,n,m)<<endl;
 return 0;
}