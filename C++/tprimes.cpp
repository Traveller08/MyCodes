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
bool prime[1000001]={};

void seive()
{   
    rep(i,2,1000001)
    {
        for(ll j=i*i;j<1000001;j+=i)
        {
            if(prime[j]==false)
            prime[j]=true;
        }
    }
   
}
int main(){
 fast();
 seive();
 //rep(i,0,100)cout<<store[i]<<" ";
new_int_1(t);
  w(t){
     new_int_1(n); 
   ll a=ceil(float(sqrt(n)));
   if(!prime[a] && a!=1 && a*a==n)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
 }
 return 0;
}