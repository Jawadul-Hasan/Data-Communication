#include<iostream>
#include<string>
using namespace std;

string bitsStuff(string bits) {
    string stuffed = "";
    int count = 0;

    for(char  bit : bits) {
        stuffed += bit;

        if(bit == '1') {
            count++;

            if(count == 5) {
                stuffed += '0';
                count = 0;
            }
        }
        else {
            count = 0;
        }
    }

    return stuffed;
}

string bitsDestuff(string bits) {
    string result = "";
    int count = 0;

    for(int i = 0; i < bits.length(); i++) {
        result += bits[i];

        if(bits[i] == '1') {
            count++;

            if(count == 5) {
                i++;
                count = 0;
            }
        }
        else {
            count = 0;
        }
    }

    return result;
}

int main() {
    string bits;

    cout << "Enter bit: ";
    cin >> bits;

    string stuffed = bitsStuff(bits);
    string destuffed = bitsDestuff(stuffed);
    cout << "Original bits: " << bits << endl;
    cout << "After stuffing: " << stuffed << endl;
    cout << "After De-stuffing: " << destuffed << endl;
    return 0;
}