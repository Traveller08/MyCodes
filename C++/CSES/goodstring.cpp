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
 new_int_1(n);
 new_str(s);
 stack<char>st;
 string ans="";
 for(ll i=0;i<n-1;i+=2)
 {
     if(s[i]==s[i+1])
     {
         if(ans.length()!=0)
         {
           char p=ans[ans.length()-1];
           if(p!=s[i])
           {
               ans.push_back(s[i]);
           }
         }
         else 
         {
             ans.push_back(s[i]);
         }
     }
     else 
     {  if(ans.length()!=0)
        {
            char p=ans[ans.length()-1];
           if(p!=s[i])
           {
               ans.push_back(s[i]);
               ans.push_back(s[i+1]);
           }
           else  ans.push_back(s[i+1]);

        }
        else 
        {
             ans.push_back(s[i]);
               ans.push_back(s[i+1]);
        }
        
         
     }
 }
 

  ll len=ans.length();
 if(len%2==0)
 {
    cout<<n-len<<endl<<ans<<endl;
 }
 else 
 {
     ans.pop_back();
    ll po=ans.length();
     cout<<n-po<<endl<<ans<<endl;
 }

 
 return 0;
}