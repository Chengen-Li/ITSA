#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        int x, y;
        cin >> x;
        if (x>=50 && x<=70){
            y=x;
        }
        else{
            y=100;
        }
        cout << y << endl;
    }
    return 0;
}