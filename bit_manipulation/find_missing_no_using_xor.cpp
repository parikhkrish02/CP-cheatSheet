// Time Complexity: O(N)
// Auxiliary Space: O(1)

// 1 MISSING NO
int getMissingNo(int a[], int n)
{
    int x1 = a[0];
    int x2 = 1;

    for (int i = 1; i < n; i++)
        x1 = x1 ^ a[i];

    for (int i = 2; i <= n + 1; i++)
        x2 = x2 ^ i;

    return (x1 ^ x2);
}

// Time Complexity : O(n) 

// 2 MISSING NO
void findTwoMissingNumbers(int arr[], int n)
{
    int XOR = arr[0];
    for (int i = 1; i < n-2; i++)
        XOR ^= arr[i];
    for (int i = 1; i <= n; i++)
        XOR ^= i;
  
    int set_bit_no = XOR & ~(XOR-1);

    for (int i = 0; i < n-2; i++)
    {
        if (arr[i] & set_bit_no)
            x = x ^ arr[i];
        else
            y = y ^ arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (i & set_bit_no)
            x = x ^ i;
        else
            y = y ^ i;
    }
  
    printf("Two Missing Numbers are\n %d %d", x, y);
}