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
string power(ll a,ll b)
{   string ans="1";
    while(b--)
    {
        ans+="0";
    }
    return ans;
}
int main(){
 fast();
 new_int_3(n,x,y);
 new_str(s);
 string str=s.substr(n-x,x);
 string str1=power(10,y);
 ll l=str1.length();
 ll dif=x-l;
 for(ll i=0;i<dif;i++)
 {
     str1="0"+str1;
 }
 ll ans=0;
 for(ll i=0;i<x;i++)
 {
     if(str[i]!=str1[i])ans++;
 }
 cout<<ans<<endl;
 //cout<<str<<" "<<str1<<endl;


 
 return 0;
}