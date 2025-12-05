#include<iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t,n;
    cin >> t;
    int elemento;
    int menor;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int cont = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> elemento;
            if (j==0)
            {
                menor = elemento;
                cont++;
            }
            else
            {
                if (elemento< menor)
                {
                    menor = elemento;
                    cont = 1;
                }
                else if (elemento == menor)
                {
                    cont++;
                }
                
            }
            
            
        }
        cout << n-cont<<"\n";
        
    }
    
}