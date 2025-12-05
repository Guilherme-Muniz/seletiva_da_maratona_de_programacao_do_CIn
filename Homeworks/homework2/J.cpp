#include<bits/stdc++.h>

using namespace std;

using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
using str = string;

int n;
vl macas;
ll menordiff = -1;

void backtrack(int idx, ll soma1, ll soma2)
{
    if (idx == n)
    {
        if (menordiff == -1 || abs(soma1-soma2)< menordiff)
        {
            menordiff = abs(soma1 - soma2);
        }
        return;
    }
    backtrack(idx+1,soma1+macas[idx],soma2);
    backtrack(idx+1,soma1,soma2+macas[idx]);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    ll elemento;

    for (int i = 0; i < n; i++)
    {
        cin >> elemento;
        macas.push_back(elemento);
    }

    backtrack(0,0,0);
    cout << menordiff << endl;


    return 0;
}