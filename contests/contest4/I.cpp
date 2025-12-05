#include<bits/stdc++.h>

using namespace std;

#define endl "\n"
using ll = long long;
using pii = pair<int,int>;
using vi = vector<int>;
using vl = vector<ll>;
using str = string;

int dist[8][8];
int dx[] = {-1,-2,-2,-1,1,2,2,1};
int dy[] = {-2,-1,1,2,-2,-1,1,2};
int bfs(int aLinha,int aColuna,int bLinha,int bColuna)
{
    dist[aLinha][aColuna]= 0;
    queue <pii>q;
    q.push({aLinha,aColuna});

    while (!q.empty())
    {
        auto [x,y] = q.front();
        q.pop();

        for (int i = 0; i < 8; i++)
        {
            int linha = x + dx[i];
            int coluna = y + dy[i];
            if ((0<=linha && linha<8 && 0<= coluna && coluna < 8) && dist[linha][coluna] ==-1)
            {
                dist[linha][coluna] = dist[x][y] + 1;
                if (linha == bLinha && coluna == bColuna)
                {
                    return dist[linha][coluna];
                }
                q.push({linha,coluna});
            } 
        }
        


    }
    
}
int letra_para_numero(str l)
{
    if (l[0]=='a')
    {
        return 0;
    }
    else if (l[0] =='b')
    {
        return 1;
    }
    else if (l[0] =='c')
    {
        return 2;
    }
    else if (l[0] =='d')
    {
        return 3;
    }
    else if (l[0] =='e')
    {
        return 4;
    }
    else if (l[0] =='f')
    {
        return 5;
    }
    else if (l[0] =='g')
    {
        return 6;
    }
    else
    {
        return 7;
    }
}
int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    str a,b;
    while (true)
    {
        a = "para";
        cin >> a >> b;
        if (a == "para")
        {
            break;
        }
        if (a == b)
        {
            cout << "To get from " << a << " to " << b << " takes " << 0 << " knight moves." << endl;
        }
        else
        {
            memset(dist,-1,sizeof(dist));
            str colunaA = "";
            colunaA.push_back(a[1]);
            int colunanumeroA = stoi(colunaA)-1;
            str colunaB = "";
            colunaB.push_back(b[1]);
            int colunanumeroB = stoi(colunaB)-1;

            int resposta= bfs(letra_para_numero(a),colunanumeroA,letra_para_numero(b),colunanumeroB);
            cout<<"To get from " << a << " to " << b << " takes " << resposta << " knight moves." << endl;
        }
        
        
    }

    

    return 0;
}