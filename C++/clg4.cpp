#include <bits/stdc++.h>
using namespace std;
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long int
#define pb push_back
#define pf push_front
#define rep(i, a, b, p) for (ll i = a; i <= b; i += p)
#define mem0(a) memset(a, 0, sizeof(a))
#define w(t) while (t--)
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
        new_int_6(n, e, h, a, b, c);
        ll maxm = 1e15;
        ll cnt = 0;
        ll ck = 0;
        rep(k, 0, min(e, h) , 1)
        {
            rep(i, 0, e - h , 2)
            {
                rep(j, 0, h - k , 3)
                {
                    cnt += k + i / 2 + j / 3;
                    if (cnt >= n)
                    {
                        maxm = min(maxm, k * c + a * (i / 2) + b * (j / 3));
                        ck = cnt;
                    }
                    cnt = 0;
                }
            }
        }
        if (ck < n)
            cout << "-1"
                 << "\n";
        else
            cout << maxm << "\n";
    }
    return 0;
}