// Inline Functions

#include <iostream>
using namespace std;

class Inline
{
    int num;

public:
    void setData()
    {
        cout << "Enter num: ";
        cin >> num;
    }

    void getData()
    {
        cout << "Square of number: " << square() << endl;
        cout << "Cube of number: " << cube() << endl;
    }

    Inline()
    {
        setData();
        getData();
    }

    inline float square()
    {
        return num * num;
    }

    inline float cube()
    {
        return num * num * num;
    }
};

int main()
{
    Inline obj;
    return 0;
}
