#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        deque<char> s1;
        cin >> s;

        for (char c : s)
        {
            if (c == 'b')
            {

                auto it = find_if(s1.rbegin(), s1.rend(), [](char ch)
                                  { return islower(ch); });
                if (it != s1.rend())
                    s1.erase(next(it).base());
            }
            else if (c == 'B')
            {

                auto it = find_if(s1.rbegin(), s1.rend(), [](char ch)
                                  { return isupper(ch); });
                if (it != s1.rend())
                    s1.erase(next(it).base());
            }
            else
            {
                s1.push_back(c);
            }
        }

        if (!s1.empty())
        {
            for (char c : s1)
            {
                cout << c;
            }
        }
        cout << endl;
    }

    return 0;
}
