#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long int
using namespace std;


bool display(vector<ll> a,vector<ll> b, ll n,ll c, ll test){
    ll ans=0;
    
    
      for(ll i=0;i<n-1;i++){
         
          ll minm=a[i],index=0;
          for(ll j=i;j<n;j++){
               if(a[j]<=minm){
                   index=j;
                   minm=a[j];
               }
          }
    
          ans+=(index-i+1);
     
          reverse(a.begin()+i,a.begin()+index+1);
         
        
      }
    //   cout<<ans<<endl;
      if(ans==c){
         
         cout<<"Case #"<<test<<": ";
          for(ll i=0;i<n;i++){
           cout<<b[i]<<" ";
          }
          cout<<endl;
          return true;
      } 
      
}

int main()
{
   ll t;cin>>t;
   ll test=0;
   while(t--){
       test++;
                                                                                                                                                                                                                                                                                                                                                                                                                          
    ll n,c;cin >> n>>c;
    if(c<n-1 || c>(n*(n+1)/2)){
        cout<<"Case #"<<test<<": "<<"IMPOSSIBLE"<<endl;
    }
    else{
     vector<ll> a(n);
    
   for(ll i=0; i<n; i++){
         a[i]=i+1;
    }
 bool falg=0;
    do{ 
       
      falg= display(a,a,n,c,test);
    
    }while(next_permutation(a.begin(), a.end()) && falg==false ); 
   }
   }
    return 0;
}
