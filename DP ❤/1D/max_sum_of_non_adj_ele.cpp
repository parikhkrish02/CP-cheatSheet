int helper(int n, vector<int> &arr)
{
    int prev = arr[0];
    int prev2 = 0;

    for (int i = 1; i < n; i++)
    {
        int pick = arr[i];
        if (i > 1)
            pick += prev2;

        int cur_i = max(pick, prev);
        prev2 = prev;
        prev = cur_i;
    }
    return prev;
}