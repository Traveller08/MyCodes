#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pf push_front
#define rep(i,a,b,k) for(ll i=a;i<b;i+=k)
#define rept(i,a,b) for(auto i=a;i!=b;++i)
#define drep(i,a,b,k) for(ll i=a;i>=b;i--)
#define mem0(a) memset(a,0,sizeof(a))
#define w(t) while(t--)
#define array(arr,n) vector<ll>arr(n);for(ll i=0;i<n;i++)cin>>arr[i];
#define ni1(t) ll t;cin>>t;
#define ni2(a,b) ll a,b;cin>>a>>b
#define ni3(a,b,c) ll a,b,c;cin>>a>>b>>c
#define ni4(a,b,c,d) ll a,b,c,d;cin>>a>>b>>c>>d
#define ni5(a,b,c,d,e) ll a,b,c,d,e;cin>>a>>b>>c>>d>>e
#define ni6(a,b,c,d,e,f) ll a,b,c,d,e,f;cin>>a>>b>>c>>d>>e>>f
#define ns(s) string s;cin>>s
#define getmax(a,b) a>b?a:b
#define getmin(a,b) a<b?a:b
#define print(x) for(auto ele:x)cout<<ele<<" ";cout<<endl;
#define printp(x)  for(auto ele:x)cout<<ele.firs<<'	'<<ele.second<<endl;
#define mod 1000000007
#define siz1 200005
#define siz2 1000005
#define khatam return 0
#define all(x) x.begin(),x.end()
typedef vector<ll> vl;
typedef vector<pair<ll,ll>> vll;
typedef unordered_map<ll,ll> ull;
typedef map<ll,ll> mll;
typedef pair<ll,ll> pll;
typedef tuple<ll,ll,ll>tlll;
#define mt make_tuple
bool op(const tlll &a, const tlll &b){return get<1>(a)<get<1>(b);}
void solve()
   {
      ni1(n);
      vector<tlll>val;
      rep(i,0,n,1){
          ni2(p,q);
         // cout<<p<<" "<<q<<endl;
          val.pb(mt(p,q,i+1));
      }      
       sort(all(val),op);
       ll minm=get<0>(val[0]),maxm=get<1>(val[0]),cnt=0;
       vl pos;
       rep(i,0,n,1){
           if((get<0>(val[i])>=minm and get<0>(val[i])<=maxm) or (get<0>(val[i])<=maxm and get<1>(val[i])>=maxm) or (minm>=get<0>(val[i]) and maxm<=get<1>(val[i]))){
               cnt++;
               pos.pb(get<2>(val[i]));
               minm=min(minm,get<0>(val[i]));
               maxm=max(maxm,get<1>(val[i]));
           }
       }
       vl ans(n,2);
       rep(i,0,pos.size(),1){
           ans[pos[i]-1]=1;
       }
       if(cnt==n)cout<<-1<<endl;
       else {
           print(ans);
       }
  }

int main(){
   fast();
   ll test=0;
   ni1(t);
       w(t)
       { test++;
    //   cout<<"#test "<<test<<" : "<<endl;
          solve();
       }
   khatam; 
}