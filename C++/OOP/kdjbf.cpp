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
 array(arr,n);
 new_int_1(q);
 stack<ll>store;
 ll check=INT_MIN;
 ll checkmin=INT_MAX;
 w(q)
 {  ll distance=0;
     new_int_2(x,k);
     x--;
     ll copy=check;
    
     if(x<check)
     {  //  cout<<check<<endl;
  //   cout<<(k*(check-x+1));
         distance+=(k*(check-x+1));
         ll copy=check;
         rep(i,copy+1,n)
         {
             if(k>arr[i])
             {  
                 k-=arr[i];
                 arr[i]=0;
                 copy=max(copy,i);
                 checkmin=min(checkmin,i);
               if(i!=n-1)  distance+=k;
             }
             else if(k==arr[i])
             {
                 k-=arr[i];
                 arr[i]=0;
                 distance+=k;
                 copy=max(copy,i);
                 checkmin=min(checkmin,i);
             }
             else if(k<arr[i])
             {
                 arr[i]-=k;
             }
         }
         check=max(check,copy);
         
     }
     else
     {
        rep(i,x,n)
         {
             if(k>arr[i])
             {  
                 k-=arr[i];
                 arr[i]=0;
                 copy=max(copy,i);
                 checkmin=min(checkmin,i);
             if(i!=n-1)    distance+=k;
             }
             else if(k==arr[i])
             {
                 k-=arr[i];
                 arr[i]=0;
                 distance+=k;
                 copy=max(copy,i);
                 checkmin=min(checkmin,i);
             }
             else if(k<arr[i])
             {
                 arr[i]-=k;
             }
         }
         check=max(check,copy);
     }
     if(k>0)
     {
        distance-=(n-x-1)*k;
     }
     cout<<distance<<endl;
         
    
 }
 return 0;
}