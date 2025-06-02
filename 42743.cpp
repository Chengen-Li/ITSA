#include <bits/stdc++.h>
using namespace std;

int main() {
    int edge1, edge2, edge3;
    cin >> edge1 >> edge2 >> edge3;
    if (edge1 + edge2 > edge3 && edge1 + edge3 > edge2 && edge2 + edge3 > edge1) {
        cout << "fit" << endl;
    } else {
        cout << "unfit" << endl;
    }
    return 0;
}