#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
using ll = long long;
using ld = long double;
using vi = vector<int>;
using vl = vector<ll>;
using pii = pair<int,int>;
using str = string;

str s,t;

int memo[3005][3005]; 

int DP(int i, int j)
{
    
    if (i < 0 || j < 0) return 0;
    
    
    if (memo[i][j] != -1) return memo[i][j];

    
    if (s[i] == t[j])
    {
        
        return memo[i][j] = 1 + DP(i-1,j-1);
    }
    else
    {
        return memo[i][j] = max( DP(i-1,j), DP(i,j-1) );
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    memset(memo,-1,sizeof(memo));
    cin >> s;
    cin >> t;

    int tamanho = DP(s.size()-1,t.size()-1);

    int i = s.size()-1;
    int j = t.size()-1;

    str res = "";

    while (i >=0 && j >=0)
    {
        if (s[i]==t[j])
        {
            res.push_back(s[i]);
            i--;
            j--;
        }
        else
        {
            if (i > 0 && memo[i][j] == memo[i-1][j])i--;
            else j--;
        }
    }
    reverse(res.begin(),res.end());

    cout << res << endl;



    return 0;
}