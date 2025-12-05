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

    ll n,q;
    cin >> n >> q;
    pair <ll,char> par;
    vector<pair<ll,char>> temperaturas;
    ll elemento;

    for (ll i = 0; i < n; i++)
    {
        cin >> elemento;
        par = {elemento,'l'};
        temperaturas.push_back(par);
        cin >> elemento;
        par = {elemento+1,'r'};
        temperaturas.push_back(par);

    }
    sort(temperaturas.begin(),temperaturas.end());
    vl prefixsum;
    ll atual = 0;
    for (ll i = 0; i < n*2; i++)
    {
        if (temperaturas[i].second=='l')
        {
            atual++;
            prefixsum.push_back(atual);
        }
        if (temperaturas[i].second=='r')
        {
            atual--;
            prefixsum.push_back(atual);
        }

    }
    ll total;
    for (ll i = 0; i < q; i++)
    {
        cin >> elemento;
        if (elemento> temperaturas[temperaturas.size()-1].first)
        {
            total = 0;
        }
        else
        {
            auto it_lower = upper_bound(temperaturas.begin(),temperaturas.end(),make_pair(elemento,'z'));
            ll idx = it_lower - temperaturas.begin();
            if (idx == 0)
            {
                total = 0;
            }
            else
            {
                total = prefixsum[idx-1];
            }
            
        }
        cout << total << endl;
    }





    return 0;
}