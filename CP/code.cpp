#include <bits/stdc++.h>
using namespace std;

int main () {
    long long num; cin >> num;
    cout << num << " ";
    while (num != 1) {
        if (num % 2 == 0)
            num /= 2;
        else num = 3*num + 1;

        cout << num << " "; 
    }
}