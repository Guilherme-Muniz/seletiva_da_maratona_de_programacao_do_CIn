#include<bits/stdc++.h>

using namespace std;

#define endl "\n"

using ll = long long;
using vl = vector<ll>;
using vi = vector<int>;
using ui = unsigned int;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int k;
    vi arr;
    arr.push_back(1);
    if (n==1)
    {
        k=1;
    }
    else
    {
        k = n/2 + 1;
    }
    
    cout << k << endl;

    if (n %2==0)
    {
        int cont =1;
        cout << 1 << " " << 2;
        arr.push_back(2);
        while (arr[cont] < n)
        {
            arr.push_back(arr[cont]+2);
            cont++;
            cout << " " << arr[cont];
        }
    }
    else
    {
        int cont = 0;
        cout << 1;
        while (arr[cont]< n)
        {
            arr.push_back(arr[cont]+2);
            cont++;
            cout << " " << arr[cont];
        }
        
    }
    
    
    return 0;
}