#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> score(n);
    for (int i=0;i<n;i++){
        cin >> score[i];
        if (score[i]>=90) {
            cout << "優等" << endl;
        } else if (score[i]>=80) {
            cout << "甲等" << endl;
        } else if (score[i]>=70) {
            cout << "乙等" << endl;
        } else if (score[i]>=60) {
            cout << "丙等" << endl;
        } else {
            cout << "不及格" << endl;
        }
    }
    return 0;
}