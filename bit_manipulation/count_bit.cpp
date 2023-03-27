// O(1) O(1)
int countBit(int n)
{
    return __builtin_popcount(n);
}

// O(1) O(1)
int countSetBits(int n)
{
    int count = 0;
    for (int i = 0; i < sizeof(int) * 8; i++)
    {
        if (n & (1 << i))
            count++;
    }
    return count;
}