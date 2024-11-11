#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    deque<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 1, s = 0, d = 0;
    while (!arr.empty())
    {
        int left = arr.front(), right = arr.back();
        int maxi = max(left, right);
        if (i % 2 != 0)
        {
            s += maxi;
        }
        else
        {
            d += maxi;
        }

        if (maxi == left)
        {
            arr.pop_front();
        }
        else
        {
            arr.pop_back();
        }

        i++;
    }

    cout << s << " " << d << endl;
    return 0;
}