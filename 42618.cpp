#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int x, y;
        cin >> x >> y;
        if (x > y) swap(x,y);
        int sum = (y-x+1)*(x+y)/2;
        cout << sum << endl;
    }
    return 0;
}
