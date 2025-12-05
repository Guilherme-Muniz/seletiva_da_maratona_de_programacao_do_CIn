#include<bits/stdc++.h>

using namespace std;

#define endl "\n"
using ll = long long;
using vi = vector<int>;
using pii = pair<int,int>;
using vl = vector<ll>;
using str = string;

const int MAXSIZE = 100005;

vi adj[MAXSIZE];

int dist[MAXSIZE];

int teams[MAXSIZE];

bool bfs(int b)
{
    
    dist[b] = 0;
    queue<int>q;
    q.push(b);
    teams[b] = 1;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v: adj[u])
        {
            if (dist[v] == -1)
            {
                dist[v] = dist[u] + 1;
                teams[v] = (dist[v] % 2) +1;
                q.push(v);
            }
            else
            {
                if (teams[v] == teams[u])
                {
                    return false;
                } 
            }
        }
        
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    memset(dist,-1,sizeof(dist));
    int n,m,a,b;
    cin >> n >> m;

    bool possivel = true;

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i = 1; i <= n; i++)
    {
        if (dist[i] ==-1)
        {
            if (!bfs(i))
            {
                possivel = false;
                break;
            }
        }
    }
    

    if (!possivel)
    {
        cout << "IMPOSSIBLE" << endl;
    }
    else
    {
        cout << teams[1];
        for (int i = 2; i <= n; i++)
        {
            cout << " " << teams[i];
        }
        cout << endl;
        
    }

    

    return 0;
}