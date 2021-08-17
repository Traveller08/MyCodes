/*************************************************************
** AUTHOR : ANKIT CHAUDHARY **
*************************************************************/
#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define pf push_front
#define uplimit 2000
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
unordered_map<ll,string>store;


void preCal(){
    store[0]='0';
    
    rep(i,1,uplimit){
        ll n=i;
        char str[10001];
        ll j=0;
        while(n>0){
            ll temp=n%2;
            str[j]=char(temp+'0');
            j++;
            n/=2;
        }
       
        reverse(str,str+j);
     
        store[i]=str;
    }
}

bool checker(string s1, string s2)
{ int i=0;
   while (i<s1.length())  
   {
      int j=0;bool flag=0;
      while(j<s2.length())
      {
          if(s1[i]==s2[j])
          {// cout<<i<<" "<<j<<endl;
             i++;
             
          }
           j++;
           if(j==s2.length()){
             flag=true;
             break;
             }
          
          
      }
      if (flag)
      {
        break;
      }
      
   }
 if(i==s1.length())
    return true;
 else return false;
   
} 
string solve(string s){
      
   for(ll i=0;i<=1800;i++){
     
       if(!checker(store[i],s)){
           return store[i];
       }
   }
}

int main(){
 fast();
 preCal();
new_int_1(t);
 w(t){
     new_str(s);
   cout<<solve(s)<<endl;
//  cout<<store[0]<<" "<<store[1]<<" "<<store[2]<<endl;
// for( ll i=0;i<100;i++)
// cout<<store[i]<<endl;
 }
 
 return 0;
}