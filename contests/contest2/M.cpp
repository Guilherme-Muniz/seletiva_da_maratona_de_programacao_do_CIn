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

    int t;
    cin >> t;

    for (int j = 0; j < t; j++)
    {
        ll n;
        cin >> n;
        vl candies;
        vl somasvec;
        ll soma= 0;
        ll elemento;
        for (ll i = 0; i < n; i++)
        {
            cin >> elemento;
            soma += elemento;
            candies.push_back(elemento);
            somasvec.push_back(soma);
        }
        ll alice = 0,lef = 0;
        ll bob = 0, rig = n-2;
        bool iguaisemcertoponto = false;
        ll tot_doces;
        while (lef <= rig + 1)
        {
            if (lef == rig+1 && bob == alice)
            {
                break;
            }
            if (alice == bob)
            {
                if (lef >0 || rig < n-2)
                {
                    iguaisemcertoponto = true;
                    tot_doces = lef + (n-2)-rig;
                }
                alice = somasvec[lef];
                lef++;

                if (rig >=0)
                {
                    bob = somasvec[n-1] - somasvec[rig];
                    rig--;
                }
                else
                {
                    bob = somasvec[n-1];
                }
            }
            else if ( alice < bob)
            {
                alice = somasvec[lef];
                lef++;
            }
            else
            {
                if (rig >=0)
                {
                    bob = somasvec[n-1] - somasvec[rig];
                    rig--;
                }
                else
                {
                    bob = somasvec[n-1];
                }
            }
            
        }
        if (iguaisemcertoponto && alice != bob)
        {
            cout << tot_doces << endl;
        }
        else if (alice != bob)
        {
            cout << "0\n";
        }
        else
        {
            tot_doces = lef + (n-2)-rig;
            cout << tot_doces << endl;
        }
        somasvec.clear();
        candies.clear();
        
        
        
        
    }

    

    return 0;
}