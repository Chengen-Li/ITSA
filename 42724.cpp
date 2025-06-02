#include <bits/stdc++.h>
using namespace std;

int main() {
    char ch;
    cin >> ch;
    ch = tolower(ch);
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        cout << "¥À­µ" << endl;
    } else {
        cout << "¤l­µ" << endl;
    }
    return 0;
}
