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

    ll n,m;
    cin >> n >> m;
    ll elemento;
    pair<ll,char> par;
    vector<pair<ll,char>> cards;

    for (ll i = 0; i < m; i++)
    {
        cin >> elemento;
        par = {elemento,'l'};
        cards.push_back(par);
        cin >> elemento;
        par = {elemento+1,'r'};
        cards.push_back(par);
    }
    sort(cards.begin(),cards.end());
    vl prefixsum;
    ll tot=0;
    for (ll i = 0; i < m*2; i++)
    {
        if(cards[i].second == 'l')
        {
            tot++;
            prefixsum.push_back(tot);
        }
        else
        {
            tot--;
            prefixsum.push_back(tot);
        }
    }
    ll cardsthatopen =0;
    bool possivel = true;
    for (ll i = 1; i <= n; i++)
    {
        if (i > cards[cards.size()-1].first)
        {
            possivel = false;
        }
        else
        {
            auto it_upper = upper_bound(cards.begin(),cards.end(),make_pair(i,'z'));
            ll idx = it_upper - cards.begin();
            if (idx ==0)
            {
                possivel = false;
            }
            else if (prefixsum[idx-1] == m)
            {
                possivel = true;
            }
            else
            {
                possivel = false;
            }
        }
        if (possivel)
        {
            cardsthatopen++;
        }
        else
        {
            possivel = true;
        }
    }
    cout << cardsthatopen;


    return 0;
}