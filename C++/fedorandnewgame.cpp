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
bool check(ll a,ll b,ll k)
{
     ll count=0;
     ll bitb=(log2(a)+1);
      ll bitc=(log2(b)+1);
      ll siz=max(bitc,bitb);
     ll arrb[siz]={};
     for(ll j=0;j<bitb;j++)
     {
         if(a&(1<<j))
         {
          arrb[j]=1;  
         }
         else arrb[j]=0;
     }
     
     ll arrc[siz]={};
     for(ll j=0;j<bitc;j++)
     {
         if(b&(1<<j))
         {
          arrc[j]=1;  
         }
         else arrc[j]=0;
     }
    // cout<<"bit "<<bitb<<" "<<bitc<<" "<<siz<<endl;
   for(ll i=0;i<siz;i++)
   {  //  cout<<arrb[i]<<" "<<arrc[i]<<endl;
       if(arrb[i]!=arrc[i])
       {
          count++;
       }
   }
 //   cout<<endl;
  if(count<=k)return true;
  else return false;
}
int main(){
 fast();
 new_int_3(n,m,k);
 array(arr,m+1);
 ll ans=0;
 rep(i,0,m)
 {
   if(check(arr[i],arr[m],k))ans++;
 }
 cout<<ans<<endl;
    
    

 
 return 0;
}