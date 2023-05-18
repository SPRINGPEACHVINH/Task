#include <iostream>
using namespace std;
long long power(long long p, long long q) {
    int m = 1000000007;
    p %= m;
    q %= (m - 1);
    long long kq = 1;
    if (q == 0)
        return 1;
    else {
        while (q > 0) {
            if (q % 2 > 0)
                kq = kq * p % m;
            p = p * p % m;
            q /= 2;
        }
        return kq;
    }
}
int main() {
    long long a, x;
    cin >> a >> x;
    long long result = power(a, x);
    cout << result;
}