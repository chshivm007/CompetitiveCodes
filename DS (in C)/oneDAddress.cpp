#include <iostream>
using namespace std;

int main() {
    int k, num[5] = {1, 2, 3, 4, 5};
    int *p = num;
    cout << "Enter the index of which you want address" << endl;
  
    for (int k = 0; k < 5; k++) {
        cout << "the Adress at kth Index is " << (p + k) << endl;
        cout << "Value at this Address is " << *(p + k) << endl;
    }
}