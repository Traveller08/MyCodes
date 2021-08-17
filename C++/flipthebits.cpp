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
      new_int_1(n);
      new_str(s1);
      new_str(s2);
      ll arr0[n]={},arr1[n]={};
      ll n0=0,n1=0;
      rep(i,0,n)
      {
          if(s1[i]=='0')n0++;
            arr0[i]=n0;
          if(s1[i]=='1')n1++;
          arr1[i]=n1;
      }
     for(ll i=n-1;i>=0;i--)
     {
         if(arr0[i]==arr1[i])
         {
            string str1=s1.substr(0,i+1);
            string str2=s2.substr(0,i+1);
            if(str1!=str2)
         }
     }
 }
 return 0;
}