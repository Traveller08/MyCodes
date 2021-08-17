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
      new_str(s);
      map<ll,set<ll>>mps;
      map<ll,set<ll>>mpe;
      ll count=0;

      ll no[n+1]={};
      rep(i,0,n)
      {
         if(s[i]=='+')
         {
             count++;
         }
         else if(s[i]=='-')
            count--;
         no[i+1]=count;
      }
      set<ll>st;
      for(ll i=0;i<n+1;i++){
            st.insert(no[i]);
            mps[i]=st;
      }
      set<ll>pt;
      for(ll i=n;i>=0;i--)
      {
         pt.insert(no[i]);
         mpe[i]=pt;
      }
      
      w(m)
      {
          new_int_2(l,r);
          set<ll>ans;
          ans.insert(mps[l-1].begin(),mps[l-1].end());
          if(r!=n)ans.insert(mpe[r+1].begin(),mpe[r+1].end());
           for(auto it=ans.begin();it!=ans.end();++it)cout<<*it<<" ";cout<<endl;
          cout<<ans.size()<<endl;
      }

 }
 return 0;
}