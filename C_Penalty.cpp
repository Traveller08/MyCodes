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
vector<string> temp;
string s;
void build(ll i,string x){
    if(i==10){
        temp.pb(x);
        return;
    }
    if(s[i]=='?'){
        x.pb('1');
        build(i+1,x);
        x.pop_back();
        x.pb('0');
        build(i+1,x);
        x.pop_back();
    }
    else{
        x.pb(s[i]);
        build(i+1,x);
    }
}

void solve()
   {
       cin>>s;
    temp.clear();
    bool found=true;
    rep(i,0,9,1){
        if(s[i]!=s[i+1]){
            found=false;
            break;
        }
    }
    if(found){
        if(s[0]=='?')cout<<6<<endl;
        else cout<<10<<endl;
    }
    else {
        string x="";
        build(0,x);
       
        ll mn=INT_MAX;
        rep(i,0,temp.size(),1){
            ll ans=-1;
            ll p1=0,p2=0;
            rep(j,0,10,1){
                if(j%2==1 and temp[i][j]=='1')p2++;
                if(j%2==0 and temp[i][j]=='1')p1++;
                ll rem1=(11-j)/2-1,rem2=(10-j)/2;
                if(p1-p2>rem2 or p2-p1>rem1){
                    ans=j+1;
                    break;
                }
            }
            if(ans==-1)ans=10;
            mn=min(mn,ans);
        }
        cout<<mn<<endl;
    }
    
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