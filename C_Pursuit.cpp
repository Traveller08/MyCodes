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


void solve()
   {
       ni1(n);
       array(me,n);
       vl llya;
       rep(i,0,n,1){
           ni1(p);
           llya.pb(p);
       }
       rep(i,0,150,1)llya.pb(0);
       sort(all(me),greater<ll>());
       sort(all(llya),greater<ll>());
       ll cnt=0;
       ll m=n-n/4;
       ll sum1=0,sum2=0;
       rep(i,0,m,1){
         sum1+=me[i];
         sum2+=llya[i];
       }
       vl rem;
       rep(i,m-1,n,1)rem.pb(me[i]);
       if(sum1>=sum2)cout<<0<<endl;
       else{
            ll curr=sum1;
            ll j=n-1,i=m-1;
            ll curr_n=m-1;
            while(1){
                  if(sum1>=sum2)break;
                if(curr_n%4!=0){
                    sum1+=100;
                    curr_n++;
                   cnt++;
                    sum2+=llya[curr_n];
                }
                else {
                   cnt++;
                    sum1+=100;
                    sum1-=me[i];
                  if(sum1>=sum2)break;
                  sum1+=me[i];
                    curr_n++;
                }
               
                if(sum1>=sum2)break;
            }

           cout<<cnt<<endl;
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