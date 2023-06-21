#include <bits/stdc++.h>
using namespace std;
struct ThietBi
{
    int giaTri, soLuong;
};
int main()
{
    ifstream in("thietbi.inp");
    if (!in)
    {
        cout << "Mo file inp khong thanh cong!";
        return 1;
    }
    // Lấy số lần lặp
    int n;
    in >> n;

    ThietBi tb[n];

    for (int i = 0; i < n; i++)
    {
        in >> tb[i].giaTri;
    }

    for (int i = 0; i < n; i++)
    {
        in >> tb[i].soLuong;
    }
    in.close();
    // for (int i = 0; i < n; i++)
    // {
    //     cout << tb[i].giaTri << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << tb[i].soLuong << " ";
    // }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (tb[i].giaTri >= 100)
        {
            count++;
        }
    }
    ofstream out("thietbi.out");
    if (!out)
    {
        cout << "Mo file out khong thanh cong!";
        return 1;
    }
    // Ghi ra file
    out << count << endl;

    // Tìm min
    int min = tb[0].giaTri; // 0
    for (int i = 0; i < n; i++)
    {
        if (min > tb[i].giaTri)
        {
            min = tb[i].giaTri;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if(min == tb[i].giaTri){
            out << tb[i].soLuong << " ";
        }
    }
}
