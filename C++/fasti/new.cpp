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

map<ll, ll> prime;
void sieve()
{
    ll arr[150] = {};
    arr[0] = 1;
    arr[1] = 1;
    rep(i, 2, 150, 2)
    {
        arr[i] = 1;
    }
    rep(i, 3, 150, 1)
    {
        rep(j, i * i, 150, i)
        {
            if (arr[j] == 0)
                arr[j] = 1;
        }
    }
    rep(i, 0, 150, 1)
    {
        if (arr[i] == 0 && ((i >= 65 && i <= 90) || (i >= 97 && i <= 122)))
            prime[i]++;
    }
}

int main()
{
    fast();
    sieve();
    new_int_1(t);
    w(t)
    {
        new_int_1(l);
        new_str(s);
        rep(i, 0, l, 1)
        {
            ll ans = 0;
            auto low = prime.lower_bound(int(s[i]));
            if (int(s[i]) == low->first)
            {

                ans = low->first;
            }
            else
            {
                if (low != prime.begin() && low != prime.end())
                {
                    auto high = low;
                    high--;
                    ans = (low->first - int(s[i])) < (int(s[i]) - high->first) ? low->first : high->first;
                }
                else if (low == prime.begin())
                {
                    ans = low->first;
                }
                else if (low == prime.end())
                {
                    low--;
                    ans = low->first;
                }
            }
            cout << char(ans);
        }
        cout << endl;
    }
    return 0;
}