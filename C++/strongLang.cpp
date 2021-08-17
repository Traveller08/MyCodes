
#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long int
void solve(){
   ll n,k;
   cin>>n>>k;
   string s;
   cin>>s;
  ll i=0,ans=0;
  bool flag=0;
  ll count=0;
 for(ll i=0;i<s.length();i++){
     if(s[i]=='*')count++;
     else{
         ans=max(ans,count);
         count=0;
     }
     
   if(ans>=k){
         flag=true;
         break;
     }
 }
 ans=max(ans,count);
  if(ans>=k){
         flag=true;
        
     }
 // cout<<ans<<endl;
  
 if(flag)cout<<"YES"<<"\n";
  else cout<<"NO""\n";

}

int main(){
 fast();
ll t;cin>>t;
while (t--)
{

    solve();
}


return 0;
}