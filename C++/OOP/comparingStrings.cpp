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
 new_str(s1);
 new_str(s2);
 ll count=0;
 if(s1.length()!=s2.length())
 {
     cout<<"NO"<<endl;
 }
 else
 {  vector<ll>pos;
  
    rep(i,0,s1.length()){
        if(s1[i]!=s2[i])
        {   pos.push_back(i);
            count++;
            }
    }
    if(count!=2)cout<<"NO"<<endl;
    else {
        swap(s1[pos[0]],s1[pos[1]]);
      
        if(s1==s2)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        }
 }
 
 return 0;
}