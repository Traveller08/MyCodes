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
ll digitscounter(ll d)
{ll dig=0;
    while(d>0)
    {
        d/=10;
        dig++;
    }
    return dig;
}
ll power(ll a,ll b)
{ ll ans=1;
  while(b--)
  {
     ans*=a;
  }
  return ans;
}
ll counterOf(ll* arr,ll n)
{ ll  count=0;
  rep(i,1,n)
  { //cout<<i<<endl;
     if(arr[i]<=arr[i-1])
      {
         ll no_a=digitscounter(arr[i]);
         ll no_b=digitscounter(arr[i-1]);
         ll dif=no_b-no_a;
         if(dif==0)
         {
           count++;
           arr[i]=arr[i]*10;
         }
         else{
           count+=dif;
           ll a=power(10,dif);
           arr[i]=arr[i]*a;
         }
         if(arr[i]<=arr[i-1])
         {
           count++;
           arr[i]=arr[i]*10;
         }
         

      }
  }
 // rep(i,0,n)cout<<arr[i]<<" ";cout<<endl;
return count;
}
int main(){
 fast();
new_int_1(t);
ll test=0;
  w(t){
      new_int_1(n);
      array(arr,n);
       test++;
            cout << "Case #" << test << ": " << counterOf(arr,n) << endl;
 }
 return 0;
}