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
bool check[1001]={};

set<ll>possibleSum;

void SumPossible(ll arr[],ll n){
   ll total = 1<<n;
   rep(i,0,total){
       ll sum=0;
       rep(j,0,n){
           if(i&(1<<j))sum+=arr[j];
       }
       possibleSum.insert(sum);
   }
}

ll subset_count(ll* arr, ll sum, ll n,vector<int>a) 
{    
    if(sum==0){
     for(ll i=0;i<a.size();i++){
         check[arr[i]]=true;
     }for(ll i=0;i<10;i++)cout<<check[i]<<" ";cout<<endl;
      return 1;
      }
    if(n==0 && sum!=0)
      return 0;
    else{
        if(arr[n-1]>sum)
          return subset_count(arr,sum, n-1,a);
        else if(!check[arr[n-1]]){
            a.push_back(arr[n-1]);
          return subset_count(arr,sum, n- 1,a)+subset_count(arr,sum-arr[n-1], n-1,a);
        }
   }
} 


int main() 
{ fast();
     
    new_int_1(t); 
    w(t){
        new_int_2(n,k);
        ll arr[n];
        rep(i,0,n){
             cin>>arr[i];
        }
        SumPossible(arr,n);
        vector<int>a;
        ll maxNoSum=INT_MIN;
    //   for(ll i=0;i<=12;i++){
      //      memset(check,false,sizeof(arr));
        cout<<6<<" "<<subset_count(arr,7,n,a)<<endl;
      
        //}
    //    cout<<endl<<maxNoSum<<endl;
     
    
    }
    return 0; 
} 