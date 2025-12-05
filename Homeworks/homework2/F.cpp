#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    ll soma = 0;
    ll elemento;
    ll menor = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> elemento;
        soma+=elemento;
        if (soma < menor)
        {
            menor = soma;
        }
    }
    cout << 0 - menor << endl;


    return 0;
}