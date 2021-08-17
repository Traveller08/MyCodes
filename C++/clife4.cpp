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
    cin >> a >> b >> c >> d >> e >> f;
#define new_str(s) \
    string s;      \
    cin >> s

ll minimiser(ll n, ll e, ll h, ll a, ll b, ll c)
{
    ll ans = 1e15;
    if (n <= 0)
        return 0;
    if (n > 0)
    {
        if (e + h >= 2 * n)
        {
            if (2 * n <= e)
                ans = ans < n * a ? ans : n * a;
            if (n <= e && n <= h)
                ans = ans < n * c ? ans : n * c;
            if (h >= 3 * n)
                ans = ans < n * b ? ans : n * b;
            if ((((h - n) / 2) >= 1) && ((h - n) / 2) >= n - e)
            {
                if (b - c < 0)
                {
                    ll temp = n - 1 < (h - n) / 2 ? n - 1 : (h - n) / 2;
                    ans = ans < ((b - c) * temp + n * c) ? ans : ((b - c) * temp + n * c);
                }
                else
                {
                    ll temp = 1 > n - e ? 1 : n - e;
                    ans = ans < ((b - c) * temp + n * c) ? ans : ((b - c) * temp + n * c);
                }
            }
            if ((e / 2 >= 1 && e / 2 >= (3 * n - h + 2) / 3))
            {
                if (a - b < 0)
                {
                    ll temp = n - 1 < e / 2 ? n - 1 : e / 2;
                    ans = ans < ((a - b) * temp + n * b) ? ans : ((a - b) * temp + n * b);
                }
                else
                {
                    ll temp = 1 > ((3 * n - h + 2) / 3) ? 1 : ((3 * n - h + 2) / 3);
                    ans = ans < ((a - b) * temp + n * b) ? ans : ((a - b) * temp + n * b);
                }
            }
            if (e >= 3 && h >= 4 && n >= 3)
            {
                ans = ans < (a + b + c + minimiser(n - 3, e - 3, h - 4, a, b, c)) ? ans : (a + b + c + minimiser(n - 3, e - 3, h - 4, a, b, c));
            }
        }
        else ans = -1;          
        }
    return ans;
}
int main()
{
    fast();
    new_int_1(t);
    w(t)
    {
        new_int_6(n, e, h, a, b, c);
        cout << minimiser(n, e, h, a, b, c) << "\n";
    }
    return 0;
}