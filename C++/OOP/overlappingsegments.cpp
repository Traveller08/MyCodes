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
      new_int_2(n,q);
      vector<pair<ll,ll>intVal(n);
      vector<pair<ll,ll>>query(q);
    rep(i,0,n)
    {
        ll a,b;
        cin>>a>>b;
        intVal[i]=make_pair(a,b);
    }
    rep(i,0,q)
    {
       ll a,b;
       cin>>a>>b;
       query[i]=(make_pair(a,b)); 
    }


    // for(auto it=intVal.begin();it!=intVal.end();++it)
     //   cout<<intVal[j].first<<" "<<intVal[j].second<<" ";cout<<endl;
   //    rep(i,0,q)cout<<query[i].first<<" "<<query[i].second<< " ";cout<<endl; 
    rep(i,0,q)
    {  ll count=0;
        rep(j,0,n)
        {
            if((query[i].first>=intVal[j].first && query[i].second <=intVal[j].second) || (query[i].first>=intVal[j].first && query[i].first <=intVal[j].second) || (query[i].second >= intVal[j].first && query[i].second <= intVal[j].second)
            || (intVal[j].first>=query[i].first && intVal[j].second<=query[i].second) || (intVal[j].first>=query[i].first && intVal[j].first<=query[i].second) || (intVal[j].second>=query[i].first && intVal[j].second<=query[i].second))
            count++;
            
        }
        cout<<count<<endl;
    }
 }

 return 0;
}