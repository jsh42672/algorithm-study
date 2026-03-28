#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int x = b / 100;       // 백의 자리
    int y = (b / 10) % 10; // 십의 자리
    int z = b % 10;        // 일의 자리

    cout << a * z << "\n";
    cout << a * y << "\n";
    cout << a * x << "\n";
    cout << a * b << "\n";

    return 0;
}