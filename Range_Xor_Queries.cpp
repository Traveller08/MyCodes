#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll int
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
vector<long long int> st(900009);
void build_tree(ll s,ll e,ll curr,vl &val)
{
    if(s==e){st[curr]=val[s]; return;}
    ll mid=s+(e-s)/2;
   build_tree(s,mid,2*curr+1,val);
   build_tree(mid+1,e,2*curr+2,val);
   st[curr]=st[2*curr+1]^st[2*curr+2];
}
long long int query_ans(ll s,ll e,ll curr,ll l,ll r)
{
    if(l<=s and r>=e)return st[curr];
    if(l>e or r<s)return 0;
     ll mid=s+(e-s)/2;
     return query_ans(s,mid,2*curr+1,l,r)^query_ans(mid+1,e,2*curr+2,l,r);
}

void solve()
   {
       ni2(n,q);
       array(val,n);
       build_tree(0,n-1,0,val);
     
       w(q){
          ni2(l,r);
          cout<<query_ans(0,n-1,0,l-1,r-1)<<endl;   
       }
   }

int main(){
   fast();
   solve();
   khatam; 
}