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
vl fact(1001,1);
void fct()
{
   ll ans=1;
   rep(i,1,1001,1){fact[i]=(fact[i-1]*i)%mod;}
}
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a)%mod;
        a = (a * a)%mod;
        b >>= 1;
    }
    return res%mod;
}

void solve()
   {
    ni2(n,m);
    array(val,n);
 
    vl freq(n+1,0);
    vl no(n+1,0);
    sort(all(val),greater<ll>());
    rep(i,0,m,1)no[val[i]]++;
    rep(i,0,n,1)freq[val[i]]++;
    ll ans=1;
    ll k=m;
    for(ll i=n;i>=0 and k>0;i--)
    {
        if(freq[i]>0)
        {
          
          ans*=fact[freq[i]] * 1ll * binpow(fact[no[i]], mod - 2) % mod * 1ll * binpow(fact[freq[i]-no[i]], mod - 2) % mod;
           k--;
        }
    }
    cout<<ans<<endl;
   }

int main(){
   fast();
  fct();
   ni1(t);
       w(t)
       {
          solve();
       }
   khatam; 
}
