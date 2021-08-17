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
pair<ll,ll> ck(ll n){
    pair<ll,ll>ans;
    if(n==240)ans=mp(16,15);
    if(n==128)ans=mp(16,8);
    if(n==672)ans=mp(16,42);
    if(n==64)ans=mp(16,4);
    if(n==368)ans=mp(16,23);
    if(n==120)ans=mp(15,8);
    if(n==630)ans=mp(15,42);
    if(n==60)ans=mp(15,4);
    if(n==345)ans=mp(15,23);
    if(n==336)ans=mp(8,42);
    if(n==32)ans=mp(8,4);
    if(n==184)ans=mp(8,23);
    if(n==168)ans=mp(42,4);
    if(n==966)ans=mp(42,23);
    if(n==92)ans=mp(23,4);
    return ans;
}

void solve()
   {
       vl no(7,-1);
       cout<<"? "<<1<<" "<<1<<endl;
        ni1(fir);
        no[1]=sqrt(fir);
        ll query;
        map<ll,ll>freq;

        cout<<"? "<<2<<" "<<3<<endl;
         cin>>query;
        pair<ll,ll>p1=ck(query);
        freq[p1.first]++;
        freq[p1.second]++;



         cout<<"? "<<3<<" "<<4<<endl;
         cin>>query;
         pair<ll,ll>p2=ck(query);
          freq[p2.first]++;
          freq[p2.second]++; 
          ll ind;
          for(auto it=freq.begin();it!=freq.end();++it){
              if(it->second==2){
                  ind=it->first;
                  break;
              }
          }
          if(p1.first!=ind)no[2]=p1.first;
          else no[2]=p1.second;
          no[3]=ind;
          if(p2.first!=ind)no[4]=p2.first;
          else no[4]=p2.second;
          cout<<"? "<<4<<" "<<5<<endl;
          cin>>query;
          pair<ll,ll>p3=ck(query);
          if(p3.first!=no[4])no[5]=p3.first;
          else no[5]=p3.second;
          map<ll,bool>fin;
          fin[16]=true;
          fin[15]=true;
          fin[8]=true;
          fin[42]=true;
          fin[4]=true;
          fin[23]=true;
          for(ll i=1;i<=5;i++)fin[no[i]]=false;
          for(auto it=fin.begin();it!=fin.end();++it){
              if(it->second)no[6]=it->first;
          }
         cout<<"! ";
         rep(i,1,7,1)cout<<no[i]<<" ";cout<<endl;
   }

int main(){
  solve();
   khatam; 
}