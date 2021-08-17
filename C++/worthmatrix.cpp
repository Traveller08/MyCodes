#include <bits/stdc++.h>
using namespace std;
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long int
bool sumchecker(ll a, ll b, ll c, ll d, ll l, ll k)
{
    ll e = a - b - c + d;
    ll temp = e / (l * l);
    if (temp >= k)
        return true;
    else
        return false;
}

int main()
{
    fast();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        ll arr[n + 1][m + 1];
        ll ans = 0, one_size = 0;
        for (ll i = 0; i <= n; i++)
        {
            for (ll j = 0; j <= m; j++)
            {
                if (i == 0 || j == 0)
                    arr[i][j] = 0;
                else
                    cin >> arr[i][j];
            }
        }
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= m; j++)
            {
                if (arr[i][j] >= k)
                    one_size++;
            }
        }
        for (ll i = 0; i <= n; i++)
        {
            for (ll j = 1; j <= m; j++)
            {
                arr[i][j] += arr[i][j - 1];
            }
        }
        for (ll i = 0; i <= m; i++)
        {
            for (ll j = 1; j <= n; j++)
            {
                arr[j][i] += arr[j - 1][i];
            }
        }
        ll maxsize = min(m, n);
        for (ll l = 2; l <= maxsize; l++)
        {
            for (ll i = l; i <=n; i++)
            {
                if (sumchecker(arr[i][m], arr[i - l][m], arr[i][m - l], arr[i - l][m - l], l, k))
                {
                    ll mid = (l + m) / 2;
                    if (sumchecker(arr[i][mid], arr[i - l][mid], arr[i][mid - l], arr[i - l][mid - l], l, k))
                    {
                        for (ll j = l; j <= m; j++)
                        {
                            if(sumchecker(arr[i][j],arr[i - l][j],arr[i][j - l],arr[i - l][j - l],l,k))
                               {
                                    ans += (m - j + 1);
                                 break;

                               }
                           
                        }
                    }
                    else
                    {
                         for (ll j = max(mid,l); j <= m; j++)
                        {
                            if(sumchecker(arr[i][j],arr[i - l][j],arr[i][j - l],arr[i - l][j - l],l,k))
                               {
                                    ans += (m - j + 1);
                                    break;

                               }
                           
                        }
                    }
                }
            }
        }
        ans += one_size;
        cout << ans << "\n";
    }

    return 0;
}
