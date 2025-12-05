#include<iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    unsigned int n,cont =0;
    cin >> n;
    long long soma=0;
    long long elemento;
    
    for (size_t i = 0; i < n; i++)
    {
        cin >> elemento;
        soma +=elemento;
    }
    while (soma % n !=0)
    {
        cont++;
        n--;
    }
    cout << cont << "\n";
}