#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int amount;
        cin >> amount;
        amount = (100 - amount) - (100 - amount) % 10;
        cout << amount << endl;
    }

    return 0;
}