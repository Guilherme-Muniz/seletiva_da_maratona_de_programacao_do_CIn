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

    int t,n,m;
    cin >> t;
    for (int g = 0; g < t; g++)
    {
        cin >> n >> m;

        vl a;

        ll elemento;
        ll soma =0;
        vl somas;

        for (int i = 0; i < n; i++)
        {
            cin >> elemento;
            a.push_back(elemento);
            soma += elemento;
            somas.push_back(soma);

        }
        ll sd,sm,ed,em;
        ll total;
        for (int i = 0; i < m; i++)
        {
            total = 0;
            cin >> sd >> sm >> ed >> em;
            if (sm == em && ed>=sd )
            {
                total = ed-sd+1;
            }
            else if (sm < em)
            {
                total = a[sm-1]-sd + ed +1;
                total += somas[em-2] - somas[sm-1];
            }
            else if (sm == em && ed<sd)
            {
                total = a[sm-1]-sd + ed +1;
                if (somas.size()-1 > sm-1)
                {
                    total += somas[somas.size()-1]-somas[sm-1];
                }
                if (sm>1)
                {
                    total+= somas[sm-2];
                }
            }
            else if (sm > em)
            {
                total = a[sm-1]-sd + ed +1;
                if (somas.size()-1 > sm-1)
                {
                    total += somas[somas.size()-1]-somas[sm-1];
                }
                if (em>1)
                {
                    total+= somas[em-2];
                }
            }
            cout << total << endl;
            
            
            
            
            
        }
    }
    

    return 0;
}