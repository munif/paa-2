#include <iostream>
#include <bitset>

using namespace std;

int main() {
    unsigned short short1 = 4;
    bitset<16> bitset1(short1);   // the bitset representation of 4
    cout << bitset1 << endl;  // 0000000000000100
}
