#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int binary[8] = {0};
    int value = n;
    if (n<0) { //�B�z�t�ơA�ন�G�ɼ�
        value = 256+n;
    }
    for (int i=7;i>=0;i--){
        binary[i] = value%2;
        value/=2;
    }

    for (int i=0;i<8;i++){
        cout << binary[i];
    }
    cout << endl;
    return 0;
}
