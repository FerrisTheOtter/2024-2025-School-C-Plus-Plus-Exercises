#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    int num1, num2, num3;

    cout << "inserire un numero" << endl;
    cin >> num1;
    cout << "inserire un numero" << endl;
    cin >> num2;
    cout << "inserire un numero" << endl;
    cin >> num3;
    if (num1 >= num2 && num1 >= num3) {
        if (num2 >= num3) {
            cout << "il numeri dail più piccolo al più grande sono" << num1 << num2 << num3 << endl;
        } else {
            cout << "il numeri dail più piccolo al più grande sono" << num1 << num3 << num2 << endl;
        }
    } else {
        if (num2 >= num3 && num2 >= num1) {
            if (num1 >= num3) {
                cout << "il numeri dail più piccolo al più grande sono" << num2 << num1 << num3 << endl;
            } else {
                cout << "il numeri dail più piccolo al più grande sono" << num2 << num3 << num1 << endl;
            }
        } else {
            if (num3 >= num1 && num3 >= num2) {
                if (num1 >= num2) {
                    cout << "i numeri dail più piccolo al più grande sono" << num3 << num1 << num2 << endl;
                } else {
                    cout << "il numeri dail più piccolo al più grande sono" << num3 << num2 << num1 << endl;
                }
            } else {
                cout << "errore" << endl;
            }
        }
    }
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}
