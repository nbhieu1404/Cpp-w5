#include <bits/stdc++.h>
using namespace std;
struct MatHang
{
    string maMH, tenMH;
    int soLuong;
    float giaBan;
};
int main()
{
    ifstream in("mathang.inp");
    if (!in)
    {
        cout << "Mo file inp khong thanh cong!";
        return 1;
    }
    int n;
    in >> n;
    MatHang mh[n];
    for (int i = 0; i < n; i++)
    {
        in.ignore();
        getline(in, mh[i].maMH);
        getline(in, mh[i].tenMH);
        in >> mh[i].soLuong >> mh[i].giaBan;
    }
    in.close();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (mh[i].soLuong < mh[j].soLuong)
            {
                MatHang temp = mh[i];
                mh[i] = mh[j];
                mh[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (mh[i].soLuong == mh[j].soLuong)
            {
                if (mh[i].giaBan < mh[j].giaBan)
                {
                    MatHang temp = mh[i];
                    mh[i] = mh[j];
                    mh[j] = temp;
                }
            }
        }
    }

    ofstream out("mathang.out");
    if (!out)
    {
        cout << "Mo file out khong thanh cong!";
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        out << mh[i].tenMH << " " << mh[i].soLuong << " " << mh[i].giaBan << endl;
    }

    out.close();
}
