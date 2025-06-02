#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    double t, b, h;
    cin >> t >> b >> h;
    cout << "Trapezoid area:" << fixed << setprecision(1) << (t + b) * h / 2 << endl;
    return 0;
}
