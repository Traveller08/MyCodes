/*************************************************************
** AUTHOR : ANKIT CHAUDHARY **
*************************************************************/
#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long int
unordered_map<ll,ll>store;
ll maxsum(ll wt[],ll n,ll w){
   ll dp[n+1][w+1];
   for(ll i=0;i<n+1;i++)dp[i][0]=w;
   for(ll i=0;i<w+1;i++)dp[0][i]=w-i;
   for(ll i=1;i<n+1;i++){
       for(ll j=1;j<w+1;j++){
           if(wt[i-1]<=j){
               dp[i][j]=max(dp[i-1][j],dp[i-1][j-wt[i-1]]);
           }
           else dp[i][j]=dp[i-1][j];
       }
   }
   return dp[n][w];
}

int main(){
 fast();
ll w,n;
cin>>w>>n;
ll wt[n];
for(ll i=0;i<n;i++)cin>>wt[i];
 cout<<maxsum(wt,n,w)<<endl;
 return 0;
}