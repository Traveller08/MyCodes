#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long int

unordered_map<ll,ll>store;
ll max_ribbon(ll n,ll arr[],ll count)
{

  if(n==0)
  {
      return 0;
  }
  else if (n<0)
  {
      return INT_MIN;
  }
  if(store[n]!=0)return store[n];
 // cout<<count<<endl;
   count=max(1+max_ribbon(n-arr[0],arr,count),max(1+max_ribbon(n-arr[1],arr,count),1+max_ribbon(n-arr[2],arr,count)));
   store[n]=count;
   return count;
}
int main(){
 fast();

 ll n;cin>>n;
 ll arr[3];
 for(ll i=0;i<3;i++)cin>>arr[i];
 sort(arr,arr+3);
 cout<<max_ribbon(n,arr,0)<<endl;
  return 0;
}