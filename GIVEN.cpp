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
#define print(x) for(auto ele:x)cout<<ele<<' ';cout<<endl;
#define printp(x)  for(auto ele:x)cout<<ele.firs<<' '<<ele.second<<endl;
#define mod 1000000007
#define siz1 200005
#define siz2 1000005
#define ft first
#define sd second
#define khatam return 0
#define all(x) x.begin(),x.end()
typedef vector<ll> vl;
typedef vector<pair<ll,ll>> vll;
typedef unordered_map<ll,ll> ull;
typedef map<ll,ll> mll;
typedef pair<ll,ll> pll;
void solve(){
    ni2(l,sum);
    if(l==1 and (sum<0 or sum>=10))cout<<-1<<" "<<-1<<endl;
    else if(l==1)cout<<sum<<" "<<sum<<endl;
    else if(l==2){
       if(sum<1 or sum>18)cout<<-1<<" "<<-1<<endl;
       else if(sum==1){
           cout<<"10"<<" "<<10<<endl;
       }
       else
       {
           ll curr=2,i=0;
           string ans="11";
           while(curr<sum and i<l){
                if(ans[i]-'0'<9){
                    curr++;
                    ans[i]++;
                }
                else i++;
           }
           string mx="00";
           curr=0,i=0;
            while(curr<sum and i<l){
                if(mx[i]-'0'<9){
                    curr++;
                    mx[i]++;
                }
                else i++;
           }
           reverse(all(ans));
           cout<<ans<<" "<<mx<<endl;
           
       }

    }
    else
    {
         if(sum<1 or sum>9*l)cout<<-1<<" "<<-1<<endl;
         else if(sum==1){
             string ans;
           ans.pb('1');
           rep(j,1,l,1)ans.pb('0');
           cout<<ans<<" "<<ans<<endl;
         }
       else
       {
           ll curr=2,i=0;
           string ans;
           ans.pb('1');
           rep(j,1,l-1,1)ans.pb('0');
           ans.pb('1');
           while(curr<sum and i<l){
                if(ans[i]-'0'<9){
                    curr++;
                    ans[i]++;
                }
                else i++;
           }
         
          string mx;
          rep(i,0,l,1)mx.pb('0');
           curr=0,i=0;
            while(curr<sum and i<l){
                if(mx[i]-'0'<9){
                    curr++;
                    mx[i]++;
                }
                else i++;
           }
             reverse(all(ans));
           cout<<ans<<" "<<mx<<endl;
       }
        
    }
}
int main(){
fast();
solve();
 khatam; 
}