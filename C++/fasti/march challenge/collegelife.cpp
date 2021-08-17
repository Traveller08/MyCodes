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
    cin >> a >> b >> c >> d >> e >> f
#define new_str(s) \
    string s;      \
    cin >> s

bool itemChecker(ll one, ll two, ll three, ll e, ll h)
{
    if ((2 * one + three <= e) && (3 * two + three <= h))
        return true;
    return false;
}

bool check(ll n, ll e, ll h)
{
    if (e + h >= 2 * n)
    {
        return true;
    }
    return false;
}

ll minimiser(ll n, ll e, ll h, ll a, ll b, ll c)
{
    ll minm = INT_MAX;
    if (check(n, e, h))
    {
        rep(i, 1, pow(2, n))
        {
            ll w = i;
            vector<ll> bin;
            ll count = 0;
            while (w > 0)
            {
                ll temp = w % 2;
                bin.push_back(temp);
                if (temp == 1)
                    count++;
                w /= 2;
            }

            if (count == 3)
            {
                ll index = 0;
                ll no_one = 0, no_two = 0, no_third = 0;
                ll counter = 0;
                for (ll j = bin.size() - 1; j >= 0; j--)
                {

                    if (bin[j] == 1 && counter == 0)
                    {
                        counter++;

                        no_one = index;
                    }
                    if (bin[j] == 1 && counter == 1 && index != no_one)
                    {
                        counter++;
                        no_two = index;
                    }
                    if (bin[j] == 1 && counter == 2 && index != no_one && no_two != index)
                    {
                        counter++;
                        no_third = index;
                    }

                    index++;
                }
                if (no_one + no_two + no_third == n)
                {
                    if (itemChecker(no_one, no_two, no_third, e, h))
                    {
                        ll price = (no_one * a) + (no_two * b) + (no_third * c);

                        minm = min(minm, price);
                    }
                    if (itemChecker(no_one, no_third, no_two, e, h))
                    {
                        ll price = (no_one * a) + (no_third * b) + (no_two * c);

                        minm = min(minm, price);
                    }
                    if (itemChecker(no_two, no_one, no_third, e, h))
                    {
                        ll price = (no_two * a) + (no_one * b) + (no_third * c);

                        minm = min(minm, price);
                    }
                    if (itemChecker(no_two, no_third, no_one, e, h))
                    {
                        ll price = (no_two * a) + (no_third * b) + ((no_one * c));

                        minm = min(minm, price);
                    }
                    if (itemChecker(no_third, no_one, no_two, e, h))
                    {
                        ll price = (no_third * a) + (no_one * b) + (no_two * c);

                        minm = min(minm, price);
                    }
                    if (itemChecker(no_third, no_two, no_one, e, h))
                    {
                        ll price = (no_third * a) + (no_two * b) + (no_one * c);

                        minm = min(minm, price);
                    }
                    if (n % 3 == 0 && itemChecker(n / 3, n / 3, n / 3, e, h))
                    {
                        ll price = (a + b + c) * n / 3;

                        minm = min(minm, price);
                    }
                    rep(k, 0, n / 2)
                    {
                        if (itemChecker(k, k, n - 2 * k, e, h))
                        {
                            ll price = k * (a + b) + (n - 2 * k) * c;

                            minm = min(minm, price);
                        }
                        if (itemChecker(k, n - 2 * k, k, e, h))
                        {
                            ll price = k * (a + c) + (n - 2 * k) * b;

                            minm = min(minm, price);
                        }
                        if (itemChecker(n - 2 * k, k, k, e, h))
                        {
                            ll price = k * (c + b) + (n - 2 * k) * a;

                            minm = min(minm, price);
                        }
                    }
                }
            }
        }
    }
    else
        minm = -1;

    return minm;
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