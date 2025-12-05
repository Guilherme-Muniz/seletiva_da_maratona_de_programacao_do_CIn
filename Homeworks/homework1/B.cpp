#include<bits/stdc++.h>

#define ll long long
#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    stack<int>A;
    stack<int>B;
    stack<int>C;
    vector<string>processos;
    int elemento;
    for (int i = 0; i < n; i++)
    {
        cin >> elemento;
        A.push(elemento);
    }
    int inicio = 1;
    bool possivel = true;
    int cont = 0;
    while (C.size()< n)
    {
        cont++;
        if (B.size()>0 && B.top()==inicio)
        {
            processos.push_back("B C");
            C.push(B.top());
            B.pop();
            inicio++;
        }
        else if (A.top() == inicio)
        {
            processos.push_back("A C");
            C.push(A.top());
            A.pop();
            inicio++;
        }
        else if (B.size()==0 || B.top() > A.top())
        {
            processos.push_back("A B");
            B.push(A.top());
            A.pop();
        }
        else
        {
            possivel = false;
            break;
        }
    }
    if (possivel)
    {
        cout << cont << endl;
        for (int i = 0; i < processos.size(); i++)
        {
            cout << processos[i] << endl;
        }
        
    }
    else
    {
        cout << "-1\n";
    }
    
    


    return 0;
}