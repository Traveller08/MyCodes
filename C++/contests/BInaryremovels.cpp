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
      new_str(s);
      ll n=s.length();
      bool found=0;
      ll zr=0,bn=0,zrbn=0,zrzr=0,bnbn=0;
      rep(i,0,n)
      {
          if(s[i]=='0')zr++;
          if(s[i]=='1')bn++;
          if(i<n-1 && s[i]=='0' && s[i+1]=='1')zrbn++;
           if(i<n-1 && s[i]=='0' && s[i+1]=='0')zrzr++;
           if(i<n-1 && s[i]=='1' && s[i+1]=='1')bnbn++;
      }
      if( bn==n || zr==n ||zrbn>0)found=true;
      if((zrzr!=0 && bnbn!=0)&&(zrzr!=bnbn)) found=true;
      if( zr>0 && bn>0 )found=true;
      if(found)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
 }
 return 0;
}