#include <bits/stdc++.h>
using namespace std;

int main() {
    int s;
    cin >> s;
    int hundreds = (s/100)%10; 
    int tens = (s/10)%10;
    int ones = s%10;
    cout << "�ʤ� " << hundreds << endl;
    cout << "�̤� " << tens << endl;
    cout << "���� " << ones << endl;
    return 0;
}