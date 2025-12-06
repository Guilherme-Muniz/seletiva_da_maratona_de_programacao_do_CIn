#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
using ll = long long;
using vi = vector<int>;

int n;
vi a;
int memo[200005];

int DP(int i) {
    if (i == n) return 0;

    if (memo[i] != -1) return memo[i];

    int res = 1 + DP(i + 1);

    if (i + a[i] < n) {
        res = min(res, DP(i + a[i] + 1));
    }

    return memo[i] = res;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    int elemento;
    cin >> t;
    while (t--) {
        cin >>n;
        a.clear();
        for (int i = 0; i < n; i++)
        {
            cin >> elemento;
            a.push_back(elemento);
        }
        memset(memo,-1,sizeof(memo));

        cout << DP(0) << endl;

    }

    return 0;
}