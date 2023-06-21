#include <bits/stdc++.h>
using namespace std;
struct NhanVien
{
    string hoTen;
    int soLuongBan;
};
void nhapDL(int &n, NhanVien nv[])
{
    cout << "Nhap thong tin nhan vien:";
    for (int i = 0; i < n; i++)
    {
        cout << "\nThong tin nhan vien thu " << (i + 1) << ": \n";
        cout << "Ten nhan vien: ";
        cin.ignore();
        getline(cin, nv[i].hoTen);
        cout << "So luong may tinh ban duoc: ";
        cin >> nv[i].soLuongBan;
    }
}
void xuatDL(int n, NhanVien nv[])
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nThong tin nhan vien thu " << (i + 1) << ":";
        cout << "\nTen nhan vien: " << nv[i].hoTen;
        cout << "\nSo luong may tinh ban duoc: " << nv[i].soLuongBan << endl;
    }
}
double trungBinh(int n, NhanVien nv[])
{
    double avg = 0;
    for (int i = 0; i < n; i++)
    {
        avg += nv[i].soLuongBan;
    }

    return avg / 3;
}
int main()
{
    int n;
    do
    {
        cout << "So luong nhan vien: ";
        cin >> n;
    } while (n <= 0);

    cout << "---------------------------\n";
    NhanVien nv[n];

    nhapDL(n, nv);
    cout << "\n---------------------------\n";
    xuatDL(n, nv);

    cout << "---------------------------\n";
    cout << "Thong tin nhan vien thoa man:";
    for (int i = 0; i < n; i++)
    {
        if (nv[i].soLuongBan > trungBinh(n, nv))
        {
            cout << "\nTen nhan vien: " << nv[i].hoTen << endl;
            cout << "\nSo luong ban: " << nv[i].soLuongBan << endl;
        }
    }

    cout << "---------------------------\n";
    cout << "Thong tin nhan vien thoa man co ten Huyen:";
    for (int i = 0; i < n; i++)
    {
        if (nv[i].soLuongBan > trungBinh(n, nv) && nv[i].hoTen == "Huyen")
        {
            cout << "\nTen nhan vien: " << nv[i].hoTen << endl;
            cout << "\nSo luong ban: " << nv[i].soLuongBan << endl;
        }
    }
}