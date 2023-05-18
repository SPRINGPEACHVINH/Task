#include <iostream>
#include <math.h>
#define EPSILON 0.0001f
using namespace std;
int mod=1000000007;
unsigned long long square(unsigned long long x) {
    return x * x;
}
unsigned long long power(unsigned long long n, unsigned long long m) {
    n%=mod;
    m%=(mod-1);
    if(m==0) return 1;
    else if(m%2==0) return square(power(n,m/2))%mod;
    else return n*(square(power(n,m/2))%mod)%mod;
}
long long magic(unsigned long long a, unsigned long long b, unsigned long long c) {
    return (((a%mod)*(b%mod))%mod)*((power(c,mod-2)%mod)%mod+mod)%mod;
}
double supersqrt(long long x) {
       double result = 1.0f;
    while (fabs(result * result - x) / x >= EPSILON)
        result = (x / result  - result) / 2 + result;
    return result; 
}
int main() {
    unsigned long long s1,s2,s3;
    cin>>s1>>s2>>s3;
    long long kq = 0;
    kq = (magic(s1,s2,s3)%mod + magic(s2,s3,s1)%mod + magic(s3,s1,s2)%mod + (2*(s1%mod + s2%mod + s3%mod)%mod)%mod)%mod;
    kq= supersqrt(kq);
    cout<<kq;
}
