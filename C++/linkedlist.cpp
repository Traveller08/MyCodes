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

void build_tree(ll si,ll ss,ll se,vl &val, vl &st)
{
   if(ss==se)st[si]=val[ss];
   ll mid=(ss+se)/2;
   build_tree(2*si,ss,mid,val,st);
   build_tree(2*si+1,mid+1,se,val,st);
   st[si]=min(st[2*si],st[2*si+1]);

}
ll query_ans(ll si,ll ss,ll se,ll qs,ll qe,vl &val,vl &st)
{
    if(qs>se || qe < ss)return 100000000000;
    if(ss>=qs && se<=qe)return st[si];
    ll mid=(ss+se)/2;
    ll l=query_ans(2*si,ss,mid,qs,qe,val,st);
    ll r=query_ans(2*si+1,mid+1,se,qs,qe,val,st);
    return min(l,r);
}

void solve()
   {
        ni1(n);
        vl val(n,0);
        vl st(10*n,0);
        rep(i,0,n,1)cin>>val[i];
        build_tree(0,0,n-1,val,st);
        ni1(q);
        while (q--)
        {
            ni2(l,r);
            l--;r--;
            cout<<query_ans(0,0,n-1,l,r,val,st)<<endl;

        }
        
   }

int main(){
   fast();
   solve();
   
   khatam; 
}