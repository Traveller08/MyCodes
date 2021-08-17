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
// sieve of prine
ll ans[1000005];
unordered_map<ll,vector<ll>>fact;
unordered_map<ll,ll>pres;
void seiv()
{ mem0(ans);
    rep(i,2,1000002)
    {
        if(ans[i]==0)
        {
            ans[i]=i;
           
            for(ll j=i*i;j<=1000002;j+=i)
            {
                if(ans[j]==0){
                 ans[j]=i;
                }
            }
        }
    }
    
    
}
void seive()
{
   
    for(ll i = 2; i <= 1000000; i++)
    {
       for(ll j=i;i*i<=j;j+=i)
       {
        fact[i].push_back(j);
       }
    }
}

ll func(ll n)
{  if(pres[n]!=0)return pres[n];
    if(n==1)
    return 0;
    if(ans[n]==0)return 1;
    return pres[n]= ((ans[n]*func(n/ans[n]))+((n/ans[n])*func(ans[n])));
}
int main(){
 fast();
 seive();
 seiv();
new_int_1(t);
  w(t){
    
      new_int_2(l,r);
      ll answer=0;
      for(ll i=l;i<=r;i++)
      { cout<<func(i)<<endl;
      }
    //  cout<<answer<<endl;
 }
 return 0;
}