#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    vector<long long> x;
    vector<long long> p;
    vector<long long> somas;
    long long soma = 0;
    long long elemento;
    for (long long i = 0; i < n; i++)
    {
        cin >> elemento;
        x.push_back(elemento);
    }

    for (long long i = 0; i < n; i++)
    {
        cin >> elemento;
        p.push_back(elemento);
        soma +=elemento;
        somas.push_back(soma);
    }
    long long q;
    cin >> q;

    long long l,r;

    for (long long i = 0; i < q; i++)
    {
        cin >> l >> r;
        
        auto vilaLeft = upper_bound(x.begin(),x.end(),l);
        
        long long idx_left = vilaLeft - x.begin();
        if (binary_search(x.begin(),x.end(),l))
        {
            idx_left--;
        }
        auto vilaRight = upper_bound(x.begin(),x.end(),r);
        long long idx_right = vilaRight - x.begin();
        idx_right--;
        long long pessoas;
        if (idx_left < 0 ||idx_right < 0)
        {
            pessoas = 0;
        }
        else if (l>x[x.size()-1])
        {
            pessoas = 0;
        }
        else if (idx_left == 0)
        {
            pessoas = somas[idx_right];
        }
        else
        {
            pessoas = somas[idx_right]-somas[idx_left-1];
        }
        cout << pessoas << "\n";
        
    }
    return 0;
}