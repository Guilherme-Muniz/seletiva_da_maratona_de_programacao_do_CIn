#include<bits/stdc++.h>

using namespace std;

#define endl "\n"
using ll = long long;
using pii = pair<int,int>;
using vi = vector<int>;
using vl = vector<ll>;
using str = string;

const int MAXSIZE = 100005;

vi adj[MAXSIZE];
int deg[MAXSIZE];

vi toposort(int n)
{

    queue<int>q;
    for (int i = 1; i <= n ; i++)
    {
        if (deg[i]==0) q.push(i);
    }
    
    vi ord;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        ord.push_back(u);
        for(int v:adj[u])
        {
            deg[v]--;
            if (deg[v] == 0) q.push(v);
        }
    }
    
    return ord;
}   


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m,a,b;
    memset(deg,0,sizeof(deg));

    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;

        adj[a].push_back(b);
        deg[b] ++;
    }
    
    vi resposta = toposort(n);

    if (resposta.size() !=n)
    {
        cout << "IMPOSSIBLE" << endl;
    }
    else
    {
        cout << resposta[0];
        for (int i = 1; i < resposta.size(); i++)
        {
            cout << " " << resposta[i];
        }
        
    }


    return 0;
}