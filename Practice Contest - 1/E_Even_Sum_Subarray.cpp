#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n], count = 0;
        long long int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            count++;
        }

        while (sum % 2 != 0 && n > 0)
        {
            for (int i = n - 1; i > 0; i--)
            {
                if ((sum - arr[i]) % 2 == 0)
                {
                    sum - arr[i];
                    count--;
                    break;
                }
                else
                {
                    sum -= arr[n - 1];
                    count--;
                    n--;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}