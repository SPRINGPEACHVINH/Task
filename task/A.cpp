#include<iostream>
using namespace std;
int main() {
    int  n; cin>>n;
    int a[n]; int i;
    long long s=0;
    for(i=0; i<n; i++) {
        cin>>a[i];
    }
    int max=a[0]; int min=a[0];
    for(i=0; i<n; i++) {
        if(a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];
         s=s+a[i];
    }
     cout<<s-min<<" "<<s-max;
}