#include <iostream>
#include <climits>
using namespace std;

// 소수 판별 함수: t가 소수면 true 반환
bool isPrime(int t)
{
    if (t < 2)
        return false;

    for (int i = 2; i * i <= t; i++)
    {
        if (t % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int m, n;
    int sum = 0, minVal = INT_MAX;

    cin >> m >> n;

    for (int i = m; i <= n; i++)
    {
        if (isPrime(i))
        {
            sum += i;
            if (i < minVal)
                minVal = i;
        }
    }

    if (sum == 0)
    {
        cout << -1 << "\n";
    }
    else
    {
        cout << sum << "\n"
             << minVal << "\n";
    }

    return 0;
}