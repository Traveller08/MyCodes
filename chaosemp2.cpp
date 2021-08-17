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
new_int_3(t,q,d);
  w(t){
      ll l1=-1e18-1,r1=1e18+1,l2=-1e18-1,r2=1e18+1;
      ll weapon=1;
      string input;
      ll check=-1;

      while(true)
      {
          if(weapon==1)
          {
              if(r1>=(l1+2) && r2>=(l2+2))
              {   ll midx=(r1+l1)/2;
              ll midy=(r2+l2)/2;
                  cout<<weapon<<" "<<(r1+r2)/2<<" "<<(r1+r2)/2<<endl;
                  cin>>input;
                  if(input=='O' || input=="FAILED")
                    break;
                  if(input[0]=='X')
                  {
                      l1 = midx-1;
                      r1=midx+1;
                  }
                  else if(input[0]=='P')
                  {
                      if(d==0)
                      {
                          r1=midx-1;
                      }
                      else{
                          l1=midx+1;
                          r1++;
                      }
                  }
                  if(input[1]=='Y')
                  {
                      l2=midy-1;
                      r2=midy+1;
                  }
                  else if(input[1]=='P')
                  {
                      if(d==0)
                      {
                          r2=midy-1;

                      }
                      else{
                          r2=midy;
                          l2--;
                      }
                  }
                  else{
                      if(d==0)
                      {
                          
                      }
                      else{
                          if(r1<=(l1+3)&&(r2<=(l2+3)))
                          {
                              weapon=2;
                          }
                      }
                  }
                  else{
                      weapon=2;
                      cout<<weapon<<" "<<l1<<" "<<l2<<" "<<r1<<" "<<r2<<endl;
                      cin>>input;
                      break;
                  }
              }
              else{
                  if(r1==(l1+3)&&(r2==(l2+3)))
                  {
                      cout<<weapon<<" "<<l1<<" "<<l2<<" "<<l1+2<<" "<<r2<<endl;
                  }
                  cin>>input;
                  if(input=='O')
                  {

                  }
                  else if(input=="IN"){
                    cout<<weapon<<" "<<l1<<" "<<l2<<" "<<r1<<" "<<l2+2<<endl;
                    cin>>input;
                  }
                  else
                  {
                      cout<<weapon<<" "<<l1<<" "<<l2+2<<" "<<r1<<" "<<l2+4<<endl;
                      cin>>input;
                                        }
                                        break;
              }
              if(r1==(l1+3) && (r2==(l2+2)))
              {
                  cout<<weapon<<" "<<l1<<" "<<l2<<" "<<l1+2<<" "<<r2<<endl;
                  cin>>input;
                  if(cc=='O')
                  {

                  }
                  else if(cc=="IN")
                  {
                     cout<<weapon<<" "<<l1<<" "<<l2<<" "<<l1+2<<" "<<r2<<endl;
                     cin>>input;
                  }
                  else
                  {
                      cout<<weapon<<" "<<l1+2<<" "<<l2<<" "<<l1+4<<" "<<r2<<endl;
                      cin>>input;
                  }
                  break;
              }
              else 
              {
                  cout<<weapon<<" "<<l1<<" "<<l2<<" "<<r1<<" "<<r2<<endl;
                  cin>>input;
                  break;
              }
              
          }
      }
 }
 return 0;
}