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
        cout << "Name: " << name << endl;
        cout << "Age : " << age << endl;
    }
};

int main()
{
    Student s1;

    s1.name = "Alice";
    s1.age = 20;

    s1.displayInfo();

    return 0;
}
