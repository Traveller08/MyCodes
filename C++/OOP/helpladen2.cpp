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
vector<ll>ans(1000005,0);
unordered_map<ll,vector<ll>>store;
void seive()
{
    rep(i,2,1000002)
    {
        if(ans[i]==0)
        {
            ans[i]=i;
            store[i].push_back(i);
            for(ll j=i*i;j<=1000002;j+=i)
            {
                if(ans[j]==0){
                 ans[j]=i;
                 store[i].push_back(j);
                }
            }
        }
    }
    
    
}
int main(){
 fast();
 seive();
new_int_1(t);
  w(t){
      ll count=0;
      new_int_3(p,l,r);
      ll a=lower_bound(store[p].begin(),store[p].end(),l)-store[p].begin();
      ll b=upper_bound(store[p].begin(),store[p].end(),r)-store[p].begin();
   //   cout<<a<<endl<<b<<endl;
      count=b-a;
     
      cout<<count<<endl;
 }
 return 0;
}