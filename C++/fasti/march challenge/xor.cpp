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
      vector<ll>bnary;
      vector<ll>first;
      vector<ll>second;
      ll a=n;
      while(n>0){
           bnary.push_back(n%2);
           n/=2;
      }
      ll count=0;
      for(ll i=bnary.size()-1;i>=0;i--){
          count++;
          if(count==1 && bnary[i]==1 ){
                  first.push_back(1);
                  second.push_back(0);
          }
          else if(bnary[i]==1 && count!=1){
              second.push_back(1);
              first.push_back(0);
          } 
          else if(bnary[i]==0){
               second.push_back(1);
              first.push_back(1);
          }
      }
      ll an=0,b=0;
      
      for(ll i=first.size()-1;i>=0;i--){
          an+=(first[i]*pow(2,first.size()-1-i));
      }
       for(ll i=second.size()-1;i>=0;i--){
          b+=(second[i]*pow(2,second.size()-1-i));
      }

      cout<<an*b<<"\n";
   }
 return 0;
}