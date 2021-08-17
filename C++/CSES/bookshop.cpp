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
ll minprice(ll val[],ll no[],ll n,ll x)
{
    ll dp[2][x+1];
    memset(dp,0,sizeof(dp));
    rep(i,1,n+1)
    {
        rep(j,1,x+1)
        {
         if(i%2!=0)  {if(val[i-1]<=j)dp[1][j]=max(no[i-1]+dp[0][j-val[i-1]],dp[0][j]);
           else dp[1][j]=dp[0][j];}
            else if(i%2==0) {if(val[i-1]<=j)dp[0][j]=max(no[i-1]+dp[1][j-val[i-1]],dp[1][j]);
           else dp[0][j]=dp[1][j];}
        }
    }
  
    
       return (n%2!=0)?dp[1][x]:dp[0][x];
    
 
}
int main(){
 fast();

 new_int_2(n,x);
 array(val,n);
 array(no,n);
cout<<minprice(val,no,n,x)<<endl;
 return 0;
}