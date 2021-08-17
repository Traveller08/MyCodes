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
new_int_1(t);
 ll noOfDigits=0;
 ll n=t;
 vector<char>str;
 while (n>0)
 {
     ll temp=n%10;
     str.push_back(char(temp+'0'));
     n/=10;
 }
 
 reverse(str.begin(),str.end());
 if(str.size()%2==0)
 {
   if((str[0]-'0')<4){
       rep(i,0,str.size()/2)
          cout<<4;
        rep(i,str.size()/2,str.size())
          cout<<7;
          cout<<endl;
   }
   else if((str[0]-'0')>4 && (str[0]-'0')<7 ){
     cout<<7;
      rep(i,1,str.size()/2)
          cout<<4;
        rep(i,str.size()/2,str.size())
          cout<<7;
          cout<<endl;
   }
   else if ((str[0]-'0')>7)
   {
       ll a=(str.length()/2 )+ 1;
       rep(i,0,a)
        cout<<4;
        rep(i,0,a)
        cout<<7;
        cout<<endl;
   }
     
 }
 else{
      if((str[0]-'0')<4){
          ll a=(str.length()+1)/2;

       rep(i,0,a)
          cout<<4;
        rep(i,0,a)
          cout<<7;
          cout<<endl;
   }
   else if((str[0]-'0')>4 && (str[0]-'0')<7 ){
     cout<<7;
     ll a=(str.length()+1)/2;

       rep(i,0,a)
          cout<<4;
        rep(i,0,a-1)
          cout<<7;
          cout<<endl;
   }
   else if ((str[0]-'0')>7)
   {
      ll a=(str.length()+1)/2;

       rep(i,0,a)
          cout<<4;
        rep(i,0,a-1)
          cout<<7;
          cout<<endl;
      
   }

 }
 return 0;
}