#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void helper(vector<vector<int>> &ans, vector<int> &temp, vector<int> &nums, int k, int sum, int index)
    {
        if (index >= nums.size())
        {
            if (sum == k)
            {
                ans.push_back(temp);
            }

            return;
        }

        temp.push_back(nums[index]);
        sum += nums[index];
        helper(ans, temp, nums, k, sum, index + 1);

        temp.pop_back();
        sum -= nums[index];
        helper(ans, temp, nums, k, sum, index + 1);
    }

    vector<vector<int>> subsets(vector<int> &nums, int k)
    {
        vector<vector<int>> ans;
        vector<int> v;

        helper(ans, v, nums, k, 0, 0);

        return ans;
    }
};

int main()
{
    cout << "hello world";
    return 0;
}