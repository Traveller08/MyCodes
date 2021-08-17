#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define pf push_front
#define rep(i,a,b,k) for(ll i=a;i<b;i+=k)
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
    new_int_1(n);
    ll burner_one=0,burner_two=0;
  
   ll arr[n];
    rep(i,0,n,1){
     cin>>arr[i];
    }
    
    sort(arr,arr+n,greater<ll>());
    rep(i,0,n,1){
         if(burner_one<burner_two){
           burner_one+=arr[i];
         }
         else{
           burner_two+=arr[i];
         }

    }
    cout<<max(burner_two,burner_one)<<"\n";
     
   }
 return 0;
}