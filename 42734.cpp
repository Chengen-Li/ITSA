#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> score(n);
    for (int i=0;i<n;i++){
        cin >> score[i];
        if (score[i]>=90) {
            cout << "�u��" << endl;
        } else if (score[i]>=80) {
            cout << "�ҵ�" << endl;
        } else if (score[i]>=70) {
            cout << "�A��" << endl;
        } else if (score[i]>=60) {
            cout << "����" << endl;
        } else {
            cout << "���ή�" << endl;
        }
    }
    return 0;
}