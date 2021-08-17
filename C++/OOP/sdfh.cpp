/*************************************************************
** AUTHOR : ANKIT CHAUDHARY **
*************************************************************/
#include <bits/stdc++.h>
using namespace std;
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long int
#define pb push_back
#define pf push_front
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define mem0(a) memset(a, 0, sizeof(a))
#define w(t) while (t--)
#define array(arr, n) \
    ll arr[n];        \
    rep(i, 0, n) cin >> arr[i];
#define new_int_1(t) \
    ll t;            \
    cin >> t;
#define new_int_2(a, b) \
    ll a, b;            \
    cin >> a >> b
#define new_int_3(a, b, c) \
    ll a, b, c;            \
    cin >> a >> b >> c
#define new_int_4(a, b, c, d) \
    ll a, b, c, d;            \
    cin >> a >> b >> c >> d
#define new_int_6(a, b, c, d, e, f) \
    ll a, b, c, d, e, f;            \
    cin >> a >> b >> c >> d >> e >> f
#define new_str(s) \
    string s;      \
    cin >> s

int main()
{
    fast();
    new_int_1(t);
    w(t)
    {
        new_int_1(n);
        new_str(s);
        ll befT[n + 1] = {};
        ll aftT[n + 1] = {};
        ll befM[n + 1] = {};
        ll aftM[n + 1] = {};
        bool flag = 0;
        ll countT = 0, countM = 0;
        rep(i, 0, n)
        {
            if (s[i] == 'T')
                countT++;
            befT[i + 1] = countT;
            if (s[i] == 'M')
                countM++;
            befM[i + 1] = countM;
        }
        if (countT != (2 * countM))
            flag = true;
        if (!flag)
        {
            countM = 0;
            countT = 0;
            for (ll i = n - 1; i >= 0; i--)
            {
                if (s[i] == 'T')
                    countT++;
                aftT[i] = countT;
                if (s[i] == 'M')
                    countM++;
                aftM[i] = countM;
            }

            for (ll i = 0; i < n; i++)
            {
                if (s[i] == 'M')
                {
                    ll reqTbef = befM[i + 1];
                    ll reqTaf = aftM[i];
                    ll tbef = befT[i + 1];
                    ll taft = aftT[i];
                    if (tbef < reqTbef || taft < reqTaf)
                    {
                        flag = true;
                        break;
                    }
                }
            }
   
            
        }
        if (!flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}