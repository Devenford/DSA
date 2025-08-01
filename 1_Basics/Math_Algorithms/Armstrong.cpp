#include<iostream>
#include<cmath>
#include<string>
using namespace std;

string checkArmstrong(int x) {
    int sum=0, temp=x, n=log10(x)+1;
    while(temp>0) {
        sum += pow(temp%10, n);
        temp/=10;
    }
    if(sum==x) {
        return "true";
    }
    else {
        return "false";
    }
}

int main() {
    int num;
    cout<<"Enter number: ";
    cin>>num;
    cout<<checkArmstrong(num)<<endl;

    return 0;
}