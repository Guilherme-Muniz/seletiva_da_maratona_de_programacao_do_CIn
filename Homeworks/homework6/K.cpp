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
        int n, k;
        cin >> n >> k;

        vl a;
        ll elemento;
        int cnt[35];
        memset(cnt, 0, sizeof(cnt));

        for (int i = 0; i < n; i++)
        {
            cin >> elemento;
            a.push_back(elemento);
            
            for (int j = 0; j <= 30; j++)
            {
                if ((elemento >> j) & 1)
                {
                    cnt[j]++;
                }
            }
        }

        ll ans = 0;

        for (int j = 30; j >= 0; j--)
        {
            int faltam = n - cnt[j];

            if (faltam <= k)
            {
                k -= faltam;
                ans += (1LL << j);
            }
        }

        cout << ans << endl;
    }

    return 0;
}