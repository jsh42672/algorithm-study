#include <iostream>
using namespace std;

int main()
{
    int n;

    while (cin >> n && n != -1)
    {
        int sum = 0;
        int lastDivisor = 1;

        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                sum += i;
                lastDivisor = i;
            }
        }

        if (sum == n)
        {
            cout << n << " = 1";
            for (int i = 2; i <= lastDivisor; i++)
            {
                if (n % i == 0)
                    cout << " + " << i;
            }
            cout << "\n";
        }
        else
        {
            cout << n << " is NOT perfect.\n";
        }
    }

    return 0;
}