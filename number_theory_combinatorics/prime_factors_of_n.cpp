// Time Complexity: O(sqrt(n))

// n = 315
// 3 3 5 7

void primeFactors(int n)
{
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n / 2;
    }

    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
    }

    if (n > 2)
        cout << n << " ";
}