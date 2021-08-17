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
#define siz 100002
#define array(arr,n) ll arr[n];rep(i,0,n)cin>>arr[i];
#define new_int_1(t) ll t;cin>>t;
#define new_int_2(a,b) ll a,b;cin>>a>>b
#define new_int_3(a,b,c) ll a,b,c;cin>>a>>b>>c
#define new_int_4(a,b,c,d) ll a,b,c,d;cin>>a>>b>>c>>d
#define new_int_6(a,b,c,d,e,f) ll a,b,c,d,e,f;cin>>a>>b>>c>>d>>e>>f
#define new_str(s) string s;cin>>s
bool arr[siz]={};
void sieve()
{
    arr[0]=true;
    for(ll i=4;i<siz;i+=2)
    {
        if(arr[i]==false)arr[i]=true;
    }
    for(ll i=3;i<siz;i++){
    for ( ll j=i*i;j<siz;j+=i)
    {
        if(arr[j]==false)arr[j]=true;
    }
    }
   // rep(i,0,100)cout<<i<<" "<<arr[i]<<" "<<endl;;cout<<endl;
}
int main(){
 fast();
 sieve();
new_int_1(t);
  w(t){
   new_int_1(n);
   array(mat,n);
   sort(mat,mat+n,greater<ll>());
   ll flag=0;
   vector<ll>ans;
   rep(i,0,n)
   {
       if(arr[mat[i]]==true)
       {ans.push_back(mat[i]);
        flag++;}
       
   }
 
   if(flag!=0){
       for(ll i=0;i<ans.size();i++)
       {
           cout<<ans[i];
       }
       cout<<endl;
   }
   else if(flag==false){
        cout<<"No Secret Code!"<<endl;
        }
 }
 return 0;
}