#include <iostream>
using namespace std;

int main()
{
    int h, m, a, b;
    cin >> a >> b;

    m = b - 45;

    if (m < 0)
    {
        // 분이 음수면 시를 하나 줄이고 분 보정
        h = --a;
        m = 60 + (b - 45);
    }
    else
    {
        // 분이 0 이상이면 시 유지
        h = a;
    }

    // 자정을 넘어가면 23시로
    if (h < 0)
    {
        h = 23;
    }

    cout << h << ' ' << m;
    return 0;
}