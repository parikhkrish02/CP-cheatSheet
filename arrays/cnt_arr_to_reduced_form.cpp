// Time complexity: O(N * log N)
// Auxiliary Space: O(N)
void convert(vector<int> arr, int n)
{
    vector<int> temp(arr.begin(), arr.end());

    sort(temp.begin(), temp.end());

    unordered_map<int, int> mp;

    int val = 0;
    for (int i = 0; i < n; i++)
        mp[temp[i]] = val++;

    for (int i = 0; i < n; i++)
        arr[i] = mp[arr[i]];
}

// Given Array is
// 10 20 15 12 11 50

// Converted Array is
// 0 4 3 2 1 5