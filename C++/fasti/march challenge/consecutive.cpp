#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int c;
        cin >> c;
        int f=c;
        int count=0;
        while (c != 0)
        {
            c /= 2;
            count++;
        }
        int d = pow(2, (count));
        int p,res;
        bool flag=0;

        int maximProduct=0;

        for (int i = 0; i < d; i++)
        {
            for (int j = 0; j < d; j++)
            if((i^j)==f)
               { maximProduct=max(maximProduct,i*j);

               }
           
        }
        cout<<maximProduct<<"\n";

    }
    

    return 0;
}