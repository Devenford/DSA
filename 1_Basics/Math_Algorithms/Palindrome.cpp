#include<iostream>
using namespace std;

int main() {
    int num, temp, rev=0;
    cout<<"\nEnter number: ";
    cin>>num;
    temp = num;
    while(temp>0) {
        rev = rev*10 + temp%10;
        temp/=10;
    }
    if (rev==num) {
        cout<<"It's a palindrome"<<endl;
    }
    else {
        cout<<"It's not a palindrome"<<endl;
    }
    return 0;
}