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

    ll x,n, elemento;

    cin >> n >> x;

    vl criancas;
    ll nGondolas=0;

    for (ll i = 0; i < n; i++)
    {
        cin >> elemento;
        criancas.push_back(elemento);
    }
    sort(criancas.begin(),criancas.end());

    ll l = 0; ll r = criancas.size()-1;

    while (l<=r)
    {
        if (criancas[r] + criancas[l] >x)
        {
            r--;
            nGondolas++;
        }
        else
        {
            r--;
            l++;
            nGondolas++;
        }
    }

    cout << nGondolas << endl;



    return 0;
}