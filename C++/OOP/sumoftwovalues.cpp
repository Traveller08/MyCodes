#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
 fast();
ll n,x;cin>>n>>x;
unordered_map<ll,ll>store;
ll term=0;
while(n--)
{
 term++;
 ll a;cin>>a;
 store[a]=term;  
}
bool found=0;
for(auto it=store.begin();it!=store.end();++it)
{  
    if(store[x-it->first]!=0 && store[x-it->first]!=0)
    { 
    if(it->second != store[x-it->first]) { 
         found=true;
        it->second<store[x-it->first] ? cout<<it->second<<" "<<store[x-it->first]<<endl : cout<<store[x-it->first]<<" "<<it->second<<endl;
        break;}
        
    }

}
if(!found)cout<<"IMPOSSIBLE"<<endl;

 return 0;
}