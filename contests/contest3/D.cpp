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
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        vl towers;
        ll elemento;
        bool possivel =true;
        for (int i = 0; i < n; i++)
        {
            cin >> elemento;
            towers.push_back(elemento);
        }
        ll currHeight = towers[k-1];
        sort(towers.begin(),towers.end());
        ll waterheight = 0;
        while (currHeight < towers[towers.size()-1])
        {
            auto it_upper = upper_bound(towers.begin(),towers.end(),currHeight);
            int idx = it_upper - towers.begin();
            ll diff =towers[idx] - currHeight;
            if (diff > currHeight-waterheight)
            {
                possivel = false;
                break;
            }
            else
            {
                waterheight+= diff;
                currHeight = towers[idx];
            }
        }
        if (possivel)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }



    return 0;
}