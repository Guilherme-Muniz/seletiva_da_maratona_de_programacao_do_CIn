#include<bits/stdc++.h>

using namespace std;

#define endl "\n"

using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
using str = string;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        ll n,elemento;
        cin >> n;
        vl numeros;
        cin >> elemento;
        numeros.push_back(elemento);
        ll cont =1;
        ll custo;
        ll menorcusto = -1;
        for (ll i = 1; i < n; i++)
        {
            cin >> elemento;
            numeros.push_back(elemento);
            if (elemento == numeros[i-1])
            {
                cont++;
            }
            else
            {
                custo = (n-cont) * numeros[i-1];
                if (menorcusto ==-1 || custo < menorcusto)
                {
                    menorcusto = custo;
                }
                cont = 1;
            }
            
        }
        custo = (n-cont) * elemento;
        if (menorcusto ==-1 || custo < menorcusto)
            {
                menorcusto = custo;
            }
        cout << menorcusto << endl;
        
    }
    


    return 0;
}