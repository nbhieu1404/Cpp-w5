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
    ifstream in("anh.dat");
    if (!in)
    {
        cout << "Mo file dat khong thanh cong!";
        return 1;
    }

    int n, m;
    in >> m;
    in >> n;
    int maTran[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            in >> maTran[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << maTran[i][j] << "\t";
        }
        cout << endl;
    }

    int min = maTran[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (min > maTran[i][j])
            {
                min = maTran[i][j];
            }
        }
    }

    int max = maTran[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (max < maTran[i][j])
            {
                max = maTran[i][j];
            }
        }
    }

    int count = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (maTran[i][j] < 70)
            {
                count++;
            }
        }
    }
    cout << "\nDiem toi nhat: " << min
         << "\nDiem sang nhat: " << max
         << "\nSo diem anh nho hon 70: " << count;
}