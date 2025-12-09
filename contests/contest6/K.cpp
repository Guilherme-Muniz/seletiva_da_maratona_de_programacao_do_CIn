#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
using ll = long long;
using ld = long double;
using vi = vector<int>;
using vl = vector<ll>;
using pii = pair<int,int>;
using str = string;

const int MAXSIZE = 1000005;
int n,m;
vi gatos;

vi adj[MAXSIZE];


int totfolhas = 0;

void dfs(int u, int seguido,int pai)
{
    int quantosseguidos;
    if (gatos[u] == 1)
    {
        quantosseguidos = seguido+1;
    }
    else
    {
        quantosseguidos = 0;
    }
    if (quantosseguidos > m) return;

    bool eh_folha = true;
    
    for (int v:adj[u])
    {
        if (v !=pai)
        {
            eh_folha = false;
            dfs(v,quantosseguidos,u);
        }
    }
    if (eh_folha) totfolhas++;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int elemento;
    cin >> n >> m;

    gatos.push_back(0);
    for (int i = 0; i < n; i++)
    {
        cin >> elemento;
        gatos.push_back(elemento);
    }
    for (int i = 0; i < n-1; i++)
    {
        int u,v;
        cin >> u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1,0,0);

    cout << totfolhas << endl;
    
    
    return 0;
}