#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long int

ll printNcR(int n, int r)
{
 
   
    long long p = 1, k = 1;
 
   
    if (n - r < r)
        r = n - r;
 
    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
 
            // gcd of p, k
            long long m = __gcd(p, k);
 
           
            p /= m;
            k /= m;
 
            n--;
            r--;
        }
 
        
    }
 
    else
        p = 1;
 
 
   return p;
}

int main(){
 fast();
ll t;
cin>>t;
  while(t--){
    ll c,n,m;
    cin>>c>>n>>m;
    set<ll>store;
    ll count=0;
    unordered_map<ll,ll>valstore;

    while(c--){
        ll x;cin>>x;
        x*=2;
        while(x--){
            ll a;
            count++;
            cin>>a;
            store.insert(a);
            valstore[a]++;
        }
      
    }
    ll a=count-store.size();
    ll ans=0;
    ans+=(printNcR(m,a));

 }
 return 0;
}