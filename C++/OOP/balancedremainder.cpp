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
      map<ll,ll>store;
      rep(i,0,n)
      {
         ll a;
         cin>>a;
         store[a%3]++;
      }
      ll req=n/3;
      ll ans=0;
   //    cout<<store[0]<<" "<<store[1]<<" "<<store[2]<<endl;
      if(store[0]<req)
      {    ll req0=req-store[0];
            if(store[1]>req)
          {
               ll ext1=(store[1]-req);
               if(ext1>=req0)
               {
                    store[1]-=req0;
                    ans+=(2*req0);
                    store[0]+=req0;
               }
               else
               {
                  store[1]-=ext1;
                  ans+=(2*ext1);
                  store[0]+=ext1;
               }
             
          }
          
          if(store[2]>req )
          {
              ll ext1=(store[2]-req);
               if(ext1>=req0)
               {
                    store[2]-=req0;
                    ans+=(req0);
                    store[0]+=req0;
               }
               else
               {
                  store[2]-=ext1;
                  ans+=(ext1);
                  store[0]+=ext1;
               }
              
          }
      }
         if(store[1]<req)
      {    ll req0=req-store[1];
            if(store[2]>req)
          {
               ll ext1=(store[2]-req);
               if(ext1>=req0)
               {
                    store[2]-=req0;
                    ans+=(2*req0);
                    store[1]+=req0;
               }
               else
               {
                  store[2]-=ext1;
                  ans+=(2*ext1);
                  store[1]+=ext1;
               }
             
          }
          
          if(store[0]>req )
          {
              ll ext1=(store[0]-req);
               if(ext1>=req0)
               {
                    store[0]-=req0;
                    ans+=(req0);
                    store[1]+=req0;
               }
               else
               {
                  store[0]-=ext1;
                  ans+=(ext1);
                  store[1]+=ext1;
               }
              
          }   // cout<<store[0]<<" "<<store[1]<<" "<<store[2]<<endl;
      }
         if(store[2]<req)
      {    ll req0=req-store[2];
            if(store[0]>req)
          {
               ll ext1=(store[0]-req);
               if(ext1>=req0)
               {
                    store[0]-=req0;
                    ans+=(2*req0);
                    store[2]+=req0;
               }
               else
               {
                  store[0]-=ext1;
                  ans+=(2*ext1);
                  store[2]+=ext1;
               }
             
          }
      //     cout<<store[0]<<" "<<store[1]<<" "<<store[2]<<endl;
          if(store[1]>req )
          {
              ll ext1=(store[1]-req);
               if(ext1>=req0)
               {
                    store[1]-=req0;
                    ans+=(req0);
                    store[2]+=req0;
               }
               else
               {
                  store[1]-=ext1;
                  ans+=(ext1);
                  store[2]+=ext1;
               }
              
          }
      }

        if(store[0]<req)
      {    ll req0=req-store[0];
            if(store[1]>req)
          {
               ll ext1=(store[1]-req);
               if(ext1>=req0)
               {
                    store[1]-=req0;
                    ans+=(2*req0);
                    store[0]+=req0;
               }
               else
               {
                  store[1]-=ext1;
                  ans+=(2*ext1);
                  store[0]+=ext1;
               }
             
          }
          
          if(store[2]>req )
          {
              ll ext1=(store[2]-req);
               if(ext1>=req0)
               {
                    store[2]-=req0;
                    ans+=(req0);
                    store[0]+=req0;
               }
               else
               {
                  store[2]-=ext1;
                  ans+=(ext1);
                  store[0]+=ext1;
               }
              
          }
      }
         if(store[1]<req)
      {    ll req0=req-store[1];
            if(store[2]>req)
          {
               ll ext1=(store[2]-req);
               if(ext1>=req0)
               {
                    store[2]-=req0;
                    ans+=(2*req0);
                    store[1]+=req0;
               }
               else
               {
                  store[2]-=ext1;
                  ans+=(2*ext1);
                  store[1]+=ext1;
               }
             
          }
          
          if(store[0]>req )
          {
              ll ext1=(store[0]-req);
               if(ext1>=req0)
               {
                    store[0]-=req0;
                    ans+=(req0);
                    store[1]+=req0;
               }
               else
               {
                  store[0]-=ext1;
                  ans+=(ext1);
                  store[1]+=ext1;
               }
              
          }
      }
         if(store[2]<req)
      {    ll req0=req-store[2];
            if(store[0]>req)
          {
               ll ext1=(store[0]-req);
               if(ext1>=req0)
               {
                    store[0]-=req0;
                    ans+=(2*req0);
                    store[2]+=req0;
               }
               else
               {
                  store[0]-=ext1;
                  ans+=(2*ext1);
                  store[2]+=ext1;
               }
             
          }
          
          if(store[1]>req )
          {
              ll ext1=(store[1]-req);
               if(ext1>=req0)
               {
                    store[1]-=req0;
                    ans+=(req0);
                    store[2]+=req0;
               }
               else
               {
                  store[1]-=ext1;
                  ans+=(ext1);
                  store[2]+=ext1;
               }
              
          }
      }
      
      cout<<ans<<endl;
 }
 return 0;
}