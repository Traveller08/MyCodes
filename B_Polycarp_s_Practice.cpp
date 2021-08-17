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
#define printp(x)  for(auto ele:x)cout<<ele.first<<" "<<ele.second<<endl;
#define mod 1000000007
#define siz1 200005
#define siz2 1000005
#define khatam return 0
#define all(x) x.begin(),x.end()
typedef vector<ll> vl;
typedef vector<pair<ll,ll>> vll;
typedef unordered_map<ll,ll> ull;
typedef map<ll,ll> mll;
bool op(pair<ll,ll>a,pair<ll,ll>b){return a.second<b.second;}
bool op1(pair<ll,ll>a,pair<ll,ll>b){
    if(a.first==b.first){return a.second>b.second;}
    return a.first>b.first;}

void solve()
   {
       ni2(n,k);
       vector<pair<ll,ll>>vt;
       rep(i,0,n,1)
       {
           ni1(p);
           vt.pb(mp(p,i+1));
       }
       sort(all(vt),op1);
      vector<pair<ll,ll>>ans;
      ll sum=0;
      rep(i,0,k,1){
          ans.pb(vt[i]);
          sum+=vt[i].first;
      }
      sort(all(ans),op);
    //  printp(ans);
      cout<<sum<<endl;
      if(k==1)cout<<n<<endl;
     if(k>1){
         cout<<ans[0].second<<" ";
          rep(i,1,k-1,1)cout<<ans[i].second-ans[i-1].second<<" ";
      cout<<n-ans[k-2].second<<endl;}
   }

int main(){
   fast();
  solve();
   khatam; 
}