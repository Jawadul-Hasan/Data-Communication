#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(string bits) {
    int value = 0;

    for(char b : bits) {
        value = value * 2 + (b - '0');
    }

    return value;
}

int main() {
    string a, b, c, d;

    cout << "Enter IPv4 bit binary: ";
    cin >> a >> b >> c >> d;

    cout << "IPv4 in binary: ";
    cout << binaryToDecimal(a) << ".";
    cout << binaryToDecimal(b) << ".";
    cout << binaryToDecimal(c) << ".";
    cout << binaryToDecimal(d);

    return 0;
}