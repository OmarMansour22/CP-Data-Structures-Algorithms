#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N=2e5+10;
vector<vector<int>>v(N);
int n;
int lvl[N];
void bfs(int src)
{
    queue<int>q;
    q.push(src);
    lvl[src]=1;
    int level=1;
    while(!q.empty())
    {
        level++;
        int sz=q.size();
        for(int i=0;i<sz;i++)
        {
            int node=q.front();
            q.pop();
            for(auto ch:v[node])
            {
                if(lvl[ch])continue;
                lvl[ch]=level;
                q.push(ch);
            }
        }
    }
}

int main(){

}
