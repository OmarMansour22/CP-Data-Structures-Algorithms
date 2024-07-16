#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

void FAST()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}


int n,m,q;
ll dis[505][505];
void floyd(){
    for (int k = 0; k <=n ; ++k) {
        for (int i = 0; i <=n; ++i) {
            for (int j = 0; j <=n; ++j) {
                dis[i][j]=min(dis[i][j],dis[i][k]+dis[k][j]);
            }
        }
    }
}


int main(){
    FAST();

    cin>>n>>m>>q;
    for (int i = 0; i <=n; ++i) {
        for (int j = 0; j <=n; ++j) {
            dis[i][j]=1e18;
        }
    }
    for (int i = 0; i < m; ++i) {
        ll a,b,c;
        cin>>a>>b>>c;
        dis[a][b]=dis[b][a]=min(c,dis[a][b]);
    }    
    floyd();
}
