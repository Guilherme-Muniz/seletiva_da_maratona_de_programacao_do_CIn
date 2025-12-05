#include<bits/stdc++.h>

using namespace std;

#define endl "\n"
using ll = long long;
using pii = pair<int,int>;
using vi = vector<int>;
using vl = vector<ll>;
using str = string;

ll transformar_em_numero(str s)
{
    vector <char> posicoes = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    ll soma;
    for (int i = 0; i < 26; i++)
    {
        if (s[s.size()-1] == posicoes[i])
        {
            soma = i+1;
            break;
        }
    }
    str numero = "";
    for (ll i = 0; i < s.size()-1; i++)
    {
        numero.push_back(s[i]);
    }
    ll num = stoi(numero);
    soma += num*26;
    return soma;
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    str s;
    cin >> s;

    ll segundaordem = 3;
    ll sequencia = 5;
    ll alvo = transformar_em_numero(s);
    ll pos =1;

    while (sequencia < alvo)
    {
        sequencia +=segundaordem;
        segundaordem += 2;
        pos++;
    }
    if (sequencia == alvo)
    {
        cout << pos;
    }
    else
    {
        cout << -1;
    }


    return 0;
}   