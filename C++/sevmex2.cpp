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
bool checker(string str1, string str2){
    ll j=0;
    rep(i,0,str2.length()){
        if(str1[j]==str2[i])
        j++;
        if(j==str1.length())
        return true;
    }
    return false;
}
string generator(string str){
    queue<string>q;
    q.push("1");
   while(true){
       string s1=q.front();
       q.pop();
      
           if(checker(s1,str)==false)
           return s1;
           string s2=s1;
           q.push(s1.append("0"));
           q.push(s2.append("1"));
       
       
   }

}
int main(){
 fast();
new_int_1(t);
  w(t){
      new_str(s);
      int flag=0;
      rep(i,0,s.length()){
          if(s[i]=='0'){
              flag=1;
              break;}
      }
      if(flag==0)cout<<0<<endl;
      else cout<<generator(s);
 }
 return 0;
}