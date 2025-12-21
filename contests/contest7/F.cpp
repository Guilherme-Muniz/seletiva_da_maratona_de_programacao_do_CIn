#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
using ll = long long;
using ld = long double;
using vi = vector<int>;
using vl = vector<ll>;
using pii = pair<int,int>;
using str = string;


str coisa;

int funcao(int pos)
{
    if (coisa[pos + 1] == '.')
    {
        coisa[pos+1] = coisa[pos];
        coisa[pos] = '.';
    }
    else if (coisa[pos + 1] == '#')
    {
        return 1;
    }
    else
    {
        int gui = funcao(pos+1);
        if (gui == 1) return 1;
        int arthur = funcao(pos);
    }
    return 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    cin >> coisa;
    for (int i = 0; i < k; i++)
    {
        int x =funcao(i);
        if (x == 1) break;
        
    }
    cout << coisa << endl;
    



    return 0;
}