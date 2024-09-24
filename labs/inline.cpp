#include <iostream>
using namespace std;

class Inline {
public:
    inline float square(float x) {
        return x * x;
    }

    inline float cube(float x) {
        return x * x * x;
    }
};

int main() {
    Inline obj; 
    cout << "Square of number: " << obj.square(4.0) << endl;
    cout << "Cube of number: " << obj.cube(2.0) << endl;
    return 0;
}
