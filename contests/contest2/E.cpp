#include<bits/stdc++.h>

using namespace std;

#define endl "\n"

using ll = long long;
using vl = vector<ll>;
using vi = vector<int>;
using ui = unsigned int;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    ll t,d;
    ll time = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> t >> d;
        if (t <=time)
        {
            time += d;
        }
        else
        {
            time = t+d;
        }
    }
    cout << time << endl;

    return 0;
}