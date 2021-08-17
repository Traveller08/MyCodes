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
ll minSubsetdiff(ll arr[],ll n,ll sum,ll mim,ll count)
{  mim=min(mim,count);
cout<<mim<<endl;
    if(n==0)
    return 0;
  
   count=min(abs(sum-(arr[n-1]+minSubsetdiff(arr,n-1,sum,mim,count))),abs(sum-minSubsetdiff(arr,n-1,sum,mim,count)));

     return mim;
}
int main(){
 fast();
 new_int_1(n);
 array(arr,n);
 ll sum=0;
 rep(i,0,n)
 { 
   sum+=arr[i];
 }
 cout<<minSubsetdiff(arr,n,sum,INT_MAX,INT_MAX)<<endl;
 return 0;
}