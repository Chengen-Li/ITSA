#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> score(n);
    for (int i=0;i<n;i++){
        cin >> score[i];
        if (score[i]>=90) {
            cout << "纔单" << endl;
        } else if (score[i]>=80) {
            cout << "ヒ单" << endl;
        } else if (score[i]>=70) {
            cout << "单" << endl;
        } else if (score[i]>=60) {
            cout << "单" << endl;
        } else {
            cout << "ぃの" << endl;
        }
    }
    return 0;
}