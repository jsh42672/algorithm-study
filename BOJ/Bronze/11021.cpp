#include <iostream>
using namespace std;

int main()
{
    int t, a, b, sum;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        sum = a + b;
        cout << "Case #" << i + 1 << ": " << sum << '\n';
    }
}