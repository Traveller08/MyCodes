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
     ll a[n]={},b[n]={},c[n]={};
     ll noa=0,nob=0,noc=0;
     for(ll i=n-1;i>=0;i--)
     {
       if(s[i]=='A')noa++;
       if(s[i]=='B')nob++;
       if(s[i]=='C')noc++;
       a[i]=noa;
       b[i]=nob;
       c[i]=noc;
     }
     bool a1=0,a2=0,a3=0;
      rep(i,0,n)
        {
            if(a[i]<b[i]+c[i])
            {
                a1=true;
                break;
            }
        }
        rep(i,0,n)
        {
            if(a[i]+b[i]<c[i])
            {
                a2=true;
                break;
            }
        }
        rep(i,0,n)
        {
            if(a[i]+c[i]<b[i])
            {
                a3=true;
                break;
            }
        }
   if(a1==true && a2==true && a3==true)cout<<"NO"<<endl;
   else cout<<"YES"<<endl;
  }    
    
 return 0;
}