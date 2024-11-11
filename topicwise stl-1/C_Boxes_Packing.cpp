#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> boxes(n);

    for (int i = 0; i < n; i++)
    {
        cin >> boxes[i];
    }

    sort(boxes.begin(), boxes.end());

    map<int, int> freq_map;

    for (int i = 0; i < n; i++)
    {
        freq_map[boxes[i]]++;
    }

    int max_frequency = 0;
    for (auto entry : freq_map)
    {
        max_frequency = max(max_frequency, entry.second);
    }

    cout << max_frequency << endl;

    return 0;
}
