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
ll test=1;
  w(t){
      ll minmCost=0;
      new_int_2(x,y);
      new_str(s);
         if(s[0]=='?'&&s[1]=='?'){
            rep(i,1,s.size()){

                if(s[i]!='?'){
                    s[0]=s[i];
                    break;
                }
            }
        }
        else if(s[0]=='?'&&s[1]!='?')s[0]=s[1];
        for(ll i=1;i<s.size()-1;i++){

          if(s[i]=='?')  {if((s[i-1]=='C')&&(s[i+1]=='C'))s[i]='C';
            else if((s[i-1]=='J')&&(s[i+1]=='J'))s[i]='J';
            else if((s[i-1]=='C')&&(s[i+1]=='J')){
                if(x<y)s[i]='C';
                else s[i]='J';
            }
            else if((s[i-1]=='J')&&(s[i+1]=='C')){
                if(y<x)s[i]='C';
                else s[i]='J';
            }
            else if(s[i+1]=='?'){
                s[i]=s[i-1];
                s[i+1]=s[i];
            }}
        }
        
        if(s[s.size()-1]=='?')s[s.size()-1]=s[s.size()-2];
        for(ll i=0;i<s.size()-1;i++){

            if((s[i]=='C')&&(s[i+1]=='J'))minmCost+=x;
            else if((s[i]=='J')&&(s[i+1]=='C'))minmCost+=y;
        }
          cout<<"Case #"<<test<<": "<<minmCost<<"\n";
          test++;
      }

 
 return 0;
}