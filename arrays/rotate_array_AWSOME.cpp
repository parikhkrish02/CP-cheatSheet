// O(n) O(1)
void rotateArr(int arr[], int d, int n)
{
    reverse(arr, arr + d);

    reverse(arr + d, arr + n);

    reverse(arr, arr + n);
}
