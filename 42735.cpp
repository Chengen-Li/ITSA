#include <bits/stdc++.h>
using namespace std;

int main() {
    int s;
    cin >> s;
    int hundreds = (s/100)%10; 
    int tens = (s/10)%10;
    int ones = s%10;
    cout << "百元 " << hundreds << endl;
    cout << "十元 " << tens << endl;
    cout << "壹元 " << ones << endl;
    return 0;
}