// #include <bits/stdc++.h>
// using namespace std;
// struct DauSach
// {
//     string tenSach;
//     int namSB, soLuong;
//     double giaBan;
// };
// int main()
// {
//     ifstream in("BOOK.INP");
//     if (!in)
//     {
//         cout << "Mo file inp khong thanh cong!";
//         return 1;
//     }

//     ofstream out("BOOK.OUT");
//     if (!out)
//     {
//         cout << "Mo file out khong thanh cong!";
//         return 1;
//     }
//     int n;
//     in >> n;
//     DauSach ds[n];
//     for (int i = 0; i < n; i++)
//     {
//         in.ignore();
//         getline(in, ds[i].tenSach);
//         in >> ds[i].namSB >> ds[i].soLuong >> ds[i].giaBan;
//     }
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         double doanhThu = ds[i].soLuong * ds[i].giaBan;
//         if (doanhThu >= 1000)
//         {
//             count++;
//         }
//     }
//     out << count << endl;
//     for (int i = 0; i < n; i++)
//     {
//         double doanhThu = ds[i].soLuong * ds[i].giaBan;
//         if (doanhThu >= 1000)
//         {
//             out << ds[i].tenSach << "\n";
//         }
//     }
//     in.close();
//     out.close();
// }
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
struct Sach
{
    string ten;
    int nam;
    int soluong;
    float giaban;
};
int main()
{
    ifstream in;
    in.open("BOOK.INP");
    if (in.fail())
    {
        cout << "Mo file khong thanh cong";
    }
    int n;
    in >> n;
    Sach S[n];
    for (int i = 0; i < n; i++)
    {
        in.ignore();
        getline(in, S[i].ten);
        in >> S[i].nam;
        in >> S[i].soluong;
        in >> S[i].giaban;
    }
    // in ra
    // for (int i = 0; i < n; i++)
    // {
    //     cout << S[i].ten << endl;
    //     cout << S[i].nam << endl;
    //     cout << S[i].soluong << endl;
    //     cout << S[i].giaban << endl;
    // }

    ofstream out;
    out.open("BOOK.OUT");
    if (out.fail())
    {
        cout << "Mo file khong thanh cong";
    }
    // Dem so sach
    int count = 0;
    double doanhthu;
    for (int i = 0; i < n; i++)
    {
        doanhthu = S[i].soluong * S[i].giaban;
        if (doanhthu >= 1000)
        {
            count++;
        }
    }
    out << count;

    // in ra so sach lon hon 1000
    for (int i = 0; i < n; i++)
    {
        if (doanhthu >= 1000)
        {
            cout << S[i].ten << endl;
        }
    }

    out.close();
}