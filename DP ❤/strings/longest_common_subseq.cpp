// Time Complexity: O(N*M)
#include <bits/stdc++.h>
using namespace std;

int lcs(string s1, string s2)
{
    int n = s1.size();
    int m = s2.size();

    vector<int> prev(m + 1, 0), cur(m + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s1[i - 1] == s2[j - 1])
                cur[j] = 1 + prev[j - 1];
            else
                cur[j] = 0 + max(prev[j], cur[j - 1]);
        }
        prev = cur;
    }

    return prev[m];
}

int main()
{

    string s1 = "acd";
    string s2 = "ced";

    cout << "The Length of Longest Common Subsequence is " << lcs(s1, s2);
}