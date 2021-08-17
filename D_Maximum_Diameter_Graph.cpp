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
bool op(const pair<ll,ll>&a, const pair<ll,ll>&b){return a.first>b.first;}

void solve()
   {
       ni1(n);
       array(deg,n);
       ll sum=0;
       rep(i,0,n,1)sum+=deg[i];
       if(sum<2*(n-1))cout<<"NO"<<endl;
       else {
           vector<pair<ll,ll>> gr,on;
           rep(i,0,n,1){
               if(deg[i]>1){
                   gr.pb(mp(deg[i],i+1));
               }
               else on.pb(mp(1,i+1));
           }
           ll diamtr=gr.size()-1;
           ll m=gr.size();
         //  sort(all(gr),op);
           if(m==1){
                if(on.size()==1)diamtr=1;
                else diamtr=2;
                cout<<"YES"<<" "<<diamtr<<endl;
                cout<<on.size()<<endl;
                for(auto x:on)cout<<x.second<<" "<<gr[0].second<<endl;
           }
           else{
                  if(on.size()==1)diamtr++;
                  if(on.size()>=2)diamtr+=2;
                  cout<<"YES"<<" "<<diamtr<<endl;
                  cout<<n-1<<endl;
                  rep(i,1,m,1){
                      gr[i-1].first--,gr[i].first--;
                      cout<<gr[i-1].second<<" "<<gr[i].second<<endl;
                  }
                  ll cnt=on.size();
                  ll on_ptr=0,gr_ptr=0;
                  ll pp=on.size();
                  if(pp==1){
                      cout<<gr[0].second<<" "<<on[0].second<<endl;
                  }
                  else if(pp>=2){
                      cout<<on[0].second<<" "<<gr[0].second<<endl;
                      cout<<on[1].second<<" "<<gr[m-1].second<<endl;
                      gr[0].first--;gr[m-1].first--;
                       rep(i,2,pp,1){
                      if(gr[gr_ptr].first<=0){
                            while(1){
                                if(gr[gr_ptr].first>0)break;
                                else gr_ptr++;
                            }
                      }
                     cout<<on[i].second<<" "<<gr[gr_ptr].second<<endl;
                     gr[gr_ptr].first--;
                  }
                  }
                 
           }
       }
   }

int main(){
   fast();
  solve();
   khatam; 
}