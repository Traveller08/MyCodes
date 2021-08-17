#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = a; i < (b); i++)
#define F0R(i, a) for (int i = 0; i < (a); i++)
#define FORd(i, a, b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i, a) for (int i = (a)-1; i >= 0; i--)
#define llint long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    llint t, n, m, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> k;
        llint count = 0;
        llint a[n + 1][m + 1];
        llint sum = 0;
        F0R(i, n + 1)
        {
            F0R(j, m + 1)
            {
                a[i][j] = 0;
            }
        }
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < m + 1; j++)
            {
                cin >> a[i][j];
                if (a[i][j] >= k)
                    count++;
            }
        }
        llint pre[n + 1][m + 1];
        F0R(i, n + 1)
        {
            F0R(j, m + 1)
            {
                pre[i][j] = 0;
            }
        }
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < m + 1; j++)
            {
                if (j == 1)
                {
                    if (i == 1)
                    {
                        pre[i][1] = a[i][1];
                    }
                    else
                    {
                        pre[i][1] = pre[i - 1][1] + a[i][1];
                    }
                }
            }
        }
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < m + 1; j++)
            {
                if (i == 1)
                {
                    if (j == 1)
                    {
                        pre[1][j] = a[1][j];
                    }
                    else
                    {
                        pre[1][j] = pre[1][j - 1] + a[1][j];
                    }
                }
            }
        }
        for (int i = 2; i < n + 1; i++)
        {
            for (int j = 2; j < m + 1; j++)
            {
                pre[i][j] = a[i][j] + pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1];
            }
        }
        for (int l = 2; l <= min(n, m); l++)
        {
            for (int i = l; i < n + 1; i++)
            {   int a=(m+l)/2;
                if (((pre[i][a] - pre[i-l][a] - pre[i][a-l] + pre[i-l][i-l]) / (l * l)) >= k)
                {
                    for (int j = l; j < m + 1; j++)
                    {

                        sum = pre[i][j] - pre[i - l][j] - pre[i][j - l] + pre[i - l][j - l];
                        if (sum / (l * l) >= k)
                        {
                            count += (m - j+1 );
                            break;
                        }
                    }
                }
                else
                {
                   a-=2;
                   a=max(a,l);
                    for (llint j =a; j < m + 1; j++)
                    {

                        sum = pre[i][j] - pre[i - l][j] - pre[i][j - l] + pre[i - l][j - l];
                        if (sum / (l * l) >= k)
                        {
                            count += (m - j +1);
                            break;
                        }
                    }
                }
            }
        }
        cout << count << endl;
    }
}