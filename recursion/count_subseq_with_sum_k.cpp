#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int helper(vector<int> &nums, int k, int sum, int i)
    {
        if (i >= nums.size())
        {
            if (sum == k)
            {
                return 1;
            }
            return 0;
        }

        int cnt = 0;

        sum += nums[i];
        cnt += helper(nums, k, sum, i + 1);

        sum -= nums[i];
        cnt += helper(nums, k, sum, i + 1);
        return cnt;
    }

    int subsets(vector<int> &nums, int k)
    {
        return helper(nums, k, 0, 0);
    }
};

int main()
{
    cout << "hello world";
    return 0;
}