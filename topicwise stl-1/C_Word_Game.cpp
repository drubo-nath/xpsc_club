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

        vector<string> v1(n), v2(n), v3(n);
        map<string, int> wordCount;

        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
            wordCount[v1[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v2[i];
            wordCount[v2[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v3[i];
            wordCount[v3[i]]++;
        }

        int p1 = 0, p2 = 0, p3 = 0;

        for (string word : v1)
        {
            if (wordCount[word] == 1)
            {
                p1 += 3;
            }
            else if (wordCount[word] == 2)
            {
                p1 += 1;
            }
        }

        for (string word : v2)
        {
            if (wordCount[word] == 1)
            {
                p2 += 3;
            }
            else if (wordCount[word] == 2)
            {
                p2 += 1;
            }
        }

        for (string word : v3)
        {
            if (wordCount[word] == 1)
            {
                p3 += 3;
            }
            else if (wordCount[word] == 2)
            {
                p3 += 1;
            }
        }

        cout << p1 << " " << p2 << " " << p3 << endl;
    }

    return 0;
}