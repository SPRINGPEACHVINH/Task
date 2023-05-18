#include <iostream>
using namespace std;
int main() {
    unsigned long long n; cin>>n;
    int mod=1000000009;
    long long s=0;
    n%=mod;
    s=(((n+3) % mod) * ((n-1) % mod)) % mod;
    cout<<s;
}