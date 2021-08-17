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
#define new_str(s) string s;cin>>s


int main(){
 fast();
new_int_1(t);
  w(t){
    new_int_2(n,k);
    ll arr[n+1];
    ll no_one=0;
    arr[0]=0;
    rep(i,1,n+1){
        cin>>arr[i];
        if(arr[i]==1)no_one++;
        }
   
       rep(i,1,n+1){
           
           arr[i]+=arr[i-1];
          
           }
       ll minanc=LONG_LONG_MAX;
       rep(i,k,n+1){
            minanc=min(minanc,arr[i]-arr[i-k]);
       }
   ll ans=no_one-minanc+((minanc)*(minanc+1)/2);
      cout<<ans<<endl;
 }
 return 0;
}