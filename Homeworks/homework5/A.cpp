#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
using ll = long long;
using ld = long double;
using vi = vector<int>;
using vl = vector<ll>;
using pii = pair<int,int>;
using str = string;

int k;
vi pedras;
vl prefix;

ll DP(int pos)
{
    if (prefix[pos] != -1)return prefix[pos];
    if (pos == 0) return 0;
    else
    {
        int menor = 2e9;
        for (int j = 1; j <= k; j++)
        {
            if (pos - j >=0)
            {
                int custo_minimo = DP(pos-j) + abs(pedras[pos] - pedras[pos-j]);
                if (custo_minimo < menor)
                {
                    menor = custo_minimo;
                }
            }
            
        }
        return prefix[pos] = menor;
        
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,elemento;

    cin >> n >> k;

    prefix.assign(n,-1);

    for (int i = 0; i < n; i++)
    {
        cin >> elemento;
        pedras.push_back(elemento);
    }
    cout << DP(n-1) << endl;

    return 0;
}