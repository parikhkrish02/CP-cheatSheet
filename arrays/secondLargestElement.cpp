class Solution
{
public:
    int print2largest(int arr[], int arr_size)
    {
        int index, i;
        int max = arr[0];
        for (i = 0; i < arr_size; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
                index = i;
            }
        }
        arr[i] = 0;
        int secondMax = arr[0];
        for (int i = 0; i < arr_size; i++)
        {
            if (arr[i] > secondMax && secondMax != max)
            {
                secondMax = arr[i];
            }
        }
        return secondMax;
    }
};