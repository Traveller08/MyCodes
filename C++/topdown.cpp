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
ll dp[1001][1001];
ll knapsack(ll wt[],ll val[],ll n,ll w){
    rep(i,0,1001)dp[i][0]=0;
    rep(i,0,1001)dp[0][i]=0;
    rep(i,1,n+1){
        rep(j,1,w+1){
            if(wt[i-1]<=j){
                dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);         
                   }
            else dp[i][j]=dp[i-1][j];
        }
    } 
    return dp[n][w];  
}
int main(){
 fast();
 new_int_1(n);
array(wt,n);
array(val,n);
new_int_1(w);
cout<<knapsack(wt,val,n,w)<<endl;
 return 0;
}