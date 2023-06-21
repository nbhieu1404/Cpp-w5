#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct SINHVIEN
{
    string ten;
    string quequan;
    float toan, van, anh;
};
int main()
{

    ifstream in("SINHVIEN.INP");
    if (!in)
    {
        cout << "Mo file khong thanh cong";
        return 1;
    }

    int n;
    in >> n;
    SINHVIEN sv[n];
    for (int i = 0; i < n; i++)
    {
        in.ignore();
        getline(in, sv[i].ten);
        getline(in, sv[i].quequan);
        in >> sv[i].toan >> sv[i].van >> sv[i].anh;
    }
    in.close();
    ofstream out;
    out.open("SINHVIEN.OUT");
    if (out.fail())
    {
        cout << "Ghi file khong thanh cong";
        return 1;
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        double dtb = (sv[i].toan + sv[i].van + sv[i].anh) / 3;
        if (dtb >= 8.5)
        {
            count++;
        }
    }
    out << count << endl;
    for (int i = 0; i < n; i++)
    {
        double dtb = (sv[i].toan + sv[i].van + sv[i].anh) / 3;
        if (dtb >= 8.5)
        {
            out << sv[i].ten << " " << sv[i].quequan << " " << dtb << endl;
        }
    }
    out.close();
}