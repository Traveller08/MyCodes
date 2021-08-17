#include<bits/stdc++.h>
#define ll long long int
using namespace std;
vector<ll>prime(1000005,0);
 void sieve(){
     
    for (int i = 2; i <= 1001; i++)
    {
         for (int j = i*i; j <= 1000001; j += i)
 
                   prime[j] = i;
        
    }
 }
int main()
{
    sieve();
   // for(ll i=0;i<100;i++)cout<<i<<" "<<prime[i]<<endl;
    ll n;cin>>n;
    while(n--)
    {
        ll t;
        cin>>t;
        ll ans=0;
       
          while(t>0)
          {
            if(prime[t]!=0){
             t=prime[t]>t/prime[t]?prime[t]:t/prime[t];
             ans++;}
             else if(prime[t]==0)
             {
                 t--;
                 ans++;
             }
          }
          
       
       
       cout<<ans<<endl;
    }
    return 0;
}