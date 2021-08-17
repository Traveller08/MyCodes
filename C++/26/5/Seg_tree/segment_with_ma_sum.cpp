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
vl sum(400004,0);
vl seg(400004,0);
vl pre(400004,0);
vl suf(400004,0);
ll sum_in_range=0;
void build_tree(ll s,ll e,ll curr,vl &val)
{
    if(s==e){
    sum[curr]=val[e];
    seg[curr]=val[e];
    pre[curr]=val[e];
    suf[curr]=val[e];
    return;
    }
    ll mid=s+(e-s)/2;
    build_tree(s,mid,2*curr+1,val);
    build_tree(mid+1,e,2*curr+2,val);
    seg[curr]=max(seg[2*curr+1],max(seg[2*curr+2],suf[2*curr+1]+pre[2*curr+2]));
    pre[curr]=max(pre[2*curr+1],sum[2*curr+1]+pre[2*curr+2]);
    suf[curr]=max(suf[2*curr+2],sum[2*curr+2]+suf[2*curr+1]);
    sum[curr]=sum[2*curr+1]+sum[2*curr+2];   
}
void update_tree(ll s,ll e,ll curr,ll index,vl &val)
{
  if(s==e){
    sum[curr]=val[e];
    seg[curr]=val[e];
    pre[curr]=val[e];
    suf[curr]=val[e];
    return;
    }
    ll mid=s+(e-s)/2;
   if(index<=mid) update_tree(s,mid,2*curr+1,index,val);
    else update_tree(mid+1,e,2*curr+2,index,val);
    seg[curr]=max(seg[2*curr+1],max(seg[2*curr+2],suf[2*curr+1]+pre[2*curr+2]));
    pre[curr]=max(pre[2*curr+1],sum[2*curr+1]+pre[2*curr+2]);
    suf[curr]=max(suf[2*curr+2],sum[2*curr+2]+suf[2*curr+1]);
    sum[curr]=sum[2*curr+1]+sum[2*curr+2];   
}

void solve()
   {
       ni2(n,m);
       array(val,n);
       build_tree(0,n-1,0,val);
        seg[0]<0?cout<<0<<endl:cout<<seg[0]<<endl;
       w(m)
       {
           ni2(i,v);
           val[i]=v;
           update_tree(0,n-1,0,i,val);
          seg[0]<0?cout<<0<<endl:cout<<seg[0]<<endl;
       }
   }

int main(){
   fast();
   solve();
   khatam; 
}