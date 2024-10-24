#include<iostream>
using namespace std;
int main() {
    int n; cin>>n;
    int page=0;
    if(n<10 && n>0) {
        page=n;
    }
    if(n>=10 && n<190) {
       page=9+(n-9)/2;       
    }
    if(n>=190 && n<2890) {
        page=99+(n-189)/3;
    }
    if(n>=2890 && n<38890) {
        page=999+(n-2889)/4;
    }
    if(n>=38890 && n<100000) {
        page=9999+(n-38889)/5;
    }
    cout<<page;
}
