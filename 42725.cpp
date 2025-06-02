#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int prime=0; 
    for (int i=1;i<=n;i++){ 
        if (n%i==0){
            prime++;
        }
    }
    cout << (prime==2 ? "YES" : "NO") << endl;
    return 0;
}
