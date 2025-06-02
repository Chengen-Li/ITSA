#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> scores(n);
    int maxScore = 0;
    int above900 = 0;
    int between600to700 = 0;
    int totalScore = 0;

    for (int i=0;i<n;i++){
        cin >> scores[i];
        totalScore+=scores[i];

        if (scores[i]>maxScore) {
            maxScore = scores[i];
        }
        if (scores[i]>=900) {
            above900++;
        }
        if (scores[i]>=600 && scores[i]<=700){
            between600to700++;
        }
    }
    double averageScore = static_cast<double>(totalScore) / n;
    cout << maxScore << endl;
    cout << above900 << endl;
    cout << between600to700 << endl;
    cout << fixed << setprecision(1) << averageScore << endl;
    return 0;
}