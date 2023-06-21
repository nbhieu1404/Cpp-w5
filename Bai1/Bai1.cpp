#include <bits/stdc++.h>
using namespace std;
struct CayNam
{
    int dinhDuong, docTo;
};
int main()
{
    int n;
    cout << " Nhap so luong nam: ";
    cin >> n;
    while (n <= 0)
    {
        cout << " Nhap so luong nam: ";
        cin >> n;
    }
    CayNam cn[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Dinh duong nam " << i << ": ";
        cin >> cn[i].dinhDuong;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Doc to nam " << i << ": ";
        cin >> cn[i].docTo;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << cn[i].dinhDuong << "\t";
    // }
    // cout << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << cn[i].docTo << "\t";
    // }
    cout << endl;
    for(int i = 0;i<n;i++){
        if(cn[i].dinhDuong / cn[i].docTo >= 2){
            cout << "(" << cn[i].dinhDuong << ", " << cn[i].docTo << ") ";
        }
    }
    cout << endl;

}