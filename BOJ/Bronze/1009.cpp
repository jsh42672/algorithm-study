#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int a, b;
        cin >> a >> b;

        a %= 10; // 일의 자리만 사용

        int result = 1;
        for (int j = 0; j < b; j++)
        {
            result = (result * a) % 10; // 일의 자리만 유지
        }

        if (result == 0)
            result = 10; // 0이면 10번 컴퓨터

        cout << result << "\n";
    }

    return 0;
}