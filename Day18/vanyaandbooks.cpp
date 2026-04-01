#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long res = 0;
    long long p = 1;

    for (int i = 0; i < 10; i++) {
        long long start = p;
        long long end = min(n, p * 10 - 1);

        if (start > n) break;

        long long count = end - start + 1;
        res += count * (i + 1);

        p *= 10;
    }

    cout << res;
}