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
bool finder(vector<ll>arr,ll n,ll start, ll end,ll k,ll val){
    if(arr[start]==val)
       cout<<val<<endl;
    //  return true;
 auto e=upper_bound(arr.begin(),arr.end(),arr[start]+k);
 if(e==arr.end())e--;
  ll en=e-arr.begin();
 for(ll i=start;i<en;i++){
 //    finder(arr,n,i,end,k,val);
 //  cout<<arr[start]<<" "<<arr[i]<<endl;
  }   
 
     return false; 
}
int main(){
 fast();
new_int_3(n,k,p);
vector<ll>arr(n);
rep(i,0,n)cin>>arr[i];
w(p){
    new_int_2(l,r);
    ll left=arr[l-1];
    ll right=arr[r-1];
    sort(arr.begin(),arr.end());
    auto start=lower_bound(arr.begin(),arr.end(),left);
   ll star=start-arr.begin();
    auto end=upper_bound(arr.begin(),arr.end(),right);
    if(end==arr.end())end--;
  ll  endd=end-arr.begin();
 // cout<<left<<" "<<arr[star]<<" "<<right<<" "<<arr[endd]<<" "<<endl;
   cout<<finder(arr,n,star,endd,k,right)<<endl;
    }
 return 0;
}