#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream in("TREE.INP");
    if (!in)
    {
        cout << "Mo file inp khong thanh cong!";
        return 1;
    }

    ofstream out("TREE.OUT");
    if (!out)
    {
        cout << "Mo file out khong thanh cong!";
        return 1;
    }

    int n;
    in >> n;

    float chieuCao[n];
    for (int i = 1; i <= n; i++)
    {
        in >> chieuCao[i];
    }

    int chiSo[10];
    for (int i = 5; i >= 1; i--)
    {
        chiSo[i] = i;
    }

    float temp;
    int temp2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (chieuCao[i] > chieuCao[j])
            {
                temp = chieuCao[i];
                chieuCao[i] = chieuCao[j];
                chieuCao[j] = temp;

                temp2 = chiSo[i];
                chiSo[i] = chiSo[j];
                chiSo[j] = temp2;
            }
        }
    }
    for (int i = 1; i <= 5; i++)
    {
        out << chiSo[i] << " ";
    }
    out << endl;
    for (int i = 1; i <= 5; i++)
    {
        out << chieuCao[i] << " ";
    }

    in.close();
    out.close();
}