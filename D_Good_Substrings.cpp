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
#define mod1 1000001279
#define mod2 1000000007
#define siz1 200005
#define p1 31
#define p2 37
#define siz2 1000005
#define khatam return 0
#define all(x) x.begin(),x.end()
typedef vector<ll> vl;
typedef vector<pair<ll,ll>> vll;
typedef unordered_map<ll,ll> ull;
typedef map<ll,ll> mll;
ll gethash(ll a,ll b,ll c){
    return (a-b+c)%c;
}
void solve()
   {
       ns(s);
       ns(ck);
       ni1(k);
       ll n=s.length();
       ll ans=0;
       vl pw1(n+5,0),pw2(n+5,0);
        pw1[0] = 1,pw2[0]=1;
        set<pair<ll,ll>>st;
        set<ll>st1;
        rep(i, 1, n+2, 1) pw1[i] = (pw1[i - 1] * p1) % mod1,pw2[i]=(pw2[i-1]*p2)%mod2;
        vl pre_hash1(n + 1, 0),pre_hash2(n+1,0);
       ll curr = 0, hash_value1 = 0,hash_value2=0;
       rep(k,0,n,1)
       {
       hash_value1 = (hash_value1 + (s[k]-'a'+1) * pw1[curr]%mod1) % mod1;
       hash_value2=(hash_value2+(s[k]-'a'+1)*pw1[curr]%mod2)%mod2;
       pre_hash1[k] = hash_value1;
       pre_hash2[k]=hash_value2;
       curr++;
        }

       rep(i,0,n,1){
          ll cnt=0,bad=0;
           rep(j,i,n,1){
              if(ck[s[j]-'a']=='0'){
                     bad++;
              }
           
            if(bad<=k){
                ll hash1,hash2;
                if(i!=0) hash1=(pre_hash1[j]-pre_hash1[i-1]+mod1)%mod1;
                else  hash1=(pre_hash1[j]+mod1)%mod1;
                hash1=((hash1*pw1[n-i-1])%mod1);
               if(i!=0)  hash2=(pre_hash2[j]-pre_hash2[i-1]+mod2)%mod2;
               else  hash2=(pre_hash2[j]+mod2)%mod2;
                hash2=(hash2*pw1[n-i-1])%mod2;
              //  for(ll kk=i;kk<=j;kk++)cout<<s[kk];cout<<endl;
                cout<<hash1<<" "<<hash2<<" "<<bad<<endl;
               st.insert(mp(hash1,hash2));
               
               
            }
            else break;  
           }           
       }
      cout<<st.size()<<endl;
      
   }

int main(){
   fast();
   solve();
   khatam; 
}