/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Author : Ankit Chaudhary ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
#include <bits/stdc++.h>
using namespace std;
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long int
#define pb push_back
#define pf push_front
#define um(a, b, name) unordered_map<a, b> name;
#define rep(i, a, b, k) for (ll i = a; i < b; i += k)
#define mem0(a) memset(a, 0, sizeof(a))
#define w(t) while (t--)
#define array(arr, n) \
    ll arr[n];        \
    rep(i, 0, n, 1) cin >> arr[i];
#define ni1(t) \
    ll t;      \
    cin >> t;
#define ni2(a, b) \
    ll a, b;      \
    cin >> a >> b
#define ni3(a, b, c) \
    ll a, b, c;      \
    cin >> a >> b >> c
#define ni4(a, b, c, d) \
    ll a, b, c, d;      \
    cin >> a >> b >> c >> d
#define ni5(a, b, c, d, e) \
    ll a, b, c, d, e;      \
    cin >> a >> b >> c >> d >> e
#define ni6(a, b, c, d, e, f) \
    ll a, b, c, d, e, f;      \
    cin >> a >> b >> c >> d >> e >> f
#define ns(s) \
    string s; \
    cin >> s
#define mod 1e9 + 7
#define siz1 200005
#define siz2 1000005
/*----------------------------------------------------------------------------------------------------------------------------------------------------------
                                                                                                                                                            
----------------------------------------------------------------------------------------------------------------------------------------------------------*/

void solve()
{
    ni3(n, x, y);
    ll dif = y - x;
    ll ans = 0,no=n-1,dif1=0;
    ll na1=no;
    while (na1--)
    {
       if(dif%no==0){dif1=dif/no;break;}
       else no--;
    }
    vector<ll>arr;
   ll ele=x;
     arr.pb(x);
   arr.pb(y);
    
    while(no>0 && (ele+dif1)<y){
        ele+=dif1;
        arr.pb(ele);
        no--;
    }
    ele=x;
    while(no>0 && (ele-dif1)>0){
        ele-=dif1;
        arr.pb(ele);
        no--;
    }
    ele=y;
    while(no--){
        ele+=dif1;
        arr.pb(ele);
    }
  
    //cout<<x<<" "<<y<<endl;
  //sort(arr.begin(),arr.end());
   rep(i,0,n,1)cout<<arr[i]<<" ";cout<<endl;
        
    
    
    
}

int main()
{
    fast();
 
    ni1(t);
    w(t)
    {
    solve();
     }
    return 0;
}

/*--------------------------------------------------------------------------------------------------------------------
                                                                                                                    
--------------------------------------------------------------------------------------------------------------------*/