#include<bits/stdc++.h>

using namespace std;

#define endl "\n"
using ll = long long;
using pii = pair<int,int>;
using vi = vector<int>;
using vl = vector<ll>;
using str = string;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    bool possivel = true;

    string s,t;
    cin >> s;
    cin >> t;
    sort(t.begin(),t.end());
    for (int i = 1; i < s.size(); i++)
    {
        if (isupper(s[i]))
        {
            possivel = binary_search(t.begin(),t.end(),s[i-1]);
            if (!possivel)
            {
                break;
            }
        }
    }

    if (possivel)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}