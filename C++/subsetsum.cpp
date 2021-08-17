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

ll subsetsum(ll arr[],ll n,ll k1){
    ll count=0;
    if(k1<=0 )
     return 0;
    else if(n==0)  return INT_MAX;
    
   
    ll count1=0,count2=0;
    if(k1>=arr[n-1])
       count=min(1+subsetsum(arr,n-1,k1-arr[n-1]),subsetsum(arr,n-1,k1)); 
 
   
     if(arr[n-1]>k1){
     count= subsetsum(arr,n-1,k1);
    }
     if(count==0)cout<<" n-2 "<<n-1<<endl;
     cout<<count<<" "<<endl;
    return count;
}
int main(){
 fast();

new_int_1(t);
  ll arr[t];
  rep(i,0,t){
      cin>>arr[i];}
  new_int_1(sum);

  ll no_elments=subsetsum(arr,t,sum);
  cout<<no_elments<<endl;
 return 0;
}

 min(1+subsetsum())