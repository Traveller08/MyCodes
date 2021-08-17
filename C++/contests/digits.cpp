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
vector<ll> dig(ll val[],ll n,ll k,ll pro,vector<ll>st)
{
   if(pro%10==k)return st;
   else if(pro%10!=k && n==0)
   {
       st.clear();
       return st;
   }
   vector<ll>py=st;
   ll p=val[n-1];
   st.push_back(p);
    max(dig(val,n-1,k,pro*val[n-1],st),dig(val,n-1,k,pro,py));

}
int main(){
 fast();
 new_int_2(n,k);
 array(val,n);
 vector<ll>st;
 vector<ll>ans=dig(val,n,k,1,st);
 ll sz=ans.size();
 rep(i,0,sz)cout<<ans[i]<<" ";cout<<endl;
 return 0;
}