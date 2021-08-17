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
bool arr[1000002]={};
void swap(char *a,char *b)
{
    char* temp=b;
    b=a;
    a=temp;
}
void seive();
ll element_counter(ll arr[],ll mid,ll n,ll l,ll r){

    ll odd=0,even=0;
    for(ll i=1;i<pow(2,n);i++){

        ll pro=1;
        for(ll j=0;j<n;j++){
            if(i&(1<<j)){
                pro*=arr[j];
            }
        }
        ll p=0,a=i;
        while(a>0){
            p+=(a&1);
            a=a>>1;
        }
        if(p&1)odd+=(mid/pro);
        else even+=(mid/pro);
    }
    return odd-even;
}
bool checker(ll count1,ll count2,ll k)
{
    if(count1==k && count2<k)
    return true;
    else return false;
}
int main()
{
  
    new_int_1(t);
    while(t--){
    new_int_2(n,k);
    array(arr,n);
    
    ll l=1,r=100000000000000000;
    bool flag=0;
      //
    while(l<=r){
        // cout<<"left "<<l<<" "<<"right "<<r<<endl;
        ll mid=(l+r)/2;
        ll caunt1=element_counter(arr,mid,n,l,r);
        ll caunt2=element_counter(arr,mid-1,n,l,r);
        if(checker(caunt1,caunt2,k)){
            cout<<mid<<endl;
            flag=true;
            break;
        }
        if(caunt1<k)l=mid+1;
        else r=mid-1;
    }
    if(!flag)cout<<1<<endl;
    }
    return 0;
}
void seive()
{
  arr[0]=true;
  arr[1]=true;
  arr[2]=false;
  for(ll i=4;i<=1000000;i++)
  {
      arr[i]=true;
  }
  for(ll i=3;i*i<=1000000;i++)
  {
      for(ll j=i*i;j<=1000000;j+=i)
      {
          if(arr[j]==false)arr[j]=true;
      }
  }
}