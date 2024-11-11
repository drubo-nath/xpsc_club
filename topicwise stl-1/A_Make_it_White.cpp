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
        char arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        int white = 0;
        bool black = false;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 'B')
            {
                count += white + 1;
                white = 0;
                black = true;
            }

                if (arr[i] == 'W' && i != 0 && black)
            {
                white++;
            }
        }

        cout << count << endl;
    }

    return 0;
}