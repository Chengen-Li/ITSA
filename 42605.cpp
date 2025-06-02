#include<bits/stdc++.h>
using namespace std;
int main() {
    int distance;
    cin >> distance;
    double me = 1.0;
    double friendSpeed = 30.0*2.54/100;
    double timeNeeded = distance/(me-friendSpeed);
    int result = static_cast<int>(ceil(timeNeeded));
    cout << result << endl;
    return 0;
}