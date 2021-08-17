#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define pf push_front
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define mem0(a) memset(a,0,sizeof(a))
#define w(t) while(t--)
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
      ll value[n];
      ll col=0;
      rep(i,0,n){
          cin>>value[i];
          col=max(col,value[i]);
      }
      ll grid[n][col]={};
      rep(i,0,n){
          rep(j,0,value[n-i-1]){
              grid[i][j]=1;
          }
      }
       ll count=0;
      for(ll i=0;i<n;i++){
         
        
          for(ll j=0;j<col;j++){
              if(grid[i][j]==1){
                  grid[i][j]=0;
                  count++;
                ll a=i,b=j;
                while(a<=n-1 && b>-1){
                     a++;b--;
                     
                   if( a>=0 && b>=0 && a<=n-1 && b<=col-1)  {if(grid[a][b]==1){
                       //  cout<<a<<" "<<b<<" ";
                        grid[a][b]=0;
                        
                     }
                     else break;}

                }
            //    cout<<endl;
              }
          }  
           
          }
          cout<<count<<endl;
      }

 
 return 0;
}