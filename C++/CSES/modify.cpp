#include <bits/stdc++.h>
using namespace std;
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long int
#define pb push_back
#define pf push_front

int main()
{
    fast();
    ll n;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    ll count = 0;
    ll i = 0;
    bool flag = 0;
    while (i < n - 1)
    {
        if (arr[i + 1] >= arr[i])
        {
            arr[i + 1] -= arr[i];
            arr[i] -= arr[i];
            i++;
        }
        else if (arr[i + 1] < arr[i])
        {
            flag = true;
            break;
        }
    }

    if (!flag)
    {
        for (ll i = 0; i < n; i++)
        {
            if (arr[i] != 0)
            {
                flag = true;
                break;
            }
        }
    }
    if (!flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}