const int inf=1e9+5,N=1e5+9;
vector<pair<int,int>>v[N];
int dis[N];

void dij(int src)
{
    for(int i=0;i<=n;i++)
    {
        dis[i]=inf;
    }
    dis[src]=0;
    priority_queue<vector<pair<int,int>>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    pq.emplace(0,src);
    while(!pq.empty())
    {
        int curcost=pq.top().first;
        int node=pq.top().second;
        pq.pop();
        if(curcost>dis[node])
            continue;
        for(auto ch:v[node])
        {
            int newcost=curcost+ch.second;
            if(newcost<dis[ch.first])
            {
                dis[ch.first]=newcost;
                pq.emplace(newcost,ch.first);
            }
        }
    }
}
