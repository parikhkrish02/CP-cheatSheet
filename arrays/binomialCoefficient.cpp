//find binomial coefficient (nCk)
int fact(int n)
{
  if (n == 1 || n == 0)
  {
    return 1;
  }
  return n * fact(n - 1);
}

int coeff(int n, int k)
{
  return fact(n) / (fact(k) * fact(n - k));
}