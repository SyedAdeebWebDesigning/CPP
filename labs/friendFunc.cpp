// friendFunc

#include <iostream>
using namespace std;

class Demo {
    int a,b;
    public: 
    void getData() {
        cout << "Enter a and b: ";
        cin >> a >> b;
    }

    friend int sum (Demo);
};

int sum (Demo obj) {
    return obj.a + obj.b;
}

int main()
{
    Demo demo;
    demo.getData();
    int result = sum(demo);
    cout << "Result is: " << result << endl;
    return 0;
}