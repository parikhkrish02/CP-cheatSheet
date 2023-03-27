// Time Complexity: O(sqrt(n))
// Auxiliary Space : O(1)

// The divisors of 100 are:
// 1 100 2 50 4 25 5 20 10

void printDivisors(int n)
{
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                cout << " " << i;

            else
                cout << " " << i << " " << n / i;
        }
    }
}