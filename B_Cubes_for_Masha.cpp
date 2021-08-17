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
  vl freq1(10,0);
  bool ck(ll n){
      vl fre(10,0);
    //  cout<<n<<endl;
      while(n>0){
          ll tt=n%10;
          fre[tt]++;
          n/=10;
      }
      bool vld=0;
      rep(i,0,10,1){
          if(freq1[i]<fre[i]){
              vld=true;
              break;
          }
      }
      if(vld)return false;
      else return true;
  }
  

void solve()
   {
       ni1(n);
       array(val,6*n);
       vl freq(10,0);
       ll curr=1;
     
       rep(i,0,6*n,1){
           freq[val[i]]=+5;
           freq1[val[i]]++;
       }
       bool found=0;
       ll ans=1;
       rep(i,1,10,1){
           if(freq[i]==0){
               found=true;
               ans=i-1;
               break;
           }
       }
       if(found)cout<<ans<<endl;
       else if(n==2)
       {
            ans=99;
            vl v1(10,0);
            vl v2(10,0);
            rep(i,0,6,1)v1[val[i]]++;
            rep(i,6,12,1)v2[val[i]]++;
            sort(all(val));
            curr=10;
            while(curr<100){                
                  ll temp=curr;
                 ////////
                  ll temp1=temp;
                  vl ar_temp;
                  while(temp1>0){
                      ar_temp.pb(temp1%10);
                      temp1/=10;
                  }
                  bool fir=0,sec=0;
                 rep(i,0,ar_temp.size(),1){
                     if(v1[ar_temp[i]]>0)fir=true;
                     if(v2[ar_temp[i]]>0)sec=true;
                 }
                 ////////
                 if(ck(temp) and fir and sec) ll bb=5;
                 else {found=true;ans=temp-1;break;}
              
               curr++;
           }
          
           cout<<ans<<endl;
       }
       else if(n==3)
       {
            ans=999;
            vl v1(10,0);
            vl v2(10,0);
            vl v3(10,0);
            rep(i,0,6,1)v1[val[i]]++;
            rep(i,6,12,1)v2[val[i]]++;
            rep(i,12,18,1)v3[val[i]]++;
            sort(all(val));
            curr=10;
           while(curr<1000){
                  ll temp=curr;
                 bool ck1=0;
                 ////////
                      ll temp1=temp;
                  vl ar_temp;
                  while(temp1>0){
                      ar_temp.pb(temp1%10);
                      temp1/=10;
                  }
                  bool fir=0,sec=0,thir=0;
                 rep(i,0,ar_temp.size(),1){
                     if(v1[ar_temp[i]]>0)fir=true;
                     if(v2[ar_temp[i]]>0)sec=true;
                     if(v3[ar_temp[i]]>0)thir=true;
                 }
                 if((fir and sec) or (sec and thir) or(thir and fir) )ck1=true;
                 ////////
                 if(ck(temp) and ck1)ll aad=5;
                 else {ans=temp-1;break;}
               
               curr++;
           }
          
         
           cout<<ans<<endl;
       }
   }

int main(){
   fast();
  solve();
   khatam; 
}