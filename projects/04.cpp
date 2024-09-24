// Inline Functions

#include <iostream>
using namespace std;

class Inline {
    int num;
    public:

    void getData() {
        cout << "Enter num: ";
        cin >> num;
    }

    inline float square() {
        return num * num;
    }

    inline float cube() {
        return num * num * num;
    }
};

int main() {
    Inline obj; 
    obj.getData();
    cout << "Square of number: " << obj.square() << endl;
    cout << "Cube of number: " << obj.cube() << endl;
    return 0;
}
