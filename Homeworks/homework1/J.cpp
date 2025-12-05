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

    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        ll n;
        cin >> n;
        vl a;
        ll elemento;
        vector<bool> menorvec;
        ll menor;
        for (ll i = 0; i < n; i++)
        {
            cin >> elemento;
            a.push_back(elemento);
            if (i==0)
            {
                menor = elemento;
            }
            else if (elemento < menor)
            {
                menor = elemento;
            }
            if (elemento == menor)
            {
                menorvec.push_back(true);
            }
            else
            {
                menorvec.push_back(false);
            }
        }
        ll maior;
        for (ll i = n-1; i >= 0; i--)
        {
            if (i == n-1)
            {
                maior = a[i];
            }
            else if (a[i] > maior)
            {
                maior = a[i];
            }
            if (a[i]== maior)
            {
                menorvec[i] = true;
            }
        }

        for (ll i = 0; i < n; i++)
        {
            if (menorvec[i])
            {
                cout << "1";
            }
            else 
            {
                cout << "0";
            }
        }
        cout << endl;
        
    }
    

    return 0;
}