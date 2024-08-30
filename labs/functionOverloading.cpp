// functionOverloading

#include <iostream>
using namespace std;

class functionOverloading {
    public:
    float addition (float x, float y)
    {
        return x + y;
    }

    float addition (float x, float y, float z) 
    {
        return x + y + z;
    }
};

int main()
{
    functionOverloading overload;
    cout << overload.addition(0.1, 0.2) << endl;
    cout << overload.addition(0.1, 0.2, 0.3) << endl;
    return 0;
}

