#include<bits/stdc++.h>
using namespace std;

int main() {
    int weight, height;
    cin >> weight >> height;
    double m = height / 100.0;
    double bmi = weight / (m * m);
    cout << fixed << setprecision(2) << bmi << endl;
    return 0;
}