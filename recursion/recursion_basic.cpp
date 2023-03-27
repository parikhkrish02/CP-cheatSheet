#include <iostream>

using namespace std;

// 4 Types of Recursion
// 1. Head On
// 2. Tail Rec.
// 3. Paramterized Rec.
// 4. Functional Rec.

// parametrized recursion
void printSum(int arr[], int cnt, int sum)
{
    if (cnt == -1)
    {
        cout << sum << "\n";
        return;
    }

    printSum(arr, cnt - 1, sum + arr[cnt]);
}

// functional recursion
int printSum(int arr[], int cnt)
{
    if (cnt == -1)
        return 0;

    return printSum(arr, cnt - 1) + arr[cnt];
}

// head on recursion
void printNto1(int cnt)
{
    if (cnt == 0)
    {
        return;
    }
    cout << cnt << " ";
    printNto1(--cnt);
}

// tail Recursion (Kind of back Tracking)
void print1toN(int cnt)
{
    if (cnt == 0)
    {
        return;
    }
    print1toN(cnt - 1);
    cout << cnt << " ";
}

int factorial(int no)
{
    if (no == 0)
    {
        return 1;
    }

    return no * factorial(no - 1);
}

void factorial(int counter, int no, int ans)
{
    if (no + 1 == counter)
    {
        return;
    }
    if (counter == 0)
    {
        ans *= 1;
    }
    else
    {
        ans *= counter;
    }

    cout << "Factorial Of " << counter << " is:" << ans << "\n";
    factorial(counter + 1, no, ans);
}

void reverseArr(int arr[], int n, int low)
{
    if (low >= n / 2)
    {
        return;
    }

    arr[low] ^= arr[n - 1 - low];
    arr[n - 1 - low] ^= arr[low];
    arr[low] ^= arr[n - 1 - low];

    reverseArr(arr, n, low + 1);
}

int main()
{
    // int n, k;
    // cin >> n >> k;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // printSum(arr, k - 1, 0);

    // printNto1(5);
    // cout << "\n";
    // print1toN(5);

    // cout << factorial(5);
    // factorial(0, 5, 1);

    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    reverseArr(arr, n, 0);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}