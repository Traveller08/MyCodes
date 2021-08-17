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
int main(){
 fast();
new_int_1(t);
  w(t){
      new_int_2(n,q);
      ll arr[n-1];
      
      rep(i,0,n-1)cin>>arr[i];
     
      w(q){
          ll ans=0;
          new_int_2(l,r);
       if((r-l)%2==0){
            cout<<"UNKNOWN"<<"\n";
       }
         else{
             ll minm=min(r-1,l-1);
             ll maxm=max(l-1,r-1);
             ll count=0;
             for(ll i=maxm-1;i>=minm;i--){ 
                 if(count%2==0)ans+=arr[i];
                 else ans-=arr[i];
                 count++;
             }
             cout<<ans<<"\n";
          }
          
      }
 }

 return 0;
}