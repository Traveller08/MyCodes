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
       ni2(n,m);
       vector<string>val,ff;
       rep(i,0,n,1){
           ns(s);
           val.pb(s);
       }
       ff=val;
       ll curr=0;
       while(curr<m){
           char ans='#';
           for(char i='a';i<='z';i++){
               bool found=0;
               rep(j,0,n,1){
                   if(i==val[j][curr]){
                       found=true;
                       break;
                   }
               }
               if(!found){
                   ans=i;
                   break;
               }
           }
           rep(j,0,n,1){
               string temp=val[j];
               temp[curr]=ans;
               ff.pb(temp);
           }
           curr++;
       }
     string final_ans;
     bool flag=0;
     ll mm=ff.size();
     rep(i,0,mm,1){
         bool found=0;
         rep(j,0,n,1){
             ll cnt=0;
             rep(k,0,m,1){
                 if(ff[i][k]!=val[j][k])cnt++;
             }
             if(cnt!=1){
                 found=true;
                 break;
             }
         }
         if(!found){
             final_ans=ff[i];
             flag=true;
             break;
         }
     }
     for(auto x:ff)cout<<x<<en
     if(flag)cout<<final_ans<<endl;
     else cout<<-1<<endl;
       
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