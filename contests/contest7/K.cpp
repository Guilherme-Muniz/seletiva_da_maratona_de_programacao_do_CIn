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

    int n;
    cin >> n;
    while (n--)
    {
        str s, t;
        cin >> s >> t;
        str grande = s +t;
        sort(grande.begin(),grande.end());
        cout << grande << endl;
    }

    return 0;
}