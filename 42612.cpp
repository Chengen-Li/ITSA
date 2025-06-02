#include <bits/stdc++.h>
using namespace std;

int main() {
    int totalSeconds;
    cin >> totalSeconds;
    int days = totalSeconds/86400;
    totalSeconds%=86400;
    int hours = totalSeconds/3600;
    totalSeconds%=3600;
    int minutes = totalSeconds/60;
    int seconds = totalSeconds%60;
    cout << days << " days" << endl;
    cout << hours << " hours" << endl;
    cout << minutes << " minutes" << endl;
    cout << seconds << " seconds" << endl;
    return 0;
}