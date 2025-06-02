#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while (n--) {
        int a, b;
        cin >> a >> b;
        cout << fixed << pow(a+b,2) << endl;
    }
    return 0;
}
