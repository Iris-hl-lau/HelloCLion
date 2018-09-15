#include <iostream>
#include "gcd.hpp"

using namespace std;

int gcd(const int a , const int b){

    if(a == b) {
        return a;
    }else {
        if(a > b) {
            for (int i = b; i > 1; i--) {
                if(a%i==0 && b%i==0) {
                    return i;
                }
            }
        } else {
            for (int i = a; i > 1; i--) {
                if(a%i==0 && b%i==0) {
                    return i;
                }
            }
        }
    }
    return 1;
}

int main() {
    const int m = 24;
    const int n = 108;

    const int o = 10;
    const int p = 10;

    const int r = 182;
    const int s = 52;

    const int z = 23;
    const int y = 6;

    cout << "Greatest common denominator: " << gcd(m, n) << endl;
    cout << "Greatest common denominator: " << gcd(p, o) << endl;
    cout << "Greatest common denominator: " << gcd(r, s) << endl;
    cout << "Greatest common denominator: " << gcd(y, z) << endl;

    cout << "Hello from the other side!" << endl;
    return 0;
}