#include <iostream>
using namespace std;
int mod = 1000000007;

void mult(long long A1[3][3], long long A2[3][3]){
    long long mul[3][3];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            mul[i][j] = 0;
            for (int k = 0; k < 3; k++){mul[i][j] += (A1[i][k]*A2[k][j])%mod;}
        }
    }

    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){A1[i][j] = mul[i][j];}
	}
}
  
long long power(long long F[3][3], long long n, long a, long b, long c, long x, long y, long z){
    long long M[3][3] = {{a,b,c}, {1,0,0}, {0,1,0}};
    if (n==1){return ((z*F[0][0])%mod + (y*F[0][1])%mod + (x*F[0][2])%mod)%mod;}  
    power(F, n/2, a, b, c, x, y, z);
    mult(F, F);  
    if (n%2 != 0){mult(F, M);}  
    return ((z*F[0][0])%mod + (y*F[0][1])%mod + (x*F[0][2])%mod)%mod;
}

long long solve(long long n, long a, long b, long c, long x, long y, long z){
	long long F[3][3] = {{a,b,c}, {1,0,0}, {0,1,0}} ;
    if(n==0){return x;}
    if(n==1){return y;}
	if(n==2){return z;}
  	return power(F, n-2, a, b, c, x, y, z);
}

int main(){
	int q;
	long a, b, c, x, y, z;
   	long long n;
	cin >> q;
	while(q--){
   		cin >> n >> a >> b >> c >> x >> y >> z;  
   		cout << solve(n, a, b, c, x, y, z) << '\n';
	}
}