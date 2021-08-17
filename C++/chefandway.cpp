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
unordered_map<ll,ll>store;
ll dist(ll dt[],ll n,ll k,ll maxm){
    ll value=1;
    if(maxm==0){
        return dt[0];
    }
    ll arr[k];
    rep(i,0,k)arr[i]=1;
    rep(i,1,3){
      if(n-i>=0) arr[i-1]*=dt[n-1]*dist(dt,n-i,k,maxm-i);
    }
    rep(i,0,k)cout<<arr[i]<<" ";cout<<endl;

   return value;
}
int main(){
 fast();
 new_int_2(n,k);
 array(dt,n);
ll maxm=n-1;
cout<< dist(dt,n,k,maxm)<<endl;

 return 0;
}