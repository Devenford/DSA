#include<bits/stdc++.h>
using namespace std;

int main() {
    int num, n=0;
    cout<<"\nEnter number: ";
    cin>>num;
    while(num>0) {
        n++;
        num/=10;
    }
    cout<<"Number of digits: "<<n;
    return 0;
}