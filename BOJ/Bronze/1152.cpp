#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    if (str.empty() || str == " ")
    {
        cout << 0;
        return 0;
    }

    int count = 1;
    for (int i = 0; i < (int)str.length(); i++)
    {
        if (str[i] == ' ')
            count++;
    }

    if (str.front() == ' ')
        count--;
    if (str.back() == ' ')
        count--;

    cout << count;

    return 0;
}