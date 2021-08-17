#include <bits/stdc++.h>
using namespace std;
 
// Function to calculate
// leaf nodes in n-ary tree
int calcNodes(int N, int I)
{
    int result = 0;
 
    result = I * (N - 1) + 1;
 
    return result;
}
 
// Driver code
int main()
{  map<int,vector<pair<int,int>>>mp;
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            int p=calcNodes(i,j);
           mp[p].push_back(make_pair(i,j));
        }
    }
    vector<pair<int,int>>vll=mp[20];
    for(auto x:vll)cout<<x.first<<" "<<x.second<<endl;
 
 
    return 0;
}