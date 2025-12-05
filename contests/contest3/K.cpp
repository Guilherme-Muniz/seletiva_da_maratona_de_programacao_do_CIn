#include<bits/stdc++.h>

using namespace std;

#define endl "\n"

using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
using str = string;

int n;
ll x, d;
vl numeros;
ll somatotal =0;
ll menor =LLONG_MAX;
ll maior = -1;
ll cont = 0;


void conjuntoDasPartes(int idx, ll somatotal,ll menor,ll maior)
{
    if (idx == n)
    {
        if (somatotal>0)
        {
            if (somatotal>= x && maior-menor <=d)
            {
                cont ++;
            }
        }
        return;
    }
    conjuntoDasPartes(idx+1,somatotal+numeros[idx],min(menor,numeros[idx]),max(maior,numeros[idx]));
    conjuntoDasPartes(idx+1,somatotal,menor,maior);


}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll elemento;

    cin >> n >> x >> d;
    for (int i = 0; i < n; i++)
    {
        cin >> elemento;
        numeros.push_back(elemento);
    }
    sort(numeros.begin(),numeros.end());
    conjuntoDasPartes(0,0,menor,maior);

    cout << cont << endl;


    return 0;
}