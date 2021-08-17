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
 ll ans[n][n]={};
 for(ll i=0;i<n;i++)
 {
     ll no=arr[i];
     ll dup=arr[i];
    
         ll j=i;
         ll k=i;
         while (1)
         {
            if(ans[k][j]==0)
            {  
                no--;
                ans[k][j]=dup;
                  if(no<=0)break;
             }
                if(j!=0 && ans[k][j-1]==0)
                {
                    no--;
                     j--;
                    ans[k][j]=dup;
                   
                    if(no<=0)break;
                }
                else if(i!=n-1 && ans[k+1][j]==0)
                {
                    no--;
                     k++;
                    ans[k][j]=dup;
                   
                     if(no<=0)break;
                }
                 if(no<=0)break;
            
         }
         
     
 }
 rep(i,0,n)
 {
     rep(j,0,n)
     {
         if(i>=j)cout<<ans[i][j]<<" ";
     }cout<<endl;
 }

 return 0;
}