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

    int n,q,elemento;
    vi tempos;

    cin >> n >> q;

    for (int i = 0; i < n; i++)
    {
        cin >> elemento;
        tempos.push_back(elemento);
    }
    sort(tempos.begin(),tempos.end());
    
    while(q--)
    {
        int l,r;
        cin >> l >> r;

        auto it_upper = upper_bound(tempos.begin(),tempos.end(),r);
        int idxr = it_upper - tempos.begin();
        idxr++;

        auto it_lower = lower_bound(tempos.begin(),tempos.end(),l);
        int idxl = it_lower - tempos.begin();
        idxl++;
        cout << idxr - idxl << endl;
    }

    return 0;
}