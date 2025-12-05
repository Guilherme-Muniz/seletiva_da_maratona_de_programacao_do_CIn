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

    ll n;
    cin >> n;
    pair<ll,char> par;
    vector<pair<ll,char>>horarios;
    ll elemento;
    int total = 0;
    bool pode = true;
    for (ll i = 0; i < n; i++)
    {
        cin >> elemento;
        par = {elemento,'a'};
        horarios.push_back(par);
        cin >> elemento;
        par = {elemento,'l'};
        horarios.push_back(par);
    }
    sort(horarios.begin(),horarios.end());

    for (ll i = 0; i < n*2; i++)
    {
        if(horarios[i].second == 'a')
        {
            total++;
        }
        if (horarios[i].second == 'l')
        {
            total--;
        }
        if (total >2)
        {
            pode = false;
        }
    }
    if (pode)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}