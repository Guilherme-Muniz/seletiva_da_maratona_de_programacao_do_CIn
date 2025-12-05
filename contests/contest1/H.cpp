#include<iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>> t;
    for (int j = 0; j < t; j++)
    {
        unsigned int n;
        cin >> n;
        long long arr[n];
        bool sequencia = false;
        unsigned int cont= 0;
        long long soma =0;
        for (unsigned int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] < 0)
            {
                sequencia = true;
                soma += (-1*arr[i]);
            }
            else if (arr[i]>0)
            {
                if (sequencia==true)
                {
                    cont++;
                    sequencia = false;
                }
                soma += arr[i];
            }
            
            
        }
        if (sequencia == true)
        {
            cont++;
            sequencia = false;
        }
        cout << soma << " " << cont << "\n";
        
    }
    
}