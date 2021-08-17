#include <bits/stdc++.h>
using namespace std;
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long int
#define pb push_back
#define pf push_front
#define rep(i, a, b, k) for (ll i = a; i < b; i += k)
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
#define new_str(s) \
    string s;      \
    cin >> s
int main()
{
    fast();
    new_int_1(t);
    w(t)
    {
        ll ans = 0, sum = 0;
        new_int_1(n);
        ll arr[n];

        rep(i, 0, n, 1)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        bool flag = 0;
        rep(i, 0, n, 1)
        {
            if (arr[i] > i + 1)
            {
                flag = 1;
                break;
            }
            else
            {
                ans += (i + 1) - arr[i];
            }
        }

        if (ans % 2 == 0 || flag == true)
            cout << "Second\n";
        else
            cout << "First\n";
    }
    return 0;
}