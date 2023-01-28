#include <iostream>
using namespace std;

int main() {
    /*
    // First Question
    cout << "Enter an Integer" << endl;
    int num; cin >> num;
    cout << "Enter ith Position" << endl;
    int pos; cin >> pos;
    pos = pos - 1;
    num = (num >> pos);
    if (num % 2 == 1)
        cout << "Given Bit is a Set Bit";
    else cout << "Given Bit is not a Set Bit";
    */
    // Second Question
    cout << "Enter Number" << endl;
    unsigned short int num; cin >> num;
    unsigned short int result = num;        // 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
    result = (result >> 4);                 // 0 0 0 0 1 1 1 1 1 1 1 1 1 1 1 1
    result = (result << 11);                // 1 1 1 1 1 0 0 0 0 0 0 0 0 0 0 0
    result = (result >> 11);                // 0 0 0 0 0 0 0 0 0 0 0 1 1 1 1 1 = Required Answer <3
    cout << result;
    
    /*
    // Third Question
    cout << "Enter Number of Rows.. ";
    int num; cin >> num;
    char ch;
    for (int i = 1; i <= num; ++i) {
        ch = 'A' - 1;
        for (int a = i; a < num; ++a) {    // Loop for Spaces 
            cout << "  ";
        }
        for (int j = 1; j <= (2 * i) - 1; ++j) {
            if (j <= i)
                cout << ++ch << " ";
            else cout << --ch << " ";
        }
        cout << endl;
    }
    */


}
