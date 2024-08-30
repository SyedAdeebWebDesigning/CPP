// class

#include <iostream>
using namespace std;

class Student {
    public: void Display(string name) 
    {
        cout << "Student name is " << name << endl;
    }
};

int main()
{
    Student student;
    student.Display("Syed Adeeb");
    return 0;
}

