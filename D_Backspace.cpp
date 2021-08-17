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
string s,t;
bool found;
map<pair<int,int>,int>dp;
bool isSubSequence(int i,int j)
{     int m=t.length(),n=s.length();
      if(found)return true;
      if(dp.find({i,j})!=dp.end())return dp[{i,j}];
      if(j==m){found=true;return dp[{i,j}]=true;}
      else if(i>=n)return dp[{i,j}]=false;
      else{
        
            if(i<n-1 and s[i]==t[j] and s[i+1]==t[j])return dp[{i,j}]=isSubSequence(i+1,j+1) or isSubSequence(i+2,j+1);
            else if(s[i]==t[j])return dp[{i,j}]=isSubSequence(i+1,j+1);
            else if(j==0)return dp[{i,j}]=isSubSequence(i+1,j);
              else if(j>0) return dp[{i,j}]=isSubSequence(i+2,j);
         
      }
}

void solve()
   {
       cin>>s>>t;
     found=0;
     dp.clear();
   if(t.length()>s.length()){
             cout<<"NO"<<endl;
   }
   else if(t.length()==s.length()){
      if(t==s)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
      }
   else
   {    if(isSubSequence(0,0))cout<<"YES"<<endl;
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