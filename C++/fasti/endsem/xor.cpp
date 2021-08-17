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
ll xorcalculator(ll a){
    ll ans=a%4;
    if(ans==0)return a;
    else if(ans==1)return 1;
    else if(ans==2)return a+1;
    else if(ans==3)return 0;
}
ll anscal(ll a,ll b){
    return xorcalculator(a-1)^xorcalculator(b);
}
int main(){
 fast();
new_int_1(t);
  w(t){
      new_int_3(n,m,k);
      ll answer=0;
      rep(i,0,n){
          answer^=(anscal(k+i+2,k+i+m+1));
      }
      cout<<answer<<"\n";
 }
 return 0;
}

