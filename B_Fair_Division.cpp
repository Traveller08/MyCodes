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
map<ll,bool>mpp;
map<ll,bool>ck;
bool ispossible(ll sum,vl &val,ll n)
{
   if(ck[n-1])return mpp[n-1];
     if(sum<0)return false;
     if(sum!=0 and n==0)return false;
    else if(sum==0)return true;
  else if(n==0)return false;

     if(val[n-1]<=sum){ck[n]=true;return mpp[n]=ispossible(sum-val[n-1],val,n-1) or ispossible(sum,val,n-1);}
    else{ ck[n]=true;return mpp[n]=ispossible(sum,val,n-1);}

}

void solve()
   {
       mpp.clear();
       ck.clear();
       ni1(n);
       array(val,n);
       ll sum=0;
       rep(i,0,n,1)sum+=val[i];
       if(sum%2!=0)cout<<"NO"<<endl;
       else 
       {
           sum/=2;
           if(ispossible(sum,val,n))cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
       }
     //  for(auto it=mpp.begin();it!=mpp.end();++it)cout<<it->first<<" "<<it->second<<endl;
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

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define rep(i,k,n) for(ll i=k; i<n; i++)
#define	all(x) (x).begin(),(x).end()
 
const ll M = 1000000007;
ll dp[1000][1000];
 
ll subsetsum(ll a[], ll sum, ll n)
{
	if (sum == 0)return 1;
	if (n == 0)return 0;
 
	if (dp[n][sum] != -1)return dp[n][sum];
 
	if (sum >= a[n - 1]) return dp[n][sum] = (subsetsum(a, sum - a[n - 1], n - 1) || subsetsum(a, sum, n - 1));
 
	else return dp[n][sum] = subsetsum(a, sum, n - 1);
 
 
}
 
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	ll t; cin >> t;
 
 
	while (t--) {
		memset(dp, -1, sizeof(dp));
		ll n; cin >> n;
		//subset sum
		ll a[n];
		ll sum = 0;
		rep(i, 0, n) {cin >> a[i]; sum += a[i];}
 
		if (sum % 2 == 1) {cout << "NO" << endl;}
		else {
			sum = sum / 2;
			if (subsetsum(a, sum, n)) {cout << "YES" << endl;}
			else {cout << "NO" << endl;}
		}
 
	}
 
 
}