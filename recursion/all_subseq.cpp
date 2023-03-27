#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void helper(vector<vector<int>> &ans, vector<int> &temp, vector<int> &nums, int n, int index)
    {
        if (index >= n)
        {
            ans.push_back(temp);
            return;
        }

        temp.push_back(nums[index]);
        helper(ans, temp, nums, nums.size(), index + 1);

        temp.pop_back();
        helper(ans, temp, nums, nums.size(), index + 1);
    }

    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> v;

        helper(ans, v, nums, nums.size(), 0);

        return ans;
    }
};

int main()
{
    cout << "hello world";
    return 0;
}