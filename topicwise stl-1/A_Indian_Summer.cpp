#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<pair<string, string>> arr;
    string name, color;
    cin >> name >> color;

    arr.push_back({name, color});
    t -= 1;

    while (t--)
    {
        string name, color;
        cin >> name >> color;
        bool present = false;
        for (auto [nam, col] : arr)
        {
            if (nam == name && col == color)
            {
                present = true;
                break;
            }
        }
        if (!present)
            arr.push_back({name, color});
    }

    cout << arr.size();

    return 0;
}