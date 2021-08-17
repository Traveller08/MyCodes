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
ll ets=0;
bool win(char mat[][3], char ab)
{
    ll count = 0;
    // rows
    if (mat[0][0] == mat[0][1] && mat[0][1] == mat[0][2])
    {
        if (mat[0][0] == ab)
            count++;
    }
    if (mat[1][0] == mat[1][1] && mat[1][1] == mat[1][2])
    {
        if (mat[1][1] == ab)
            count++;
    }
    if (mat[2][0] == mat[2][1] && mat[2][1] == mat[2][2])
    {
        if (mat[2][2] == ab)
            count++;
    }

    
    // col
    if (mat[0][0] == mat[1][0] && mat[1][0] == mat[2][0])
    {
        if (mat[0][0] == ab)
            count++;
    }
    if (mat[0][1] == mat[1][1] && mat[1][1] == mat[2][1])
    {
        if (mat[1][1] == ab)
            count++;
    }
    if (mat[0][2] == mat[1][2] && mat[1][2] == mat[2][2])
    {
        if (mat[2][2] == ab)
            count++;
    }
   
    if (mat[0][0] == mat[1][1] && mat[1][1] == mat[2][2])
    {
        if (mat[1][1] == ab)
            count++;
    }
    if (mat[0][2] == mat[1][1] && mat[1][1] == mat[2][0])
    {
        if (mat[1][1] == ab)
            count++;
    }
    if(count>=1)return true;
     return false;
}
bool reachable(char mat[][3])
{  ll one = 0, two = 0, thr = 0;
     rep(i, 0, 3, 1)
    {
        rep(j, 0, 3, 1)
        {
            if (mat[i][j] == 'X')
                one++;
            if (mat[i][j] == 'O')
                two++;
            if (mat[i][j] == '_')
                thr++;
        }
    }
    if(one==two || one==two+1)
    {
        if(win(mat,'O'))
        {
            if(win(mat,'X'))
           return false;
           return (one==two);
        }
        if(win(mat,'X')&& one!=two+1)
        return false;
        return true;
    }
  return false;
}
void solve()
{ 
    char mat[3][3];
    rep(i, 0, 3, 1)
    {
        rep(j, 0, 3, 1)
        {
            cin >> mat[i][j];
        }
    }
    ll ans = 0;
     ll one = 0, two = 0, thr = 0;
     rep(i, 0, 3, 1)
    {
        rep(j, 0, 3, 1)
        {
            if (mat[i][j] == 'X')
                one++;
            if (mat[i][j] == 'O')
                two++;
            if (mat[i][j] == '_')
                thr++;
        }
    }
    bool reach=reachable(mat);
    if(reach)
    {
        if(!win(mat,'X') && !win(mat,'O')&& thr>=1)ans=2;
        else ans=1;
    }
    else ans=3;
   
   ets++;
   // cout <<"test "<<ets<<" " <<ans << endl;
   cout<<ans<<endl;
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

