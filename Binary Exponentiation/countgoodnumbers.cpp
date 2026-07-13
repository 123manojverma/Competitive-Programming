#include <bits/stdc++.h>
using namespace std;

int countGoodNumbers(long long n)
{
    long long val = 1;
    long long n1 = 5, n2 = 4;
    long long MOD = 1000000007;
    bool odd = n % 2 != 0;
    long long it = n / 2;
    while (it > 0)
    {
        if ((it & 1) == 1)
        {
            val = (val * n1) % MOD;
        }
        n1 = (n1 * n1) % MOD;
        it >>= 1;
    }
    it = n / 2;
    while (it > 0)
    {
        if ((it & 1) == 1)
        {
            val = (val * n2) % MOD;
        }
        n2 = (n2 * n2) % MOD;
        it >>= 1;
    }
    if (odd)
    {
        val = (val * 5) % MOD;
    }
    return (int)val;
}

int main()
{
    long long n;
    cin >> n;
    cout << countGoodNumbers(n);
}