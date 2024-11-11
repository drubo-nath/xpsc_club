#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int max_win = 0;
        for (int i = 0, j = n; i < x; i++, j--)
        {
            max_win += pow(2, j);
        }

        for (int i = 1; i <= n - x; i++)
        {
            max_win -= pow(2, i);
        }

        cout << max_win << endl;
    }

    return 0;
}