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
    
    int n;
    cin >> n;
    int elemento;
    vi lojas;
    for (int i = 0; i < n; i++)
    {
        cin >> elemento;
        lojas.push_back(elemento);
    }
    sort(lojas.begin(),lojas.end());
    int q;
    cin >> q;
    int m;
    for (int i = 0; i < q; i++)
    {
        cin >> m;
        auto it_upper = upper_bound(lojas.begin(),lojas.end(),m);
        int idx = it_upper - lojas.begin();
        cout << idx << endl;
    }
    
    



    return 0;
}