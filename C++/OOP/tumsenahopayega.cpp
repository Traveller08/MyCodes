/*************************************************************
** AUTHOR : ANKIT CHAUDHARY **
*************************************************************/
#include<bits/stdc++.h>
using namespace std;
#define somri_vai ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
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
#define dom 1000000007
void product(ll a[3][3],ll b[3][3])
{
  ll ans[3][3]={};
  rep(i,0,3)
  {
    rep(j,0,3)
    {
        rep(k,0,3)
        {
          ans[i][j]+=(a[i][k]*b[k][j]%dom)%dom;
        }
    }
  }
  rep(i,0,3)
  {
    rep(j,0,3)
    {
      a[i][j]=ans[i][j];
    }
  }

}
ll exponentCal(ll repMat[3][3],ll n,ll a,ll b,ll c,ll x,ll y,ll z)
{
  ll dupMat[3][3]={
    {a,b,c},
    {1,0,0},
    {0,1,0}
  };
  if(n==1)
   return ((z*repMat[0][0])%dom+(y*repMat[0][1])%dom+(x*repMat[0][2])%dom)%dom;
   exponentCal(repMat,n/2,a,b,c,x,y,z);
  product(repMat,repMat);
  if(n%2!=0)product(repMat,dupMat); 
  return ((z*repMat[0][0])%dom+(y*repMat[0][1])%dom+(x*repMat[0][2])%dom)%dom;
}
int main(){
 somri_vai;
new_int_1(t);
  w(t){
    new_int_1(n);
    new_int_6(a,b,c,x,y,z);
    ll repMat[3][3]={
      {a,b,c},
      {1,0,0},
      {0,1,0}
    };
    if(n==2)
    cout<<z<<endl;
    else if(n==1)
     cout<<y<<endl;
    else if(n==0)
     cout<<x<<endl;
    else 
    {
         cout<<exponentCal(repMat,n-2,a,b,c,x,y,z)<<endl;
    }
 }
 return 0;
}