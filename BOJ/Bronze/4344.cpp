#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int k;
        cin >> k;

        int scores[1001] = {0};
        double sum = 0.0;

        for (int j = 0; j < k; j++)
        {
            cin >> scores[j];
            sum += scores[j];
        }

        double avg = sum / k;
        int count = 0;

        for (int j = 0; j < k; j++)
        {
            if (scores[j] > avg)
                count++;
        }

        cout << fixed << setprecision(3)
             << count * 100.0 / k << "%\n";
    }

    return 0;
}