#include<bits/stdc++.h>

#define ll long long
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,k,x,a,b,c;
    cin >> n >> k;
    cin >> x >> a >> b >> c;
    vector<ll> arr;
    vector<ll>somas;
    arr.push_back(x);
    ll soma = x;
    somas.push_back(soma);


    for (ll i = 1; i < n; i++)
    {
        arr.push_back(((arr[i-1]*a)+b)%c);
        soma +=((arr[i-1]*a)+b)%c;
        somas.push_back(soma);
    }
    ll sums = 0;
    for (ll i = 0; i < n -(k-1); i++)
    {
        if (i==0)
        {
            sums^= somas[i+k-1];
        }
        else
        {
            sums^= somas[i+k-1] - somas[i-1];
        }
    }
    cout << sums << endl;
    



    return 0;
}