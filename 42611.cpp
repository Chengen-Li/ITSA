#include <bits/stdc++.h>
using namespace std;

int main() {
    int T,S;
    double salary=0.0;
    cin >> T >> S;
    if (T <= 60){
        salary = T*S;
    } else if (T <= 120) {
        salary = 60*S+(T-60)*S*1.33;
    } else {
        salary = 60*S+60*S*1.33+(T-120)*S*1.66;
    }
    cout << fixed << setprecision(1) << salary << endl;
    return 0;
}