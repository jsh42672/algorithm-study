#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, M;
        cin >> N >> M;

        queue<pair<int, int>> q; // {인덱스, 중요도}
        priority_queue<int> pq;  // 현재 최대 중요도 추적

        for (int i = 0; i < N; ++i)
        {
            int priority;
            cin >> priority;
            q.push({i, priority});
            pq.push(priority);
        }

        int print_order = 0;
        while (!q.empty())
        {
            int idx = q.front().first;
            int priority = q.front().second;
            q.pop();

            if (priority == pq.top())
            {
                // 현재 가장 높은 중요도 → 출력
                pq.pop();
                print_order++;
                if (idx == M)
                {
                    cout << print_order << "\n";
                    break;
                }
            }
            else
            {
                // 높은 중요도가 뒤에 있음 → 뒤로 보내기
                q.push({idx, priority});
            }
        }
    }

    return 0;
}