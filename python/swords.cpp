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
ll ans=0;
  w(t){
      new_int_2(a,b);
     while(1){ 
         if(a<=0 || b<=0){
             break;
         }
         if(a>b){
          a-=2;
          b-=1;
          count++;
      }
      else{
          b-=2;
          a-=1;
          count++;
      }
      }
      cout<<ans<<"\n";
 }
 return 0;
}
////////////////////////

  for(auto it = c.begin(); it != c.end(); )
        if(it->second == 0)
            it = c.erase(it);
        else
            ++it;