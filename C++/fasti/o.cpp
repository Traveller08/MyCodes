#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define pf push_front
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define mem0(a) memset(a,0,sizeof(a))
#define w(t) while(t--)
#define newStr(s) string s;cin>>s;
#define endl "\n"

#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define new(t) ll t;cin>>t;

int main(){
 fast();
 new(t)
 w(t){
     newStr(s)
     int freq[26]={};
     rep(i,0,s.length()){
         freq[s[i]-97]++;
     }
     ll one=0,adjust=0;

     rep(i,0,26){
          if(freq[i]==1)one++;
          else if(freq[i]!=0 && freq[i]%2==0)adjust+=freq[i]/2;
          else if(freq[i]!=0 && freq[i]%2!=0)adjust+=(freq[i]-3)/2;


     }
     if(adjust>=one)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
 }
 return 0;
}