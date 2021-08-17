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
#define new_str(s) string s;cin>>s;
ll dp[102][102]={};
void arr(){
    memset(dp,-1,sizeof(dp));
}
ll knapsack(ll wt[], ll val[], ll w, ll n){
    if(n==0 || w==0){
        return 0;
    }
    if(dp[n][w]!=-1){
        return dp[n][w];
    }
    // cjoice diagram
    if(wt[n-1]<=w){
        return dp[n][w]= max(val[n-1]+knapsack(wt,val,w-wt[n-1],n-1),knapsack(wt,val,w,n-1));;
    }
    else  if(wt[n-1]>w){
        return  dp[n][w]=knapsack(wt,val,w,n-1);}

}

int main(){

 fast();
 arr();
 ll wt[]={1,2,3,4};
 ll val[]={4,5,2,6};
 ll w=7;
 ll n=4;
 cout<<knapsack(wt,val,w,n);
 return 0;
}
