#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a%b; // a���Hb���l��
        a = temp;  // ��sa��b
    }
    return a; // �̫᪺a�O�̤j���]��
}

int main() {
    int m, n;
    cin >> m >> n;
    cout << gcd(m, n) << endl;
    return 0;
}