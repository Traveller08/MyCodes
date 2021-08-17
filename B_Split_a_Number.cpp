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

string add(string a, string b) {
 
    string ans;
    if (a.length() < b.length())swap(a , b);
    int alen = a.length(), blen = b.length();
    int carry = 0;
    while ((!a.empty()) or (!b.empty()) or carry) {
        int cur = carry;
        if (!a.empty()) {
            cur += a.back() - '0';
            a.pop_back();
        }
        if (!b.empty()) {
            cur += b.back() - '0';
            b.pop_back();
        }
        ans = to_string(cur % 10) + ans;
        carry = cur / 10;
    }
    return ans;
}
bool cmp(string a, string  b) {
    if (a.length() != b.length())return a.length() < b.length();
    else return a < b;
}
void solve()
   {
       ni1(l);
       ns(s);
    vector<string> ans;
    ll idx1 = l / 2, idx2 = l / 2 + (l & 1);
    while (ans.empty()) {
        if (s[idx1] != '0') ans.push_back(add(s.substr(0, idx1), s.substr(idx1)));
        if (s[idx2] != '0') ans.push_back(add(s.substr(0, idx2), s.substr(idx2)));
        idx1 --;
        idx2 ++;
    }
    sort(ans.begin(), ans.end(), cmp);
    cout << ans[0] << endl;
    return;
}


int main(){
   fast();
   solve();
   khatam; 
}