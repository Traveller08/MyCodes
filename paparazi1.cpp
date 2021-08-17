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
ll maxFinder(ll arr[], ll n,ll i){
 rep(j,i+1,n){
    if(arr[j]>=arr[i]){
   //   cout<<j<<" ";
      return j;
    }
 }
 
 return n-1; 
}
ll solve(ll arr[],ll n,ll index,stack<pair<ll,ll>>store,ll max_diff){
    if(index==n-1){
      return max_diff;
    }
   
     
      store.push(make_pair(index,arr[index]));
      max_diff=max(max_diff,index);
     // cout<<index<<endl;
     
       
        index=maxFinder(arr,n,index);
     //   cout<<index<<endl;
        ll fir=0,sec=0,fir_sec=0,sec_sec=0;
        fir_sec=store.top().first;
        sec_sec=store.top().second;
        store.pop();
        if((float((arr[index]-store.top().second))/(index-store.top().first))<(float(sec_sec-store.top().second)/(fir_sec-store.top().first))){

          max_diff=max(max_diff,fir_sec-store.top().first);
          store.pop();
          store.push(make_pair(fir_sec,sec_sec));
        }
        
        else{
          store.push(make_pair(index,arr[index]));
        }
      
    
         index=maxFinder(arr,n,index);
  // cout<<index<<endl;
  cout<<max_diff<<" ";
         solve(arr,n,index,store,max_diff);


  //    cout<<maxFinder(arr,n,2)<<endl;
}


int main(){
 fast();
new_int_1(t);
  w(t){
     new_int_1(n);
     ll arr[n];
     rep(i,0,n)cin>>arr[i];
     stack<pair<ll,ll>>store;ll max_diff=0;
      store.push(make_pair(0,arr[0]));
    ll index=maxFinder(arr,n,0);
    max_diff=max(max_diff,index);
    //cout<<max_diff<<"\n";
    cout<<solve(arr,n,index,store,max_diff)<<"\n";
 }
 return 0;
}