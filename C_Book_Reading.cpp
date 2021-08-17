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
ll sum_of_muliples(ll a,ll n)
{
    ll sum=0;
    rep(i,0,n,1)
    {
        ll temp=a*(i+1);
        sum+=(temp%10);
    }
    return sum;
}
ll no_of_dig(ll n)
{
    ll no=0;
    while (n>0)
    {
      
       no++;
       n/=10;
    }
    return no;
}
ll power(ll a,ll b)
{
    ll ans=1;
    rep(i,0,b,1)ans*=a;
    return ans;
}
void solve()
   {
       ni2(n,m);
       ll div=n/m;
       ll dig=no_of_dig(div);
       ll sum_ten=sum_of_muliples(m,10);
       ll ans=0;
       ll left_most=div%10;
       div/=10;
       ll po=0;
       while (dig--)
       {
          ll temp=div%10;
          div/=10;
          ans+=(temp*sum_ten*power(10,po));
          po++;
       }
       //cout<<div<<" "<<m<<" "<<left_most<<" "<<ans<<endl;
       ans+=sum_of_muliples(m,left_most);
       cout<<ans<<endl;
      
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