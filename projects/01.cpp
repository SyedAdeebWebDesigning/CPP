#include <iostream>
using namespace std;

class Calculation {
    public: 
    int Addition(int x, int y) {
        return x + y;
    } 

    int Subtract(int x, int y) {
        return x - y;
    }

    int Multiply(int x, int y) {
        return x * y;
    }

    int Divide(int x, int y) {
        if (y == 0) {
            cout << "Error: Division by zero is not allowed." << endl;
            return 0;
        }
        return x / y;
    }
};

int main() {
    int a, b;
    Calculation calc; 

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;


    cout << a << " + " << b << " = " << calc.Addition(a, b) << endl;
    cout << a << " - " << b << " = " << calc.Subtract(a, b) << endl;
    cout << a << " * " << b << " = " << calc.Multiply(a, b) << endl;
    cout << a << " / " << b << " = " << calc.Divide(a, b) << endl;

    return 0;
}
