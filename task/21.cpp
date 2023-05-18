#include <iostream>
using namespace std;
unsigned long long square(unsigned long long x) {
    return x * x;
}
unsigned long long power(unsigned long long n, unsigned long long m) {
    int mod=1000000007;
    n%=mod;
    m%=(mod-1);
    if(m==0) return 1;
    else if(m%2==0) return square(power(n,m/2))%mod;
    else return n*(square(power(n,m/2))%mod)%mod;
}
int main() {
    unsigned long long a,b;
    cin>>a>>b;
    cout<<power(a,b);
}