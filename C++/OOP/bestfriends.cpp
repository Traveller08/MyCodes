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
      new_int_2(n,m);
      ll arr[n][m];
      rep(i,0,n)
      {
          rep(j,0,m)
          {
              cin>>arr[i][j];
          }
      }
      ll greNeg=INT_MAX;
      ll zero=0;
      ll neg=0;
      ll sumTotal=0;
      ll smallest=INT_MAX;
       rep(i,0,n)
      {
          rep(j,0,m)
          {  sumTotal+=(abs(arr[i][j]));
             smallest=min(abs(arr[i][j]),smallest);
            if(arr[i][j]==0)zero++;
            else if(arr[i][j]<0)
            {
                neg++;
                greNeg=min(abs(arr[i][j]),greNeg);
            }
          }
        }
      if(zero>0)
      {
          cout<<sumTotal<<endl;
      }
      else if(neg%2==0)
      {
          cout<<sumTotal<<endl;
      }
      else if(neg%2!=0)
      {
          cout<<sumTotal-2*smallest<<endl;
      }
    
    
        

 }
 return 0;
}