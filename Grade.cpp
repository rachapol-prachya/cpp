// Credit Helper : Kritsada Inthakanok -- Bro take over 100 time to understand 1 if else function
#include <iostream>
using namespace std;

/*
0-49 = 0 
50-54 = 1
55-59 = 1.5
60-64 = 2
65-69 = 2.5
70-74 = 3
75-79 = 3.5
80-100 = 4
*/

int main() {
    int x;
    cout << "Please Enter Your Scores" << endl;
    cout << "------------------------" << endl;
    cin >> x;
    
    if (x <= 49 and x >= 0) {
        cout << "grade 0";
    }
    else if (x >= 50 and x <= 54) {
        cout << "grade 1";
    }
    else if (x >= 55 and x <= 59) {
        cout << "grade 1.5";
    }
    else if (x >= 60 and x <= 64) {
        cout << "grade 2";
    }
    else if (x >= 65 and x <= 69) {
        cout << "grade 2.5";
    }
    else if (x >= 70 and x <= 74) {
        cout << "grade 3";
    }
    else if (x >= 75 and x <= 79) {
        cout << "grade 3.5";
    }
    else if (x >= 80 and x <= 100) {
        cout << "grade 4";
    }
    else if (x <= -1 or x >= 101) {
        cout << "Invalid data, please try agian...";
    }
    return 0;
}
