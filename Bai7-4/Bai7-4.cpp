#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream in("CHESS.INP");
    if (!in)
    {
        cout << "Mo file inp khong thanh cong!";
        return 1;
    }

    ofstream out("CHESS.OUT");
    if (!out)
    {
        cout << "Mo file out khong thanh cong!";
        return 1;
    }

    int n, m;
    in >> n >> m;
    int chess[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            in >> chess[i][j];
        }
    }

    int sumMax = 0;
    for (int i = 0; i < n; i++)
    {
        int max = 0;
        for (int j = 0; j < m; j++)
        {
            if(max < chess[i][j]){
                max = chess[i][j];
            }
        }
        sumMax+= max;
    }
    out << sumMax;
    in.close();
    out.close();
}