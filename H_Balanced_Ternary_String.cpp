#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pf push_front
#define rep(i,a,b,k) for(ll i=a;i<b;i+=k)
#define rept(i,a,b) for(auto i=a;i!=b;++i)
#define drep(i,a,b,k) for(ll i=a;i>=b;i-=k)
#define mem0(a) memset(a,0,sizeof(a))
#define mem1(a) memset(a,0,sizeof(a))
#define w(t) while(t--)
#define array(arr,n) vector<ll>arr(n);for(ll i=0;i<n;i++)cin>>arr[i];
#define ni1(t) ll t;cin>>t;
#define ni2(a,b) ll a,b;cin>>a>>b
#define ni3(a,b,c) ll a,b,c;cin>>a>>b>>c
#define ni4(a,b,c,d) ll a,b,c,d;cin>>a>>b>>c>>d
#define ni5(a,b,c,d,e) ll a,b,c,d,e;cin>>a>>b>>c>>d>>e
#define ni6(a,b,c,d,e,f) ll a,b,c,d,e,f;cin>>a>>b>>c>>d>>e>>f
#define ns(s) string s;cin>>s
#define print(x) for(auto ele:x)cout<<ele<<" ";cout<<endl;
#define printp(x)  for(auto ele:x)cout<<ele.first<<" "<<ele.second<<endl;
#define printm(m) for(auto x:m)cout<<x.first<<" "<<x.second<<endl;
#define mod 1000000007
#define siz1 200005
#define siz2 1000005
#define khatam return 0
#define xt first
#define yt second
#define all(x) x.begin(),x.end()
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << x << endl
#define dbg(x){cerr << #x << " = {";int cnt = x.size();for (auto i : x){cerr << i;cnt--;if(cnt)cerr << ", ";}cerr << "}"<< endl;}
#else
#define debug(x) 1
#define dbg(x) 1
#endif
typedef vector<ll> vl;
typedef vector<pair<ll,ll>> vll;
typedef unordered_map<ll,ll> ull;
typedef map<ll,ll> mll;
typedef pair<ll,ll>pll;
inline ll mod_add(ll a,ll b,ll m){a = a % m;b = b % m;return (((a + b) % m) + m) % m;}
inline ll mod_mul(ll a,ll b,ll m){a = a % m;b = b % m;return (((a * b) % m) + m) % m;}
inline ll mod_sub(ll a,ll b,ll m){a = a % m;b = b % m;return (((a - b) % m) + m) % m;}
ll binPow(ll x,ll n,ll m){ll res=1;while(n){if(n&1) res=(res*x)%m;x=(x*x)%m;n>>=1;}return res;}
ll modInv(ll i, ll m) {return binPow(i,m-2,m);}
//vl fact(siz1);
//ll ncr(int n,int r) {return (n>=r?(fact[n]*modInv(fact[r],mod))%mod*modInv(fact[n-r],mod)%mod:0);}
//void factorial(){fact[0]=1;rep(i,1,siz1,1)fact[i]=(fact[i-1]*i)%mod;}
ll no_of_digits(ll a){ll cnt=0;while(a>0){a/=10;cnt++;}return cnt;}
ll _log(ll a,ll b){ll cnt=0;while(a>0){a/=b;cnt++;}return cnt;}
inline ll getmin(ll a,ll b){return min(a,b);}
inline ll getmin(ll a,ll b,ll c){return min(min(a,b),c);}
inline ll getmin(ll a,ll b,ll c,ll d){return min(a,min(b,min(c,d)));}
inline ll getmax(ll a,ll b){return max(a,b);}
inline ll getmax(ll a,ll b,ll c){return max(a,max(b,c));}
inline ll getmax(ll a,ll b,ll c,ll d){return max(a,max(b,max(c,d)));}


void solve()
    {
        ni1(n);
        ns(s);
        ll cnt0=0,cnt1=0,cnt2=0;
        rep(i,0,n,1){
            if(s[i]=='0')cnt0++;
            else if(s[i]=='1')cnt1++;
            else if(s[i]=='2')cnt2++;
        }
        ll req=n/3;
        bool vis[n]={};
        ll curr=0;
      
           
               rep(i,0,n,1){
            if(s[i]=='2'){
                if(cnt2>req){
                    if(cnt0<req){
                       s[i]='0';
                       cnt0++;
                       cnt2--;
                    }
                }
            }
            else if(s[i]=='1'){
                if(cnt1>req){
                    if(cnt0<req){
                       s[i]='0';
                       cnt0++;
                       cnt1--;
                    }
                }
            }
          
         }
        rep(i,0,n,1){
            if(s[i]=='0'){
                curr++;
                vis[i]=true;
                if(curr==req){
                    break;
                }
            }
        }
        curr=0;
       
        
        for(int i=n-1;i>=0;i--){
            if(s[i]=='0'){
              if(cnt0>req){
                  if(cnt2<req){
                      s[i]='2';
                      cnt2++;
                      cnt0--;
                  }
              }
            }
            else if(s[i]=='1'){
                if(cnt1>req){
                    if(cnt2<req){
                       s[i]='2';
                       cnt2++;
                       cnt1--;
                    }
                }
            }
        }
        for(int i=n-1;i>=0;i--){
            if(s[i]=='2'){
                curr++;
                vis[i]=true;
                   if(curr==req){
                    break;
                }
            }
        }
       
        for(int i=n-1;i>=0;i--){
           if(!vis[i])
           { if(s[i]=='0'){
              if(cnt0>req){
                  if(cnt1<req){
                      s[i]='1';
                      cnt1++;
                      cnt0--;
                  }
              }
            }
            else if(s[i]=='2'){
                if(cnt2>req){
                    if(cnt1<req){
                       s[i]='1';
                       cnt1++;
                       cnt2--;
                    }
                }
            }
            }
        }
         
        cout<<s<<endl;
    }

int main(){
    fast();
   // ni1(t);w(t)
    solve();
    khatam; 
}