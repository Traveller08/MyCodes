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

bool subsetsum(ll arr[],ll n,ll sum){
  //  cout<<n<<endl<<sum<<endl;
    bool dp[n+1][sum+1];
   for(ll i=0;i<=n;i++)dp[i][0]=true;
   for(ll i=1;i<=sum;i++)dp[0][i]=false;
   for(ll i=1;i<=n;i++){
       for(ll j=1;j<=sum;j++){
           if(j<arr[i-1])dp[i][j]=dp[i-1][j];
           if(j>=arr[i-1])dp[i][j]=dp[i-1][j] || dp[i-1][j-arr[i-1]];
       }
   }  
  
       rep(i,0,n+1){
         rep(j,0,sum+1){
             cout<<dp[i][j]<<" ";
         }
         cout<<endl;}
     return dp[n][sum];
}
int main(){
 fast();

new_int_1(t);
 array(arr,t);
 new_int_1(sum);
 bool a=subsetsum(arr,t,sum);
 return 0;
}