#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a%b; // a埃b緇计
        a = temp;  // 穝ab
    }
    return a; // 程a琌程そ计
}

int main() {
    int m, n;
    cin >> m >> n;
    cout << gcd(m, n) << endl;
    return 0;
}