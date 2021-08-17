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
      ll ans=0;
      new_int_2(a,b);
      ll maxm=a>b?a:b;
      ll minm=a>b?b:a;
   if(maxm>=2*minm)  { if(maxm%2==0){
        maxm/=2;
        ans=min(maxm,minm);
      }
      else{
          maxm/=2;
          if(minm>=maxm+2){
              ans=min(maxm,minm)+1;
          }
          else{
              ans=min(maxm,minm);
          }
      }
      }
      else{
          ll diff=maxm-minm;
          ans+=diff;
           minm=minm-diff;
          
         
          ans+=(minm*2)/3;
      }
      
      cout<<ans<<"\n";
 }
 return 0;
}