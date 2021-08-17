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
      new_int_3(n, m, k);
        ll arr[n+1][m+1]={};
         ll ans = 0, one_element = 0;

        rep(i, 0, n)
        {
            rep(j, 0, m)
            {
                cin >> arr[i+1][j+1];
                if (arr[i+1][j+1] >= k)
                    one_element++;
            }
        }
    

        rep(i, 0, n+1)
        {
            rep(j, 1, m+1)
            {
                arr[i][j] += arr[i][j - 1];
            }
        }
     
        rep(i, 0, m+1)
        {
            rep(j, 1, n+1)
            {
                arr[j][i] += arr[j - 1][i];
            }
        }
   ll count=0,order=0;
   ll maxsize=min(m,n);
   while (order<maxsize+1)
   {
      ll i=order;
      ll j=m;
      while (i<n+1)
      {
          ll x=i-order+1;
          ll y=j-order+1;
          ll temp=arr[i][j]-arr[x-1][y]-arr[i][y-1]+arr[x-1][y-1];
          if(((temp)/(order*order))<k)i++;
          else{
              ll start=order;
              ll end=m;
              ll ans=0;
              while (start<=end)
              {
                  ll mid=(start+end)/2;
                  x=i-order+1;
                  y=mid-order+1;
                   temp=arr[i][j]-arr[x-1][y]-arr[i][y-1]+arr[x-1][y-1];
                 if(temp<k)
                 start=mid+1;
                 else{
                   ans=mid;
                   end=mid-1;
                   break;
                 }
              }
              count+=m-ans+1;
              i++;
              
          }
          order++;
      }
      
   }
   cout<<count<<endl;
 }
 return 0;
}