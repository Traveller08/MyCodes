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


void solve()
   {
       ns(s);
       ns(tt);
       vl pos;
       ll n=s.length();
       rep(i,0,n,1){
           if(s[i]==tt[0])pos.pb(i);
       }
     //  print(pos);
       if(pos.empty())cout<<"NO"<<endl;
       else{
           bool found=0;
           ll m=pos.size();
           rep(i,0,m,1){
            //  cout<<s<<endl;
               string temp;
               bool eq=0;
               ll ind=n-1,kk=0;
               for(ll j=pos[i];j<n and kk<tt.length();j++){
                   if(s[j]!=tt[kk]){
                     eq=true;
                     ind=j;
                     break;
                   }
                   else temp.pb(s[j]),kk++;
               }
              
            if(eq){
                  if(ind>=2){
                       ind-=2;
                       for(ll j=ind;j>=0 and kk<tt.length();j--){
                           if(s[j]==tt[kk]){
                               temp.pb(s[j]);
                               kk++;
                           }
                           else break;
                       }
               }
               
            }
            else {
                if(ind>=1){
                   //  cout<<temp<<" "<<kk<<" "<<eq<<endl;
                    ind--;
                     for(ll j=ind;j>=0 and kk<tt.length();j--){
                           if(s[j]==tt[kk]){
                               temp.pb(s[j]);
                               kk++;
                           }
                           else break;
                       }
                }
                
            }
               
            //    cout<<temp<<endl;
               if(temp==tt){
                   found=true;
                   break;
               }
              
           }
          
           if(found)cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
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