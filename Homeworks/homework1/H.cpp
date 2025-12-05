#include<bits/stdc++.h>

#define ll long long
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    ll n,k;
    cin >> n >> k;

    vector<int> leftShoes;
    vector<int> rightShoes;

    int elemento;
    for (ll i = 0; i < n; i++)
    {
        cin >> elemento;
        leftShoes.push_back(elemento);
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> elemento;
        rightShoes.push_back(elemento);
    }
    sort(leftShoes.begin(),leftShoes.end());
    sort(rightShoes.begin(),rightShoes.end());

    ll cont = 0;
    while (k > 0 && cont < n)
    {
        k -= leftShoes[cont] + rightShoes[cont];
        if (k >= 0)
        {
            cont++;
        }
        else
        {
            break;
        }
        
    }
    cout << cont << endl;
    


    return 0;
}