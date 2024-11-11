#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool flag = true;
    int arr[26] = {0};
    for (char c : s)
    {
        int i = c - 'a';
        arr[i]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == 0)
        {
            char c = i + 'a';
            cout << c;
            flag = false;
            break;
        }
    }

    if (flag)
        cout << "None";

    return 0;
}