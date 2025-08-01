#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cout << "\nEnter number: ";
    cin >> num;
    cout << "Number of digits: " << (int)log10(num) + 1;
    return 0;
}