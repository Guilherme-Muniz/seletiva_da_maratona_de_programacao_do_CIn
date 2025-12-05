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

    int n,m;
    cin >> n >> m;
    char grid[m][n];
    int cont = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
        
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j]== 'u' || grid [i][j] == 'U')
            {
                if (i-2 >= 0)
                {
                    if ((grid[i-1][j] == 'v' || grid[i-1][j] == 'V') && (grid[i-2][j] == 'a' || grid[i-2][j] == 'A'))
                    {
                        cont++;
                    }
                }
                if (j-2>=0)
                {
                    if ((grid[i][j-1] == 'v' || grid[i][j-1] == 'V') && (grid[i][j-2] == 'a' || grid[i][j-2] == 'A'))
                    {
                        cont++;
                    }
                }
                if (i-2 >= 0 && j-2>=0)
                {
                    if ((grid[i-1][j-1] == 'v' || grid[i-1][j-1] == 'V') && (grid[i-2][j-2] == 'a' || grid[i-2][j-2] == 'A'))
                    {
                        cont++;
                    }
                }
                if (i+2 <=m-1)
                {
                    if ((grid[i+1][j] == 'v' || grid[i+1][j] == 'V') && (grid[i+2][j] == 'a' || grid[i+2][j] == 'A'))
                    {
                        cont++;
                    }
                }
                if (j+2<= n-1)
                {
                    if ((grid[i][j+1] == 'v' || grid[i][j+1] == 'V') && (grid[i][j+2] == 'a' || grid[i][j+2] == 'A'))
                    {
                        cont++;
                    }
                }
                if (i+2 <=m-1 && j+2<= n-1)
                {
                    if ((grid[i+1][j+1] == 'v' || grid[i+1][j+1] == 'V') && (grid[i+2][j+2] == 'a' || grid[i+2][j+2] == 'A'))
                    {
                        cont++;
                    }
                }
                if (i-2 >=0 && j+2<= n-1)
                {
                    if ((grid[i-1][j+1] == 'v' || grid[i-1][j+1] == 'V') && (grid[i-2][j+2] == 'a' || grid[i-2][j+2] == 'A'))
                    {
                        cont++;
                    }
                }
                if (j-2 >=0 && i+2<= m-1)
                {
                    if ((grid[i+1][j-1] == 'v' || grid[i+1][j-1] == 'V') && (grid[i+2][j-2] == 'a' || grid[i+2][j-2] == 'A'))
                    {
                        cont++;
                    }
                }
            }
        }
        
    }
    cout << cont << endl;
    return 0;
}