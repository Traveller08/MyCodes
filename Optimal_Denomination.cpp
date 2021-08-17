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
vl st(400005);
void build(ll s,ll e,ll curr,vl &val)
{
   if(s==e){st[curr]=val[s];return;}
   ll mid=s+(e-s)/2;
   build(s,mid,2*curr+1,val);
   build(mid+1,e,2*curr+2,val);
   st[curr]=__gcd(st[2*curr+1],st[2*curr+2]);
}
ll query(int id, int l, int r, int lq, int rq)
{
    
    if(l>rq || r<lq)
        return 0;
    if(l>=lq && r<=rq)
        return st[id];
    int mid=(l+r)/2;
    return __gcd(query(2*id+1,l,mid,lq,rq),query(2*id+2,mid+1,r,lq,rq));
}

void solve()
   {
     ni1(n);
     array(val,n);    
   if(n==1)cout<<1<<endl;
   else{  build(0,n-1,0,val);
     ll sum=0;
     rep(i,0,n,1)sum+=val[i];
     ll ans=1e18;
        ll l=0;
        ll r=query(0,0,n-1,1,n-1);
        ll temp=(sum-val[0])/__gcd(l,r);
        temp++;
        ans=min(ans,temp);
        r=0;
        l=query(0,0,n-1,0,n-2);
         temp=(sum-val[n-1])/__gcd(l,r);
        temp++;
        ans=min(ans,temp);

     rep(i,1,n-1,1){
         l=query(0,0,n-1,0,i-1);
         r=query(0,0,n-1,i+1,n-1);
         temp=(sum-val[i])/__gcd(l,r);
        temp++;
        ans=min(ans,temp);
     }
     cout<<ans<<endl;
      st.clear();}
   }

int main(){
   fast();
   ni1(t);
       w(t)
       {
          solve();
       }
   khatam; 
}