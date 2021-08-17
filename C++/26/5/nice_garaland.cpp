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
       ns(s);
       string s1,s2,s3,s4,s5,s6;
       rep(i,0,n,1)
       {
           if(i%3==0)s1.pb('R'),s2.pb('G'),s3.pb('B'),s4.pb('R'),s5.pb('G'),s6.pb('B');
            if(i%3==1)s1.pb('G'),s2.pb('B'),s3.pb('R'),s4.pb('B'),s5.pb('R'),s6.pb('G');
            if(i%3==2)s1.pb('B'),s2.pb('R'),s3.pb('G'),s4.pb('G'),s5.pb('B'),s6.pb('R');
       }
       ll cnt1=0,cnt2=0,cnt3=0,cnt4=0,cnt5=0,cnt6=0;
        rep(i,0,n,1)
       {
           if(s[i]!=s1[i])cnt1++;
            if(s[i]!=s2[i])cnt2++;
             if(s[i]!=s3[i])cnt3++;
             if(s[i]!=s4[i])cnt4++;
            if(s[i]!=s5[i])cnt5++;
             if(s[i]!=s6[i])cnt6++;
       }
      ll ans=min(cnt1,min(cnt2,min(cnt3,min(cnt4,min(cnt5,cnt6)))));
      if(ans==cnt1)cout<<cnt1<<endl<<s1<<endl;
      else if(ans==cnt2)cout<<cnt2<<endl<<s2<<endl;
       else if(ans==cnt3)cout<<cnt3<<endl<<s3<<endl;
        else if(ans==cnt4)cout<<cnt4<<endl<<s4<<endl;
         else if(ans==cnt5)cout<<cnt5<<endl<<s5<<endl;
          else if(ans==cnt6)cout<<cnt6<<endl<<s6<<endl;
       
   }

int main(){
   fast();
  solve();
   khatam; 
}