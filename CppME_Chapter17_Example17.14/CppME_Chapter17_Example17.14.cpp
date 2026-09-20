#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int age;

    void displayInfo()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main()
{
    Student s1;
    Student s2;

    s1.name = "Alice";
    s1.age = 20;

    s2.name = "David";
    s2.age = 22;

    s1.displayInfo();
    s2.displayInfo();

    return 0;
}
