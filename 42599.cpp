#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int m;
        cin >> m;
        int square = m*m;
        int cube = m*m*m;
        cout << m << " " << square << " " << cube << endl;
    }
    return 0;
}