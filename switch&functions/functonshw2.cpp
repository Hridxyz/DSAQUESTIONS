#include <iostream>
using namespace std;

int setbits(int n, int m)
{
    int count = 0;
    while (n != 0)
    {
        if (n & 1 == 1)
        {
            count++;
        }
        n = n >> 1;
    }
    while (m != 0)
    {
        if (m & 1 == 1)
        {
            count++;
        }
        m = m >> 1;
    }
    return count;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int k = setbits(a, b);
    cout << k;
    return 0;
}