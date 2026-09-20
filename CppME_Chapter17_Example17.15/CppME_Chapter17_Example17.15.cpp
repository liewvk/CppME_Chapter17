#include <iostream>
using namespace std;

class Rectangle
{
public:
    double length;
    double width;

    double calculateArea()
    {
        return length * width;
    }
};

int main()
{
    Rectangle r1;

    r1.length = 5;
    r1.width = 4;

    cout << "Area = " << r1.calculateArea() << endl;

    return 0;
}
