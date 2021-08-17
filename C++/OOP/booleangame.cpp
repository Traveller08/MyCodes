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
      new_int_3(n,m,k);
      array(g,n);
      ll ans=0;
      ll kfinal=INT_MIN;
      while (m--)
      {
         new_int_3(u,v,d);
         u--;v--;
         vector<ll>posOut;
         vector<ll>posIn;
         vector<ll>neg;
         vector<ll>ans;
         ll sumIn=0;
         bool allNotPos=0;
         rep(i,0,n)
         {
             if(i>=u && i<=v)
             {   sumIn+=g[i];
                 if(g[i]>=0)posIn.push_back(g[i]);
                 else {
                     neg.push_back(g[i]);
                     allNotPos=true;}
             }
             else 
             {
                 if(g[i]>0)posOut.push_back(g[i]);
                 else neg.push_back(g[i]);
             }
         }
         
         ll temp=0;
         for(ll i=0;i<posOut.size();i++)
         {
             temp+=posOut[i];
             posOut[i]=temp;
         }
         temp=0;        
         for(ll i=0;i<posIn.size();i++)
         {
             temp+=posIn[i];
             posIn[i]=temp;
         }
   
       sumIn+=d;
         for(ll i=0;i<posOut.size();i++)
         {
             ans.push_back(posOut[i]+d);
         }
        if(allNotPos) {
             for(ll i=0;i<posOut.size();i++)
                {
                     for(ll j=0;j<posIn.size();j++)
                     {
                         ans.push_back(posOut[i]+posIn[j]);
                     }
                }
          }
          if(k>ans.size())
          {
              for(ll i=0;i<posOut.size();i++)
              {
                  for(ll j=0;j<neg.size();j++)
                  {
                      ans.push_back(posOut[i]+neg[j]);
                  }
              }
              for(ll i=0;i<posIn.size();i++)
              {
                   for(ll j=0;j<neg.size();j++)
                  {
                      ans.push_back(posIn[i]+neg[j]);
                  }
              }
          }
          sort(ans.begin(),ans.end(),greater<ll>());
          if(ans.size()>=k)
          {
              for(ll i=0;i<k;i++)
              {
                  cout<<ans[i]<<" ";
              }cout<<endl;
          }
          else {
              for(ll i=0;i<k;i++){
                  cout<<0<<" ";
              }cout<<endl;
          }
        
             
      }
     
 }
 return 0;
}