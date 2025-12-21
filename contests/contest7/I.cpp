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

    str s,t;
    cin >> s>>t;
    s = s +'?';
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]!= t[i])
        {
            cout << i+1 << endl;
            break;
        }
    }
    

    return 0;
}