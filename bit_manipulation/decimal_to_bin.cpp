// only for 32 bit
// O(1) O(1)
int decToBinary(int n)
{
    // Size of an integer is assumed to be 32 bits
    for (int i = 31; i >= 0; i--)
    {
        int k = n >> i;
        if (k & 1)
            cout << "1";
        else
            cout << "0";
    }
}

// for any bit of no
// O(log n) O(1)
int decToBin(int number)
{
    int n = (int)(log2(number));

    // binary output
    // using the inbuilt function
    cout << "the binary number is : " << bitset<64>(number).to_string().substr(64 - n - 1);
}