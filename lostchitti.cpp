/*************************************************************
** AUTHOR : ANKIT CHAUDHARY **
*************************************************************/
#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define pf push_front
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define mem0(a) memset(a,0,sizeof(a))
#define w(t) while(t--)
#define array(arr,n) ll arr[n];rep(i,0,n)cin>>arr[i];
#define new_int_1(t) ll t;cin>>t;
#define new_int_2(a,b) ll a,b;cin>>a>>b
#define new_int_3(a,b,c) ll a,b,c;cin>>a>>b>>c
#define new_int_4(a,b,c,d) ll a,b,c,d;cin>>a>>b>>c>>d
#define new_int_5(a,b,c,d,e) ll a,b,c,d,e;cin>>a>>b>>c>>d>>e
#define new_str(s) string s;cin>>s
int main(){
 fast();
new_int_1(n);
  w(n){
      new_int_5(x1,y1,x2,y2,t);
      ll x=abs(x2-x1);
      ll y=abs(y2-y1);
      ll time_consumed=min(x,y);
      ll rem=x<y?y-x:x-y;
      time_consumed+=rem;
    //  cout<<rem<<" "<<time_consumed<<endl;
      if(time_consumed<=t)cout<<"Yes"<<endl;
      else cout<<"No"<<endl;
 }
 return 0;
}