#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int bis = 0;
    while (true)
    {
        if (c - a < 0)
            break;
        else if (c - a >= 0)
        {
            bis += b;
            c -= a;
        }
    }

    cout << bis;
    return 0;
}