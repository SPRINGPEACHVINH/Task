#include <iostream>
#include<math.h>
using namespace std;
int count(long long x) {
    int e=0;
    while(x>0) {
        x=x/10;
        e=e+1;
    }
    return e;
}
int BinToDec( int k) {
    long long b=0;
    int j;
    int h; 
    int f=count(k);
    for(j=0; j<f; j++) {
        h=k%10;
        k=k/10;
        b=b+h*pow(2,j);
    }
    return b;
}
int main() {
   long long n;
    cin >> n;
     int octet1=0; int octet2=0; int octet3= 0; int octet4=0;
    for (int i = 31; i >= 24; i--) 
    {
         int k = n >> i;
        if (k & 1)
           octet1=octet1*10+1;
        else
            octet1=octet1*10;
    }
     for (int i = 23; i >= 16; i--) 
    {
         int k = n >> i;
        if (k & 1)
           octet2=octet2*10+1;
        else
            octet2=octet2*10;
    }
     for (int i = 15; i >= 8; i--) 
    {
         int k = n >> i;
        if (k & 1)
           octet3=octet3*10+1;
        else
            octet3=octet3*10;
    }
     for (int i = 7; i >= 0; i--) 
    {
         int k = n >> i;
        if (k & 1)
           octet4=octet4*10+1;
        else
            octet4=octet4*10;
    }

  int d1,d2,d3,d4;
  d1=BinToDec(octet1);
  d2=BinToDec(octet2);
  d3=BinToDec(octet3);
  d4=BinToDec(octet4);
  cout<<d1<<"."<<d2<<"."<<d3<<"."<<d4;
}