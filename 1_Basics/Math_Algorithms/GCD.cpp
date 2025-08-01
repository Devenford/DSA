#include<iostream>
using namespace std;

int GCD(int a, int b) {
    if(b==0) {
        return a;
    }
    else {
        return GCD(b, a%b);
    }
}

int main() {
    int a, b;
    cout<<"\nEnter a and b: ";
    cin>>a>>b;
    if (a==0 && b==0) {
        cout<<"GCD is undefined"<<endl;
    }
    else {
        cout<<"GCD: "<<GCD(a, b)<<endl;
    }
    
    return 0;
}