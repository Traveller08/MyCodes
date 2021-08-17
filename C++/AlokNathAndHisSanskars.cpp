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
bool check[100];
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
ll subset_sum(ll* arr,ll n,ll sum,vector<ll>a){
    if(sum==0){
        for(ll i=0;i<a.size();i++){
           
            check[a[i]]=true;}
         
        a.clear();
        return 1;
    }
    else if(sum!=0 && n==0){
        a.clear();
     // cout<<endl;
        return 0;
    }
    else{
        if(arr[n-1]>sum){
            return subset_sum(arr,n-1,sum,a);
        }
        else{
           ll d=0;
            ll c= subset_sum(arr,n-1,sum,a);
         if (!check[n-1]) {a.push_back(n-1);
             d=subset_sum(arr,n-1,sum-arr[n-1],a);
              
             // cout<<arr[a[n-1]]<<" ";
            }
            return c+d;
        }
    }
}
int main(){
 fast();
 new_int_1(t);
 w(t){
    new_int_2(n,k);
    array(arr,n);
     SumPossible(arr,n);
     bool found=0;
     ll maxm=INT_MIN;
      for(auto i=possibleSum.begin();i!=possibleSum.end();++i){
            vector<ll>a;
          memset(check,false,sizeof(check));
       maxm=max(subset_sum(arr,n,*i,a),maxm);
            if(maxm>=k)break;    
           
      }
    if(maxm>=k)cout<<"yes"<<endl;
    else cout<<"no"<<endl;

 }
 return 0;
}