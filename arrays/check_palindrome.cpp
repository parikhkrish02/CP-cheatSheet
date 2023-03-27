// Time Complexity : O(log(n)) or O(Number of digits in a given number)
// Auxiliary space : O(1) or constant

// to check number is palindrome or not
bool checkPalindrome(int n)
{
    int reverse = 0;
    int temp = n;
    while (temp != 0)
    {
        reverse = (reverse * 10) + (temp % 10);
        temp = temp / 10;
    }
    return (reverse == n); 
}

// to check string is palindrome or not
bool checkPalindrome(string str)
{
    int str_len = str.length();
    for(int i = 0 ; i <str_len/2; i ++)
    {
        if(str[i] != str[str_len - i-1])
            return false;
    }
    return true;
}