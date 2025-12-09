#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
using ll = long long;
using ld = long double;
using vi = vector<int>;
using vl = vector<ll>;
using pii = pair<int,int>;
using str = string;

int memo[2005][2005];

int DP(int x,int y)
{
    if (memo[x+1000][y+1000] != -1)return memo[x+1000][y+1000];
    if (x==0 && y == 0)
    {
        return 0;
    }
    else
    {
        int total = 0;
        if (x >0 && y > 0)
        {
            int valor1 = DP(x-1,y);
            int valor2 = DP(x,y-1);
            if (valor1 < valor2)
            {
                total = 1 + valor1;
            }
            else 
            {
                total = 1 + valor2;
            }
        }
        else if (x > 0 && y == 0)
        {
            total = 1 + DP(x-1,y);
        }
        else if (x > 0 && y < 0)
        {
            int valor1 = DP(x-1,y);
            int valor2 = DP(x,y+1);
            int valor3 = DP(x-1,y+1);
            int menor = valor1;
            if (valor2 < menor)
            {
                menor = valor2;
            }
            if (valor3 < menor)
            {
                menor = valor3;
            }
            total = 1 + menor;
        }
        else if (x == 0 && y > 0)
        {
            total = 1 + DP(x,y-1);
        }
        else if (x == 0 && y < 0)
        {
            total = 1 + DP(x,y+1);
        }
        else if (x <0 && y > 0)
        {
            int valor1 = DP(x+1,y);
            int valor2 = DP(x,y-1);
            int valor3 = DP(x+1,y-1);
            int menor = valor1;
            if (valor2 < menor)
            {
                menor = valor2;
            }
            if (valor3 < menor)
            {
                menor = valor3;
            }
            total = 1 + menor;
        }
        else if (x < 0 && y == 0)
        {
            total = 1 + DP(x+1,y);
        }
        else if (x < 0 && y < 0)
        {
            int valor1 = DP(x+1,y);
            int valor2 = DP(x,y+1);
            if (valor1 < valor2)
            {
                total = 1 + valor1;
            }
            else
            {
                total = 1 + valor2;
            }
        }
        
        return memo[x+1000][y+1000] =  total;
    }
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    cin >> n;

    while (n--)
    {
        memset(memo,-1,sizeof(memo));
        int x,y;
        cin >> x >> y;
        cout << DP(x,y) << endl;
    }
    
    
    return 0;
}