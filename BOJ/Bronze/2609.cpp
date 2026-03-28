#include <iostream>
using namespace std;

// 유클리드 호제법으로 최대공약수 구하기
int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int a, b;
    cin >> a >> b;

    int g = gcd(a, b); // 최대공약수
    int l = a / g * b; // 최소공배수 (오버플로우 방지)

    cout << g << "\n"
         << l << "\n";

    return 0;
}