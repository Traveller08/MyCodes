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
ll dp[1001][100001];
void intialise(){
    memset(dp,-1,sizeof(dp));
}
ll maximizer(ll wt[], ll tm[], ll n,ll k,ll timemin,ll w){
    if(k==0 || n==0){
        return -w;
    }
     if(dp[n][k]!=-1){
        return dp[n][k];
    }
    if(tm[n-1]<=k){
        ll a=wt[n-1]+ maximizer(wt,tm,n-1,k-tm[n-1],timemin, w);
        ll b=maximizer(wt,tm,n-1,k,timemin,w);
        if(a>b){
            if((float(wt[n-1])/tm[n-1])<(float(w/timemin))){
            timemin=tm[n-1];
            w=wt[n-1];
            
            }
        }

        return dp[n][k]= max(wt[n-1]+ maximizer(wt,tm,n-1,k-tm[n-1],timemin,w),maximizer(wt,tm,n-1,k,timemin,w));
    }
    else if(tm[n-1]>k){
        return dp[n][k]= maximizer(wt,tm,n-1,k,timemin,w);
    }
}
int main(){
 fast();
 intialise();
new_int_1(t);
  w(t){
      new_int_2(n,k);
      ll wt[n];
      ll tm[n];
      ll timemin=1,indexmin=0,w=INT_MAX;
      rep(i,0,n){
          cin>>wt[i]>>tm[i];      
          }
      
      cout<<maximizer(wt,tm,n,k,timemin,w)<<endl;
  }
 return 0;
}