#include <bits/stdc++.h>
using namespace std;

int main() {
    int P;
    cin >> P;
    double totalCost;
    if (P>=100) {
        totalCost=P*70;
    } else if (P>=30) {
        totalCost=P*80;
    } else if (P>=10) {
        totalCost=P*90;
    } else {
        totalCost=P*100;
    }
    cout << fixed << setprecision(0) << totalCost << endl;
    return 0;
}
