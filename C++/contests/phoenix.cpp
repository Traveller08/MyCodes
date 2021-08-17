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
      new_int_2(n,x);
      array(val,n);
      sort(val,val+n);
      ll ans[n]={};
      ll sum=0;
      ll in=0;
      bool flag=0;
      rep(i,0,n)
      {
         sum+=val[i];
         if(sum!=x)
         {
             ans[i]=val[i];
         }
         else if(sum==x)
         {
            
          in=i;
          flag=true;
          break;
         }
  
      }
      if(flag)
      {  rep(i,in+1,n)
      {
          ans[i-1]=val[i];
      }
      ans[n-1]=val[in];
      }
     // rep(i,0,n)cout<<ans[i]<<" ";cout<<endl;
      
      sum=0;
      bool found=0;
      rep(i,0,n)
      {
        sum+=ans[i];
        if(sum==x)
        {
            found=true;
            break;
        }
      }//
      
      if(found)cout<<"NO"<<endl;
      else
      {
          cout<<"YES"<<endl;
           rep(i,0,n)cout<<ans[i]<<" ";cout<<endl;
         //
      }
 }
 return 0;
}