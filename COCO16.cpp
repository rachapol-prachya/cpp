// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;//
int main() {
    // Write C++ code here
    cout << "Calculator" << endl;
    int op,num1,num2;
    cin >> op;
    if(op==1) {
        cout << "Adder function" << endl;
        cout << "Enter num1 : ";
        cin >> num1;
        cout << endl;
        // num2
        cout << "Enter num2 : ";
        cin >> num2;
        cout << endl;
        cout << "----------------------------" << endl;
        cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
    } else if (op==2) {
        cout << "Subtract Function" << endl;
    } else {
        cout << "Invalid data!" << endl;
    }
    
    return 0;
}
