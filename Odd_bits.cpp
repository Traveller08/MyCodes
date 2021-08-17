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
#define print(x) for(auto ele:x)cout<<ele<<'	';cout<<endl;
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
vector<int>sum(10000010,0);
map<int,int>mpp;
int bits_cnt(ll n){
    ll ans=0;
    vector<short>bts;
    while(n>0){
        bts.pb(n%2);
        n/=2;
    }
    reverse(all(bts));
    rep(i,0,bts.size(),1){
        if(i%2==0 and bts[i]==1)ans++;
    }
    return ans;
}
void precal(){
    rep(i,1,10000001,1){
        sum[i]=bits_cnt(i);
        sum[i]+=sum[i-1];
    }
    rep(i,0,10000001,1)mpp[sum[i]]=i;
}
void solve()
   {
       ni1(n);
       if(mpp[n]!=0)cout<<mpp[n]<<endl;
       else {
           auto it=mpp.find(n);
           it++;
           cout<<it->second<<endl;
           mpp.erase(n);
       }
   }
 
int main(){
   fast();
   precal();
  ni1(t);
  rep(lll,0,t,1)solve();
   khatam; 
}