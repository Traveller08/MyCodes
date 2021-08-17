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

void permute(string s, int left,int right){
    if(left == right){
      rep(i,0,s.length())cout<<s[i]<<" ";
      cout<<endl;
        return;
    }
    rep(i,left,right+1){
         swap(s[left],s[i]);
        permute(s,left+1,right);
         swap(s[left],s[i]);
    }  
}
int main(){
 fast();
 string s="1234";
 permute(s,0,s.length()-1);
 return 0;
}