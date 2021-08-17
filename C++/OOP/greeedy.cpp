#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define pf push_front

ll compare(ll a,ll b)
{
   ll m=a>b?b:a;
   ll cost=0;
   while (m>0)
   {
     cost++;
     m/=2;
   }
   return cost;
  
}
int main(){
 fast();
 ll a,b;
 cin>>a>>b;
 ll ans=compare(a,b);
 if((a==0 && b==1)|| (b==0 && a==1))
 {
     ans+=1;
 }
 else if(a==0 && b==0)
 {
     ans+=0;
 }
 else if(a==1 && b==1)
 {
     ans+=1;
 }
 else ans+=2;
 cout<<ans<<endl;
 return 0;
}