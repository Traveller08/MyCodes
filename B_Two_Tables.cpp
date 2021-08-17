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
bool ck(ll a,ll b,ll c,ll d){
    if(a>=c and b>=d)return true;
    else return false;
}

void solve()
   {
       ni2(w,h);
       ni4(x1,y1,x2,y2);
       ni2(w1,h1);
       ll upl=0,upw=0,dnl=0,dnw=0,lfl=0,lfw=0,rtl=0,rtw=0;
       upl=h-y2;
       upw=w;
       dnl=y1;
       dnw=w;
       lfl=h;
       lfw=x1;
       rtl=h;
       rtw=w-x2;
       bool found=0;
       found=found or ck(upl,upw,h1,w1);
        found=found or ck(dnl,dnw,h1,w1);
         found=found or ck(lfl,lfw,h1,w1);
          found=found or ck(rtl,rtw,h1,w1);
          if(found)cout<<0<<endl;
          else{
              ll ttl=y2-y1;
              ll ttw=x2-x1;
              if(ttl+h1>h and ttw+w1>w)cout<<-1<<endl;
              else{
                  vl ans;
                   if(h1+ttl<=h)ans.pb(y2-h+h1);
                   if(w1+ttw<=w)ans.pb(w1-x1);
                  if(h1+ttl<=h) ans.pb(h1);
                   if(w1+ttw<=w)ans.pb(x2-w+w1);
                   if(h1+ttl<=h)ans.pb(h1-y1);
                  if(w1+ttw<=w)ans.pb(w1-x1);
                  if(w1+ttw<=w)ans.pb(x2-w+w1);
                  if(h1+ttl<=h)ans.pb(y2-h+h1);
                  sort(all(ans));
                  cout<<*min_element(all(ans))<<endl;
                 }
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