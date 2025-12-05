#include<bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
using str = string;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    ll k,elememto;
    cin >> n >> m >> k;
    vl desires;
    vl apartments;

    for (int i = 0; i < n; i++)
    {
        cin >> elememto;
        desires.push_back(elememto);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> elememto;
        apartments.push_back(elememto);
    }
    sort(desires.begin(),desires.end());
    sort(apartments.begin(),apartments.end());
    int d=0,a =0,cont = 0;

    while (d < n && a < m)
    {
        if (desires[d] > apartments[a]+k)
        {
            a++;
        }
        else if (desires[d] < apartments[a]-k)
        {
            d++;
        }
        else
        {
            a++;
            d++;
            cont++;
        }
        
    }
    cout << cont << endl;
    

    return 0;
}