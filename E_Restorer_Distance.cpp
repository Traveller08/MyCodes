#include <bits/stdc++.h>
using namespace std;
/* Author------SUNNY KUMAR-------Author */
#define fast()                         \
     ios_base::sync_with_stdio(false); \
     cin.tie(NULL);                    \
     cout.tie(NULL);

#define ll long long int
#define endl "\n"
#define pb push_back
#define pf push_front
const ll MOD = 1e9 + 7;
#define rep(i, a, b) for (ll i = a; i <= b; i++)
#define array(arr, n) \
     ll arr[n];       \
     rep(i, 0, n - 1) cin >> arr[i];

void solve()
   {
       ll n, k, x;
     cin >> n >> k >> x;
     array(arr, n);
     sort(arr, arr + n);
     ll count = 1;
     vector<ll> v;
     if(n==1){
          cout << 1 << endl;
     return;
     }
     ll cnt=1;
     rep(i, 1, n -1)
     {
       if(arr[i]-arr[i-1]>x)v.push_back(arr[i]-arr[i-1]-1),cnt++;
     }
   // cout<<cnt<<endl;
     count=0;
     if(v.size()>=1)
     {sort(v.begin(),v.end());
     vector<ll>v1;
     rep(i, 0, v.size() - 1)
     {
        v1.pb(v[i]/x);
     }
     sort(v1.begin(),v1.end());
     rep(i,0,v1.size()-1){
         count+=v1[i];
         if(count<=k)cnt--;
         else break;
     }
    }
     cout << cnt << endl;
   }

int main(){
   fast();
  solve();
   return 0;
}