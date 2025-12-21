#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
using ll = long long;
using ld = long double;
using vi = vector<int>;
using vl = vector<ll>;
using pii = pair<int,int>;
using str = string;

int n;
vi c;
vi m;
int memo[1005][8];

int get_mask(str s)
{
    int mask = 0;
    for (char x : s)
    {
        if (x == 'A') mask |= 1;
        if (x == 'B') mask |= 2;
        if (x == 'C') mask |= 4;
    }
    return mask;
}

int DP(int i, int mask)
{
    if (mask == 7) return 0;
    if (i == n) return 1e9;
    
    if (memo[i][mask] != -1) return memo[i][mask];

    int res = DP(i + 1, mask);
    int buy = c[i] + DP(i + 1, mask | m[i]);

    return memo[i][mask] = min(res, buy);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    memset(memo, -1, sizeof(memo));

    int preco;
    str s;
    for (int i = 0; i < n; i++)
    {
        cin >> preco >> s;
        c.push_back(preco);
        m.push_back(get_mask(s));
    }

    int ans = DP(0, 0);

    if (ans >= 1e9)
    { 
        cout << -1 << endl;
    }
    else
    {
        cout << ans << endl;
    }
    return 0;
}