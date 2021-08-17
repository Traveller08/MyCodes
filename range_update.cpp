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
vector<long long int> st(900009);
vector<long long int>lazy(900009);
void build_tree(ll s,ll e,ll curr,vl &val)
{
    if(s==e){st[curr]=val[s];lazy[curr]=0; return;}
    ll mid=s+(e-s)/2;
   build_tree(s,mid,2*curr+1,val);
   build_tree(mid+1,e,2*curr+2,val);
   st[curr]=st[2*curr+1]+st[2*curr+2];
}
long long int query_ans(ll s,ll e,ll curr,ll k)
{
    if(lazy[curr]!=0){
        st[curr]+=(s-e+1)*lazy[curr];
        if(s!=e){
            lazy[2*curr+1]+=lazy[curr];
            lazy[2*curr+2]+=lazy[curr];
        }
        lazy[curr]=0;
    }
    if(s==e and s==k)return st[curr];
     ll mid=s+(e-s)/2;
     if(k<=mid)return query_ans(s,mid,2*curr+1,k);
     else  return query_ans(mid+1,e,2*curr+2,k);
}
void update_tree(ll s,ll e,ll curr,ll l,ll r,vl &val,ll add)
{
     if(lazy[curr]!=0){
         ll dx=lazy[curr];
         st[curr]+=(e-s+1)*dx;
         lazy[curr]=0;
         if(s!=e){
             lazy[2*curr+1]+=dx;
             lazy[2*curr+2]+=dx;
         }
         

     }
     if(e<l or s>r)return;
     if(s>=l and e<=r){
      
           st[curr]+=(e-s+1)*add;
           lazy[curr]=0;
           if(s!=e){
               lazy[2*curr+1]+=add;
               lazy[2*curr+2]+=add;
           }
           return;
     }
     ll mid=s+(e-s)/2;
     update_tree(s,mid,2*curr+1,l,r,val,add);
     update_tree(mid+1,e,2*curr+2,l,r,val,add);
     st[curr]=st[2*curr+1]+st[2*curr+2];
}
void solve()
   {
       ni2(n,q);
       array(val,n);
       build_tree(0,n-1,0,val);
       w(q){
           ni1(pq);
           if(pq==2){
             ni1(k);
             cout<<query_ans(0,n-1,0,k-1)<<endl;
           }
           else{
               ni3(l,r,u);
               update_tree(0,n-1,0,l,r,val,u);
               
            }
       }
   }

int main(){
   fast();
   solve();
   khatam; 
}