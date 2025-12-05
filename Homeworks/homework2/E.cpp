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
    cin >>t;

    while (t--)
    {
        int n,q;
        cin >> n >> q;
        vl doces;
        ll elemento;
        vl prefixsum;
        ll soma =0;
        for (int i = 0; i < n; i++)
        {
            cin >> elemento;
            doces.push_back(elemento);
        }
        sort(doces.rbegin(),doces.rend());
        
        for (int i = 0; i < n; i++)
        {
            soma += doces[i];
            prefixsum.push_back(soma);
        }
        
        for (int i = 0; i < q; i++)
        {
            cin >> elemento;
            if (elemento > prefixsum[n-1])
            {
                cout << -1 << endl;
            }
            else
            {
                auto it_upper = lower_bound(prefixsum.begin(),prefixsum.end(),elemento);
                int idx = it_upper - prefixsum.begin();

                cout << idx+1 << endl;
            }

        }
        
        
    }
    

    return 0;
}