
#include <bits/stdc++.h>
#define INF 100000000
#define ff first
#define ss second
using namespace std;
typedef pair<int,int> pii;
vector<int> edge[1100000];
queue<pii> q;
int dist[1100000];
int main() {
    int n,i,j,k,e,r,s=0,rod[4];
    cin>>n;
    for(i=0;i<n;i++) {   
        cin>>j;
        s|=((j-1)<<(2*i));
    }
    for(i=0;i<(1<<(2*n));i++) {
        dist[i]=INF;
        for(j=0;j<4;j++)
            rod[j]=INF;
        for(j=0;j<(2*n);j+=2) {
            r=(i&(3<<j))>>j;
            if(rod[r]==INF)
                rod[r]=j;
        }
        for(j=0;j<4;j++)
            for(k=0;k<4;k++)
                if(rod[j]<rod[k]) {
                    e=((i & ~(3<<rod[j])) | (k<<rod[j]));
                    edge[i].push_back(e);
                    edge[e].push_back(i);
                }
    }
    q.push({s,0});
    dist[s]=0;
    while(!q.empty()) {
        pii t=q.front();
        q.pop();
        if(!t.ff)
            break;
        for(i=0;i<edge[t.ff].size();i++) {
            j=edge[t.ff][i];
            if(dist[j] > dist[t.ff] + 1) {
                dist[j]=dist[t.ff]+1;
                q.push({j,dist[t.ff]+1});
            }
        }
    }
    cout<<dist[0];
    return 0;
}