// Time Complexity: O(nloglog(n)) 
// Auxiliary Space: O(n)

void leastPrimeFactor(int n)
{
    vector<int> least_prime(n+1, 0);
 
    least_prime[1] = 1;
 
    for (int i = 2; i <= n; i++)
    {
        if (least_prime[i] == 0)
        {
            least_prime[i] = i;
 
            for (int j = i*i; j <= n; j += i)
                if (least_prime[j] == 0)
                   least_prime[j] = i;
        }
    }
 
    for (int i = 1; i <= n; i++)
        cout << "Least Prime factor of "
             << i << ": " << least_prime[i] << "\n";
}

// Least Prime factor of 1: 1
// Least Prime factor of 2: 2
// Least Prime factor of 3: 3
// Least Prime factor of 4: 2
// Least Prime factor of 5: 5