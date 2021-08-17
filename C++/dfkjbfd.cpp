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
      new_int_2(n,k);
      multimap<ll,ll>store;
      rep(i,0,n){
          new_int_2(marks,time);
          store[]
      }
      ll maxmMarks=0;
      rep(i,0,n){
          ll thisSum=0,j=i;
          ll currMarks=0;
        rep(j,i,n){
          
          if(thisSum<=k){   thisSum+=arr[j][1];
             currMarks+=arr[j][0];
          }
          else break;
          
         }
         currMarks-=arr[i][0];
         
         maxmMarks=max(currMarks,maxmMarks);
      }
      cout<<maxmMarks<<endl;
 }
 return 0;
}