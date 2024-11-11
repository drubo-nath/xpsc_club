#include <bits/stdc++.h>
using namespace std;

int calculate_time(const string &s)
{
    int time = 2;
    for (int i = 1; i < s.size(); ++i)
    {
        if (s[i] == s[i - 1])
        {
            time += 1;
        }
        else
        {
            time += 2;
        }
    }
    return time;
}

string maximize_time_password(const string &s)
{
    int max_time = 0;
    string result = s;

    for (int i = 0; i <= s.size(); ++i)
    {
        for (char c = 'a'; c <= 'z'; ++c)
        {
            string new_str = s.substr(0, i) + c + s.substr(i);
            int new_time = calculate_time(new_str);
            if (new_time > max_time)
            {
                max_time = new_time;
                result = new_str;
            }
        }
    }

    return result;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        cout << maximize_time_password(s) << endl;
    }

    return 0;
}
