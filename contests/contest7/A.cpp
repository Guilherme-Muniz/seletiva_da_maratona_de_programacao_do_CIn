#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
using ll = long long;
using ld = long double;
using vi = vector<int>;
using vl = vector<ll>;
using pii = pair<int,int>;
using str = string;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,elemento;
    cin >> n;
    
    vector<int> coisas;
    for(int i = 0; i < n; i++)
    {
        cin >> elemento;
        coisas.push_back(elemento);
    }

    set<int> conjunto;
    int maiorsequencia = 0;
    int esquerda = 0;

    for (int direita = 0; direita < n; direita++)
    {
        while (conjunto.count(coisas[direita]))
        {
            conjunto.erase(coisas[esquerda]);
            esquerda++;
        }

        conjunto.insert(coisas[direita]);

        if (conjunto.size() > maiorsequencia)
        {
            maiorsequencia = conjunto.size();
        }
    }

    cout << maiorsequencia << endl;
    

    return 0;
}