#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<string, string>> v(n);
    for (int i = 0; i < n; i++)
    {
        string name, ip;
        cin >> name >> ip;
        v[i] = {name, ip};
    }

    while (m--)
    {
        string cmd, ip1;
        cin >> cmd >> ip1;

        ip1.pop_back();
        for (auto it = v.begin(); it != v.end(); it++)
        {
            if (it->second == ip1)
            {
                cout << cmd << " " << it->second << "; #" + it->first << endl;
                break;
            }
        }
    }

    return 0;
}