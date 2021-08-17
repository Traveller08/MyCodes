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
#define printp(x)  for(auto ele:x)cout<<ele.firs<<' '<<ele.second<<endl;
#define mod 1000000007
#define siz1 200005
#define siz2 1000005
#define khatam return 0
#define all(x) x.begin(),x.end()
typedef vector<ll> vl;
typedef vector<pair<ll,ll>> vll;
typedef unordered_map<ll,ll> ull;
typedef map<ll,ll> mll;
vl Tpow(32,0);
void cal()
{
    rep(i,0,32,1)
    {
        Tpow[i]=pow(2,i);
    }
     
}
ll no_of_bits(ll n)
{ ll cnt=0;  
   while (n)
   {
        cnt++;
        n >>= 1;
    }
    return cnt;
}
  

void solve(){
 cal();
 ni2(n,k);
 ll mm=n;
 if(k>n or (k==1 and n>1 and n%2!=0))cout<<"NO"<<endl;
 else
 {
    vl ans;
    if(n%2!=0)ans.pb(1),n--;
    ll cnt1=no_of_bits(n);
    cnt1++;
    rep(i,0,cnt1+1,1){
        ll temp=1<<i;
        if(temp&n)ans.pb(temp);
    }
    sort(all(ans),greater<ll>());
    // print(ans);
    ll cnt=ans.size();
    if(cnt<=k){
        ll i=0;
    while(1){
        bool flag=0;
          while(1){
        bool found=0;
        if(cnt==k)break;
        while(ans[i]>2){
            ans[i]/=2;
            ans.pb(ans[i]),cnt++;
            found=true;
            flag=true;
            if(cnt==k)break;
        }
        i++;
        if(!found)break;
        if(cnt==k)break;
    }
    if(!flag)break;
    if(cnt==k)break;
    i=0;
    sort(all(ans),greater<ll>());
    }
   i=0;
   sort(all(ans),greater<ll>());
       while(1){
        bool found=0;
        if(cnt==k)break;
        while(ans[i]>=2){
            ans[i]/=2;
            ans.pb(ans[i]),cnt++;
            found=true;
            if(cnt==k)break;
        }
        i++;
        if(!found)break;
        if(cnt==k)break;
    }
    ll sum=0;
    rep(j,0,ans.size(),1)sum+=ans[j];
    if(ans.size()!=k or sum!=mm)cout<<"NO"<<endl;
    else {
        cout<<"YES"<<endl;
        print(ans);
    }
    }
    else {
          cout<<"NO"<<endl;
    }
   // print(ans);
 }
     
     
 

}
int main(){
fast();
solve();
 khatam; 
}