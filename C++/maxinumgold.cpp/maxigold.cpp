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
#define new_int_6(a,b,c,d,e,f) ll a,b,c,d,e,f;cin>>a>>b>>c>>d>>e>>f
#define new_str(s) string s;cin>>s
int main(){
 fast();
new_int_1(t);
ll arr[t];
  rep(i,0,t)cin>>arr[i];
  new_int_1(k);
  ll l=-1;
  ll ans=0;
  ll r=t-1;
  
  while (r>l+1)
  {
      ll mid=l+(r-l)/2;
    //  cout<<mid<<endl;
      
   //    cout<<"l "<<l<<" "<<r<<endl;
     //   cout<<mid<<" "<<arr[mid]<<endl;
     if(arr[mid]>k) r=mid;
     else 
       l=mid;
      
    }
  
      cout<<arr[l]<<endl;
  cout<<l<<" "<<r<<endl;
  
 return 0;
}
