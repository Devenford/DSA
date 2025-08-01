#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int num;
    cout<<"Enter number: ";
    cin>>num;
    if(num<=1) {
        cout<<"Not prime"<<endl;
        return 0;
    }
    for(int i=2; i<=sqrt(num); i++) {
        if(num%i==0) {
            cout<<"Not prime"<<endl;
            return 0;
        }
    }
    cout<<"Is prime"<<endl;

    return 0;
}