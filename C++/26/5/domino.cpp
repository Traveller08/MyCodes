// #include<bits/stdc++.h>
// using namespace std;
// #define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
// #define ll long long int
// #define pb push_back
// #define mp make_pair
// #define pf push_front
// #define rep(i,a,b,k) for(ll i=a;i<b;i+=k)
// #define rept(i,a,b) for(auto i=a;i!=b;++i)
// #define drep(i,a,b,k) for(ll i=a;i>=b;i--)
// #define mem0(a) memset(a,0,sizeof(a))
// #define w(t) while(t--)
// #define array(arr,n) vector<ll>arr(n);for(ll i=0;i<n;i++)cin>>arr[i];
// #define ni1(t) ll t;cin>>t;
// #define ni2(a,b) ll a,b;cin>>a>>b
// #define ni3(a,b,c) ll a,b,c;cin>>a>>b>>c
// #define ni4(a,b,c,d) ll a,b,c,d;cin>>a>>b>>c>>d
// #define ni5(a,b,c,d,e) ll a,b,c,d,e;cin>>a>>b>>c>>d>>e
// #define ni6(a,b,c,d,e,f) ll a,b,c,d,e,f;cin>>a>>b>>c>>d>>e>>f
// #define ns(s) string s;cin>>s
// #define getmax(a,b) a>b?a:b
// #define getmin(a,b) a<b?a:b
// #define print(x) for(auto ele:x)cout<<ele<<'	';cout<<endl;
// #define printp(x)  for(auto ele:x)cout<<ele.firs<<'	'<<ele.second<<endl;
// #define mod 1000000007
// #define siz1 200005
// #define siz2 1000005
// #define khatam return 0
// #define all(x) x.begin(),x.end()
// typedef vector<ll> vl;
// typedef vector<pair<ll,ll>> vll;
// typedef unordered_map<ll,ll> ull;
// typedef map<ll,ll> mll;


// void solve()
//    {
//        ni3(n,k1,k2);
//        ni2(w,b);
//        ll maxw=0,maxb=0;
//        vl arr(2*n,0);
//        vl brr(2*n,0);
//        rep(i,0,k1,1)arr[i]=1;
//         rep(i,0,k2,1)brr[i]=1;
//      bool ar[2*n]={},br[2*n]={};
//         rep(i,0,2*n,1)
//         {
//             if(arr[i]==1 and brr[i]==1 and !ar[i] and !br[i])maxw++,ar[i]=true,br[i]=true;
//             else if(arr[i]==0 and brr[i]==0 and !ar[i] and !br[i])maxb++,ar[i]=true,br[i]=true;
//         }
//          rep(i,0,2*n-1,1)
//         {
//              if(arr[i]==1 and arr[i+1]==1 and !ar[i] and !ar[i+1])maxw++,ar[i]=true,ar[i+1]=true;
//               if(brr[i]==1 and brr[i+1]==1 and !br[i] and !br[i+1])maxb++,br[i]=true,br[i+1]=true;
//         }
//         if(w<=maxw and b<=maxb)cout<<"YES"<<" "<<maxw<<" "<<maxb<<endl;
//         else cout <<"NO"<<" "<<maxw<<" "<<maxb<<endl;
//    }

// int main(){
//    fast();
//    ni1(t);
//        w(t)
//        {
//           solve();
//        }
//    khatam; 
// }


