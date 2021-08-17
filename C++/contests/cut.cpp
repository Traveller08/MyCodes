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
 ll dp[100001]={};
 ll ans[100001]={};
void cut(ll val[],ll n,ll l,ll r)
{  ll pro=1;
    for(ll i=0;i<n;i++)
    {
       if(__gcd(val[i],pro)==1)
       {
           pro*=val[i];
       }
       else 
       {
        dp[i]=1;
           pro=val[i];
       }
    }
    dp[n]=1;
    ll on=0;
    rep(i,0,n+1)
    {
        on+=dp[i];
        ans[i]=on;
    }
}
int main(){
 fast();
 new_int_2(n,q);
 array(val,n);
 
 cut(val,n,0,n);
 w(q)
 {
     new_int_2(l,r);
     ll temp=ans[r]-ans[l];
     if(dp[r]==0)temp+=1;
     cout<<temp<<endl;
 }
 return 0;
}