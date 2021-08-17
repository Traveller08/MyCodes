#include <bits/stdc++.h>
using namespace std;
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long int
#define pb push_back
#define mp make_pair
#define pf push_front
#define rep(i, a, b, k) for (ll i = a; i < b; i += k)
#define rept(i, a, b) for (auto i = a; i != b; ++i)
#define drep(i, a, b, k) for (ll i = a; i >= b; i--)
#define mem0(a) memset(a, 0, sizeof(a))
#define w(t) while (t--)
#define array(arr, n)          \
    vector<ll> arr(n);         \
    for (ll i = 0; i < n; i++) \
        cin >> arr[i];
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
#define getmax(a, b) a > b ? a : b
#define getmin(a, b) a < b ? a : b
#define print(x)            \
    for (auto ele : x)      \
        cout << ele << " "; \
    cout << endl;
#define printp(x)      \
    for (auto ele : x) \
        cout << ele.firs << '	' << ele.second << endl;
#define mod 1000000007
#define siz1 200005
#define siz2 1000005
#define khatam return 0
#define all(x) x.begin(), x.end()
typedef vector<ll> vl;
typedef vector<pair<ll, ll>> vll;
typedef unordered_map<ll, ll> ull;
typedef map<ll, ll> mll;

void solve()
{
    ni1(n);
    vector<pair<ll, bool>> val;
    rep(i, 0, n, 1)
    {
        ni1(p);
        val.pb(mp(p, false));
    }
    vl ans(n, 0);
    ll maxm = 0, ind = -1, cnt = 0, dist = 0;
    rep(i, 0, n, 1)
    {
        if (val[i].first >= maxm)
        {
            maxm = val[i].first;
            ind = i;
        }
    }
    ll c_max = ind;
    val[ind].second = true;
    cnt++;
    dist = 0;
  
       while (1)
    {
        bool found = 0;
        maxm = 0;
        for (ll i = ind - 1; i >= 0; i--)
        {
            if (val[i].first >= maxm and !val[i].second)
            {
                maxm = val[i].first;
                found = true;
                ind = i;
            }
        }
        if (found)
        {
            dist++;
            cnt++;
            val[ind].second=true;
            ans[ind] = dist;
        }
        else
            break;
    }
    //  print(ans);
    dist = 0;
    ind = c_max;
    while (1)
    {
        bool found = 0;
        maxm = 0;
        for (ll i = ind + 1; i < n; i++)
        {
            if (val[i].first >= maxm and !val[i].second)
            {
                maxm = val[i].first;
                found = true;
                ind = i;
            }
        }
        if (found)
        {
            dist++;
            val[ind].second=true;
            cnt++;
            ans[ind] = dist;
        }
        else
            break;
    }
   //   print(ans);
    
     for (ll i = 0; i < c_max; i++)
        {
            if (!val[i].second)
            {
               ind=i;
       //        cout<<"ind "<<" "<<ind<<" "<<c_max<<endl;
               break;
            }
        }
        dist=ans[ind-1];
    while (1)
    {
        bool found = 0;
        maxm = 0;
        for (ll i = ind; i < c_max; i++)
        {
            if (!val[i].second)
            {
                if (val[i].first >= maxm)
                {
                    maxm = val[i].first;
                    found = true;
                    ind = i;
                }
            }
            else break;
        }
        if (found)
        {  //cout<<"fouind "<<ind<<endl;
            dist++;
            ans[ind] = dist;
            dist=ans[ind-1];
            cnt++;
            val[ind].second=true;
        }
        else
            break;
    }
    for(ll i=n-1;i>c_max;i--){
         if (!val[i].second)
            {
               ind=i;
       //        cout<<"ind "<<" "<<ind<<" "<<c_max<<endl;
               break;
            }
    }
     dist=ans[ind+1];
       while (1)
      {
        bool found = 0;
        maxm = 0;
        for (ll i = ind; i >c_max; i--)
        {
            if (!val[i].second)
            {
                if (val[i].first >= maxm)
                {
                    maxm = val[i].first;
                    found = true;
                    ind = i;
                }
            }
            else break;
        }
        if (found)
        {  //cout<<"fouind "<<ind<<endl;
            dist++;
            ans[ind] = dist;
            dist=ans[ind+1];
            cnt++;
            val[ind].second=true;
        }
        else
            break;
    }
     while (cnt<n)
   { 
       while (1)
    {
        bool found = 0;
        maxm = 0;
        for (ll i = ind - 1; i >= 0; i--)
        {
            if (val[i].first >= maxm and !val[i].second)
            {
                maxm = val[i].first;
                found = true;
                ind = i;
            }
        }
        if (found)
        {
            dist++;
            cnt++;
            val[ind].second=true;
            ans[ind] = dist;
        }
        else
            break;
    }
    //  print(ans);
    dist = 0;
    ind = c_max;
    while (1)
    {
        bool found = 0;
        maxm = 0;
        for (ll i = ind + 1; i < n; i++)
        {
            if (val[i].first >= maxm and !val[i].second)
            {
                maxm = val[i].first;
                found = true;
                ind = i;
            }
        }
        if (found)
        {
            dist++;
            val[ind].second=true;
            cnt++;
            ans[ind] = dist;
        }
        else
            break;
    }
   //   print(ans);
    
     for (ll i = 0; i < c_max; i++)
        {
            if (!val[i].second)
            {
               ind=i;
       //        cout<<"ind "<<" "<<ind<<" "<<c_max<<endl;
               break;
            }
        }
        dist=ans[ind-1];
    while (1)
    {
        bool found = 0;
        maxm = 0;
        for (ll i = ind; i < c_max; i++)
        {
            if (!val[i].second)
            {
                if (val[i].first >= maxm)
                {
                    maxm = val[i].first;
                    found = true;
                    ind = i;
                }
            }
            else break;
        }
        if (found)
        {  //cout<<"fouind "<<ind<<endl;
            dist++;
            ans[ind] = dist;
            dist=ans[ind-1];
            cnt++;
            val[ind].second=true;
        }
        else
            break;
    }
    for(ll i=n-1;i>c_max;i--){
         if (!val[i].second)
            {
               ind=i;
       //        cout<<"ind "<<" "<<ind<<" "<<c_max<<endl;
               break;
            }
    }
     dist=ans[ind+1];
       while (1)
      {
        bool found = 0;
        maxm = 0;
        for (ll i = ind; i >c_max; i--)
        {
            if (!val[i].second)
            {
                if (val[i].first >= maxm)
                {
                    maxm = val[i].first;
                    found = true;
                    ind = i;
                }
            }
            else break;
        }
        if (found)
        {  //cout<<"fouind "<<ind<<endl;
            dist++;
            ans[ind] = dist;
            dist=ans[ind+1];
            cnt++;
            val[ind].second=true;
        }
        else
            break;
    }}
    print(ans);
}

int main()
{
    fast();
    ni1(t);
    w(t)
    {
        solve();
    }
    khatam;
}