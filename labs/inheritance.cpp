// Single Inheritance

#include <iostream>
using namespace std;

class Animal
{
protected:
    string name;

public:
    void walk()
    {
        cout << "Walking" << endl;
    }

    void eat()
    {
        cout << "Eating" << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Barking" << endl;
    }
};

int main()
{
    Dog animal;
    animal.walk();
    animal.eat();
    animal.bark();
    return 0;
}