#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    double arr[10001] = {0};
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    double maxVal = *max_element(arr, arr + n); // 최댓값
    double sum = 0.0;

    for (int i = 0; i < n; i++)
        sum += arr[i] / maxVal * 100;

    cout << sum / n;

    return 0;
}