#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool helper(vector<int> &nums, int k, vector<int> &v, int sum, int i)
    {
        if (i >= nums.size())
        {
            if (sum == k)
            {
                return true;
            }
            return false;
        }

        v.push_back(nums[i]);
        sum += nums[i];
        if (helper(nums, k, v, sum, i + 1))
        {
            return true;
        }

        v.pop_back();
        sum -= nums[i];
        if (helper(nums, k, v, sum, i + 1))
        {
            return true;
        }

        return false;
    }

    vector<int> subsets(vector<int> &nums, int k)
    {
        vector<int> v;

        helper(nums, k, v, 0, 0);
        return v;
    }
};

int main()
{
    cout << "hello world";
    return 0;
}