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
void solve()
{
    string s;
    cin>>s;
    ll n=s.length();
    ll last_pos=-1;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            for(ll j=last_pos;j<=i;++j)
                next0[j]=i;
                last_pos=i;
            
        }
    }
    for(ll i=last_pos+1;i<n;++i)
    {
        next0[i]=n;

    }
    if(next0[0]==n)
    {
        cout<<"0"<<"\n";
        return;
    }
     
     last_pos=-1;
     for(ll i=0;i<n;++i)
     {
         if(s[i]=='1')
         {
             for(ll j=last_pos+1;j<=i;++j)
             {
                 next1[j]=i;
                 last_pos=i;
             }
         }
     }
     for(ll i=last_pos+1;i<n;++i)
      next1[i]=n;

      dp[n]=dp[n+1]=0;
      dp1[n]=dp1[n+1]=0;
      for(ll i=n+1;i>=0;--i)
      {
          dp[i]=dp[i+1];
          if(s[i]=='0' && next1[i]<n)
          dp[i]=max(dp[i],dp[next1[i]+1+1]);
           if(s[i]=='1' && next0[i]<n)
            dp[i]=max(dp[i],dp[next0[i]+1]+1);
          dp1[i]=dp1[i+1];
          if(next1[i]<n)
           dp[i]=max(dp1)

      }

}
int main(){
 fast();
new_int_1(t);
  w(t){
 }
 return 0;
}