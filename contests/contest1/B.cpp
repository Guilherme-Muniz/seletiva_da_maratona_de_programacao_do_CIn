#include<iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    long long a,b;
    for (int i = 0; i < t; i++)
    {
        int cont = 0;
        cin >> a >> b;
        while (a!=b)
        {
            cont++;
            if (b > a)
            {
                if ((a %2 ==0 && b %2 ==1)|| (a%2==1 && b%2==0))
                {
                    a += (b-a);
                }
                else
                {
                    a++;
                }
                
                
            }
            else if (b<a)
            {
                if ((a %2 ==0 && b %2 ==0)|| (a%2==1 && b%2==1))
                {
                    a -= (a-b);
                }
                else
                {
                    a -= (a-b+1);
                }
                
            }
            
            
        }
        cout << cont << "\n";
        
    }
    
}