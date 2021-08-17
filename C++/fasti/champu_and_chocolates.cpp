#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define pf push_front
#define rep(i,a,b,k) for(ll i=a;i<b;i+=k)
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
  w(t){
   new_int_1(n);
   ll size=n;
   map<ll,ll>sweet;
   w(size){
       new_int_1(s);
       sweet[s]++;
   }
   rep(i,0,n,1){
       new_int_1(p);
       auto itr=sweet.lower_bound(p);
       if(itr==sweet.end()){
           itr--;
           cout<<itr->first<<" ";
           sweet[itr->first]--;
             if(itr->second == 0)
            itr = sweet.erase(itr);
       }
       else if(itr==sweet.begin()){
           auto itr1=itr;
           itr1++;
           ll ans=(itr1->first-p)<(p-itr->first)?itr1->first:itr->first;
            auto itr2=(itr1->first-p)<(p-itr->first)?itr1:itr;
           cout<<ans<<" ";
           sweet[ans]--;
             if(itr2->second == 0)
            itr2 = sweet.erase(itr2);
       }
       else{
           if(itr->first==p && itr->second!=0){
             cout<<itr->first<<" ";
             sweet[itr->first]--;
               if(itr->second == 0)
            itr = sweet.erase(itr);

           }
           else{
                 auto itr1=itr;
           itr1--;
           ll ans=(itr->first-p)<(p-itr1->first)?itr->first:itr1->first;
            auto itr2=(itr->first-p)<(p-itr1->first)?itr:itr1;
           cout<<ans<<" ";
           sweet[ans]--;
                 if(itr2->second == 0)
            itr2 = sweet.erase(itr2);

           }
       }
   }
   cout<<"\n";

 }
 return 0;
}