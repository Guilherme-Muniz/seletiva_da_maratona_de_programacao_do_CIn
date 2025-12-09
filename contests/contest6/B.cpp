#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
using ll = long long;
using ld = long double;
using vi = vector<int>;
using vl = vector<ll>;
using pii = pair<int,int>;
using str = string;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;

    cin >> t;

    while (t--)
    {
        int a,b;
        cin >> a >> b;


        
        
        int diff =  abs(a-b);
        int tot = diff/10;
        if (diff %10 != 0)
        {
            tot++;
        }
        cout << tot << endl;
        
        
        
    }
    

    return 0;
}