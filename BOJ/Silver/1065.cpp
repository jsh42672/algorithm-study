#include <iostream>
using namespace std;

bool correct(int *ptr1, int *ptr2, int *ptr3)
{
    return (*ptr1 + *ptr3 == 2 * (*ptr2));
}

int main()
{
    int n, cnt = 0;
    int a, b, c;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i <= 99)
            cnt++;
        else if (i >= 100 && i <= 999)
        {
            a = i / 100;
            b = (i - a * 100) / 10;
            c = i - (a * 100 + b * 10);

            if (correct(&a, &b, &c))
                cnt++;
        }
    }
    cout << cnt;
    return 0;
}