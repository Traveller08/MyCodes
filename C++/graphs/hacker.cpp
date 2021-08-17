#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,q;
    cin>>n>>q;
    ll arr[n+1]={};
   
    while(q--)
    {
     ll l,r,a;
     cin>>l>>r>>a;
     for(ll i=l;i<=r;i++)
     {
         arr[i]+=a;
     }   
     
    }
    ll maxel=INT_MIN;
    for(ll i=0;i<=n;i++)
    {
        maxel=max(maxel,arr[i]);
    }
    cout<<maxel<<endl;
    return 0;
}
