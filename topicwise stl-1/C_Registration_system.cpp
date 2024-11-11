#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    int t;
    cin >> t;
    map<string, int> namelist;
    while (t--)
    {
        string name;
        cin >> name;
        if (namelist.find(name) == namelist.end())
        {
            namelist[name] = 1;
            cout << "OK" << endl;
        }
        else
        {
            int cnt = namelist[name];

            cout << name << cnt << endl;
            namelist[name + to_string(cnt)] = 1;
            namelist[name]++;
        }
    }

    return 0;
}