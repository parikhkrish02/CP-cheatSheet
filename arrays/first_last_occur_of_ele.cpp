vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> ans = {-1, -1};

    // for first occurence
    int low = 0, mid, high = nums.size() - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;

        if (nums[mid] == target)
        {
            ans[0] = mid;
            high = mid - 1;
        }
        else if (target < nums[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    low = 0, high = nums.size() - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;

        if (target == nums[mid])
        {
            ans[1] = mid;
            low = mid + 1;
        }
        else if (target < nums[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    return ans;
}
