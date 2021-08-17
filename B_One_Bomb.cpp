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
    ni2(n, m);
    bool vis[n][m] = {};
    int mat[n][m] = {}, mat1[n][m] = {};
    rep(i, 0, n, 1)
    {
        rep(j, 0, m, 1)
        {
            char aa;
            cin >> aa;

            if (aa == '*')
                vis[i][j] = true, mat[i][j] = 1;
        }
    }
    vl row, col;
    rep(i, 0, n, 1)
    {
        ll sum = 0;
        rep(j, 0, m, 1)
        {
            sum += mat[i][j];
            mat[i][j] = sum;
        }
    }
    rep(i, 0, n, 1) row.pb(mat[i][m - 1]);
    //  print(row);
    rep(i, 0, n, 1)
    {
        rep(j, 0, m, 1)
        {

            if (vis[i][j])
            {
                mat1[i][j] = 1;
            }
        }
    }
    rep(j, 0, m, 1)
    {
        ll sum = 0;
        rep(i, 0, n, 1)
        {
            sum += mat1[i][j];
            mat1[i][j] = sum;
        }
    }
    rep(i, 0, m, 1) col.pb(mat1[n - 1][i]);
    //   print(col);
    ll maxm = 0, rno = 0, cno = 0;
    maxm = *max_element(all(row));
    ll maxr = maxm;
    vl mxr, mxc;
    bool flag = 0, flag1 = 0;
    if (maxm == 1)
        flag = true;
    if (maxm == 1)
        rep(i, 0, n, 1) if (row[i] == 1) mxr.pb(i);
    maxm = 0;
    maxm = *max_element(all(col));
    ll maxc = maxm;
    if (maxm == 1)
        flag1 = true;
    if (maxm == 1)
        rep(i, 0, m, 1) if (col[i] == 1) mxc.pb(i);
    //   cout<<rno<<" "<<cno<<endl;
    maxm = 0, rno = 0, cno = 0;
    rep(i, 0, n, 1)
    {
        if (row[i] > maxm)
        {
            maxm = row[i];
            rno = i;
        }
    }
    maxm = 0;
    rep(i, 0, m, 1)
    {
        if (col[i] >= maxm)
        {
            maxm = col[i];
            cno = i;
        }
    }
    if (flag1 == false and flag == false)
    {

        rep(i, 0, m, 1) vis[rno][i] = false;
        rep(i, 0, n, 1) vis[i][cno] = false;
        bool found = 0;
        rep(i, 0, n, 1)
        {
            rep(j, 0, m, 1)
            {

                if (vis[i][j])
                {
                    found = true;
                    break;
                }
            }
        }
        if (found)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            cout << rno + 1 << " " << cno + 1 << endl;
        }
    }
    else
    {
      //  print(mxc);
      int tytydf=0;
     //   print(mxr);
        if (mxr.empty())
        {
            ll cnt1 = 0, cl = 0;
            rep(i, 0, m, 1)
            {
                if (!vis[rno][i] and mat1[n - 1][i] == 1)
                    cnt1++, cl = i;
            }
            if (cnt1 > 1)
                cout << "NO" << endl;
            else
            {
                cout << "YES" << endl;
                cout << rno + 1 << " " << cl + 1 << endl;
            }
        }
        else if (mxc.empty())
        {   
            ll cnt1 = 0, cl = 0;
            rep(i, 0, n, 1)
            {
                if (!vis[i][cno] and mat[i][m - 1] == 1)
                    cnt1++, cl = i;
            }
            if (cnt1 > 1)
                cout << "NO" << endl;
            else
            {
                cout << "YES" << endl;
                cout << cl + 1 << " " << cno + 1 << endl;
            }
        }
        else
        {//cout<<"this"<<endl;
            //cout<<"THIS"<<endl;
            if (mxr.size() > 2 or mxc.size() > 2)
                cout << "NO" << endl;
            else
            {
                vector<pair<ll, ll>> stt;
                rep(i, 0, n, 1)
                {
                    rep(j, 0, m, 1)
                    {
                        if (vis[i][j])
                            stt.pb(mp(i, j));
                    }
                }
                
                cout << "YES" << endl;
                if(stt.size()==1)cout<<stt[0].first+1<<" "<<stt[0].second+1<<endl;
               else cout << stt[0].first + 1 << " " << stt[1].second + 1 << endl;
            }
        }
    }
}

    int main()
    {
        fast();
        solve();
        khatam;
    }