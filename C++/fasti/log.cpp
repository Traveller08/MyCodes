#include <iostream>
using namespace std;

int slope(int h1, int d1, int h2, int d2){
    int s = (h2-h1)/(d2-d1);
    return s;
}

int main(){
    int t, n, i, j, dmax,s,snew;
    cin >> t;
    while(t--){
        s = dmax = 0;

        cin >> n;
        
        int h[n+1]; h[0]=0;
        int d[n+1]; d[0]=0;
        
        for(i=1; i<=n; i++){ cin >> h[i]; d[i] = i;}
         
        for(i=1; i<n; i++){
            for(j=2; j<=n; j++){
                snew = slope(h[i],i,h[j],j);
                if(snew>s){
                    d = j-i;
                    if(d>=dmax){ dmax = d;}
                } 
                s = snew;               
            }
        }
        cout << dmax << '\n';
    }
}