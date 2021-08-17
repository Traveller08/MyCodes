#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
 fast();
ll t;cin>>t;
  while(t--){
      ll n,k;cin>>n>>k;
      string s;cin>>s;
      ll first=0,count=0,last=0;
      for(ll i=0;i<s.length();i++){
           if(s[i]=='*'){
               first=i;
               count++;
               break;
           }
      }
      bool flag=0;
      for(ll i=s.length()-1;i>first;i--){
          if(s[i]=='*'){
              last=i;
              count++;
              flag=1;
              break;
          }
      }
    
      if(flag){
          for(ll i=first;i<last;i+=k){
            if(s[i]=='*'){
                if((i+k)<last){
                    if(s[i+k]=='*'){
                          count++;
                          
                    }
                    else if(s[i+k]=='.'){
                       for(ll j=i+k;j>i;j--){
                           if(s[j]=='*'){
                               count++;
                               i=j-k;
                               break;
                           }
                       }
                    }

                }
                if((i+k)>=last)break;
            }
          }
      }


      
     cout<<count<<"\n";
 }
 return 0;
}