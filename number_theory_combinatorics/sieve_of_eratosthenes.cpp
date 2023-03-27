// Primes smaller than 100:
// 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97

// Time Complexity: O(n*log(log(n)))
// Auxiliary Space: O(n)
void SieveOfEratosthenes(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}

// Time Complexity : O(sqrt(n))
// Auxiliary Space: O(1)

// below 2 functions find the same as above but very less time

void simpleSieve(int limit, vector<int> &prime)
{
    vector<bool> mark(limit + 1, true);

    for (int p = 2; p * p < limit; p++)
    {
        if (mark[p] == true)
        {
            for (int i = p * p; i < limit; i += p)
                mark[i] = false;
        }
    }

    for (int p = 2; p < limit; p++)
    {
        if (mark[p] == true)
        {
            prime.push_back(p);
            cout << p << " ";
        }
    }
}

void segmentedSieve(int n)
{
    int limit = floor(sqrt(n)) + 1;

    vector<int> prime;
    prime.reserve(limit);

    simpleSieve(limit, prime);

    int low = limit;
    int high = 2 * limit;

    while (low < n)
    {
        if (high >= n)
            high = n;

        bool mark[limit + 1];
        memset(mark, true, sizeof(mark));

        for (int i = 0; i < prime.size(); i++)
        {
            int loLim = floor(low / prime[i]) * prime[i];
            if (loLim < low)
                loLim += prime[i];

            for (int j = loLim; j < high; j += prime[i])
                mark[j - low] = false;
        }

        for (int i = low; i < high; i++)
            if (mark[i - low] == true)
                cout << i << " ";

        low = low + limit;
        high = high + limit;
    }
}