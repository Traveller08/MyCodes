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
vector<ll>store(10000001,-1);

ll sumOfDigits(ll n){
  ll key=n;
  if(store[key]!=-1)return store[key];
    ll odd=0,even=0;
    while(n>0){
        ll last=n%10;
        n/=10;
        if(last%2==0)even+=last;
        else odd+=last;
    }
    store[key]= abs(odd-even);
    return store[key];
}
ll totalDiamonds(ll n){
    ll totalDia=0;
    rep(i,2,n+1)
      totalDia+=((i-1)*sumOfDigits(i));
    rep(i,n+1,2*n+1)
      totalDia+=((2*n-i+1)*sumOfDigits(i));
    return totalDia;
}
int main(){
 fast();

new_int_1(t);
  w(t){
      new_int_1(n);
      cout<<totalDiamonds(n)<<endl;
 }
 return 0;
}