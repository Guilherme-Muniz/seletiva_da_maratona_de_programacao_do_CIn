#include<bits/stdc++.h>

using namespace std;

#define endl "\n"

using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
using str = string;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    str newS = "";
    vector<str> possibilities;
    possibilities.push_back(s);
    if (s.size()>1)
    {
        for (int i = 0; i < s.size()-1; i++)
        {
            if (s[i] == 's' && s[i+1] == 's')
            {
                for (int j = 0; j < i; j++)
                {
                    newS.push_back(s[j]);
                }
                newS.push_back('B');
                for (int j = i+2; j < s.size(); j++)
                {
                    newS.push_back(s[j]);
                }
                possibilities.push_back(newS);
                newS = "";

            }
        }
    }
    for (int i = 0; i < possibilities.size(); i++)
    {
        cout << possibilities[i] << endl;
    }



    return 0;
}