#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int c;
        cin >> c;

        int q = c / 25; // 쿼터 (25센트)
        c %= 25;
        int d = c / 10; // 다임 (10센트)
        c %= 10;
        int ni = c / 5; // 니켈 (5센트)
        c %= 5;
        int p = c; // 페니 (1센트)

        cout << q << " " << d << " " << ni << " " << p << "\n";
    }

    return 0;
}