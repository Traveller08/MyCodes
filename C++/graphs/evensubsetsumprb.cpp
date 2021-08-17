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
int main(){
 fast();
new_int_1(t);
  w(t){
      new_int_1(n);
      array(arr,n);
      bool ft=0;
      ll ind1=0,ind2=0,ind3=0;
      rep(i,0,n)
      {
        if(ft==false && arr[i]%2!=0)
        {
           ind1=i+1;
           ft=true;
        }
        if(arr[i]%2!=0)
        {
            ind2=i+1;
        }
        if(arr[i]%2==0)
        {
            ind3=i+1;
            break;
        }
      }
   // cout<<ind1<<" "<<ind2<<" "<<ind3<<endl;
      if(ind3!=0)
      {
          cout<<1<<endl<<ind3<<endl;
      }
      else if(ind2!=ind1 && ind1!=0 && ind2!=0)
      {
          cout<<2<<endl<<ind1<<" "<<ind2<<endl;
      }
      else cout<<-1<<endl;
 }
 return 0;
}