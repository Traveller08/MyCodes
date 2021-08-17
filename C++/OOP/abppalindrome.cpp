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
  w(t){
      new_int_2(a,b);
      new_str(s);
      
     
      ll n=s.length();
    
      
      bool valid=0;
      if(a+b>n)
      {
        valid=true;   
      }
      else if(n==1)
      {
          if(s[0]=='?')
          {
              if(a>0)s[0]='0';
              else if(b>0)s[0]='1';
          }
      }
     /* else if(n==2)
      {
          if(s[0]==s[1])
          {
              if(s[0]=='?')
              {
                 if(a>0)
                 {
                     s[0]='0';
                     s[1]=='0';
                     a-=2;
                 }
                 else if(b>0)
                 {
                     s[0]='1';
                     s[1]='1';
                     b-=2;
                 }
              }
          }
          else{
              if(s[0]=='0')
              else if(s[0]=='1')
          }
      }*/
      else if(n>=2)
      { 
          rep(i,0,n/2)
          { 
              if(s[i]==s[n-(i+1)])
              {

                  if(s[i]=='?')
                  {
                      if(a>=b)
                      {
                          s[i]='0';
                       
                          s[n-(i+1)]='0';
                      }
                      else{
                          s[i]='1';
                        
                          s[n-(i+1)]='1';
                      }
                  }
              }
              else
              {
                  if(s[i]=='?' && s[n-(i+1)]=='1')
                  {  
                      s[i]='1';
                    
                  }
                 else  if(s[i]=='?' && s[n-(i+1)]=='0')
                   {
                       s[i]='0';
                       
                   }
                else    if(s[i]=='0' && s[n-(i+1)]=='?')
                    {
                        s[n-(i+1)]='0';
                       
                    }
               else      if(s[i]=='1' && s[n-(i+1)]=='?')
                     {
                         s[n-(i+1)]='1';
                       
                     }
               
              }
           
              

          }
            rep(i,0,n/2)
      {
          if(s[i]!=s[n-(i+1)])
           valid=true;
      }
      ll coun=0;
    if(!valid)
     { rep(i,0,n)
      {
          if(s[i]=='0')
            a--;
        else if(s[i]=='1')
          b--;
          else if(s[i]=='?') 
           coun++; 
      }
      }
     if(valid==false && coun==1)
      if(a>b){s[(n/2)]='0';
      a--;}
      else if(b>=a){s[n/2]='1';
      b--;}
           
      }
    //  cout<<a<<" "<<b<<endl;
     // if(a!=0 && b!=0)valid=true;
      
       cout<<s<<endl;
 }
 return 0;
}