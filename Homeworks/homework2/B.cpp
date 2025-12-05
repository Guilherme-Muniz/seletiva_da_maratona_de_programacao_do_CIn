#include<bits/stdc++.h>

using namespace std;

#define endl "\n"

using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    ll a,b;
    pair<int,char> par;
    vector<pair<int,char>> horarios;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        par = {a,'a'};
        horarios.push_back(par);
        par = {b,'l'};
        horarios.push_back(par);
    }
    sort(horarios.begin(),horarios.end());

    int maximo = 0;
    int maiorMaximo = 0;

    for (int i = 0; i < 2*n; i++)
    {
        if (horarios[i].second == 'a')
        {
            maximo++;
        }
        else
        {
            maximo--;
        }
        if (maximo > maiorMaximo)
        {
            maiorMaximo = maximo;
        }
    }
    cout << maiorMaximo;



    return 0;
}