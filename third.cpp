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
        map<ll,vl>val;
        rep(i,0,n,1){
            ni1(m);
           rep(j,0,m,1){
               ni1(po);
               val[i].pb(po);
           }
        }
        map<ll,vl>arr;
        ll cost=0;
        rep(i,0,n,1){
            vl temp=val[i];
            ll mn=temp.size();  
            
            for(ll j=0;j<mn;j++){

                if(j+1<mn and temp[j]<temp[j+1]){
                
                    set<ll>tp;
                    while (j<mn)
                    {
                        if(j<mn-1 and temp[j]<temp[j+1]){
                          tp.insert(temp[j]);
                          tp.insert(temp[j+1]);
                          j++;
                        }
                        else {
                            break;
                        }
                        if(j==mn)break;
                    }
                    if(tp.size()>=1){
                        cost+=(getmin(tp.size(),mn-j));
                        ll ty=arr[*tp.begin()].size();
                        ll ind=*tp.begin();
                        for(auto it=tp.begin();it!=tp.end();++it){
                            arr[ind].pb(*it);
                        }
                        tp.clear();
                    }
                    
                }
                else{
                    arr[temp[j]].pb(temp[j]);
                    j++;
                }
            }
            
        }
        for(auto c:arr){
            cout<<c.xt<<" ";
            for(auto v:c.yt)cout<<v<<" ";cout<<endl;
        }
        //  vl ans_arr=arr.begin()->second;
        //  ll intt=*ans_arr.begin();
        // // auto tui=arr.begin();
        // // ll tyu=tui->first;
        // // arr.erase(tyu);
        //  set<ll>st;
     //    for(auto x:ans_arr)st.insert(x);
        //  for(auto it=st.begin();it!=st.end();++it){
        //      auto low=arr.lower_bound(*it);
        //      vl th=low->second;
        //         arr.erase(*it);
        //      cost+=(th.size()+st.size());
        //      rep(i,0,th.size(),1)st.insert(th[i]);
          
        //  }
         cout<<cost<<endl;
    }

int main(){
    fast();
    ni1(t);w(t)
    solve();
    khatam; 
}