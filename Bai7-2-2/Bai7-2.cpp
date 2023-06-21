#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream in("NEWS.INP");
    if (!in)
    {
        cout << "Mo file INP khong thanh cong!";
        return 1;
    }

    ofstream out("NEWS.OUT");
    if (!out)
    {
        cout << "Mo file OUT khong thanh cong!";
        return 1;
    }

    char c;
    int cc = 0, cs = 0, ktdb = 0;
    while (in >> c)
    {

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            cc++;
        }
        else if (c >= '1' && c <= '9')
        {
            cs++;
        }
        else
        {
            ktdb++;
        }
    }
    out << cc << " " << cs << " " << ktdb;
}