#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<string, string>> arr;

    while (n--)
    {
        string oldOne, newOne;
        cin >> oldOne >> newOne;
        bool flag = false;
        if (!arr.empty())
        {
            for (auto &p : arr)
            {
                if (oldOne == p.second)
                {
                    p.second = newOne;
                    flag = true;
                    break;
                }
            }
            if (!flag)
                arr.push_back({oldOne, newOne});
        }

        else
        {
            arr.push_back({oldOne, newOne});
        }
    }

    cout << arr.size() << endl;
    for (auto [oldO, newO] : arr)
    {
        cout << oldO << " " << newO << endl;
    }

    return 0;
}