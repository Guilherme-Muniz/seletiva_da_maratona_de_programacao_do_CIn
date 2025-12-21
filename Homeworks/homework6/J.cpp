#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
using ll = long long;
using ld = long double;
using vi = vector<int>;
using vl = vector<ll>;
using pii = pair<int,int>;
using str = string;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vl a;
        ll elemento;
        int cnt[35]; 
        memset(cnt, 0, sizeof(cnt));

        for (int i = 0; i < n; i++)
        {
            cin >> elemento;
            a.push_back(elemento);

            for (int j = 0; j < 30; j++)
            {
                if ((elemento >> j) & 1)
                {
                    cnt[j]++;
                }
            }
        }

        ll ans = 0;

        for (int i = 0; i < n; i++)
        {
            ll soma_atual = 0;
            ll val = a[i];

            for (int j = 0; j < 30; j++)
            {
                ll peso_bit = (1LL << j);

                if ((val >> j) & 1)
                {
                    soma_atual += (n - cnt[j]) * peso_bit;
                }
                else 
                {
                    soma_atual += cnt[j] * peso_bit;
                }
            }
            
            if (soma_atual > ans)
            {
                ans = soma_atual;
            }
        }

        cout << ans << endl;
    }

    return 0;
}