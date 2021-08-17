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
      new_int_1(n);
      new_int_1(a);
      ll sum=a;bool flag=0;
      ll count=0;
      rep(i,0,n-1){
          new_int_1(f);
         sum-=1;
          if(sum==0 && f==0 ){
              flag=1;
              count=i;
          }
          if(flag==false){
              sum+=f; 
                
          }
      }
      if(flag==false){
          cout<<sum+n-1<<"\n";
      }
      else{
          cout<<count+1<<"\n";
      }
    }
 return 0;
}