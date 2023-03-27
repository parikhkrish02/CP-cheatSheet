#include <bits/stdc++.h>
#define ll long long
#define ld long double
const int32_t mod = 1e9 + 7;

using namespace std;

// space opt => o(n),o(1)
int fib(int n)
{
    int prev = 1, prev2 = 0, curr;

    for (int i = 2; i <= n; i++)
    {
        curr = prev + prev2;
        prev2 = prev;
        prev = curr;
    }

    return prev;
}

// recursion to dp
// memoization -> top down
int calcFib(int n, vector<int> &dp)
{
    if (dp[n] != -1 || n <= 1)
    {
        return dp[n];
    }

    return dp[n] = calcFib(n - 1, dp) + calcFib(n - 2, dp);
}

// tabulation -> bottom up
int tabulation(int n, vector<int> &dp)
{
    dp[0] = 0, dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

int recursive_fib(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return recursive_fib(n - 1) + recursive_fib(n - 2);
}

void solve()
{
    cout << recursive_fib(5 - 1) << endl;

    cout << "DP memoization:" << endl;

    int n = 5;
    vector<int> dp(n + 1, -1);
    dp[0] = 0;
    dp[1] = 1;
    cout << calcFib(n - 1, dp) << "\n";

    for (int i = 0; i < n; i++)
    {
        cout << dp[i] << " ";
    }
    cout << "\n";

    vector<int> dp2(n + 1, -1);
    cout << "DP tabulation:" << endl;
    cout << tabulation(n - 1, dp2) << "\n";

    cout << fib(n - 1) << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    // cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}