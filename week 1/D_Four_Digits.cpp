#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string str = to_string(N);

    while (str.length() < 4)
    {
        str = '0' + str;
    }

    cout << str;
    return 0;
}
