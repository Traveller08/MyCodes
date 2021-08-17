#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define pf push_front
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define mem0(a) memset(a,0,sizeof(a))
#define w(t) while(t--)
#define new_int_1(t) ll t;cin>>t;
#define new_int_2(a,b) ll a,b;cin>>a>>b
#define new_int_3(a,b,c) ll a,b,c;cin>>a>>b>>c
#define new_int_4(a,b,c,d) ll a,b,c,d;cin>>a>>b>>c>>d
#define new_int_6(a,b,c,d,e,f) ll a,b,c,d,e,f;cin>>a>>b>>c>>d>>e>>f
#define new_str(s) string s;cin>>s
ll dp[4001][4001];
void initialise(){
    memset(dp,-1,sizeof(dp));
}
ll exactsum(vector<ll>arr,ll n,ll k){
   if(n==0 || k==0){
       return 0;
   }
   if(dp[n][k]!=(-1)){
       return dp[n][k];
   }
   if(arr[n-1]<=k){
       return dp[n][k]=max(arr[n-1]+exactsum(arr,n-1,k-arr[n-1]),exactsum(arr,n-1,k));
   }
   else if(arr[n-1]>k){
       return dp[n][k]=exactsum(arr,n-1,k);
   }
}
int main(){
 fast();
 initialise();
new_int_1(t);
  w(t){
      new_int_2(n,k);
      vector<ll>arr(n);
      ll sum=0;
      rep(i,0,n){
       cin>>arr[i];
       sum+=arr[i];
      }
      cout<<exactsum(arr,n,k/2)<<endl;
      cout<<arr.size()<<endl;
 }
 return 0;
}