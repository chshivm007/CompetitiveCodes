#include <iostream>
const int size = 10;
using namespace std;
int stack[size], top = -1;
 
bool isEmpty(int stack[]) {
    if (top == -1)
        return true;
    else return false;
}
 
bool isFull(int stack[]) {
    if (top == size - 1)
        return true;
    else return false;
 
}
 
void push() {
    if (top == size - 1)
        cout << "Already Full... call Pop() to Delete Some" << endl;
    else {
        int n;
        cout << "Enter the Element to be Inserted in Stack" << endl;
        cin >> n;
        stack[top++] = n;
    }
}
 
void pop() {
    if (top == -1)
        cout << "No Elements to Delete.. call push() to Insert Some" << endl;
    else {
        cout << "Deleted Element is " << stack[top] << endl;
        top--;
    }
}
 
void peek() {
    if (top == -1)
        cout << "No Elements Found.. call push() to Insert Some" << endl;
    else cout << stack[top] << endl;
}
 
void printMe() {
    if (top == -1)
        cout << "No Elements Found.. call push() to Insert Some" << endl;
    else {
        cout << "Elements Present in Stack are : " << endl;
        for (int i = top; i >= 0; --i) {
            cout << stack[i] << " ";
        }
    }
}
 
int main() {
    int input = 0;
 
    while (input != 5) {
        cout << "Input your Choice..\n1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\n5.EXIT" << endl;
        cin >> input;
 
        switch(input) {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            printMe();
            break;
        case 5:
            break;
        }
    }
    cout << "Program Terminated";
}
 
