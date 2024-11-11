#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    long long int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    if (sum % 2 == 0)
    {

        cout << sum;
    }
    else
    {

        int minOdd = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0)
            {
                minOdd = min(minOdd, arr[i]);
            }
        }

        if (minOdd != INT_MAX)
        {
            sum -= minOdd;
        }

        cout << sum;
    }

    return 0;
}
