#include <iostream>
using namespace std;
 
// void search1D (int oneD[]) {
//     cout << "Enter a Digit to Search in 1D Array" << endl;
//     int key; cin >> key;
 
//     int index = -1;
//     for (int i = 0; i < 10; ++i) {
//         if (oneD[i] == key) {
//             cout << "Found Element at Index = " << i << endl;
//             index = i;
//         }
//     }
//     if (index == -1)
//         cout << "Not Found";
// }
 
// void search2D(int twoD[4][4]) {
//     cout << "Enter an Element to be Found \n";
//     int key;
//     cin >> key;
 
//     int i = -1, j = -1;
//     for (int i = 0; i < 4; ++i) {
//         for (int j = 0; j < 4; ++j) {
//             if (twoD[i][j] == key) {
//                 cout << "Element Found at " << i + 1 << "th row and " << j + 1 <<"th column" << endl;
//                 return;
//             }
//         }
//     }
//     if (i == -1)
//         cout << "Element not Found\n";
// }
 
int main() {
    int oneD[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
 
    int twoD[4][4];
    cout << "Enter the Elements of 2D Array" << endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cin >> twoD[i][j];
        }
    }
 
    /*
    int threeD[3][4][2];
    int i,j,k;
    int *p, *q[4], *r[3][4];
 
    p = oneD;
    cout << "Enter Index of 1D Array of the Element to be Accessed" << endl;
    cin >> i;
    cout << "Address of the Given Index is " << (p + i) << endl;
    cout << "Value at the Given Index is " << *(p + i) << endl;
    // 1D Array Address Accessing Completed.. 
 
 
    cout << "Enter Index of 2D Array of the Element to be Accessed" << endl;
    cin >> i >> j;
 
    q[i] = twoD[i];
 
    cout << "Address of the Given Index is " << (q[i] + j) << endl;
    cout << "Value at the Given Index is " << *(q[i] + j) << endl;
 
    cout << "Enter the Elements of 3D Array" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
                for (int k = 0; k < 2; ++k) {
                    cin >> threeD[i][j][k];
                }
        }
    }
 
 
 
    cout << "Enter Index of 3D Array of the Element to be Accessed" << endl;
    cin >> i >> j >> k;
 
    r[i][j] = threeD[i][j];
    cout << "Address of the Given Index is " << ((r[i][j]) + k) << endl;
    cout << "Value at the Given Index is " << *((r[i][j]) + k) << endl;
*/
 
 
}
 
