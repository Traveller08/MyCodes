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
      new_int_1(n);
      ll arr[n];
      rep(i,0,n)cin>>arr[i];
      unordered_map<ll,ll>store;
      rep(i,0,n){
        store[arr[i]]++;
      }
    map<ll,bool>freqStore;
    for(auto it=store.begin();it!=store.end();++it){
        freqStore[it->second]=false;
    }
    stack<ll>currSum;
    for(auto it=freqStore.rbegin();it!=freqStore.rend();++it){
        
        if(it->second==false){
            if(currSum.top()<=0)  currSum.push(it->first);
            for(auto itr=freqStore.begin();itr!=freqStore.end();++itr){
              if(currSum.top()>=itr->first){
                  currSum.top()-=itr->first;
                  if(currSum.top()>0)itr->second=true;
                  else{
                         currSum.push(abs(currSum.top()-0));
                        itr->second=true;
                  }
                  }
            }
        }
        
    }
    cout<<currSum.top()<<"\n";
   
  }
 return 0;
}