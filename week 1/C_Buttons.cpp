#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int maxCoins = max(a, b);
    if (a > b)
        a--;
    else
        b--;

    maxCoins += max(a, b);

    cout << maxCoins;
    return 0;
}