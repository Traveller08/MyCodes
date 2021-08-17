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
unordered_map<ll,ll>fct;
ll fact(ll n)
{   if(n==0 || n==1)return 1;
    if(fct[n]!=0)return fct[n];
    
    return fct[n]= n*fact(n-1);
}
ll multi(ll n,ll r)
{
    ll ans=1;
    ll p=n;
    while(p>r)
    {
        ans*=p;
        p--;
    }
    return ans;
}
ll comb(ll n,ll r)
{
   ll a=max(r,n-r);
   ll b=min(r,n-r);
   ll up=multi(n,a);
   ll down=fact(b);
   ll ans=up/down;
    return ans;
}
int main(){
 fast();
 new_int_2(n,m);
 ll rem=n-(m-1);
 ll maxfr=0;
 if(rem>=2)maxfr=comb(rem,2);
 //cout<<rem<<endl;
 ll minfr=0;
 if(n%m==0)
 {
     ll no=n/m;
    if(no>=2) minfr=comb(no,2)*m;
 }
 else 
 {
     ll mem=n/m;
     
     ll remf=n%m;
     ll no1=0,no2=0;
    if(mem>=1) no1=comb(mem+1,2)*remf;
    if(mem>=2)  no2=comb(mem,2)*(m-remf);
    
  //  cout<<mem<<" "<<remf<<" "<<no1<<" "<<no2<<endl;
    //cout<<comb(mem+1,2)<<" "<<remf<<" "<<comb(mem,2)<<" "<<n-remf<<" "<<endl;
     minfr=no1+no2;
 }
 cout<<minfr<<" "<<maxfr<<endl;
 return 0;
}