#include<bits/stdc++.h>
#define ll long long int
using  namespace std;

int main(){
 
 ll t; cin>>t;
  while (t--){
      ll ans=0,sum=0;
      ll n;cin>>n;
      ll arr[n];
      
      for(ll i=0;i<n;i++){
          cin>>arr[i];
      }
     
      sort(arr,arr+n);
      bool flag=0;
      for(ll i=0;i<n;i++){
          if(arr[i]>i+1){
              flag=1;
              break;
          }
          else{
              ans+=(i+1)-arr[i];
          }
      }
      
      
      if(ans%2==0 ||flag==true )cout<<"Second\n";
      else cout<<"First\n";
 }
 return 0;
}