#include <bits/stdc++.h>
using namespace std;
bool kiemTraSCP(int n)
{
    if (sqrt(n) * sqrt(n) == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    ifstream in("songuyen.inp");
    if (!in)
    {
        cout << "Mo file inp khong thanh cong!";
        return 1;
    }

    ofstream out("songuyen.out");
    if (!out)
    {
        cout << "Mo file out khong thanh cong!";
        return 1;
    }

    int soLuong[100];
    int index = 0;

    while (in >> soLuong[index])
    {
        index++;
    }
    in.close();
    // for (int i = 0; i < index; i++)
    // {
    //     cout << soLuong[i] << " ";
    // }
    out << index << endl;
    int min = soLuong[0];
    for (int i = 0; i < index; i++)
    {
        if (min > soLuong[i])
            min = soLuong[i];
    }

    int min2 = soLuong[0];
    for (int i = 0; i < index; i++)
    {
        if (soLuong[i] == min)
        {
            continue;
        }

        if (min2 > soLuong[i])
        {
            min2 = soLuong[i];
        }
    }
    out << min2 << endl;

    for (int i = 0; i < index; i++)
    {
        if (soLuong[i] % 2 == 0)
        {
            soLuong[i] *= 2;
        }
        else
        {
            soLuong[i] *= 3;
        }
    }

    for (int i = 0; i < index; i++)
    {
        if (kiemTraSCP(soLuong[i]))
        {
            out << soLuong[i] << " ";
        }
    }
    out.close();
}