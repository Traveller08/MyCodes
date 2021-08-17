#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    map<int, int> v;
    for (int i = 0; i < m; i++)
    {
        int key, lock;
        cin >> key >> lock;
        v[lock]++;
    }
    int num;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (v.find(num) == v.end())
        {
            flag = false;
        }
    }
    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}