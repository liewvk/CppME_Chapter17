#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    double mark;

public:
    string name;
    int age;

    void setMark(double m)
    {
        mark = m;
    }

    void displayInfo()
    {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
        cout << "Mark : " << mark << endl;
    }
};

int main()
{
    Student s1;

    s1.name = "Brian";
    s1.age = 19;
    s1.setMark(88.5);

    s1.displayInfo();

    return 0;
}
