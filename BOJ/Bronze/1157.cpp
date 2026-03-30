#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string word;
    cin >> word;

    int freq[26] = {0}; // A~Z 빈도수

    for (char c : word)
    {
        if (c >= 'a')
            c -= 32; // 소문자 → 대문자
        freq[c - 'A']++;
    }

    int maxFreq = *max_element(freq, freq + 26);
    int maxIdx = -1;
    int count = 0;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == maxFreq)
        {
            maxIdx = i;
            count++;
        }
    }

    if (count > 1)
        cout << "?";
    else
        cout << (char)('A' + maxIdx);

    return 0;
}