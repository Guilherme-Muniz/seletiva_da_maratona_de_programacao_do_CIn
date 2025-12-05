#include<bits/stdc++.h>

#define ll long long
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string t,u;
    cin >> t;
    cin >> u;
    bool pode = false;

    for (int i = 0; i < t.size(); i++)
    {
        if (pode)
        {
            break;
        }
        if (t[i] == u[0] || t[i] == '?')
        {
            for (int j = 0; j < u.size(); j++)
            {
                if (t[i+j]==u[j] || t[i+j] == '?')
                {
                    pode = true;
                }
                else
                {
                    pode = false;
                    break;
                }
                
            }
            
        }
    }
    if (pode)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}