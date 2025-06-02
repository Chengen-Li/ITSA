#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool first = true;
    for (int i=1;i<=n;i++){
        if (i%2!=0){
            if (!first) {
                cout << " ";
            }
            cout<<i;
            first = false;
        }
    }
    cout << endl;
    return 0;
}
