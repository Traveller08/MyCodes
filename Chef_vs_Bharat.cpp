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
long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
vl chefora(100008,0);
vl sumChefora(100008,0);
void gen(){
       rep(i,1,10,1)chefora[i]=i;
      rep(i,10,100008,1){
        int temp=i;
         stringstream ss;
         string s;
         ss<<temp;
         ss>>s;
         string p=s;
         reverse(all(s));
         string pp=s.substr(1);
         p+=pp;
         stringstream ss1(p);
         ss1>>chefora[i];
      }
      unsigned ll sum=0;
     // sort(all(chefora));
      rep(i,0,100005,1)sum+=chefora[i],sumChefora[i]=sum;
    //  cout<<sum<<endl;
}

void solve()
   {
       ni2(l,r);
       ll pw=sumChefora[r]-sumChefora[l];
       cout<<binpow(chefora[l],pw,mod)<<endl;
   }

int main(){
   fast();
   gen();
   ni1(t);
       w(t)
       {
          solve();
       }
   khatam; 
}