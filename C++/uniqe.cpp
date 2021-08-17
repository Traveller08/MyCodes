// C++ code to find number of unique paths
// in a Matrix
#include<bits/stdc++.h>
using namespace std;

int uniquePathsWithObstacles(vector<vector<int>>& A)
{
	
	int r = A.size(), c = A[0].size();
	vector<vector<int>> paths(r, vector<int>(c, 0));
	if (A[0][0] == 0)paths[0][0] = 1;

	for(int i = 1; i < r; i++)
	{
		if (A[i][0] == 0)paths[i][0] = paths[i-1][0];
	}
	for(int j = 1; j < c; j++)
	{
		if (A[0][j] == 0)paths[0][j] = paths[0][j - 1];
	}
	
	for(int i = 1; i < r; i++)
	{
		for(int j = 1; j < c; j++)
		{
			
			if (A[i][j] == 0)paths[i][j] = paths[i - 1][j] +paths[i][j - 1];
		}
	}
	
	return paths[r - 1][c-1];
}

// Driver code
int main()
{
    int n,m;
    cin>>n>>m;
 vector<vector<int>>A( n , vector<int> (m, 0));
 char mat[n][m];
  for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
           cin>>mat[i][j];
           if(mat[i][j]=='#')A[i][j]=1;
      }
  }
cout << uniquePathsWithObstacles(A) << " \n";											
}

// This code is contributed by ajaykr00kj
