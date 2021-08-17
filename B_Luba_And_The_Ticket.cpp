#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll  int
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
ll no_of_dig(ll n){
    ll ans=0;
    while(n>0){
        ans++;
        n/=10;
    }
    return ans;
}

void solve()
   {
        ns(s);
        vector<string>val;
        val.pb("000000");
        for(int i=1;i<=1000000;i++){
            ll aa=6-no_of_dig(i);
            string temp,t1;
            rep(j,0,aa,1)temp.pb('0');
            stringstream ss;
            ss<<i;
            ss>>t1;
            temp+=t1;
            ll sum1=0,sum2=0;
            rep(j,0,3,1)sum1+=temp[j]-'0';
            rep(j,3,6,1)sum2+=temp[j]-'0';
            if(sum1==sum2)val.pb(temp);
            else continue;
        }
       int ans=6,m=val.size();
       rep(i,0,m,1){
           int tp=0;
           rep(j,0,6,1){
               if(val[i][j]!=s[j])tp++;
           }
           ans=min(ans,tp);
       }
       cout<<ans<<endl;
   }

int main(){
   fast();
 solve();
   khatam; 
}