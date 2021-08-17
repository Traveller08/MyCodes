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
#define new_str(s) string s;cin>>s
int main(){
 fast();
new_int_1(t);
new_str(s);
new_int_1(n);
w(n){
    new_int_2(l,r);
     
    l--;
    map<char,ll>store;
    string p=s;
    rep(i,l,r){
        store[s[i]]++;
    }
    
     sort(p.begin()+l,p.begin()+r,greater<int>());
    ll count=0;
    rep(i,l,r){
           
                  for(auto itr=store.begin();itr!=store.end();itr++){
                        
            if(itr->first!=p[i])
            {//cout<<itr->first<<" "<<itr->second<<" ";
                 store[itr->first]--;
                  if(itr->second==0){
                //        cout<<itr->first<<" "<<itr->second<<" ";
                 store.erase(itr);
               //  cout<<itr->first<<" "<<itr->second<<" ";
             }
                 count++;
                 break;
             
            
        }
     }//cout<<endl;
    
}
cout<<count<<"\n";
}
 return 0;
}