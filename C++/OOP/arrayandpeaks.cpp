#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
 fast();
 ll n;cin>>n;
  while(n--){
      ll x1,y1,x2,y2,t;
      cin>>x1>>y1>>x2>>y2>>t;
      ll x=abs(x2-x1);
      ll y=abs(y2-y1);
      ll time_consumed=min(x,y);
      ll rem=x<y?y-x:x-y;
      time_consumed+=rem;
   
      if(time_consumed<=t)cout<<"Yes"<<"\n";
      else cout<<"No"<<"\n";
 }
 return 0;
}


sec : gQXmfGDKaI_EKhnSMke4C2ORp1qssig5
id : 830864443985625099