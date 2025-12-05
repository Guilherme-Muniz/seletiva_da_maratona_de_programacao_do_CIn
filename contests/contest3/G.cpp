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
    str palavra;
    cin >> palavra;
    transform(palavra.begin(),palavra.end(),palavra.begin(),::tolower);
    ll cont=1;
    ll maxcont =1;
    for (int i = 1; i < n; i++)
    {
        if (palavra[i] == palavra[i-1])
        {
            cont++;
        }
        else
        {
            cont = 1;
        }
        if (cont > maxcont)
        {
            maxcont = cont;
        }
    }

    cout << maxcont << endl;
    

    return 0;
}