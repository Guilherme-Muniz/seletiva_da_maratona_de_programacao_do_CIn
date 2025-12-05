#include<bits/stdc++.h>

using namespace std;

#define endl '\n'

using namespace std;

bool sequencialSearch(string nome1,string nome2)
{
    bool sim = false;
    for (int i = 0; i < nome1.size()-(nome2.size()-1); i++)
    {
        if (nome1[i] == nome2[0])
        {
            for (int j = 0; j < nome2.size(); j++)
            {
                if (nome1[i+j] == nome2[j])
                {
                    sim = true;
                }
                else
                {
                    sim = false;
                    break;
                }
            }
            
        }
    }
    return sim;
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string palavra;
    pair<int,string> par;
    cin >> n;
    
    vector<pair<int,string>> coisas;

    for (int i = 0; i < n; i++)
    {
        cin >> palavra;
        par ={palavra.size(),palavra};
        coisas.push_back(par);
    }
    sort(coisas.begin(),coisas.end());
    par = coisas[0];
    string palavraMenor = par.second;
    bool existe = true;
    for (int i = 0; i < n; i++)
    {
        palavra = coisas[i].second;
        if (sequencialSearch(palavra,palavraMenor))
        {
            existe = true;
        }
        else{
            existe = false;
            break;
        }
        
    }
    if (existe)
    {
        cout << palavraMenor << endl;
    }
    else
    {
        cout << "Not found\n";
    }
    

    




    return 0;
}