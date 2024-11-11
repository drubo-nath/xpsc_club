#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;

    set<pair<ll, string>> s;
    map<string, ll> mp;
    for (ll i = 1; i <= n; i++)
    {
        string name;
        cin >> name;
        if (mp[name] > 0)
        {
            s.erase({mp[name], name});
            s.insert({i, name});
            mp[name] = i;
        }
        else
        {
            s.insert({i, name});
            mp[name] = i;
        }
    }

    for (auto it = s.rbegin(); it != s.rend(); it++)
    {
        cout << it->second << endl;
    }

    return 0;
}