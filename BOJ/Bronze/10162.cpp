#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a = n / 300; // 300초 버튼
    n %= 300;
    int b = n / 60; // 60초 버튼
    n %= 60;
    int c = n / 10; // 10초 버튼
    n %= 10;

    if (n != 0)
    {
        cout << -1 << "\n";
        return 0;
    }

    cout << a << " " << b << " " << c << "\n";
    return 0;
}