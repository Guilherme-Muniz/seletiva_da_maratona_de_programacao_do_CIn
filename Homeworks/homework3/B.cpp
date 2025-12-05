#include<bits/stdc++.h>

using namespace std;

#define endl "\n"
using ll = long long;
using pii = pair<int,int>;
using vi = vector<int>;
using vl = vector<ll>;
using str = string;

const int MAXSIZE = 200005;

vi adj[MAXSIZE];

pair<int,vi> bfs(int b,int n)
{
    vi dist(n+1,-1);
    queue <int> q;

    dist[b] = 0;
    q.push(b);

    int farthestNode = b;
    int max_dist = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int v:adj[u])
        {
            if (dist[v] ==-1)
            {
                dist[v] = dist[u]+1;
                q.push(v);
            }
        }

        if (dist[u]> max_dist)
        {
            max_dist = dist[u];
            farthestNode = u;
        }
    }
    return {farthestNode,dist};
    

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,a,b;
    cin >> n;

    for (int i = 0; i < n-1; i++)
    {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    pair<int,vi> ponta1 = bfs(1,n);
    int noDaPonta1 = ponta1.first;
    
    pair<int,vi> ponta2 = bfs(noDaPonta1,n);
    vi distsDeNoDaPonta1 = ponta2.second;
    int noDaPonta2 = ponta2.first;

    pair<int,vi> ponta3 = bfs(noDaPonta2,n);
    vi distsDeNoDaPonta2 = ponta3.second;

    for (int i = 1; i < n+1; i++)
    {
        if (i == 1)
        {
            cout << max(distsDeNoDaPonta1[i],distsDeNoDaPonta2[i]);
        }
        else
        {
            cout << " " << max(distsDeNoDaPonta1[i],distsDeNoDaPonta2[i]);
        }
    }
    

    

    return 0;
}