#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int maxPrime=0;
    for (int i=n-1;i>1;i--){
        bool isPrime = true;
        for (int j=2;j*j<=i;j++){
            if (i%j==0){
                isPrime=false;
                break;
            }
        }
        if(isPrime){
            maxPrime=i;
            break;
        }
    }
    cout << maxPrime << endl;
    return 0;
}
